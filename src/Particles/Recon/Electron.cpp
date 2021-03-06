/******************************************************************************
 * Electron.hpp                                                               *
 *                                                                            *
 * Store information about final state electrons                              *
 *                                                                            *
 * Derived from Particle class                                                *
 *                                                                            *
 * Public Member Functions of Electron class                                  *
 *    Electron()                         -- Default Constructor               *
 *    Electron()                         -- Parameterized Constructor         *
 *    Clear()                            -- Set contents to default           *
 *    Fill                               -- Fill electron from event tree     *
 *    FillFastSim                        -- Fill electron from FastSim tree   *
 *    operator+=                         -- Overload +=                       *
 *    operator+                          -- Overload +                        *
 *    operator=                          -- Overload = Particle               *
 *    operator=                          -- Overload = const Electron         *
 *    operator =                         -- Overload =                        *
 *                                                                            *
 * Private Data Members of Electron class                                     *
 *                                                                            *
 * History                                                                    *
 *      16 June 2015 - Created by Huaqiao ZHANG                               *
 *****************************************************************************/
#include "SingleTopRootAnalysis/Particles/Recon/Electron.hpp"
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

// Integrate classes into the Root system
ClassImp(Electron)


/******************************************************************************
 * Electon::Electron()                                                        *
 *                                                                            *
 * Default Constructor                                                        *
 *                                                                            *
 * Input:  None                                                               *
 * Output: None                                                               *
 ******************************************************************************/
Electron::Electron() : Particle::Particle(),_passVetoId(0), _passLooseId(0), _passMediumId(0), _passTightId(0), _passHEEPId(0), _passConversionVeto(0), _expectedMissingInnerHits(0), _patElectron_d0(0.0),  _patElectron_dz(0.0), _patElectron_dxy(0.0),  _isoChargedHadrons(0.0),  _isoNeutralHadrons(0.0), _isoPhotons(0.0),  _isoPU(0.0), _charge(0.0), _scEta(0.0), _inCrack(0), _sigmaEtaEta(0.), _dEtaInSeed(0.), _dPhiIn(0.), _hOverE(0.), _ooEmooP(0.), _relIsoPFRhoEA(0.), _missingHits(0.),_IP3Dsig(0.0),_miniIsoRel(0.0),
  _mvaValue_nonIso       (0.0),
  _ntMVAeleID       (0.0)
{
} //Electron()

/******************************************************************************
 * Electon::~Electron()                                                       *
 *                                                                            *
 * Default Constructor                                                        *
 *                                                                            *
 * Input:  None                                                               *
 * Output: None                                                               *
 ******************************************************************************/
Electron::~Electron()
{

} //~Electron


/******************************************************************************
 * Electon::Electron(const Electron& other)                                   *
 *                                                                            *
 * Copy constructor Electron const                                            *
 *                                                                            *
 * Input:  Electron                                                           *
 * Output: None                                                               *
 ******************************************************************************/
Electron::Electron(const Electron& other): Particle(other),
_passVetoId(other.GetpassVetoId()), 
_passLooseId(other.GetpassLooseId()), 
_passMediumId(other.GetpassMediumId()), 
_passTightId(other.GetpassTightId()), 
_passHEEPId(other.GetpassHEEPId()), 
_passConversionVeto(other.GetpassConversionVeto()), 
_expectedMissingInnerHits(other.GetexpectedMissingInnerHits()), 
_patElectron_d0(other.GetpatElectron_d0()), 
_patElectron_dz(other.GetpatElectron_dz()), 
_patElectron_dxy(other.GetpatElectron_dxy()), 
_isoChargedHadrons(other.GetisoChargedHadrons()), 
_isoNeutralHadrons(other.GetisoNeutralHadrons()), 
_isoPhotons(other.GetisoPhotons()), 
					   _isoPU(other.GetisoPU()),
					   _charge(other.GetCharge()),
					   _scEta(other.scEta()),
					   _inCrack(other.inCrack()),
					   _sigmaEtaEta(other.sigmaEtaEta()), 
					   _dEtaInSeed(other.dEtaInSeed()), 
					   _dPhiIn(other.dPhiIn()), 
					   _hOverE(other.hOverE()), 
					   _ooEmooP(other.ooEmooP()), 
					   _relIsoPFRhoEA(other.relIsoPFRhoEA()), 
					   _missingHits(other.missingHits()),
  _IP3Dsig(other.GetIP3Dsig()),
  _mvaValue_nonIso(other.GetmvaValue_nonIso()),
  _ntMVAeleID(other.GetntMVAeleID()),
  _miniIsoRel(other.GetminiIsoRel())
{
} //Electron()

/******************************************************************************
 * Electon::Electron(const Particle& other)                                   *
 *                                                                            *
 * Copy constructor Particle const                                            *
 *                                                                            *
 * Input:  Particle                                                           *
 * Output: None                                                               *
 ******************************************************************************/
Electron::Electron(const Particle& other) : Particle(other),_passVetoId(0), _passLooseId(0), _passMediumId(0), _passTightId(0), _passHEEPId(0), _passConversionVeto(0), _expectedMissingInnerHits(0), _patElectron_d0(0.0),  _patElectron_dz(0.0), _patElectron_dxy(0.0),  _isoChargedHadrons(0.0),  _isoNeutralHadrons(0.0), _isoPhotons(0.0),  _isoPU(0.0), _charge(0.0), _scEta(0.0), _inCrack(0), _sigmaEtaEta(0.), _dEtaInSeed(0.), _dPhiIn(0.), _hOverE(0.), _ooEmooP(0.), _relIsoPFRhoEA(0.), _missingHits(0.),
_IP3Dsig(0.0),
_mvaValue_nonIso(0.0),
_ntMVAeleID(0.0),
_miniIsoRel(0.0)
{ 
} //Electron()


/******************************************************************************
 * Electron& Electron::operator+=(const Electron& other)                      *
 *                                                                            *
 * Overload +=                                                                *
 *                                                                            *
 * Input:  Electron                                                           *
 * Output: Electron                                                           *
 ******************************************************************************/
Electron& Electron::operator+=(const Electron& other)
{
  
  Particle::operator+=(other);
  return *this;
} //Electron +=

/******************************************************************************
 * Electron& Electron::operator+(const Electron& other)                       *
 *                                                                            *
 * Overload +                                                                 *
 *                                                                            *
 * Input:  Electron                                                           *
 * Output: Electron                                                           *
 ******************************************************************************/
Electron Electron::operator+(const Electron& other)
{

  Particle particleTemp = Particle::operator+(other);
  Electron electronTemp = particleTemp;
  return electronTemp;

} //+

/******************************************************************************
 * Electron& Electron::operator=(const Electron& other)                       *
 *                                                                            *
 * Overload = Particle                                                        *
 *                                                                            *
 * Input:  Electron                                                           *
 * Output: Electron                                                           *
 ******************************************************************************/
Electron& Electron::operator=(const Particle& other)
{
  
  Particle::operator = (other);
  SetpassVetoId(0.0);
  SetpassLooseId(0.0);
  SetpassMediumId(0.0);
  SetpassTightId(0.0);
  SetpassHEEPId(0.0);
  SetpassConversionVeto(0.0);
  SetexpectedMissingInnerHits(0.0);
  SetpatElectron_d0(0.0);
  SetpatElectron_dz(0.0);
  SetpatElectron_dxy(0.0);
  SetisoChargedHadrons(0.0);
  SetisoNeutralHadrons(0.0);
  SetisoPhotons(0.0);
  SetisoPU(0.0);
  SetCharge(0.0);
  SetSCeta(0.0);
  SetInCrack(0);
  SetSigmaEtaEta(0.);
  SetDEtaInSeed(0.);
  SetDPhiIn(0.);
  SetHOverE(0.);
  SetOoEmooP(0.);
  SetRelIsoPFRhoEA(0.);
  SetMissingHits(0);
  SetIP3Dsig		(0.0);
  SetmvaValue_nonIso		(0.0);
  SetntMVAeleID		(0.0);
  SetminiIsoRel		(0.0);

  return *this;
} // = Particle

/******************************************************************************
 * Electron& Electron::operator+(const Electron& other)                       *
 *                                                                            *
 * Overload = for const Electron                                              *
 *                                                                            *
 * Input:  Electron                                                           *
 * Output: Electron                                                           *
 ******************************************************************************/
Electron& Electron::operator=(const Electron& other)
{
  
  Particle::operator=(other);
  SetpassVetoId(other.GetpassVetoId());
  SetpassLooseId(other.GetpassLooseId());
  SetpassMediumId(other.GetpassMediumId());
  SetpassTightId(other.GetpassTightId());
  SetpassHEEPId(other.GetpassHEEPId());
  SetpassConversionVeto(other.GetpassConversionVeto());
  SetexpectedMissingInnerHits(other.GetexpectedMissingInnerHits());
  SetpatElectron_d0(other.GetpatElectron_d0());
  SetpatElectron_dz(other.GetpatElectron_dz());
  SetpatElectron_dxy(other.GetpatElectron_dxy());
  SetisoChargedHadrons(other.GetisoChargedHadrons());
  SetisoNeutralHadrons(other.GetisoNeutralHadrons());
  SetisoPhotons(other.GetisoPhotons());
  SetisoPU(other.GetisoPU());
  SetCharge(other.GetCharge());
  SetSCeta(other.GetSCEta());
  SetInCrack(other.GetInCrack());
  SetSigmaEtaEta(other.sigmaEtaEta());
  SetDEtaInSeed(other.dEtaInSeed());
  SetDPhiIn(other.dPhiIn());
  SetHOverE(other.hOverE());
  SetOoEmooP(other.ooEmooP());
  SetRelIsoPFRhoEA(other.relIsoPFRhoEA());
  SetMissingHits(other.missingHits());
  SetIP3Dsig(other.GetIP3Dsig());
  SetmvaValue_nonIso(other.GetmvaValue_nonIso());
  SetntMVAeleID(other.GetntMVAeleID());
  SetminiIsoRel(other.GetminiIsoRel());
  return *this;
} //= const Electron

/******************************************************************************
 * Electron& Electron::operator+(const Electron& other)                       *
 *                                                                            *
 * Overload = for non-const Electron                                          *
 *                                                                            *
 * Input:  Electron                                                           *
 * Output: Electron                                                           *
 ******************************************************************************/
Electron& Electron::operator=(Electron& other)
{
  
  Particle::operator=(other);
  SetpassVetoId(other.GetpassVetoId());
  SetpassLooseId(other.GetpassLooseId());
  SetpassMediumId(other.GetpassMediumId());
  SetpassTightId(other.GetpassTightId());
  SetpassHEEPId(other.GetpassHEEPId());
  SetpassConversionVeto(other.GetpassConversionVeto());
  SetexpectedMissingInnerHits(other.GetexpectedMissingInnerHits());
  SetpatElectron_d0(other.GetpatElectron_d0());
  SetpatElectron_dz(other.GetpatElectron_dz());
  SetpatElectron_dxy(other.GetpatElectron_dxy());
  SetisoChargedHadrons(other.GetisoChargedHadrons());
  SetisoNeutralHadrons(other.GetisoNeutralHadrons());
  SetisoPhotons(other.GetisoPhotons());
  SetisoPU(other.GetisoPU());
  SetCharge(other.GetCharge());
  SetSCeta(other.GetSCEta());
  SetInCrack(other.GetInCrack());
  SetSigmaEtaEta(other.sigmaEtaEta());
  SetDEtaInSeed(other.dEtaInSeed());
  SetDPhiIn(other.dPhiIn());
  SetHOverE(other.hOverE());
  SetOoEmooP(other.ooEmooP());
  SetRelIsoPFRhoEA(other.relIsoPFRhoEA());
  SetMissingHits(other.missingHits());
  SetIP3Dsig(other.GetIP3Dsig());
  SetmvaValue_nonIso(other.GetmvaValue_nonIso());
  SetntMVAeleID(other.GetntMVAeleID());
  SetminiIsoRel(other.GetminiIsoRel());
  return *this;
} //= non-const Electron

/******************************************************************************
 * void Electron::SetCuts(TEnv* config, TString electron)                     *
 *                                                                            *
 * Set up the cuts to be made on the different types of electron              *
 *                                                                            *
 * Input:  config with cuts                                                   *
 *         string of what type of electron, Veto, Tight etc                   *
 * Output: kTRUE if this electron passes electron ID cuts                     *
 ******************************************************************************/
void Electron::SetCuts(TEnv* config, TString electronType)
{
  _closestMuonCut = config -> GetValue("ObjectID.Electron.MuonCleanR",0.);
  _maxEtaCuts[electronType] =    config -> GetValue("ObjectID.Electron." + electronType + ".MaxEta", 100.);
  _minPtCuts[electronType] =   	 config -> GetValue("ObjectID.Electron." + electronType + ".MinPt", 0.);
  _minEtaGapCuts[electronType] = config -> GetValue("ObjectID.Electron." + electronType + ".MinEtaGap", 100.);
  _maxEtaGapCuts[electronType] = config -> GetValue("ObjectID.Electron." + electronType + ".MaxEtaGap", -100.);
  _dZCutEndcap[electronType] = config -> GetValue("ObjectID.Electron." + electronType + ".dZEndcap", 100.);
  _dZCutBarrel[electronType] = config -> GetValue("ObjectID.Electron." + electronType + ".dZBarrel", 100.);
  _d0CutEndcap[electronType] = config -> GetValue("ObjectID.Electron." + electronType + ".d0Endcap", 100.);
  _d0CutBarrel[electronType] = config -> GetValue("ObjectID.Electron." + electronType + ".d0Barrel", 100.);
  _maxDxyCuts[electronType] = config -> GetValue("ObjectID.Electron."+electronType+".MaxDxy", 0.0);
  _maxDzCuts[electronType] = config -> GetValue("ObjectID.Electron."+electronType+".MaxDz", 0.0);
  _maxIP3DsigCuts[electronType] = config -> GetValue("ObjectID.Electron."+electronType+".MaxIP3Dsig", 0.0);
  _maxMiniIsoRelCuts[electronType] = config -> GetValue("ObjectID.Electron."+electronType+".MaxMiniIsoRel", 0.0);

} // End SetCuts


/******************************************************************************
 * void Electron::Fill(EventTree *evtr,int iE)                                *
 *                                                                            *
 * Fill electron vector from tree                                             *
 *                                                                            *
 * Input:  Event Tree                                                         *
 * Output: kTRUE if this electron passes electron ID cuts                     *
 ******************************************************************************/
Bool_t Electron::Fill(std::vector<Muon>& selectedMuons, EventTree *evtr, Int_t iE, TString electronType, Bool_t isSimulation)
{

  // **************************************************************
  // Check electron type
  // **************************************************************
  if( (electronType != "All") && (electronType != "Veto") && (electronType != "Tight") && (electronType != "Isolated") && (electronType != "UnIsolated") && (electronType != "PtEtaCut") ){
    std::cout << "ERROR: <Electron::Fill()> " << "Passed variable electronType of value " << electronType << " is not valid.  "
	      << "Must be All, Veto, Tight, Isolated, UnIsolated, PtEtaCut" << std::endl;
  } 

  // ******************************  Set up electron candidate ********************************
  Double_t elPt, elEta, elPhi, elE;
  elEta       = evtr -> patElectron_eta    -> operator[](iE);
  elPhi       = evtr -> patElectron_phi    -> operator[](iE);
  // currently MC is not reMiniAOD, data is reMiniAOD
  // for MC , the pt is already smear and scaled
  // for Data , the pt is not scaled and smeared yet
  // this needs to be updated when new samples comes
  //if(isSimulation){
    elPt        = evtr -> patElectron_pt     -> operator[](iE) * evtr -> patElectron_energySF -> operator[](iE);
    elE         = evtr -> patElectron_energy     -> operator[](iE) * evtr -> patElectron_energySF -> operator[](iE);
  /*
  }else{
  }
  */
 ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  SetPtEtaPhiE(elPt, elEta, elPhi, elE);

  SetCharge             ( evtr -> patElectron_charge                   -> operator[](iE) );
  SetpassHEEPId         ( evtr -> patElectron_isPassHEEPId             -> operator[](iE) );
  SetpassConversionVeto ( evtr -> patElectron_passConversionVeto       -> operator[](iE) );
  SetisoChargedHadrons  ( evtr -> patElectron_isoChargedHadrons        -> operator[](iE) );
  SetisoNeutralHadrons  ( evtr -> patElectron_isoNeutralHadrons        -> operator[](iE) );
  SetisoPhotons         ( evtr -> patElectron_isoPhotons               -> operator[](iE) );
  SetisoPU              ( evtr -> patElectron_isoPU                    -> operator[](iE) );
  SetSCeta		( evtr -> patElectron_SCeta		       -> operator[](iE) );
  SetInCrack		( evtr -> patElectron_inCrack		       -> operator[](iE) );
  SetpatElectron_d0	( evtr -> patElectron_d0		       -> operator[](iE) );
  SetpatElectron_dz	( evtr -> patElectron_gsfTrack_dz_pv	       -> operator[](iE) );
  SetpatElectron_dxy	( evtr -> patElectron_gsfTrack_dxy_pv	       -> operator[](iE) );
  SetSigmaEtaEta	( evtr -> patElectron_full5x5_sigmaIetaIeta    -> operator[](iE) );
  SetDEtaInSeed		( evtr -> patElectron_dEtaIn		       -> operator[](iE) );
  SetDPhiIn		( evtr -> patElectron_dPhiIn		       -> operator[](iE) );
  SetHOverE		( evtr -> patElectron_hOverE		       -> operator[](iE) );
  SetOoEmooP		( evtr -> patElectron_ooEmooP		       -> operator[](iE) );
  SetRelIsoPFRhoEA	( evtr -> patElectron_relIsoRhoEA	       -> operator[](iE) );
  SetMissingHits	( evtr -> patElectron_expectedMissingInnerHits -> operator[](iE) );
  SetminiIsoRel		(evtr -> patElectron_miniIsoRel   		-> operator[](iE));
  SetIP3Dsig		(evtr -> patElectron_IP3Dsig   		-> operator[](iE));
  //This is Fall17V2 IDs
  SetmvaValue_nonIso		(evtr -> patElectron_mvaValue_nonIso   		-> operator[](iE));
  SetntMVAeleID		(evtr -> patElectron_isPassMvanonIsowpLoose   		-> operator[](iE));
  SetpassVetoId         ( evtr -> patElectron_isPassVeto               -> operator[](iE) );
  SetpassLooseId        ( evtr -> patElectron_isPassLoose              -> operator[](iE) );
  SetpassMediumId       ( evtr -> patElectron_isPassMedium             -> operator[](iE) );
  SetpassTightId        ( evtr -> patElectron_isPassTight              -> operator[](iE) );
  //This is Fall17V1 IDs
  /* 
  SetmvaValue_nonIso		(evtr -> patElectron_OldmvaValue_nonIso   		-> operator[](iE));
  SetntMVAeleID		(evtr -> patElectron_isPassOldMvanonIsowpLoose   		-> operator[](iE));
  SetpassVetoId         ( evtr -> patElectron_isPassOldVeto               -> operator[](iE) );
  SetpassLooseId        ( evtr -> patElectron_isPassOldLoose              -> operator[](iE) );
  SetpassMediumId       ( evtr -> patElectron_isPassOldMedium             -> operator[](iE) );
  SetpassTightId        ( evtr -> patElectron_isPassOldTight              -> operator[](iE) );
  */

  // **************************************************************
  // **************************************************************
  // **************************************************************
  // Calcualte Minimum DeltaR between Electron and Jet
  //Double_t DeltaRCurrent = 0;
  //std::vector<Jet>::iterator JetIterator;
  //for(JetIterator = jets.begin(); JetIterator != jets.end(); JetIterator++){
  //  DeltaRCurrent =  JetIterator->DeltaR(*this);
  //  if( (GetDeltaRElectronJet() == 0) || (DeltaRCurrent < GetDeltaRElectronJet()) ) SetDeltaRElectronJet(DeltaRCurrent); 
  //} //for


  // Get isolation requirement from config file (default is etcone20)
  //  TString isoAlgoQ = "ObjectID.Electron." + electronType + ".IsoAlgo";
  //TString isoAlgo  = config -> GetValue(isoAlgoQ, "ptetcone30");
/*  
  // The only choices for isolation are currently etcone20 and none
  if( "etcone20" == isoAlgo ) {
    Double_t coneCut = config -> GetValue("ObjectID.Electron." + electronType + ".IsoCut", 6.0);
    if(_EtCone20 < coneCut) SetIsolation(kTRUE); // electron isolated  
    //      if( coneCut < _EtCone20 ) SetIsolation(kTRUE); // electron isolated // old
    else SetIsolation(kFALSE);
  }// if etcone20
  else if( "etcone30" == isoAlgo ) {
    Double_t coneCut = config -> GetValue("ObjectID.Electron." + electronType + ".IsoCut", 6.0);
    if(_EtCone30 < coneCut) SetIsolation(kTRUE); // electron isolated  
    //      if( coneCut < _EtCone20 ) SetIsolation(kTRUE); // electron isolated // old
    else SetIsolation(kFALSE);
    cout<<"ARE YOU SURE YOU DON'T WANT THE PTCONE, ETCONE ISOLATION, ptetcone?"<<endl;
  }// if etcone30
  else if( "ptetcone30" == isoAlgo ) {
    Double_t conecut1 = config -> GetValue("ObjectID.Electron." + electronType + ".IsoCutEt", 0.0);
    Double_t conecut2 = config -> GetValue("ObjectID.Electron." + electronType + ".IsoCutPt", 0.0);
    if(((_EtCone30/elPt) < conecut1) &&((_PtCone30/elPt) < conecut2)) SetIsolation(kTRUE); // electron isolated  
    else SetIsolation(kFALSE);
  }// if ptetcone30
  else if("none" == isoAlgo) SetIsolation(kTRUE);
  else{
    std::cout << "ERROR " << "<Electron::Fill()>: " << "Insolation level " << isoAlgo
	      << " is invalid.  Must be etcone20, etcone30, or none."
	      << std::endl;
    exit(8);
  } //else
*/ 
  ////////////////////////////////
  /// Electron Cleaning
  ////////////////////////////////
  
  Bool_t passesCleaning = kTRUE;
 
  Double_t closestMuon = 999.;

  for (auto const & mu : selectedMuons){
    if (mu.DeltaR(*this) < closestMuon) closestMuon = mu.DeltaR(*this);
  }
  if (closestMuon < _closestMuonCut) passesCleaning = kFALSE;
  
  // **************************************************************
  // Pt and Eta Cuts
  // **************************************************************
  // If event passes or fails requirements
  Bool_t passMinPt   = kTRUE;
  Bool_t passMaxEta  = kTRUE;
  Bool_t passTight   = kTRUE;
  Bool_t passIDnoIso = kTRUE;
  Bool_t passd0dZ    = kTRUE;
  Bool_t passIso     = kTRUE;

  Bool_t passCustomVeto = kTRUE;
  
  // Test requirements
  if(elPt <= _minPtCuts[electronType])               passMinPt  = kFALSE;
  if(TMath::Abs(elEta) >= _maxEtaCuts[electronType]) passMaxEta = kFALSE;
  if(!passTightId())				     passTight  = kFALSE;
  
  //parts of definition of ttH loose Electron
  if (
	  missingHits() > 1 ||
      TMath::Abs(patElectron_dxy())		>= _maxDxyCuts[electronType] ||
      TMath::Abs(patElectron_dz())		>= _maxDzCuts[electronType] ||
      IP3Dsig()	>=  _maxIP3DsigCuts[electronType]   ||
      miniIsoRel()	>=  _maxMiniIsoRelCuts[electronType]
      )
    passCustomVeto = kFALSE;
  
  Bool_t eleMVAId = kFALSE;
  eleMVAId = ntMVAeleID() >0.5 ;
  /*
  if(elPt <=10){
    if((TMath::Abs(scEta()) <0.8 && mvaValue_nonIso() > -0.13285867293779202)||
          (0.8 <= TMath::Abs(scEta()) && TMath::Abs(scEta()) <1.479 && mvaValue_nonIso() > -0.31765300958836074)||
        (1.479 <=TMath::Abs(scEta()) && TMath::Abs(scEta())<500 && mvaValue_nonIso()>-0.0799205914718861)
    ) eleMVAId = kTRUE;
  }else{
    if((TMath::Abs(scEta()) <0.8 && mvaValue_nonIso() > -0.856871961305474 )||
          (0.8 <= TMath::Abs(scEta()) && TMath::Abs(scEta()) <1.479 && mvaValue_nonIso() > -0.8107642141584835)||
        (1.479 <=TMath::Abs(scEta()) && TMath::Abs(scEta())<500 && mvaValue_nonIso()> -0.7179265933023059)
    ) eleMVAId = kTRUE;
  }
*/

  // Apply the ID requirements individually so that we can invert the isolation for QCD electrons
  if (TMath::Abs(scEta()) <= 1.479){ //Electron in barrel
    if (sigmaEtaEta() >= 0.00998 ||
	TMath::Abs(dEtaInSeed()) >= 0.00308 ||
	TMath::Abs(dPhiIn()) >= 0.0816 ||
	hOverE() >= 0.0414 ||
	ooEmooP() >= 0.0129 ||
	missingHits() > 1 ||
	!passConversionVeto())
      passIDnoIso = kFALSE;
    if (relIsoPFRhoEA() > 0.0588){
      passIso = kFALSE;
    }
  }
  else { // Electron in endcap
    if (sigmaEtaEta() >= 0.0292 ||
	TMath::Abs(dEtaInSeed()) >= 0.00605 ||
	TMath::Abs(dPhiIn()) >= 0.0394 ||
	hOverE() >= 0.0641 ||
	ooEmooP() >= 0.0129 ||
	missingHits() > 1 ||
	!passConversionVeto())
      passIDnoIso = kFALSE;
    if (relIsoPFRhoEA() > 0.0571) {
      passIso = kFALSE;
    }
  }

  //Isolation requirement
  

  // Checking that the d0 and dz cuts pass
  if(TMath::Abs(elEta) < 1.4442) passd0dZ = ((GetpatElectron_d0() < _d0CutBarrel[electronType]) && (GetpatElectron_dz() < _dZCutBarrel[electronType])); //barrel
  else passd0dZ = ((GetpatElectron_d0() < _d0CutEndcap[electronType]) && (GetpatElectron_dz() < _dZCutEndcap[electronType])); //endcap

  // **************************************************************
  // Gap Electrons
  // **************************************************************
  // If event passes or fails requirements
  Bool_t passNoGapElectron  = kTRUE;
  
  // Test requirements and set variable
  if( (TMath::Abs(scEta()) >= _minEtaGapCuts[electronType]) && (TMath::Abs(scEta()) <= _maxEtaGapCuts[electronType]) ) passNoGapElectron = kFALSE;
  //SetNoGapElectron(passNoGapElectron);
  
  
  // **************************************************************
  // Return value according to electron type passed to Fill
  // **************************************************************
    //  std::cout << (passMinPt && passMaxEta && passIDnoIso && passIso && passNoGapElectron && passd0dZ) << " " << ( passMinPt && passMaxEta) << " " << ( passMinPt && passMaxEta && passIDnoIso && !passIso && passNoGapElectron && passd0dZ) << " bools: " << passMinPt << " " << passMaxEta << " " << passIDnoIso << " " << passIso << " " << passNoGapElectron << " " << passd0dZ << std::endl;
  //if  ( passMinPt && passMaxEta && passIDnoIso && !passIso && passNoGapElectron && passd0dZ) std::cout << "This should return an unisolated lepton" << std::endl;
  //if(     "Tight"      == electronType) return(GetIsRobusterTight() && passMinPt && passMaxEta && GetNoGapElectron() && Isolation());
  if(     "Tight"      == electronType) return( passMinPt && passMaxEta && passIDnoIso && passIso && passNoGapElectron && passd0dZ);
  //if(     "PtEtaCut"   == electronType) return(passMinPt && passMaxEta && IsRobusterTight());
  else if("Veto"       == electronType) return( passMinPt && passMaxEta && passCustomVeto && passesCleaning && eleMVAId);//no tight or isolation req.
  //else if("Isolated"   == electronType) return(GetIsolation()  && GetNoGapElectron()&& OverlapUse());
  else if(     "UnIsolated" == electronType) return( passMinPt && passMaxEta && passIDnoIso && !passIso && passNoGapElectron && passd0dZ);
  //  else if("UnIsolated" == electronType) return(!GetIsolation() && GetIsRobusterTight() && passMinPt && passMaxEta && GetNoGapElectron());
  //else if("All"        == electronType) return(kTRUE);
  //else return kTRUE;
  return kTRUE;
  
} //Fill

/******************************************************************************
 * void Electron::FillFastSim(FastSimTree *evtr,int iE)                       *
 *                                                                            *
 * Fill electron vector from tree                                             *
 *                                                                            *
 * Input:  FastSim Tree                                                       *
 * Output: kTRUE if this electron passes electron ID cuts                     *
 ******************************************************************************/
Bool_t Electron::FillFastSim(FastSimTree *tr, Int_t iE,TEnv* config,TString electronType)
{
} //FillFastSim


