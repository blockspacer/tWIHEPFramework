/******************************************************************************
 * CutLeptonSumCharge.hpp                                                             *
 *                                                                            *
 * Cuts on lepton Number (can cut on All, UnIsolated, Tight, or Veto Leptons) *
 * Must pass All, UnIsolated, Tight, or Veto to constructor                   *
 *                                                                            *
 * Derived from HistoCut which is in turn derived from BaseCut                *
 *                                                                            *
 *                                                                            *
 * Public Member Functions of CutLeptonSumCharge class                                *
 *    CutLeptonSumCharge()                     -- Parameterized Constructor           *
 *    ~CutLeptonSumCharge()                    -- Destructor                          *
 *    BookHistogram()                -- Book histograms                       *
 *    Apply()                        -- Apply cuts and fill histograms        *
 *    GetCutName()                   -- Returns "CutLeptonSumCharge"                  *
 *                                                                            *
 * Private Data Members of CutLeptonSumCharge class                                   *
 *    myTH1F* _hLeptonNumberBefore;    -- Hist lepton Number before cut       *
 *    myTH1F* _hLeptonNumberAfter;     -- Hist lepton Number of jets after cut*
 *                                                                            *
 *    Int_t _LeptonNumberMin;          -- Minimum Lepton Number               *
 *    Int_t _LeptonNumberMax;          -- Maximum Lepton Number               *
 *                                                                            *
 * History                                                                    *
 *      24 Mar 2009 - Created by P. Ryan                                      *
 *****************************************************************************/

#include "SingleTopRootAnalysis/Cuts/Lepton/CutLeptonSumCharge.hpp"
#include<iostream>

using namespace std;

/*********************************************************************************
 * CutLeptonSumCharge::CutLeptonSumCharge(EventContainer *EventContainerObj, TString leptonType) *
 *                                                                               *
 * Parameterized Constructor                                                     *
 *                                                                               *
 * Input:  Event Object class                                                    *
 * Output: None                                                                  *
 ******************************************************************************/
CutLeptonSumCharge::CutLeptonSumCharge(EventContainer *EventContainerObj, TString leptonTypePassed, Int_t whichTrig)
{
  // Check leptonType parameter
  if( leptonTypePassed.CompareTo("All") && leptonTypePassed.CompareTo("UnIsolated") && leptonTypePassed.CompareTo("Isolated") && 
      leptonTypePassed.CompareTo("Tight") && leptonTypePassed.CompareTo("Veto")
      && leptonTypePassed.CompareTo("TTHFake")
       ){
    std::cout << "ERROR " << "<CutLeptonSumCharge::CutLeptonSumCharge()> " 
	      << "Must pass All, Tight, Veto, Isolated, TTHFake or UnIsolated to constructor" << std::endl;
    exit(8);
  } //if
  leptonType = leptonTypePassed;
  _whichTrig = whichTrig;
  if(_whichTrig < 6){
    std::cout << "ERROR " << "<CutLeptonSumCharge::CutLeptonSumCharge()> " 
	      << "Must pass whichTrig 6 or 7 to constructor" << std::endl;
    exit(8);
  }

  // Set Event Container
  SetEventContainer(EventContainerObj);
} // CutLeptonSumCharge


/******************************************************************************
 * CutLeptonSumCharge::~CutLeptonSumCharge()                                                  *
 *                                                                            *
 * Destructor                                                                 *
 *                                                                            *
 * Input:  None                                                               *
 * Output: None                                                               *
 ******************************************************************************/
CutLeptonSumCharge::~CutLeptonSumCharge()
{
  
}//~CutLeptonSumCharge

/******************************************************************************
 * void CutLeptonSumCharge::BookHistogram()                                           *
 *                                                                            *
 * Book Histograms                                                            *
 *                                                                            *
 * Input:  None                                                               *
 * Output: None                                                               *
 ******************************************************************************/
void CutLeptonSumCharge::BookHistogram(){
  
  // ***********************************************
  // Make Strings for histogram titles and labels
  // ***********************************************  

  // Histogram Before Cut
 
  std::ostringstream histNameBeforeStream;
  if(_whichTrig==6){
    histNameBeforeStream << leptonType << "TrileptonSumChargeBefore";
  }else if(_whichTrig==7){
    histNameBeforeStream << leptonType << "QualeptonSumChargeBefore";
  }
  TString histNameBefore = histNameBeforeStream.str().c_str();

  std::ostringstream histTitleBeforeStream;
  if(_whichTrig==6){
    histTitleBeforeStream << leptonType << "Trilepton SumCharge Before Cut";
  }else if(_whichTrig==7){
    histTitleBeforeStream << leptonType << "Qualepton SumCharge Before Cut";
  }
  TString histTitleBefore = histTitleBeforeStream.str().c_str();

  // Histogram After Cut
  std::ostringstream histNameAfterStream;
  if(_whichTrig==6){
    histNameAfterStream << leptonType << "TrileptonSumChargeAfter";
  }else if(_whichTrig==7){
    histNameAfterStream << leptonType << "QualeptonSumChargeAfter";
  }  
  TString histNameAfter = histNameAfterStream.str().c_str();

  std::ostringstream histTitleAfterStream;
  if(_whichTrig==6){
    histTitleAfterStream << leptonType << "Trilepton SumCharge After Cut";
  }else if(_whichTrig==7){
    histTitleAfterStream << leptonType << "Qualepton SumCharge After Cut";
  }
  TString histTitleAfter = histTitleAfterStream.str().c_str();

  // ***********************************************
  // Book Histograms
  // ***********************************************  

  if(_whichTrig==6){
  // Histogram before cut
    _hLeptonSumChargeBefore =  DeclareTH1F(histNameBefore.Data(), histTitleBefore.Data(), 3, -1.5, 1.5);
    _hLeptonSumChargeBefore -> SetXAxisTitle("Trilepton charge");
    _hLeptonSumChargeBefore -> SetYAxisTitle("Events");

  // Histogram after cut
    _hLeptonSumChargeAfter =  DeclareTH1F(histNameAfter.Data(), histTitleAfter.Data(), 3, -1.5, 1.5);
    _hLeptonSumChargeAfter -> SetXAxisTitle("Trilepton charge");
    _hLeptonSumChargeAfter -> SetYAxisTitle("Events");
  }else if(_whichTrig==7){
  // Histogram before cut
    _hLeptonSumChargeBefore =  DeclareTH1F(histNameBefore.Data(), histTitleBefore.Data(), 3, -1.5, 1.5);
    _hLeptonSumChargeBefore -> SetXAxisTitle("Qualepton charge");
    _hLeptonSumChargeBefore -> SetYAxisTitle("Events");

  // Histogram after cut
    _hLeptonSumChargeAfter =  DeclareTH1F(histNameAfter.Data(), histTitleAfter.Data(), 3, -1.5, 1.5);
    _hLeptonSumChargeAfter -> SetXAxisTitle("Qualepton charge");
    _hLeptonSumChargeAfter -> SetYAxisTitle("Events");
  }
  
  // ***********************************************
  // Get cuts from configuration file
  // ***********************************************  

  // Get configuration file
  EventContainer *EventContainerObj = GetEventContainer();
  TEnv *config = EventContainerObj -> GetConfig();

  std::ostringstream configSumChargeStream;
  if(_whichTrig==6){
    configSumChargeStream << "Cut.Trilepton." << leptonType.Data() << ".SumCharge";
  }else if(_whichTrig==7){
    configSumChargeStream << "Cut.Qualepton." << leptonType.Data() << ".SumCharge";
  }
  TString configSumCharge = configSumChargeStream.str().c_str();

  //
  //_LeptonSumCharge = config -> GetValue(configSumCharge.Data(), false);
  _LeptonSumCharge = config -> GetValue(configSumCharge.Data(), 0);
  
  // ***********************************************
  // Add these cuts to the cut flow table
  // ***********************************************
  ostringstream cutFlowTitleStream;
  ostringstream cutFlowNameStream;
  TString cutFlowTitle;
  TString cutFlowName;

  // Min + Max cut
  cutFlowTitleStream.str("");
  
  if(_whichTrig==6){
    if(_LeptonSumCharge !=0 ){
        cutFlowTitleStream << leptonType.Data() << " Trilepton : " << _LeptonSumCharge ;
    }else{
        cutFlowTitleStream << leptonType.Data() << " Trilepton : " << " Sum of Charge 1 or -1 ";
    }
  }else if(_whichTrig==7){
    cutFlowTitleStream << leptonType.Data() << " Qualepton : " << _LeptonSumCharge ;
  }
  cutFlowTitle = cutFlowTitleStream.str().c_str();

  cutFlowNameStream.str("");
  if(_whichTrig==6){
    cutFlowNameStream << leptonType.Data() << "Trilepton.SumCharge.All";
  }else if(_whichTrig==7){
    cutFlowNameStream << leptonType.Data() << "Qualepton.SumCharge.All";
  }
  cutFlowName = cutFlowNameStream.str().c_str();

  GetCutFlowTable()->AddCutToFlow(cutFlowName, cutFlowTitle);

  
}//BookHistograms()

/******************************************************************************
 * Bool_t CutLeptonSumCharge::Apply()                                                 *
 *                                                                            *
 * Apply cuts and fill histograms                                             *
 *                                                                            *
 * Cut on the number of electrons and the p_T of these electrons              *
 * Apply separate p_T cuts to the first and second (don't worry about others) *
 *                                                                            *
 * Input:  None                                                               *
 * Output: kTrue if successful                                                *
 ******************************************************************************/
Bool_t CutLeptonSumCharge::Apply()
{

  // ***********************************************
  // Get Number of Leptons and fill histograms
  // ***********************************************
  
  // Initialize number of leptons
  Float_t LeptonTripleSumCharge    = 0;       

  // Flags 
  Bool_t LeptonSumChargePass = kTRUE; // Event passes sign selection

  // Get Event Container
  EventContainer *EventContainerObj = GetEventContainer();

  std::vector<Muon> muonVector;
  std::vector<Electron> electronVector;
  std::vector<Lepton> leptonVector;


  //Assign collections to the above defined vectors
  if(     "All"        == leptonType) {
    muonVector.assign(EventContainerObj -> muons.begin(),           EventContainerObj -> muons.end());
    electronVector.assign(EventContainerObj -> electrons.begin(),           EventContainerObj -> electrons.end());
  }
  else if("Veto"       == leptonType) {
    muonVector.assign(EventContainerObj -> vetoMuons.begin(),       EventContainerObj -> vetoMuons.end());
    electronVector.assign(EventContainerObj -> vetoElectrons.begin(),       EventContainerObj -> vetoElectrons.end());
  }
  else if("PtEtaCut"   == leptonType) {
    muonVector.assign(EventContainerObj -> ptetaMuons.begin(),      EventContainerObj -> ptetaMuons.end());
    electronVector.assign(EventContainerObj -> ptetaElectrons.begin(),      EventContainerObj -> ptetaElectrons.end());
  }
  else if("Tight"      == leptonType) {
    muonVector.assign(EventContainerObj -> tightMuons.begin(),      EventContainerObj -> tightMuons.end());
    electronVector.assign(EventContainerObj -> tightElectrons.begin(),      EventContainerObj -> tightElectrons.end());
  }
  else if("Isolated"   == leptonType) {
    muonVector.assign(EventContainerObj -> isolatedMuons.begin(),   EventContainerObj -> isolatedMuons.end());
    electronVector.assign(EventContainerObj -> isolatedElectrons.begin(),   EventContainerObj -> isolatedElectrons.end());
  }
  else if("UnIsolated" == leptonType) {
    muonVector.assign(EventContainerObj -> unIsolatedMuons.begin(), EventContainerObj -> unIsolatedMuons.end());
    electronVector.assign(EventContainerObj -> unIsolatedElectrons.begin(), EventContainerObj -> unIsolatedElectrons.end());
  }
  else if("TTHFake" == leptonType) {
    leptonVector.assign(EventContainerObj -> fakeLeptons.begin(), EventContainerObj -> fakeLeptons.end());
  }
  else{
    std::cout << "ERROR " << "<CutLeptonSumCharge::Apply()> "
	      << "leptonType must be All, Tight, Veto, Isolated, or UnIsolated, PtEtaCut, TTHFake" << std::endl;
    exit(8);
  } //else                                                                                                          

  if("TTHFake" == leptonType && _whichTrig==6 ) LeptonTripleSumCharge = leptonVector[0].charge()+leptonVector[1].charge()+leptonVector[2].charge();
  if("TTHFake" == leptonType && _whichTrig==7 ) LeptonTripleSumCharge = leptonVector[0].charge()+leptonVector[1].charge()+leptonVector[2].charge()+leptonVector[3].charge();

  // Fill the histograms before the cuts
  _hLeptonSumChargeBefore    -> Fill(LeptonTripleSumCharge);
  
  // ***********************************************
  // Fill cut flow table
  // ***********************************************
  
  // Names for Cut Flow Table
  ostringstream cutFlowNameAllStream;
  
  TString cutFlowNameAll;
  
  if(_whichTrig==6){
    cutFlowNameAllStream << leptonType.Data() << "Trilepton.SumCharge.All";
  }else if(_whichTrig==7){
    cutFlowNameAllStream << leptonType.Data() << "Qualepton.SumCharge.All";
  } 
  cutFlowNameAll = cutFlowNameAllStream.str().c_str();
  
  if(_whichTrig==6){
    if ( (_LeptonSumCharge!=0 && LeptonTripleSumCharge != _LeptonSumCharge) || (_LeptonSumCharge==0 && abs(LeptonTripleSumCharge) != 1)){
        LeptonSumChargePass = kFALSE;
        GetCutFlowTable()->FailCut(cutFlowNameAll.Data());
    }
    else{
        GetCutFlowTable()->PassCut(cutFlowNameAll.Data());
        _hLeptonSumChargeAfter -> Fill(LeptonTripleSumCharge);
    }
  }else if(_whichTrig==7){
    if (LeptonTripleSumCharge != _LeptonSumCharge){
        LeptonSumChargePass = kFALSE;
        GetCutFlowTable()->FailCut(cutFlowNameAll.Data());
    }
    else{
        GetCutFlowTable()->PassCut(cutFlowNameAll.Data());
        _hLeptonSumChargeAfter -> Fill(LeptonTripleSumCharge);
    }
  }

  // ***********************************************
  // Return if it passes
  // ***********************************************
  if( EventContainerObj->_sync >= 80  && EventContainerObj->_sync != 99 && EventContainerObj->_debugEvt == EventContainerObj->eventNumber && !LeptonSumChargePass ){
    std::cout<< " Event " << EventContainerObj->_debugEvt <<" Fail LeptonSumChargePass " << leptonType << "  LeptonSumCharge "<< LeptonTripleSumCharge<< std::endl; 
  }
  
  if(EventContainerObj->_SaveCut ==1 ){
    Double_t flag = LeptonSumChargePass ? 1:0;
    EventContainerObj->Flag_cuts.push_back(flag);
    return kTRUE;
  }else{
    return(LeptonSumChargePass);
  }
 
} //Apply












