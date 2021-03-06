/******************************************************************************
 * EventWeight.hpp                                                            *
 *                                                                            *
 * Weight events in the histograms                                            *
 *                                                                            *
 * This class is derived from the BaseCut Class and simply                    *
 * cuts on if the event has reconstructed objects                             *
 *                                                                            *
 * Derived from HistoCut which is in turn derived from BaseCut                *
 *                                                                            *
 * Public Member Functions of AnalysisMain class                              *
 *    EventWeight()                     -- Parameterized Constructor          *
 *    ~EventWeight()                    -- Destructor                         *
 *    BookHistogram()                   -- Book histograms of weights         *
 *    Apply()                           -- Apply weight and fill histograms   *
 *    GetCutName()                      -- Returns "EventWeight"              *
 *                                                                            *
 * Private Data Members of AnalysisMain class                                 *
 *    myTH1F* _hTreeWeight              -- Histogram of Input Tree Weights    *
 *    myTH1F* _hGlobalWeight            -- Histogram of Global Weights        *
 *    myTH1F* _hOutputWeight            -- Histogram of Output Weights        *
 *                                                                            *
 * History                                                                    *
 *     28 Apr 2005 - Created by R. Schwienhorst at D0                         *
 *      7 Nov 2006 - Modified by R. Schwienhorst for ATLAS                    *
 *      9 Nov 2006 - Modified by P. Ryan - cleanup and reorganized            *
 *****************************************************************************/

#ifndef EventWeight_h
#define EventWeight_h

#include "SingleTopRootAnalysis/Base/Dictionary/HistoCut.hpp"
#include "SingleTopRootAnalysis/Base/Dictionary/EventContainer.hpp"
#include "SingleTopRootAnalysis/Base/Dictionary/BTagEntry.hpp"
#include "SingleTopRootAnalysis/Base/Dictionary/BTagCalibration.hpp"
#include "SingleTopRootAnalysis/Base/Dictionary/BTagCalibrationReader.hpp"
//#include "externaltools/pileup/PileupReweighting/TPileupReweighting.h"
#include <TGraphAsymmErrors.h>


class EventWeight : public HistoCut
{

public:

  // Parameterized Constructor
  EventWeight(EventContainer *obj, Double_t TotalMCatNLOEvents = 0,const std::string& MCtype="none", Bool_t pileup = false, Bool_t reCalPU = false, Bool_t bWeight = false, Bool_t useLeptonSFs = kFALSE, Bool_t usebTagReshape = kFALSE, Bool_t useChargeMis = false, Bool_t useFakeRate = false, Bool_t useTriggerSFs = false , Bool_t usePrefire = kFALSE, Int_t whichTrig = 5, Bool_t verbose = kFALSE);
  
  // Default Destructor
  ~EventWeight();

  // Book Histograms
  void BookHistogram(void );
  
  // Apply weight and fill histograms
  Bool_t Apply();

  Double_t PileupAdjust(int eventNumber = 0, int runnumber = 0);

  // methods for weighting for MC generatd with MCatNLO
  void setMCatNLO(Bool_t val=true) { _useMCatNLO=val; };
  void setPileUpWgt(Bool_t val=true) { _usePileUpWgt=val; };
  void setPileUpSyst(Bool_t val=false) { _doPileupSysts=val; };
  void setbWeight(Bool_t val=true) { _usebWeight=val; };
  void setChargeMis(Bool_t val=true) { _useChargeMis=val; };
  void setFakeRate(Bool_t val=true) { _useFakeRate=val; };
  void setTriggerSFs(Bool_t val=true) { _useTriggerSFs=val; };
  void setPrefire(Bool_t val=true) { _usePrefire=val; };
  Bool_t isMCatNLO() const { return _useMCatNLO; };
  Bool_t isPileUpWgt() const { return _usePileUpWgt; };
  Bool_t isPileupSysts() const { return _doPileupSysts; };
  Bool_t isbWeight() const { return _usebWeight; };
  Bool_t isTriggerSFs() const { return _useTriggerSFs; };
  Bool_t isChargeMis() const { return _useChargeMis; };
  Bool_t isPrefire() const { return _usePrefire; };
  Bool_t isFakeRate() const { return _useFakeRate; };

    // methods for weighting for MC generatd with NoWeight
  void setNoWeight(Bool_t val=true) { _useNoWeight=val; };
  Bool_t isNoWeight() const { return _useNoWeight; };
  
  // Get the name describing the cut
  inline std::string GetCutName() { return "EventWeight"; };

 void SetTotalMCatNLOEvents(Double_t evm) { _totalMCatNLOEvents=evm; };
private:
  //  vector<double> vecPileUpWgt;  // vector to store vertex Pile up reweighting weights
  Bool_t _useMCatNLO;  // set to true if this MC is MC@NLO and we need to use the corresponding weight
  Bool_t _usePileUpWgt;  // set to true if this MC is MC@NLO and we need to use the corresponding weight
  Bool_t _reCalPU;  // set to true if this MC is MC@NLO and we need to use the corresponding weight
  Bool_t _doPileupSysts; // set to true if including the systematic uncertainties associated with pileup reweighting in the output file 
  Bool_t _usebWeight;  // set to true if using b-tag weights
  Bool_t _useNoWeight;  //No weight except MCatNLO weight
  Bool_t _useLeptonSFs; // Use lepton SFs. Needs to be configured in the overall config file
  Bool_t _usebTagReshape; // Do CSV discriminant reshaping
  Bool_t _useChargeMis; // set to true if we Use ChargeMis Weighting.
  Bool_t _usePrefire; // set to true if we Use Prefire Weighting.
  Bool_t _useFakeRate; // set to true if we Use FakeRate Weighting.
  Bool_t _useTriggerSFs; // set to true if we Use TriggerSFs Weighting.
  Int_t _whichTrigger;//2:mm;3:ee;4:em;5:2l
  // Histograms
  myTH1F* _hTreeWeight;   // Histogram of input tree weights
  myTH1F* _hGlobalWeight; // Histogram of global weights
  myTH1F* _hMCatNLOWeight; // Histogram of MCatNLO weight
  myTH1F* _hPileUpWeight; // Histogram of PileUpWgt weight
  myTH1F* _hbWeight; // Histogram of b weight
  myTH1F* _hChargeMis; // Histogram of charge misMeasurement
  myTH1F* _hPrefire; // Histogram of charge misMeasurement
  myTH1F* _hFakeRate; // Histogram of Lepton Fake Rate
  myTH1F* _hTriggerSFs; // Histogram of Trigger Sfs
  myTH1F* _hLeptonSFWeight; //Histogram of the lepton SF claculated for the event
  myTH1F* _helelooseSFWeight; //Histogram of the lepton SF claculated for the event
  myTH1F* _heletightSFWeight; //Histogram of the lepton SF claculated for the event
  myTH1F* _hmulooseSFWeight; //Histogram of the lepton SF claculated for the event
  myTH1F* _hmutightSFWeight; //Histogram of the lepton SF claculated for the event
  std::map<std::string,myTH1F*> _hbTagReshape; //Map of histograms containing the information for b tag reshaping and its associated systematics
  std::map<std::string,myTH1F*> _hefrReweight; //Map of histograms containing the information for b tag reshaping and its associated systematics
  std::map<std::string,myTH1F*> _hmfrReweight; //Map of histograms containing the information for b tag reshaping and its associated systematics
  myTH1F* _hGenWeight; //Histogram of the gen weight for the event
  myTH1F* _hOutputWeight; // Histogram of output weights
  Double_t _totalMCatNLOEvents;
  BTagCalibration _bTagCalib;
  BTagCalibrationReader _bTagCalibReader;

  //Histograms that are used for applying charge mismeasurement weight
  TH2F* _chargeMis;
  //Histograms that are used for applying lepton fake rate weight
  std::map<std::string,TH2F*> _MuonFakeRate;
  std::map<std::string,TH2F*> _ElectronFakeRate;

  
  //Histograms that are used for applying scale factors to leptons
  //For now we are only using muons as we veto on electroons anyway
  TH2F* _muonIsoSF=NULL;
  TH2F* _muonIDSFLpt=NULL;
  TH2F* _muonIDSFHpt=NULL;
  TH2F* _muonTrigSF=NULL;
  TGraphAsymmErrors* _muonTkSFLpt=NULL;
  TGraphAsymmErrors* _muonTkSFHpt=NULL;
  TH2F* _muonLooseToTightSF=NULL;
  TH2F* _eleRecoSFLpt=NULL;
  TH2F* _eleRecoSFHpt=NULL;
  TH2F* _eleID1SF=NULL;
  TH2F* _eleID2SF=NULL;
  TH2F* _eleID3SF=NULL;
  TH2F* _eleLooseToTightSF=NULL;

  //Pileup reweighting hisotgrams
  TH1D* _dataPV;
  TH1D* _mcPV;
  //Pileup reweighting systematic histograms
  TH1D* _minBiasUpPV;
  TH1D* _minBiasDownPV;

  //For debugging
  Bool_t _verbose;

  std::vector<std::string> _bTagSystNames;
  std::map<std::string,float> _bTagSystValues;

  std::vector<std::string> _frSystNames;
  std::map<std::string,float> _frSystValues;
  
  // LeptonSFs
  std::tuple<Double_t,Double_t,Double_t, Double_t, Double_t, Double_t,Double_t,Double_t,Double_t, Double_t,Double_t,Double_t,Double_t, Double_t,Double_t> getLeptonWeight(EventContainer * EventContainerObj);
  //void setLeptonHistograms(TString muonIDFileName, TString muonIDHistName, TString muonIsoFileName, TString muonIsoHistName, TString muonTrigFileName, TString muonTrigHistName, TString muonTkFileName, TString muonTKGraphName, TString eleRecoFileName, TString eleRecoHistName, TString eleIDFileName, TString eleID_1_HistName, TString eleID_2_HistName, TString eleID_3_HistName, TString muonLooseToTightFileName, TString muonLooseToTightHistName, TString eleLooseToTightFileName, TString eleLooseToTightHistName);
  void setLeptonHistograms(TString muonIDFileName, TString muonIDHistName, TString muonIsoFileName, TString muonIsoHistName, TString muonTrigFileName, TString muonTrigHistName, TString muonTkFileName, TString eleRecoFileName, TString eleRecoHistName, TString eleIDFileName, TString eleID_1_HistName, TString eleID_2_HistName, TString eleID_3_HistName, TString muonLooseToTightFileName, TString muonLooseToTightHistName, TString eleLooseToTightFileName, TString eleLooseToTightHistName);
  // ChargeMis
  std::tuple<Double_t,Double_t,Double_t> getChargeMisWeight(EventContainer * EventContainerObj);
  void setChargeMisHistograms(TString ChargeMisFileName,TString ChargeMisHistName);
  // FakeRate
  Double_t getFakeRateWeight(EventContainer * EventContainerObj, std::string muSystName="central", std::string eleSystName="central");
  void setFakeRateHistograms(TString FakeRateFileName,TString FakeRateMuonHistName, TString FakeRateElectronHistName, std::string muSystName="central", std::string eleSystName="central");
  // Trigger Sfs
  std::tuple<Double_t,Double_t,Double_t> getTriggerWeight(EventContainer* EventContainerObj);
  
  // BTagReshape
  Double_t getBTagReshape(EventContainer * EventContainerObj, std::string systName = "central");

 //Root::TPileupReweighting* PileupReweighting;

};


#endif







