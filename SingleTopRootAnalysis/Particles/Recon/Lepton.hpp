/******************************************************************************
 * Lepton.hpp                                                                 *
 *                                                                            *
 * Store information about final state leptons                                *
 *                                                                            *
 * Derived from Particle class                                                *
 *                                                                            *
 * Public Member Functions of Lepton class                                    *
 *    Lepton()                             -- Default Constructor               *
 *    Lepton()                             -- Parameterized Constructor         *
 *    Lepton()                             -- Constructor with Particle         *
 *    ~Lepton()                            -- Destructor                        *
 *    Clear()                            -- Set contents to default           *
 *    Fill                               -- Fill lepton from event tree         *
 *    FillFastSim                        -- Fill lepton from FastSim tree       *
 *    operator+=                         -- Overload +=                       *
 *    operator+                          -- Overload +                        *
 *    operator=                          -- Overload = Particle               *
 *    operator=                          -- Overload = const Lepton             *
 *    operator=                          -- Overload =                        *
 *                                                                            *
 * Private Data Members of Lepton class                                         *
 *                                                                            *
 * History                                                                    *
 *      21 Nov 2017  - Created by Binghuan Li                                 *
 *****************************************************************************/

#ifndef lepton_h
#define lepton_h

#include "SingleTopRootAnalysis/Particles/Recon/Particle.hpp"
#include "SingleTopRootAnalysis/Particles/Recon/Muon.hpp"
#include "SingleTopRootAnalysis/Trees/EventTree.hpp"
#include "SingleTopRootAnalysis/Trees/FastSimTree.hpp"
#include <TEnv.h>

#include "TMVA/Reader.h"

using namespace std;


class Lepton: public Particle
{
public:

  // Default Constructor
  Lepton();

  // Copy constructor from Lepton
  Lepton(const Lepton& other);

  // Copy constructor from Particle
  Lepton(const Particle& other);

  // Dectructor
  ~Lepton();

  // Set all contents to their defaults
  inline void Clear() { Particle::Clear(); _passTightId = kFALSE; _passLooseId = kFALSE;_isSoft = kFALSE; _isHighPt = kFALSE; _isoCharged = 0.0; _isoSum = 0.0; _isoCharParPt = 0.0; _isoNeutralHadron = 0.0;  _isoPhoton = 0.0;  _isoPU = 0.0; _chi2=0.0; _dxy=0.0; _validHits = 0.0; _validHitsInner = 0.0; _matchedStat=0.0; _TLayers=0.0; _relIsoR04=0.0; _miniIsoRel =0.0; _IP3Dsig=0.0;
 _jetptratio =0.0;
 _jetcsv =0.0;
 _lepjetchtrks =0.0;
 _miniIsoCh =0.0;
 _miniIsoPUsub =0.0;
 _ptrel =0.0;
 _jetdr =0.0;
 _pdgId =0.0;
 _jetpt =0.0;
 _isGlobal =0.0;
 _chi2LocalPosition =0.0;
 _trkKink =0.0;
 _validFraction =0.0;
 _segmentCompatibility =0.0;
 _pTErrOVpT_it =0.0;
 _BDT =0.0;
 _conept =0.0;
 _SCeta =0.0;
 _expectedMissingInnerHits =0.0;
 _full5x5_sigmaIetaIeta =0.0;
 _hOverE =0.0;
 _dEtaIn =0.0;
 _dPhiIn =0.0;
 _ooEmooP =0.0;
 _mvaValue_HZZ =0.0;
  };

  // Fill the lepton from an EventTree
  Bool_t Fill(std::vector<Muon>& selectedMuons ,EventTree *evtr,int iE,TString leptonType, Bool_t isSimulation, int sNumber, int pdgid);
  // also fill from a fastsim tree
  Bool_t FillFastSim(TEnv *config, FastSimTree *tr, Int_t iE,TString leptonType);

 // Overloaded operators:
  // +=
  Lepton& operator+=(const Lepton& other);
  // +
  Lepton operator+(const Lepton& other);
  // = Particle
  Lepton& operator=(const Particle& other);
  // = Lepton const
  Lepton& operator=(const Lepton& other);
  // = Lepton non-const
  Lepton& operator=(Lepton& other);

  void SetCuts(TEnv *config, TString leptonType);
    
  inline void SetpassTightId(Bool_t passTightId){_passTightId = passTightId;};
  inline Bool_t GetpassTightId() const {return _passTightId;};
  inline Bool_t passTightId() const {return _passTightId;};

  inline void SetpassLooseId(Bool_t passLooseId){_passLooseId = passLooseId;};
  inline Bool_t GetpassLooseId() const {return _passLooseId;};
  inline Bool_t passLooseId() const {return _passLooseId;};

  inline void SetisSoft(Bool_t isSoft){_isSoft = isSoft;};
  inline Bool_t GetisSoft() const {return _isSoft;};
  inline Bool_t isSoft() const {return _isSoft;};

  inline void SetisHighPt(Bool_t isHighPt){_isHighPt = isHighPt;};
  inline Bool_t GetisHighPt() const {return _isHighPt;};
  inline Bool_t isHighPt() const {return _isHighPt;};

  inline void SetisPf(Bool_t isPf){_isPf = isPf;};
  inline Bool_t GetisPf() const {return _isPf;};
  inline Bool_t isPf() const {return _isPf;};

  inline void SetisoCharged(Double_t isoCharged){_isoCharged = isoCharged;};
  inline Double_t GetisoCharged() const {return _isoCharged;};
  inline Double_t isoCharged() const {return _isoCharged;};

  inline void SetisoSum(Double_t isoSum){_isoSum = isoSum;};
  inline Double_t GetisoSum() const {return _isoSum;};
  inline Double_t isoSum() const {return _isoSum;};

  inline void SetisoCharParPt(Double_t isoCharParPt){_isoCharParPt = isoCharParPt;};
  inline Double_t GetisoCharParPt() const {return _isoCharParPt;};
  inline Double_t isoCharParPt() const {return _isoCharParPt;};

  inline void SetisoNeutralHadron(Double_t isoNeutralHadron){_isoNeutralHadron = isoNeutralHadron;};
  inline Double_t GetisoNeutralHadron() const {return _isoNeutralHadron;};
  inline Double_t isoNeutralHadron() const {return _isoNeutralHadron;};

  inline void SetisoPhoton(Double_t isoPhoton){_isoPhoton = isoPhoton;};
  inline Double_t GetisoPhoton() const {return _isoPhoton;};
  inline Double_t isoPhoton() const {return _isoPhoton;};

  inline void SetisoPU(Double_t isoPU){_isoPU = isoPU;};
  inline Double_t GetisoPU() const {return _isoPU;};
  inline Double_t isoPU() const {return _isoPU;};

  inline void Setchi2(Double_t chi2){_chi2 = chi2;};
  inline Double_t Getchi2() const {return _chi2;};
  inline Double_t chi2() const {return _chi2;};

  inline void SetvalidHits(Double_t validHits){_validHits = validHits;};
  inline Double_t GetvalidHits() const {return _validHits;};
  inline Double_t validHits() const {return _validHits;};

  inline void SetvalidHitsInner(Double_t validHitsInner){_validHitsInner = validHitsInner;};
  inline Double_t GetvalidHitsInner() const {return _validHitsInner;};
  inline Double_t validHitsInner() const {return _validHitsInner;};

  inline void SetmatchedStat(Double_t matchedStat){_matchedStat = matchedStat;};
  inline Double_t GetmatchedStat() const {return _matchedStat;};
  inline Double_t matchedStat() const {return _matchedStat;};

  inline void Setdxy(Double_t dxy){_dxy = dxy;};
  inline Double_t Getdxy() const {return _dxy;};
  inline Double_t dxy() const {return _dxy;};

  inline void Setdz(Double_t dz){_dz = dz;};
  inline Double_t Getdz() const {return _dz;};
  inline Double_t dz() const {return _dz;};

  inline void SetTLayers(Double_t TLayers){_TLayers = TLayers;};
  inline Double_t GetTLayers() const {return _TLayers;};
  inline Double_t TLayers() const {return _TLayers;};

  inline void SetrelIsoR04(Double_t relIsoR04){_relIsoR04 = relIsoR04;};
  inline Double_t GetrelIsoR04() const {return _relIsoR04;};
  inline Double_t relIsoR04() const {return _relIsoR04;};

  inline void Setndof(Double_t ndof){_ndof = ndof;};
  inline Double_t Getndof() const {return _ndof;};
  inline Double_t ndof() const {return _ndof;};

  inline void SetCharge(Double_t charge){_charge = charge;};
  inline Double_t GetCharge() const {return _charge;};
  inline Double_t charge() const {return _charge;};

  inline void SetminiIsoRel(Double_t miniIsoRel){_miniIsoRel = miniIsoRel;};
  inline Double_t GetminiIsoRel() const {return _miniIsoRel;};
  inline Double_t miniIsoRel() const {return _miniIsoRel;};

  inline void SetIP3Dsig(Double_t IP3Dsig){_IP3Dsig = IP3Dsig;};
  inline Double_t GetIP3Dsig() const {return _IP3Dsig;};
  inline Double_t IP3Dsig() const {return _IP3Dsig;};

  inline void Setjetptratio(Double_t jetptratio){_jetptratio = jetptratio;};
  inline Double_t Getjetptratio() const {return _jetptratio;};
  inline Double_t jetptratio() const {return _jetptratio;};

  inline void Setjetcsv(Double_t jetcsv){_jetcsv = jetcsv;};
  inline Double_t Getjetcsv() const {return _jetcsv;};
  inline Double_t jetcsv() const {return _jetcsv;};

  inline void Setlepjetchtrks(Double_t lepjetchtrks){_lepjetchtrks = lepjetchtrks;};
  inline Double_t Getlepjetchtrks() const {return _lepjetchtrks;};
  inline Double_t lepjetchtrks() const {return _lepjetchtrks;};

  inline void SetminiIsoCh(Double_t miniIsoCh){_miniIsoCh = miniIsoCh;};
  inline Double_t GetminiIsoCh() const {return _miniIsoCh;};
  inline Double_t miniIsoCh() const {return _miniIsoCh;};

  inline void SetminiIsoPUsub(Double_t miniIsoPUsub){_miniIsoPUsub = miniIsoPUsub;};
  inline Double_t GetminiIsoPUsub() const {return _miniIsoPUsub;};
  inline Double_t miniIsoPUsub() const {return _miniIsoPUsub;};

  inline void Setptrel(Double_t ptrel){_ptrel = ptrel;};
  inline Double_t Getptrel() const {return _ptrel;};
  inline Double_t ptrel() const {return _ptrel;};

  inline void Setjetdr(Double_t jetdr){_jetdr = jetdr;};
  inline Double_t Getjetdr() const {return _jetdr;};
  inline Double_t jetdr() const {return _jetdr;};

  inline void SetpdgId(Double_t pdgId){_pdgId = pdgId;};
  inline Double_t GetpdgId() const {return _pdgId;};
  inline Double_t pdgId() const {return _pdgId;};

  inline void Setjetpt(Double_t jetpt){_jetpt = jetpt;};
  inline Double_t Getjetpt() const {return _jetpt;};
  inline Double_t jetpt() const {return _jetpt;};

  inline void SetisGlobal(Double_t isGlobal){_isGlobal = isGlobal;};
  inline Double_t GetisGlobal() const {return _isGlobal;};
  inline Double_t isGlobal() const {return _isGlobal;};

  inline void Setchi2LocalPosition(Double_t chi2LocalPosition){_chi2LocalPosition = chi2LocalPosition;};
  inline Double_t Getchi2LocalPosition() const {return _chi2LocalPosition;};
  inline Double_t chi2LocalPosition() const {return _chi2LocalPosition;};

  inline void SettrkKink(Double_t trkKink){_trkKink = trkKink;};
  inline Double_t GettrkKink() const {return _trkKink;};
  inline Double_t trkKink() const {return _trkKink;};

  inline void SetvalidFraction(Double_t validFraction){_validFraction = validFraction;};
  inline Double_t GetvalidFraction() const {return _validFraction;};
  inline Double_t validFraction() const {return _validFraction;};

  inline void SetsegmentCompatibility(Double_t segmentCompatibility){_segmentCompatibility = segmentCompatibility;};
  inline Double_t GetsegmentCompatibility() const {return _segmentCompatibility;};
  inline Double_t segmentCompatibility() const {return _segmentCompatibility;};

  inline void SetpTErrOVpT_it(Double_t pTErrOVpT_it){_pTErrOVpT_it = pTErrOVpT_it;};
  inline Double_t GetpTErrOVpT_it() const {return _pTErrOVpT_it;};
  inline Double_t pTErrOVpT_it() const {return _pTErrOVpT_it;};

  inline void SetSCeta(Double_t SCeta){_SCeta = SCeta;};
  inline Double_t GetSCeta() const {return _SCeta;};
  inline Double_t SCeta() const {return _SCeta;};

  inline void SetexpectedMissingInnerHits(Double_t expectedMissingInnerHits){_expectedMissingInnerHits = expectedMissingInnerHits;};
  inline Double_t GetexpectedMissingInnerHits() const {return _expectedMissingInnerHits;};
  inline Double_t expectedMissingInnerHits() const {return _expectedMissingInnerHits;};

  inline void Setfull5x5_sigmaIetaIeta(Double_t full5x5_sigmaIetaIeta){_full5x5_sigmaIetaIeta = full5x5_sigmaIetaIeta;};
  inline Double_t Getfull5x5_sigmaIetaIeta() const {return _full5x5_sigmaIetaIeta;};
  inline Double_t full5x5_sigmaIetaIeta() const {return _full5x5_sigmaIetaIeta;};

  inline void SethOverE(Double_t hOverE){_hOverE = hOverE;};
  inline Double_t GethOverE() const {return _hOverE;};
  inline Double_t hOverE() const {return _hOverE;};

  inline void SetdEtaIn(Double_t dEtaIn){_dEtaIn = dEtaIn;};
  inline Double_t GetdEtaIn() const {return _dEtaIn;};
  inline Double_t dEtaIn() const {return _dEtaIn;};

  inline void SetdPhiIn(Double_t dPhiIn){_dPhiIn = dPhiIn;};
  inline Double_t GetdPhiIn() const {return _dPhiIn;};
  inline Double_t dPhiIn() const {return _dPhiIn;};

  inline void SetooEmooP(Double_t ooEmooP){_ooEmooP = ooEmooP;};
  inline Double_t GetooEmooP() const {return _ooEmooP;};
  inline Double_t ooEmooP() const {return _ooEmooP;};

  inline void SetmvaValue_HZZ(Double_t mvaValue_HZZ){_mvaValue_HZZ = mvaValue_HZZ;};
  inline Double_t GetmvaValue_HZZ() const {return _mvaValue_HZZ;};
  inline Double_t mvaValue_HZZ() const {return _mvaValue_HZZ;};

  inline void SetBDT(Double_t BDT){_BDT = BDT;};
  inline Double_t GetBDT() const {return _BDT;};
  inline Double_t BDT() const {return _BDT;};

  inline void Setconept(Double_t conept){_conept = conept;};
  inline Double_t Getconept() const {return _conept;};
  inline Double_t conept() const {return _conept;};
  
    // ttH functions
    void set_lepMVAreader(TEnv* config);

private:

  Bool_t _passTightId;
  Bool_t _passLooseId;
  Bool_t _isSoft;
  Bool_t _isHighPt;
  Bool_t _isPf;
  Double_t _isoCharged;
  Double_t _isoSum;
  Double_t _isoCharParPt;
  Double_t _isoNeutralHadron;
  Double_t _isoPhoton;
  Double_t _isoPU;
  Double_t _chi2;
  Double_t _validHits;
  Double_t _validHitsInner;
  Double_t _matchedStat;
  Double_t _dxy;
  Double_t _dz;
  Double_t _TLayers;
  Double_t _relIsoR04;
  Double_t _ndof;
  Double_t _charge;
  Double_t _miniIsoRel;
  Double_t _IP3Dsig;
  Double_t _jetptratio;
  Double_t _jetcsv;
  Double_t _lepjetchtrks;
  Double_t _miniIsoCh;
  Double_t _miniIsoPUsub;
  Double_t _ptrel;
  Double_t _jetdr;
  Double_t _pdgId;
  Double_t _jetpt;
  Double_t _isGlobal;
  Double_t _chi2LocalPosition;
  Double_t _trkKink;
  Double_t _validFraction;
  Double_t _segmentCompatibility;
  Double_t _pTErrOVpT_it;
  Double_t _BDT;
  Double_t _conept;
  Double_t _SCeta;
  Double_t _expectedMissingInnerHits;
  Double_t _full5x5_sigmaIetaIeta;
  Double_t _hOverE;
  Double_t _dEtaIn;
  Double_t _dPhiIn;
  Double_t _ooEmooP;
  Double_t _mvaValue_HZZ;

  /// cuts reading from config
  Double_t _closestMuonCut;
  
  //////////////////////////////////
  // Definitions of the objects go here. This way we don't need to access the configuration file for every particle
  map<TString,Double_t> _minPtCuts;
  map<TString,Double_t> _maxEtaCuts;
  map<TString,Double_t> _maxRelIsoCuts;
  map<TString,Double_t> _maxDxyCuts;
  map<TString,Double_t> _maxDzCuts;
  map<TString,Double_t> _maxIP3DsigCuts;
  map<TString,Double_t> _maxMiniIsoRelCuts;
  map<TString,Double_t> _ConePtCuts;
  map<TString,Double_t> _BDTCuts;
  map<TString,Double_t> _jetptratioCuts;
  map<TString,Double_t> _SegmentCompCuts;
  map<TString,Double_t> _jetcsvLCuts;
  map<TString,Double_t> _jetcsvHCuts;

    // ttH functions
    // lepton mva
    TMVA::Reader *mu_reader_;
    TMVA::Reader *ele_reader_;
    Float_t varpt;
    Float_t vareta;
    Float_t varneuRelIso;
    Float_t varchRelIso;
    Float_t varjetPtRel_in;
    Float_t varjetPtRatio_in;
    Float_t varjetBTagCSV_in;
    Float_t varjetNDauCharged_in;
    Float_t varsip3d;
    Float_t varmvaId;
    Float_t vardxy;
    Float_t vardz;
    Float_t varSegCompat;
    double get_LeptonMVA(); 

  ////////////////////////////////////////////////////////////////////////////////
  // Integrate classes into the Root system
  // Must come at end of class definition
  ClassDef(Lepton,0)
  ////////////////////////////////////////////////////////////////////////////////

};


#endif