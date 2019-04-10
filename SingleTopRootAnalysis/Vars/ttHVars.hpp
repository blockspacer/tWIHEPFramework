/******************************************************************************
 * ttHVars.hpp                                                                *
 *                                                                            *
 * Add the variables we will use in the BDT to the skim tree                  *
 * 
 * History
 *      12 Dec 2017 - Created by B. Li
 ******************************************************************************/

#ifndef ttHVars_h
#define ttHVars_h

#include "SingleTopRootAnalysis/Base/Dictionary/VarBase.hpp"
#include "SingleTopRootAnalysis/Base/Dictionary/EventContainer.hpp" 
#include "SingleTopRootAnalysis/Particles/Recon/Lepton.hpp"
#include "SingleTopRootAnalysis/Particles/Recon/Tau.hpp"
#include "SingleTopRootAnalysis/Particles/Recon/Jet.hpp"
#include "SingleTopRootAnalysis/Particles/Truth/MCParticle.hpp"
#include "SingleTopRootAnalysis/Particles/Truth/MCJet.hpp"
#include "SingleTopRootAnalysis/Particles/Truth/MCMuon.hpp"
#include "SingleTopRootAnalysis/Particles/Truth/MCElectron.hpp"
#include "SingleTopRootAnalysis/Particles/Truth/MCPhoton.hpp"
#include "TLorentzVector.h"
#include <TEnv.h>

#include "TMVA/Reader.h"
#include "TH2F.h"

class ttHVars: public VarBase {
  
public:
  ttHVars(bool makeHistos = false, bool useTTHLoose = false);
  
  //void BookBranches(TTree * skimTree);
  void FillBranches(EventContainer * evtObj);
  
private:
    bool _useTTHLoose;
    void Clear();

    void Cal_event_variables(EventContainer* EvtObj);
    double getMTlepmet(double phi1, double phi2, double pt1, double pt2);
    double get_Dilep_ttbarMVA(EventContainer* EvtObj);
    double get_Dilep_ttvMVA(EventContainer* EvtObj);
    
    //utils
    double deltaPhi(double phi1, double phi2);

    //2D BDT binning 
    Int_t get_2DBDTBin(double BDT_ttbar, double BDT_ttV, EventContainer* EvtObj);

    std::vector<Lepton> looseLeptons;
    std::vector<Lepton> fakeLeptons;
    std::vector<Lepton> tightLeptons;
    std::vector<Lepton> looseMuons;
    std::vector<Lepton> looseElectrons;
    std::vector<Jet> Jets;
    std::vector<Jet> fwdJets;
    std::vector<Tau> Taus;
    
    std::vector<double> FakeLep_isFromB;
    std::vector<double> FakeLep_isFromC;
    std::vector<double> FakeLep_isFromH;
    std::vector<double> FakeLep_isFromTop;
    std::vector<double> FakeLep_matchId;
    std::vector<double> FakeLep_PdgId;
    std::vector<double> FakeLep_matchIndex;
    std::vector<double> FakeLep_pt;
    std::vector<double> FakeLep_eta;
    std::vector<double> FakeLep_phi;
    std::vector<double> FakeLep_energy;

    std::vector<double> Jet25_isFromH;
    std::vector<double> Jet25_isFromTop;
    std::vector<double> Jet25_matchId;
    std::vector<double> Jet25_matchIndex;
    std::vector<double> Jet25_pt;
    std::vector<double> Jet25_eta;
    std::vector<double> Jet25_phi;
    std::vector<double> Jet25_energy;

    Int_t Jet_numbLoose;
    Int_t Jet_numbMedium;
    Int_t Jet_numLoose;
    Double_t ttbarBDT_2lss;
    Double_t ttvBDT_2lss;
    Int_t Bin2l;
    Int_t SourceNumber;
    Double_t leadLep_jetdr;
    Double_t leadLep_corrpt;
    Double_t leadLep_jetcsv;
    Double_t leadLep_BDT;
    Double_t secondLep_jetdr;
    Double_t secondLep_corrpt;
    Double_t secondLep_jetcsv;
    Double_t thirdLep_jetcsv;
    Double_t secondLep_BDT;
    Double_t maxeta;
    Double_t Mt_metleadlep;
    Double_t SubCat2l;
    Double_t massll;
    Double_t Sum2lCharge;
    float Dilep_bestMVA;
    float Dilep_worseMVA;
    float Dilep_pdgId;
    float Dilep_htllv;
    Double_t Dilep_mtWmin;
    float Dilep_nTight;
    Double_t leadJetCSV;
    Double_t secondJetCSV;
    Double_t thirdJetCSV;
    Double_t fourthJetCSV;
    Double_t HighestJetCSV;
    Double_t HtJet;
    Double_t nLepFO;
    Double_t nLepTight;
    Double_t minMllAFAS;
    Double_t minMllAFOS;
    Double_t minMllSFOS;
    Double_t Hj_tagger_resTop;
    Double_t Hj_tagger_hadTop;
    Double_t leadLep_isMatchRightCharge;
    Double_t leadLep_mcMatchId;
    Double_t leadLep_isFromTop;
    Double_t leadLep_isFromH;
    Double_t leadLep_isFromB;
    Double_t leadLep_isFromC;
    Double_t leadLep_mcPromptGamma;
    Double_t leadLep_mcPromptFS;
    Double_t secondLep_isMatchRightCharge;
    Double_t secondLep_mcMatchId;
    Double_t secondLep_isFromTop;
    Double_t secondLep_isFromH;
    Double_t secondLep_isFromB;
    Double_t secondLep_isFromC;
    Double_t secondLep_mcPromptGamma;
    Double_t secondLep_mcPromptFS;

  long nEvent;
  int mu1_mediumID;
  int mu1_isfakeablesel;
  int mu1_ismvasel;
  int mu2_mediumID;
  int mu2_isfakeablesel;
  int mu2_ismvasel;
  int ele1_isfakeablesel;
  int ele1_ismvasel;
  int ele1_isChargeConsistent;
  int ele1_passesConversionVeto;
  int ele2_isfakeablesel;
  int ele2_ismvasel;
  int ele2_isChargeConsistent;
  int ele2_passesConversionVeto;
  /*
  bool mu1_mediumID;
  bool mu1_isfakeablesel;
  bool mu1_ismvasel;
  bool mu2_mediumID;
  bool mu2_isfakeablesel;
  bool mu2_ismvasel;
  bool ele1_isfakeablesel;
  bool ele1_ismvasel;
  bool ele1_isChargeConsistent;
  bool ele1_passesConversionVeto;
  bool ele2_isfakeablesel;
  bool ele2_ismvasel;
  bool ele2_isChargeConsistent;
  bool ele2_passesConversionVeto;
  */
  int ls;
  int run;
  int n_presel_mu;
  int n_fakeablesel_mu;
  int n_mvasel_mu;
  int n_presel_ele;
  int n_fakeablesel_ele;
  int n_mvasel_ele;
  int n_presel_tau;
  int n_presel_jet;
  int n_presel_jetFwd;
  int nLightJet;
  int mu1_charge;
  int mu1_jetNDauChargedMVASel;
  int mu2_charge;
  int mu2_jetNDauChargedMVASel;
  int ele1_charge;
  int ele1_jetNDauChargedMVASel;
  int ele1_nMissingHits;
  int ele2_charge;
  int ele2_jetNDauChargedMVASel;
  int ele2_nMissingHits;
  int tau1_charge;
  int tau1_decayModeFindingOldDMs;
  int tau1_decayModeFindingNewDMs;
  int tau1_byLooseCombinedIsolationDeltaBetaCorr3Hits;
  int tau1_byMediumCombinedIsolationDeltaBetaCorr3Hits;
  int tau1_byTightCombinedIsolationDeltaBetaCorr3Hits;
  int tau1_byLooseCombinedIsolationDeltaBetaCorr3HitsdR03;
  int tau1_byMediumCombinedIsolationDeltaBetaCorr3HitsdR03;
  int tau1_byTightCombinedIsolationDeltaBetaCorr3HitsdR03;
  int tau1_byLooseIsolationMVArun2v1DBdR03oldDMwLT;
  float tau1_rawMVArun2v1DBdR03oldDMwLT;
  int tau1_byVLooseIsolationMVArun2v1DBdR03oldDMwLT;
  int tau1_byMediumIsolationMVArun2v1DBdR03oldDMwLT;
  int tau1_byTightIsolationMVArun2v1DBdR03oldDMwLT;
  int tau1_byVTightIsolationMVArun2v1DBdR03oldDMwLT;
  int tau2_charge;
  int tau2_decayModeFindingOldDMs;
  int tau2_decayModeFindingNewDMs;
  int tau2_byLooseCombinedIsolationDeltaBetaCorr3Hits;
  int tau2_byMediumCombinedIsolationDeltaBetaCorr3Hits;
  int tau2_byTightCombinedIsolationDeltaBetaCorr3Hits;
  int tau2_byLooseCombinedIsolationDeltaBetaCorr3HitsdR03;
  int tau2_byMediumCombinedIsolationDeltaBetaCorr3HitsdR03;
  int tau2_byTightCombinedIsolationDeltaBetaCorr3HitsdR03;
  float tau2_byLooseIsolationMVArun2v1DBdR03oldDMwLT;
  int tau2_rawMVArun2v1DBdR03oldDMwLT;
  int tau2_byVLooseIsolationMVArun2v1DBdR03oldDMwLT;
  int tau2_byMediumIsolationMVArun2v1DBdR03oldDMwLT;
  int tau2_byTightIsolationMVArun2v1DBdR03oldDMwLT;
  int tau2_byVTightIsolationMVArun2v1DBdR03oldDMwLT;
  float mu1_pt;
  float mu1_conept;
  float mu1_eta;
  float mu1_phi;
  float mu1_E;
  float mu1_miniRelIso;
  float mu1_miniIsoCharged;
  float mu1_miniIsoNeutral;
  float mu1_jetPtRel;
  float mu1_jetPtRatio;
  float mu1_jetCSV;
  float mu1_jetDeepCSV;
  float mu1_jetDeepJet;
  float mu1_dxy;
  float mu1_isGenMatched;
  float mu1_sip3D;
  float mu1_dxyAbs;
  float mu1_dz;
  float mu1_segmentCompatibility;
  float mu1_leptonMVA;
  float mu1_dpt_div_pt;
  float mu2_pt;
  float mu2_conept;
  float mu2_eta;
  float mu2_phi;
  float mu2_E;
  float mu2_miniRelIso;
  float mu2_miniIsoCharged;
  float mu2_miniIsoNeutral;
  float mu2_jetPtRel;
  float mu2_jetPtRatio;
  float mu2_jetCSV;
  float mu2_jetDeepCSV;
  float mu2_jetDeepJet;
  float mu2_dxy;
  float mu2_isGenMatched;
  float mu2_sip3D;
  float mu2_dxyAbs;
  float mu2_dz;
  float mu2_segmentCompatibility;
  float mu2_leptonMVA;
  float mu2_dpt_div_pt;
  float ele1_pt;
  float ele1_conept;
  float ele1_eta;
  float ele1_phi;
  float ele1_E;
  float ele1_miniRelIso;
  float ele1_miniIsoCharged;
  float ele1_miniIsoNeutral;
  float ele1_jetPtRel;
  float ele1_jetPtRatio;
  float ele1_jetCSV;
  float ele1_jetDeepCSV;
  float ele1_jetDeepJet;
  float ele1_dxy;
  float ele1_isGenMatched;
  float ele1_sip3D;
  float ele1_dxyAbs;
  float ele1_dz;
  float ele1_ntMVAeleID;
  float ele1_leptonMVA;
  float ele2_pt;
  float ele2_conept;
  float ele2_eta;
  float ele2_phi;
  float ele2_E;
  float ele2_miniRelIso;
  float ele2_miniIsoCharged;
  float ele2_miniIsoNeutral;
  float ele2_jetPtRel;
  float ele2_jetPtRatio;
  float ele2_jetCSV;
  float ele2_jetDeepCSV;
  float ele2_jetDeepJet;
  float ele2_dxy;
  float ele2_isGenMatched;
  float ele2_sip3D;
  float ele2_dxyAbs;
  float ele2_dz;
  float ele2_ntMVAeleID;
  float ele2_leptonMVA;
  float tau1_pt;
  float tau1_eta;
  float tau1_phi;
  float tau1_E;
  float tau1_dxy;
  float tau1_dz;
  float tau1_byCombinedIsolationDeltaBetaCorr3Hits;
  float tau2_pt;
  float tau2_eta;
  float tau2_phi;
  float tau2_E;
  float tau2_dxy;
  float tau2_dz;
  float tau2_byCombinedIsolationDeltaBetaCorr3Hits;
  float jet1_pt;
  float jet1_eta;
  float jet1_phi;
  float jet1_E;
  float jet1_CSV;
  float jet1_DeepCSV;
  float jet1_DeepJet;
  float jet1_QGdiscr;
  float jet2_pt;
  float jet2_eta;
  float jet2_phi;
  float jet2_E;
  float jet2_CSV;
  float jet2_DeepCSV;
  float jet2_DeepJet;
  float jet2_QGdiscr;
  float jet3_pt;
  float jet3_eta;
  float jet3_phi;
  float jet3_E;
  float jet3_CSV;
  float jet3_DeepCSV;
  float jet3_DeepJet;
  float jet3_QGdiscr;
  float jet4_pt;
  float jet4_eta;
  float jet4_phi;
  float jet4_E;
  float jet4_CSV;
  float jet4_DeepCSV;
  float jet4_DeepJet;
  float jet4_QGdiscr;
  float jet5_pt;
  float jet5_eta;
  float jet5_phi;
  float jet5_E;
  float jet5_CSV;
  float jet5_DeepCSV;
  float jet5_DeepJet;
  float jet5_QGdiscr;
  float jet6_pt;
  float jet6_eta;
  float jet6_phi;
  float jet6_E;
  float jet6_CSV;
  float jet6_DeepCSV;
  float jet6_DeepJet;
  float jet6_QGdiscr;
  float jet7_pt;
  float jet7_eta;
  float jet7_phi;
  float jet7_E;
  float jet7_CSV;
  float jet7_DeepCSV;
  float jet7_DeepJet;
  float jet7_QGdiscr;
  float jet8_pt;
  float jet8_eta;
  float jet8_phi;
  float jet8_E;
  float jet8_CSV;
  float jet8_DeepCSV;
  float jet8_DeepJet;
  float jet8_QGdiscr;
  float PFMET;
  float PFMETphi;
  float MHT;
  float metLD;
  float lep1_conePt;
  float lep2_conePt;
  float mindr_lep1_jet;
  float mindr_lep2_jet;
  float mT_lep1;
  float avg_dr_jet;
  float mvaOutput_2lss_ttV;
  float mvaOutput_2lss_ttbar;
  float lep3_conePt;
  float mindr_lep3_jet;
  float min_dr_lep_jet;
  float dr_leps;
  float max_lep_eta;
  float mT_lep2;
  float mbb;
  float mbb_loose;
  float Hj_tagger;
  float HTT;
  int nBJetLoose;
  int nBJetMedium;
  float mu1_PFRelIso04;
  float mu2_PFRelIso04;
  float ele1_PFRelIso04;
  float ele1_sigmaEtaEta;
  float ele1_HoE;
  float ele1_deltaEta;
  float ele1_deltaPhi;
  float ele1_OoEminusOoP;
  float ele2_PFRelIso04;
  float ele2_sigmaEtaEta;
  float ele2_HoE;
  float ele2_deltaEta;
  float ele2_deltaPhi;
  float ele2_OoEminusOoP;

  // variables for plots
  float Dilep_worseIso;
  float Dilep_worseSip;
  float mass3L;
  float Trilep_mtWmin;
  float SubCat3L;
  float Sum3LCharge;
  float Trilep_n_mu;
  float Trilep_nTight;
  float Trilep_n_ele;
  float Trilep_bestMVA;
  float Trilep_worseIso;
  float Trilep_worseMVA;
  float Trilep_worseSip;
  float Dilep_worsedz;
  float thirdLep_isMatchRightCharge;
  float thirdLep_mcMatchId;
  float thirdLep_isFromTop;
  float thirdLep_isFromH;
  float thirdLep_isFromB;
  float thirdLep_isFromC;
  float thirdLep_mcPromptGamma;
  float thirdLep_mcPromptFS;
  float lep3_BDT;
  float lep1_charge;
  float lep1_dxy;
  float lep1_dz;
  float lep1_mvaId;
  float lep1_eta;
  float lep1_minIso;
  float lep1_minIsoCh;
  float lep1_minIsoNeu;
  float lep1_pdgId;
  float lep1_pt;
  float lep1_phi;
  float lep1_ptratio;
  float lep1_ptrel;
  float lep1_segment;
  float lep1_sig3d;
  float lep1_lostHits;
  float lep1_relIso04;
  float lep1_relIso03;
  float lep1_TightCharge;
  float lep1_passConv;
  float lep2_charge;
  float lep2_dxy;
  float lep2_dz;
  float lep2_mvaId;
  float lep2_eta;
  float lep2_minIso;
  float lep2_minIsoCh;
  float lep2_minIsoNeu;
  float lep2_pdgId;
  float lep2_pt;
  float lep2_phi;
  float lep2_ptratio;
  float lep2_ptrel;
  float lep2_segment;
  float lep2_sig3d;
  float lep2_lostHits;
  float lep2_relIso04;
  float lep2_relIso03;
  float lep2_TightCharge;
  float lep2_passConv;
  float lep3_charge;
  float lep3_dxy;
  float lep3_dz;
  float lep3_mvaId;
  float lep3_eta;
  float lep3_minIso;
  float lep3_minIsoCh;
  float lep3_minIsoNeu;
  float lep3_pdgId;
  float lep3_pt;
  float lep3_phi;
  float lep3_ptratio;
  float lep3_ptrel;
  float lep3_segment;
  float lep3_sig3d;
  float lep3_lostHits;
  float lep3_relIso04;
  float lep3_relIso03;
  float lep3_TightCharge;
  float lep3_passConv;
  float lep1_E;
  float lep1_isfakeablesel;
  float lep1_ismvasel;
  float lep2_E;
  float lep2_isfakeablesel;
  float lep2_ismvasel;
  float lep3_E;
  float lep3_isfakeablesel;
  float lep3_ismvasel;
  float genWeight_muF2;
  float genWeight_muF0p5;
  float genWeight_muR2;
  float genWeight_muR0p5;
};

#endif
