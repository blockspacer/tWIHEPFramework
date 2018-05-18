/******************************************************************************
 * testVar.cpp                                                                *
 *
 * Testing out some variables being added to the skim tree.
 *
 * History
 *      12 Dec 2017 - Created by B. Li.
 ******************************************************************************/

#include "SingleTopRootAnalysis/Vars/ttHVars.hpp"

#include <iostream>

//Test out a couple of variables, one Int_t and one float I guess
ttHVars::ttHVars(bool makeHistos){

  SetName("ttHVars");

  /*
  _doubleVecs["Jet25_isFromH"] = {-0.1, 1.9 }; 
  _doubleVecs["Jet25_isFromTop"] = {-0.1, 1.9 }; 
  _doubleVecs["Jet25_matchId"] = {-25., 25. }; 
  _doubleVecs["Jet25_matchIndex"] = {-0.1, 9999. }; 
  _doubleVecs["Jet25_pt"] = {-0.1, 999. }; 
  _doubleVecs["Jet25_eta"] = {0, 9.9 }; 
  _doubleVecs["Jet25_phi"] = {-5., 5. }; 
  _doubleVecs["Jet25_energy"] = {-0.1, 999. }; 

  _doubleVecs["FakeLep_isFromB"] = {-0.1, 1.9 }; 
  _doubleVecs["FakeLep_isFromC"] = {-0.1, 1.9 }; 
  _doubleVecs["FakeLep_isFromH"] = {-0.1, 1.9 }; 
  _doubleVecs["FakeLep_isFromTop"] = {-0.1, 1.9 }; 
  _doubleVecs["FakeLep_matchId"] = {-25., 25. }; 
  _doubleVecs["FakeLep_PdgId"] = {-25., 25. }; 
  _doubleVecs["FakeLep_matchIndex"] = {-0.1, 9999. }; 
  _doubleVecs["FakeLep_pt"] = {-0.1, 999. }; 
  _doubleVecs["FakeLep_eta"] = {0, 9.9 }; 
  _doubleVecs["FakeLep_phi"] = {-5., 5. }; 
  _doubleVecs["FakeLep_energy"] = {-0.1, 999. }; 
  */

  _intVars["Jet_numbLoose"] = 10;
  _intVars["Bin2l"] = 10;
  _intVars["TTHLep_2L"] = 10;
  _intVars["TTHLep_2Ele"] = 10;
  _intVars["TTHLep_2Mu"] = 10;
  _intVars["TTHLep_MuEle"] = 10;
  _intVars["TTHLep_3L"] = 10;
  _intVars["Trig_1Ele"] = 10;
  _intVars["Trig_2Ele"] = 10;
  _intVars["Trig_3Ele"] = 10;
  _intVars["Trig_1Mu"] = 10;
  _intVars["Trig_1Mu1Ele"] = 10;
  _intVars["Trig_1Mu2Ele"] = 10;
  _intVars["Trig_2Mu"] = 10;
  _intVars["Trig_2Mu1Ele"] = 10;
  _intVars["Trig_3Mu"] = 10;
  _floatVars["SubCat2l"] = 20.;
    
  _floatVars["massL"] = 800.;
  _floatVars["massL_SFOS"] = 500.;
  _floatVars["mass_diele"] = 500.;
  
  _floatVars["metLD"] = 4.;
  _floatVars["mht"] = 500.;
  _floatVars["mhtT"] = 700.;
  _floatVars["mht_met"] = 1000.;
  _floatVars["mhtT_met"] = 1000.;
 
  _floatVars["ttbarBDT_2lss"] = -1.;
  _floatVars["ttvBDT_2lss"] = -1.;
  _floatVars["leadLep_jetdr"] = 4.;
  _floatVars["leadLep_corrpt"] = 500.;
  _floatVars["leadLep_jetcsv"] = 1.;
  _floatVars["leadLep_BDT"] = -1.;
  _floatVars["secondLep_jetdr"] = 4.;
  _floatVars["secondLep_corrpt"] = 400.;
  _floatVars["secondLep_jetcsv"] = 1.;
  _floatVars["secondLep_BDT"] = -1.;
  _floatVars["maxeta"] = 3.;
  _floatVars["Mt_metleadlep"] = 500.;
  _floatVars["massll"] = 600.;
  _floatVars["Sum2lCharge"] = -2.5;
  _floatVars["Dilep_bestMVA"] = -1.;
  _floatVars["Dilep_worseMVA"] = -1.;
  _floatVars["Dilep_pdgId"] = 5.;
  _floatVars["Dilep_htllv"] = 800.;
  _floatVars["Dilep_mtWmin"] = 250.;
  _floatVars["Dilep_nTight"] = 3.;
  _floatVars["leadJetCSV"] = 1.;
  _floatVars["secondJetCSV"] = 1.;
  _floatVars["thirdJetCSV"] = 1.;
  _floatVars["fourthJetCSV"] = 1.;
  _floatVars["HighestJetCSV"] = 1.;
  _floatVars["HtJet"] = 2000.;
  _floatVars["nLepFO"] = 5.;
  _floatVars["nLepTight"] = 5.;
  _floatVars["minMllAFAS"] = 800.;
  _floatVars["minMllAFOS"] = 400.;
  _floatVars["minMllSFOS"] = 400.;
  _floatVars["Hj1_BDT"] = -1.;
  _floatVars["leadLep_isMatchRightCharge"] = 2.;
  _floatVars["leadLep_mcMatchId"] = 100.;
  _floatVars["leadLep_isFromTop"] = 2.;
  _floatVars["leadLep_isFromH"] = 2.;
  _floatVars["leadLep_isFromB"] = 2.;
  _floatVars["leadLep_isFromC"] = 2.;
  _floatVars["leadLep_mcPromptGamma"] = 2.;
  _floatVars["leadLep_mcPromptFS"] = 2.;
  _floatVars["secondLep_isMatchRightCharge"] = 2.;
  _floatVars["secondLep_mcMatchId"] = 100.;
  _floatVars["secondLep_isFromTop"] = 2.;
  _floatVars["secondLep_isFromH"] = 2.;
  _floatVars["secondLep_isFromB"] = 2.;
  _floatVars["secondLep_isFromC"] = 2.;
  _floatVars["secondLep_mcPromptGamma"] = 2.;
  _floatVars["secondLep_mcPromptFS"] = 2.;

  
  _LongVars["nEvent"] = 999.;
  _floatVars["mu1_PFRelIso04"] = 999.;
  _floatVars["mu2_PFRelIso04"] = 999.;
  _floatVars["ele1_PFRelIso04"] = 999.;
  _floatVars["ele1_sigmaEtaEta"] = 999.;
  _floatVars["ele1_HoE"] = 999.;
  _floatVars["ele1_deltaEta"] = 999.;
  _floatVars["ele1_deltaPhi"] = 999.;
  _floatVars["ele1_OoEminusOoP"] = 999.;
  _floatVars["ele2_PFRelIso04"] = 999.;
  _floatVars["ele2_sigmaEtaEta"] = 999.;
  _floatVars["ele2_HoE"] = 999.;
  _floatVars["ele2_deltaEta"] = 999.;
  _floatVars["ele2_deltaPhi"] = 999.;
  _floatVars["ele2_OoEminusOoP"] = 999.;
  /*
  _boolVars["ele1_isChargeConsistent"] = true;
  _boolVars["ele1_passesConversionVeto"] = true;
  _boolVars["ele2_isfakeablesel"] = true;
  _boolVars["ele2_ismvasel"] = true;
  _boolVars["ele2_isChargeConsistent"] = true;
  _boolVars["ele2_passesConversionVeto"] = true;
  _boolVars["mu1_mediumID"] = true;
  _boolVars["mu1_isfakeablesel"] = true;
  _boolVars["mu1_ismvasel"] = true;
  _boolVars["mu2_mediumID"] = true;
  _boolVars["mu2_isfakeablesel"] = true;
  _boolVars["mu2_ismvasel"] = true;
  _boolVars["ele1_isfakeablesel"] = true;
  _boolVars["ele1_ismvasel"] = true;
  */
  _intVars["ele1_isChargeConsistent"] = 999;
  _intVars["ele1_passesConversionVeto"] = 999;
  _intVars["ele2_isfakeablesel"] = 999;
  _intVars["ele2_ismvasel"] = 999;
  _intVars["ele2_isChargeConsistent"] = 999;
  _intVars["ele2_passesConversionVeto"] = 999;
  _intVars["mu1_mediumID"] = 999;
  _intVars["mu1_isfakeablesel"] = 999;
  _intVars["mu1_ismvasel"] = 999;
  _intVars["mu2_mediumID"] = 999;
  _intVars["mu2_isfakeablesel"] = 999;
  _intVars["mu2_ismvasel"] = 999;
  _intVars["ele1_isfakeablesel"] = 999;
  _intVars["ele1_ismvasel"] = 999;
  _intVars["ls"] = 999.;
  _intVars["run"] = 999.;
  _intVars["n_presel_mu"] = 999.;
  _intVars["n_fakeablesel_mu"] = 999.;
  _intVars["n_mvasel_mu"] = 999.;
  _intVars["n_presel_ele"] = 999.;
  _intVars["n_fakeablesel_ele"] = 999.;
  _intVars["n_mvasel_ele"] = 999.;
  _intVars["n_presel_tau"] = 999.;
  _intVars["n_presel_jet"] = 999.;
  _intVars["mu1_charge"] = 999.;
  _intVars["mu1_jetNDauChargedMVASel"] = 999.;
  _intVars["mu2_charge"] = 999.;
  _intVars["mu2_jetNDauChargedMVASel"] = 999.;
  _intVars["ele1_charge"] = 999.;
  _intVars["ele1_jetNDauChargedMVASel"] = 999.;
  _intVars["ele1_nMissingHits"] = 999.;
  _intVars["ele2_charge"] = 999.;
  _intVars["ele2_jetNDauChargedMVASel"] = 999.;
  _intVars["ele2_nMissingHits"] = 999.;
  _intVars["tau1_charge"] = 999.;
  _intVars["tau1_decayModeFindingOldDMs"] = 999.;
  _intVars["tau1_decayModeFindingNewDMs"] = 999.;
  _intVars["tau1_byLooseCombinedIsolationDeltaBetaCorr3Hits"] = 999.;
  _intVars["tau1_byMediumCombinedIsolationDeltaBetaCorr3Hits"] = 999.;
  _intVars["tau1_byTightCombinedIsolationDeltaBetaCorr3Hits"] = 999.;
  _intVars["tau1_byLooseCombinedIsolationDeltaBetaCorr3HitsdR03"] = 999.;
  _intVars["tau1_byMediumCombinedIsolationDeltaBetaCorr3HitsdR03"] = 999.;
  _intVars["tau1_byTightCombinedIsolationDeltaBetaCorr3HitsdR03"] = 999.;
  _intVars["tau1_byLooseIsolationMVArun2v1DBdR03oldDMwLT"] = 999.;
  _floatVars["tau1_rawMVArun2v1DBdR03oldDMwLT"] = 999.;
  _intVars["tau1_byVLooseIsolationMVArun2v1DBdR03oldDMwLT"] = 999.;
  _intVars["tau1_byMediumIsolationMVArun2v1DBdR03oldDMwLT"] = 999.;
  _intVars["tau1_byTightIsolationMVArun2v1DBdR03oldDMwLT"] = 999.;
  _intVars["tau1_byVTightIsolationMVArun2v1DBdR03oldDMwLT"] = 999.;
  _intVars["tau2_charge"] = 999.;
  _intVars["tau2_decayModeFindingOldDMs"] = 999.;
  _intVars["tau2_decayModeFindingNewDMs"] = 999.;
  _intVars["tau2_byLooseCombinedIsolationDeltaBetaCorr3Hits"] = 999.;
  _intVars["tau2_byMediumCombinedIsolationDeltaBetaCorr3Hits"] = 999.;
  _intVars["tau2_byTightCombinedIsolationDeltaBetaCorr3Hits"] = 999.;
  _intVars["tau2_byLooseCombinedIsolationDeltaBetaCorr3HitsdR03"] = 999.;
  _intVars["tau2_byMediumCombinedIsolationDeltaBetaCorr3HitsdR03"] = 999.;
  _intVars["tau2_byTightCombinedIsolationDeltaBetaCorr3HitsdR03"] = 999.;
  _intVars["tau2_byLooseIsolationMVArun2v1DBdR03oldDMwLT"] = 999.;
  _floatVars["tau2_rawMVArun2v1DBdR03oldDMwLT"] = 999.;
  _intVars["tau2_byVLooseIsolationMVArun2v1DBdR03oldDMwLT"] = 999.;
  _intVars["tau2_byMediumIsolationMVArun2v1DBdR03oldDMwLT"] = 999.;
  _intVars["tau2_byTightIsolationMVArun2v1DBdR03oldDMwLT"] = 999.;
  _intVars["tau2_byVTightIsolationMVArun2v1DBdR03oldDMwLT"] = 999.;
  _floatVars["mu1_pt"] = 999.;
  _floatVars["mu1_conept"] = 999.;
  _floatVars["mu1_eta"] = 999.;
  _floatVars["mu1_phi"] = 999.;
  _floatVars["mu1_E"] = 999.;
  _floatVars["mu1_miniRelIso"] = 999.;
  _floatVars["mu1_miniIsoCharged"] = 999.;
  _floatVars["mu1_miniIsoNeutral"] = 999.;
  _floatVars["mu1_jetPtRel"] = 999.;
  _floatVars["mu1_jetPtRatio"] = 999.;
  _floatVars["mu1_jetCSV"] = 999.;
  _floatVars["mu1_sip3D"] = 999.;
  _floatVars["mu1_dxyAbs"] = 999.;
  _floatVars["mu1_dz"] = 999.;
  _floatVars["mu1_segmentCompatibility"] = 999.;
  _floatVars["mu1_leptonMVA"] = 999.;
  _floatVars["mu1_dpt_div_pt"] = 999.;
  _floatVars["mu2_pt"] = 999.;
  _floatVars["mu2_conept"] = 999.;
  _floatVars["mu2_eta"] = 999.;
  _floatVars["mu2_phi"] = 999.;
  _floatVars["mu2_E"] = 999.;
  _floatVars["mu2_miniRelIso"] = 999.;
  _floatVars["mu2_miniIsoCharged"] = 999.;
  _floatVars["mu2_miniIsoNeutral"] = 999.;
  _floatVars["mu2_jetPtRel"] = 999.;
  _floatVars["mu2_jetPtRatio"] = 999.;
  _floatVars["mu2_jetCSV"] = 999.;
  _floatVars["mu2_sip3D"] = 999.;
  _floatVars["mu2_dxyAbs"] = 999.;
  _floatVars["mu2_dz"] = 999.;
  _floatVars["mu2_segmentCompatibility"] = 999.;
  _floatVars["mu2_leptonMVA"] = 999.;
  _floatVars["mu2_dpt_div_pt"] = 999.;
  _floatVars["ele1_pt"] = 999.;
  _floatVars["ele1_conept"] = 999.;
  _floatVars["ele1_eta"] = 999.;
  _floatVars["ele1_phi"] = 999.;
  _floatVars["ele1_E"] = 999.;
  _floatVars["ele1_miniRelIso"] = 999.;
  _floatVars["ele1_miniIsoCharged"] = 999.;
  _floatVars["ele1_miniIsoNeutral"] = 999.;
  _floatVars["ele1_jetPtRel"] = 999.;
  _floatVars["ele1_jetPtRatio"] = 999.;
  _floatVars["ele1_jetCSV"] = 999.;
  _floatVars["ele1_sip3D"] = 999.;
  _floatVars["ele1_dxyAbs"] = 999.;
  _floatVars["ele1_dz"] = 999.;
  _floatVars["ele1_ntMVAeleID"] = 999.;
  _floatVars["ele1_leptonMVA"] = 999.;
  _floatVars["ele2_pt"] = 999.;
  _floatVars["ele2_conept"] = 999.;
  _floatVars["ele2_eta"] = 999.;
  _floatVars["ele2_phi"] = 999.;
  _floatVars["ele2_E"] = 999.;
  _floatVars["ele2_miniRelIso"] = 999.;
  _floatVars["ele2_miniIsoCharged"] = 999.;
  _floatVars["ele2_miniIsoNeutral"] = 999.;
  _floatVars["ele2_jetPtRel"] = 999.;
  _floatVars["ele2_jetPtRatio"] = 999.;
  _floatVars["ele2_jetCSV"] = 999.;
  _floatVars["ele2_sip3D"] = 999.;
  _floatVars["ele2_dxyAbs"] = 999.;
  _floatVars["ele2_dz"] = 999.;
  _floatVars["ele2_ntMVAeleID"] = 999.;
  _floatVars["ele2_leptonMVA"] = 999.;
  _floatVars["tau1_pt"] = 999.;
  _floatVars["tau1_eta"] = 999.;
  _floatVars["tau1_phi"] = 999.;
  _floatVars["tau1_E"] = 999.;
  _floatVars["tau1_dxy"] = 999.;
  _floatVars["tau1_dz"] = 999.;
  _floatVars["tau1_byCombinedIsolationDeltaBetaCorr3Hits"] = 999.;
  _floatVars["tau2_pt"] = 999.;
  _floatVars["tau2_eta"] = 999.;
  _floatVars["tau2_phi"] = 999.;
  _floatVars["tau2_E"] = 999.;
  _floatVars["tau2_dxy"] = 999.;
  _floatVars["tau2_dz"] = 999.;
  _floatVars["tau2_byCombinedIsolationDeltaBetaCorr3Hits"] = 999.;
  _floatVars["jet1_pt"] = 999.;
  _floatVars["jet1_eta"] = 999.;
  _floatVars["jet1_phi"] = 999.;
  _floatVars["jet1_E"] = 999.;
  _floatVars["jet1_CSV"] = 999.;
  _floatVars["jet2_pt"] = 999.;
  _floatVars["jet2_eta"] = 999.;
  _floatVars["jet2_phi"] = 999.;
  _floatVars["jet2_E"] = 999.;
  _floatVars["jet2_CSV"] = 999.;
  _floatVars["jet3_pt"] = 999.;
  _floatVars["jet3_eta"] = 999.;
  _floatVars["jet3_phi"] = 999.;
  _floatVars["jet3_E"] = 999.;
  _floatVars["jet3_CSV"] = 999.;
  _floatVars["jet4_pt"] = 999.;
  _floatVars["jet4_eta"] = 999.;
  _floatVars["jet4_phi"] = 999.;
  _floatVars["jet4_E"] = 999.;
  _floatVars["jet4_CSV"] = 999.;
  _floatVars["PFMET"] = 999.;
  _floatVars["PFMETphi"] = 999.;
  _floatVars["MHT"] = 999.;
  _floatVars["lep1_conePt"] = 999.;
  _floatVars["lep2_conePt"] = 999.;
  _floatVars["mindr_lep1_jet"] = 999.;
  _floatVars["mindr_lep2_jet"] = 999.;
  _floatVars["mT_lep1"] = 999.;
  _floatVars["avg_dr_jet"] = 999.;
  _floatVars["mvaOutput_2lss_ttV"] = 999.;
  _floatVars["mvaOutput_2lss_ttbar"] = 999.;
  _floatVars["lep3_conePt"] = 999.;
  _floatVars["mindr_lep3_jet"] = 999.;
  _floatVars["min_dr_lep_jet"] = 999.;
  _floatVars["dr_leps"] = 999.;
  _floatVars["max_lep_eta"] = 999.;
  _floatVars["mT_lep2"] = 999.;
  _floatVars["mbb"] = 999.;
  _floatVars["mbb_loose"] = 999.;
  _floatVars["Hj_tagger"] = 999.;
  _floatVars["HTT"] = 999.;
  _intVars["nBJetLoose"] = 999.;
  _intVars["nBJetMedium"] = 999.;
  
  SetDoHists(makeHistos);

}

void ttHVars::Clear(){
    looseLeptons.clear();
    looseMuons.clear();
    looseElectrons.clear();
    Taus.clear();
    fakeLeptons.clear();
    tightLeptons.clear();
    Jets.clear();
    FakeLep_isFromB.clear();
    FakeLep_isFromC.clear();
    FakeLep_isFromH.clear();
    FakeLep_isFromTop.clear();
    FakeLep_PdgId.clear();
    FakeLep_matchId.clear();
    FakeLep_matchIndex.clear();
    FakeLep_pt.clear();
    FakeLep_eta.clear();
    FakeLep_phi.clear();
    FakeLep_energy.clear();
    Jet25_isFromH.clear();
    Jet25_isFromTop.clear();
    Jet25_matchId.clear();
    Jet25_matchIndex.clear();
    Jet25_pt.clear();
    Jet25_eta.clear();
    Jet25_phi.clear();
    Jet25_energy.clear();
    Jet_numbLoose = -9999;
    Jet_numbMedium = -9999;
    ttbarBDT_2lss = -9999;
    ttvBDT_2lss = -9999;
    Bin2l = -9999;
    leadLep_jetdr = -9999;
    leadLep_corrpt = -9999;
    leadLep_jetcsv = -9999;
    leadLep_BDT = -9999;
    secondLep_jetdr = -9999;
    secondLep_corrpt = -9999;
    secondLep_jetcsv = -9999;
    secondLep_BDT = -9999;
    maxeta = -9999;
    Mt_metleadlep = -9999;
    SubCat2l = -9999;
    massll = -9999;
    Sum2lCharge = -9999;
    Dilep_bestMVA = -9999;
    Dilep_worseMVA = -9999;
    Dilep_pdgId = -9999;
    Dilep_htllv = -9999;
    Dilep_mtWmin = -9999;
    Dilep_nTight = -9999;
    leadJetCSV = -9999;
    secondJetCSV = -9999;
    thirdJetCSV = -9999;
    fourthJetCSV = -9999;
    HighestJetCSV = -9999;
    HtJet = -9999;
    nLepFO = -9999;
    nLepTight = -9999;
    minMllAFAS = -9999;
    minMllAFOS = -9999;
    minMllSFOS = -9999;
    Hj1_BDT = -9999;
    leadLep_isMatchRightCharge = -9999;
    leadLep_mcMatchId = -9999;
    leadLep_isFromTop = -9999;
    leadLep_isFromH = -9999;
    leadLep_isFromB = -9999;
    leadLep_isFromC = -9999;
    leadLep_mcPromptGamma = -9999;
    leadLep_mcPromptFS = -9999;
    secondLep_isMatchRightCharge = -9999;
    secondLep_mcMatchId = -9999;
    secondLep_isFromTop = -9999;
    secondLep_isFromH = -9999;
    secondLep_isFromB = -9999;
    secondLep_isFromC = -9999;
    secondLep_mcPromptGamma = -9999;
    secondLep_mcPromptFS = -9999;

    nEvent = -9999;
    mu1_mediumID = -9999;
    mu1_isfakeablesel = -9999;
    mu1_ismvasel = -9999;
    mu2_mediumID = -9999;
    mu2_isfakeablesel = -9999;
    mu2_ismvasel = -9999;
    ele1_isfakeablesel = -9999;
    ele1_ismvasel = -9999;
    mu1_PFRelIso04 = -9999;
    mu2_PFRelIso04 = -9999;
    ele1_PFRelIso04 = -9999;
    ele1_sigmaEtaEta = -9999;
    ele1_HoE = -9999;
    ele1_deltaEta = -9999;
    ele1_deltaPhi = -9999;
    ele1_OoEminusOoP = -9999;
    ele2_PFRelIso04 = -9999;
    ele2_sigmaEtaEta = -9999;
    ele2_HoE = -9999;
    ele2_deltaEta = -9999;
    ele2_deltaPhi = -9999;
    ele2_OoEminusOoP = -9999;
    ele1_isChargeConsistent = -9999;
    ele1_passesConversionVeto = -9999;
    ele2_isfakeablesel = -9999;
    ele2_ismvasel = -9999;
    ele2_isChargeConsistent = -9999;
    ele2_passesConversionVeto = -9999;
    ls = -9999;
    run = -9999;
    n_presel_mu = -9999;
    n_fakeablesel_mu = -9999;
    n_mvasel_mu = -9999;
    n_presel_ele = -9999;
    n_fakeablesel_ele = -9999;
    n_mvasel_ele = -9999;
    n_presel_tau = -9999;
    n_presel_jet = -9999;
    mu1_charge = -9999;
    mu1_jetNDauChargedMVASel = -9999;
    mu2_charge = -9999;
    mu2_jetNDauChargedMVASel = -9999;
    ele1_charge = -9999;
    ele1_jetNDauChargedMVASel = -9999;
    ele1_nMissingHits = -9999;
    ele2_charge = -9999;
    ele2_jetNDauChargedMVASel = -9999;
    ele2_nMissingHits = -9999;
    tau1_charge = -9999;
    tau1_decayModeFindingOldDMs = -9999;
    tau1_decayModeFindingNewDMs = -9999;
    tau1_byLooseCombinedIsolationDeltaBetaCorr3Hits = -9999;
    tau1_byMediumCombinedIsolationDeltaBetaCorr3Hits = -9999;
    tau1_byTightCombinedIsolationDeltaBetaCorr3Hits = -9999;
    tau1_byLooseCombinedIsolationDeltaBetaCorr3HitsdR03 = -9999;
    tau1_byMediumCombinedIsolationDeltaBetaCorr3HitsdR03 = -9999;
    tau1_byTightCombinedIsolationDeltaBetaCorr3HitsdR03 = -9999;
    tau1_byLooseIsolationMVArun2v1DBdR03oldDMwLT = -9999;
    tau1_rawMVArun2v1DBdR03oldDMwLT = -9999;
    tau1_byVLooseIsolationMVArun2v1DBdR03oldDMwLT = -9999;
    tau1_byMediumIsolationMVArun2v1DBdR03oldDMwLT = -9999;
    tau1_byTightIsolationMVArun2v1DBdR03oldDMwLT = -9999;
    tau1_byVTightIsolationMVArun2v1DBdR03oldDMwLT = -9999;
    tau2_charge = -9999;
    tau2_decayModeFindingOldDMs = -9999;
    tau2_decayModeFindingNewDMs = -9999;
    tau2_byLooseCombinedIsolationDeltaBetaCorr3Hits = -9999;
    tau2_byMediumCombinedIsolationDeltaBetaCorr3Hits = -9999;
    tau2_byTightCombinedIsolationDeltaBetaCorr3Hits = -9999;
    tau2_byLooseCombinedIsolationDeltaBetaCorr3HitsdR03 = -9999;
    tau2_byMediumCombinedIsolationDeltaBetaCorr3HitsdR03 = -9999;
    tau2_byTightCombinedIsolationDeltaBetaCorr3HitsdR03 = -9999;
    tau2_byLooseIsolationMVArun2v1DBdR03oldDMwLT = -9999;
    tau2_rawMVArun2v1DBdR03oldDMwLT = -9999;
    tau2_byVLooseIsolationMVArun2v1DBdR03oldDMwLT = -9999;
    tau2_byMediumIsolationMVArun2v1DBdR03oldDMwLT = -9999;
    tau2_byTightIsolationMVArun2v1DBdR03oldDMwLT = -9999;
    tau2_byVTightIsolationMVArun2v1DBdR03oldDMwLT = -9999;
    mu1_pt = -9999;
    mu1_conept = -9999;
    mu1_eta = -9999;
    mu1_phi = -9999;
    mu1_E = -9999;
    mu1_miniRelIso = -9999;
    mu1_miniIsoCharged = -9999;
    mu1_miniIsoNeutral = -9999;
    mu1_jetPtRel = -9999;
    mu1_jetPtRatio = -9999;
    mu1_jetCSV = -9999;
    mu1_sip3D = -9999;
    mu1_dxyAbs = -9999;
    mu1_dz = -9999;
    mu1_segmentCompatibility = -9999;
    mu1_leptonMVA = -9999;
    mu1_dpt_div_pt = -9999;
    mu2_pt = -9999;
    mu2_conept = -9999;
    mu2_eta = -9999;
    mu2_phi = -9999;
    mu2_E = -9999;
    mu2_miniRelIso = -9999;
    mu2_miniIsoCharged = -9999;
    mu2_miniIsoNeutral = -9999;
    mu2_jetPtRel = -9999;
    mu2_jetPtRatio = -9999;
    mu2_jetCSV = -9999;
    mu2_sip3D = -9999;
    mu2_dxyAbs = -9999;
    mu2_dz = -9999;
    mu2_segmentCompatibility = -9999;
    mu2_leptonMVA = -9999;
    mu2_dpt_div_pt = -9999;
    ele1_pt = -9999;
    ele1_conept = -9999;
    ele1_eta = -9999;
    ele1_phi = -9999;
    ele1_E = -9999;
    ele1_miniRelIso = -9999;
    ele1_miniIsoCharged = -9999;
    ele1_miniIsoNeutral = -9999;
    ele1_jetPtRel = -9999;
    ele1_jetPtRatio = -9999;
    ele1_jetCSV = -9999;
    ele1_sip3D = -9999;
    ele1_dxyAbs = -9999;
    ele1_dz = -9999;
    ele1_ntMVAeleID = -9999;
    ele1_leptonMVA = -9999;
    ele2_pt = -9999;
    ele2_conept = -9999;
    ele2_eta = -9999;
    ele2_phi = -9999;
    ele2_E = -9999;
    ele2_miniRelIso = -9999;
    ele2_miniIsoCharged = -9999;
    ele2_miniIsoNeutral = -9999;
    ele2_jetPtRel = -9999;
    ele2_jetPtRatio = -9999;
    ele2_jetCSV = -9999;
    ele2_sip3D = -9999;
    ele2_dxyAbs = -9999;
    ele2_dz = -9999;
    ele2_ntMVAeleID = -9999;
    ele2_leptonMVA = -9999;
    tau1_pt = -9999;
    tau1_eta = -9999;
    tau1_phi = -9999;
    tau1_E = -9999;
    tau1_dxy = -9999;
    tau1_dz = -9999;
    tau1_byCombinedIsolationDeltaBetaCorr3Hits = -9999;
    tau2_pt = -9999;
    tau2_eta = -9999;
    tau2_phi = -9999;
    tau2_E = -9999;
    tau2_dxy = -9999;
    tau2_dz = -9999;
    tau2_byCombinedIsolationDeltaBetaCorr3Hits = -9999;
    jet1_pt = -9999;
    jet1_eta = -9999;
    jet1_phi = -9999;
    jet1_E = -9999;
    jet1_CSV = -9999;
    jet2_pt = -9999;
    jet2_eta = -9999;
    jet2_phi = -9999;
    jet2_E = -9999;
    jet2_CSV = -9999;
    jet3_pt = -9999;
    jet3_eta = -9999;
    jet3_phi = -9999;
    jet3_E = -9999;
    jet3_CSV = -9999;
    jet4_pt = -9999;
    jet4_eta = -9999;
    jet4_phi = -9999;
    jet4_E = -9999;
    jet4_CSV = -9999;
    PFMET = -9999;
    PFMETphi = -9999;
    MHT = -9999;
    metLD = -9999;
    lep1_conePt = -9999;
    lep2_conePt = -9999;
    mindr_lep1_jet = -9999;
    mindr_lep2_jet = -9999;
    mT_lep1 = -9999;
    avg_dr_jet = -9999;
    mvaOutput_2lss_ttV = -9999;
    mvaOutput_2lss_ttbar = -9999;
    lep3_conePt = -9999;
    mindr_lep3_jet = -9999;
    min_dr_lep_jet = -9999;
    dr_leps = -9999;
    max_lep_eta = -9999;
    mT_lep2 = -9999;
    mbb = -9999;
    mbb_loose = -9999;
    Hj_tagger = -9999;
    HTT = -9999;
    nBJetLoose = -9999;
    nBJetMedium = -9999;
}

void ttHVars::FillBranches(EventContainer * evtObj){

    //Initialise vectors;
    Clear();
    
    looseLeptons.assign(evtObj -> looseLeptons.begin(), evtObj -> looseLeptons.end());
    fakeLeptons.assign(evtObj -> fakeLeptons.begin(), evtObj -> fakeLeptons.end());
    tightLeptons.assign(evtObj -> tightLeptons.begin(), evtObj -> tightLeptons.end());
    Taus.assign(evtObj -> looseTaus.begin(), evtObj -> looseTaus.end());
  
   int n_looseMu =0; 
   int n_fakeMu =0; 
   int n_tightMu =0; 
   int n_looseEle =0; 
   int n_fakeEle =0; 
   int n_tightEle =0;
   
   for(uint lep_en;lep_en<looseLeptons.size();lep_en++){
    Lepton curr_lep = looseLeptons.at(lep_en);
    if(TMath::Abs(curr_lep.pdgId())==13){
        looseMuons.push_back(curr_lep);
        n_looseMu++;
        if(curr_lep.isFake())n_fakeMu++;
        if(curr_lep.isMVASel())n_tightMu++;
    }else{
        looseElectrons.push_back(curr_lep);
        n_looseEle++;
        if(curr_lep.isFake())n_fakeEle++;
        if(curr_lep.isMVASel())n_tightEle++;
    }
   }

    
    Jets.assign(evtObj -> jets.begin(), evtObj -> jets.end());
    
    FakeLep_isFromB.assign(evtObj -> FakeLep_isFromB.begin(), evtObj -> FakeLep_isFromB.end());
    FakeLep_isFromC.assign(evtObj -> FakeLep_isFromC.begin(), evtObj -> FakeLep_isFromC.end());
    FakeLep_isFromH.assign(evtObj -> FakeLep_isFromH.begin(), evtObj -> FakeLep_isFromH.end());
    FakeLep_isFromTop.assign(evtObj -> FakeLep_isFromTop.begin(), evtObj -> FakeLep_isFromTop.end());
    FakeLep_matchId.assign(evtObj -> FakeLep_matchId.begin(), evtObj -> FakeLep_matchId.end());
    FakeLep_matchIndex.assign(evtObj -> FakeLep_matchIndex.begin(), evtObj -> FakeLep_matchIndex.end());
    FakeLep_pt.assign(evtObj -> FakeLep_pt.begin(), evtObj -> FakeLep_pt.end());
    FakeLep_eta.assign(evtObj -> FakeLep_eta.begin(), evtObj -> FakeLep_eta.end());
    FakeLep_phi.assign(evtObj -> FakeLep_phi.begin(), evtObj -> FakeLep_phi.end());
    FakeLep_energy.assign(evtObj -> FakeLep_energy.begin(), evtObj -> FakeLep_energy.end());
    FakeLep_PdgId.assign(evtObj -> FakeLep_PdgId.begin(), evtObj -> FakeLep_PdgId.end());
    
    Jet25_isFromH.assign(evtObj -> Jet25_isFromH.begin(), evtObj -> Jet25_isFromH.end());
    Jet25_isFromTop.assign(evtObj -> Jet25_isFromTop.begin(), evtObj -> Jet25_isFromTop.end());
    Jet25_matchId.assign(evtObj -> Jet25_matchId.begin(), evtObj -> Jet25_matchId.end());
    Jet25_matchIndex.assign(evtObj -> Jet25_matchIndex.begin(), evtObj -> Jet25_matchIndex.end());
    Jet25_pt.assign(evtObj -> Jet25_pt.begin(), evtObj -> Jet25_pt.end());
    Jet25_eta.assign(evtObj -> Jet25_eta.begin(), evtObj -> Jet25_eta.end());
    Jet25_phi.assign(evtObj -> Jet25_phi.begin(), evtObj -> Jet25_phi.end());
    Jet25_energy.assign(evtObj -> Jet25_energy.begin(), evtObj -> Jet25_energy.end());
    Cal_event_variables(evtObj);
   
   Lepton FirstMuon, SecondMuon, FirstElectron, SecondElectron;
   Tau FirstTau, SecondTau; 
   Jet FirstJet, SecondJet, ThirdJet, FourthJet; 
   if(looseMuons.size()>=1){
        FirstMuon = looseMuons.at(0);
        if(looseMuons.size()>=2) SecondMuon = looseMuons.at(1);
   }
   if(looseElectrons.size()>=1){
        FirstElectron = looseElectrons.at(0);
        if(looseElectrons.size()>=2) SecondElectron = looseElectrons.at(1);
   }
   if(Taus.size()>=1){
        FirstTau = Taus.at(0);
        if(Taus.size()>=2) SecondTau = Taus.at(1);
   }
   if(Jets.size()>=1){
        FirstJet = Jets.at(0);
        if(Jets.size()>=2) SecondJet = Jets.at(1);
        if(Jets.size()>=3) ThirdJet = Jets.at(2);
        if(Jets.size()>=4) FourthJet = Jets.at(3);
   }
   
    // Fill the variables in event container

    // Fill the branches
    /* 
    _doubleVecs["FakeLep_isFromB"] = FakeLep_isFromB; 
    _doubleVecs["FakeLep_isFromC"] = FakeLep_isFromC; 
    _doubleVecs["FakeLep_isFromH"] = FakeLep_isFromH; 
    _doubleVecs["FakeLep_isFromTop"] = FakeLep_isFromTop; 
    _doubleVecs["FakeLep_PdgId"] = FakeLep_PdgId; 
    _doubleVecs["FakeLep_matchId"] = FakeLep_matchId; 
    _doubleVecs["FakeLep_matchIndex"] = FakeLep_matchIndex; 
    _doubleVecs["FakeLep_pt"] = FakeLep_pt; 
    _doubleVecs["FakeLep_eta"] = FakeLep_eta; 
    _doubleVecs["FakeLep_phi"] = FakeLep_phi; 
    _doubleVecs["FakeLep_energy"] = FakeLep_energy; 
    
    _doubleVecs["Jet25_isFromH"] = Jet25_isFromH; 
    _doubleVecs["Jet25_isFromTop"] = Jet25_isFromTop; 
    _doubleVecs["Jet25_matchId"] = Jet25_matchId; 
    _doubleVecs["Jet25_matchIndex"] = Jet25_matchIndex; 
    _doubleVecs["Jet25_pt"] = Jet25_pt; 
    _doubleVecs["Jet25_eta"] = Jet25_eta; 
    _doubleVecs["Jet25_phi"] = Jet25_phi; 
    _doubleVecs["Jet25_energy"] = Jet25_energy; 
    */

    _floatVars["massL"] = evtObj->massL;
    _floatVars["massL_SFOS"] = evtObj->massL_SFOS;
    _floatVars["mass_diele"] = evtObj->mass_diele;
  
    _floatVars["metLD"] = evtObj->metLD;
    _floatVars["mht"] = evtObj->mht;
    _floatVars["mhtT"] = evtObj->mhtT;
    _floatVars["mht_met"] = evtObj->mht_met;
    _floatVars["mhtT_met"] = evtObj->mhtT_met;
     
    _intVars["Jet_numbLoose"] = Jet_numbLoose;
    _intVars["Bin2l"] = Bin2l;
    _intVars["TTHLep_2L"] = evtObj->TTHLep_2L;
    _intVars["TTHLep_2Ele"] = evtObj->TTHLep_2Ele;
    _intVars["TTHLep_2Mu"] = evtObj->TTHLep_2Mu;
    _intVars["TTHLep_MuEle"] = evtObj->TTHLep_MuEle;
    _intVars["TTHLep_3L"] = evtObj->TTHLep_3L;
    _intVars["Trig_1Ele"] = evtObj->Trig_1Ele;
    _intVars["Trig_2Ele"] = evtObj->Trig_2Ele;
    _intVars["Trig_3Ele"] = evtObj->Trig_3Ele;
    _intVars["Trig_1Mu"] = evtObj->Trig_1Mu;
    _intVars["Trig_1Mu1Ele"] = evtObj->Trig_1Mu1Ele;
    _intVars["Trig_1Mu2Ele"] = evtObj->Trig_1Mu2Ele;
    _intVars["Trig_2Mu"] = evtObj->Trig_2Mu;
    _intVars["Trig_2Mu1Ele"] = evtObj->Trig_2Mu1Ele;
    _intVars["Trig_3Mu"] = evtObj->Trig_3Mu;
    
    _floatVars["ttbarBDT_2lss"] = ttbarBDT_2lss;
    _floatVars["ttvBDT_2lss"] = ttvBDT_2lss;
    _floatVars["leadLep_jetdr"] = leadLep_jetdr;
    _floatVars["leadLep_corrpt"] = leadLep_corrpt;
    _floatVars["leadLep_jetcsv"] = leadLep_jetcsv;
    _floatVars["leadLep_BDT"] = leadLep_BDT;
    _floatVars["secondLep_jetdr"] = secondLep_jetdr;
    _floatVars["secondLep_corrpt"] = secondLep_corrpt;
    _floatVars["secondLep_jetcsv"] = secondLep_jetcsv;
    _floatVars["secondLep_BDT"] = secondLep_BDT;
    _floatVars["maxeta"] = maxeta;
    _floatVars["Mt_metleadlep"] = Mt_metleadlep;
    _floatVars["SubCat2l"] = SubCat2l;
    _floatVars["massll"] = massll;
    _floatVars["Sum2lCharge"] = Sum2lCharge;
    _floatVars["Dilep_bestMVA"] = Dilep_bestMVA;
    _floatVars["Dilep_worseMVA"] = Dilep_worseMVA;
    _floatVars["Dilep_pdgId"] = Dilep_pdgId;
    _floatVars["Dilep_htllv"] = Dilep_htllv;
    _floatVars["Dilep_mtWmin"] = Dilep_mtWmin;
    _floatVars["Dilep_nTight"] = Dilep_nTight;
    _floatVars["leadJetCSV"] = leadJetCSV;
    _floatVars["secondJetCSV"] = secondJetCSV;
    _floatVars["thirdJetCSV"] = thirdJetCSV;
    _floatVars["fourthJetCSV"] = fourthJetCSV;
    _floatVars["HighestJetCSV"] = HighestJetCSV;
    _floatVars["HtJet"] = HtJet;
    _floatVars["nLepFO"] = nLepFO;
    _floatVars["nLepTight"] = nLepTight;
    _floatVars["minMllAFAS"] = minMllAFAS;
    _floatVars["minMllAFOS"] = minMllAFOS;
    _floatVars["minMllSFOS"] = minMllSFOS;
    _floatVars["Hj1_BDT"] = Hj1_BDT;
  
    _floatVars["leadLep_isMatchRightCharge"] = leadLep_isMatchRightCharge;
    _floatVars["leadLep_mcMatchId"] = leadLep_mcMatchId;
    _floatVars["leadLep_isFromTop"] = leadLep_isFromTop;
    _floatVars["leadLep_isFromH"] = leadLep_isFromH;
    _floatVars["leadLep_isFromB"] = leadLep_isFromB;
    _floatVars["leadLep_isFromC"] = leadLep_isFromC;
    _floatVars["leadLep_mcPromptGamma"] = leadLep_mcPromptGamma;
    _floatVars["leadLep_mcPromptFS"] = leadLep_mcPromptFS;
    _floatVars["secondLep_isMatchRightCharge"] = secondLep_isMatchRightCharge;
    _floatVars["secondLep_mcMatchId"] = secondLep_mcMatchId;
    _floatVars["secondLep_isFromTop"] = secondLep_isFromTop;
    _floatVars["secondLep_isFromH"] = secondLep_isFromH;
    _floatVars["secondLep_isFromB"] = secondLep_isFromB;
    _floatVars["secondLep_isFromC"] = secondLep_isFromC;
    _floatVars["secondLep_mcPromptGamma"] = secondLep_mcPromptGamma;
    _floatVars["secondLep_mcPromptFS"] = secondLep_mcPromptFS;
  
    // calculate variables
    nEvent = evtObj->eventNumber;
    ls = evtObj-> lumiBlock;
    run = evtObj->runNumber;
    n_presel_mu = n_looseMu;
    n_fakeablesel_mu = n_fakeMu;
    n_mvasel_mu = n_tightMu;
    n_presel_ele = n_looseEle;
    n_fakeablesel_ele = n_fakeEle;
    n_mvasel_ele = n_tightEle;
    n_presel_tau = Taus.size();
    n_presel_jet = Jets.size();
    if(looseMuons.size()>=1){
        mu1_pt = FirstMuon.Pt();
        mu1_conept = FirstMuon.conept();
        mu1_eta = FirstMuon.Eta();
        mu1_phi = FirstMuon.Phi();
        mu1_E = FirstMuon.E();
        mu1_PFRelIso04 = FirstMuon.relIsoR04();
        mu1_miniRelIso = FirstMuon.miniIsoRel();
        mu1_miniIsoCharged = FirstMuon.miniIsoCh();
        mu1_miniIsoNeutral = FirstMuon.miniIsoPUsub();
        mu1_jetPtRel = FirstMuon.ptrel();
        mu1_jetPtRatio = FirstMuon.jetptratioV2();
        mu1_jetCSV = FirstMuon.jetcsv();
        mu1_sip3D = FirstMuon.IP3Dsig();
        mu1_dxyAbs = TMath::Abs(FirstMuon.dxy());
        mu1_dz = FirstMuon.dz();
        mu1_segmentCompatibility = FirstMuon.segmentCompatibility();
        mu1_leptonMVA = FirstMuon.BDT();
        mu1_charge = FirstMuon.charge();
        mu1_jetNDauChargedMVASel = FirstMuon.lepjetchtrks() ;
        mu1_mediumID = FirstMuon.passMediumId();
        mu1_isfakeablesel = FirstMuon.isFake();
        mu1_ismvasel = FirstMuon.isMVASel();
        mu1_dpt_div_pt = -9999;
    }
    if(looseMuons.size()>=2){
        mu2_pt = SecondMuon.Pt();
        mu2_conept = SecondMuon.conept();
        mu2_eta = SecondMuon.Eta();
        mu2_phi = SecondMuon.Phi();
        mu2_E = SecondMuon.E();
        mu2_PFRelIso04 = SecondMuon.relIsoR04();
        mu2_miniRelIso = SecondMuon.miniIsoRel();
        mu2_miniIsoCharged = SecondMuon.miniIsoCh();
        mu2_miniIsoNeutral = SecondMuon.miniIsoPUsub();
        mu2_jetPtRel = SecondMuon.ptrel();
        mu2_jetPtRatio = SecondMuon.jetptratioV2();
        mu2_jetCSV = SecondMuon.jetcsv();
        mu2_sip3D = SecondMuon.IP3Dsig();
        mu2_dxyAbs = TMath::Abs(SecondMuon.dxy());
        mu2_dz = SecondMuon.dz();
        mu2_segmentCompatibility = SecondMuon.segmentCompatibility();
        mu2_leptonMVA = SecondMuon.BDT();
        mu2_charge = SecondMuon.charge();
        mu2_jetNDauChargedMVASel = SecondMuon.lepjetchtrks();
        mu2_mediumID = SecondMuon.passMediumId();
        mu2_isfakeablesel = SecondMuon.isFake();
        mu2_ismvasel = SecondMuon.isMVASel();
        mu2_dpt_div_pt = -9999;
    }
    ele2_PFRelIso04 = -9999;
    ele2_sigmaEtaEta = -9999;
    ele2_HoE = -9999;
    ele2_deltaEta = -9999;
    ele2_deltaPhi = -9999;
    ele2_OoEminusOoP = -9999;
    if(looseElectrons.size()>=1){
        ele1_pt = FirstElectron.Pt();
        ele1_conept = FirstElectron.conept();
        ele1_eta = FirstElectron.Eta();
        ele1_phi = FirstElectron.Phi();
        ele1_E = FirstElectron.E();
        ele1_miniRelIso = FirstElectron.miniIsoRel();
        ele1_miniIsoCharged = FirstElectron.miniIsoCh();
        ele1_miniIsoNeutral = FirstElectron.miniIsoPUsub();
        ele1_jetPtRel = FirstElectron.ptrel();
        ele1_jetPtRatio = FirstElectron.jetptratioV2();
        ele1_jetCSV = FirstElectron.jetcsv();
        ele1_sip3D = FirstElectron.IP3Dsig();
        ele1_dxyAbs = TMath::Abs(FirstElectron.dxy());
        ele1_dz = FirstElectron.dz();
        ele1_ntMVAeleID = FirstElectron.ntMVAeleID();
        ele1_leptonMVA = FirstElectron.BDT();
        ele1_charge = FirstElectron.charge();
        ele1_jetNDauChargedMVASel = FirstElectron.lepjetchtrks();
        ele1_nMissingHits = FirstElectron.expectedMissingInnerHits();
        ele1_isfakeablesel = FirstElectron.isFake();
        ele1_ismvasel = FirstElectron.isMVASel();
        ele1_isChargeConsistent = FirstElectron.passTightCharge();
        ele1_passesConversionVeto = FirstElectron.passConversionVeto();
        ele1_PFRelIso04 = FirstElectron.relIsoRhoEA();
        ele1_sigmaEtaEta = FirstElectron.full5x5_sigmaIetaIeta();
        ele1_HoE = FirstElectron.hOverE();
        ele1_deltaEta = FirstElectron.dEtaIn();
        ele1_deltaPhi = FirstElectron.dPhiIn();
        ele1_OoEminusOoP = FirstElectron.ooEmooP();
    }
    if(looseElectrons.size()>=2){
        ele2_pt = SecondElectron.Pt();
        ele2_conept = SecondElectron.conept();
        ele2_eta = SecondElectron.Eta();
        ele2_phi = SecondElectron.Phi();
        ele2_E = SecondElectron.E();
        ele2_miniRelIso = SecondElectron.miniIsoRel();
        ele2_miniIsoCharged = SecondElectron.miniIsoCh();
        ele2_miniIsoNeutral = SecondElectron.miniIsoPUsub();
        ele2_jetPtRel = SecondElectron.ptrel();
        ele2_jetPtRatio = SecondElectron.jetptratioV2();
        ele2_jetCSV = SecondElectron.jetcsv();
        ele2_sip3D = SecondElectron.IP3Dsig();
        ele2_dxyAbs = TMath::Abs(SecondElectron.dxy());
        ele2_dz = SecondElectron.dz();
        ele2_ntMVAeleID = SecondElectron.ntMVAeleID();
        ele2_leptonMVA = SecondElectron.BDT();
        ele2_charge = SecondElectron.charge();
        ele2_jetNDauChargedMVASel = SecondElectron.lepjetchtrks();
        ele2_nMissingHits = SecondElectron.expectedMissingInnerHits();
        ele2_isfakeablesel = SecondElectron.isFake();
        ele2_ismvasel = SecondElectron.isMVASel();
        ele2_isChargeConsistent =SecondElectron.passTightCharge() ;
        ele2_passesConversionVeto = SecondElectron.passConversionVeto();
        ele2_PFRelIso04 = SecondElectron.relIsoRhoEA();
        ele2_sigmaEtaEta = SecondElectron.full5x5_sigmaIetaIeta();
        ele2_HoE = SecondElectron.hOverE();
        ele2_deltaEta = SecondElectron.dEtaIn();
        ele2_deltaPhi = SecondElectron.dPhiIn();
        ele2_OoEminusOoP = SecondElectron.ooEmooP();
    }
    if(Taus.size()>=1){
        tau1_pt = FirstTau.Pt();
        tau1_eta = FirstTau.Eta();
        tau1_phi = FirstTau.Phi();
        tau1_E = FirstTau.E();
        tau1_dxy = FirstTau.dxy();
        tau1_dz = FirstTau.dz();
        tau1_byCombinedIsolationDeltaBetaCorr3Hits = -9999;
        tau1_charge = FirstTau.charge();
        tau1_decayModeFindingOldDMs = FirstTau.decayModeFinding();
        tau1_decayModeFindingNewDMs = -9999;
        tau1_byLooseCombinedIsolationDeltaBetaCorr3Hits = -9999;
        tau1_byMediumCombinedIsolationDeltaBetaCorr3Hits = -9999;
        tau1_byTightCombinedIsolationDeltaBetaCorr3Hits = -9999;
        tau1_byLooseCombinedIsolationDeltaBetaCorr3HitsdR03 = -9999;
        tau1_byMediumCombinedIsolationDeltaBetaCorr3HitsdR03 = -9999;
        tau1_byTightCombinedIsolationDeltaBetaCorr3HitsdR03 = -9999;
        tau1_rawMVArun2v1DBdR03oldDMwLT = FirstTau.rawMVA();
        tau1_byLooseIsolationMVArun2v1DBdR03oldDMwLT = FirstTau.isLoose();
        tau1_byVLooseIsolationMVArun2v1DBdR03oldDMwLT = FirstTau.isVLoose();
        tau1_byMediumIsolationMVArun2v1DBdR03oldDMwLT = -9999;
        tau1_byTightIsolationMVArun2v1DBdR03oldDMwLT = -9999;
        tau1_byVTightIsolationMVArun2v1DBdR03oldDMwLT = -9999;
    }
    if(Taus.size()>=2){
        tau2_pt = SecondTau.Pt();
        tau2_eta = SecondTau.Eta();
        tau2_phi = SecondTau.Phi();
        tau2_E = SecondTau.E();
        tau2_dxy = SecondTau.dxy();
        tau2_dz = SecondTau.dz();
        tau2_byCombinedIsolationDeltaBetaCorr3Hits = -9999;
        tau2_charge = SecondTau.charge();
        tau2_decayModeFindingOldDMs = SecondTau.decayModeFinding();
        tau2_decayModeFindingNewDMs = -9999;
        tau2_byLooseCombinedIsolationDeltaBetaCorr3Hits = -9999;
        tau2_byMediumCombinedIsolationDeltaBetaCorr3Hits = -9999;
        tau2_byTightCombinedIsolationDeltaBetaCorr3Hits = -9999;
        tau2_byLooseCombinedIsolationDeltaBetaCorr3HitsdR03 = -9999;
        tau2_byMediumCombinedIsolationDeltaBetaCorr3HitsdR03 = -9999;
        tau2_byTightCombinedIsolationDeltaBetaCorr3HitsdR03 = -9999;
        tau2_byLooseIsolationMVArun2v1DBdR03oldDMwLT = SecondTau.isLoose();
        tau2_rawMVArun2v1DBdR03oldDMwLT = SecondTau.rawMVA();
        tau2_byVLooseIsolationMVArun2v1DBdR03oldDMwLT = SecondTau.isVLoose();
        tau2_byMediumIsolationMVArun2v1DBdR03oldDMwLT = -9999;
        tau2_byTightIsolationMVArun2v1DBdR03oldDMwLT = -9999;
        tau2_byVTightIsolationMVArun2v1DBdR03oldDMwLT = -9999;
    }
    if(Jets.size()>=1){
        jet1_pt = FirstJet.Pt();
        jet1_eta = FirstJet.Eta();
        jet1_phi = FirstJet.Phi();
        jet1_E = FirstJet.E();
        jet1_CSV = FirstJet.bDiscriminator();
    }
    if(Jets.size()>=2){
        jet2_pt = SecondJet.Pt();
        jet2_eta = SecondJet.Eta();
        jet2_phi = SecondJet.Phi();
        jet2_E = SecondJet.E();
        jet2_CSV = SecondJet.bDiscriminator();
    }
    if(Jets.size()>=3){
        jet3_pt = ThirdJet.Pt();
        jet3_eta = ThirdJet.Eta();
        jet3_phi = ThirdJet.Phi();
        jet3_E = ThirdJet.E();
        jet3_CSV = ThirdJet.bDiscriminator();
    }
    if(Jets.size()>=4){
        jet4_pt = FourthJet.Pt();
        jet4_eta = FourthJet.Eta();
        jet4_phi = FourthJet.Phi();
        jet4_E = FourthJet.E();
        jet4_CSV = FourthJet.bDiscriminator();
    }
    PFMET = evtObj->missingEt;
    PFMETphi = evtObj->missingPhi;
    MHT = evtObj->mht;
    lep1_conePt = leadLep_corrpt;
    lep2_conePt = secondLep_corrpt;
    lep3_conePt = -9999;
    mindr_lep1_jet = leadLep_jetdr;
    mindr_lep2_jet = secondLep_jetdr;
    mindr_lep3_jet = -9999;
    dr_leps = -9999;
    mT_lep1 = Mt_metleadlep;
    mT_lep2 = -9999;
    max_lep_eta = maxeta;
    min_dr_lep_jet = -9999;
    mbb = -9999;
    mbb_loose = -9999;
    Hj_tagger = Hj1_BDT;
    HTT = evtObj->HadTop_BDT;
    nBJetLoose = Jet_numbLoose;
    nBJetMedium = Jet_numbMedium;
    avg_dr_jet = -9999;
    mvaOutput_2lss_ttV = ttvBDT_2lss;
    mvaOutput_2lss_ttbar = ttbarBDT_2lss;


  //save variables
  _LongVars["nEvent"] = nEvent;
  _intVars["mu1_mediumID"] = mu1_mediumID;
  _intVars["mu1_isfakeablesel"] = mu1_isfakeablesel;
  _intVars["mu1_ismvasel"] = mu1_ismvasel;
  _intVars["mu2_mediumID"] = mu2_mediumID;
  _intVars["mu2_isfakeablesel"] = mu2_isfakeablesel;
  _intVars["mu2_ismvasel"] = mu2_ismvasel;
  _intVars["ele1_isfakeablesel"] = ele1_isfakeablesel;
  _intVars["ele1_ismvasel"] = ele1_ismvasel;
  _floatVars["mu1_PFRelIso04"] = mu1_PFRelIso04;
  _floatVars["mu2_PFRelIso04"] = mu2_PFRelIso04;
  _floatVars["ele1_PFRelIso04"] = ele1_PFRelIso04;
  _floatVars["ele1_sigmaEtaEta"] = ele1_sigmaEtaEta;
  _floatVars["ele1_HoE"] = ele1_HoE;
  _floatVars["ele1_deltaEta"] = ele1_deltaEta;
  _floatVars["ele1_deltaPhi"] = ele1_deltaPhi;
  _floatVars["ele1_OoEminusOoP"] = ele1_OoEminusOoP;
  _floatVars["ele2_PFRelIso04"] = ele2_PFRelIso04;
  _floatVars["ele2_sigmaEtaEta"] = ele2_sigmaEtaEta;
  _floatVars["ele2_HoE"] = ele2_HoE;
  _floatVars["ele2_deltaEta"] = ele2_deltaEta;
  _floatVars["ele2_deltaPhi"] = ele2_deltaPhi;
  _floatVars["ele2_OoEminusOoP"] = ele2_OoEminusOoP;
  _intVars["ele1_isChargeConsistent"] = ele1_isChargeConsistent;
  _intVars["ele1_passesConversionVeto"] = ele1_passesConversionVeto;
  _intVars["ele2_isfakeablesel"] = ele2_isfakeablesel;
  _intVars["ele2_ismvasel"] = ele2_ismvasel;
  _intVars["ele2_isChargeConsistent"] = ele2_isChargeConsistent;
  _intVars["ele2_passesConversionVeto"] = ele2_passesConversionVeto;
  _intVars["ls"] = ls;
  _intVars["run"] = run;
  _intVars["n_presel_mu"] = n_presel_mu;
  _intVars["n_fakeablesel_mu"] = n_fakeablesel_mu;
  _intVars["n_mvasel_mu"] = n_mvasel_mu;
  _intVars["n_presel_ele"] = n_presel_ele;
  _intVars["n_fakeablesel_ele"] = n_fakeablesel_ele;
  _intVars["n_mvasel_ele"] = n_mvasel_ele;
  _intVars["n_presel_tau"] = n_presel_tau;
  _intVars["n_presel_jet"] = n_presel_jet;
  _intVars["mu1_charge"] = mu1_charge;
  _intVars["mu1_jetNDauChargedMVASel"] = mu1_jetNDauChargedMVASel;
  _intVars["mu2_charge"] = mu2_charge;
  _intVars["mu2_jetNDauChargedMVASel"] = mu2_jetNDauChargedMVASel;
  _intVars["ele1_charge"] = ele1_charge;
  _intVars["ele1_jetNDauChargedMVASel"] = ele1_jetNDauChargedMVASel;
  _intVars["ele1_nMissingHits"] = ele1_nMissingHits;
  _intVars["ele2_charge"] = ele2_charge;
  _intVars["ele2_jetNDauChargedMVASel"] = ele2_jetNDauChargedMVASel;
  _intVars["ele2_nMissingHits"] = ele2_nMissingHits;
  _intVars["tau1_charge"] = tau1_charge;
  _intVars["tau1_decayModeFindingOldDMs"] = tau1_decayModeFindingOldDMs;
  _intVars["tau1_decayModeFindingNewDMs"] = tau1_decayModeFindingNewDMs;
  _intVars["tau1_byLooseCombinedIsolationDeltaBetaCorr3Hits"] = tau1_byLooseCombinedIsolationDeltaBetaCorr3Hits;
  _intVars["tau1_byMediumCombinedIsolationDeltaBetaCorr3Hits"] = tau1_byMediumCombinedIsolationDeltaBetaCorr3Hits;
  _intVars["tau1_byTightCombinedIsolationDeltaBetaCorr3Hits"] = tau1_byTightCombinedIsolationDeltaBetaCorr3Hits;
  _intVars["tau1_byLooseCombinedIsolationDeltaBetaCorr3HitsdR03"] = tau1_byLooseCombinedIsolationDeltaBetaCorr3HitsdR03;
  _intVars["tau1_byMediumCombinedIsolationDeltaBetaCorr3HitsdR03"] = tau1_byMediumCombinedIsolationDeltaBetaCorr3HitsdR03;
  _intVars["tau1_byTightCombinedIsolationDeltaBetaCorr3HitsdR03"] = tau1_byTightCombinedIsolationDeltaBetaCorr3HitsdR03;
  _intVars["tau1_byLooseIsolationMVArun2v1DBdR03oldDMwLT"] = tau1_byLooseIsolationMVArun2v1DBdR03oldDMwLT;
  _floatVars["tau1_rawMVArun2v1DBdR03oldDMwLT"] = tau1_rawMVArun2v1DBdR03oldDMwLT;
  _intVars["tau1_byVLooseIsolationMVArun2v1DBdR03oldDMwLT"] = tau1_byVLooseIsolationMVArun2v1DBdR03oldDMwLT;
  _intVars["tau1_byMediumIsolationMVArun2v1DBdR03oldDMwLT"] = tau1_byMediumIsolationMVArun2v1DBdR03oldDMwLT;
  _intVars["tau1_byTightIsolationMVArun2v1DBdR03oldDMwLT"] = tau1_byTightIsolationMVArun2v1DBdR03oldDMwLT;
  _intVars["tau1_byVTightIsolationMVArun2v1DBdR03oldDMwLT"] = tau1_byVTightIsolationMVArun2v1DBdR03oldDMwLT;
  _intVars["tau2_charge"] = tau2_charge;
  _intVars["tau2_decayModeFindingOldDMs"] = tau2_decayModeFindingOldDMs;
  _intVars["tau2_decayModeFindingNewDMs"] = tau2_decayModeFindingNewDMs;
  _intVars["tau2_byLooseCombinedIsolationDeltaBetaCorr3Hits"] = tau2_byLooseCombinedIsolationDeltaBetaCorr3Hits;
  _intVars["tau2_byMediumCombinedIsolationDeltaBetaCorr3Hits"] = tau2_byMediumCombinedIsolationDeltaBetaCorr3Hits;
  _intVars["tau2_byTightCombinedIsolationDeltaBetaCorr3Hits"] = tau2_byTightCombinedIsolationDeltaBetaCorr3Hits;
  _intVars["tau2_byLooseCombinedIsolationDeltaBetaCorr3HitsdR03"] = tau2_byLooseCombinedIsolationDeltaBetaCorr3HitsdR03;
  _intVars["tau2_byMediumCombinedIsolationDeltaBetaCorr3HitsdR03"] = tau2_byMediumCombinedIsolationDeltaBetaCorr3HitsdR03;
  _intVars["tau2_byTightCombinedIsolationDeltaBetaCorr3HitsdR03"] = tau2_byTightCombinedIsolationDeltaBetaCorr3HitsdR03;
  _intVars["tau2_byLooseIsolationMVArun2v1DBdR03oldDMwLT"] = tau2_byLooseIsolationMVArun2v1DBdR03oldDMwLT;
  _floatVars["tau2_rawMVArun2v1DBdR03oldDMwLT"] = tau2_rawMVArun2v1DBdR03oldDMwLT;
  _intVars["tau2_byVLooseIsolationMVArun2v1DBdR03oldDMwLT"] = tau2_byVLooseIsolationMVArun2v1DBdR03oldDMwLT;
  _intVars["tau2_byMediumIsolationMVArun2v1DBdR03oldDMwLT"] = tau2_byMediumIsolationMVArun2v1DBdR03oldDMwLT;
  _intVars["tau2_byTightIsolationMVArun2v1DBdR03oldDMwLT"] = tau2_byTightIsolationMVArun2v1DBdR03oldDMwLT;
  _intVars["tau2_byVTightIsolationMVArun2v1DBdR03oldDMwLT"] = tau2_byVTightIsolationMVArun2v1DBdR03oldDMwLT;
  _floatVars["mu1_pt"] = mu1_pt;
  _floatVars["mu1_conept"] = mu1_conept;
  _floatVars["mu1_eta"] = mu1_eta;
  _floatVars["mu1_phi"] = mu1_phi;
  _floatVars["mu1_E"] = mu1_E;
  _floatVars["mu1_miniRelIso"] = mu1_miniRelIso;
  _floatVars["mu1_miniIsoCharged"] = mu1_miniIsoCharged;
  _floatVars["mu1_miniIsoNeutral"] = mu1_miniIsoNeutral;
  _floatVars["mu1_jetPtRel"] = mu1_jetPtRel;
  _floatVars["mu1_jetPtRatio"] = mu1_jetPtRatio;
  _floatVars["mu1_jetCSV"] = mu1_jetCSV;
  _floatVars["mu1_sip3D"] = mu1_sip3D;
  _floatVars["mu1_dxyAbs"] = mu1_dxyAbs;
  _floatVars["mu1_dz"] = mu1_dz;
  _floatVars["mu1_segmentCompatibility"] = mu1_segmentCompatibility;
  _floatVars["mu1_leptonMVA"] = mu1_leptonMVA;
  _floatVars["mu1_dpt_div_pt"] = mu1_dpt_div_pt;
  _floatVars["mu2_pt"] = mu2_pt;
  _floatVars["mu2_conept"] = mu2_conept;
  _floatVars["mu2_eta"] = mu2_eta;
  _floatVars["mu2_phi"] = mu2_phi;
  _floatVars["mu2_E"] = mu2_E;
  _floatVars["mu2_miniRelIso"] = mu2_miniRelIso;
  _floatVars["mu2_miniIsoCharged"] = mu2_miniIsoCharged;
  _floatVars["mu2_miniIsoNeutral"] = mu2_miniIsoNeutral;
  _floatVars["mu2_jetPtRel"] = mu2_jetPtRel;
  _floatVars["mu2_jetPtRatio"] = mu2_jetPtRatio;
  _floatVars["mu2_jetCSV"] = mu2_jetCSV;
  _floatVars["mu2_sip3D"] = mu2_sip3D;
  _floatVars["mu2_dxyAbs"] = mu2_dxyAbs;
  _floatVars["mu2_dz"] = mu2_dz;
  _floatVars["mu2_segmentCompatibility"] = mu2_segmentCompatibility;
  _floatVars["mu2_leptonMVA"] = mu2_leptonMVA;
  _floatVars["mu2_dpt_div_pt"] = mu2_dpt_div_pt;
  _floatVars["ele1_pt"] = ele1_pt;
  _floatVars["ele1_conept"] = ele1_conept;
  _floatVars["ele1_eta"] = ele1_eta;
  _floatVars["ele1_phi"] = ele1_phi;
  _floatVars["ele1_E"] = ele1_E;
  _floatVars["ele1_miniRelIso"] = ele1_miniRelIso;
  _floatVars["ele1_miniIsoCharged"] = ele1_miniIsoCharged;
  _floatVars["ele1_miniIsoNeutral"] = ele1_miniIsoNeutral;
  _floatVars["ele1_jetPtRel"] = ele1_jetPtRel;
  _floatVars["ele1_jetPtRatio"] = ele1_jetPtRatio;
  _floatVars["ele1_jetCSV"] = ele1_jetCSV;
  _floatVars["ele1_sip3D"] = ele1_sip3D;
  _floatVars["ele1_dxyAbs"] = ele1_dxyAbs;
  _floatVars["ele1_dz"] = ele1_dz;
  _floatVars["ele1_ntMVAeleID"] = ele1_ntMVAeleID;
  _floatVars["ele1_leptonMVA"] = ele1_leptonMVA;
  _floatVars["ele2_pt"] = ele2_pt;
  _floatVars["ele2_conept"] = ele2_conept;
  _floatVars["ele2_eta"] = ele2_eta;
  _floatVars["ele2_phi"] = ele2_phi;
  _floatVars["ele2_E"] = ele2_E;
  _floatVars["ele2_miniRelIso"] = ele2_miniRelIso;
  _floatVars["ele2_miniIsoCharged"] = ele2_miniIsoCharged;
  _floatVars["ele2_miniIsoNeutral"] = ele2_miniIsoNeutral;
  _floatVars["ele2_jetPtRel"] = ele2_jetPtRel;
  _floatVars["ele2_jetPtRatio"] = ele2_jetPtRatio;
  _floatVars["ele2_jetCSV"] = ele2_jetCSV;
  _floatVars["ele2_sip3D"] = ele2_sip3D;
  _floatVars["ele2_dxyAbs"] = ele2_dxyAbs;
  _floatVars["ele2_dz"] = ele2_dz;
  _floatVars["ele2_ntMVAeleID"] = ele2_ntMVAeleID;
  _floatVars["ele2_leptonMVA"] = ele2_leptonMVA;
  _floatVars["tau1_pt"] = tau1_pt;
  _floatVars["tau1_eta"] = tau1_eta;
  _floatVars["tau1_phi"] = tau1_phi;
  _floatVars["tau1_E"] = tau1_E;
  _floatVars["tau1_dxy"] = tau1_dxy;
  _floatVars["tau1_dz"] = tau1_dz;
  _floatVars["tau1_byCombinedIsolationDeltaBetaCorr3Hits"] = tau1_byCombinedIsolationDeltaBetaCorr3Hits;
  _floatVars["tau2_pt"] = tau2_pt;
  _floatVars["tau2_eta"] = tau2_eta;
  _floatVars["tau2_phi"] = tau2_phi;
  _floatVars["tau2_E"] = tau2_E;
  _floatVars["tau2_dxy"] = tau2_dxy;
  _floatVars["tau2_dz"] = tau2_dz;
  _floatVars["tau2_byCombinedIsolationDeltaBetaCorr3Hits"] = tau2_byCombinedIsolationDeltaBetaCorr3Hits;
  _floatVars["jet1_pt"] = jet1_pt;
  _floatVars["jet1_eta"] = jet1_eta;
  _floatVars["jet1_phi"] = jet1_phi;
  _floatVars["jet1_E"] = jet1_E;
  _floatVars["jet1_CSV"] = jet1_CSV;
  _floatVars["jet2_pt"] = jet2_pt;
  _floatVars["jet2_eta"] = jet2_eta;
  _floatVars["jet2_phi"] = jet2_phi;
  _floatVars["jet2_E"] = jet2_E;
  _floatVars["jet2_CSV"] = jet2_CSV;
  _floatVars["jet3_pt"] = jet3_pt;
  _floatVars["jet3_eta"] = jet3_eta;
  _floatVars["jet3_phi"] = jet3_phi;
  _floatVars["jet3_E"] = jet3_E;
  _floatVars["jet3_CSV"] = jet3_CSV;
  _floatVars["jet4_pt"] = jet4_pt;
  _floatVars["jet4_eta"] = jet4_eta;
  _floatVars["jet4_phi"] = jet4_phi;
  _floatVars["jet4_E"] = jet4_E;
  _floatVars["jet4_CSV"] = jet4_CSV;
  _floatVars["PFMET"] = PFMET;
  _floatVars["PFMETphi"] = PFMETphi;
  _floatVars["MHT"] = MHT;
  _floatVars["lep1_conePt"] = lep1_conePt;
  _floatVars["lep2_conePt"] = lep2_conePt;
  _floatVars["mindr_lep1_jet"] = mindr_lep1_jet;
  _floatVars["mindr_lep2_jet"] = mindr_lep2_jet;
  _floatVars["mT_lep1"] = mT_lep1;
  _floatVars["avg_dr_jet"] = avg_dr_jet;
  _floatVars["mvaOutput_2lss_ttV"] = mvaOutput_2lss_ttV;
  _floatVars["mvaOutput_2lss_ttbar"] = mvaOutput_2lss_ttbar;
  _floatVars["lep3_conePt"] = lep3_conePt;
  _floatVars["mindr_lep3_jet"] = mindr_lep3_jet;
  _floatVars["min_dr_lep_jet"] = min_dr_lep_jet;
  _floatVars["dr_leps"] = dr_leps;
  _floatVars["max_lep_eta"] = max_lep_eta;
  _floatVars["mT_lep2"] = mT_lep2;
  _floatVars["mbb"] = mbb;
  _floatVars["mbb_loose"] = mbb_loose;
  _floatVars["Hj_tagger"] = Hj_tagger;
  _floatVars["HTT"] = HTT;
  _intVars["nBJetLoose"] = nBJetLoose;
  _intVars["nBJetMedium"] = nBJetMedium;
    if(evtObj -> _sync == 52){     
        std::cout << " " <<  evtObj-> eventNumber <<" "<<maxeta<< " " << Jet_numLoose << " "<< Mt_metleadlep << " "<< leadLep_jetdr << " "<< secondLep_jetdr <<" "<< leadLep_corrpt <<" "<< secondLep_corrpt << " " << Hj1_BDT <<" " << evtObj->HadTop_BDT << " " << ttbarBDT_2lss << " " << ttvBDT_2lss << " " << Bin2l <<std::endl;         
    }                          

    if (DoHists()) FillHistograms(evtObj->GetEventWeight());

}

// Calculate event variables for plots 
void ttHVars::Cal_event_variables(EventContainer* EvtObj){
    TLorentzVector FakeLep1{0,0,0,0};
    TLorentzVector FakeLep2{0,0,0,0};
    TLorentzVector Lep1{0,0,0,0};
    TLorentzVector Lep2{0,0,0,0};
    double minMass_AFAS =999;
    double minMass_AFOS =999;
    double minMass_SFOS =999;
    for(uint lep1_en=0; lep1_en<looseLeptons.size();lep1_en++){
        for(uint lep2_en=lep1_en+1; lep2_en<looseLeptons.size();lep2_en++){
            Lepton firstLepton = looseLeptons.at(lep1_en);
            Lepton secondLepton = looseLeptons.at(lep2_en);
            Lep1.SetPtEtaPhiE(firstLepton.Pt(),firstLepton.Eta(),firstLepton.Phi(),firstLepton.E());
            Lep2.SetPtEtaPhiE(secondLepton.Pt(),secondLepton.Eta(),secondLepton.Phi(),secondLepton.E());
            double curr_mass = (Lep1+Lep2).M();
            if(curr_mass < minMass_AFAS )minMass_AFAS=curr_mass; 
            if(curr_mass < minMass_AFOS && firstLepton.charge()*secondLepton.charge() < 0)minMass_AFOS=curr_mass; 
            if(curr_mass < minMass_SFOS && firstLepton.charge()*secondLepton.charge() < 0 && fabs(firstLepton.pdgId())== fabs(secondLepton.pdgId()))minMass_SFOS=curr_mass; 
        }
    }
    minMllAFOS = minMass_AFOS;
    minMllAFAS = minMass_AFAS;
    minMllSFOS = minMass_SFOS;
    nLepFO = fakeLeptons.size();
    nLepTight = tightLeptons.size();
    double maxCSV = -9999;
    double SumPt =0;
    double maxHj = -9999;
    int jet_numbLoose = 0;
    int jet_numbMedium = 0;
    for(uint jet_en=0; jet_en < Jets.size(); jet_en++){
        Jet jet = Jets.at(jet_en);
        if(jet.isMediumBdisc())jet_numbMedium++;
        if(jet.isLooseBdisc())jet_numbLoose++;
        SumPt = jet.Pt() + SumPt;
        if(jet_en == 0)leadJetCSV = jet.bDiscriminator();
        if(jet_en == 1)secondJetCSV = jet.bDiscriminator(); 
        if(jet_en == 2)thirdJetCSV = jet.bDiscriminator(); 
        if(jet_en == 3)fourthJetCSV = jet.bDiscriminator();
        if( maxCSV < jet.bDiscriminator()) maxCSV = jet.bDiscriminator();
        if( jet.isToptag()!=1 && jet.HjDisc() > maxHj) maxHj = jet.HjDisc();
    }
    Jet_numLoose = Jets.size();
    Jet_numbLoose = jet_numbLoose;
    Jet_numbMedium = jet_numbMedium;
    Hj1_BDT = maxHj;
    HighestJetCSV = maxCSV;
    HtJet = SumPt;
    if(fakeLeptons.size()>=2){
        Lepton firstLepton = fakeLeptons.at(0);
        Lepton secondLepton = fakeLeptons.at(1);
        double leadLep_closedr =999.;
        double secondLep_closedr =999.;
        for(uint jet_en=0; jet_en < Jets.size(); jet_en++){
            Jet jet = Jets.at(jet_en);
            double lead_dr = firstLepton.DeltaR(jet);
            double second_dr = secondLepton.DeltaR(jet);
            double csv = jet.bDiscriminator();
            if(lead_dr>0.4 && leadLep_closedr > lead_dr){
                leadLep_closedr = lead_dr;
                leadLep_jetcsv = csv; 
            }
            if(second_dr>0.4 && secondLep_closedr > second_dr){
                secondLep_closedr = second_dr;
                secondLep_jetcsv = csv; 
            }
        }
        if(EvtObj->isSimulation){
            leadLep_isMatchRightCharge = FakeLep_matchId.at(0) == FakeLep_PdgId.at(0)? 1 : 0;
            leadLep_mcMatchId = FakeLep_matchId.at(0);
            leadLep_isFromTop = FakeLep_isFromTop.at(0);
            leadLep_isFromH = FakeLep_isFromH.at(0);
            leadLep_isFromB = FakeLep_isFromB.at(0);
            leadLep_isFromC = FakeLep_isFromC.at(0);
            leadLep_mcPromptGamma = FakeLep_matchId.at(0) == 22 ? 1 : 0;
            leadLep_mcPromptFS = (firstLepton.gen_isPrompt() ==1 || firstLepton.gen_isPromptTau()==1)? 1 : 0;
            secondLep_isMatchRightCharge = FakeLep_matchId.at(1) == FakeLep_PdgId.at(1)? 1 : 0;
            secondLep_mcMatchId = FakeLep_matchId.at(1);
            secondLep_isFromTop = FakeLep_isFromTop.at(1);
            secondLep_isFromH = FakeLep_isFromH.at(1);
            secondLep_isFromB = FakeLep_isFromB.at(1);
            secondLep_isFromC = FakeLep_isFromC.at(1);
            secondLep_mcPromptGamma = FakeLep_matchId.at(1) == 22 ? 1 : 0;
            secondLep_mcPromptFS = (secondLepton.gen_isPrompt() ==1 || secondLepton.gen_isPromptTau()==1)? 1 : 0;
        }
        leadLep_jetdr= leadLep_closedr; 
        secondLep_jetdr= secondLep_closedr;
        FakeLep1.SetPtEtaPhiE(firstLepton.conept(),firstLepton.Eta(),firstLepton.Phi(),firstLepton.E());
        FakeLep2.SetPtEtaPhiE(secondLepton.conept(),secondLepton.Eta(),secondLepton.Phi(),secondLepton.E());
        massll = (FakeLep1+FakeLep2).M();
        leadLep_corrpt= firstLepton.conept();
        secondLep_corrpt= secondLepton.conept();
        leadLep_BDT = firstLepton.BDT();
        secondLep_BDT = secondLepton.BDT();
        Sum2lCharge= firstLepton.charge()+secondLepton.charge();
        Dilep_bestMVA = std::max(firstLepton.BDT(),secondLepton.BDT());
        Dilep_worseMVA = std::min(firstLepton.BDT(),secondLepton.BDT());
        Dilep_pdgId = (28 - fabs(firstLepton.pdgId()) - fabs(secondLepton.pdgId()))/2;
        Dilep_htllv = firstLepton.conept() + secondLepton.conept() + EvtObj->missingEt; 
        if((firstLepton.isTight() + secondLepton.isTight()) ==2) Dilep_nTight = 2 ;
        else if((firstLepton.isTight() + secondLepton.isTight()) ==1) Dilep_nTight = 1 ;
        else Dilep_nTight = 0 ;
        Mt_metleadlep = getMTlepmet(firstLepton.Phi(),EvtObj->missingPhi,firstLepton.conept(),EvtObj->missingEt); 
        maxeta = max(fabs(firstLepton.Eta()),fabs(secondLepton.Eta()));
        
        Dilep_mtWmin = std::min(getMTlepmet(secondLepton.Phi(),EvtObj->missingPhi,secondLepton.conept(),EvtObj->missingEt), Mt_metleadlep); 
        ttbarBDT_2lss = get_Dilep_ttbarMVA(EvtObj);
        ttvBDT_2lss = get_Dilep_ttvMVA(EvtObj);
        Bin2l = get_2DBDTBin(ttbarBDT_2lss, ttvBDT_2lss, EvtObj);
    }
    //2l sub category
    if(fakeLeptons.size()>=2){
        Lepton firstLepton = fakeLeptons.at(0);
        Lepton secondLepton = fakeLeptons.at(1);
        if(firstLepton.charge()== -1 && (fabs(firstLepton.pdgId())+fabs(secondLepton.pdgId()))== 22) SubCat2l=1; // ee-
        if(firstLepton.charge()== 1 && (fabs(firstLepton.pdgId())+fabs(secondLepton.pdgId()))== 22) SubCat2l=2; // ee+
        if((fabs(firstLepton.pdgId())+fabs(secondLepton.pdgId()))== 24){ // eu
            if(jet_numbMedium<2){ //bl
                if(firstLepton.charge()==-1)SubCat2l=3; // eubl-
                if(firstLepton.charge()==1)SubCat2l=4; // eubl+
            }else{//bt
                if(firstLepton.charge()==-1)SubCat2l=5; // eubt-
                if(firstLepton.charge()==1)SubCat2l=6; // eubt+
            }
        }
        if((fabs(firstLepton.pdgId())+fabs(secondLepton.pdgId()))== 26){ // eu
            if(jet_numbMedium<2){ //bl
                if(firstLepton.charge()==-1)SubCat2l=7; // uubl-
                if(firstLepton.charge()==1)SubCat2l=8; // uubl+
            }else{//bt
                if(firstLepton.charge()==-1)SubCat2l=9; // uubt-
                if(firstLepton.charge()==1)SubCat2l=10; // uubt+
            }
        }
    }else{
        SubCat2l=0;//others
    }
};

double ttHVars::getMTlepmet(double phi1, double phi2, double pt1, double pt2){
    double Mass =0;
    Mass = sqrt(2*pt1*pt2*(1-cos(deltaPhi(phi1,phi2))));
    return Mass;
};

//2D Binning
Int_t ttHVars::get_2DBDTBin(double BDT_ttbar, double BDT_ttV, EventContainer* EvtObj){
    int BDTBin=0;
    BDTBin = 1 + EvtObj->hBinning2l->GetBinContent(EvtObj-> hBinning2l->FindBin(BDT_ttbar,BDT_ttV));
    return BDTBin;
};

// 2l ttbar MVA
double ttHVars::get_Dilep_ttbarMVA(EventContainer* EvtObj){
    EvtObj->Dilepttbar_maxlepeta =maxeta;
    EvtObj->Dilepttbar_numJets =Jet_numLoose;
    EvtObj->Dilepttbar_mindrlep1jet= leadLep_jetdr;
    EvtObj->Dilepttbar_mindrlep2jet= secondLep_jetdr;
    EvtObj->Dilepttbar_Mtmetlep1=Mt_metleadlep;
    EvtObj->Dilepttbar_HadTopBDT = max(-1.1, EvtObj->HadTop_BDT) ;
    //cout << "get_EleMVA end" << endl;
    return EvtObj->Dilepttbar_reader_->EvaluateMVA("BDTG method");
};


//2l ttv mva
double ttHVars::get_Dilep_ttvMVA(EventContainer* EvtObj){
    EvtObj->Dilepttv_maxlepeta =maxeta;
    EvtObj->Dilepttv_Mtmetlep1= Mt_metleadlep;
    EvtObj->Dilepttv_numJets = Jet_numLoose;
    EvtObj->Dilepttv_mindrlep1jet= leadLep_jetdr;
    EvtObj->Dilepttv_mindrlep2jet= secondLep_jetdr;
    EvtObj->Dilepttv_ptlep1= leadLep_corrpt;
    EvtObj->Dilepttv_ptlep2= secondLep_corrpt;
    EvtObj->Dilepttv_Hj1BDT = max(-1.1,Hj1_BDT);
    return EvtObj->Dilepttv_reader_->EvaluateMVA("BDTG method");
};
// utils
double ttHVars::deltaPhi(double phi1, double phi2){
    double result = phi1 - phi2;
    while (result > M_PI) result -= 2*M_PI;
    while (result <= -M_PI) result += 2*M_PI;
    return result;
}
