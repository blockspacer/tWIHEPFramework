//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Wed Apr 10 10:25:23 2019 by ROOT version 6.12/07
// from TTree EventTree/EventTree
// found on file: OutTree.root
//////////////////////////////////////////////////////////

#ifndef EventTree_h
#define EventTree_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.

class EventTree {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

// Fixed size dimensions of array or collections stored in the TTree if any.

   // Declaration of leaf types
   std::vector<double>  *Gen_pt;
   std::vector<double>  *Gen_eta;
   std::vector<double>  *Gen_phi;
   std::vector<double>  *Gen_p;
   std::vector<double>  *Gen_energy;
   std::vector<double>  *Gen_charge;
   std::vector<double>  *Gen_vx;
   std::vector<double>  *Gen_vy;
   std::vector<double>  *Gen_vz;
   std::vector<double>  *Gen_status;
   std::vector<double>  *Gen_pdg_id;
   std::vector<double>  *Gen_motherpdg_id;
   std::vector<double>  *Gen_numDaught;
   std::vector<double>  *Gen_numMother;
   std::vector<int>     *Gen_BmotherIndex;
   std::vector<int>     *Gen_BmotherIndices;
   std::vector<int>     *Gen_BdaughtIndices;
   std::vector<int>     *Gen_isPromptFinalState;
   std::vector<int>     *Gen_isDirectPromptTauDecayProductFinalState;
   Int_t           HiggsDecay;
   ULong64_t       EVENT_event;
   Int_t           EVENT_run;
   Int_t           EVENT_lumiBlock;
   Double_t        EVENT_genWeight;
   std::vector<double>  *EVENT_genWeights;
   std::vector<double>  *EVENT_psWeights;
   std::vector<double>  *EVENT_rWeights;
   Double_t        EVENT_genHT;
   Double_t        EVENT_genPt;
   Double_t        EVENT_rhopog;
   Double_t        EVENT_rhotth;
   Double_t        EVENT_originalXWGTUP;
   Double_t        EVENT_scalePDF;
   Double_t        EVENT_Q2tthbbWeightUp;
   Double_t        EVENT_Q2tthbbWeightDown;
   Double_t        EVENT_PDFtthbbWeightUp;
   Double_t        EVENT_PDFtthbbWeightDown;
   Double_t        EVENT_fixedGridRhoFastjetCentral;
   Double_t        EVENT_fixedGridRhoFastjetCentralChargedPileUp;
   Double_t        EVENT_fixedGridRhoFastjetCentralNeutral;
   Double_t        EVENT_prefireWeight;
   Double_t        EVENT_prefireWeightUp;
   Double_t        EVENT_prefireWeightDown;
   Int_t           Flag_HBHENoiseFilter;
   Int_t           Flag_HBHENoiseIsoFilter;
   Int_t           Flag_CSCTightHaloFilter;
   Int_t           Flag_CSCTightHaloTrkMuUnvetoFilter;
   Int_t           Flag_CSCTightHalo2015Filter;
   Int_t           Flag_HcalStripHaloFilter;
   Int_t           Flag_hcalLaserEventFilter;
   Int_t           Flag_EcalDeadCellTriggerPrimitiveFilter;
   Int_t           Flag_EcalDeadCellBoundaryEnergyFilter;
   Int_t           Flag_goodVertices;
   Int_t           Flag_eeBadScFilter;
   Int_t           Flag_ecalLaserCorrFilter;
   Int_t           Flag_trkPOGFilters;
   Int_t           Flag_chargedHadronTrackResolutionFilter;
   Int_t           Flag_muonBadTrackFilter;
   Int_t           Flag_trkPOG_manystripclus53X;
   Int_t           Flag_trkPOG_toomanystripclus53X;
   Int_t           Flag_trkPOG_logErrorTooManyClusters;
   Int_t           Flag_METFilters;
   Int_t           Flag_globalSuperTightHalo2016Filter;
   Int_t           Flag_BadPFMuonFilter;
   Int_t           Flag_BadChargedCandidateFilter;
   Int_t           Flag_ecalBadCalibFilter;
   Int_t           HLT_PFHT650_WideJetMJJ900DEtaJJ1p5;
   Int_t           HLT_PFHT650_WideJetMJJ950DEtaJJ1p5;
   Int_t           HLT_PFHT800;
   Int_t           HLT_PFHT900;
   Int_t           HLT_PFJet450;
   Int_t           HLT_PFJet500;
   Int_t           HLT_AK8PFJet450;
   Int_t           HLT_AK8PFJet500;
   Int_t           HLT_AK8PFJet360_TrimMass30;
   Int_t           HLT_AK8PFHT700_TrimR0p1PT0p03Mass50;
   Int_t           HLT_Ele27_eta2p1_WPTight_Gsf;
   Int_t           HLT_Ele27_WPTight_Gsf;
   Int_t           HLT_Ele25_eta2p1_WPTight_Gsf;
   Int_t           HLT_Ele115_CaloIdVT_GsfTrkIdT;
   Int_t           HLT_DoubleEle24_22_eta2p1_WPLoose_Gsf;
   Int_t           HLT_DoubleEle33_CaloIdL_MW;
   Int_t           HLT_DoubleEle33_CaloIdL_GsfTrkIdVL_MW;
   Int_t           HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_DZ;
   Int_t           HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL;
   Int_t           HLT_IsoMu22;
   Int_t           HLT_IsoTkMu22;
   Int_t           HLT_IsoMu24;
   Int_t           HLT_IsoTkMu24;
   Int_t           HLT_IsoMu22_eta2p1;
   Int_t           HLT_IsoTkMu22_eta2p1;
   Int_t           HLT_Mu50;
   Int_t           HLT_TkMu50;
   Int_t           HLT_DoubleMu33NoFiltersNoVtx;
   Int_t           HLT_DoubleMu23NoFiltersNoVtxDisplaced;
   Int_t           HLT_Mu30_TkMu11;
   Int_t           HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ;
   Int_t           HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_Mass3p8;
   Int_t           HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL;
   Int_t           HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ;
   Int_t           HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL;
   Int_t           HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_DZ;
   Int_t           HLT_Mu23_TrkIsoVVL_Ele8_CaloIdL_TrackIdL_IsoVL_DZ;
   Int_t           HLT_Ele32_WPTight_Gsf;
   Int_t           HLT_Ele35_WPTight_Gsf;
   Int_t           HLT_IsoMu27;
   Int_t           HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL;
   Int_t           HLT_Mu12_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ;
   Int_t           HLT_Ele16_Ele12_Ele8_CaloIdL_TrackIdL;
   Int_t           HLT_Mu8_DiEle12_CaloIdL_TrackIdL;
   Int_t           HLT_DiMu9_Ele9_CaloIdL_TrackIdL_DZ;
   Int_t           HLT_TripleMu_12_10_5;
   Int_t           HLT_Ele17_Ele12_CaloIdL_TrackIdL_IsoVL_DZ;
   Int_t           HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL;
   Int_t           HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ;
   Int_t           HLT_TkMu17_TrkIsoVVL_TkMu8_TrkIsoVVL;
   Int_t           HLT_TkMu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ;
   Int_t           HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_Mass8;
   Int_t           HLT_Mu8_TrkIsoVVL_Ele17_CaloIdL_TrackIdL_IsoVL;
   Int_t           HLT_Mu17_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL;
   Int_t           HLT_Mu23_TrkIsoVVL_Ele8_CaloIdL_TrackIdL_IsoVL;
   Int_t           HLT_TripleMu_10_5_5_DZ;
   Int_t           HLT_Mu8_DiEle12_CaloIdL_TrackIdL_DZ;
   Int_t           HLT_DiMu9_Ele9_CaloIdL_TrackIdL;
   Int_t           HLT_Ele27_eta2p1_WPLoose_Gsf;
   Int_t           pvertex_notempty;
   Int_t           nBestVtx;
   Int_t           npuVertices;
   Double_t        trueInteractions;
   Int_t           ootnpuVertices;
   Int_t           npuVerticesm1;
   Int_t           npuVerticesp1;
   std::vector<double>  *pvertex_ndof;
   std::vector<double>  *pvertex_dxy;
   std::vector<double>  *pvertex_x;
   std::vector<double>  *pvertex_y;
   std::vector<double>  *pvertex_z;
   std::vector<double>  *pvertex_xError;
   std::vector<double>  *pvertex_yError;
   std::vector<double>  *pvertex_zError;
   std::vector<double>  *beamSpot_x0;
   std::vector<double>  *beamSpot_y0;
   std::vector<double>  *beamSpot_z0;
   std::vector<double>  *beamSpot_xWidth;
   std::vector<double>  *beamSpot_yWidth;
   std::vector<double>  *Muon_pt;
   std::vector<double>  *Muon_eta;
   std::vector<double>  *Muon_phi;
   std::vector<double>  *Muon_energy;
   std::vector<double>  *Muon_px;
   std::vector<double>  *Muon_py;
   std::vector<double>  *Muon_pz;
   std::vector<double>  *Muon_p;
   std::vector<double>  *Muon_dB;
   std::vector<double>  *Muon_pt_it;
   std::vector<double>  *Muon_ptErr_it;
   std::vector<double>  *Muon_pTErrOVpT_it;
   std::vector<double>  *Muon_pt_bt;
   std::vector<double>  *Muon_ptErr_bt;
   std::vector<double>  *Muon_pTErrOVpT_bt;
   std::vector<double>  *Muon_pt_tunePbt;
   std::vector<double>  *Muon_charge;
   std::vector<int>     *Muon_soft;
   std::vector<int>     *Muon_loose;
   std::vector<int>     *Muon_medium;
   std::vector<int>     *Muon_tight;
   std::vector<int>     *Muon_isHighPt;
   std::vector<int>     *Muon_isTrkHighPt;
   std::vector<int>     *Muon_TrkIsoLoose;
   std::vector<int>     *Muon_TrkIsoTight;
   std::vector<int>     *Muon_TrigLoose;
   std::vector<int>     *Muon_POGisGood;
   std::vector<int>     *Muon_pdgId;
   std::vector<int>     *Muon_simPdgId;
   std::vector<int>     *Muon_simMotherPdgId;
   std::vector<int>     *Muon_simFlavour;
   std::vector<int>     *Muon_pf;
   std::vector<int>     *Muon_isGlobal;
   std::vector<int>     *Muon_isTrackerMuon;
   std::vector<int>     *Muon_tunePBestTrackType;
   std::vector<double>  *Muon_isoR04Charged;
   std::vector<double>  *Muon_isoR04NeutralHadron;
   std::vector<double>  *Muon_isoR04Photon;
   std::vector<double>  *Muon_isoR04PU;
   std::vector<double>  *Muon_relIsoDeltaBetaR04;
   std::vector<double>  *Muon_isoR04CharParPt;
   std::vector<double>  *Muon_isoR03Charged;
   std::vector<double>  *Muon_isoR03NeutralHadron;
   std::vector<double>  *Muon_isoR03Photon;
   std::vector<double>  *Muon_isoR03PU;
   std::vector<double>  *Muon_relIsoDeltaBetaR03;
   std::vector<double>  *Muon_isoR03CharParPt;
   std::vector<double>  *Muon_trackIso;
   std::vector<double>  *Muon_TrackerIso;
   std::vector<double>  *Muon_ecalIso;
   std::vector<double>  *Muon_hcalIso;
   std::vector<double>  *Muon_caloIso;
   std::vector<double>  *Muon_isoSum;
   std::vector<double>  *Muon_pfEcalEnergy;
   std::vector<double>  *Muon_chi2;
   std::vector<double>  *Muon_chi2LocalPosition;
   std::vector<double>  *Muon_matchedStat;
   std::vector<double>  *Muon_validHits;
   std::vector<double>  *Muon_validHitsInner;
   std::vector<double>  *Muon_TLayers;
   std::vector<double>  *Muon_ndof;
   std::vector<double>  *Muon_validFraction;
   std::vector<double>  *Muon_pixelLayersWithMeasurement;
   std::vector<double>  *Muon_qualityhighPurity;
   std::vector<double>  *Muon_trkKink;
   std::vector<double>  *Muon_segmentCompatibility;
   std::vector<double>  *Muon_dxy_pv;
   std::vector<double>  *Muon_dz_pv;
   std::vector<double>  *Muon_dz_bs;
   std::vector<double>  *Muon_dxy_bs;
   std::vector<double>  *Muon_dzError;
   std::vector<double>  *Muon_dxyError;
   std::vector<double>  *Muon_vtx;
   std::vector<double>  *Muon_vty;
   std::vector<double>  *Muon_vtz;
   std::vector<double>  *Muon_track_PCAx_bs;
   std::vector<double>  *Muon_track_PCAy_bs;
   std::vector<double>  *Muon_track_PCAz_bs;
   std::vector<double>  *Muon_track_PCAx_pv;
   std::vector<double>  *Muon_track_PCAy_pv;
   std::vector<double>  *Muon_track_PCAz_pv;
   std::vector<double>  *Muon_trackFitErrorMatrix_00;
   std::vector<double>  *Muon_trackFitErrorMatrix_01;
   std::vector<double>  *Muon_trackFitErrorMatrix_02;
   std::vector<double>  *Muon_trackFitErrorMatrix_11;
   std::vector<double>  *Muon_trackFitErrorMatrix_12;
   std::vector<double>  *Muon_trackFitErrorMatrix_22;
   std::vector<double>  *Muon_dz_bt;
   std::vector<double>  *Muon_dxy_bt;
   std::vector<double>  *Muon_miniIsoRel;
   std::vector<double>  *Muon_miniIsoCh;
   std::vector<double>  *Muon_miniIsoNeu;
   std::vector<double>  *Muon_miniIsoPUsub;
   std::vector<double>  *Muon_jetdr;
   std::vector<double>  *Muon_jetl1corr;
   std::vector<double>  *Muon_jetislep;
   std::vector<int>     *Muon_jetidx;
   std::vector<double>  *Muon_jetpt;
   std::vector<double>  *Muon_jetptratio;
   std::vector<double>  *Muon_jetptratioV2;
   std::vector<double>  *Muon_jetcsv;
   std::vector<double>  *Muon_jetdeepcsv;
   std::vector<double>  *Muon_jetdeepflavour;
   std::vector<double>  *Muon_ptrel;
   std::vector<double>  *Muon_IP3Dsig_it;
   std::vector<double>  *Muon_pvass;
   std::vector<double>  *Muon_etarel;
   std::vector<double>  *Muon_ptOVen;
   std::vector<double>  *Muon_mujet_pfJetProbabilityBJetTag;
   std::vector<double>  *Muon_mujet_pfCombinedMVABJetTags;
   std::vector<double>  *Muon_mujet_qgl;
   std::vector<double>  *Muon_mumass;
   std::vector<double>  *Muon_mujet_mass;
   std::vector<double>  *Muon_mujet_Wmass;
   std::vector<double>  *Muon_mujet_Topmass;
   std::vector<double>  *Muon_mujet_WTopmass;
   std::vector<double>  *Muon_IP3D_val;
   std::vector<double>  *Muon_IP3D_err;
   std::vector<double>  *Muon_IP3D_sig;
   std::vector<double>  *Muon_IP2D_val;
   std::vector<double>  *Muon_IP2D_err;
   std::vector<double>  *Muon_IP2D_sig;
   std::vector<double>  *Muon_sIP3D_val;
   std::vector<double>  *Muon_sIP3D_err;
   std::vector<double>  *Muon_sIP3D_sig;
   std::vector<double>  *Muon_sIP2D_val;
   std::vector<double>  *Muon_sIP2D_err;
   std::vector<double>  *Muon_sIP2D_sig;
   std::vector<double>  *Muon_IP1D_val;
   std::vector<double>  *Muon_IP1D_err;
   std::vector<double>  *Muon_IP1D_sig;
   std::vector<double>  *Muon_sIP1D_val;
   std::vector<double>  *Muon_sIP1D_err;
   std::vector<double>  *Muon_sIP1D_sig;
   std::vector<double>  *Muon_lepjetMaxIP3D_val;
   std::vector<double>  *Muon_lepjetMaxIP3D_sig;
   std::vector<double>  *Muon_lepjetMaxsIP3D_val;
   std::vector<double>  *Muon_lepjetMaxsIP3D_sig;
   std::vector<double>  *Muon_lepjetMaxIP2D_val;
   std::vector<double>  *Muon_lepjetMaxIP2D_sig;
   std::vector<double>  *Muon_lepjetMaxsIP2D_val;
   std::vector<double>  *Muon_lepjetMaxsIP2D_sig;
   std::vector<double>  *Muon_lepjetMaxIP1D_val;
   std::vector<double>  *Muon_lepjetMaxIP1D_sig;
   std::vector<double>  *Muon_lepjetMaxsIP1D_val;
   std::vector<double>  *Muon_lepjetMaxsIP1D_sig;
   std::vector<double>  *Muon_lepjetAvIP3D_val;
   std::vector<double>  *Muon_lepjetAvIP3D_sig;
   std::vector<double>  *Muon_lepjetAvsIP3D_val;
   std::vector<double>  *Muon_lepjetAvsIP3D_sig;
   std::vector<double>  *Muon_lepjetAvIP2D_val;
   std::vector<double>  *Muon_lepjetAvIP2D_sig;
   std::vector<double>  *Muon_lepjetAvsIP2D_val;
   std::vector<double>  *Muon_lepjetAvsIP2D_sig;
   std::vector<double>  *Muon_lepjetAvIP1D_val;
   std::vector<double>  *Muon_lepjetAvIP1D_sig;
   std::vector<double>  *Muon_lepjetAvsIP1D_val;
   std::vector<double>  *Muon_lepjetAvsIP1D_sig;
   std::vector<double>  *Muon_lepjetchtrks;
   std::vector<double>  *Muon_lepjetpvchtrks;
   std::vector<double>  *Muon_lepjetnonpvchtrks;
   std::vector<double>  *Muon_lepjetndaus;
   std::vector<double>  *Muon_lepjetpvchi2;
   std::vector<double>  *Muon_lepjetnumno2trk;
   std::vector<double>  *Muon_gen_pt;
   std::vector<double>  *Muon_gen_eta;
   std::vector<double>  *Muon_gen_phi;
   std::vector<double>  *Muon_gen_en;
   std::vector<int>     *Muon_gen_pdgId;
   std::vector<int>     *Muon_gen_isPromptFinalState;
   std::vector<int>     *Muon_gen_isDirectPromptTauDecayProductFinalState;
   std::vector<int>     *Muon_isMatchedToTrigger;
   std::vector<double>  *patElectron_pt;
   std::vector<double>  *patElectron_eta;
   std::vector<double>  *patElectron_phi;
   std::vector<double>  *patElectron_energy;
   std::vector<double>  *patElectron_px;
   std::vector<double>  *patElectron_py;
   std::vector<double>  *patElectron_pz;
   std::vector<double>  *patElectron_p;
   std::vector<double>  *patElectron_Et;
   std::vector<double>  *patElectron_SCeta;
   std::vector<double>  *patElectron_inCrack;
   std::vector<double>  *patElectron_energySF;
   std::vector<double>  *patElectron_ecalEnergyErrPostCorr;
   std::vector<double>  *patElectron_ecalEnergyErrPreCorr;
   std::vector<double>  *patElectron_ecalEnergyPostCorr;
   std::vector<double>  *patElectron_ecalEnergyPreCorr;
   std::vector<double>  *patElectron_ecalTrkEnergyErrPostCorr;
   std::vector<double>  *patElectron_ecalTrkEnergyErrPreCorr;
   std::vector<double>  *patElectron_ecalTrkEnergyPostCorr;
   std::vector<double>  *patElectron_ecalTrkEnergyPreCorr;
   std::vector<double>  *patElectron_energyScaleDown;
   std::vector<double>  *patElectron_energyScaleGainDown;
   std::vector<double>  *patElectron_energyScaleGainUp;
   std::vector<double>  *patElectron_energyScaleStatDown;
   std::vector<double>  *patElectron_energyScaleStatUp;
   std::vector<double>  *patElectron_energyScaleSystDown;
   std::vector<double>  *patElectron_energyScaleSystUp;
   std::vector<double>  *patElectron_energyScaleUp;
   std::vector<double>  *patElectron_energyScaleValue;
   std::vector<double>  *patElectron_energySigmaDown;
   std::vector<double>  *patElectron_energySigmaPhiDown;
   std::vector<double>  *patElectron_energySigmaPhiUp;
   std::vector<double>  *patElectron_energySigmaRhoDown;
   std::vector<double>  *patElectron_energySigmaRhoUp;
   std::vector<double>  *patElectron_energySigmaUp;
   std::vector<double>  *patElectron_energySigmaValue;
   std::vector<double>  *patElectron_energySmearNrSigma;
   std::vector<double>  *patElectron_charge;
   std::vector<double>  *patElectron_isGsfCtfScPixChargeConsistent;
   std::vector<double>  *patElectron_isGsfScPixChargeConsistent;
   std::vector<int>     *patElectron_isPassVeto;
   std::vector<int>     *patElectron_isPassLoose;
   std::vector<int>     *patElectron_isPassMedium;
   std::vector<int>     *patElectron_isPassTight;
   std::vector<int>     *patElectron_isPassMvaIsowp80;
   std::vector<int>     *patElectron_isPassMvanonIsowp80;
   std::vector<int>     *patElectron_isPassMvaIsowp90;
   std::vector<int>     *patElectron_isPassMvanonIsowp90;
   std::vector<int>     *patElectron_isPassMvaIsowpLoose;
   std::vector<int>     *patElectron_isPassMvanonIsowpLoose;
   std::vector<float>   *patElectron_mvaValue_nonIso;
   std::vector<float>   *patElectron_mvaCategory_nonIso;
   std::vector<float>   *patElectron_mvaValue_Iso;
   std::vector<float>   *patElectron_mvaCategory_Iso;
   std::vector<int>     *patElectron_isPassOldVeto;
   std::vector<int>     *patElectron_isPassOldLoose;
   std::vector<int>     *patElectron_isPassOldMedium;
   std::vector<int>     *patElectron_isPassOldTight;
   std::vector<int>     *patElectron_isPassOldMvaIsowp80;
   std::vector<int>     *patElectron_isPassOldMvanonIsowp80;
   std::vector<int>     *patElectron_isPassOldMvaIsowp90;
   std::vector<int>     *patElectron_isPassOldMvanonIsowp90;
   std::vector<int>     *patElectron_isPassOldMvaIsowpLoose;
   std::vector<int>     *patElectron_isPassOldMvanonIsowpLoose;
   std::vector<float>   *patElectron_OldmvaValue_nonIso;
   std::vector<float>   *patElectron_OldmvaCategory_nonIso;
   std::vector<float>   *patElectron_OldmvaValue_Iso;
   std::vector<float>   *patElectron_OldmvaCategory_Iso;
   std::vector<int>     *patElectron_isPassHEEPId;
   std::vector<int>     *patElectron_pdgId;
   std::vector<int>     *patElectron_isEcalDriven;
   std::vector<int>     *patElectron_isPassMvaHZZwpLoose;
   std::vector<float>   *patElectron_mvaValue_HZZ;
   std::vector<float>   *patElectron_mvaCategory_HZZ;
   std::vector<double>  *patElectron_isoChargedHadrons;
   std::vector<double>  *patElectron_isoNeutralHadrons;
   std::vector<double>  *patElectron_isoPhotons;
   std::vector<double>  *patElectron_isoPU;
   std::vector<double>  *patElectron_relIsoDeltaBeta;
   std::vector<double>  *patElectron_relIsoRhoEA;
   std::vector<double>  *patElectron_dr03EcalRecHitSumEt;
   std::vector<double>  *patElectron_dr03HcalDepth1TowerSumEt;
   std::vector<double>  *patElectron_isolPtTracks;
   std::vector<double>  *patElectron_ecalPFClusterIso;
   std::vector<double>  *patElectron_hcalPFClusterIso;
   std::vector<double>  *patElectron_dEtaIn;
   std::vector<double>  *patElectron_dPhiIn;
   std::vector<double>  *patElectron_full5x5_sigmaIetaIeta;
   std::vector<double>  *patElectron_full5x5_e2x5Max;
   std::vector<double>  *patElectron_full5x5_e5x5;
   std::vector<double>  *patElectron_full5x5_e1x5;
   std::vector<double>  *patElectron_hOverE;
   std::vector<double>  *patElectron_ooEmooP;
   std::vector<double>  *patElectron_passConversionVeto;
   std::vector<double>  *patElectron_expectedMissingInnerHits;
   std::vector<double>  *patElectron_gsfTrack_ndof;
   std::vector<double>  *patElectron_gsfTrack_normChi2;
   std::vector<double>  *patElectron_gsfTrack_dz_pv;
   std::vector<double>  *patElectron_gsfTrack_dxy_pv;
   std::vector<double>  *patElectron_d0;
   std::vector<double>  *patElectron_dzError;
   std::vector<double>  *patElectron_dxyError;
   std::vector<double>  *patElectron_gsfTrack_vtx;
   std::vector<double>  *patElectron_gsfTrack_vty;
   std::vector<double>  *patElectron_gsfTrack_vtz;
   std::vector<double>  *patElectron_gsfTrack_dz_bs;
   std::vector<double>  *patElectron_gsfTrack_dxy_bs;
   std::vector<double>  *patElectron_gsfTrack_PCAx_pv;
   std::vector<double>  *patElectron_gsfTrack_PCAy_pv;
   std::vector<double>  *patElectron_gsfTrack_PCAz_pv;
   std::vector<double>  *patElectron_gsfTrack_PCAx_bs;
   std::vector<double>  *patElectron_gsfTrack_PCAy_bs;
   std::vector<double>  *patElectron_gsfTrack_PCAz_bs;
   std::vector<double>  *patElectron_gsfTrackFitErrorMatrix_00;
   std::vector<double>  *patElectron_gsfTrackFitErrorMatrix_01;
   std::vector<double>  *patElectron_gsfTrackFitErrorMatrix_02;
   std::vector<double>  *patElectron_gsfTrackFitErrorMatrix_11;
   std::vector<double>  *patElectron_gsfTrackFitErrorMatrix_12;
   std::vector<double>  *patElectron_gsfTrackFitErrorMatrix_22;
   std::vector<double>  *patElectron_miniIsoRel;
   std::vector<double>  *patElectron_miniIsoCh;
   std::vector<double>  *patElectron_miniIsoNeu;
   std::vector<double>  *patElectron_miniIsoPUsub;
   std::vector<double>  *patElectron_jetdr;
   std::vector<double>  *patElectron_jetl1corr;
   std::vector<double>  *patElectron_jetislep;
   std::vector<int>     *patElectron_jetidx;
   std::vector<double>  *patElectron_jetpt;
   std::vector<double>  *patElectron_jetptratio;
   std::vector<double>  *patElectron_jetptratioV2;
   std::vector<double>  *patElectron_jetcsv;
   std::vector<double>  *patElectron_jetdeepcsv;
   std::vector<double>  *patElectron_jetdeepflavour;
   std::vector<double>  *patElectron_ptrel;
   std::vector<double>  *patElectron_IP3Dsig;
   std::vector<double>  *patElectron_eleMVASpring15NonTrig25ns;
   std::vector<double>  *patElectron_eleMVASpring15NonTrig25ns_VL;
   std::vector<double>  *patElectron_pvass;
   std::vector<double>  *patElectron_etarel;
   std::vector<double>  *patElectron_ptOVen;
   std::vector<double>  *patElectron_elejet_pfJetProbabilityBJetTag;
   std::vector<double>  *patElectron_elejet_pfCombinedMVABJetTags;
   std::vector<double>  *patElectron_elejet_qgl;
   std::vector<double>  *patElectron_elemass;
   std::vector<double>  *patElectron_elejet_mass;
   std::vector<double>  *patElectron_elejet_Wmass;
   std::vector<double>  *patElectron_elejet_Topmass;
   std::vector<double>  *patElectron_elejet_WTopmass;
   std::vector<double>  *patElectron_IP3D_val;
   std::vector<double>  *patElectron_IP3D_err;
   std::vector<double>  *patElectron_IP3D_sig;
   std::vector<double>  *patElectron_IP2D_val;
   std::vector<double>  *patElectron_IP2D_err;
   std::vector<double>  *patElectron_IP2D_sig;
   std::vector<double>  *patElectron_sIP3D_val;
   std::vector<double>  *patElectron_sIP3D_err;
   std::vector<double>  *patElectron_sIP3D_sig;
   std::vector<double>  *patElectron_sIP2D_val;
   std::vector<double>  *patElectron_sIP2D_err;
   std::vector<double>  *patElectron_sIP2D_sig;
   std::vector<double>  *patElectron_IP1D_val;
   std::vector<double>  *patElectron_IP1D_err;
   std::vector<double>  *patElectron_IP1D_sig;
   std::vector<double>  *patElectron_sIP1D_val;
   std::vector<double>  *patElectron_sIP1D_err;
   std::vector<double>  *patElectron_sIP1D_sig;
   std::vector<double>  *patElectron_lepjetMaxIP3D_val;
   std::vector<double>  *patElectron_lepjetMaxIP3D_sig;
   std::vector<double>  *patElectron_lepjetMaxsIP3D_val;
   std::vector<double>  *patElectron_lepjetMaxsIP3D_sig;
   std::vector<double>  *patElectron_lepjetMaxIP2D_val;
   std::vector<double>  *patElectron_lepjetMaxIP2D_sig;
   std::vector<double>  *patElectron_lepjetMaxsIP2D_val;
   std::vector<double>  *patElectron_lepjetMaxsIP2D_sig;
   std::vector<double>  *patElectron_lepjetMaxIP1D_val;
   std::vector<double>  *patElectron_lepjetMaxIP1D_sig;
   std::vector<double>  *patElectron_lepjetMaxsIP1D_val;
   std::vector<double>  *patElectron_lepjetMaxsIP1D_sig;
   std::vector<double>  *patElectron_lepjetAvIP3D_val;
   std::vector<double>  *patElectron_lepjetAvIP3D_sig;
   std::vector<double>  *patElectron_lepjetAvsIP3D_val;
   std::vector<double>  *patElectron_lepjetAvsIP3D_sig;
   std::vector<double>  *patElectron_lepjetAvIP2D_val;
   std::vector<double>  *patElectron_lepjetAvIP2D_sig;
   std::vector<double>  *patElectron_lepjetAvsIP2D_val;
   std::vector<double>  *patElectron_lepjetAvsIP2D_sig;
   std::vector<double>  *patElectron_lepjetAvIP1D_val;
   std::vector<double>  *patElectron_lepjetAvIP1D_sig;
   std::vector<double>  *patElectron_lepjetAvsIP1D_val;
   std::vector<double>  *patElectron_lepjetAvsIP1D_sig;
   std::vector<double>  *patElectron_lepjetchtrks;
   std::vector<double>  *patElectron_lepjetpvchtrks;
   std::vector<double>  *patElectron_lepjetnonpvchtrks;
   std::vector<double>  *patElectron_lepjetndaus;
   std::vector<double>  *patElectron_lepjetpvchi2;
   std::vector<double>  *patElectron_lepjetnumno2trk;
   std::vector<double>  *patElectron_gen_pt;
   std::vector<double>  *patElectron_gen_eta;
   std::vector<double>  *patElectron_gen_phi;
   std::vector<double>  *patElectron_gen_en;
   std::vector<int>     *patElectron_gen_pdgId;
   std::vector<int>     *patElectron_gen_isPromptFinalState;
   std::vector<int>     *patElectron_gen_isDirectPromptTauDecayProductFinalState;
   std::vector<int>     *patElectron_isMatchedToTrigger;
   std::vector<double>  *Tau_pt;
   std::vector<double>  *Tau_eta;
   std::vector<double>  *Tau_phi;
   std::vector<double>  *Tau_energy;
   std::vector<double>  *Tau_px;
   std::vector<double>  *Tau_py;
   std::vector<double>  *Tau_pz;
   std::vector<double>  *Tau_p;
   std::vector<double>  *Tau_leadChargedCandPt;
   std::vector<double>  *Tau_leadChargedCandEta;
   std::vector<double>  *Tau_leadChargedCandPhi;
   std::vector<double>  *Tau_leadChargedCandE;
   std::vector<double>  *Tau_leadChargedCandTrack_pt;
   std::vector<double>  *Tau_leadChargedCandTrack_ptError;
   std::vector<double>  *Tau_charge;
   std::vector<double>  *Tau_leadChargedCandCharge;
   std::vector<int>     *Tau_decayModeFinding;
   std::vector<int>     *Tau_decayModeFindingNewDMs;
   std::vector<int>     *Tau_againstMuonLoose3;
   std::vector<int>     *Tau_againstMuonTight3;
   std::vector<int>     *Tau_againstElectronVLooseMVA6;
   std::vector<int>     *Tau_againstElectronLooseMVA6;
   std::vector<int>     *Tau_againstElectronMediumMVA6;
   std::vector<int>     *Tau_againstElectronTightMVA6;
   std::vector<double>  *Tau_chargedIsoPtSum;
   std::vector<double>  *Tau_neutralIsoPtSum;
   std::vector<double>  *Tau_puCorrPtSum;
   std::vector<int>     *Tau_byVLooseIsolationMVArun2v1DBoldDMwLT;
   std::vector<int>     *Tau_byLooseIsolationMVArun2v1DBoldDMwLT;
   std::vector<int>     *Tau_byMediumIsolationMVArun2v1DBoldDMwLT;
   std::vector<int>     *Tau_byTightIsolationMVArun2v1DBoldDMwLT;
   std::vector<int>     *Tau_byVTightIsolationMVArun2v1DBoldDMwLT;
   std::vector<int>     *Tau_byVLooseIsolationMVArun2v1DBnewDMwLT;
   std::vector<int>     *Tau_byLooseIsolationMVArun2v1DBnewDMwLT;
   std::vector<int>     *Tau_byMediumIsolationMVArun2v1DBnewDMwLT;
   std::vector<int>     *Tau_byTightIsolationMVArun2v1DBnewDMwLT;
   std::vector<int>     *Tau_byVTightIsolationMVArun2v1DBnewDMwLT;
   std::vector<int>     *Tau_byLooseIsolationMVArun2v1DBdR03oldDMwLT;
   std::vector<int>     *Tau_byMediumIsolationMVArun2v1DBdR03oldDMwLT;
   std::vector<int>     *Tau_byIsolationMVArun2017v2DBoldDMdR0p3wLTraw2017;
   std::vector<int>     *Tau_byVVLooseIsolationMVArun2017v2DBoldDMdR0p3wLT2017;
   std::vector<int>     *Tau_byVLooseIsolationMVArun2017v2DBoldDMdR0p3wLT2017;
   std::vector<int>     *Tau_byLooseIsolationMVArun2017v2DBoldDMdR0p3wLT2017;
   std::vector<int>     *Tau_byMediumIsolationMVArun2017v2DBoldDMdR0p3wLT2017;
   std::vector<int>     *Tau_byTightIsolationMVArun2017v2DBoldDMdR0p3wLT2017;
   std::vector<int>     *Tau_byVTightIsolationMVArun2017v2DBoldDMdR0p3wLT2017;
   std::vector<int>     *Tau_byVVTightIsolationMVArun2017v2DBoldDMdR0p3wLT2017;
   std::vector<double>  *Tau_nProngs;
   std::vector<double>  *Tau_leadChargedCandNdof;
   std::vector<double>  *Tau_leadChargedCandChi2;
   std::vector<double>  *Tau_leadChargedCandValidHits;
   std::vector<double>  *Tau_defaultDxy;
   std::vector<double>  *Tau_defaultDxyError;
   std::vector<double>  *Tau_defaultDxySig;
   std::vector<double>  *Tau_packedLeadTauCand_dxy;
   std::vector<double>  *Tau_packedLeadTauCand_dz;
   std::vector<double>  *Tau_packedLeadTauCand_dxyError;
   std::vector<double>  *Tau_packedLeadTauCand_dzError;
   std::vector<double>  *Tau_defaultFlightLengthX;
   std::vector<double>  *Tau_defaultFlightLengthY;
   std::vector<double>  *Tau_defaultFlightLengthZ;
   std::vector<double>  *Tau_defaultFlightLengthSig;
   std::vector<double>  *Tau_default_PCAx_pv;
   std::vector<double>  *Tau_default_PCAy_pv;
   std::vector<double>  *Tau_default_PCAz_pv;
   std::vector<double>  *Tau_leadChargedCandDz_pv;
   std::vector<double>  *Tau_leadChargedCandDxy_pv;
   std::vector<double>  *Tau_leadChargedCandDz_bs;
   std::vector<double>  *Tau_leadChargedCandDxy_bs;
   std::vector<double>  *Tau_leadChargedCandDzError;
   std::vector<double>  *Tau_leadChargedCandDxyError;
   std::vector<double>  *Tau_leadChargedCandVtx;
   std::vector<double>  *Tau_leadChargedCandVty;
   std::vector<double>  *Tau_leadChargedCandVtz;
   std::vector<double>  *Tau_leadChargedCandTrack_PCAx_bs;
   std::vector<double>  *Tau_leadChargedCandTrack_PCAy_bs;
   std::vector<double>  *Tau_leadChargedCandTrack_PCAz_bs;
   std::vector<double>  *Tau_leadChargedCandTrack_PCAx_pv;
   std::vector<double>  *Tau_leadChargedCandTrack_PCAy_pv;
   std::vector<double>  *Tau_leadChargedCandTrack_PCAz_pv;
   std::vector<double>  *Tau_leadChargedCandTrackFitErrorMatrix_00;
   std::vector<double>  *Tau_leadChargedCandTrackFitErrorMatrix_01;
   std::vector<double>  *Tau_leadChargedCandTrackFitErrorMatrix_02;
   std::vector<double>  *Tau_leadChargedCandTrackFitErrorMatrix_11;
   std::vector<double>  *Tau_leadChargedCandTrackFitErrorMatrix_12;
   std::vector<double>  *Tau_leadChargedCandTrackFitErrorMatrix_22;
   std::vector<double>  *Jet_pt;
   std::vector<double>  *Jet_eta;
   std::vector<double>  *Jet_phi;
   std::vector<double>  *Jet_energy;
   std::vector<double>  *Jet_mass;
   std::vector<double>  *Jet_px;
   std::vector<double>  *Jet_py;
   std::vector<double>  *Jet_pz;
   std::vector<double>  *Jet_Uncorr_pt;
   std::vector<double>  *Jet_L1corr_pt;
   std::vector<double>  *Jet_pfCombinedInclusiveSecondaryVertexV2BJetTags;
   std::vector<double>  *Jet_pfCombinedMVAV2BJetTags;
   std::vector<double>  *Jet_pfJetProbabilityBJetTags;
   std::vector<double>  *Jet_pfCombinedCvsLJetTags;
   std::vector<double>  *Jet_pfCombinedCvsBJetTags;
   std::vector<double>  *Jet_pfDeepCSVBJetTags;
   std::vector<double>  *Jet_pfDeepCSVProbb;
   std::vector<double>  *Jet_pfDeepCSVProbbb;
   std::vector<double>  *Jet_pfDeepCSVProbc;
   std::vector<double>  *Jet_pfDeepCSVProbcc;
   std::vector<double>  *Jet_pfDeepCSVProbudsg;
   std::vector<double>  *Jet_pfDeepFlavourBJetTags;
   std::vector<double>  *Jet_pfDeepFlavourProbb;
   std::vector<double>  *Jet_pfDeepFlavourProbbb;
   std::vector<double>  *Jet_pfDeepFlavourProblepb;
   std::vector<double>  *Jet_pfDeepFlavourProbc;
   std::vector<double>  *Jet_pfDeepFlavourProbuds;
   std::vector<double>  *Jet_pfDeepFlavourProbg;
   std::vector<double>  *Jet_pileupId;
   std::vector<double>  *Jet_isPFJet;
   std::vector<double>  *Jet_isCaloJet;
   std::vector<double>  *Jet_qg;
   std::vector<double>  *Jet_axis1; 
   std::vector<double>  *Jet_axis2;
   std::vector<double>  *Jet_ptD;
   std::vector<double>  *Jet_mult;
   std::vector<int>     *Jet_ele_indices;
   std::vector<int>     *Jet_ele_number;
   std::vector<int>     *Jet_mu_indices;
   std::vector<int>     *Jet_mu_number;
   std::vector<int>     *Jet_tau_indices;
   std::vector<int>     *Jet_tau_number;
   std::vector<double>  *Jet_neutralHadEnergyFraction;
   std::vector<double>  *Jet_neutralEmEnergyFraction;
   std::vector<double>  *Jet_chargedHadronEnergyFraction;
   std::vector<double>  *Jet_chargedEmEnergyFraction;
   std::vector<double>  *Jet_muonEnergyFraction;
   std::vector<double>  *Jet_electronEnergy;
   std::vector<double>  *Jet_photonEnergy;
   std::vector<double>  *Jet_emEnergyFraction;
   std::vector<double>  *Jet_numberOfConstituents;
   std::vector<double>  *Jet_chargedMultiplicity;
   std::vector<double>  *Jet_vtxMass;
   std::vector<double>  *Jet_vtxNtracks;
   std::vector<double>  *Jet_vtx3DVal;
   std::vector<double>  *Jet_vtx3DSig;
   std::vector<double>  *Jet_JesSF;
   std::vector<double>  *Jet_JesSFup;
   std::vector<double>  *Jet_JesSFdown;
   std::vector<double>  *Jet_JerSF;
   std::vector<double>  *Jet_JerSFup;
   std::vector<double>  *Jet_JerSFdown;
   std::vector<double>  *Jet_JesSF_AbsoluteStat_up;
   std::vector<double>  *Jet_JesSF_AbsoluteStat_down;
   std::vector<double>  *Jet_JesSF_AbsoluteScale_up;
   std::vector<double>  *Jet_JesSF_AbsoluteScale_down;
   std::vector<double>  *Jet_JesSF_AbsoluteFlavMap_up;
   std::vector<double>  *Jet_JesSF_AbsoluteFlavMap_down;
   std::vector<double>  *Jet_JesSF_AbsoluteMPFBias_up;
   std::vector<double>  *Jet_JesSF_AbsoluteMPFBias_down;
   std::vector<double>  *Jet_JesSF_Fragmentation_up;
   std::vector<double>  *Jet_JesSF_Fragmentation_down;
   std::vector<double>  *Jet_JesSF_SinglePionECAL_up;
   std::vector<double>  *Jet_JesSF_SinglePionECAL_down;
   std::vector<double>  *Jet_JesSF_SinglePionHCAL_up;
   std::vector<double>  *Jet_JesSF_SinglePionHCAL_down;
   std::vector<double>  *Jet_JesSF_FlavorQCD_up;
   std::vector<double>  *Jet_JesSF_FlavorQCD_down;
   std::vector<double>  *Jet_JesSF_TimePtEta_up;
   std::vector<double>  *Jet_JesSF_TimePtEta_down;
   std::vector<double>  *Jet_JesSF_RelativeJEREC1_up;
   std::vector<double>  *Jet_JesSF_RelativeJEREC1_down;
   std::vector<double>  *Jet_JesSF_RelativeJEREC2_up;
   std::vector<double>  *Jet_JesSF_RelativeJEREC2_down;
   std::vector<double>  *Jet_JesSF_RelativeJERHF_up;
   std::vector<double>  *Jet_JesSF_RelativeJERHF_down;
   std::vector<double>  *Jet_JesSF_RelativePtBB_up;
   std::vector<double>  *Jet_JesSF_RelativePtBB_down;
   std::vector<double>  *Jet_JesSF_RelativePtEC1_up;
   std::vector<double>  *Jet_JesSF_RelativePtEC1_down;
   std::vector<double>  *Jet_JesSF_RelativePtEC2_up;
   std::vector<double>  *Jet_JesSF_RelativePtEC2_down;
   std::vector<double>  *Jet_JesSF_RelativePtHF_up;
   std::vector<double>  *Jet_JesSF_RelativePtHF_down;
   std::vector<double>  *Jet_JesSF_RelativeBal_up;
   std::vector<double>  *Jet_JesSF_RelativeBal_down;
   std::vector<double>  *Jet_JesSF_RelativeFSR_up;
   std::vector<double>  *Jet_JesSF_RelativeFSR_down;
   std::vector<double>  *Jet_JesSF_RelativeStatFSR_up;
   std::vector<double>  *Jet_JesSF_RelativeStatFSR_down;
   std::vector<double>  *Jet_JesSF_RelativeStatEC_up;
   std::vector<double>  *Jet_JesSF_RelativeStatEC_down;
   std::vector<double>  *Jet_JesSF_RelativeStatHF_up;
   std::vector<double>  *Jet_JesSF_RelativeStatHF_down;
   std::vector<double>  *Jet_JesSF_PileUpDataMC_up;
   std::vector<double>  *Jet_JesSF_PileUpDataMC_down;
   std::vector<double>  *Jet_JesSF_PileUpPtRef_up;
   std::vector<double>  *Jet_JesSF_PileUpPtRef_down;
   std::vector<double>  *Jet_JesSF_PileUpPtBB_up;
   std::vector<double>  *Jet_JesSF_PileUpPtBB_down;
   std::vector<double>  *Jet_JesSF_PileUpPtEC1_up;
   std::vector<double>  *Jet_JesSF_PileUpPtEC1_down;
   std::vector<double>  *Jet_JesSF_PileUpPtEC2_up;
   std::vector<double>  *Jet_JesSF_PileUpPtEC2_down;
   std::vector<double>  *Jet_JesSF_PileUpPtHF_up;
   std::vector<double>  *Jet_JesSF_PileUpPtHF_down;
   std::vector<double>  *Jet_JesSF_PileUpMuZero_up;
   std::vector<double>  *Jet_JesSF_PileUpMuZero_down;
   std::vector<double>  *Jet_JesSF_PileUpEnvelope_up;
   std::vector<double>  *Jet_JesSF_PileUpEnvelope_down;
   std::vector<double>  *Jet_JesSF_SubTotalPileUp_up;
   std::vector<double>  *Jet_JesSF_SubTotalPileUp_down;
   std::vector<double>  *Jet_JesSF_SubTotalRelative_up;
   std::vector<double>  *Jet_JesSF_SubTotalRelative_down;
   std::vector<double>  *Jet_JesSF_SubTotalPt_up;
   std::vector<double>  *Jet_JesSF_SubTotalPt_down;
   std::vector<double>  *Jet_JesSF_SubTotalScale_up;
   std::vector<double>  *Jet_JesSF_SubTotalScale_down;
   std::vector<double>  *Jet_JesSF_SubTotalAbsolute_up;
   std::vector<double>  *Jet_JesSF_SubTotalAbsolute_down;
   std::vector<double>  *Jet_JesSF_SubTotalMC_up;
   std::vector<double>  *Jet_JesSF_SubTotalMC_down;
   std::vector<double>  *Jet_JesSF_TotalNoFlavor_up;
   std::vector<double>  *Jet_JesSF_TotalNoFlavor_down;
   std::vector<double>  *Jet_JesSF_TotalNoFlavorNoTime_up;
   std::vector<double>  *Jet_JesSF_TotalNoFlavorNoTime_down;
   std::vector<double>  *Jet_JesSF_FlavorZJet_up;
   std::vector<double>  *Jet_JesSF_FlavorZJet_down;
   std::vector<double>  *Jet_JesSF_FlavorPhotonJet_up;
   std::vector<double>  *Jet_JesSF_FlavorPhotonJet_down;
   std::vector<double>  *Jet_JesSF_FlavorPureGluon_up;
   std::vector<double>  *Jet_JesSF_FlavorPureGluon_down;
   std::vector<double>  *Jet_JesSF_FlavorPureQuark_up;
   std::vector<double>  *Jet_JesSF_FlavorPureQuark_down;
   std::vector<double>  *Jet_JesSF_FlavorPureCharm_up;
   std::vector<double>  *Jet_JesSF_FlavorPureCharm_down;
   std::vector<double>  *Jet_JesSF_FlavorPureBottom_up;
   std::vector<double>  *Jet_JesSF_FlavorPureBottom_down;
   std::vector<double>  *Jet_partonFlavour;
   std::vector<double>  *Jet_hadronFlavour;
   std::vector<double>  *BoostedJet_pt;
   std::vector<double>  *BoostedJet_eta;
   std::vector<double>  *BoostedJet_phi;
   std::vector<double>  *BoostedJet_energy;
   std::vector<double>  *BoostedJet_mass;
   std::vector<double>  *BoostedJet_Uncorr_pt;
   std::vector<double>  *BoostedJet_pfJetProbabilityBJetTags;
   std::vector<double>  *BoostedJet_pfCombinedMVAV2BJetTags;
   std::vector<double>  *BoostedJet_pfCombinedInclusiveSecondaryVertexV2BJetTags;
   std::vector<double>  *BoostedJet_pfCombinedCvsLJetTags;
   std::vector<double>  *BoostedJet_pfCombinedCvsBJetTags;
   std::vector<double>  *BoostedJet_neutralHadEnergyFraction;
   std::vector<double>  *BoostedJet_neutralEmEmEnergyFraction;
   std::vector<double>  *BoostedJet_chargedHadronEnergyFraction;
   std::vector<double>  *BoostedJet_chargedEmEnergyFraction;
   std::vector<double>  *BoostedJet_muonEnergyFraction;
   std::vector<int>     *BoostedJet_numberOfConstituents;
   std::vector<int>     *BoostedJet_chargedMultiplicity;
   std::vector<double>  *BoostedJet_electronEnergy;
   std::vector<double>  *BoostedJet_photonEnergy;
   std::vector<double>  *BoostedJet_tau1;
   std::vector<double>  *BoostedJet_tau2;
   std::vector<double>  *BoostedJet_tau3;
   std::vector<double>  *BoostedJet_softdrop_mass;
   std::vector<double>  *BoostedJet_pruned_mass;
   std::vector<double>  *BoostedJet_puppi_pt;
   std::vector<double>  *BoostedJet_puppi_mass;
   std::vector<double>  *BoostedJet_puppi_eta;
   std::vector<double>  *BoostedJet_puppi_phi;
   std::vector<double>  *BoostedJet_puppi_tau1;
   std::vector<double>  *BoostedJet_puppi_tau2;
   std::vector<double>  *BoostedJet_puppi_tau3;
   std::vector<double>  *BoostedJet_puppi_softdrop_masscorr;
   std::vector<double>  *BoostedJet_JesSF;
   std::vector<double>  *BoostedJet_JesSFup;
   std::vector<double>  *BoostedJet_JesSFdown;
   std::vector<double>  *BoostedJet_JerSF;
   std::vector<double>  *BoostedJet_JerSFup;
   std::vector<double>  *BoostedJet_JerSFdown;
   std::vector<double>  *TopTagging_topMass;
   std::vector<double>  *TopTagging_minMass;
   std::vector<double>  *TopTagging_wMass;
   std::vector<int>     *TopTagging_nSubJets;
   Double_t        SourceNumber;
   Double_t        PUWeight;
   Double_t        MinBiasUpWeight;
   Double_t        MinBiasDownWeight;
   Double_t        Met_type1PF_pt;
   Double_t        Met_type1PF_px;
   Double_t        Met_type1PF_py;
   Double_t        Met_type1PF_pz;
   Double_t        Met_type1PF_phi;
   Double_t        Met_type1PF_sumEt;
   Double_t        Met_type1PF_shiftedPtUp;
   Double_t        Met_type1PF_shiftedPtDown;
   Double_t        Gen_type1PF_Met;
   Double_t        Gen_type1PF_px;
   Double_t        Gen_type1PF_py;

   // List of branches
   TBranch        *b_Gen_pt;   //!
   TBranch        *b_Gen_eta;   //!
   TBranch        *b_Gen_phi;   //!
   TBranch        *b_Gen_p;   //!
   TBranch        *b_Gen_energy;   //!
   TBranch        *b_Gen_charge;   //!
   TBranch        *b_Gen_vx;   //!
   TBranch        *b_Gen_vy;   //!
   TBranch        *b_Gen_vz;   //!
   TBranch        *b_Gen_status;   //!
   TBranch        *b_Gen_pdg_id;   //!
   TBranch        *b_Gen_motherpdg_id;   //!
   TBranch        *b_Gen_numDaught;   //!
   TBranch        *b_Gen_numMother;   //!
   TBranch        *b_Gen_BmotherIndex;   //!
   TBranch        *b_Gen_BmotherIndices;   //!
   TBranch        *b_Gen_BdaughtIndices;   //!
   TBranch        *b_Gen_isPromptFinalState;   //!
   TBranch        *b_Gen_isDirectPromptTauDecayProductFinalState;   //!
   TBranch        *b_HiggsDecay;   //!
   TBranch        *b_EVENT_event;   //!
   TBranch        *b_EVENT_run;   //!
   TBranch        *b_EVENT_lumiBlock;   //!
   TBranch        *b_EVENT_genWeight;   //!
   TBranch        *b_EVENT_genWeights;   //!
   TBranch        *b_EVENT_psWeights;   //!
   TBranch        *b_EVENT_rWeights;   //!
   TBranch        *b_EVENT_genHT;   //!
   TBranch        *b_EVENT_genPt;   //!
   TBranch        *b_EVENT_rhopog;   //!
   TBranch        *b_EVENT_rhotth;   //!
   TBranch        *b_EVENT_originalXWGTUP;   //!
   TBranch        *b_EVENT_scalePDF;   //!
   TBranch        *b_EVENT_Q2tthbbWeightUp;   //!
   TBranch        *b_EVENT_Q2tthbbWeightDown;   //!
   TBranch        *b_EVENT_PDFtthbbWeightUp;   //!
   TBranch        *b_EVENT_PDFtthbbWeightDown;   //!
   TBranch        *b_EVENT_fixedGridRhoFastjetCentral;   //!
   TBranch        *b_EVENT_fixedGridRhoFastjetCentralChargedPileUp;   //!
   TBranch        *b_EVENT_fixedGridRhoFastjetCentralNeutral;   //!
   TBranch        *b_EVENT_prefireWeight;   //!
   TBranch        *b_EVENT_prefireWeightUp;   //!
   TBranch        *b_EVENT_prefireWeightDown;   //!
   TBranch        *b_Flag_HBHENoiseFilter;   //!
   TBranch        *b_Flag_HBHENoiseIsoFilter;   //!
   TBranch        *b_Flag_CSCTightHaloFilter;   //!
   TBranch        *b_Flag_CSCTightHaloTrkMuUnvetoFilter;   //!
   TBranch        *b_Flag_CSCTightHalo2015Filter;   //!
   TBranch        *b_Flag_HcalStripHaloFilter;   //!
   TBranch        *b_Flag_hcalLaserEventFilter;   //!
   TBranch        *b_Flag_EcalDeadCellTriggerPrimitiveFilter;   //!
   TBranch        *b_Flag_EcalDeadCellBoundaryEnergyFilter;   //!
   TBranch        *b_Flag_goodVertices;   //!
   TBranch        *b_Flag_eeBadScFilter;   //!
   TBranch        *b_Flag_ecalLaserCorrFilter;   //!
   TBranch        *b_Flag_trkPOGFilters;   //!
   TBranch        *b_Flag_chargedHadronTrackResolutionFilter;   //!
   TBranch        *b_Flag_muonBadTrackFilter;   //!
   TBranch        *b_Flag_trkPOG_manystripclus53X;   //!
   TBranch        *b_Flag_trkPOG_toomanystripclus53X;   //!
   TBranch        *b_Flag_trkPOG_logErrorTooManyClusters;   //!
   TBranch        *b_Flag_METFilters;   //!
   TBranch        *b_Flag_globalSuperTightHalo2016Filter;   //!
   TBranch        *b_Flag_BadPFMuonFilter;   //!
   TBranch        *b_Flag_BadChargedCandidateFilter;   //!
   TBranch        *b_Flag_ecalBadCalibFilter;   //!
   TBranch        *b_HLT_PFHT650_WideJetMJJ900DEtaJJ1p5;   //!
   TBranch        *b_HLT_PFHT650_WideJetMJJ950DEtaJJ1p5;   //!
   TBranch        *b_HLT_PFHT800;   //!
   TBranch        *b_HLT_PFHT900;   //!
   TBranch        *b_HLT_PFJet450;   //!
   TBranch        *b_HLT_PFJet500;   //!
   TBranch        *b_HLT_AK8PFJet450;   //!
   TBranch        *b_HLT_AK8PFJet500;   //!
   TBranch        *b_HLT_AK8PFJet360_TrimMass30;   //!
   TBranch        *b_HLT_AK8PFHT700_TrimR0p1PT0p03Mass50;   //!
   TBranch        *b_HLT_Ele27_eta2p1_WPTight_Gsf;   //!
   TBranch        *b_HLT_Ele27_WPTight_Gsf;   //!
   TBranch        *b_HLT_Ele25_eta2p1_WPTight_Gsf;   //!
   TBranch        *b_HLT_Ele115_CaloIdVT_GsfTrkIdT;   //!
   TBranch        *b_HLT_DoubleEle24_22_eta2p1_WPLoose_Gsf;   //!
   TBranch        *b_HLT_DoubleEle33_CaloIdL_MW;   //!
   TBranch        *b_HLT_DoubleEle33_CaloIdL_GsfTrkIdVL_MW;   //!
   TBranch        *b_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_DZ;   //!
   TBranch        *b_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL;   //!
   TBranch        *b_HLT_IsoMu22;   //!
   TBranch        *b_HLT_IsoTkMu22;   //!
   TBranch        *b_HLT_IsoMu24;   //!
   TBranch        *b_HLT_IsoTkMu24;   //!
   TBranch        *b_HLT_IsoMu22_eta2p1;   //!
   TBranch        *b_HLT_IsoTkMu22_eta2p1;   //!
   TBranch        *b_HLT_Mu50;   //!
   TBranch        *b_HLT_TkMu50;   //!
   TBranch        *b_HLT_DoubleMu33NoFiltersNoVtx;   //!
   TBranch        *b_HLT_DoubleMu23NoFiltersNoVtxDisplaced;   //!
   TBranch        *b_HLT_Mu30_TkMu11;   //!
   TBranch        *b_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ;   //!
   TBranch        *b_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_Mass3p8;   //!
   TBranch        *b_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL;   //!
   TBranch        *b_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ;   //!
   TBranch        *b_HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL;   //!
   TBranch        *b_HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_DZ;   //!
   TBranch        *b_HLT_Mu23_TrkIsoVVL_Ele8_CaloIdL_TrackIdL_IsoVL_DZ;   //!
   TBranch        *b_HLT_Ele32_WPTight_Gsf;   //!
   TBranch        *b_HLT_Ele35_WPTight_Gsf;   //!
   TBranch        *b_HLT_IsoMu27;   //!
   TBranch        *b_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL;   //!
   TBranch        *b_HLT_Mu12_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ;   //!
   TBranch        *b_HLT_Ele16_Ele12_Ele8_CaloIdL_TrackIdL;   //!
   TBranch        *b_HLT_Mu8_DiEle12_CaloIdL_TrackIdL;   //!
   TBranch        *b_HLT_DiMu9_Ele9_CaloIdL_TrackIdL_DZ;   //!
   TBranch        *b_HLT_TripleMu_12_10_5;   //!
   TBranch        *b_HLT_Ele17_Ele12_CaloIdL_TrackIdL_IsoVL_DZ;   //!
   TBranch        *b_HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL;   //!
   TBranch        *b_HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ;   //!
   TBranch        *b_HLT_TkMu17_TrkIsoVVL_TkMu8_TrkIsoVVL;   //!
   TBranch        *b_HLT_TkMu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ;   //!
   TBranch        *b_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_Mass8;   //!
   TBranch        *b_HLT_Mu8_TrkIsoVVL_Ele17_CaloIdL_TrackIdL_IsoVL;   //!
   TBranch        *b_HLT_Mu17_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL;   //!
   TBranch        *b_HLT_Mu23_TrkIsoVVL_Ele8_CaloIdL_TrackIdL_IsoVL;   //!
   TBranch        *b_HLT_TripleMu_10_5_5_DZ;   //!
   TBranch        *b_HLT_Mu8_DiEle12_CaloIdL_TrackIdL_DZ;   //!
   TBranch        *b_HLT_DiMu9_Ele9_CaloIdL_TrackIdL;   //!
   TBranch        *b_HLT_Ele27_eta2p1_WPLoose_Gsf;   //!
   TBranch        *b_pvertex_notempty;   //!
   TBranch        *b_nBestVtx;   //!
   TBranch        *b_npuVertices;   //!
   TBranch        *b_trueInteractions;   //!
   TBranch        *b_ootnpuVertices;   //!
   TBranch        *b_npuVerticesm1;   //!
   TBranch        *b_npuVerticesp1;   //!
   TBranch        *b_pvertex_ndof;   //!
   TBranch        *b_pvertex_dxy;   //!
   TBranch        *b_pvertex_x;   //!
   TBranch        *b_pvertex_y;   //!
   TBranch        *b_pvertex_z;   //!
   TBranch        *b_pvertex_xError;   //!
   TBranch        *b_pvertex_yError;   //!
   TBranch        *b_pvertex_zError;   //!
   TBranch        *b_beamSpot_x0;   //!
   TBranch        *b_beamSpot_y0;   //!
   TBranch        *b_beamSpot_z0;   //!
   TBranch        *b_beamSpot_xWidth;   //!
   TBranch        *b_beamSpot_yWidth;   //!
   TBranch        *b_Muon_pt;   //!
   TBranch        *b_Muon_eta;   //!
   TBranch        *b_Muon_phi;   //!
   TBranch        *b_Muon_energy;   //!
   TBranch        *b_Muon_px;   //!
   TBranch        *b_Muon_py;   //!
   TBranch        *b_Muon_pz;   //!
   TBranch        *b_Muon_p;   //!
   TBranch        *b_Muon_dB;   //!
   TBranch        *b_Muon_pt_it;   //!
   TBranch        *b_Muon_ptErr_it;   //!
   TBranch        *b_Muon_pTErrOVpT_it;   //!
   TBranch        *b_Muon_pt_bt;   //!
   TBranch        *b_Muon_ptErr_bt;   //!
   TBranch        *b_Muon_pTErrOVpT_bt;   //!
   TBranch        *b_Muon_pt_tunePbt;   //!
   TBranch        *b_Muon_charge;   //!
   TBranch        *b_Muon_soft;   //!
   TBranch        *b_Muon_loose;   //!
   TBranch        *b_Muon_medium;   //!
   TBranch        *b_Muon_tight;   //!
   TBranch        *b_Muon_isHighPt;   //!
   TBranch        *b_Muon_isTrkHighPt;   //!
   TBranch        *b_Muon_TrkIsoLoose;   //!
   TBranch        *b_Muon_TrkIsoTight;   //!
   TBranch        *b_Muon_TrigLoose;   //!
   TBranch        *b_Muon_POGisGood;   //!
   TBranch        *b_Muon_pdgId;   //!
   TBranch        *b_Muon_simPdgId;   //!
   TBranch        *b_Muon_simMotherPdgId;   //!
   TBranch        *b_Muon_simFlavour;   //!
   TBranch        *b_Muon_pf;   //!
   TBranch        *b_Muon_isGlobal;   //!
   TBranch        *b_Muon_isTrackerMuon;   //!
   TBranch        *b_Muon_tunePBestTrackType;   //!
   TBranch        *b_Muon_isoR04Charged;   //!
   TBranch        *b_Muon_isoR04NeutralHadron;   //!
   TBranch        *b_Muon_isoR04Photon;   //!
   TBranch        *b_Muon_isoR04PU;   //!
   TBranch        *b_Muon_relIsoDeltaBetaR04;   //!
   TBranch        *b_Muon_isoR04CharParPt;   //!
   TBranch        *b_Muon_isoR03Charged;   //!
   TBranch        *b_Muon_isoR03NeutralHadron;   //!
   TBranch        *b_Muon_isoR03Photon;   //!
   TBranch        *b_Muon_isoR03PU;   //!
   TBranch        *b_Muon_relIsoDeltaBetaR03;   //!
   TBranch        *b_Muon_isoR03CharParPt;   //!
   TBranch        *b_Muon_trackIso;   //!
   TBranch        *b_Muon_TrackerIso;   //!
   TBranch        *b_Muon_ecalIso;   //!
   TBranch        *b_Muon_hcalIso;   //!
   TBranch        *b_Muon_caloIso;   //!
   TBranch        *b_Muon_isoSum;   //!
   TBranch        *b_Muon_pfEcalEnergy;   //!
   TBranch        *b_Muon_chi2;   //!
   TBranch        *b_Muon_chi2LocalPosition;   //!
   TBranch        *b_Muon_matchedStat;   //!
   TBranch        *b_Muon_validHits;   //!
   TBranch        *b_Muon_validHitsInner;   //!
   TBranch        *b_Muon_TLayers;   //!
   TBranch        *b_Muon_ndof;   //!
   TBranch        *b_Muon_validFraction;   //!
   TBranch        *b_Muon_pixelLayersWithMeasurement;   //!
   TBranch        *b_Muon_qualityhighPurity;   //!
   TBranch        *b_Muon_trkKink;   //!
   TBranch        *b_Muon_segmentCompatibility;   //!
   TBranch        *b_Muon_dxy_pv;   //!
   TBranch        *b_Muon_dz_pv;   //!
   TBranch        *b_Muon_dz_bs;   //!
   TBranch        *b_Muon_dxy_bs;   //!
   TBranch        *b_Muon_dzError;   //!
   TBranch        *b_Muon_dxyError;   //!
   TBranch        *b_Muon_vtx;   //!
   TBranch        *b_Muon_vty;   //!
   TBranch        *b_Muon_vtz;   //!
   TBranch        *b_Muon_track_PCAx_bs;   //!
   TBranch        *b_Muon_track_PCAy_bs;   //!
   TBranch        *b_Muon_track_PCAz_bs;   //!
   TBranch        *b_Muon_track_PCAx_pv;   //!
   TBranch        *b_Muon_track_PCAy_pv;   //!
   TBranch        *b_Muon_track_PCAz_pv;   //!
   TBranch        *b_Muon_trackFitErrorMatrix_00;   //!
   TBranch        *b_Muon_trackFitErrorMatrix_01;   //!
   TBranch        *b_Muon_trackFitErrorMatrix_02;   //!
   TBranch        *b_Muon_trackFitErrorMatrix_11;   //!
   TBranch        *b_Muon_trackFitErrorMatrix_12;   //!
   TBranch        *b_Muon_trackFitErrorMatrix_22;   //!
   TBranch        *b_Muon_dz_bt;   //!
   TBranch        *b_Muon_dxy_bt;   //!
   TBranch        *b_Muon_miniIsoRel;   //!
   TBranch        *b_Muon_miniIsoCh;   //!
   TBranch        *b_Muon_miniIsoNeu;   //!
   TBranch        *b_Muon_miniIsoPUsub;   //!
   TBranch        *b_Muon_jetdr;   //!
   TBranch        *b_Muon_jetl1corr;   //!
   TBranch        *b_Muon_jetislep;   //!
   TBranch        *b_Muon_jetidx;   //!
   TBranch        *b_Muon_jetpt;   //!
   TBranch        *b_Muon_jetptratio;   //!
   TBranch        *b_Muon_jetptratioV2;   //!
   TBranch        *b_Muon_jetcsv;   //!
   TBranch        *b_Muon_jetdeepcsv;   //!
   TBranch        *b_Muon_jetdeepflavour;   //!
   TBranch        *b_Muon_ptrel;   //!
   TBranch        *b_Muon_IP3Dsig_it;   //!
   TBranch        *b_Muon_pvass;   //!
   TBranch        *b_Muon_etarel;   //!
   TBranch        *b_Muon_ptOVen;   //!
   TBranch        *b_Muon_mujet_pfJetProbabilityBJetTag;   //!
   TBranch        *b_Muon_mujet_pfCombinedMVABJetTags;   //!
   TBranch        *b_Muon_mujet_qgl;   //!
   TBranch        *b_Muon_mumass;   //!
   TBranch        *b_Muon_mujet_mass;   //!
   TBranch        *b_Muon_mujet_Wmass;   //!
   TBranch        *b_Muon_mujet_Topmass;   //!
   TBranch        *b_Muon_mujet_WTopmass;   //!
   TBranch        *b_Muon_IP3D_val;   //!
   TBranch        *b_Muon_IP3D_err;   //!
   TBranch        *b_Muon_IP3D_sig;   //!
   TBranch        *b_Muon_IP2D_val;   //!
   TBranch        *b_Muon_IP2D_err;   //!
   TBranch        *b_Muon_IP2D_sig;   //!
   TBranch        *b_Muon_sIP3D_val;   //!
   TBranch        *b_Muon_sIP3D_err;   //!
   TBranch        *b_Muon_sIP3D_sig;   //!
   TBranch        *b_Muon_sIP2D_val;   //!
   TBranch        *b_Muon_sIP2D_err;   //!
   TBranch        *b_Muon_sIP2D_sig;   //!
   TBranch        *b_Muon_IP1D_val;   //!
   TBranch        *b_Muon_IP1D_err;   //!
   TBranch        *b_Muon_IP1D_sig;   //!
   TBranch        *b_Muon_sIP1D_val;   //!
   TBranch        *b_Muon_sIP1D_err;   //!
   TBranch        *b_Muon_sIP1D_sig;   //!
   TBranch        *b_Muon_lepjetMaxIP3D_val;   //!
   TBranch        *b_Muon_lepjetMaxIP3D_sig;   //!
   TBranch        *b_Muon_lepjetMaxsIP3D_val;   //!
   TBranch        *b_Muon_lepjetMaxsIP3D_sig;   //!
   TBranch        *b_Muon_lepjetMaxIP2D_val;   //!
   TBranch        *b_Muon_lepjetMaxIP2D_sig;   //!
   TBranch        *b_Muon_lepjetMaxsIP2D_val;   //!
   TBranch        *b_Muon_lepjetMaxsIP2D_sig;   //!
   TBranch        *b_Muon_lepjetMaxIP1D_val;   //!
   TBranch        *b_Muon_lepjetMaxIP1D_sig;   //!
   TBranch        *b_Muon_lepjetMaxsIP1D_val;   //!
   TBranch        *b_Muon_lepjetMaxsIP1D_sig;   //!
   TBranch        *b_Muon_lepjetAvIP3D_val;   //!
   TBranch        *b_Muon_lepjetAvIP3D_sig;   //!
   TBranch        *b_Muon_lepjetAvsIP3D_val;   //!
   TBranch        *b_Muon_lepjetAvsIP3D_sig;   //!
   TBranch        *b_Muon_lepjetAvIP2D_val;   //!
   TBranch        *b_Muon_lepjetAvIP2D_sig;   //!
   TBranch        *b_Muon_lepjetAvsIP2D_val;   //!
   TBranch        *b_Muon_lepjetAvsIP2D_sig;   //!
   TBranch        *b_Muon_lepjetAvIP1D_val;   //!
   TBranch        *b_Muon_lepjetAvIP1D_sig;   //!
   TBranch        *b_Muon_lepjetAvsIP1D_val;   //!
   TBranch        *b_Muon_lepjetAvsIP1D_sig;   //!
   TBranch        *b_Muon_lepjetchtrks;   //!
   TBranch        *b_Muon_lepjetpvchtrks;   //!
   TBranch        *b_Muon_lepjetnonpvchtrks;   //!
   TBranch        *b_Muon_lepjetndaus;   //!
   TBranch        *b_Muon_lepjetpvchi2;   //!
   TBranch        *b_Muon_lepjetnumno2trk;   //!
   TBranch        *b_Muon_gen_pt;   //!
   TBranch        *b_Muon_gen_eta;   //!
   TBranch        *b_Muon_gen_phi;   //!
   TBranch        *b_Muon_gen_en;   //!
   TBranch        *b_Muon_gen_pdgId;   //!
   TBranch        *b_Muon_gen_isPromptFinalState;   //!
   TBranch        *b_Muon_gen_isDirectPromptTauDecayProductFinalState;   //!
   TBranch        *b_Muon_isMatchedToTrigger;   //!
   TBranch        *b_patElectron_pt;   //!
   TBranch        *b_patElectron_eta;   //!
   TBranch        *b_patElectron_phi;   //!
   TBranch        *b_patElectron_energy;   //!
   TBranch        *b_patElectron_px;   //!
   TBranch        *b_patElectron_py;   //!
   TBranch        *b_patElectron_pz;   //!
   TBranch        *b_patElectron_p;   //!
   TBranch        *b_patElectron_Et;   //!
   TBranch        *b_patElectron_SCeta;   //!
   TBranch        *b_patElectron_inCrack;   //!
   TBranch        *b_patElectron_energySF;   //!
   TBranch        *b_patElectron_ecalEnergyErrPostCorr;   //!
   TBranch        *b_patElectron_ecalEnergyErrPreCorr;   //!
   TBranch        *b_patElectron_ecalEnergyPostCorr;   //!
   TBranch        *b_patElectron_ecalEnergyPreCorr;   //!
   TBranch        *b_patElectron_ecalTrkEnergyErrPostCorr;   //!
   TBranch        *b_patElectron_ecalTrkEnergyErrPreCorr;   //!
   TBranch        *b_patElectron_ecalTrkEnergyPostCorr;   //!
   TBranch        *b_patElectron_ecalTrkEnergyPreCorr;   //!
   TBranch        *b_patElectron_energyScaleDown;   //!
   TBranch        *b_patElectron_energyScaleGainDown;   //!
   TBranch        *b_patElectron_energyScaleGainUp;   //!
   TBranch        *b_patElectron_energyScaleStatDown;   //!
   TBranch        *b_patElectron_energyScaleStatUp;   //!
   TBranch        *b_patElectron_energyScaleSystDown;   //!
   TBranch        *b_patElectron_energyScaleSystUp;   //!
   TBranch        *b_patElectron_energyScaleUp;   //!
   TBranch        *b_patElectron_energyScaleValue;   //!
   TBranch        *b_patElectron_energySigmaDown;   //!
   TBranch        *b_patElectron_energySigmaPhiDown;   //!
   TBranch        *b_patElectron_energySigmaPhiUp;   //!
   TBranch        *b_patElectron_energySigmaRhoDown;   //!
   TBranch        *b_patElectron_energySigmaRhoUp;   //!
   TBranch        *b_patElectron_energySigmaUp;   //!
   TBranch        *b_patElectron_energySigmaValue;   //!
   TBranch        *b_patElectron_energySmearNrSigma;   //!
   TBranch        *b_patElectron_charge;   //!
   TBranch        *b_patElectron_isGsfCtfScPixChargeConsistent;   //!
   TBranch        *b_patElectron_isGsfScPixChargeConsistent;   //!
   TBranch        *b_patElectron_isPassVeto;   //!
   TBranch        *b_patElectron_isPassLoose;   //!
   TBranch        *b_patElectron_isPassMedium;   //!
   TBranch        *b_patElectron_isPassTight;   //!
   TBranch        *b_patElectron_isPassMvaIsowp80;   //!
   TBranch        *b_patElectron_isPassMvanonIsowp80;   //!
   TBranch        *b_patElectron_isPassMvaIsowp90;   //!
   TBranch        *b_patElectron_isPassMvanonIsowp90;   //!
   TBranch        *b_patElectron_isPassMvaIsowpLoose;   //!
   TBranch        *b_patElectron_isPassMvanonIsowpLoose;   //!
   TBranch        *b_patElectron_mvaValue_nonIso;   //!
   TBranch        *b_patElectron_mvaCategory_nonIso;   //!
   TBranch        *b_patElectron_mvaValue_Iso;   //!
   TBranch        *b_patElectron_mvaCategory_Iso;   //!
   TBranch        *b_patElectron_isPassOldVeto;   //!
   TBranch        *b_patElectron_isPassOldLoose;   //!
   TBranch        *b_patElectron_isPassOldMedium;   //!
   TBranch        *b_patElectron_isPassOldTight;   //!
   TBranch        *b_patElectron_isPassOldMvaIsowp80;   //!
   TBranch        *b_patElectron_isPassOldMvanonIsowp80;   //!
   TBranch        *b_patElectron_isPassOldMvaIsowp90;   //!
   TBranch        *b_patElectron_isPassOldMvanonIsowp90;   //!
   TBranch        *b_patElectron_isPassOldMvaIsowpLoose;   //!
   TBranch        *b_patElectron_isPassOldMvanonIsowpLoose;   //!
   TBranch        *b_patElectron_OldmvaValue_nonIso;   //!
   TBranch        *b_patElectron_OldmvaCategory_nonIso;   //!
   TBranch        *b_patElectron_OldmvaValue_Iso;   //!
   TBranch        *b_patElectron_OldmvaCategory_Iso;   //!
   TBranch        *b_patElectron_isPassHEEPId;   //!
   TBranch        *b_patElectron_pdgId;   //!
   TBranch        *b_patElectron_isEcalDriven;   //!
   TBranch        *b_patElectron_isPassMvaHZZwpLoose;   //!
   TBranch        *b_patElectron_mvaValue_HZZ;   //!
   TBranch        *b_patElectron_mvaCategory_HZZ;   //!
   TBranch        *b_patElectron_isoChargedHadrons;   //!
   TBranch        *b_patElectron_isoNeutralHadrons;   //!
   TBranch        *b_patElectron_isoPhotons;   //!
   TBranch        *b_patElectron_isoPU;   //!
   TBranch        *b_patElectron_relIsoDeltaBeta;   //!
   TBranch        *b_patElectron_relIsoRhoEA;   //!
   TBranch        *b_patElectron_dr03EcalRecHitSumEt;   //!
   TBranch        *b_patElectron_dr03HcalDepth1TowerSumEt;   //!
   TBranch        *b_patElectron_isolPtTracks;   //!
   TBranch        *b_patElectron_ecalPFClusterIso;   //!
   TBranch        *b_patElectron_hcalPFClusterIso;   //!
   TBranch        *b_patElectron_dEtaIn;   //!
   TBranch        *b_patElectron_dPhiIn;   //!
   TBranch        *b_patElectron_full5x5_sigmaIetaIeta;   //!
   TBranch        *b_patElectron_full5x5_e2x5Max;   //!
   TBranch        *b_patElectron_full5x5_e5x5;   //!
   TBranch        *b_patElectron_full5x5_e1x5;   //!
   TBranch        *b_patElectron_hOverE;   //!
   TBranch        *b_patElectron_ooEmooP;   //!
   TBranch        *b_patElectron_passConversionVeto;   //!
   TBranch        *b_patElectron_expectedMissingInnerHits;   //!
   TBranch        *b_patElectron_gsfTrack_ndof;   //!
   TBranch        *b_patElectron_gsfTrack_normChi2;   //!
   TBranch        *b_patElectron_gsfTrack_dz_pv;   //!
   TBranch        *b_patElectron_gsfTrack_dxy_pv;   //!
   TBranch        *b_patElectron_d0;   //!
   TBranch        *b_patElectron_dzError;   //!
   TBranch        *b_patElectron_dxyError;   //!
   TBranch        *b_patElectron_gsfTrack_vtx;   //!
   TBranch        *b_patElectron_gsfTrack_vty;   //!
   TBranch        *b_patElectron_gsfTrack_vtz;   //!
   TBranch        *b_patElectron_gsfTrack_dz_bs;   //!
   TBranch        *b_patElectron_gsfTrack_dxy_bs;   //!
   TBranch        *b_patElectron_gsfTrack_PCAx_pv;   //!
   TBranch        *b_patElectron_gsfTrack_PCAy_pv;   //!
   TBranch        *b_patElectron_gsfTrack_PCAz_pv;   //!
   TBranch        *b_patElectron_gsfTrack_PCAx_bs;   //!
   TBranch        *b_patElectron_gsfTrack_PCAy_bs;   //!
   TBranch        *b_patElectron_gsfTrack_PCAz_bs;   //!
   TBranch        *b_patElectron_gsfTrackFitErrorMatrix_00;   //!
   TBranch        *b_patElectron_gsfTrackFitErrorMatrix_01;   //!
   TBranch        *b_patElectron_gsfTrackFitErrorMatrix_02;   //!
   TBranch        *b_patElectron_gsfTrackFitErrorMatrix_11;   //!
   TBranch        *b_patElectron_gsfTrackFitErrorMatrix_12;   //!
   TBranch        *b_patElectron_gsfTrackFitErrorMatrix_22;   //!
   TBranch        *b_patElectron_miniIsoRel;   //!
   TBranch        *b_patElectron_miniIsoCh;   //!
   TBranch        *b_patElectron_miniIsoNeu;   //!
   TBranch        *b_patElectron_miniIsoPUsub;   //!
   TBranch        *b_patElectron_jetdr;   //!
   TBranch        *b_patElectron_jetl1corr;   //!
   TBranch        *b_patElectron_jetislep;   //!
   TBranch        *b_patElectron_jetidx;   //!
   TBranch        *b_patElectron_jetpt;   //!
   TBranch        *b_patElectron_jetptratio;   //!
   TBranch        *b_patElectron_jetptratioV2;   //!
   TBranch        *b_patElectron_jetcsv;   //!
   TBranch        *b_patElectron_jetdeepcsv;   //!
   TBranch        *b_patElectron_jetdeepflavour;   //!
   TBranch        *b_patElectron_ptrel;   //!
   TBranch        *b_patElectron_IP3Dsig;   //!
   TBranch        *b_patElectron_eleMVASpring15NonTrig25ns;   //!
   TBranch        *b_patElectron_eleMVASpring15NonTrig25ns_VL;   //!
   TBranch        *b_patElectron_pvass;   //!
   TBranch        *b_patElectron_etarel;   //!
   TBranch        *b_patElectron_ptOVen;   //!
   TBranch        *b_patElectron_elejet_pfJetProbabilityBJetTag;   //!
   TBranch        *b_patElectron_elejet_pfCombinedMVABJetTags;   //!
   TBranch        *b_patElectron_elejet_qgl;   //!
   TBranch        *b_patElectron_elemass;   //!
   TBranch        *b_patElectron_elejet_mass;   //!
   TBranch        *b_patElectron_elejet_Wmass;   //!
   TBranch        *b_patElectron_elejet_Topmass;   //!
   TBranch        *b_patElectron_elejet_WTopmass;   //!
   TBranch        *b_patElectron_IP3D_val;   //!
   TBranch        *b_patElectron_IP3D_err;   //!
   TBranch        *b_patElectron_IP3D_sig;   //!
   TBranch        *b_patElectron_IP2D_val;   //!
   TBranch        *b_patElectron_IP2D_err;   //!
   TBranch        *b_patElectron_IP2D_sig;   //!
   TBranch        *b_patElectron_sIP3D_val;   //!
   TBranch        *b_patElectron_sIP3D_err;   //!
   TBranch        *b_patElectron_sIP3D_sig;   //!
   TBranch        *b_patElectron_sIP2D_val;   //!
   TBranch        *b_patElectron_sIP2D_err;   //!
   TBranch        *b_patElectron_sIP2D_sig;   //!
   TBranch        *b_patElectron_IP1D_val;   //!
   TBranch        *b_patElectron_IP1D_err;   //!
   TBranch        *b_patElectron_IP1D_sig;   //!
   TBranch        *b_patElectron_sIP1D_val;   //!
   TBranch        *b_patElectron_sIP1D_err;   //!
   TBranch        *b_patElectron_sIP1D_sig;   //!
   TBranch        *b_patElectron_lepjetMaxIP3D_val;   //!
   TBranch        *b_patElectron_lepjetMaxIP3D_sig;   //!
   TBranch        *b_patElectron_lepjetMaxsIP3D_val;   //!
   TBranch        *b_patElectron_lepjetMaxsIP3D_sig;   //!
   TBranch        *b_patElectron_lepjetMaxIP2D_val;   //!
   TBranch        *b_patElectron_lepjetMaxIP2D_sig;   //!
   TBranch        *b_patElectron_lepjetMaxsIP2D_val;   //!
   TBranch        *b_patElectron_lepjetMaxsIP2D_sig;   //!
   TBranch        *b_patElectron_lepjetMaxIP1D_val;   //!
   TBranch        *b_patElectron_lepjetMaxIP1D_sig;   //!
   TBranch        *b_patElectron_lepjetMaxsIP1D_val;   //!
   TBranch        *b_patElectron_lepjetMaxsIP1D_sig;   //!
   TBranch        *b_patElectron_lepjetAvIP3D_val;   //!
   TBranch        *b_patElectron_lepjetAvIP3D_sig;   //!
   TBranch        *b_patElectron_lepjetAvsIP3D_val;   //!
   TBranch        *b_patElectron_lepjetAvsIP3D_sig;   //!
   TBranch        *b_patElectron_lepjetAvIP2D_val;   //!
   TBranch        *b_patElectron_lepjetAvIP2D_sig;   //!
   TBranch        *b_patElectron_lepjetAvsIP2D_val;   //!
   TBranch        *b_patElectron_lepjetAvsIP2D_sig;   //!
   TBranch        *b_patElectron_lepjetAvIP1D_val;   //!
   TBranch        *b_patElectron_lepjetAvIP1D_sig;   //!
   TBranch        *b_patElectron_lepjetAvsIP1D_val;   //!
   TBranch        *b_patElectron_lepjetAvsIP1D_sig;   //!
   TBranch        *b_patElectron_lepjetchtrks;   //!
   TBranch        *b_patElectron_lepjetpvchtrks;   //!
   TBranch        *b_patElectron_lepjetnonpvchtrks;   //!
   TBranch        *b_patElectron_lepjetndaus;   //!
   TBranch        *b_patElectron_lepjetpvchi2;   //!
   TBranch        *b_patElectron_lepjetnumno2trk;   //!
   TBranch        *b_patElectron_gen_pt;   //!
   TBranch        *b_patElectron_gen_eta;   //!
   TBranch        *b_patElectron_gen_phi;   //!
   TBranch        *b_patElectron_gen_en;   //!
   TBranch        *b_patElectron_gen_pdgId;   //!
   TBranch        *b_patElectron_gen_isPromptFinalState;   //!
   TBranch        *b_patElectron_gen_isDirectPromptTauDecayProductFinalState;   //!
   TBranch        *b_patElectron_isMatchedToTrigger;   //!
   TBranch        *b_Tau_pt;   //!
   TBranch        *b_Tau_eta;   //!
   TBranch        *b_Tau_phi;   //!
   TBranch        *b_Tau_energy;   //!
   TBranch        *b_Tau_px;   //!
   TBranch        *b_Tau_py;   //!
   TBranch        *b_Tau_pz;   //!
   TBranch        *b_Tau_p;   //!
   TBranch        *b_Tau_leadChargedCandPt;   //!
   TBranch        *b_Tau_leadChargedCandEta;   //!
   TBranch        *b_Tau_leadChargedCandPhi;   //!
   TBranch        *b_Tau_leadChargedCandE;   //!
   TBranch        *b_Tau_leadChargedCandTrack_pt;   //!
   TBranch        *b_Tau_leadChargedCandTrack_ptError;   //!
   TBranch        *b_Tau_charge;   //!
   TBranch        *b_Tau_leadChargedCandCharge;   //!
   TBranch        *b_Tau_decayModeFinding;   //!
   TBranch        *b_Tau_decayModeFindingNewDMs;   //!
   TBranch        *b_Tau_againstMuonLoose3;   //!
   TBranch        *b_Tau_againstMuonTight3;   //!
   TBranch        *b_Tau_againstElectronVLooseMVA6;   //!
   TBranch        *b_Tau_againstElectronLooseMVA6;   //!
   TBranch        *b_Tau_againstElectronMediumMVA6;   //!
   TBranch        *b_Tau_againstElectronTightMVA6;   //!
   TBranch        *b_Tau_chargedIsoPtSum;   //!
   TBranch        *b_Tau_neutralIsoPtSum;   //!
   TBranch        *b_Tau_puCorrPtSum;   //!
   TBranch        *b_Tau_byVLooseIsolationMVArun2v1DBoldDMwLT;   //!
   TBranch        *b_Tau_byLooseIsolationMVArun2v1DBoldDMwLT;   //!
   TBranch        *b_Tau_byMediumIsolationMVArun2v1DBoldDMwLT;   //!
   TBranch        *b_Tau_byTightIsolationMVArun2v1DBoldDMwLT;   //!
   TBranch        *b_Tau_byVTightIsolationMVArun2v1DBoldDMwLT;   //!
   TBranch        *b_Tau_byVLooseIsolationMVArun2v1DBnewDMwLT;   //!
   TBranch        *b_Tau_byLooseIsolationMVArun2v1DBnewDMwLT;   //!
   TBranch        *b_Tau_byMediumIsolationMVArun2v1DBnewDMwLT;   //!
   TBranch        *b_Tau_byTightIsolationMVArun2v1DBnewDMwLT;   //!
   TBranch        *b_Tau_byVTightIsolationMVArun2v1DBnewDMwLT;   //!
   TBranch        *b_Tau_byLooseIsolationMVArun2v1DBdR03oldDMwLT;   //!
   TBranch        *b_Tau_byMediumIsolationMVArun2v1DBdR03oldDMwLT;   //!
   TBranch        *b_Tau_byIsolationMVArun2017v2DBoldDMdR0p3wLTraw2017;   //!
   TBranch        *b_Tau_byVVLooseIsolationMVArun2017v2DBoldDMdR0p3wLT2017;   //!
   TBranch        *b_Tau_byVLooseIsolationMVArun2017v2DBoldDMdR0p3wLT2017;   //!
   TBranch        *b_Tau_byLooseIsolationMVArun2017v2DBoldDMdR0p3wLT2017;   //!
   TBranch        *b_Tau_byMediumIsolationMVArun2017v2DBoldDMdR0p3wLT2017;   //!
   TBranch        *b_Tau_byTightIsolationMVArun2017v2DBoldDMdR0p3wLT2017;   //!
   TBranch        *b_Tau_byVTightIsolationMVArun2017v2DBoldDMdR0p3wLT2017;   //!
   TBranch        *b_Tau_byVVTightIsolationMVArun2017v2DBoldDMdR0p3wLT2017;   //!
   TBranch        *b_Tau_nProngs;   //!
   TBranch        *b_Tau_leadChargedCandNdof;   //!
   TBranch        *b_Tau_leadChargedCandChi2;   //!
   TBranch        *b_Tau_leadChargedCandValidHits;   //!
   TBranch        *b_Tau_defaultDxy;   //!
   TBranch        *b_Tau_defaultDxyError;   //!
   TBranch        *b_Tau_defaultDxySig;   //!
   TBranch        *b_Tau_packedLeadTauCand_dxy;   //!
   TBranch        *b_Tau_packedLeadTauCand_dz;   //!
   TBranch        *b_Tau_packedLeadTauCand_dxyError;   //!
   TBranch        *b_Tau_packedLeadTauCand_dzError;   //!
   TBranch        *b_Tau_defaultFlightLengthX;   //!
   TBranch        *b_Tau_defaultFlightLengthY;   //!
   TBranch        *b_Tau_defaultFlightLengthZ;   //!
   TBranch        *b_Tau_defaultFlightLengthSig;   //!
   TBranch        *b_Tau_default_PCAx_pv;   //!
   TBranch        *b_Tau_default_PCAy_pv;   //!
   TBranch        *b_Tau_default_PCAz_pv;   //!
   TBranch        *b_Tau_leadChargedCandDz_pv;   //!
   TBranch        *b_Tau_leadChargedCandDxy_pv;   //!
   TBranch        *b_Tau_leadChargedCandDz_bs;   //!
   TBranch        *b_Tau_leadChargedCandDxy_bs;   //!
   TBranch        *b_Tau_leadChargedCandDzError;   //!
   TBranch        *b_Tau_leadChargedCandDxyError;   //!
   TBranch        *b_Tau_leadChargedCandVtx;   //!
   TBranch        *b_Tau_leadChargedCandVty;   //!
   TBranch        *b_Tau_leadChargedCandVtz;   //!
   TBranch        *b_Tau_leadChargedCandTrack_PCAx_bs;   //!
   TBranch        *b_Tau_leadChargedCandTrack_PCAy_bs;   //!
   TBranch        *b_Tau_leadChargedCandTrack_PCAz_bs;   //!
   TBranch        *b_Tau_leadChargedCandTrack_PCAx_pv;   //!
   TBranch        *b_Tau_leadChargedCandTrack_PCAy_pv;   //!
   TBranch        *b_Tau_leadChargedCandTrack_PCAz_pv;   //!
   TBranch        *b_Tau_leadChargedCandTrackFitErrorMatrix_00;   //!
   TBranch        *b_Tau_leadChargedCandTrackFitErrorMatrix_01;   //!
   TBranch        *b_Tau_leadChargedCandTrackFitErrorMatrix_02;   //!
   TBranch        *b_Tau_leadChargedCandTrackFitErrorMatrix_11;   //!
   TBranch        *b_Tau_leadChargedCandTrackFitErrorMatrix_12;   //!
   TBranch        *b_Tau_leadChargedCandTrackFitErrorMatrix_22;   //!
   TBranch        *b_Jet_pt;   //!
   TBranch        *b_Jet_eta;   //!
   TBranch        *b_Jet_phi;   //!
   TBranch        *b_Jet_energy;   //!
   TBranch        *b_Jet_mass;   //!
   TBranch        *b_Jet_px;   //!
   TBranch        *b_Jet_py;   //!
   TBranch        *b_Jet_pz;   //!
   TBranch        *b_Jet_Uncorr_pt;   //!
   TBranch        *b_Jet_L1corr_pt;   //!
   TBranch        *b_Jet_pfCombinedInclusiveSecondaryVertexV2BJetTags;   //!
   TBranch        *b_Jet_pfCombinedMVAV2BJetTags;   //!
   TBranch        *b_Jet_pfJetProbabilityBJetTags;   //!
   TBranch        *b_Jet_pfCombinedCvsLJetTags;   //!
   TBranch        *b_Jet_pfCombinedCvsBJetTags;   //!
   TBranch        *b_Jet_pfDeepCSVBJetTags;   //!
   TBranch        *b_Jet_pfDeepCSVProbb;   //!
   TBranch        *b_Jet_pfDeepCSVProbbb;   //!
   TBranch        *b_Jet_pfDeepCSVProbc;   //!
   TBranch        *b_Jet_pfDeepCSVProbcc;   //!
   TBranch        *b_Jet_pfDeepCSVProbudsg;   //!
   TBranch        *b_Jet_pfDeepFlavourBJetTags;   //!
   TBranch        *b_Jet_pfDeepFlavourProbb;   //!
   TBranch        *b_Jet_pfDeepFlavourProbbb;   //!
   TBranch        *b_Jet_pfDeepFlavourProblepb;   //!
   TBranch        *b_Jet_pfDeepFlavourProbc;   //!
   TBranch        *b_Jet_pfDeepFlavourProbuds;   //!
   TBranch        *b_Jet_pfDeepFlavourProbg;   //!
   TBranch        *b_Jet_pileupId;   //!
   TBranch        *b_Jet_isPFJet;   //!
   TBranch        *b_Jet_isCaloJet;   //!
   TBranch        *b_Jet_qg;   //!
   TBranch        *b_Jet_axis1;   //! 
   TBranch        *b_Jet_axis2;   //!
   TBranch        *b_Jet_ptD;   //!
   TBranch        *b_Jet_mult;   //!
   TBranch        *b_Jet_ele_indices;   //!
   TBranch        *b_Jet_ele_number;   //!
   TBranch        *b_Jet_mu_indices;   //!
   TBranch        *b_Jet_mu_number;   //!
   TBranch        *b_Jet_tau_indices;   //!
   TBranch        *b_Jet_tau_number;   //!
   TBranch        *b_Jet_neutralHadEnergyFraction;   //!
   TBranch        *b_Jet_neutralEmEnergyFraction;   //!
   TBranch        *b_Jet_chargedHadronEnergyFraction;   //!
   TBranch        *b_Jet_chargedEmEnergyFraction;   //!
   TBranch        *b_Jet_muonEnergyFraction;   //!
   TBranch        *b_Jet_electronEnergy;   //!
   TBranch        *b_Jet_photonEnergy;   //!
   TBranch        *b_Jet_emEnergyFraction;   //!
   TBranch        *b_Jet_numberOfConstituents;   //!
   TBranch        *b_Jet_chargedMultiplicity;   //!
   TBranch        *b_Jet_vtxMass;   //!
   TBranch        *b_Jet_vtxNtracks;   //!
   TBranch        *b_Jet_vtx3DVal;   //!
   TBranch        *b_Jet_vtx3DSig;   //!
   TBranch        *b_Jet_JesSF;   //!
   TBranch        *b_Jet_JesSFup;   //!
   TBranch        *b_Jet_JesSFdown;   //!
   TBranch        *b_Jet_JerSF;   //!
   TBranch        *b_Jet_JerSFup;   //!
   TBranch        *b_Jet_JerSFdown;   //!
   TBranch        *b_Jet_JesSF_AbsoluteStat_up;   //!
   TBranch        *b_Jet_JesSF_AbsoluteStat_down;   //!
   TBranch        *b_Jet_JesSF_AbsoluteScale_up;   //!
   TBranch        *b_Jet_JesSF_AbsoluteScale_down;   //!
   TBranch        *b_Jet_JesSF_AbsoluteFlavMap_up;   //!
   TBranch        *b_Jet_JesSF_AbsoluteFlavMap_down;   //!
   TBranch        *b_Jet_JesSF_AbsoluteMPFBias_up;   //!
   TBranch        *b_Jet_JesSF_AbsoluteMPFBias_down;   //!
   TBranch        *b_Jet_JesSF_Fragmentation_up;   //!
   TBranch        *b_Jet_JesSF_Fragmentation_down;   //!
   TBranch        *b_Jet_JesSF_SinglePionECAL_up;   //!
   TBranch        *b_Jet_JesSF_SinglePionECAL_down;   //!
   TBranch        *b_Jet_JesSF_SinglePionHCAL_up;   //!
   TBranch        *b_Jet_JesSF_SinglePionHCAL_down;   //!
   TBranch        *b_Jet_JesSF_FlavorQCD_up;   //!
   TBranch        *b_Jet_JesSF_FlavorQCD_down;   //!
   TBranch        *b_Jet_JesSF_TimePtEta_up;   //!
   TBranch        *b_Jet_JesSF_TimePtEta_down;   //!
   TBranch        *b_Jet_JesSF_RelativeJEREC1_up;   //!
   TBranch        *b_Jet_JesSF_RelativeJEREC1_down;   //!
   TBranch        *b_Jet_JesSF_RelativeJEREC2_up;   //!
   TBranch        *b_Jet_JesSF_RelativeJEREC2_down;   //!
   TBranch        *b_Jet_JesSF_RelativeJERHF_up;   //!
   TBranch        *b_Jet_JesSF_RelativeJERHF_down;   //!
   TBranch        *b_Jet_JesSF_RelativePtBB_up;   //!
   TBranch        *b_Jet_JesSF_RelativePtBB_down;   //!
   TBranch        *b_Jet_JesSF_RelativePtEC1_up;   //!
   TBranch        *b_Jet_JesSF_RelativePtEC1_down;   //!
   TBranch        *b_Jet_JesSF_RelativePtEC2_up;   //!
   TBranch        *b_Jet_JesSF_RelativePtEC2_down;   //!
   TBranch        *b_Jet_JesSF_RelativePtHF_up;   //!
   TBranch        *b_Jet_JesSF_RelativePtHF_down;   //!
   TBranch        *b_Jet_JesSF_RelativeBal_up;   //!
   TBranch        *b_Jet_JesSF_RelativeBal_down;   //!
   TBranch        *b_Jet_JesSF_RelativeFSR_up;   //!
   TBranch        *b_Jet_JesSF_RelativeFSR_down;   //!
   TBranch        *b_Jet_JesSF_RelativeStatFSR_up;   //!
   TBranch        *b_Jet_JesSF_RelativeStatFSR_down;   //!
   TBranch        *b_Jet_JesSF_RelativeStatEC_up;   //!
   TBranch        *b_Jet_JesSF_RelativeStatEC_down;   //!
   TBranch        *b_Jet_JesSF_RelativeStatHF_up;   //!
   TBranch        *b_Jet_JesSF_RelativeStatHF_down;   //!
   TBranch        *b_Jet_JesSF_PileUpDataMC_up;   //!
   TBranch        *b_Jet_JesSF_PileUpDataMC_down;   //!
   TBranch        *b_Jet_JesSF_PileUpPtRef_up;   //!
   TBranch        *b_Jet_JesSF_PileUpPtRef_down;   //!
   TBranch        *b_Jet_JesSF_PileUpPtBB_up;   //!
   TBranch        *b_Jet_JesSF_PileUpPtBB_down;   //!
   TBranch        *b_Jet_JesSF_PileUpPtEC1_up;   //!
   TBranch        *b_Jet_JesSF_PileUpPtEC1_down;   //!
   TBranch        *b_Jet_JesSF_PileUpPtEC2_up;   //!
   TBranch        *b_Jet_JesSF_PileUpPtEC2_down;   //!
   TBranch        *b_Jet_JesSF_PileUpPtHF_up;   //!
   TBranch        *b_Jet_JesSF_PileUpPtHF_down;   //!
   TBranch        *b_Jet_JesSF_PileUpMuZero_up;   //!
   TBranch        *b_Jet_JesSF_PileUpMuZero_down;   //!
   TBranch        *b_Jet_JesSF_PileUpEnvelope_up;   //!
   TBranch        *b_Jet_JesSF_PileUpEnvelope_down;   //!
   TBranch        *b_Jet_JesSF_SubTotalPileUp_up;   //!
   TBranch        *b_Jet_JesSF_SubTotalPileUp_down;   //!
   TBranch        *b_Jet_JesSF_SubTotalRelative_up;   //!
   TBranch        *b_Jet_JesSF_SubTotalRelative_down;   //!
   TBranch        *b_Jet_JesSF_SubTotalPt_up;   //!
   TBranch        *b_Jet_JesSF_SubTotalPt_down;   //!
   TBranch        *b_Jet_JesSF_SubTotalScale_up;   //!
   TBranch        *b_Jet_JesSF_SubTotalScale_down;   //!
   TBranch        *b_Jet_JesSF_SubTotalAbsolute_up;   //!
   TBranch        *b_Jet_JesSF_SubTotalAbsolute_down;   //!
   TBranch        *b_Jet_JesSF_SubTotalMC_up;   //!
   TBranch        *b_Jet_JesSF_SubTotalMC_down;   //!
   TBranch        *b_Jet_JesSF_TotalNoFlavor_up;   //!
   TBranch        *b_Jet_JesSF_TotalNoFlavor_down;   //!
   TBranch        *b_Jet_JesSF_TotalNoFlavorNoTime_up;   //!
   TBranch        *b_Jet_JesSF_TotalNoFlavorNoTime_down;   //!
   TBranch        *b_Jet_JesSF_FlavorZJet_up;   //!
   TBranch        *b_Jet_JesSF_FlavorZJet_down;   //!
   TBranch        *b_Jet_JesSF_FlavorPhotonJet_up;   //!
   TBranch        *b_Jet_JesSF_FlavorPhotonJet_down;   //!
   TBranch        *b_Jet_JesSF_FlavorPureGluon_up;   //!
   TBranch        *b_Jet_JesSF_FlavorPureGluon_down;   //!
   TBranch        *b_Jet_JesSF_FlavorPureQuark_up;   //!
   TBranch        *b_Jet_JesSF_FlavorPureQuark_down;   //!
   TBranch        *b_Jet_JesSF_FlavorPureCharm_up;   //!
   TBranch        *b_Jet_JesSF_FlavorPureCharm_down;   //!
   TBranch        *b_Jet_JesSF_FlavorPureBottom_up;   //!
   TBranch        *b_Jet_JesSF_FlavorPureBottom_down;   //!
   TBranch        *b_Jet_partonFlavour;   //!
   TBranch        *b_Jet_hadronFlavour;   //!
   TBranch        *b_BoostedJet_pt;   //!
   TBranch        *b_BoostedJet_eta;   //!
   TBranch        *b_BoostedJet_phi;   //!
   TBranch        *b_BoostedJet_energy;   //!
   TBranch        *b_BoostedJet_mass;   //!
   TBranch        *b_BoostedJet_Uncorr_pt;   //!
   TBranch        *b_BoostedJet_pfJetProbabilityBJetTags;   //!
   TBranch        *b_BoostedJet_pfCombinedMVAV2BJetTags;   //!
   TBranch        *b_BoostedJet_pfCombinedInclusiveSecondaryVertexV2BJetTags;   //!
   TBranch        *b_BoostedJet_pfCombinedCvsLJetTags;   //!
   TBranch        *b_BoostedJet_pfCombinedCvsBJetTags;   //!
   TBranch        *b_BoostedJet_neutralHadEnergyFraction;   //!
   TBranch        *b_BoostedJet_neutralEmEmEnergyFraction;   //!
   TBranch        *b_BoostedJet_chargedHadronEnergyFraction;   //!
   TBranch        *b_BoostedJet_chargedEmEnergyFraction;   //!
   TBranch        *b_BoostedJet_muonEnergyFraction;   //!
   TBranch        *b_BoostedJet_numberOfConstituents;   //!
   TBranch        *b_BoostedJet_chargedMultiplicity;   //!
   TBranch        *b_BoostedJet_electronEnergy;   //!
   TBranch        *b_BoostedJet_photonEnergy;   //!
   TBranch        *b_BoostedJet_tau1;   //!
   TBranch        *b_BoostedJet_tau2;   //!
   TBranch        *b_BoostedJet_tau3;   //!
   TBranch        *b_BoostedJet_softdrop_mass;   //!
   TBranch        *b_BoostedJet_pruned_mass;   //!
   TBranch        *b_BoostedJet_puppi_pt;   //!
   TBranch        *b_BoostedJet_puppi_mass;   //!
   TBranch        *b_BoostedJet_puppi_eta;   //!
   TBranch        *b_BoostedJet_puppi_phi;   //!
   TBranch        *b_BoostedJet_puppi_tau1;   //!
   TBranch        *b_BoostedJet_puppi_tau2;   //!
   TBranch        *b_BoostedJet_puppi_tau3;   //!
   TBranch        *b_BoostedJet_puppi_softdrop_masscorr;   //!
   TBranch        *b_BoostedJet_JesSF;   //!
   TBranch        *b_BoostedJet_JesSFup;   //!
   TBranch        *b_BoostedJet_JesSFdown;   //!
   TBranch        *b_BoostedJet_JerSF;   //!
   TBranch        *b_BoostedJet_JerSFup;   //!
   TBranch        *b_BoostedJet_JerSFdown;   //!
   TBranch        *b_TopTagging_topMass;   //!
   TBranch        *b_TopTagging_minMass;   //!
   TBranch        *b_TopTagging_wMass;   //!
   TBranch        *b_TopTagging_nSubJets;   //!
   TBranch        *b_SourceNumber;   //!
   TBranch        *b_PUWeight;   //!
   TBranch        *b_MinBiasUpWeight;   //!
   TBranch        *b_MinBiasDownWeight;   //!
   TBranch        *b_Met_type1PF_pt;   //!
   TBranch        *b_Met_type1PF_px;   //!
   TBranch        *b_Met_type1PF_py;   //!
   TBranch        *b_Met_type1PF_pz;   //!
   TBranch        *b_Met_type1PF_phi;   //!
   TBranch        *b_Met_type1PF_sumEt;   //!
   TBranch        *b_Met_type1PF_shiftedPtUp;   //!
   TBranch        *b_Met_type1PF_shiftedPtDown;   //!
   TBranch        *b_Gen_type1PF_Met;   //!
   TBranch        *b_Gen_type1PF_px;   //!
   TBranch        *b_Gen_type1PF_py;   //!

   EventTree(TTree *tree=0);
   virtual ~EventTree();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef EventTree_cxx
EventTree::EventTree(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("OutTree.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("OutTree.root");
      }
      TDirectory * dir = (TDirectory*)f->Get("OutTree.root:/TNT");
      dir->GetObject("EventTree",tree);

   }
   Init(tree);
}

EventTree::~EventTree()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t EventTree::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t EventTree::LoadTree(Long64_t entry)
{
// Set the environment to read one entry
   if (!fChain) return -5;
   Long64_t centry = fChain->LoadTree(entry);
   if (centry < 0) return centry;
   if (fChain->GetTreeNumber() != fCurrent) {
      fCurrent = fChain->GetTreeNumber();
      Notify();
   }
   return centry;
}

void EventTree::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set object pointer
   Gen_pt = 0;
   Gen_eta = 0;
   Gen_phi = 0;
   Gen_p = 0;
   Gen_energy = 0;
   Gen_charge = 0;
   Gen_vx = 0;
   Gen_vy = 0;
   Gen_vz = 0;
   Gen_status = 0;
   Gen_pdg_id = 0;
   Gen_motherpdg_id = 0;
   Gen_numDaught = 0;
   Gen_numMother = 0;
   Gen_BmotherIndex = 0;
   Gen_BmotherIndices = 0;
   Gen_BdaughtIndices = 0;
   Gen_isPromptFinalState = 0;
   Gen_isDirectPromptTauDecayProductFinalState = 0;
   EVENT_genWeights = 0;
   EVENT_psWeights = 0;
   EVENT_rWeights = 0;
   pvertex_ndof = 0;
   pvertex_dxy = 0;
   pvertex_x = 0;
   pvertex_y = 0;
   pvertex_z = 0;
   pvertex_xError = 0;
   pvertex_yError = 0;
   pvertex_zError = 0;
   beamSpot_x0 = 0;
   beamSpot_y0 = 0;
   beamSpot_z0 = 0;
   beamSpot_xWidth = 0;
   beamSpot_yWidth = 0;
   Muon_pt = 0;
   Muon_eta = 0;
   Muon_phi = 0;
   Muon_energy = 0;
   Muon_px = 0;
   Muon_py = 0;
   Muon_pz = 0;
   Muon_p = 0;
   Muon_dB = 0;
   Muon_pt_it = 0;
   Muon_ptErr_it = 0;
   Muon_pTErrOVpT_it = 0;
   Muon_pt_bt = 0;
   Muon_ptErr_bt = 0;
   Muon_pTErrOVpT_bt = 0;
   Muon_pt_tunePbt = 0;
   Muon_charge = 0;
   Muon_soft = 0;
   Muon_loose = 0;
   Muon_medium = 0;
   Muon_tight = 0;
   Muon_isHighPt = 0;
   Muon_isTrkHighPt = 0;
   Muon_TrkIsoLoose = 0;
   Muon_TrkIsoTight = 0;
   Muon_TrigLoose = 0;
   Muon_POGisGood = 0;
   Muon_pdgId = 0;
   Muon_simPdgId = 0;
   Muon_simMotherPdgId = 0;
   Muon_simFlavour = 0;
   Muon_pf = 0;
   Muon_isGlobal = 0;
   Muon_isTrackerMuon = 0;
   Muon_tunePBestTrackType = 0;
   Muon_isoR04Charged = 0;
   Muon_isoR04NeutralHadron = 0;
   Muon_isoR04Photon = 0;
   Muon_isoR04PU = 0;
   Muon_relIsoDeltaBetaR04 = 0;
   Muon_isoR04CharParPt = 0;
   Muon_isoR03Charged = 0;
   Muon_isoR03NeutralHadron = 0;
   Muon_isoR03Photon = 0;
   Muon_isoR03PU = 0;
   Muon_relIsoDeltaBetaR03 = 0;
   Muon_isoR03CharParPt = 0;
   Muon_trackIso = 0;
   Muon_TrackerIso = 0;
   Muon_ecalIso = 0;
   Muon_hcalIso = 0;
   Muon_caloIso = 0;
   Muon_isoSum = 0;
   Muon_pfEcalEnergy = 0;
   Muon_chi2 = 0;
   Muon_chi2LocalPosition = 0;
   Muon_matchedStat = 0;
   Muon_validHits = 0;
   Muon_validHitsInner = 0;
   Muon_TLayers = 0;
   Muon_ndof = 0;
   Muon_validFraction = 0;
   Muon_pixelLayersWithMeasurement = 0;
   Muon_qualityhighPurity = 0;
   Muon_trkKink = 0;
   Muon_segmentCompatibility = 0;
   Muon_dxy_pv = 0;
   Muon_dz_pv = 0;
   Muon_dz_bs = 0;
   Muon_dxy_bs = 0;
   Muon_dzError = 0;
   Muon_dxyError = 0;
   Muon_vtx = 0;
   Muon_vty = 0;
   Muon_vtz = 0;
   Muon_track_PCAx_bs = 0;
   Muon_track_PCAy_bs = 0;
   Muon_track_PCAz_bs = 0;
   Muon_track_PCAx_pv = 0;
   Muon_track_PCAy_pv = 0;
   Muon_track_PCAz_pv = 0;
   Muon_trackFitErrorMatrix_00 = 0;
   Muon_trackFitErrorMatrix_01 = 0;
   Muon_trackFitErrorMatrix_02 = 0;
   Muon_trackFitErrorMatrix_11 = 0;
   Muon_trackFitErrorMatrix_12 = 0;
   Muon_trackFitErrorMatrix_22 = 0;
   Muon_dz_bt = 0;
   Muon_dxy_bt = 0;
   Muon_miniIsoRel = 0;
   Muon_miniIsoCh = 0;
   Muon_miniIsoNeu = 0;
   Muon_miniIsoPUsub = 0;
   Muon_jetdr = 0;
   Muon_jetl1corr = 0;
   Muon_jetislep = 0;
   Muon_jetidx = 0;
   Muon_jetpt = 0;
   Muon_jetptratio = 0;
   Muon_jetptratioV2 = 0;
   Muon_jetcsv = 0;
   Muon_jetdeepcsv = 0;
   Muon_jetdeepflavour = 0;
   Muon_ptrel = 0;
   Muon_IP3Dsig_it = 0;
   Muon_pvass = 0;
   Muon_etarel = 0;
   Muon_ptOVen = 0;
   Muon_mujet_pfJetProbabilityBJetTag = 0;
   Muon_mujet_pfCombinedMVABJetTags = 0;
   Muon_mujet_qgl = 0;
   Muon_mumass = 0;
   Muon_mujet_mass = 0;
   Muon_mujet_Wmass = 0;
   Muon_mujet_Topmass = 0;
   Muon_mujet_WTopmass = 0;
   Muon_IP3D_val = 0;
   Muon_IP3D_err = 0;
   Muon_IP3D_sig = 0;
   Muon_IP2D_val = 0;
   Muon_IP2D_err = 0;
   Muon_IP2D_sig = 0;
   Muon_sIP3D_val = 0;
   Muon_sIP3D_err = 0;
   Muon_sIP3D_sig = 0;
   Muon_sIP2D_val = 0;
   Muon_sIP2D_err = 0;
   Muon_sIP2D_sig = 0;
   Muon_IP1D_val = 0;
   Muon_IP1D_err = 0;
   Muon_IP1D_sig = 0;
   Muon_sIP1D_val = 0;
   Muon_sIP1D_err = 0;
   Muon_sIP1D_sig = 0;
   Muon_lepjetMaxIP3D_val = 0;
   Muon_lepjetMaxIP3D_sig = 0;
   Muon_lepjetMaxsIP3D_val = 0;
   Muon_lepjetMaxsIP3D_sig = 0;
   Muon_lepjetMaxIP2D_val = 0;
   Muon_lepjetMaxIP2D_sig = 0;
   Muon_lepjetMaxsIP2D_val = 0;
   Muon_lepjetMaxsIP2D_sig = 0;
   Muon_lepjetMaxIP1D_val = 0;
   Muon_lepjetMaxIP1D_sig = 0;
   Muon_lepjetMaxsIP1D_val = 0;
   Muon_lepjetMaxsIP1D_sig = 0;
   Muon_lepjetAvIP3D_val = 0;
   Muon_lepjetAvIP3D_sig = 0;
   Muon_lepjetAvsIP3D_val = 0;
   Muon_lepjetAvsIP3D_sig = 0;
   Muon_lepjetAvIP2D_val = 0;
   Muon_lepjetAvIP2D_sig = 0;
   Muon_lepjetAvsIP2D_val = 0;
   Muon_lepjetAvsIP2D_sig = 0;
   Muon_lepjetAvIP1D_val = 0;
   Muon_lepjetAvIP1D_sig = 0;
   Muon_lepjetAvsIP1D_val = 0;
   Muon_lepjetAvsIP1D_sig = 0;
   Muon_lepjetchtrks = 0;
   Muon_lepjetpvchtrks = 0;
   Muon_lepjetnonpvchtrks = 0;
   Muon_lepjetndaus = 0;
   Muon_lepjetpvchi2 = 0;
   Muon_lepjetnumno2trk = 0;
   Muon_gen_pt = 0;
   Muon_gen_eta = 0;
   Muon_gen_phi = 0;
   Muon_gen_en = 0;
   Muon_gen_pdgId = 0;
   Muon_gen_isPromptFinalState = 0;
   Muon_gen_isDirectPromptTauDecayProductFinalState = 0;
   Muon_isMatchedToTrigger = 0;
   patElectron_pt = 0;
   patElectron_eta = 0;
   patElectron_phi = 0;
   patElectron_energy = 0;
   patElectron_px = 0;
   patElectron_py = 0;
   patElectron_pz = 0;
   patElectron_p = 0;
   patElectron_Et = 0;
   patElectron_SCeta = 0;
   patElectron_inCrack = 0;
   patElectron_energySF = 0;
   patElectron_ecalEnergyErrPostCorr = 0;
   patElectron_ecalEnergyErrPreCorr = 0;
   patElectron_ecalEnergyPostCorr = 0;
   patElectron_ecalEnergyPreCorr = 0;
   patElectron_ecalTrkEnergyErrPostCorr = 0;
   patElectron_ecalTrkEnergyErrPreCorr = 0;
   patElectron_ecalTrkEnergyPostCorr = 0;
   patElectron_ecalTrkEnergyPreCorr = 0;
   patElectron_energyScaleDown = 0;
   patElectron_energyScaleGainDown = 0;
   patElectron_energyScaleGainUp = 0;
   patElectron_energyScaleStatDown = 0;
   patElectron_energyScaleStatUp = 0;
   patElectron_energyScaleSystDown = 0;
   patElectron_energyScaleSystUp = 0;
   patElectron_energyScaleUp = 0;
   patElectron_energyScaleValue = 0;
   patElectron_energySigmaDown = 0;
   patElectron_energySigmaPhiDown = 0;
   patElectron_energySigmaPhiUp = 0;
   patElectron_energySigmaRhoDown = 0;
   patElectron_energySigmaRhoUp = 0;
   patElectron_energySigmaUp = 0;
   patElectron_energySigmaValue = 0;
   patElectron_energySmearNrSigma = 0;
   patElectron_charge = 0;
   patElectron_isGsfCtfScPixChargeConsistent = 0;
   patElectron_isGsfScPixChargeConsistent = 0;
   patElectron_isPassVeto = 0;
   patElectron_isPassLoose = 0;
   patElectron_isPassMedium = 0;
   patElectron_isPassTight = 0;
   patElectron_isPassMvaIsowp80 = 0;
   patElectron_isPassMvanonIsowp80 = 0;
   patElectron_isPassMvaIsowp90 = 0;
   patElectron_isPassMvanonIsowp90 = 0;
   patElectron_isPassMvaIsowpLoose = 0;
   patElectron_isPassMvanonIsowpLoose = 0;
   patElectron_mvaValue_nonIso = 0;
   patElectron_mvaCategory_nonIso = 0;
   patElectron_mvaValue_Iso = 0;
   patElectron_mvaCategory_Iso = 0;
   patElectron_isPassOldVeto = 0;
   patElectron_isPassOldLoose = 0;
   patElectron_isPassOldMedium = 0;
   patElectron_isPassOldTight = 0;
   patElectron_isPassOldMvaIsowp80 = 0;
   patElectron_isPassOldMvanonIsowp80 = 0;
   patElectron_isPassOldMvaIsowp90 = 0;
   patElectron_isPassOldMvanonIsowp90 = 0;
   patElectron_isPassOldMvaIsowpLoose = 0;
   patElectron_isPassOldMvanonIsowpLoose = 0;
   patElectron_OldmvaValue_nonIso = 0;
   patElectron_OldmvaCategory_nonIso = 0;
   patElectron_OldmvaValue_Iso = 0;
   patElectron_OldmvaCategory_Iso = 0;
   patElectron_isPassHEEPId = 0;
   patElectron_pdgId = 0;
   patElectron_isEcalDriven = 0;
   patElectron_isPassMvaHZZwpLoose = 0;
   patElectron_mvaValue_HZZ = 0;
   patElectron_mvaCategory_HZZ = 0;
   patElectron_isoChargedHadrons = 0;
   patElectron_isoNeutralHadrons = 0;
   patElectron_isoPhotons = 0;
   patElectron_isoPU = 0;
   patElectron_relIsoDeltaBeta = 0;
   patElectron_relIsoRhoEA = 0;
   patElectron_dr03EcalRecHitSumEt = 0;
   patElectron_dr03HcalDepth1TowerSumEt = 0;
   patElectron_isolPtTracks = 0;
   patElectron_ecalPFClusterIso = 0;
   patElectron_hcalPFClusterIso = 0;
   patElectron_dEtaIn = 0;
   patElectron_dPhiIn = 0;
   patElectron_full5x5_sigmaIetaIeta = 0;
   patElectron_full5x5_e2x5Max = 0;
   patElectron_full5x5_e5x5 = 0;
   patElectron_full5x5_e1x5 = 0;
   patElectron_hOverE = 0;
   patElectron_ooEmooP = 0;
   patElectron_passConversionVeto = 0;
   patElectron_expectedMissingInnerHits = 0;
   patElectron_gsfTrack_ndof = 0;
   patElectron_gsfTrack_normChi2 = 0;
   patElectron_gsfTrack_dz_pv = 0;
   patElectron_gsfTrack_dxy_pv = 0;
   patElectron_d0 = 0;
   patElectron_dzError = 0;
   patElectron_dxyError = 0;
   patElectron_gsfTrack_vtx = 0;
   patElectron_gsfTrack_vty = 0;
   patElectron_gsfTrack_vtz = 0;
   patElectron_gsfTrack_dz_bs = 0;
   patElectron_gsfTrack_dxy_bs = 0;
   patElectron_gsfTrack_PCAx_pv = 0;
   patElectron_gsfTrack_PCAy_pv = 0;
   patElectron_gsfTrack_PCAz_pv = 0;
   patElectron_gsfTrack_PCAx_bs = 0;
   patElectron_gsfTrack_PCAy_bs = 0;
   patElectron_gsfTrack_PCAz_bs = 0;
   patElectron_gsfTrackFitErrorMatrix_00 = 0;
   patElectron_gsfTrackFitErrorMatrix_01 = 0;
   patElectron_gsfTrackFitErrorMatrix_02 = 0;
   patElectron_gsfTrackFitErrorMatrix_11 = 0;
   patElectron_gsfTrackFitErrorMatrix_12 = 0;
   patElectron_gsfTrackFitErrorMatrix_22 = 0;
   patElectron_miniIsoRel = 0;
   patElectron_miniIsoCh = 0;
   patElectron_miniIsoNeu = 0;
   patElectron_miniIsoPUsub = 0;
   patElectron_jetdr = 0;
   patElectron_jetl1corr = 0;
   patElectron_jetislep = 0;
   patElectron_jetidx = 0;
   patElectron_jetpt = 0;
   patElectron_jetptratio = 0;
   patElectron_jetptratioV2 = 0;
   patElectron_jetcsv = 0;
   patElectron_jetdeepcsv = 0;
   patElectron_jetdeepflavour = 0;
   patElectron_ptrel = 0;
   patElectron_IP3Dsig = 0;
   patElectron_eleMVASpring15NonTrig25ns = 0;
   patElectron_eleMVASpring15NonTrig25ns_VL = 0;
   patElectron_pvass = 0;
   patElectron_etarel = 0;
   patElectron_ptOVen = 0;
   patElectron_elejet_pfJetProbabilityBJetTag = 0;
   patElectron_elejet_pfCombinedMVABJetTags = 0;
   patElectron_elejet_qgl = 0;
   patElectron_elemass = 0;
   patElectron_elejet_mass = 0;
   patElectron_elejet_Wmass = 0;
   patElectron_elejet_Topmass = 0;
   patElectron_elejet_WTopmass = 0;
   patElectron_IP3D_val = 0;
   patElectron_IP3D_err = 0;
   patElectron_IP3D_sig = 0;
   patElectron_IP2D_val = 0;
   patElectron_IP2D_err = 0;
   patElectron_IP2D_sig = 0;
   patElectron_sIP3D_val = 0;
   patElectron_sIP3D_err = 0;
   patElectron_sIP3D_sig = 0;
   patElectron_sIP2D_val = 0;
   patElectron_sIP2D_err = 0;
   patElectron_sIP2D_sig = 0;
   patElectron_IP1D_val = 0;
   patElectron_IP1D_err = 0;
   patElectron_IP1D_sig = 0;
   patElectron_sIP1D_val = 0;
   patElectron_sIP1D_err = 0;
   patElectron_sIP1D_sig = 0;
   patElectron_lepjetMaxIP3D_val = 0;
   patElectron_lepjetMaxIP3D_sig = 0;
   patElectron_lepjetMaxsIP3D_val = 0;
   patElectron_lepjetMaxsIP3D_sig = 0;
   patElectron_lepjetMaxIP2D_val = 0;
   patElectron_lepjetMaxIP2D_sig = 0;
   patElectron_lepjetMaxsIP2D_val = 0;
   patElectron_lepjetMaxsIP2D_sig = 0;
   patElectron_lepjetMaxIP1D_val = 0;
   patElectron_lepjetMaxIP1D_sig = 0;
   patElectron_lepjetMaxsIP1D_val = 0;
   patElectron_lepjetMaxsIP1D_sig = 0;
   patElectron_lepjetAvIP3D_val = 0;
   patElectron_lepjetAvIP3D_sig = 0;
   patElectron_lepjetAvsIP3D_val = 0;
   patElectron_lepjetAvsIP3D_sig = 0;
   patElectron_lepjetAvIP2D_val = 0;
   patElectron_lepjetAvIP2D_sig = 0;
   patElectron_lepjetAvsIP2D_val = 0;
   patElectron_lepjetAvsIP2D_sig = 0;
   patElectron_lepjetAvIP1D_val = 0;
   patElectron_lepjetAvIP1D_sig = 0;
   patElectron_lepjetAvsIP1D_val = 0;
   patElectron_lepjetAvsIP1D_sig = 0;
   patElectron_lepjetchtrks = 0;
   patElectron_lepjetpvchtrks = 0;
   patElectron_lepjetnonpvchtrks = 0;
   patElectron_lepjetndaus = 0;
   patElectron_lepjetpvchi2 = 0;
   patElectron_lepjetnumno2trk = 0;
   patElectron_gen_pt = 0;
   patElectron_gen_eta = 0;
   patElectron_gen_phi = 0;
   patElectron_gen_en = 0;
   patElectron_gen_pdgId = 0;
   patElectron_gen_isPromptFinalState = 0;
   patElectron_gen_isDirectPromptTauDecayProductFinalState = 0;
   patElectron_isMatchedToTrigger = 0;
   Tau_pt = 0;
   Tau_eta = 0;
   Tau_phi = 0;
   Tau_energy = 0;
   Tau_px = 0;
   Tau_py = 0;
   Tau_pz = 0;
   Tau_p = 0;
   Tau_leadChargedCandPt = 0;
   Tau_leadChargedCandEta = 0;
   Tau_leadChargedCandPhi = 0;
   Tau_leadChargedCandE = 0;
   Tau_leadChargedCandTrack_pt = 0;
   Tau_leadChargedCandTrack_ptError = 0;
   Tau_charge = 0;
   Tau_leadChargedCandCharge = 0;
   Tau_decayModeFinding = 0;
   Tau_decayModeFindingNewDMs = 0;
   Tau_againstMuonLoose3 = 0;
   Tau_againstMuonTight3 = 0;
   Tau_againstElectronVLooseMVA6 = 0;
   Tau_againstElectronLooseMVA6 = 0;
   Tau_againstElectronMediumMVA6 = 0;
   Tau_againstElectronTightMVA6 = 0;
   Tau_chargedIsoPtSum = 0;
   Tau_neutralIsoPtSum = 0;
   Tau_puCorrPtSum = 0;
   Tau_byVLooseIsolationMVArun2v1DBoldDMwLT = 0;
   Tau_byLooseIsolationMVArun2v1DBoldDMwLT = 0;
   Tau_byMediumIsolationMVArun2v1DBoldDMwLT = 0;
   Tau_byTightIsolationMVArun2v1DBoldDMwLT = 0;
   Tau_byVTightIsolationMVArun2v1DBoldDMwLT = 0;
   Tau_byVLooseIsolationMVArun2v1DBnewDMwLT = 0;
   Tau_byLooseIsolationMVArun2v1DBnewDMwLT = 0;
   Tau_byMediumIsolationMVArun2v1DBnewDMwLT = 0;
   Tau_byTightIsolationMVArun2v1DBnewDMwLT = 0;
   Tau_byVTightIsolationMVArun2v1DBnewDMwLT = 0;
   Tau_byLooseIsolationMVArun2v1DBdR03oldDMwLT = 0;
   Tau_byMediumIsolationMVArun2v1DBdR03oldDMwLT = 0;
   Tau_byIsolationMVArun2017v2DBoldDMdR0p3wLTraw2017 = 0;
   Tau_byVVLooseIsolationMVArun2017v2DBoldDMdR0p3wLT2017 = 0;
   Tau_byVLooseIsolationMVArun2017v2DBoldDMdR0p3wLT2017 = 0;
   Tau_byLooseIsolationMVArun2017v2DBoldDMdR0p3wLT2017 = 0;
   Tau_byMediumIsolationMVArun2017v2DBoldDMdR0p3wLT2017 = 0;
   Tau_byTightIsolationMVArun2017v2DBoldDMdR0p3wLT2017 = 0;
   Tau_byVTightIsolationMVArun2017v2DBoldDMdR0p3wLT2017 = 0;
   Tau_byVVTightIsolationMVArun2017v2DBoldDMdR0p3wLT2017 = 0;
   Tau_nProngs = 0;
   Tau_leadChargedCandNdof = 0;
   Tau_leadChargedCandChi2 = 0;
   Tau_leadChargedCandValidHits = 0;
   Tau_defaultDxy = 0;
   Tau_defaultDxyError = 0;
   Tau_defaultDxySig = 0;
   Tau_packedLeadTauCand_dxy = 0;
   Tau_packedLeadTauCand_dz = 0;
   Tau_packedLeadTauCand_dxyError = 0;
   Tau_packedLeadTauCand_dzError = 0;
   Tau_defaultFlightLengthX = 0;
   Tau_defaultFlightLengthY = 0;
   Tau_defaultFlightLengthZ = 0;
   Tau_defaultFlightLengthSig = 0;
   Tau_default_PCAx_pv = 0;
   Tau_default_PCAy_pv = 0;
   Tau_default_PCAz_pv = 0;
   Tau_leadChargedCandDz_pv = 0;
   Tau_leadChargedCandDxy_pv = 0;
   Tau_leadChargedCandDz_bs = 0;
   Tau_leadChargedCandDxy_bs = 0;
   Tau_leadChargedCandDzError = 0;
   Tau_leadChargedCandDxyError = 0;
   Tau_leadChargedCandVtx = 0;
   Tau_leadChargedCandVty = 0;
   Tau_leadChargedCandVtz = 0;
   Tau_leadChargedCandTrack_PCAx_bs = 0;
   Tau_leadChargedCandTrack_PCAy_bs = 0;
   Tau_leadChargedCandTrack_PCAz_bs = 0;
   Tau_leadChargedCandTrack_PCAx_pv = 0;
   Tau_leadChargedCandTrack_PCAy_pv = 0;
   Tau_leadChargedCandTrack_PCAz_pv = 0;
   Tau_leadChargedCandTrackFitErrorMatrix_00 = 0;
   Tau_leadChargedCandTrackFitErrorMatrix_01 = 0;
   Tau_leadChargedCandTrackFitErrorMatrix_02 = 0;
   Tau_leadChargedCandTrackFitErrorMatrix_11 = 0;
   Tau_leadChargedCandTrackFitErrorMatrix_12 = 0;
   Tau_leadChargedCandTrackFitErrorMatrix_22 = 0;
   Jet_pt = 0;
   Jet_eta = 0;
   Jet_phi = 0;
   Jet_energy = 0;
   Jet_mass = 0;
   Jet_px = 0;
   Jet_py = 0;
   Jet_pz = 0;
   Jet_Uncorr_pt = 0;
   Jet_L1corr_pt = 0;
   Jet_pfCombinedInclusiveSecondaryVertexV2BJetTags = 0;
   Jet_pfCombinedMVAV2BJetTags = 0;
   Jet_pfJetProbabilityBJetTags = 0;
   Jet_pfCombinedCvsLJetTags = 0;
   Jet_pfCombinedCvsBJetTags = 0;
   Jet_pfDeepCSVBJetTags = 0;
   Jet_pfDeepCSVProbb = 0;
   Jet_pfDeepCSVProbbb = 0;
   Jet_pfDeepCSVProbc = 0;
   Jet_pfDeepCSVProbcc = 0;
   Jet_pfDeepCSVProbudsg = 0;
   Jet_pfDeepFlavourBJetTags = 0;
   Jet_pfDeepFlavourProbb = 0;
   Jet_pfDeepFlavourProbbb = 0;
   Jet_pfDeepFlavourProblepb = 0;
   Jet_pfDeepFlavourProbc = 0;
   Jet_pfDeepFlavourProbuds = 0;
   Jet_pfDeepFlavourProbg = 0;
   Jet_pileupId = 0;
   Jet_isPFJet = 0;
   Jet_isCaloJet = 0;
   Jet_qg = 0;
   Jet_axis1 = 0; 
   Jet_axis2 = 0;
   Jet_ptD = 0;
   Jet_mult = 0;
   Jet_ele_indices = 0;
   Jet_ele_number = 0;
   Jet_mu_indices = 0;
   Jet_mu_number = 0;
   Jet_tau_indices = 0;
   Jet_tau_number = 0;
   Jet_neutralHadEnergyFraction = 0;
   Jet_neutralEmEnergyFraction = 0;
   Jet_chargedHadronEnergyFraction = 0;
   Jet_chargedEmEnergyFraction = 0;
   Jet_muonEnergyFraction = 0;
   Jet_electronEnergy = 0;
   Jet_photonEnergy = 0;
   Jet_emEnergyFraction = 0;
   Jet_numberOfConstituents = 0;
   Jet_chargedMultiplicity = 0;
   Jet_vtxMass = 0;
   Jet_vtxNtracks = 0;
   Jet_vtx3DVal = 0;
   Jet_vtx3DSig = 0;
   Jet_JesSF = 0;
   Jet_JesSFup = 0;
   Jet_JesSFdown = 0;
   Jet_JerSF = 0;
   Jet_JerSFup = 0;
   Jet_JerSFdown = 0;
   Jet_JesSF_AbsoluteStat_up = 0;
   Jet_JesSF_AbsoluteStat_down = 0;
   Jet_JesSF_AbsoluteScale_up = 0;
   Jet_JesSF_AbsoluteScale_down = 0;
   Jet_JesSF_AbsoluteFlavMap_up = 0;
   Jet_JesSF_AbsoluteFlavMap_down = 0;
   Jet_JesSF_AbsoluteMPFBias_up = 0;
   Jet_JesSF_AbsoluteMPFBias_down = 0;
   Jet_JesSF_Fragmentation_up = 0;
   Jet_JesSF_Fragmentation_down = 0;
   Jet_JesSF_SinglePionECAL_up = 0;
   Jet_JesSF_SinglePionECAL_down = 0;
   Jet_JesSF_SinglePionHCAL_up = 0;
   Jet_JesSF_SinglePionHCAL_down = 0;
   Jet_JesSF_FlavorQCD_up = 0;
   Jet_JesSF_FlavorQCD_down = 0;
   Jet_JesSF_TimePtEta_up = 0;
   Jet_JesSF_TimePtEta_down = 0;
   Jet_JesSF_RelativeJEREC1_up = 0;
   Jet_JesSF_RelativeJEREC1_down = 0;
   Jet_JesSF_RelativeJEREC2_up = 0;
   Jet_JesSF_RelativeJEREC2_down = 0;
   Jet_JesSF_RelativeJERHF_up = 0;
   Jet_JesSF_RelativeJERHF_down = 0;
   Jet_JesSF_RelativePtBB_up = 0;
   Jet_JesSF_RelativePtBB_down = 0;
   Jet_JesSF_RelativePtEC1_up = 0;
   Jet_JesSF_RelativePtEC1_down = 0;
   Jet_JesSF_RelativePtEC2_up = 0;
   Jet_JesSF_RelativePtEC2_down = 0;
   Jet_JesSF_RelativePtHF_up = 0;
   Jet_JesSF_RelativePtHF_down = 0;
   Jet_JesSF_RelativeBal_up = 0;
   Jet_JesSF_RelativeBal_down = 0;
   Jet_JesSF_RelativeFSR_up = 0;
   Jet_JesSF_RelativeFSR_down = 0;
   Jet_JesSF_RelativeStatFSR_up = 0;
   Jet_JesSF_RelativeStatFSR_down = 0;
   Jet_JesSF_RelativeStatEC_up = 0;
   Jet_JesSF_RelativeStatEC_down = 0;
   Jet_JesSF_RelativeStatHF_up = 0;
   Jet_JesSF_RelativeStatHF_down = 0;
   Jet_JesSF_PileUpDataMC_up = 0;
   Jet_JesSF_PileUpDataMC_down = 0;
   Jet_JesSF_PileUpPtRef_up = 0;
   Jet_JesSF_PileUpPtRef_down = 0;
   Jet_JesSF_PileUpPtBB_up = 0;
   Jet_JesSF_PileUpPtBB_down = 0;
   Jet_JesSF_PileUpPtEC1_up = 0;
   Jet_JesSF_PileUpPtEC1_down = 0;
   Jet_JesSF_PileUpPtEC2_up = 0;
   Jet_JesSF_PileUpPtEC2_down = 0;
   Jet_JesSF_PileUpPtHF_up = 0;
   Jet_JesSF_PileUpPtHF_down = 0;
   Jet_JesSF_PileUpMuZero_up = 0;
   Jet_JesSF_PileUpMuZero_down = 0;
   Jet_JesSF_PileUpEnvelope_up = 0;
   Jet_JesSF_PileUpEnvelope_down = 0;
   Jet_JesSF_SubTotalPileUp_up = 0;
   Jet_JesSF_SubTotalPileUp_down = 0;
   Jet_JesSF_SubTotalRelative_up = 0;
   Jet_JesSF_SubTotalRelative_down = 0;
   Jet_JesSF_SubTotalPt_up = 0;
   Jet_JesSF_SubTotalPt_down = 0;
   Jet_JesSF_SubTotalScale_up = 0;
   Jet_JesSF_SubTotalScale_down = 0;
   Jet_JesSF_SubTotalAbsolute_up = 0;
   Jet_JesSF_SubTotalAbsolute_down = 0;
   Jet_JesSF_SubTotalMC_up = 0;
   Jet_JesSF_SubTotalMC_down = 0;
   Jet_JesSF_TotalNoFlavor_up = 0;
   Jet_JesSF_TotalNoFlavor_down = 0;
   Jet_JesSF_TotalNoFlavorNoTime_up = 0;
   Jet_JesSF_TotalNoFlavorNoTime_down = 0;
   Jet_JesSF_FlavorZJet_up = 0;
   Jet_JesSF_FlavorZJet_down = 0;
   Jet_JesSF_FlavorPhotonJet_up = 0;
   Jet_JesSF_FlavorPhotonJet_down = 0;
   Jet_JesSF_FlavorPureGluon_up = 0;
   Jet_JesSF_FlavorPureGluon_down = 0;
   Jet_JesSF_FlavorPureQuark_up = 0;
   Jet_JesSF_FlavorPureQuark_down = 0;
   Jet_JesSF_FlavorPureCharm_up = 0;
   Jet_JesSF_FlavorPureCharm_down = 0;
   Jet_JesSF_FlavorPureBottom_up = 0;
   Jet_JesSF_FlavorPureBottom_down = 0;
   Jet_partonFlavour = 0;
   Jet_hadronFlavour = 0;
   BoostedJet_pt = 0;
   BoostedJet_eta = 0;
   BoostedJet_phi = 0;
   BoostedJet_energy = 0;
   BoostedJet_mass = 0;
   BoostedJet_Uncorr_pt = 0;
   BoostedJet_pfJetProbabilityBJetTags = 0;
   BoostedJet_pfCombinedMVAV2BJetTags = 0;
   BoostedJet_pfCombinedInclusiveSecondaryVertexV2BJetTags = 0;
   BoostedJet_pfCombinedCvsLJetTags = 0;
   BoostedJet_pfCombinedCvsBJetTags = 0;
   BoostedJet_neutralHadEnergyFraction = 0;
   BoostedJet_neutralEmEmEnergyFraction = 0;
   BoostedJet_chargedHadronEnergyFraction = 0;
   BoostedJet_chargedEmEnergyFraction = 0;
   BoostedJet_muonEnergyFraction = 0;
   BoostedJet_numberOfConstituents = 0;
   BoostedJet_chargedMultiplicity = 0;
   BoostedJet_electronEnergy = 0;
   BoostedJet_photonEnergy = 0;
   BoostedJet_tau1 = 0;
   BoostedJet_tau2 = 0;
   BoostedJet_tau3 = 0;
   BoostedJet_softdrop_mass = 0;
   BoostedJet_pruned_mass = 0;
   BoostedJet_puppi_pt = 0;
   BoostedJet_puppi_mass = 0;
   BoostedJet_puppi_eta = 0;
   BoostedJet_puppi_phi = 0;
   BoostedJet_puppi_tau1 = 0;
   BoostedJet_puppi_tau2 = 0;
   BoostedJet_puppi_tau3 = 0;
   BoostedJet_puppi_softdrop_masscorr = 0;
   BoostedJet_JesSF = 0;
   BoostedJet_JesSFup = 0;
   BoostedJet_JesSFdown = 0;
   BoostedJet_JerSF = 0;
   BoostedJet_JerSFup = 0;
   BoostedJet_JerSFdown = 0;
   TopTagging_topMass = 0;
   TopTagging_minMass = 0;
   TopTagging_wMass = 0;
   TopTagging_nSubJets = 0;
   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("Gen_pt", &Gen_pt, &b_Gen_pt);
   fChain->SetBranchAddress("Gen_eta", &Gen_eta, &b_Gen_eta);
   fChain->SetBranchAddress("Gen_phi", &Gen_phi, &b_Gen_phi);
   fChain->SetBranchAddress("Gen_p", &Gen_p, &b_Gen_p);
   fChain->SetBranchAddress("Gen_energy", &Gen_energy, &b_Gen_energy);
   fChain->SetBranchAddress("Gen_charge", &Gen_charge, &b_Gen_charge);
   fChain->SetBranchAddress("Gen_vx", &Gen_vx, &b_Gen_vx);
   fChain->SetBranchAddress("Gen_vy", &Gen_vy, &b_Gen_vy);
   fChain->SetBranchAddress("Gen_vz", &Gen_vz, &b_Gen_vz);
   fChain->SetBranchAddress("Gen_status", &Gen_status, &b_Gen_status);
   fChain->SetBranchAddress("Gen_pdg_id", &Gen_pdg_id, &b_Gen_pdg_id);
   fChain->SetBranchAddress("Gen_motherpdg_id", &Gen_motherpdg_id, &b_Gen_motherpdg_id);
   fChain->SetBranchAddress("Gen_numDaught", &Gen_numDaught, &b_Gen_numDaught);
   fChain->SetBranchAddress("Gen_numMother", &Gen_numMother, &b_Gen_numMother);
   fChain->SetBranchAddress("Gen_BmotherIndex", &Gen_BmotherIndex, &b_Gen_BmotherIndex);
   fChain->SetBranchAddress("Gen_BmotherIndices", &Gen_BmotherIndices, &b_Gen_BmotherIndices);
   fChain->SetBranchAddress("Gen_BdaughtIndices", &Gen_BdaughtIndices, &b_Gen_BdaughtIndices);
   fChain->SetBranchAddress("Gen_isPromptFinalState", &Gen_isPromptFinalState, &b_Gen_isPromptFinalState);
   fChain->SetBranchAddress("Gen_isDirectPromptTauDecayProductFinalState", &Gen_isDirectPromptTauDecayProductFinalState, &b_Gen_isDirectPromptTauDecayProductFinalState);
   fChain->SetBranchAddress("HiggsDecay", &HiggsDecay, &b_HiggsDecay);
   fChain->SetBranchAddress("EVENT_event", &EVENT_event, &b_EVENT_event);
   fChain->SetBranchAddress("EVENT_run", &EVENT_run, &b_EVENT_run);
   fChain->SetBranchAddress("EVENT_lumiBlock", &EVENT_lumiBlock, &b_EVENT_lumiBlock);
   fChain->SetBranchAddress("EVENT_genWeight", &EVENT_genWeight, &b_EVENT_genWeight);
   fChain->SetBranchAddress("EVENT_genWeights", &EVENT_genWeights, &b_EVENT_genWeights);
   fChain->SetBranchAddress("EVENT_psWeights", &EVENT_psWeights, &b_EVENT_psWeights);
   fChain->SetBranchAddress("EVENT_rWeights", &EVENT_rWeights, &b_EVENT_rWeights);
   fChain->SetBranchAddress("EVENT_genHT", &EVENT_genHT, &b_EVENT_genHT);
   fChain->SetBranchAddress("EVENT_genPt", &EVENT_genPt, &b_EVENT_genPt);
   fChain->SetBranchAddress("EVENT_rhopog", &EVENT_rhopog, &b_EVENT_rhopog);
   fChain->SetBranchAddress("EVENT_rhotth", &EVENT_rhotth, &b_EVENT_rhotth);
   fChain->SetBranchAddress("EVENT_originalXWGTUP", &EVENT_originalXWGTUP, &b_EVENT_originalXWGTUP);
   fChain->SetBranchAddress("EVENT_scalePDF", &EVENT_scalePDF, &b_EVENT_scalePDF);
   fChain->SetBranchAddress("EVENT_Q2tthbbWeightUp", &EVENT_Q2tthbbWeightUp, &b_EVENT_Q2tthbbWeightUp);
   fChain->SetBranchAddress("EVENT_Q2tthbbWeightDown", &EVENT_Q2tthbbWeightDown, &b_EVENT_Q2tthbbWeightDown);
   fChain->SetBranchAddress("EVENT_PDFtthbbWeightUp", &EVENT_PDFtthbbWeightUp, &b_EVENT_PDFtthbbWeightUp);
   fChain->SetBranchAddress("EVENT_PDFtthbbWeightDown", &EVENT_PDFtthbbWeightDown, &b_EVENT_PDFtthbbWeightDown);
   fChain->SetBranchAddress("EVENT_fixedGridRhoFastjetCentral", &EVENT_fixedGridRhoFastjetCentral, &b_EVENT_fixedGridRhoFastjetCentral);
   fChain->SetBranchAddress("EVENT_fixedGridRhoFastjetCentralChargedPileUp", &EVENT_fixedGridRhoFastjetCentralChargedPileUp, &b_EVENT_fixedGridRhoFastjetCentralChargedPileUp);
   fChain->SetBranchAddress("EVENT_fixedGridRhoFastjetCentralNeutral", &EVENT_fixedGridRhoFastjetCentralNeutral, &b_EVENT_fixedGridRhoFastjetCentralNeutral);
   fChain->SetBranchAddress("EVENT_prefireWeight", &EVENT_prefireWeight, &b_EVENT_prefireWeight);
   fChain->SetBranchAddress("EVENT_prefireWeightUp", &EVENT_prefireWeightUp, &b_EVENT_prefireWeightUp);
   fChain->SetBranchAddress("EVENT_prefireWeightDown", &EVENT_prefireWeightDown, &b_EVENT_prefireWeightDown);
   fChain->SetBranchAddress("Flag_HBHENoiseFilter", &Flag_HBHENoiseFilter, &b_Flag_HBHENoiseFilter);
   fChain->SetBranchAddress("Flag_HBHENoiseIsoFilter", &Flag_HBHENoiseIsoFilter, &b_Flag_HBHENoiseIsoFilter);
   fChain->SetBranchAddress("Flag_CSCTightHaloFilter", &Flag_CSCTightHaloFilter, &b_Flag_CSCTightHaloFilter);
   fChain->SetBranchAddress("Flag_CSCTightHaloTrkMuUnvetoFilter", &Flag_CSCTightHaloTrkMuUnvetoFilter, &b_Flag_CSCTightHaloTrkMuUnvetoFilter);
   fChain->SetBranchAddress("Flag_CSCTightHalo2015Filter", &Flag_CSCTightHalo2015Filter, &b_Flag_CSCTightHalo2015Filter);
   fChain->SetBranchAddress("Flag_HcalStripHaloFilter", &Flag_HcalStripHaloFilter, &b_Flag_HcalStripHaloFilter);
   fChain->SetBranchAddress("Flag_hcalLaserEventFilter", &Flag_hcalLaserEventFilter, &b_Flag_hcalLaserEventFilter);
   fChain->SetBranchAddress("Flag_EcalDeadCellTriggerPrimitiveFilter", &Flag_EcalDeadCellTriggerPrimitiveFilter, &b_Flag_EcalDeadCellTriggerPrimitiveFilter);
   fChain->SetBranchAddress("Flag_EcalDeadCellBoundaryEnergyFilter", &Flag_EcalDeadCellBoundaryEnergyFilter, &b_Flag_EcalDeadCellBoundaryEnergyFilter);
   fChain->SetBranchAddress("Flag_goodVertices", &Flag_goodVertices, &b_Flag_goodVertices);
   fChain->SetBranchAddress("Flag_eeBadScFilter", &Flag_eeBadScFilter, &b_Flag_eeBadScFilter);
   fChain->SetBranchAddress("Flag_ecalLaserCorrFilter", &Flag_ecalLaserCorrFilter, &b_Flag_ecalLaserCorrFilter);
   fChain->SetBranchAddress("Flag_trkPOGFilters", &Flag_trkPOGFilters, &b_Flag_trkPOGFilters);
   fChain->SetBranchAddress("Flag_chargedHadronTrackResolutionFilter", &Flag_chargedHadronTrackResolutionFilter, &b_Flag_chargedHadronTrackResolutionFilter);
   fChain->SetBranchAddress("Flag_muonBadTrackFilter", &Flag_muonBadTrackFilter, &b_Flag_muonBadTrackFilter);
   fChain->SetBranchAddress("Flag_trkPOG_manystripclus53X", &Flag_trkPOG_manystripclus53X, &b_Flag_trkPOG_manystripclus53X);
   fChain->SetBranchAddress("Flag_trkPOG_toomanystripclus53X", &Flag_trkPOG_toomanystripclus53X, &b_Flag_trkPOG_toomanystripclus53X);
   fChain->SetBranchAddress("Flag_trkPOG_logErrorTooManyClusters", &Flag_trkPOG_logErrorTooManyClusters, &b_Flag_trkPOG_logErrorTooManyClusters);
   fChain->SetBranchAddress("Flag_METFilters", &Flag_METFilters, &b_Flag_METFilters);
   fChain->SetBranchAddress("Flag_globalSuperTightHalo2016Filter", &Flag_globalSuperTightHalo2016Filter, &b_Flag_globalSuperTightHalo2016Filter);
   fChain->SetBranchAddress("Flag_BadPFMuonFilter", &Flag_BadPFMuonFilter, &b_Flag_BadPFMuonFilter);
   fChain->SetBranchAddress("Flag_BadChargedCandidateFilter", &Flag_BadChargedCandidateFilter, &b_Flag_BadChargedCandidateFilter);
   fChain->SetBranchAddress("Flag_ecalBadCalibFilter", &Flag_ecalBadCalibFilter, &b_Flag_ecalBadCalibFilter);
   fChain->SetBranchAddress("HLT_PFHT650_WideJetMJJ900DEtaJJ1p5", &HLT_PFHT650_WideJetMJJ900DEtaJJ1p5, &b_HLT_PFHT650_WideJetMJJ900DEtaJJ1p5);
   fChain->SetBranchAddress("HLT_PFHT650_WideJetMJJ950DEtaJJ1p5", &HLT_PFHT650_WideJetMJJ950DEtaJJ1p5, &b_HLT_PFHT650_WideJetMJJ950DEtaJJ1p5);
   fChain->SetBranchAddress("HLT_PFHT800", &HLT_PFHT800, &b_HLT_PFHT800);
   fChain->SetBranchAddress("HLT_PFHT900", &HLT_PFHT900, &b_HLT_PFHT900);
   fChain->SetBranchAddress("HLT_PFJet450", &HLT_PFJet450, &b_HLT_PFJet450);
   fChain->SetBranchAddress("HLT_PFJet500", &HLT_PFJet500, &b_HLT_PFJet500);
   fChain->SetBranchAddress("HLT_AK8PFJet450", &HLT_AK8PFJet450, &b_HLT_AK8PFJet450);
   fChain->SetBranchAddress("HLT_AK8PFJet500", &HLT_AK8PFJet500, &b_HLT_AK8PFJet500);
   fChain->SetBranchAddress("HLT_AK8PFJet360_TrimMass30", &HLT_AK8PFJet360_TrimMass30, &b_HLT_AK8PFJet360_TrimMass30);
   fChain->SetBranchAddress("HLT_AK8PFHT700_TrimR0p1PT0p03Mass50", &HLT_AK8PFHT700_TrimR0p1PT0p03Mass50, &b_HLT_AK8PFHT700_TrimR0p1PT0p03Mass50);
   fChain->SetBranchAddress("HLT_Ele27_eta2p1_WPTight_Gsf", &HLT_Ele27_eta2p1_WPTight_Gsf, &b_HLT_Ele27_eta2p1_WPTight_Gsf);
   fChain->SetBranchAddress("HLT_Ele27_WPTight_Gsf", &HLT_Ele27_WPTight_Gsf, &b_HLT_Ele27_WPTight_Gsf);
   fChain->SetBranchAddress("HLT_Ele25_eta2p1_WPTight_Gsf", &HLT_Ele25_eta2p1_WPTight_Gsf, &b_HLT_Ele25_eta2p1_WPTight_Gsf);
   fChain->SetBranchAddress("HLT_Ele115_CaloIdVT_GsfTrkIdT", &HLT_Ele115_CaloIdVT_GsfTrkIdT, &b_HLT_Ele115_CaloIdVT_GsfTrkIdT);
   fChain->SetBranchAddress("HLT_DoubleEle24_22_eta2p1_WPLoose_Gsf", &HLT_DoubleEle24_22_eta2p1_WPLoose_Gsf, &b_HLT_DoubleEle24_22_eta2p1_WPLoose_Gsf);
   fChain->SetBranchAddress("HLT_DoubleEle33_CaloIdL_MW", &HLT_DoubleEle33_CaloIdL_MW, &b_HLT_DoubleEle33_CaloIdL_MW);
   fChain->SetBranchAddress("HLT_DoubleEle33_CaloIdL_GsfTrkIdVL_MW", &HLT_DoubleEle33_CaloIdL_GsfTrkIdVL_MW, &b_HLT_DoubleEle33_CaloIdL_GsfTrkIdVL_MW);
   fChain->SetBranchAddress("HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_DZ", &HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_DZ, &b_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL_DZ);
   fChain->SetBranchAddress("HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL", &HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL, &b_HLT_Ele23_Ele12_CaloIdL_TrackIdL_IsoVL);
   fChain->SetBranchAddress("HLT_IsoMu22", &HLT_IsoMu22, &b_HLT_IsoMu22);
   fChain->SetBranchAddress("HLT_IsoTkMu22", &HLT_IsoTkMu22, &b_HLT_IsoTkMu22);
   fChain->SetBranchAddress("HLT_IsoMu24", &HLT_IsoMu24, &b_HLT_IsoMu24);
   fChain->SetBranchAddress("HLT_IsoTkMu24", &HLT_IsoTkMu24, &b_HLT_IsoTkMu24);
   fChain->SetBranchAddress("HLT_IsoMu22_eta2p1", &HLT_IsoMu22_eta2p1, &b_HLT_IsoMu22_eta2p1);
   fChain->SetBranchAddress("HLT_IsoTkMu22_eta2p1", &HLT_IsoTkMu22_eta2p1, &b_HLT_IsoTkMu22_eta2p1);
   fChain->SetBranchAddress("HLT_Mu50", &HLT_Mu50, &b_HLT_Mu50);
   fChain->SetBranchAddress("HLT_TkMu50", &HLT_TkMu50, &b_HLT_TkMu50);
   fChain->SetBranchAddress("HLT_DoubleMu33NoFiltersNoVtx", &HLT_DoubleMu33NoFiltersNoVtx, &b_HLT_DoubleMu33NoFiltersNoVtx);
   fChain->SetBranchAddress("HLT_DoubleMu23NoFiltersNoVtxDisplaced", &HLT_DoubleMu23NoFiltersNoVtxDisplaced, &b_HLT_DoubleMu23NoFiltersNoVtxDisplaced);
   fChain->SetBranchAddress("HLT_Mu30_TkMu11", &HLT_Mu30_TkMu11, &b_HLT_Mu30_TkMu11);
   fChain->SetBranchAddress("HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ", &HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ, &b_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ);
   fChain->SetBranchAddress("HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_Mass3p8", &HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_Mass3p8, &b_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_Mass3p8);
   fChain->SetBranchAddress("HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL", &HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL, &b_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL);
   fChain->SetBranchAddress("HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ", &HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ, &b_HLT_Mu8_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ);
   fChain->SetBranchAddress("HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL", &HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL, &b_HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL);
   fChain->SetBranchAddress("HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_DZ", &HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_DZ, &b_HLT_Mu23_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL_DZ);
   fChain->SetBranchAddress("HLT_Mu23_TrkIsoVVL_Ele8_CaloIdL_TrackIdL_IsoVL_DZ", &HLT_Mu23_TrkIsoVVL_Ele8_CaloIdL_TrackIdL_IsoVL_DZ, &b_HLT_Mu23_TrkIsoVVL_Ele8_CaloIdL_TrackIdL_IsoVL_DZ);
   fChain->SetBranchAddress("HLT_Ele32_WPTight_Gsf", &HLT_Ele32_WPTight_Gsf, &b_HLT_Ele32_WPTight_Gsf);
   fChain->SetBranchAddress("HLT_Ele35_WPTight_Gsf", &HLT_Ele35_WPTight_Gsf, &b_HLT_Ele35_WPTight_Gsf);
   fChain->SetBranchAddress("HLT_IsoMu27", &HLT_IsoMu27, &b_HLT_IsoMu27);
   fChain->SetBranchAddress("HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL", &HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL, &b_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL);
   fChain->SetBranchAddress("HLT_Mu12_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ", &HLT_Mu12_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ, &b_HLT_Mu12_TrkIsoVVL_Ele23_CaloIdL_TrackIdL_IsoVL_DZ);
   fChain->SetBranchAddress("HLT_Ele16_Ele12_Ele8_CaloIdL_TrackIdL", &HLT_Ele16_Ele12_Ele8_CaloIdL_TrackIdL, &b_HLT_Ele16_Ele12_Ele8_CaloIdL_TrackIdL);
   fChain->SetBranchAddress("HLT_Mu8_DiEle12_CaloIdL_TrackIdL", &HLT_Mu8_DiEle12_CaloIdL_TrackIdL, &b_HLT_Mu8_DiEle12_CaloIdL_TrackIdL);
   fChain->SetBranchAddress("HLT_DiMu9_Ele9_CaloIdL_TrackIdL_DZ", &HLT_DiMu9_Ele9_CaloIdL_TrackIdL_DZ, &b_HLT_DiMu9_Ele9_CaloIdL_TrackIdL_DZ);
   fChain->SetBranchAddress("HLT_TripleMu_12_10_5", &HLT_TripleMu_12_10_5, &b_HLT_TripleMu_12_10_5);
   fChain->SetBranchAddress("HLT_Ele17_Ele12_CaloIdL_TrackIdL_IsoVL_DZ", &HLT_Ele17_Ele12_CaloIdL_TrackIdL_IsoVL_DZ, &b_HLT_Ele17_Ele12_CaloIdL_TrackIdL_IsoVL_DZ);
   fChain->SetBranchAddress("HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL", &HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL, &b_HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL);
   fChain->SetBranchAddress("HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ", &HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ, &b_HLT_Mu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ);
   fChain->SetBranchAddress("HLT_TkMu17_TrkIsoVVL_TkMu8_TrkIsoVVL", &HLT_TkMu17_TrkIsoVVL_TkMu8_TrkIsoVVL, &b_HLT_TkMu17_TrkIsoVVL_TkMu8_TrkIsoVVL);
   fChain->SetBranchAddress("HLT_TkMu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ", &HLT_TkMu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ, &b_HLT_TkMu17_TrkIsoVVL_TkMu8_TrkIsoVVL_DZ);
   fChain->SetBranchAddress("HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_Mass8", &HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_Mass8, &b_HLT_Mu17_TrkIsoVVL_Mu8_TrkIsoVVL_DZ_Mass8);
   fChain->SetBranchAddress("HLT_Mu8_TrkIsoVVL_Ele17_CaloIdL_TrackIdL_IsoVL", &HLT_Mu8_TrkIsoVVL_Ele17_CaloIdL_TrackIdL_IsoVL, &b_HLT_Mu8_TrkIsoVVL_Ele17_CaloIdL_TrackIdL_IsoVL);
   fChain->SetBranchAddress("HLT_Mu17_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL", &HLT_Mu17_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL, &b_HLT_Mu17_TrkIsoVVL_Ele12_CaloIdL_TrackIdL_IsoVL);
   fChain->SetBranchAddress("HLT_Mu23_TrkIsoVVL_Ele8_CaloIdL_TrackIdL_IsoVL", &HLT_Mu23_TrkIsoVVL_Ele8_CaloIdL_TrackIdL_IsoVL, &b_HLT_Mu23_TrkIsoVVL_Ele8_CaloIdL_TrackIdL_IsoVL);
   fChain->SetBranchAddress("HLT_TripleMu_10_5_5_DZ", &HLT_TripleMu_10_5_5_DZ, &b_HLT_TripleMu_10_5_5_DZ);
   fChain->SetBranchAddress("HLT_Mu8_DiEle12_CaloIdL_TrackIdL_DZ", &HLT_Mu8_DiEle12_CaloIdL_TrackIdL_DZ, &b_HLT_Mu8_DiEle12_CaloIdL_TrackIdL_DZ);
   fChain->SetBranchAddress("HLT_DiMu9_Ele9_CaloIdL_TrackIdL", &HLT_DiMu9_Ele9_CaloIdL_TrackIdL, &b_HLT_DiMu9_Ele9_CaloIdL_TrackIdL);
   fChain->SetBranchAddress("HLT_Ele27_eta2p1_WPLoose_Gsf", &HLT_Ele27_eta2p1_WPLoose_Gsf, &b_HLT_Ele27_eta2p1_WPLoose_Gsf);
   fChain->SetBranchAddress("pvertex_notempty", &pvertex_notempty, &b_pvertex_notempty);
   fChain->SetBranchAddress("nBestVtx", &nBestVtx, &b_nBestVtx);
   fChain->SetBranchAddress("npuVertices", &npuVertices, &b_npuVertices);
   fChain->SetBranchAddress("trueInteractions", &trueInteractions, &b_trueInteractions);
   fChain->SetBranchAddress("ootnpuVertices", &ootnpuVertices, &b_ootnpuVertices);
   fChain->SetBranchAddress("npuVerticesm1", &npuVerticesm1, &b_npuVerticesm1);
   fChain->SetBranchAddress("npuVerticesp1", &npuVerticesp1, &b_npuVerticesp1);
   fChain->SetBranchAddress("pvertex_ndof", &pvertex_ndof, &b_pvertex_ndof);
   fChain->SetBranchAddress("pvertex_dxy", &pvertex_dxy, &b_pvertex_dxy);
   fChain->SetBranchAddress("pvertex_x", &pvertex_x, &b_pvertex_x);
   fChain->SetBranchAddress("pvertex_y", &pvertex_y, &b_pvertex_y);
   fChain->SetBranchAddress("pvertex_z", &pvertex_z, &b_pvertex_z);
   fChain->SetBranchAddress("pvertex_xError", &pvertex_xError, &b_pvertex_xError);
   fChain->SetBranchAddress("pvertex_yError", &pvertex_yError, &b_pvertex_yError);
   fChain->SetBranchAddress("pvertex_zError", &pvertex_zError, &b_pvertex_zError);
   fChain->SetBranchAddress("beamSpot_x0", &beamSpot_x0, &b_beamSpot_x0);
   fChain->SetBranchAddress("beamSpot_y0", &beamSpot_y0, &b_beamSpot_y0);
   fChain->SetBranchAddress("beamSpot_z0", &beamSpot_z0, &b_beamSpot_z0);
   fChain->SetBranchAddress("beamSpot_xWidth", &beamSpot_xWidth, &b_beamSpot_xWidth);
   fChain->SetBranchAddress("beamSpot_yWidth", &beamSpot_yWidth, &b_beamSpot_yWidth);
   fChain->SetBranchAddress("Muon_pt", &Muon_pt, &b_Muon_pt);
   fChain->SetBranchAddress("Muon_eta", &Muon_eta, &b_Muon_eta);
   fChain->SetBranchAddress("Muon_phi", &Muon_phi, &b_Muon_phi);
   fChain->SetBranchAddress("Muon_energy", &Muon_energy, &b_Muon_energy);
   fChain->SetBranchAddress("Muon_px", &Muon_px, &b_Muon_px);
   fChain->SetBranchAddress("Muon_py", &Muon_py, &b_Muon_py);
   fChain->SetBranchAddress("Muon_pz", &Muon_pz, &b_Muon_pz);
   fChain->SetBranchAddress("Muon_p", &Muon_p, &b_Muon_p);
   fChain->SetBranchAddress("Muon_dB", &Muon_dB, &b_Muon_dB);
   fChain->SetBranchAddress("Muon_pt_it", &Muon_pt_it, &b_Muon_pt_it);
   fChain->SetBranchAddress("Muon_ptErr_it", &Muon_ptErr_it, &b_Muon_ptErr_it);
   fChain->SetBranchAddress("Muon_pTErrOVpT_it", &Muon_pTErrOVpT_it, &b_Muon_pTErrOVpT_it);
   fChain->SetBranchAddress("Muon_pt_bt", &Muon_pt_bt, &b_Muon_pt_bt);
   fChain->SetBranchAddress("Muon_ptErr_bt", &Muon_ptErr_bt, &b_Muon_ptErr_bt);
   fChain->SetBranchAddress("Muon_pTErrOVpT_bt", &Muon_pTErrOVpT_bt, &b_Muon_pTErrOVpT_bt);
   fChain->SetBranchAddress("Muon_pt_tunePbt", &Muon_pt_tunePbt, &b_Muon_pt_tunePbt);
   fChain->SetBranchAddress("Muon_charge", &Muon_charge, &b_Muon_charge);
   fChain->SetBranchAddress("Muon_soft", &Muon_soft, &b_Muon_soft);
   fChain->SetBranchAddress("Muon_loose", &Muon_loose, &b_Muon_loose);
   fChain->SetBranchAddress("Muon_medium", &Muon_medium, &b_Muon_medium);
   fChain->SetBranchAddress("Muon_tight", &Muon_tight, &b_Muon_tight);
   fChain->SetBranchAddress("Muon_isHighPt", &Muon_isHighPt, &b_Muon_isHighPt);
   fChain->SetBranchAddress("Muon_isTrkHighPt", &Muon_isTrkHighPt, &b_Muon_isTrkHighPt);
   fChain->SetBranchAddress("Muon_TrkIsoLoose", &Muon_TrkIsoLoose, &b_Muon_TrkIsoLoose);
   fChain->SetBranchAddress("Muon_TrkIsoTight", &Muon_TrkIsoTight, &b_Muon_TrkIsoTight);
   fChain->SetBranchAddress("Muon_TrigLoose", &Muon_TrigLoose, &b_Muon_TrigLoose);
   fChain->SetBranchAddress("Muon_POGisGood", &Muon_POGisGood, &b_Muon_POGisGood);
   fChain->SetBranchAddress("Muon_pdgId", &Muon_pdgId, &b_Muon_pdgId);
   fChain->SetBranchAddress("Muon_simPdgId", &Muon_simPdgId, &b_Muon_simPdgId);
   fChain->SetBranchAddress("Muon_simMotherPdgId", &Muon_simMotherPdgId, &b_Muon_simMotherPdgId);
   fChain->SetBranchAddress("Muon_simFlavour", &Muon_simFlavour, &b_Muon_simFlavour);
   fChain->SetBranchAddress("Muon_pf", &Muon_pf, &b_Muon_pf);
   fChain->SetBranchAddress("Muon_isGlobal", &Muon_isGlobal, &b_Muon_isGlobal);
   fChain->SetBranchAddress("Muon_isTrackerMuon", &Muon_isTrackerMuon, &b_Muon_isTrackerMuon);
   fChain->SetBranchAddress("Muon_tunePBestTrackType", &Muon_tunePBestTrackType, &b_Muon_tunePBestTrackType);
   fChain->SetBranchAddress("Muon_isoR04Charged", &Muon_isoR04Charged, &b_Muon_isoR04Charged);
   fChain->SetBranchAddress("Muon_isoR04NeutralHadron", &Muon_isoR04NeutralHadron, &b_Muon_isoR04NeutralHadron);
   fChain->SetBranchAddress("Muon_isoR04Photon", &Muon_isoR04Photon, &b_Muon_isoR04Photon);
   fChain->SetBranchAddress("Muon_isoR04PU", &Muon_isoR04PU, &b_Muon_isoR04PU);
   fChain->SetBranchAddress("Muon_relIsoDeltaBetaR04", &Muon_relIsoDeltaBetaR04, &b_Muon_relIsoDeltaBetaR04);
   fChain->SetBranchAddress("Muon_isoR04CharParPt", &Muon_isoR04CharParPt, &b_Muon_isoR04CharParPt);
   fChain->SetBranchAddress("Muon_isoR03Charged", &Muon_isoR03Charged, &b_Muon_isoR03Charged);
   fChain->SetBranchAddress("Muon_isoR03NeutralHadron", &Muon_isoR03NeutralHadron, &b_Muon_isoR03NeutralHadron);
   fChain->SetBranchAddress("Muon_isoR03Photon", &Muon_isoR03Photon, &b_Muon_isoR03Photon);
   fChain->SetBranchAddress("Muon_isoR03PU", &Muon_isoR03PU, &b_Muon_isoR03PU);
   fChain->SetBranchAddress("Muon_relIsoDeltaBetaR03", &Muon_relIsoDeltaBetaR03, &b_Muon_relIsoDeltaBetaR03);
   fChain->SetBranchAddress("Muon_isoR03CharParPt", &Muon_isoR03CharParPt, &b_Muon_isoR03CharParPt);
   fChain->SetBranchAddress("Muon_trackIso", &Muon_trackIso, &b_Muon_trackIso);
   fChain->SetBranchAddress("Muon_TrackerIso", &Muon_TrackerIso, &b_Muon_TrackerIso);
   fChain->SetBranchAddress("Muon_ecalIso", &Muon_ecalIso, &b_Muon_ecalIso);
   fChain->SetBranchAddress("Muon_hcalIso", &Muon_hcalIso, &b_Muon_hcalIso);
   fChain->SetBranchAddress("Muon_caloIso", &Muon_caloIso, &b_Muon_caloIso);
   fChain->SetBranchAddress("Muon_isoSum", &Muon_isoSum, &b_Muon_isoSum);
   fChain->SetBranchAddress("Muon_pfEcalEnergy", &Muon_pfEcalEnergy, &b_Muon_pfEcalEnergy);
   fChain->SetBranchAddress("Muon_chi2", &Muon_chi2, &b_Muon_chi2);
   fChain->SetBranchAddress("Muon_chi2LocalPosition", &Muon_chi2LocalPosition, &b_Muon_chi2LocalPosition);
   fChain->SetBranchAddress("Muon_matchedStat", &Muon_matchedStat, &b_Muon_matchedStat);
   fChain->SetBranchAddress("Muon_validHits", &Muon_validHits, &b_Muon_validHits);
   fChain->SetBranchAddress("Muon_validHitsInner", &Muon_validHitsInner, &b_Muon_validHitsInner);
   fChain->SetBranchAddress("Muon_TLayers", &Muon_TLayers, &b_Muon_TLayers);
   fChain->SetBranchAddress("Muon_ndof", &Muon_ndof, &b_Muon_ndof);
   fChain->SetBranchAddress("Muon_validFraction", &Muon_validFraction, &b_Muon_validFraction);
   fChain->SetBranchAddress("Muon_pixelLayersWithMeasurement", &Muon_pixelLayersWithMeasurement, &b_Muon_pixelLayersWithMeasurement);
   fChain->SetBranchAddress("Muon_qualityhighPurity", &Muon_qualityhighPurity, &b_Muon_qualityhighPurity);
   fChain->SetBranchAddress("Muon_trkKink", &Muon_trkKink, &b_Muon_trkKink);
   fChain->SetBranchAddress("Muon_segmentCompatibility", &Muon_segmentCompatibility, &b_Muon_segmentCompatibility);
   fChain->SetBranchAddress("Muon_dxy_pv", &Muon_dxy_pv, &b_Muon_dxy_pv);
   fChain->SetBranchAddress("Muon_dz_pv", &Muon_dz_pv, &b_Muon_dz_pv);
   fChain->SetBranchAddress("Muon_dz_bs", &Muon_dz_bs, &b_Muon_dz_bs);
   fChain->SetBranchAddress("Muon_dxy_bs", &Muon_dxy_bs, &b_Muon_dxy_bs);
   fChain->SetBranchAddress("Muon_dzError", &Muon_dzError, &b_Muon_dzError);
   fChain->SetBranchAddress("Muon_dxyError", &Muon_dxyError, &b_Muon_dxyError);
   fChain->SetBranchAddress("Muon_vtx", &Muon_vtx, &b_Muon_vtx);
   fChain->SetBranchAddress("Muon_vty", &Muon_vty, &b_Muon_vty);
   fChain->SetBranchAddress("Muon_vtz", &Muon_vtz, &b_Muon_vtz);
   fChain->SetBranchAddress("Muon_track_PCAx_bs", &Muon_track_PCAx_bs, &b_Muon_track_PCAx_bs);
   fChain->SetBranchAddress("Muon_track_PCAy_bs", &Muon_track_PCAy_bs, &b_Muon_track_PCAy_bs);
   fChain->SetBranchAddress("Muon_track_PCAz_bs", &Muon_track_PCAz_bs, &b_Muon_track_PCAz_bs);
   fChain->SetBranchAddress("Muon_track_PCAx_pv", &Muon_track_PCAx_pv, &b_Muon_track_PCAx_pv);
   fChain->SetBranchAddress("Muon_track_PCAy_pv", &Muon_track_PCAy_pv, &b_Muon_track_PCAy_pv);
   fChain->SetBranchAddress("Muon_track_PCAz_pv", &Muon_track_PCAz_pv, &b_Muon_track_PCAz_pv);
   fChain->SetBranchAddress("Muon_trackFitErrorMatrix_00", &Muon_trackFitErrorMatrix_00, &b_Muon_trackFitErrorMatrix_00);
   fChain->SetBranchAddress("Muon_trackFitErrorMatrix_01", &Muon_trackFitErrorMatrix_01, &b_Muon_trackFitErrorMatrix_01);
   fChain->SetBranchAddress("Muon_trackFitErrorMatrix_02", &Muon_trackFitErrorMatrix_02, &b_Muon_trackFitErrorMatrix_02);
   fChain->SetBranchAddress("Muon_trackFitErrorMatrix_11", &Muon_trackFitErrorMatrix_11, &b_Muon_trackFitErrorMatrix_11);
   fChain->SetBranchAddress("Muon_trackFitErrorMatrix_12", &Muon_trackFitErrorMatrix_12, &b_Muon_trackFitErrorMatrix_12);
   fChain->SetBranchAddress("Muon_trackFitErrorMatrix_22", &Muon_trackFitErrorMatrix_22, &b_Muon_trackFitErrorMatrix_22);
   fChain->SetBranchAddress("Muon_dz_bt", &Muon_dz_bt, &b_Muon_dz_bt);
   fChain->SetBranchAddress("Muon_dxy_bt", &Muon_dxy_bt, &b_Muon_dxy_bt);
   fChain->SetBranchAddress("Muon_miniIsoRel", &Muon_miniIsoRel, &b_Muon_miniIsoRel);
   fChain->SetBranchAddress("Muon_miniIsoCh", &Muon_miniIsoCh, &b_Muon_miniIsoCh);
   fChain->SetBranchAddress("Muon_miniIsoNeu", &Muon_miniIsoNeu, &b_Muon_miniIsoNeu);
   fChain->SetBranchAddress("Muon_miniIsoPUsub", &Muon_miniIsoPUsub, &b_Muon_miniIsoPUsub);
   fChain->SetBranchAddress("Muon_jetdr", &Muon_jetdr, &b_Muon_jetdr);
   fChain->SetBranchAddress("Muon_jetl1corr", &Muon_jetl1corr, &b_Muon_jetl1corr);
   fChain->SetBranchAddress("Muon_jetislep", &Muon_jetislep, &b_Muon_jetislep);
   fChain->SetBranchAddress("Muon_jetidx", &Muon_jetidx, &b_Muon_jetidx);
   fChain->SetBranchAddress("Muon_jetpt", &Muon_jetpt, &b_Muon_jetpt);
   fChain->SetBranchAddress("Muon_jetptratio", &Muon_jetptratio, &b_Muon_jetptratio);
   fChain->SetBranchAddress("Muon_jetptratioV2", &Muon_jetptratioV2, &b_Muon_jetptratioV2);
   fChain->SetBranchAddress("Muon_jetcsv", &Muon_jetcsv, &b_Muon_jetcsv);
   fChain->SetBranchAddress("Muon_jetdeepcsv", &Muon_jetdeepcsv, &b_Muon_jetdeepcsv);
   fChain->SetBranchAddress("Muon_jetdeepflavour", &Muon_jetdeepflavour, &b_Muon_jetdeepflavour);
   fChain->SetBranchAddress("Muon_ptrel", &Muon_ptrel, &b_Muon_ptrel);
   fChain->SetBranchAddress("Muon_IP3Dsig_it", &Muon_IP3Dsig_it, &b_Muon_IP3Dsig_it);
   fChain->SetBranchAddress("Muon_pvass", &Muon_pvass, &b_Muon_pvass);
   fChain->SetBranchAddress("Muon_etarel", &Muon_etarel, &b_Muon_etarel);
   fChain->SetBranchAddress("Muon_ptOVen", &Muon_ptOVen, &b_Muon_ptOVen);
   fChain->SetBranchAddress("Muon_mujet_pfJetProbabilityBJetTag", &Muon_mujet_pfJetProbabilityBJetTag, &b_Muon_mujet_pfJetProbabilityBJetTag);
   fChain->SetBranchAddress("Muon_mujet_pfCombinedMVABJetTags", &Muon_mujet_pfCombinedMVABJetTags, &b_Muon_mujet_pfCombinedMVABJetTags);
   fChain->SetBranchAddress("Muon_mujet_qgl", &Muon_mujet_qgl, &b_Muon_mujet_qgl);
   fChain->SetBranchAddress("Muon_mumass", &Muon_mumass, &b_Muon_mumass);
   fChain->SetBranchAddress("Muon_mujet_mass", &Muon_mujet_mass, &b_Muon_mujet_mass);
   fChain->SetBranchAddress("Muon_mujet_Wmass", &Muon_mujet_Wmass, &b_Muon_mujet_Wmass);
   fChain->SetBranchAddress("Muon_mujet_Topmass", &Muon_mujet_Topmass, &b_Muon_mujet_Topmass);
   fChain->SetBranchAddress("Muon_mujet_WTopmass", &Muon_mujet_WTopmass, &b_Muon_mujet_WTopmass);
   fChain->SetBranchAddress("Muon_IP3D_val", &Muon_IP3D_val, &b_Muon_IP3D_val);
   fChain->SetBranchAddress("Muon_IP3D_err", &Muon_IP3D_err, &b_Muon_IP3D_err);
   fChain->SetBranchAddress("Muon_IP3D_sig", &Muon_IP3D_sig, &b_Muon_IP3D_sig);
   fChain->SetBranchAddress("Muon_IP2D_val", &Muon_IP2D_val, &b_Muon_IP2D_val);
   fChain->SetBranchAddress("Muon_IP2D_err", &Muon_IP2D_err, &b_Muon_IP2D_err);
   fChain->SetBranchAddress("Muon_IP2D_sig", &Muon_IP2D_sig, &b_Muon_IP2D_sig);
   fChain->SetBranchAddress("Muon_sIP3D_val", &Muon_sIP3D_val, &b_Muon_sIP3D_val);
   fChain->SetBranchAddress("Muon_sIP3D_err", &Muon_sIP3D_err, &b_Muon_sIP3D_err);
   fChain->SetBranchAddress("Muon_sIP3D_sig", &Muon_sIP3D_sig, &b_Muon_sIP3D_sig);
   fChain->SetBranchAddress("Muon_sIP2D_val", &Muon_sIP2D_val, &b_Muon_sIP2D_val);
   fChain->SetBranchAddress("Muon_sIP2D_err", &Muon_sIP2D_err, &b_Muon_sIP2D_err);
   fChain->SetBranchAddress("Muon_sIP2D_sig", &Muon_sIP2D_sig, &b_Muon_sIP2D_sig);
   fChain->SetBranchAddress("Muon_IP1D_val", &Muon_IP1D_val, &b_Muon_IP1D_val);
   fChain->SetBranchAddress("Muon_IP1D_err", &Muon_IP1D_err, &b_Muon_IP1D_err);
   fChain->SetBranchAddress("Muon_IP1D_sig", &Muon_IP1D_sig, &b_Muon_IP1D_sig);
   fChain->SetBranchAddress("Muon_sIP1D_val", &Muon_sIP1D_val, &b_Muon_sIP1D_val);
   fChain->SetBranchAddress("Muon_sIP1D_err", &Muon_sIP1D_err, &b_Muon_sIP1D_err);
   fChain->SetBranchAddress("Muon_sIP1D_sig", &Muon_sIP1D_sig, &b_Muon_sIP1D_sig);
   fChain->SetBranchAddress("Muon_lepjetMaxIP3D_val", &Muon_lepjetMaxIP3D_val, &b_Muon_lepjetMaxIP3D_val);
   fChain->SetBranchAddress("Muon_lepjetMaxIP3D_sig", &Muon_lepjetMaxIP3D_sig, &b_Muon_lepjetMaxIP3D_sig);
   fChain->SetBranchAddress("Muon_lepjetMaxsIP3D_val", &Muon_lepjetMaxsIP3D_val, &b_Muon_lepjetMaxsIP3D_val);
   fChain->SetBranchAddress("Muon_lepjetMaxsIP3D_sig", &Muon_lepjetMaxsIP3D_sig, &b_Muon_lepjetMaxsIP3D_sig);
   fChain->SetBranchAddress("Muon_lepjetMaxIP2D_val", &Muon_lepjetMaxIP2D_val, &b_Muon_lepjetMaxIP2D_val);
   fChain->SetBranchAddress("Muon_lepjetMaxIP2D_sig", &Muon_lepjetMaxIP2D_sig, &b_Muon_lepjetMaxIP2D_sig);
   fChain->SetBranchAddress("Muon_lepjetMaxsIP2D_val", &Muon_lepjetMaxsIP2D_val, &b_Muon_lepjetMaxsIP2D_val);
   fChain->SetBranchAddress("Muon_lepjetMaxsIP2D_sig", &Muon_lepjetMaxsIP2D_sig, &b_Muon_lepjetMaxsIP2D_sig);
   fChain->SetBranchAddress("Muon_lepjetMaxIP1D_val", &Muon_lepjetMaxIP1D_val, &b_Muon_lepjetMaxIP1D_val);
   fChain->SetBranchAddress("Muon_lepjetMaxIP1D_sig", &Muon_lepjetMaxIP1D_sig, &b_Muon_lepjetMaxIP1D_sig);
   fChain->SetBranchAddress("Muon_lepjetMaxsIP1D_val", &Muon_lepjetMaxsIP1D_val, &b_Muon_lepjetMaxsIP1D_val);
   fChain->SetBranchAddress("Muon_lepjetMaxsIP1D_sig", &Muon_lepjetMaxsIP1D_sig, &b_Muon_lepjetMaxsIP1D_sig);
   fChain->SetBranchAddress("Muon_lepjetAvIP3D_val", &Muon_lepjetAvIP3D_val, &b_Muon_lepjetAvIP3D_val);
   fChain->SetBranchAddress("Muon_lepjetAvIP3D_sig", &Muon_lepjetAvIP3D_sig, &b_Muon_lepjetAvIP3D_sig);
   fChain->SetBranchAddress("Muon_lepjetAvsIP3D_val", &Muon_lepjetAvsIP3D_val, &b_Muon_lepjetAvsIP3D_val);
   fChain->SetBranchAddress("Muon_lepjetAvsIP3D_sig", &Muon_lepjetAvsIP3D_sig, &b_Muon_lepjetAvsIP3D_sig);
   fChain->SetBranchAddress("Muon_lepjetAvIP2D_val", &Muon_lepjetAvIP2D_val, &b_Muon_lepjetAvIP2D_val);
   fChain->SetBranchAddress("Muon_lepjetAvIP2D_sig", &Muon_lepjetAvIP2D_sig, &b_Muon_lepjetAvIP2D_sig);
   fChain->SetBranchAddress("Muon_lepjetAvsIP2D_val", &Muon_lepjetAvsIP2D_val, &b_Muon_lepjetAvsIP2D_val);
   fChain->SetBranchAddress("Muon_lepjetAvsIP2D_sig", &Muon_lepjetAvsIP2D_sig, &b_Muon_lepjetAvsIP2D_sig);
   fChain->SetBranchAddress("Muon_lepjetAvIP1D_val", &Muon_lepjetAvIP1D_val, &b_Muon_lepjetAvIP1D_val);
   fChain->SetBranchAddress("Muon_lepjetAvIP1D_sig", &Muon_lepjetAvIP1D_sig, &b_Muon_lepjetAvIP1D_sig);
   fChain->SetBranchAddress("Muon_lepjetAvsIP1D_val", &Muon_lepjetAvsIP1D_val, &b_Muon_lepjetAvsIP1D_val);
   fChain->SetBranchAddress("Muon_lepjetAvsIP1D_sig", &Muon_lepjetAvsIP1D_sig, &b_Muon_lepjetAvsIP1D_sig);
   fChain->SetBranchAddress("Muon_lepjetchtrks", &Muon_lepjetchtrks, &b_Muon_lepjetchtrks);
   fChain->SetBranchAddress("Muon_lepjetpvchtrks", &Muon_lepjetpvchtrks, &b_Muon_lepjetpvchtrks);
   fChain->SetBranchAddress("Muon_lepjetnonpvchtrks", &Muon_lepjetnonpvchtrks, &b_Muon_lepjetnonpvchtrks);
   fChain->SetBranchAddress("Muon_lepjetndaus", &Muon_lepjetndaus, &b_Muon_lepjetndaus);
   fChain->SetBranchAddress("Muon_lepjetpvchi2", &Muon_lepjetpvchi2, &b_Muon_lepjetpvchi2);
   fChain->SetBranchAddress("Muon_lepjetnumno2trk", &Muon_lepjetnumno2trk, &b_Muon_lepjetnumno2trk);
   fChain->SetBranchAddress("Muon_gen_pt", &Muon_gen_pt, &b_Muon_gen_pt);
   fChain->SetBranchAddress("Muon_gen_eta", &Muon_gen_eta, &b_Muon_gen_eta);
   fChain->SetBranchAddress("Muon_gen_phi", &Muon_gen_phi, &b_Muon_gen_phi);
   fChain->SetBranchAddress("Muon_gen_en", &Muon_gen_en, &b_Muon_gen_en);
   fChain->SetBranchAddress("Muon_gen_pdgId", &Muon_gen_pdgId, &b_Muon_gen_pdgId);
   fChain->SetBranchAddress("Muon_gen_isPromptFinalState", &Muon_gen_isPromptFinalState, &b_Muon_gen_isPromptFinalState);
   fChain->SetBranchAddress("Muon_gen_isDirectPromptTauDecayProductFinalState", &Muon_gen_isDirectPromptTauDecayProductFinalState, &b_Muon_gen_isDirectPromptTauDecayProductFinalState);
   fChain->SetBranchAddress("Muon_isMatchedToTrigger", &Muon_isMatchedToTrigger, &b_Muon_isMatchedToTrigger);
   fChain->SetBranchAddress("patElectron_pt", &patElectron_pt, &b_patElectron_pt);
   fChain->SetBranchAddress("patElectron_eta", &patElectron_eta, &b_patElectron_eta);
   fChain->SetBranchAddress("patElectron_phi", &patElectron_phi, &b_patElectron_phi);
   fChain->SetBranchAddress("patElectron_energy", &patElectron_energy, &b_patElectron_energy);
   fChain->SetBranchAddress("patElectron_px", &patElectron_px, &b_patElectron_px);
   fChain->SetBranchAddress("patElectron_py", &patElectron_py, &b_patElectron_py);
   fChain->SetBranchAddress("patElectron_pz", &patElectron_pz, &b_patElectron_pz);
   fChain->SetBranchAddress("patElectron_p", &patElectron_p, &b_patElectron_p);
   fChain->SetBranchAddress("patElectron_Et", &patElectron_Et, &b_patElectron_Et);
   fChain->SetBranchAddress("patElectron_SCeta", &patElectron_SCeta, &b_patElectron_SCeta);
   fChain->SetBranchAddress("patElectron_inCrack", &patElectron_inCrack, &b_patElectron_inCrack);
   fChain->SetBranchAddress("patElectron_energySF", &patElectron_energySF, &b_patElectron_energySF);
   fChain->SetBranchAddress("patElectron_ecalEnergyErrPostCorr", &patElectron_ecalEnergyErrPostCorr, &b_patElectron_ecalEnergyErrPostCorr);
   fChain->SetBranchAddress("patElectron_ecalEnergyErrPreCorr", &patElectron_ecalEnergyErrPreCorr, &b_patElectron_ecalEnergyErrPreCorr);
   fChain->SetBranchAddress("patElectron_ecalEnergyPostCorr", &patElectron_ecalEnergyPostCorr, &b_patElectron_ecalEnergyPostCorr);
   fChain->SetBranchAddress("patElectron_ecalEnergyPreCorr", &patElectron_ecalEnergyPreCorr, &b_patElectron_ecalEnergyPreCorr);
   fChain->SetBranchAddress("patElectron_ecalTrkEnergyErrPostCorr", &patElectron_ecalTrkEnergyErrPostCorr, &b_patElectron_ecalTrkEnergyErrPostCorr);
   fChain->SetBranchAddress("patElectron_ecalTrkEnergyErrPreCorr", &patElectron_ecalTrkEnergyErrPreCorr, &b_patElectron_ecalTrkEnergyErrPreCorr);
   fChain->SetBranchAddress("patElectron_ecalTrkEnergyPostCorr", &patElectron_ecalTrkEnergyPostCorr, &b_patElectron_ecalTrkEnergyPostCorr);
   fChain->SetBranchAddress("patElectron_ecalTrkEnergyPreCorr", &patElectron_ecalTrkEnergyPreCorr, &b_patElectron_ecalTrkEnergyPreCorr);
   fChain->SetBranchAddress("patElectron_energyScaleDown", &patElectron_energyScaleDown, &b_patElectron_energyScaleDown);
   fChain->SetBranchAddress("patElectron_energyScaleGainDown", &patElectron_energyScaleGainDown, &b_patElectron_energyScaleGainDown);
   fChain->SetBranchAddress("patElectron_energyScaleGainUp", &patElectron_energyScaleGainUp, &b_patElectron_energyScaleGainUp);
   fChain->SetBranchAddress("patElectron_energyScaleStatDown", &patElectron_energyScaleStatDown, &b_patElectron_energyScaleStatDown);
   fChain->SetBranchAddress("patElectron_energyScaleStatUp", &patElectron_energyScaleStatUp, &b_patElectron_energyScaleStatUp);
   fChain->SetBranchAddress("patElectron_energyScaleSystDown", &patElectron_energyScaleSystDown, &b_patElectron_energyScaleSystDown);
   fChain->SetBranchAddress("patElectron_energyScaleSystUp", &patElectron_energyScaleSystUp, &b_patElectron_energyScaleSystUp);
   fChain->SetBranchAddress("patElectron_energyScaleUp", &patElectron_energyScaleUp, &b_patElectron_energyScaleUp);
   fChain->SetBranchAddress("patElectron_energyScaleValue", &patElectron_energyScaleValue, &b_patElectron_energyScaleValue);
   fChain->SetBranchAddress("patElectron_energySigmaDown", &patElectron_energySigmaDown, &b_patElectron_energySigmaDown);
   fChain->SetBranchAddress("patElectron_energySigmaPhiDown", &patElectron_energySigmaPhiDown, &b_patElectron_energySigmaPhiDown);
   fChain->SetBranchAddress("patElectron_energySigmaPhiUp", &patElectron_energySigmaPhiUp, &b_patElectron_energySigmaPhiUp);
   fChain->SetBranchAddress("patElectron_energySigmaRhoDown", &patElectron_energySigmaRhoDown, &b_patElectron_energySigmaRhoDown);
   fChain->SetBranchAddress("patElectron_energySigmaRhoUp", &patElectron_energySigmaRhoUp, &b_patElectron_energySigmaRhoUp);
   fChain->SetBranchAddress("patElectron_energySigmaUp", &patElectron_energySigmaUp, &b_patElectron_energySigmaUp);
   fChain->SetBranchAddress("patElectron_energySigmaValue", &patElectron_energySigmaValue, &b_patElectron_energySigmaValue);
   fChain->SetBranchAddress("patElectron_energySmearNrSigma", &patElectron_energySmearNrSigma, &b_patElectron_energySmearNrSigma);
   fChain->SetBranchAddress("patElectron_charge", &patElectron_charge, &b_patElectron_charge);
   fChain->SetBranchAddress("patElectron_isGsfCtfScPixChargeConsistent", &patElectron_isGsfCtfScPixChargeConsistent, &b_patElectron_isGsfCtfScPixChargeConsistent);
   fChain->SetBranchAddress("patElectron_isGsfScPixChargeConsistent", &patElectron_isGsfScPixChargeConsistent, &b_patElectron_isGsfScPixChargeConsistent);
   fChain->SetBranchAddress("patElectron_isPassVeto", &patElectron_isPassVeto, &b_patElectron_isPassVeto);
   fChain->SetBranchAddress("patElectron_isPassLoose", &patElectron_isPassLoose, &b_patElectron_isPassLoose);
   fChain->SetBranchAddress("patElectron_isPassMedium", &patElectron_isPassMedium, &b_patElectron_isPassMedium);
   fChain->SetBranchAddress("patElectron_isPassTight", &patElectron_isPassTight, &b_patElectron_isPassTight);
   fChain->SetBranchAddress("patElectron_isPassMvaIsowp80", &patElectron_isPassMvaIsowp80, &b_patElectron_isPassMvaIsowp80);
   fChain->SetBranchAddress("patElectron_isPassMvanonIsowp80", &patElectron_isPassMvanonIsowp80, &b_patElectron_isPassMvanonIsowp80);
   fChain->SetBranchAddress("patElectron_isPassMvaIsowp90", &patElectron_isPassMvaIsowp90, &b_patElectron_isPassMvaIsowp90);
   fChain->SetBranchAddress("patElectron_isPassMvanonIsowp90", &patElectron_isPassMvanonIsowp90, &b_patElectron_isPassMvanonIsowp90);
   fChain->SetBranchAddress("patElectron_isPassMvaIsowpLoose", &patElectron_isPassMvaIsowpLoose, &b_patElectron_isPassMvaIsowpLoose);
   fChain->SetBranchAddress("patElectron_isPassMvanonIsowpLoose", &patElectron_isPassMvanonIsowpLoose, &b_patElectron_isPassMvanonIsowpLoose);
   fChain->SetBranchAddress("patElectron_mvaValue_nonIso", &patElectron_mvaValue_nonIso, &b_patElectron_mvaValue_nonIso);
   fChain->SetBranchAddress("patElectron_mvaCategory_nonIso", &patElectron_mvaCategory_nonIso, &b_patElectron_mvaCategory_nonIso);
   fChain->SetBranchAddress("patElectron_mvaValue_Iso", &patElectron_mvaValue_Iso, &b_patElectron_mvaValue_Iso);
   fChain->SetBranchAddress("patElectron_mvaCategory_Iso", &patElectron_mvaCategory_Iso, &b_patElectron_mvaCategory_Iso);
   fChain->SetBranchAddress("patElectron_isPassOldVeto", &patElectron_isPassOldVeto, &b_patElectron_isPassOldVeto);
   fChain->SetBranchAddress("patElectron_isPassOldLoose", &patElectron_isPassOldLoose, &b_patElectron_isPassOldLoose);
   fChain->SetBranchAddress("patElectron_isPassOldMedium", &patElectron_isPassOldMedium, &b_patElectron_isPassOldMedium);
   fChain->SetBranchAddress("patElectron_isPassOldTight", &patElectron_isPassOldTight, &b_patElectron_isPassOldTight);
   fChain->SetBranchAddress("patElectron_isPassOldMvaIsowp80", &patElectron_isPassOldMvaIsowp80, &b_patElectron_isPassOldMvaIsowp80);
   fChain->SetBranchAddress("patElectron_isPassOldMvanonIsowp80", &patElectron_isPassOldMvanonIsowp80, &b_patElectron_isPassOldMvanonIsowp80);
   fChain->SetBranchAddress("patElectron_isPassOldMvaIsowp90", &patElectron_isPassOldMvaIsowp90, &b_patElectron_isPassOldMvaIsowp90);
   fChain->SetBranchAddress("patElectron_isPassOldMvanonIsowp90", &patElectron_isPassOldMvanonIsowp90, &b_patElectron_isPassOldMvanonIsowp90);
   fChain->SetBranchAddress("patElectron_isPassOldMvaIsowpLoose", &patElectron_isPassOldMvaIsowpLoose, &b_patElectron_isPassOldMvaIsowpLoose);
   fChain->SetBranchAddress("patElectron_isPassOldMvanonIsowpLoose", &patElectron_isPassOldMvanonIsowpLoose, &b_patElectron_isPassOldMvanonIsowpLoose);
   fChain->SetBranchAddress("patElectron_OldmvaValue_nonIso", &patElectron_OldmvaValue_nonIso, &b_patElectron_OldmvaValue_nonIso);
   fChain->SetBranchAddress("patElectron_OldmvaCategory_nonIso", &patElectron_OldmvaCategory_nonIso, &b_patElectron_OldmvaCategory_nonIso);
   fChain->SetBranchAddress("patElectron_OldmvaValue_Iso", &patElectron_OldmvaValue_Iso, &b_patElectron_OldmvaValue_Iso);
   fChain->SetBranchAddress("patElectron_OldmvaCategory_Iso", &patElectron_OldmvaCategory_Iso, &b_patElectron_OldmvaCategory_Iso);
   fChain->SetBranchAddress("patElectron_isPassHEEPId", &patElectron_isPassHEEPId, &b_patElectron_isPassHEEPId);
   fChain->SetBranchAddress("patElectron_pdgId", &patElectron_pdgId, &b_patElectron_pdgId);
   fChain->SetBranchAddress("patElectron_isEcalDriven", &patElectron_isEcalDriven, &b_patElectron_isEcalDriven);
   fChain->SetBranchAddress("patElectron_isPassMvaHZZwpLoose", &patElectron_isPassMvaHZZwpLoose, &b_patElectron_isPassMvaHZZwpLoose);
   fChain->SetBranchAddress("patElectron_mvaValue_HZZ", &patElectron_mvaValue_HZZ, &b_patElectron_mvaValue_HZZ);
   fChain->SetBranchAddress("patElectron_mvaCategory_HZZ", &patElectron_mvaCategory_HZZ, &b_patElectron_mvaCategory_HZZ);
   fChain->SetBranchAddress("patElectron_isoChargedHadrons", &patElectron_isoChargedHadrons, &b_patElectron_isoChargedHadrons);
   fChain->SetBranchAddress("patElectron_isoNeutralHadrons", &patElectron_isoNeutralHadrons, &b_patElectron_isoNeutralHadrons);
   fChain->SetBranchAddress("patElectron_isoPhotons", &patElectron_isoPhotons, &b_patElectron_isoPhotons);
   fChain->SetBranchAddress("patElectron_isoPU", &patElectron_isoPU, &b_patElectron_isoPU);
   fChain->SetBranchAddress("patElectron_relIsoDeltaBeta", &patElectron_relIsoDeltaBeta, &b_patElectron_relIsoDeltaBeta);
   fChain->SetBranchAddress("patElectron_relIsoRhoEA", &patElectron_relIsoRhoEA, &b_patElectron_relIsoRhoEA);
   fChain->SetBranchAddress("patElectron_dr03EcalRecHitSumEt", &patElectron_dr03EcalRecHitSumEt, &b_patElectron_dr03EcalRecHitSumEt);
   fChain->SetBranchAddress("patElectron_dr03HcalDepth1TowerSumEt", &patElectron_dr03HcalDepth1TowerSumEt, &b_patElectron_dr03HcalDepth1TowerSumEt);
   fChain->SetBranchAddress("patElectron_isolPtTracks", &patElectron_isolPtTracks, &b_patElectron_isolPtTracks);
   fChain->SetBranchAddress("patElectron_ecalPFClusterIso", &patElectron_ecalPFClusterIso, &b_patElectron_ecalPFClusterIso);
   fChain->SetBranchAddress("patElectron_hcalPFClusterIso", &patElectron_hcalPFClusterIso, &b_patElectron_hcalPFClusterIso);
   fChain->SetBranchAddress("patElectron_dEtaIn", &patElectron_dEtaIn, &b_patElectron_dEtaIn);
   fChain->SetBranchAddress("patElectron_dPhiIn", &patElectron_dPhiIn, &b_patElectron_dPhiIn);
   fChain->SetBranchAddress("patElectron_full5x5_sigmaIetaIeta", &patElectron_full5x5_sigmaIetaIeta, &b_patElectron_full5x5_sigmaIetaIeta);
   fChain->SetBranchAddress("patElectron_full5x5_e2x5Max", &patElectron_full5x5_e2x5Max, &b_patElectron_full5x5_e2x5Max);
   fChain->SetBranchAddress("patElectron_full5x5_e5x5", &patElectron_full5x5_e5x5, &b_patElectron_full5x5_e5x5);
   fChain->SetBranchAddress("patElectron_full5x5_e1x5", &patElectron_full5x5_e1x5, &b_patElectron_full5x5_e1x5);
   fChain->SetBranchAddress("patElectron_hOverE", &patElectron_hOverE, &b_patElectron_hOverE);
   fChain->SetBranchAddress("patElectron_ooEmooP", &patElectron_ooEmooP, &b_patElectron_ooEmooP);
   fChain->SetBranchAddress("patElectron_passConversionVeto", &patElectron_passConversionVeto, &b_patElectron_passConversionVeto);
   fChain->SetBranchAddress("patElectron_expectedMissingInnerHits", &patElectron_expectedMissingInnerHits, &b_patElectron_expectedMissingInnerHits);
   fChain->SetBranchAddress("patElectron_gsfTrack_ndof", &patElectron_gsfTrack_ndof, &b_patElectron_gsfTrack_ndof);
   fChain->SetBranchAddress("patElectron_gsfTrack_normChi2", &patElectron_gsfTrack_normChi2, &b_patElectron_gsfTrack_normChi2);
   fChain->SetBranchAddress("patElectron_gsfTrack_dz_pv", &patElectron_gsfTrack_dz_pv, &b_patElectron_gsfTrack_dz_pv);
   fChain->SetBranchAddress("patElectron_gsfTrack_dxy_pv", &patElectron_gsfTrack_dxy_pv, &b_patElectron_gsfTrack_dxy_pv);
   fChain->SetBranchAddress("patElectron_d0", &patElectron_d0, &b_patElectron_d0);
   fChain->SetBranchAddress("patElectron_dzError", &patElectron_dzError, &b_patElectron_dzError);
   fChain->SetBranchAddress("patElectron_dxyError", &patElectron_dxyError, &b_patElectron_dxyError);
   fChain->SetBranchAddress("patElectron_gsfTrack_vtx", &patElectron_gsfTrack_vtx, &b_patElectron_gsfTrack_vtx);
   fChain->SetBranchAddress("patElectron_gsfTrack_vty", &patElectron_gsfTrack_vty, &b_patElectron_gsfTrack_vty);
   fChain->SetBranchAddress("patElectron_gsfTrack_vtz", &patElectron_gsfTrack_vtz, &b_patElectron_gsfTrack_vtz);
   fChain->SetBranchAddress("patElectron_gsfTrack_dz_bs", &patElectron_gsfTrack_dz_bs, &b_patElectron_gsfTrack_dz_bs);
   fChain->SetBranchAddress("patElectron_gsfTrack_dxy_bs", &patElectron_gsfTrack_dxy_bs, &b_patElectron_gsfTrack_dxy_bs);
   fChain->SetBranchAddress("patElectron_gsfTrack_PCAx_pv", &patElectron_gsfTrack_PCAx_pv, &b_patElectron_gsfTrack_PCAx_pv);
   fChain->SetBranchAddress("patElectron_gsfTrack_PCAy_pv", &patElectron_gsfTrack_PCAy_pv, &b_patElectron_gsfTrack_PCAy_pv);
   fChain->SetBranchAddress("patElectron_gsfTrack_PCAz_pv", &patElectron_gsfTrack_PCAz_pv, &b_patElectron_gsfTrack_PCAz_pv);
   fChain->SetBranchAddress("patElectron_gsfTrack_PCAx_bs", &patElectron_gsfTrack_PCAx_bs, &b_patElectron_gsfTrack_PCAx_bs);
   fChain->SetBranchAddress("patElectron_gsfTrack_PCAy_bs", &patElectron_gsfTrack_PCAy_bs, &b_patElectron_gsfTrack_PCAy_bs);
   fChain->SetBranchAddress("patElectron_gsfTrack_PCAz_bs", &patElectron_gsfTrack_PCAz_bs, &b_patElectron_gsfTrack_PCAz_bs);
   fChain->SetBranchAddress("patElectron_gsfTrackFitErrorMatrix_00", &patElectron_gsfTrackFitErrorMatrix_00, &b_patElectron_gsfTrackFitErrorMatrix_00);
   fChain->SetBranchAddress("patElectron_gsfTrackFitErrorMatrix_01", &patElectron_gsfTrackFitErrorMatrix_01, &b_patElectron_gsfTrackFitErrorMatrix_01);
   fChain->SetBranchAddress("patElectron_gsfTrackFitErrorMatrix_02", &patElectron_gsfTrackFitErrorMatrix_02, &b_patElectron_gsfTrackFitErrorMatrix_02);
   fChain->SetBranchAddress("patElectron_gsfTrackFitErrorMatrix_11", &patElectron_gsfTrackFitErrorMatrix_11, &b_patElectron_gsfTrackFitErrorMatrix_11);
   fChain->SetBranchAddress("patElectron_gsfTrackFitErrorMatrix_12", &patElectron_gsfTrackFitErrorMatrix_12, &b_patElectron_gsfTrackFitErrorMatrix_12);
   fChain->SetBranchAddress("patElectron_gsfTrackFitErrorMatrix_22", &patElectron_gsfTrackFitErrorMatrix_22, &b_patElectron_gsfTrackFitErrorMatrix_22);
   fChain->SetBranchAddress("patElectron_miniIsoRel", &patElectron_miniIsoRel, &b_patElectron_miniIsoRel);
   fChain->SetBranchAddress("patElectron_miniIsoCh", &patElectron_miniIsoCh, &b_patElectron_miniIsoCh);
   fChain->SetBranchAddress("patElectron_miniIsoNeu", &patElectron_miniIsoNeu, &b_patElectron_miniIsoNeu);
   fChain->SetBranchAddress("patElectron_miniIsoPUsub", &patElectron_miniIsoPUsub, &b_patElectron_miniIsoPUsub);
   fChain->SetBranchAddress("patElectron_jetdr", &patElectron_jetdr, &b_patElectron_jetdr);
   fChain->SetBranchAddress("patElectron_jetl1corr", &patElectron_jetl1corr, &b_patElectron_jetl1corr);
   fChain->SetBranchAddress("patElectron_jetislep", &patElectron_jetislep, &b_patElectron_jetislep);
   fChain->SetBranchAddress("patElectron_jetidx", &patElectron_jetidx, &b_patElectron_jetidx);
   fChain->SetBranchAddress("patElectron_jetpt", &patElectron_jetpt, &b_patElectron_jetpt);
   fChain->SetBranchAddress("patElectron_jetptratio", &patElectron_jetptratio, &b_patElectron_jetptratio);
   fChain->SetBranchAddress("patElectron_jetptratioV2", &patElectron_jetptratioV2, &b_patElectron_jetptratioV2);
   fChain->SetBranchAddress("patElectron_jetcsv", &patElectron_jetcsv, &b_patElectron_jetcsv);
   fChain->SetBranchAddress("patElectron_jetdeepcsv", &patElectron_jetdeepcsv, &b_patElectron_jetdeepcsv);
   fChain->SetBranchAddress("patElectron_jetdeepflavour", &patElectron_jetdeepflavour, &b_patElectron_jetdeepflavour);
   fChain->SetBranchAddress("patElectron_ptrel", &patElectron_ptrel, &b_patElectron_ptrel);
   fChain->SetBranchAddress("patElectron_IP3Dsig", &patElectron_IP3Dsig, &b_patElectron_IP3Dsig);
   fChain->SetBranchAddress("patElectron_eleMVASpring15NonTrig25ns", &patElectron_eleMVASpring15NonTrig25ns, &b_patElectron_eleMVASpring15NonTrig25ns);
   fChain->SetBranchAddress("patElectron_eleMVASpring15NonTrig25ns_VL", &patElectron_eleMVASpring15NonTrig25ns_VL, &b_patElectron_eleMVASpring15NonTrig25ns_VL);
   fChain->SetBranchAddress("patElectron_pvass", &patElectron_pvass, &b_patElectron_pvass);
   fChain->SetBranchAddress("patElectron_etarel", &patElectron_etarel, &b_patElectron_etarel);
   fChain->SetBranchAddress("patElectron_ptOVen", &patElectron_ptOVen, &b_patElectron_ptOVen);
   fChain->SetBranchAddress("patElectron_elejet_pfJetProbabilityBJetTag", &patElectron_elejet_pfJetProbabilityBJetTag, &b_patElectron_elejet_pfJetProbabilityBJetTag);
   fChain->SetBranchAddress("patElectron_elejet_pfCombinedMVABJetTags", &patElectron_elejet_pfCombinedMVABJetTags, &b_patElectron_elejet_pfCombinedMVABJetTags);
   fChain->SetBranchAddress("patElectron_elejet_qgl", &patElectron_elejet_qgl, &b_patElectron_elejet_qgl);
   fChain->SetBranchAddress("patElectron_elemass", &patElectron_elemass, &b_patElectron_elemass);
   fChain->SetBranchAddress("patElectron_elejet_mass", &patElectron_elejet_mass, &b_patElectron_elejet_mass);
   fChain->SetBranchAddress("patElectron_elejet_Wmass", &patElectron_elejet_Wmass, &b_patElectron_elejet_Wmass);
   fChain->SetBranchAddress("patElectron_elejet_Topmass", &patElectron_elejet_Topmass, &b_patElectron_elejet_Topmass);
   fChain->SetBranchAddress("patElectron_elejet_WTopmass", &patElectron_elejet_WTopmass, &b_patElectron_elejet_WTopmass);
   fChain->SetBranchAddress("patElectron_IP3D_val", &patElectron_IP3D_val, &b_patElectron_IP3D_val);
   fChain->SetBranchAddress("patElectron_IP3D_err", &patElectron_IP3D_err, &b_patElectron_IP3D_err);
   fChain->SetBranchAddress("patElectron_IP3D_sig", &patElectron_IP3D_sig, &b_patElectron_IP3D_sig);
   fChain->SetBranchAddress("patElectron_IP2D_val", &patElectron_IP2D_val, &b_patElectron_IP2D_val);
   fChain->SetBranchAddress("patElectron_IP2D_err", &patElectron_IP2D_err, &b_patElectron_IP2D_err);
   fChain->SetBranchAddress("patElectron_IP2D_sig", &patElectron_IP2D_sig, &b_patElectron_IP2D_sig);
   fChain->SetBranchAddress("patElectron_sIP3D_val", &patElectron_sIP3D_val, &b_patElectron_sIP3D_val);
   fChain->SetBranchAddress("patElectron_sIP3D_err", &patElectron_sIP3D_err, &b_patElectron_sIP3D_err);
   fChain->SetBranchAddress("patElectron_sIP3D_sig", &patElectron_sIP3D_sig, &b_patElectron_sIP3D_sig);
   fChain->SetBranchAddress("patElectron_sIP2D_val", &patElectron_sIP2D_val, &b_patElectron_sIP2D_val);
   fChain->SetBranchAddress("patElectron_sIP2D_err", &patElectron_sIP2D_err, &b_patElectron_sIP2D_err);
   fChain->SetBranchAddress("patElectron_sIP2D_sig", &patElectron_sIP2D_sig, &b_patElectron_sIP2D_sig);
   fChain->SetBranchAddress("patElectron_IP1D_val", &patElectron_IP1D_val, &b_patElectron_IP1D_val);
   fChain->SetBranchAddress("patElectron_IP1D_err", &patElectron_IP1D_err, &b_patElectron_IP1D_err);
   fChain->SetBranchAddress("patElectron_IP1D_sig", &patElectron_IP1D_sig, &b_patElectron_IP1D_sig);
   fChain->SetBranchAddress("patElectron_sIP1D_val", &patElectron_sIP1D_val, &b_patElectron_sIP1D_val);
   fChain->SetBranchAddress("patElectron_sIP1D_err", &patElectron_sIP1D_err, &b_patElectron_sIP1D_err);
   fChain->SetBranchAddress("patElectron_sIP1D_sig", &patElectron_sIP1D_sig, &b_patElectron_sIP1D_sig);
   fChain->SetBranchAddress("patElectron_lepjetMaxIP3D_val", &patElectron_lepjetMaxIP3D_val, &b_patElectron_lepjetMaxIP3D_val);
   fChain->SetBranchAddress("patElectron_lepjetMaxIP3D_sig", &patElectron_lepjetMaxIP3D_sig, &b_patElectron_lepjetMaxIP3D_sig);
   fChain->SetBranchAddress("patElectron_lepjetMaxsIP3D_val", &patElectron_lepjetMaxsIP3D_val, &b_patElectron_lepjetMaxsIP3D_val);
   fChain->SetBranchAddress("patElectron_lepjetMaxsIP3D_sig", &patElectron_lepjetMaxsIP3D_sig, &b_patElectron_lepjetMaxsIP3D_sig);
   fChain->SetBranchAddress("patElectron_lepjetMaxIP2D_val", &patElectron_lepjetMaxIP2D_val, &b_patElectron_lepjetMaxIP2D_val);
   fChain->SetBranchAddress("patElectron_lepjetMaxIP2D_sig", &patElectron_lepjetMaxIP2D_sig, &b_patElectron_lepjetMaxIP2D_sig);
   fChain->SetBranchAddress("patElectron_lepjetMaxsIP2D_val", &patElectron_lepjetMaxsIP2D_val, &b_patElectron_lepjetMaxsIP2D_val);
   fChain->SetBranchAddress("patElectron_lepjetMaxsIP2D_sig", &patElectron_lepjetMaxsIP2D_sig, &b_patElectron_lepjetMaxsIP2D_sig);
   fChain->SetBranchAddress("patElectron_lepjetMaxIP1D_val", &patElectron_lepjetMaxIP1D_val, &b_patElectron_lepjetMaxIP1D_val);
   fChain->SetBranchAddress("patElectron_lepjetMaxIP1D_sig", &patElectron_lepjetMaxIP1D_sig, &b_patElectron_lepjetMaxIP1D_sig);
   fChain->SetBranchAddress("patElectron_lepjetMaxsIP1D_val", &patElectron_lepjetMaxsIP1D_val, &b_patElectron_lepjetMaxsIP1D_val);
   fChain->SetBranchAddress("patElectron_lepjetMaxsIP1D_sig", &patElectron_lepjetMaxsIP1D_sig, &b_patElectron_lepjetMaxsIP1D_sig);
   fChain->SetBranchAddress("patElectron_lepjetAvIP3D_val", &patElectron_lepjetAvIP3D_val, &b_patElectron_lepjetAvIP3D_val);
   fChain->SetBranchAddress("patElectron_lepjetAvIP3D_sig", &patElectron_lepjetAvIP3D_sig, &b_patElectron_lepjetAvIP3D_sig);
   fChain->SetBranchAddress("patElectron_lepjetAvsIP3D_val", &patElectron_lepjetAvsIP3D_val, &b_patElectron_lepjetAvsIP3D_val);
   fChain->SetBranchAddress("patElectron_lepjetAvsIP3D_sig", &patElectron_lepjetAvsIP3D_sig, &b_patElectron_lepjetAvsIP3D_sig);
   fChain->SetBranchAddress("patElectron_lepjetAvIP2D_val", &patElectron_lepjetAvIP2D_val, &b_patElectron_lepjetAvIP2D_val);
   fChain->SetBranchAddress("patElectron_lepjetAvIP2D_sig", &patElectron_lepjetAvIP2D_sig, &b_patElectron_lepjetAvIP2D_sig);
   fChain->SetBranchAddress("patElectron_lepjetAvsIP2D_val", &patElectron_lepjetAvsIP2D_val, &b_patElectron_lepjetAvsIP2D_val);
   fChain->SetBranchAddress("patElectron_lepjetAvsIP2D_sig", &patElectron_lepjetAvsIP2D_sig, &b_patElectron_lepjetAvsIP2D_sig);
   fChain->SetBranchAddress("patElectron_lepjetAvIP1D_val", &patElectron_lepjetAvIP1D_val, &b_patElectron_lepjetAvIP1D_val);
   fChain->SetBranchAddress("patElectron_lepjetAvIP1D_sig", &patElectron_lepjetAvIP1D_sig, &b_patElectron_lepjetAvIP1D_sig);
   fChain->SetBranchAddress("patElectron_lepjetAvsIP1D_val", &patElectron_lepjetAvsIP1D_val, &b_patElectron_lepjetAvsIP1D_val);
   fChain->SetBranchAddress("patElectron_lepjetAvsIP1D_sig", &patElectron_lepjetAvsIP1D_sig, &b_patElectron_lepjetAvsIP1D_sig);
   fChain->SetBranchAddress("patElectron_lepjetchtrks", &patElectron_lepjetchtrks, &b_patElectron_lepjetchtrks);
   fChain->SetBranchAddress("patElectron_lepjetpvchtrks", &patElectron_lepjetpvchtrks, &b_patElectron_lepjetpvchtrks);
   fChain->SetBranchAddress("patElectron_lepjetnonpvchtrks", &patElectron_lepjetnonpvchtrks, &b_patElectron_lepjetnonpvchtrks);
   fChain->SetBranchAddress("patElectron_lepjetndaus", &patElectron_lepjetndaus, &b_patElectron_lepjetndaus);
   fChain->SetBranchAddress("patElectron_lepjetpvchi2", &patElectron_lepjetpvchi2, &b_patElectron_lepjetpvchi2);
   fChain->SetBranchAddress("patElectron_lepjetnumno2trk", &patElectron_lepjetnumno2trk, &b_patElectron_lepjetnumno2trk);
   fChain->SetBranchAddress("patElectron_gen_pt", &patElectron_gen_pt, &b_patElectron_gen_pt);
   fChain->SetBranchAddress("patElectron_gen_eta", &patElectron_gen_eta, &b_patElectron_gen_eta);
   fChain->SetBranchAddress("patElectron_gen_phi", &patElectron_gen_phi, &b_patElectron_gen_phi);
   fChain->SetBranchAddress("patElectron_gen_en", &patElectron_gen_en, &b_patElectron_gen_en);
   fChain->SetBranchAddress("patElectron_gen_pdgId", &patElectron_gen_pdgId, &b_patElectron_gen_pdgId);
   fChain->SetBranchAddress("patElectron_gen_isPromptFinalState", &patElectron_gen_isPromptFinalState, &b_patElectron_gen_isPromptFinalState);
   fChain->SetBranchAddress("patElectron_gen_isDirectPromptTauDecayProductFinalState", &patElectron_gen_isDirectPromptTauDecayProductFinalState, &b_patElectron_gen_isDirectPromptTauDecayProductFinalState);
   fChain->SetBranchAddress("patElectron_isMatchedToTrigger", &patElectron_isMatchedToTrigger, &b_patElectron_isMatchedToTrigger);
   fChain->SetBranchAddress("Tau_pt", &Tau_pt, &b_Tau_pt);
   fChain->SetBranchAddress("Tau_eta", &Tau_eta, &b_Tau_eta);
   fChain->SetBranchAddress("Tau_phi", &Tau_phi, &b_Tau_phi);
   fChain->SetBranchAddress("Tau_energy", &Tau_energy, &b_Tau_energy);
   fChain->SetBranchAddress("Tau_px", &Tau_px, &b_Tau_px);
   fChain->SetBranchAddress("Tau_py", &Tau_py, &b_Tau_py);
   fChain->SetBranchAddress("Tau_pz", &Tau_pz, &b_Tau_pz);
   fChain->SetBranchAddress("Tau_p", &Tau_p, &b_Tau_p);
   fChain->SetBranchAddress("Tau_leadChargedCandPt", &Tau_leadChargedCandPt, &b_Tau_leadChargedCandPt);
   fChain->SetBranchAddress("Tau_leadChargedCandEta", &Tau_leadChargedCandEta, &b_Tau_leadChargedCandEta);
   fChain->SetBranchAddress("Tau_leadChargedCandPhi", &Tau_leadChargedCandPhi, &b_Tau_leadChargedCandPhi);
   fChain->SetBranchAddress("Tau_leadChargedCandE", &Tau_leadChargedCandE, &b_Tau_leadChargedCandE);
   fChain->SetBranchAddress("Tau_leadChargedCandTrack_pt", &Tau_leadChargedCandTrack_pt, &b_Tau_leadChargedCandTrack_pt);
   fChain->SetBranchAddress("Tau_leadChargedCandTrack_ptError", &Tau_leadChargedCandTrack_ptError, &b_Tau_leadChargedCandTrack_ptError);
   fChain->SetBranchAddress("Tau_charge", &Tau_charge, &b_Tau_charge);
   fChain->SetBranchAddress("Tau_leadChargedCandCharge", &Tau_leadChargedCandCharge, &b_Tau_leadChargedCandCharge);
   fChain->SetBranchAddress("Tau_decayModeFinding", &Tau_decayModeFinding, &b_Tau_decayModeFinding);
   fChain->SetBranchAddress("Tau_decayModeFindingNewDMs", &Tau_decayModeFindingNewDMs, &b_Tau_decayModeFindingNewDMs);
   fChain->SetBranchAddress("Tau_againstMuonLoose3", &Tau_againstMuonLoose3, &b_Tau_againstMuonLoose3);
   fChain->SetBranchAddress("Tau_againstMuonTight3", &Tau_againstMuonTight3, &b_Tau_againstMuonTight3);
   fChain->SetBranchAddress("Tau_againstElectronVLooseMVA6", &Tau_againstElectronVLooseMVA6, &b_Tau_againstElectronVLooseMVA6);
   fChain->SetBranchAddress("Tau_againstElectronLooseMVA6", &Tau_againstElectronLooseMVA6, &b_Tau_againstElectronLooseMVA6);
   fChain->SetBranchAddress("Tau_againstElectronMediumMVA6", &Tau_againstElectronMediumMVA6, &b_Tau_againstElectronMediumMVA6);
   fChain->SetBranchAddress("Tau_againstElectronTightMVA6", &Tau_againstElectronTightMVA6, &b_Tau_againstElectronTightMVA6);
   fChain->SetBranchAddress("Tau_chargedIsoPtSum", &Tau_chargedIsoPtSum, &b_Tau_chargedIsoPtSum);
   fChain->SetBranchAddress("Tau_neutralIsoPtSum", &Tau_neutralIsoPtSum, &b_Tau_neutralIsoPtSum);
   fChain->SetBranchAddress("Tau_puCorrPtSum", &Tau_puCorrPtSum, &b_Tau_puCorrPtSum);
   fChain->SetBranchAddress("Tau_byVLooseIsolationMVArun2v1DBoldDMwLT", &Tau_byVLooseIsolationMVArun2v1DBoldDMwLT, &b_Tau_byVLooseIsolationMVArun2v1DBoldDMwLT);
   fChain->SetBranchAddress("Tau_byLooseIsolationMVArun2v1DBoldDMwLT", &Tau_byLooseIsolationMVArun2v1DBoldDMwLT, &b_Tau_byLooseIsolationMVArun2v1DBoldDMwLT);
   fChain->SetBranchAddress("Tau_byMediumIsolationMVArun2v1DBoldDMwLT", &Tau_byMediumIsolationMVArun2v1DBoldDMwLT, &b_Tau_byMediumIsolationMVArun2v1DBoldDMwLT);
   fChain->SetBranchAddress("Tau_byTightIsolationMVArun2v1DBoldDMwLT", &Tau_byTightIsolationMVArun2v1DBoldDMwLT, &b_Tau_byTightIsolationMVArun2v1DBoldDMwLT);
   fChain->SetBranchAddress("Tau_byVTightIsolationMVArun2v1DBoldDMwLT", &Tau_byVTightIsolationMVArun2v1DBoldDMwLT, &b_Tau_byVTightIsolationMVArun2v1DBoldDMwLT);
   fChain->SetBranchAddress("Tau_byVLooseIsolationMVArun2v1DBnewDMwLT", &Tau_byVLooseIsolationMVArun2v1DBnewDMwLT, &b_Tau_byVLooseIsolationMVArun2v1DBnewDMwLT);
   fChain->SetBranchAddress("Tau_byLooseIsolationMVArun2v1DBnewDMwLT", &Tau_byLooseIsolationMVArun2v1DBnewDMwLT, &b_Tau_byLooseIsolationMVArun2v1DBnewDMwLT);
   fChain->SetBranchAddress("Tau_byMediumIsolationMVArun2v1DBnewDMwLT", &Tau_byMediumIsolationMVArun2v1DBnewDMwLT, &b_Tau_byMediumIsolationMVArun2v1DBnewDMwLT);
   fChain->SetBranchAddress("Tau_byTightIsolationMVArun2v1DBnewDMwLT", &Tau_byTightIsolationMVArun2v1DBnewDMwLT, &b_Tau_byTightIsolationMVArun2v1DBnewDMwLT);
   fChain->SetBranchAddress("Tau_byVTightIsolationMVArun2v1DBnewDMwLT", &Tau_byVTightIsolationMVArun2v1DBnewDMwLT, &b_Tau_byVTightIsolationMVArun2v1DBnewDMwLT);
   fChain->SetBranchAddress("Tau_byLooseIsolationMVArun2v1DBdR03oldDMwLT", &Tau_byLooseIsolationMVArun2v1DBdR03oldDMwLT, &b_Tau_byLooseIsolationMVArun2v1DBdR03oldDMwLT);
   fChain->SetBranchAddress("Tau_byMediumIsolationMVArun2v1DBdR03oldDMwLT", &Tau_byMediumIsolationMVArun2v1DBdR03oldDMwLT, &b_Tau_byMediumIsolationMVArun2v1DBdR03oldDMwLT);
   fChain->SetBranchAddress("Tau_byIsolationMVArun2017v2DBoldDMdR0p3wLTraw2017", &Tau_byIsolationMVArun2017v2DBoldDMdR0p3wLTraw2017, &b_Tau_byIsolationMVArun2017v2DBoldDMdR0p3wLTraw2017);
   fChain->SetBranchAddress("Tau_byVVLooseIsolationMVArun2017v2DBoldDMdR0p3wLT2017", &Tau_byVVLooseIsolationMVArun2017v2DBoldDMdR0p3wLT2017, &b_Tau_byVVLooseIsolationMVArun2017v2DBoldDMdR0p3wLT2017);
   fChain->SetBranchAddress("Tau_byVLooseIsolationMVArun2017v2DBoldDMdR0p3wLT2017", &Tau_byVLooseIsolationMVArun2017v2DBoldDMdR0p3wLT2017, &b_Tau_byVLooseIsolationMVArun2017v2DBoldDMdR0p3wLT2017);
   fChain->SetBranchAddress("Tau_byLooseIsolationMVArun2017v2DBoldDMdR0p3wLT2017", &Tau_byLooseIsolationMVArun2017v2DBoldDMdR0p3wLT2017, &b_Tau_byLooseIsolationMVArun2017v2DBoldDMdR0p3wLT2017);
   fChain->SetBranchAddress("Tau_byMediumIsolationMVArun2017v2DBoldDMdR0p3wLT2017", &Tau_byMediumIsolationMVArun2017v2DBoldDMdR0p3wLT2017, &b_Tau_byMediumIsolationMVArun2017v2DBoldDMdR0p3wLT2017);
   fChain->SetBranchAddress("Tau_byTightIsolationMVArun2017v2DBoldDMdR0p3wLT2017", &Tau_byTightIsolationMVArun2017v2DBoldDMdR0p3wLT2017, &b_Tau_byTightIsolationMVArun2017v2DBoldDMdR0p3wLT2017);
   fChain->SetBranchAddress("Tau_byVTightIsolationMVArun2017v2DBoldDMdR0p3wLT2017", &Tau_byVTightIsolationMVArun2017v2DBoldDMdR0p3wLT2017, &b_Tau_byVTightIsolationMVArun2017v2DBoldDMdR0p3wLT2017);
   fChain->SetBranchAddress("Tau_byVVTightIsolationMVArun2017v2DBoldDMdR0p3wLT2017", &Tau_byVVTightIsolationMVArun2017v2DBoldDMdR0p3wLT2017, &b_Tau_byVVTightIsolationMVArun2017v2DBoldDMdR0p3wLT2017);
   fChain->SetBranchAddress("Tau_nProngs", &Tau_nProngs, &b_Tau_nProngs);
   fChain->SetBranchAddress("Tau_leadChargedCandNdof", &Tau_leadChargedCandNdof, &b_Tau_leadChargedCandNdof);
   fChain->SetBranchAddress("Tau_leadChargedCandChi2", &Tau_leadChargedCandChi2, &b_Tau_leadChargedCandChi2);
   fChain->SetBranchAddress("Tau_leadChargedCandValidHits", &Tau_leadChargedCandValidHits, &b_Tau_leadChargedCandValidHits);
   fChain->SetBranchAddress("Tau_defaultDxy", &Tau_defaultDxy, &b_Tau_defaultDxy);
   fChain->SetBranchAddress("Tau_defaultDxyError", &Tau_defaultDxyError, &b_Tau_defaultDxyError);
   fChain->SetBranchAddress("Tau_defaultDxySig", &Tau_defaultDxySig, &b_Tau_defaultDxySig);
   fChain->SetBranchAddress("Tau_packedLeadTauCand_dxy", &Tau_packedLeadTauCand_dxy, &b_Tau_packedLeadTauCand_dxy);
   fChain->SetBranchAddress("Tau_packedLeadTauCand_dz", &Tau_packedLeadTauCand_dz, &b_Tau_packedLeadTauCand_dz);
   fChain->SetBranchAddress("Tau_packedLeadTauCand_dxyError", &Tau_packedLeadTauCand_dxyError, &b_Tau_packedLeadTauCand_dxyError);
   fChain->SetBranchAddress("Tau_packedLeadTauCand_dzError", &Tau_packedLeadTauCand_dzError, &b_Tau_packedLeadTauCand_dzError);
   fChain->SetBranchAddress("Tau_defaultFlightLengthX", &Tau_defaultFlightLengthX, &b_Tau_defaultFlightLengthX);
   fChain->SetBranchAddress("Tau_defaultFlightLengthY", &Tau_defaultFlightLengthY, &b_Tau_defaultFlightLengthY);
   fChain->SetBranchAddress("Tau_defaultFlightLengthZ", &Tau_defaultFlightLengthZ, &b_Tau_defaultFlightLengthZ);
   fChain->SetBranchAddress("Tau_defaultFlightLengthSig", &Tau_defaultFlightLengthSig, &b_Tau_defaultFlightLengthSig);
   fChain->SetBranchAddress("Tau_default_PCAx_pv", &Tau_default_PCAx_pv, &b_Tau_default_PCAx_pv);
   fChain->SetBranchAddress("Tau_default_PCAy_pv", &Tau_default_PCAy_pv, &b_Tau_default_PCAy_pv);
   fChain->SetBranchAddress("Tau_default_PCAz_pv", &Tau_default_PCAz_pv, &b_Tau_default_PCAz_pv);
   fChain->SetBranchAddress("Tau_leadChargedCandDz_pv", &Tau_leadChargedCandDz_pv, &b_Tau_leadChargedCandDz_pv);
   fChain->SetBranchAddress("Tau_leadChargedCandDxy_pv", &Tau_leadChargedCandDxy_pv, &b_Tau_leadChargedCandDxy_pv);
   fChain->SetBranchAddress("Tau_leadChargedCandDz_bs", &Tau_leadChargedCandDz_bs, &b_Tau_leadChargedCandDz_bs);
   fChain->SetBranchAddress("Tau_leadChargedCandDxy_bs", &Tau_leadChargedCandDxy_bs, &b_Tau_leadChargedCandDxy_bs);
   fChain->SetBranchAddress("Tau_leadChargedCandDzError", &Tau_leadChargedCandDzError, &b_Tau_leadChargedCandDzError);
   fChain->SetBranchAddress("Tau_leadChargedCandDxyError", &Tau_leadChargedCandDxyError, &b_Tau_leadChargedCandDxyError);
   fChain->SetBranchAddress("Tau_leadChargedCandVtx", &Tau_leadChargedCandVtx, &b_Tau_leadChargedCandVtx);
   fChain->SetBranchAddress("Tau_leadChargedCandVty", &Tau_leadChargedCandVty, &b_Tau_leadChargedCandVty);
   fChain->SetBranchAddress("Tau_leadChargedCandVtz", &Tau_leadChargedCandVtz, &b_Tau_leadChargedCandVtz);
   fChain->SetBranchAddress("Tau_leadChargedCandTrack_PCAx_bs", &Tau_leadChargedCandTrack_PCAx_bs, &b_Tau_leadChargedCandTrack_PCAx_bs);
   fChain->SetBranchAddress("Tau_leadChargedCandTrack_PCAy_bs", &Tau_leadChargedCandTrack_PCAy_bs, &b_Tau_leadChargedCandTrack_PCAy_bs);
   fChain->SetBranchAddress("Tau_leadChargedCandTrack_PCAz_bs", &Tau_leadChargedCandTrack_PCAz_bs, &b_Tau_leadChargedCandTrack_PCAz_bs);
   fChain->SetBranchAddress("Tau_leadChargedCandTrack_PCAx_pv", &Tau_leadChargedCandTrack_PCAx_pv, &b_Tau_leadChargedCandTrack_PCAx_pv);
   fChain->SetBranchAddress("Tau_leadChargedCandTrack_PCAy_pv", &Tau_leadChargedCandTrack_PCAy_pv, &b_Tau_leadChargedCandTrack_PCAy_pv);
   fChain->SetBranchAddress("Tau_leadChargedCandTrack_PCAz_pv", &Tau_leadChargedCandTrack_PCAz_pv, &b_Tau_leadChargedCandTrack_PCAz_pv);
   fChain->SetBranchAddress("Tau_leadChargedCandTrackFitErrorMatrix_00", &Tau_leadChargedCandTrackFitErrorMatrix_00, &b_Tau_leadChargedCandTrackFitErrorMatrix_00);
   fChain->SetBranchAddress("Tau_leadChargedCandTrackFitErrorMatrix_01", &Tau_leadChargedCandTrackFitErrorMatrix_01, &b_Tau_leadChargedCandTrackFitErrorMatrix_01);
   fChain->SetBranchAddress("Tau_leadChargedCandTrackFitErrorMatrix_02", &Tau_leadChargedCandTrackFitErrorMatrix_02, &b_Tau_leadChargedCandTrackFitErrorMatrix_02);
   fChain->SetBranchAddress("Tau_leadChargedCandTrackFitErrorMatrix_11", &Tau_leadChargedCandTrackFitErrorMatrix_11, &b_Tau_leadChargedCandTrackFitErrorMatrix_11);
   fChain->SetBranchAddress("Tau_leadChargedCandTrackFitErrorMatrix_12", &Tau_leadChargedCandTrackFitErrorMatrix_12, &b_Tau_leadChargedCandTrackFitErrorMatrix_12);
   fChain->SetBranchAddress("Tau_leadChargedCandTrackFitErrorMatrix_22", &Tau_leadChargedCandTrackFitErrorMatrix_22, &b_Tau_leadChargedCandTrackFitErrorMatrix_22);
   fChain->SetBranchAddress("Jet_pt", &Jet_pt, &b_Jet_pt);
   fChain->SetBranchAddress("Jet_eta", &Jet_eta, &b_Jet_eta);
   fChain->SetBranchAddress("Jet_phi", &Jet_phi, &b_Jet_phi);
   fChain->SetBranchAddress("Jet_energy", &Jet_energy, &b_Jet_energy);
   fChain->SetBranchAddress("Jet_mass", &Jet_mass, &b_Jet_mass);
   fChain->SetBranchAddress("Jet_px", &Jet_px, &b_Jet_px);
   fChain->SetBranchAddress("Jet_py", &Jet_py, &b_Jet_py);
   fChain->SetBranchAddress("Jet_pz", &Jet_pz, &b_Jet_pz);
   fChain->SetBranchAddress("Jet_Uncorr_pt", &Jet_Uncorr_pt, &b_Jet_Uncorr_pt);
   fChain->SetBranchAddress("Jet_L1corr_pt", &Jet_L1corr_pt, &b_Jet_L1corr_pt);
   fChain->SetBranchAddress("Jet_pfCombinedInclusiveSecondaryVertexV2BJetTags", &Jet_pfCombinedInclusiveSecondaryVertexV2BJetTags, &b_Jet_pfCombinedInclusiveSecondaryVertexV2BJetTags);
   fChain->SetBranchAddress("Jet_pfCombinedMVAV2BJetTags", &Jet_pfCombinedMVAV2BJetTags, &b_Jet_pfCombinedMVAV2BJetTags);
   fChain->SetBranchAddress("Jet_pfJetProbabilityBJetTags", &Jet_pfJetProbabilityBJetTags, &b_Jet_pfJetProbabilityBJetTags);
   fChain->SetBranchAddress("Jet_pfCombinedCvsLJetTags", &Jet_pfCombinedCvsLJetTags, &b_Jet_pfCombinedCvsLJetTags);
   fChain->SetBranchAddress("Jet_pfCombinedCvsBJetTags", &Jet_pfCombinedCvsBJetTags, &b_Jet_pfCombinedCvsBJetTags);
   fChain->SetBranchAddress("Jet_pfDeepCSVBJetTags", &Jet_pfDeepCSVBJetTags, &b_Jet_pfDeepCSVBJetTags);
   fChain->SetBranchAddress("Jet_pfDeepCSVProbb", &Jet_pfDeepCSVProbb, &b_Jet_pfDeepCSVProbb);
   fChain->SetBranchAddress("Jet_pfDeepCSVProbbb", &Jet_pfDeepCSVProbbb, &b_Jet_pfDeepCSVProbbb);
   fChain->SetBranchAddress("Jet_pfDeepCSVProbc", &Jet_pfDeepCSVProbc, &b_Jet_pfDeepCSVProbc);
   fChain->SetBranchAddress("Jet_pfDeepCSVProbcc", &Jet_pfDeepCSVProbcc, &b_Jet_pfDeepCSVProbcc);
   fChain->SetBranchAddress("Jet_pfDeepCSVProbudsg", &Jet_pfDeepCSVProbudsg, &b_Jet_pfDeepCSVProbudsg);
   fChain->SetBranchAddress("Jet_pfDeepFlavourBJetTags", &Jet_pfDeepFlavourBJetTags, &b_Jet_pfDeepFlavourBJetTags);
   fChain->SetBranchAddress("Jet_pfDeepFlavourProbb", &Jet_pfDeepFlavourProbb, &b_Jet_pfDeepFlavourProbb);
   fChain->SetBranchAddress("Jet_pfDeepFlavourProbbb", &Jet_pfDeepFlavourProbbb, &b_Jet_pfDeepFlavourProbbb);
   fChain->SetBranchAddress("Jet_pfDeepFlavourProblepb", &Jet_pfDeepFlavourProblepb, &b_Jet_pfDeepFlavourProblepb);
   fChain->SetBranchAddress("Jet_pfDeepFlavourProbc", &Jet_pfDeepFlavourProbc, &b_Jet_pfDeepFlavourProbc);
   fChain->SetBranchAddress("Jet_pfDeepFlavourProbuds", &Jet_pfDeepFlavourProbuds, &b_Jet_pfDeepFlavourProbuds);
   fChain->SetBranchAddress("Jet_pfDeepFlavourProbg", &Jet_pfDeepFlavourProbg, &b_Jet_pfDeepFlavourProbg);
   fChain->SetBranchAddress("Jet_pileupId", &Jet_pileupId, &b_Jet_pileupId);
   fChain->SetBranchAddress("Jet_isPFJet", &Jet_isPFJet, &b_Jet_isPFJet);
   fChain->SetBranchAddress("Jet_isCaloJet", &Jet_isCaloJet, &b_Jet_isCaloJet);
   fChain->SetBranchAddress("Jet_qg", &Jet_qg, &b_Jet_qg);
   fChain->SetBranchAddress("Jet_axis1", &Jet_axis1, &b_Jet_axis1); 
   fChain->SetBranchAddress("Jet_axis2", &Jet_axis2, &b_Jet_axis2);
   fChain->SetBranchAddress("Jet_ptD", &Jet_ptD, &b_Jet_ptD);
   fChain->SetBranchAddress("Jet_mult", &Jet_mult, &b_Jet_mult);
   fChain->SetBranchAddress("Jet_ele_indices", &Jet_ele_indices, &b_Jet_ele_indices);
   fChain->SetBranchAddress("Jet_ele_number", &Jet_ele_number, &b_Jet_ele_number);
   fChain->SetBranchAddress("Jet_mu_indices", &Jet_mu_indices, &b_Jet_mu_indices);
   fChain->SetBranchAddress("Jet_mu_number", &Jet_mu_number, &b_Jet_mu_number);
   fChain->SetBranchAddress("Jet_tau_indices", &Jet_tau_indices, &b_Jet_tau_indices);
   fChain->SetBranchAddress("Jet_tau_number", &Jet_tau_number, &b_Jet_tau_number);
   fChain->SetBranchAddress("Jet_neutralHadEnergyFraction", &Jet_neutralHadEnergyFraction, &b_Jet_neutralHadEnergyFraction);
   fChain->SetBranchAddress("Jet_neutralEmEnergyFraction", &Jet_neutralEmEnergyFraction, &b_Jet_neutralEmEnergyFraction);
   fChain->SetBranchAddress("Jet_chargedHadronEnergyFraction", &Jet_chargedHadronEnergyFraction, &b_Jet_chargedHadronEnergyFraction);
   fChain->SetBranchAddress("Jet_chargedEmEnergyFraction", &Jet_chargedEmEnergyFraction, &b_Jet_chargedEmEnergyFraction);
   fChain->SetBranchAddress("Jet_muonEnergyFraction", &Jet_muonEnergyFraction, &b_Jet_muonEnergyFraction);
   fChain->SetBranchAddress("Jet_electronEnergy", &Jet_electronEnergy, &b_Jet_electronEnergy);
   fChain->SetBranchAddress("Jet_photonEnergy", &Jet_photonEnergy, &b_Jet_photonEnergy);
   fChain->SetBranchAddress("Jet_emEnergyFraction", &Jet_emEnergyFraction, &b_Jet_emEnergyFraction);
   fChain->SetBranchAddress("Jet_numberOfConstituents", &Jet_numberOfConstituents, &b_Jet_numberOfConstituents);
   fChain->SetBranchAddress("Jet_chargedMultiplicity", &Jet_chargedMultiplicity, &b_Jet_chargedMultiplicity);
   fChain->SetBranchAddress("Jet_vtxMass", &Jet_vtxMass, &b_Jet_vtxMass);
   fChain->SetBranchAddress("Jet_vtxNtracks", &Jet_vtxNtracks, &b_Jet_vtxNtracks);
   fChain->SetBranchAddress("Jet_vtx3DVal", &Jet_vtx3DVal, &b_Jet_vtx3DVal);
   fChain->SetBranchAddress("Jet_vtx3DSig", &Jet_vtx3DSig, &b_Jet_vtx3DSig);
   fChain->SetBranchAddress("Jet_JesSF", &Jet_JesSF, &b_Jet_JesSF);
   fChain->SetBranchAddress("Jet_JesSFup", &Jet_JesSFup, &b_Jet_JesSFup);
   fChain->SetBranchAddress("Jet_JesSFdown", &Jet_JesSFdown, &b_Jet_JesSFdown);
   fChain->SetBranchAddress("Jet_JerSF", &Jet_JerSF, &b_Jet_JerSF);
   fChain->SetBranchAddress("Jet_JerSFup", &Jet_JerSFup, &b_Jet_JerSFup);
   fChain->SetBranchAddress("Jet_JerSFdown", &Jet_JerSFdown, &b_Jet_JerSFdown);
   fChain->SetBranchAddress("Jet_JesSF_AbsoluteStat_up", &Jet_JesSF_AbsoluteStat_up, &b_Jet_JesSF_AbsoluteStat_up);
   fChain->SetBranchAddress("Jet_JesSF_AbsoluteStat_down", &Jet_JesSF_AbsoluteStat_down, &b_Jet_JesSF_AbsoluteStat_down);
   fChain->SetBranchAddress("Jet_JesSF_AbsoluteScale_up", &Jet_JesSF_AbsoluteScale_up, &b_Jet_JesSF_AbsoluteScale_up);
   fChain->SetBranchAddress("Jet_JesSF_AbsoluteScale_down", &Jet_JesSF_AbsoluteScale_down, &b_Jet_JesSF_AbsoluteScale_down);
   fChain->SetBranchAddress("Jet_JesSF_AbsoluteFlavMap_up", &Jet_JesSF_AbsoluteFlavMap_up, &b_Jet_JesSF_AbsoluteFlavMap_up);
   fChain->SetBranchAddress("Jet_JesSF_AbsoluteFlavMap_down", &Jet_JesSF_AbsoluteFlavMap_down, &b_Jet_JesSF_AbsoluteFlavMap_down);
   fChain->SetBranchAddress("Jet_JesSF_AbsoluteMPFBias_up", &Jet_JesSF_AbsoluteMPFBias_up, &b_Jet_JesSF_AbsoluteMPFBias_up);
   fChain->SetBranchAddress("Jet_JesSF_AbsoluteMPFBias_down", &Jet_JesSF_AbsoluteMPFBias_down, &b_Jet_JesSF_AbsoluteMPFBias_down);
   fChain->SetBranchAddress("Jet_JesSF_Fragmentation_up", &Jet_JesSF_Fragmentation_up, &b_Jet_JesSF_Fragmentation_up);
   fChain->SetBranchAddress("Jet_JesSF_Fragmentation_down", &Jet_JesSF_Fragmentation_down, &b_Jet_JesSF_Fragmentation_down);
   fChain->SetBranchAddress("Jet_JesSF_SinglePionECAL_up", &Jet_JesSF_SinglePionECAL_up, &b_Jet_JesSF_SinglePionECAL_up);
   fChain->SetBranchAddress("Jet_JesSF_SinglePionECAL_down", &Jet_JesSF_SinglePionECAL_down, &b_Jet_JesSF_SinglePionECAL_down);
   fChain->SetBranchAddress("Jet_JesSF_SinglePionHCAL_up", &Jet_JesSF_SinglePionHCAL_up, &b_Jet_JesSF_SinglePionHCAL_up);
   fChain->SetBranchAddress("Jet_JesSF_SinglePionHCAL_down", &Jet_JesSF_SinglePionHCAL_down, &b_Jet_JesSF_SinglePionHCAL_down);
   fChain->SetBranchAddress("Jet_JesSF_FlavorQCD_up", &Jet_JesSF_FlavorQCD_up, &b_Jet_JesSF_FlavorQCD_up);
   fChain->SetBranchAddress("Jet_JesSF_FlavorQCD_down", &Jet_JesSF_FlavorQCD_down, &b_Jet_JesSF_FlavorQCD_down);
   fChain->SetBranchAddress("Jet_JesSF_TimePtEta_up", &Jet_JesSF_TimePtEta_up, &b_Jet_JesSF_TimePtEta_up);
   fChain->SetBranchAddress("Jet_JesSF_TimePtEta_down", &Jet_JesSF_TimePtEta_down, &b_Jet_JesSF_TimePtEta_down);
   fChain->SetBranchAddress("Jet_JesSF_RelativeJEREC1_up", &Jet_JesSF_RelativeJEREC1_up, &b_Jet_JesSF_RelativeJEREC1_up);
   fChain->SetBranchAddress("Jet_JesSF_RelativeJEREC1_down", &Jet_JesSF_RelativeJEREC1_down, &b_Jet_JesSF_RelativeJEREC1_down);
   fChain->SetBranchAddress("Jet_JesSF_RelativeJEREC2_up", &Jet_JesSF_RelativeJEREC2_up, &b_Jet_JesSF_RelativeJEREC2_up);
   fChain->SetBranchAddress("Jet_JesSF_RelativeJEREC2_down", &Jet_JesSF_RelativeJEREC2_down, &b_Jet_JesSF_RelativeJEREC2_down);
   fChain->SetBranchAddress("Jet_JesSF_RelativeJERHF_up", &Jet_JesSF_RelativeJERHF_up, &b_Jet_JesSF_RelativeJERHF_up);
   fChain->SetBranchAddress("Jet_JesSF_RelativeJERHF_down", &Jet_JesSF_RelativeJERHF_down, &b_Jet_JesSF_RelativeJERHF_down);
   fChain->SetBranchAddress("Jet_JesSF_RelativePtBB_up", &Jet_JesSF_RelativePtBB_up, &b_Jet_JesSF_RelativePtBB_up);
   fChain->SetBranchAddress("Jet_JesSF_RelativePtBB_down", &Jet_JesSF_RelativePtBB_down, &b_Jet_JesSF_RelativePtBB_down);
   fChain->SetBranchAddress("Jet_JesSF_RelativePtEC1_up", &Jet_JesSF_RelativePtEC1_up, &b_Jet_JesSF_RelativePtEC1_up);
   fChain->SetBranchAddress("Jet_JesSF_RelativePtEC1_down", &Jet_JesSF_RelativePtEC1_down, &b_Jet_JesSF_RelativePtEC1_down);
   fChain->SetBranchAddress("Jet_JesSF_RelativePtEC2_up", &Jet_JesSF_RelativePtEC2_up, &b_Jet_JesSF_RelativePtEC2_up);
   fChain->SetBranchAddress("Jet_JesSF_RelativePtEC2_down", &Jet_JesSF_RelativePtEC2_down, &b_Jet_JesSF_RelativePtEC2_down);
   fChain->SetBranchAddress("Jet_JesSF_RelativePtHF_up", &Jet_JesSF_RelativePtHF_up, &b_Jet_JesSF_RelativePtHF_up);
   fChain->SetBranchAddress("Jet_JesSF_RelativePtHF_down", &Jet_JesSF_RelativePtHF_down, &b_Jet_JesSF_RelativePtHF_down);
   fChain->SetBranchAddress("Jet_JesSF_RelativeBal_up", &Jet_JesSF_RelativeBal_up, &b_Jet_JesSF_RelativeBal_up);
   fChain->SetBranchAddress("Jet_JesSF_RelativeBal_down", &Jet_JesSF_RelativeBal_down, &b_Jet_JesSF_RelativeBal_down);
   fChain->SetBranchAddress("Jet_JesSF_RelativeFSR_up", &Jet_JesSF_RelativeFSR_up, &b_Jet_JesSF_RelativeFSR_up);
   fChain->SetBranchAddress("Jet_JesSF_RelativeFSR_down", &Jet_JesSF_RelativeFSR_down, &b_Jet_JesSF_RelativeFSR_down);
   fChain->SetBranchAddress("Jet_JesSF_RelativeStatFSR_up", &Jet_JesSF_RelativeStatFSR_up, &b_Jet_JesSF_RelativeStatFSR_up);
   fChain->SetBranchAddress("Jet_JesSF_RelativeStatFSR_down", &Jet_JesSF_RelativeStatFSR_down, &b_Jet_JesSF_RelativeStatFSR_down);
   fChain->SetBranchAddress("Jet_JesSF_RelativeStatEC_up", &Jet_JesSF_RelativeStatEC_up, &b_Jet_JesSF_RelativeStatEC_up);
   fChain->SetBranchAddress("Jet_JesSF_RelativeStatEC_down", &Jet_JesSF_RelativeStatEC_down, &b_Jet_JesSF_RelativeStatEC_down);
   fChain->SetBranchAddress("Jet_JesSF_RelativeStatHF_up", &Jet_JesSF_RelativeStatHF_up, &b_Jet_JesSF_RelativeStatHF_up);
   fChain->SetBranchAddress("Jet_JesSF_RelativeStatHF_down", &Jet_JesSF_RelativeStatHF_down, &b_Jet_JesSF_RelativeStatHF_down);
   fChain->SetBranchAddress("Jet_JesSF_PileUpDataMC_up", &Jet_JesSF_PileUpDataMC_up, &b_Jet_JesSF_PileUpDataMC_up);
   fChain->SetBranchAddress("Jet_JesSF_PileUpDataMC_down", &Jet_JesSF_PileUpDataMC_down, &b_Jet_JesSF_PileUpDataMC_down);
   fChain->SetBranchAddress("Jet_JesSF_PileUpPtRef_up", &Jet_JesSF_PileUpPtRef_up, &b_Jet_JesSF_PileUpPtRef_up);
   fChain->SetBranchAddress("Jet_JesSF_PileUpPtRef_down", &Jet_JesSF_PileUpPtRef_down, &b_Jet_JesSF_PileUpPtRef_down);
   fChain->SetBranchAddress("Jet_JesSF_PileUpPtBB_up", &Jet_JesSF_PileUpPtBB_up, &b_Jet_JesSF_PileUpPtBB_up);
   fChain->SetBranchAddress("Jet_JesSF_PileUpPtBB_down", &Jet_JesSF_PileUpPtBB_down, &b_Jet_JesSF_PileUpPtBB_down);
   fChain->SetBranchAddress("Jet_JesSF_PileUpPtEC1_up", &Jet_JesSF_PileUpPtEC1_up, &b_Jet_JesSF_PileUpPtEC1_up);
   fChain->SetBranchAddress("Jet_JesSF_PileUpPtEC1_down", &Jet_JesSF_PileUpPtEC1_down, &b_Jet_JesSF_PileUpPtEC1_down);
   fChain->SetBranchAddress("Jet_JesSF_PileUpPtEC2_up", &Jet_JesSF_PileUpPtEC2_up, &b_Jet_JesSF_PileUpPtEC2_up);
   fChain->SetBranchAddress("Jet_JesSF_PileUpPtEC2_down", &Jet_JesSF_PileUpPtEC2_down, &b_Jet_JesSF_PileUpPtEC2_down);
   fChain->SetBranchAddress("Jet_JesSF_PileUpPtHF_up", &Jet_JesSF_PileUpPtHF_up, &b_Jet_JesSF_PileUpPtHF_up);
   fChain->SetBranchAddress("Jet_JesSF_PileUpPtHF_down", &Jet_JesSF_PileUpPtHF_down, &b_Jet_JesSF_PileUpPtHF_down);
   fChain->SetBranchAddress("Jet_JesSF_PileUpMuZero_up", &Jet_JesSF_PileUpMuZero_up, &b_Jet_JesSF_PileUpMuZero_up);
   fChain->SetBranchAddress("Jet_JesSF_PileUpMuZero_down", &Jet_JesSF_PileUpMuZero_down, &b_Jet_JesSF_PileUpMuZero_down);
   fChain->SetBranchAddress("Jet_JesSF_PileUpEnvelope_up", &Jet_JesSF_PileUpEnvelope_up, &b_Jet_JesSF_PileUpEnvelope_up);
   fChain->SetBranchAddress("Jet_JesSF_PileUpEnvelope_down", &Jet_JesSF_PileUpEnvelope_down, &b_Jet_JesSF_PileUpEnvelope_down);
   fChain->SetBranchAddress("Jet_JesSF_SubTotalPileUp_up", &Jet_JesSF_SubTotalPileUp_up, &b_Jet_JesSF_SubTotalPileUp_up);
   fChain->SetBranchAddress("Jet_JesSF_SubTotalPileUp_down", &Jet_JesSF_SubTotalPileUp_down, &b_Jet_JesSF_SubTotalPileUp_down);
   fChain->SetBranchAddress("Jet_JesSF_SubTotalRelative_up", &Jet_JesSF_SubTotalRelative_up, &b_Jet_JesSF_SubTotalRelative_up);
   fChain->SetBranchAddress("Jet_JesSF_SubTotalRelative_down", &Jet_JesSF_SubTotalRelative_down, &b_Jet_JesSF_SubTotalRelative_down);
   fChain->SetBranchAddress("Jet_JesSF_SubTotalPt_up", &Jet_JesSF_SubTotalPt_up, &b_Jet_JesSF_SubTotalPt_up);
   fChain->SetBranchAddress("Jet_JesSF_SubTotalPt_down", &Jet_JesSF_SubTotalPt_down, &b_Jet_JesSF_SubTotalPt_down);
   fChain->SetBranchAddress("Jet_JesSF_SubTotalScale_up", &Jet_JesSF_SubTotalScale_up, &b_Jet_JesSF_SubTotalScale_up);
   fChain->SetBranchAddress("Jet_JesSF_SubTotalScale_down", &Jet_JesSF_SubTotalScale_down, &b_Jet_JesSF_SubTotalScale_down);
   fChain->SetBranchAddress("Jet_JesSF_SubTotalAbsolute_up", &Jet_JesSF_SubTotalAbsolute_up, &b_Jet_JesSF_SubTotalAbsolute_up);
   fChain->SetBranchAddress("Jet_JesSF_SubTotalAbsolute_down", &Jet_JesSF_SubTotalAbsolute_down, &b_Jet_JesSF_SubTotalAbsolute_down);
   fChain->SetBranchAddress("Jet_JesSF_SubTotalMC_up", &Jet_JesSF_SubTotalMC_up, &b_Jet_JesSF_SubTotalMC_up);
   fChain->SetBranchAddress("Jet_JesSF_SubTotalMC_down", &Jet_JesSF_SubTotalMC_down, &b_Jet_JesSF_SubTotalMC_down);
   fChain->SetBranchAddress("Jet_JesSF_TotalNoFlavor_up", &Jet_JesSF_TotalNoFlavor_up, &b_Jet_JesSF_TotalNoFlavor_up);
   fChain->SetBranchAddress("Jet_JesSF_TotalNoFlavor_down", &Jet_JesSF_TotalNoFlavor_down, &b_Jet_JesSF_TotalNoFlavor_down);
   fChain->SetBranchAddress("Jet_JesSF_TotalNoFlavorNoTime_up", &Jet_JesSF_TotalNoFlavorNoTime_up, &b_Jet_JesSF_TotalNoFlavorNoTime_up);
   fChain->SetBranchAddress("Jet_JesSF_TotalNoFlavorNoTime_down", &Jet_JesSF_TotalNoFlavorNoTime_down, &b_Jet_JesSF_TotalNoFlavorNoTime_down);
   fChain->SetBranchAddress("Jet_JesSF_FlavorZJet_up", &Jet_JesSF_FlavorZJet_up, &b_Jet_JesSF_FlavorZJet_up);
   fChain->SetBranchAddress("Jet_JesSF_FlavorZJet_down", &Jet_JesSF_FlavorZJet_down, &b_Jet_JesSF_FlavorZJet_down);
   fChain->SetBranchAddress("Jet_JesSF_FlavorPhotonJet_up", &Jet_JesSF_FlavorPhotonJet_up, &b_Jet_JesSF_FlavorPhotonJet_up);
   fChain->SetBranchAddress("Jet_JesSF_FlavorPhotonJet_down", &Jet_JesSF_FlavorPhotonJet_down, &b_Jet_JesSF_FlavorPhotonJet_down);
   fChain->SetBranchAddress("Jet_JesSF_FlavorPureGluon_up", &Jet_JesSF_FlavorPureGluon_up, &b_Jet_JesSF_FlavorPureGluon_up);
   fChain->SetBranchAddress("Jet_JesSF_FlavorPureGluon_down", &Jet_JesSF_FlavorPureGluon_down, &b_Jet_JesSF_FlavorPureGluon_down);
   fChain->SetBranchAddress("Jet_JesSF_FlavorPureQuark_up", &Jet_JesSF_FlavorPureQuark_up, &b_Jet_JesSF_FlavorPureQuark_up);
   fChain->SetBranchAddress("Jet_JesSF_FlavorPureQuark_down", &Jet_JesSF_FlavorPureQuark_down, &b_Jet_JesSF_FlavorPureQuark_down);
   fChain->SetBranchAddress("Jet_JesSF_FlavorPureCharm_up", &Jet_JesSF_FlavorPureCharm_up, &b_Jet_JesSF_FlavorPureCharm_up);
   fChain->SetBranchAddress("Jet_JesSF_FlavorPureCharm_down", &Jet_JesSF_FlavorPureCharm_down, &b_Jet_JesSF_FlavorPureCharm_down);
   fChain->SetBranchAddress("Jet_JesSF_FlavorPureBottom_up", &Jet_JesSF_FlavorPureBottom_up, &b_Jet_JesSF_FlavorPureBottom_up);
   fChain->SetBranchAddress("Jet_JesSF_FlavorPureBottom_down", &Jet_JesSF_FlavorPureBottom_down, &b_Jet_JesSF_FlavorPureBottom_down);
   fChain->SetBranchAddress("Jet_partonFlavour", &Jet_partonFlavour, &b_Jet_partonFlavour);
   fChain->SetBranchAddress("Jet_hadronFlavour", &Jet_hadronFlavour, &b_Jet_hadronFlavour);
   fChain->SetBranchAddress("BoostedJet_pt", &BoostedJet_pt, &b_BoostedJet_pt);
   fChain->SetBranchAddress("BoostedJet_eta", &BoostedJet_eta, &b_BoostedJet_eta);
   fChain->SetBranchAddress("BoostedJet_phi", &BoostedJet_phi, &b_BoostedJet_phi);
   fChain->SetBranchAddress("BoostedJet_energy", &BoostedJet_energy, &b_BoostedJet_energy);
   fChain->SetBranchAddress("BoostedJet_mass", &BoostedJet_mass, &b_BoostedJet_mass);
   fChain->SetBranchAddress("BoostedJet_Uncorr_pt", &BoostedJet_Uncorr_pt, &b_BoostedJet_Uncorr_pt);
   fChain->SetBranchAddress("BoostedJet_pfJetProbabilityBJetTags", &BoostedJet_pfJetProbabilityBJetTags, &b_BoostedJet_pfJetProbabilityBJetTags);
   fChain->SetBranchAddress("BoostedJet_pfCombinedMVAV2BJetTags", &BoostedJet_pfCombinedMVAV2BJetTags, &b_BoostedJet_pfCombinedMVAV2BJetTags);
   fChain->SetBranchAddress("BoostedJet_pfCombinedInclusiveSecondaryVertexV2BJetTags", &BoostedJet_pfCombinedInclusiveSecondaryVertexV2BJetTags, &b_BoostedJet_pfCombinedInclusiveSecondaryVertexV2BJetTags);
   fChain->SetBranchAddress("BoostedJet_pfCombinedCvsLJetTags", &BoostedJet_pfCombinedCvsLJetTags, &b_BoostedJet_pfCombinedCvsLJetTags);
   fChain->SetBranchAddress("BoostedJet_pfCombinedCvsBJetTags", &BoostedJet_pfCombinedCvsBJetTags, &b_BoostedJet_pfCombinedCvsBJetTags);
   fChain->SetBranchAddress("BoostedJet_neutralHadEnergyFraction", &BoostedJet_neutralHadEnergyFraction, &b_BoostedJet_neutralHadEnergyFraction);
   fChain->SetBranchAddress("BoostedJet_neutralEmEmEnergyFraction", &BoostedJet_neutralEmEmEnergyFraction, &b_BoostedJet_neutralEmEmEnergyFraction);
   fChain->SetBranchAddress("BoostedJet_chargedHadronEnergyFraction", &BoostedJet_chargedHadronEnergyFraction, &b_BoostedJet_chargedHadronEnergyFraction);
   fChain->SetBranchAddress("BoostedJet_chargedEmEnergyFraction", &BoostedJet_chargedEmEnergyFraction, &b_BoostedJet_chargedEmEnergyFraction);
   fChain->SetBranchAddress("BoostedJet_muonEnergyFraction", &BoostedJet_muonEnergyFraction, &b_BoostedJet_muonEnergyFraction);
   fChain->SetBranchAddress("BoostedJet_numberOfConstituents", &BoostedJet_numberOfConstituents, &b_BoostedJet_numberOfConstituents);
   fChain->SetBranchAddress("BoostedJet_chargedMultiplicity", &BoostedJet_chargedMultiplicity, &b_BoostedJet_chargedMultiplicity);
   fChain->SetBranchAddress("BoostedJet_electronEnergy", &BoostedJet_electronEnergy, &b_BoostedJet_electronEnergy);
   fChain->SetBranchAddress("BoostedJet_photonEnergy", &BoostedJet_photonEnergy, &b_BoostedJet_photonEnergy);
   fChain->SetBranchAddress("BoostedJet_tau1", &BoostedJet_tau1, &b_BoostedJet_tau1);
   fChain->SetBranchAddress("BoostedJet_tau2", &BoostedJet_tau2, &b_BoostedJet_tau2);
   fChain->SetBranchAddress("BoostedJet_tau3", &BoostedJet_tau3, &b_BoostedJet_tau3);
   fChain->SetBranchAddress("BoostedJet_softdrop_mass", &BoostedJet_softdrop_mass, &b_BoostedJet_softdrop_mass);
   fChain->SetBranchAddress("BoostedJet_pruned_mass", &BoostedJet_pruned_mass, &b_BoostedJet_pruned_mass);
   fChain->SetBranchAddress("BoostedJet_puppi_pt", &BoostedJet_puppi_pt, &b_BoostedJet_puppi_pt);
   fChain->SetBranchAddress("BoostedJet_puppi_mass", &BoostedJet_puppi_mass, &b_BoostedJet_puppi_mass);
   fChain->SetBranchAddress("BoostedJet_puppi_eta", &BoostedJet_puppi_eta, &b_BoostedJet_puppi_eta);
   fChain->SetBranchAddress("BoostedJet_puppi_phi", &BoostedJet_puppi_phi, &b_BoostedJet_puppi_phi);
   fChain->SetBranchAddress("BoostedJet_puppi_tau1", &BoostedJet_puppi_tau1, &b_BoostedJet_puppi_tau1);
   fChain->SetBranchAddress("BoostedJet_puppi_tau2", &BoostedJet_puppi_tau2, &b_BoostedJet_puppi_tau2);
   fChain->SetBranchAddress("BoostedJet_puppi_tau3", &BoostedJet_puppi_tau3, &b_BoostedJet_puppi_tau3);
   fChain->SetBranchAddress("BoostedJet_puppi_softdrop_masscorr", &BoostedJet_puppi_softdrop_masscorr, &b_BoostedJet_puppi_softdrop_masscorr);
   fChain->SetBranchAddress("BoostedJet_JesSF", &BoostedJet_JesSF, &b_BoostedJet_JesSF);
   fChain->SetBranchAddress("BoostedJet_JesSFup", &BoostedJet_JesSFup, &b_BoostedJet_JesSFup);
   fChain->SetBranchAddress("BoostedJet_JesSFdown", &BoostedJet_JesSFdown, &b_BoostedJet_JesSFdown);
   fChain->SetBranchAddress("BoostedJet_JerSF", &BoostedJet_JerSF, &b_BoostedJet_JerSF);
   fChain->SetBranchAddress("BoostedJet_JerSFup", &BoostedJet_JerSFup, &b_BoostedJet_JerSFup);
   fChain->SetBranchAddress("BoostedJet_JerSFdown", &BoostedJet_JerSFdown, &b_BoostedJet_JerSFdown);
   fChain->SetBranchAddress("TopTagging_topMass", &TopTagging_topMass, &b_TopTagging_topMass);
   fChain->SetBranchAddress("TopTagging_minMass", &TopTagging_minMass, &b_TopTagging_minMass);
   fChain->SetBranchAddress("TopTagging_wMass", &TopTagging_wMass, &b_TopTagging_wMass);
   fChain->SetBranchAddress("TopTagging_nSubJets", &TopTagging_nSubJets, &b_TopTagging_nSubJets);
   fChain->SetBranchAddress("SourceNumber", &SourceNumber, &b_SourceNumber);
   fChain->SetBranchAddress("PUWeight", &PUWeight, &b_PUWeight);
   fChain->SetBranchAddress("MinBiasUpWeight", &MinBiasUpWeight, &b_MinBiasUpWeight);
   fChain->SetBranchAddress("MinBiasDownWeight", &MinBiasDownWeight, &b_MinBiasDownWeight);
   fChain->SetBranchAddress("Met_type1PF_pt", &Met_type1PF_pt, &b_Met_type1PF_pt);
   fChain->SetBranchAddress("Met_type1PF_px", &Met_type1PF_px, &b_Met_type1PF_px);
   fChain->SetBranchAddress("Met_type1PF_py", &Met_type1PF_py, &b_Met_type1PF_py);
   fChain->SetBranchAddress("Met_type1PF_pz", &Met_type1PF_pz, &b_Met_type1PF_pz);
   fChain->SetBranchAddress("Met_type1PF_phi", &Met_type1PF_phi, &b_Met_type1PF_phi);
   fChain->SetBranchAddress("Met_type1PF_sumEt", &Met_type1PF_sumEt, &b_Met_type1PF_sumEt);
   fChain->SetBranchAddress("Met_type1PF_shiftedPtUp", &Met_type1PF_shiftedPtUp, &b_Met_type1PF_shiftedPtUp);
   fChain->SetBranchAddress("Met_type1PF_shiftedPtDown", &Met_type1PF_shiftedPtDown, &b_Met_type1PF_shiftedPtDown);
   fChain->SetBranchAddress("Gen_type1PF_Met", &Gen_type1PF_Met, &b_Gen_type1PF_Met);
   fChain->SetBranchAddress("Gen_type1PF_px", &Gen_type1PF_px, &b_Gen_type1PF_px);
   fChain->SetBranchAddress("Gen_type1PF_py", &Gen_type1PF_py, &b_Gen_type1PF_py);
   Notify();
}

Bool_t EventTree::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void EventTree::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t EventTree::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef EventTree_cxx
