#ifdef __CINT__

#pragma link off all globals;
#pragma link off all classes;
#pragma link off all functions;

#pragma link C++ global gHaVars;
#pragma link C++ global gHaCuts;
#pragma link C++ global gHaApps;
#pragma link C++ global gHaScalers;
#pragma link C++ global gHaPhysics;
#pragma link C++ global gHaRun;
#pragma link C++ global gHaDB;
#pragma link C++ global gHaTextvars;

#pragma link C++ class THaVar+;
#pragma link C++ class THaVarList+;
#pragma link C++ class THaNamedList+;
#pragma link C++ class THaFormula+;
#pragma link C++ class THaVform+;
#pragma link C++ class THaVhist+;
#pragma link C++ class THaCut+;
#pragma link C++ class THaCutList+;
#pragma link C++ class THaHashList+;
#pragma link C++ class THaInterface+;
#pragma link C++ class THaRun+;
#pragma link C++ class THaRunBase+;
#pragma link C++ class THaCodaRun+;
#pragma link C++ class THaRunParameters+;
#pragma link C++ class THaApparatus+;
#pragma link C++ class THaSpectrometer+;
#pragma link C++ class THaHRS+;
#pragma link C++ class THaDecData+;
#pragma link C++ class BdataLoc+;
#pragma link C++ class CrateLoc+;
#pragma link C++ class CrateLocMulti+;
#pragma link C++ class WordLoc+;
#pragma link C++ class RoclenLoc+;
#pragma link C++ class TrigBitLoc+;
#pragma link C++ class THaAnalysisObject+;
#pragma link C++ class THaDetectorBase+;
#pragma link C++ class THaPhysicsModule+;
#pragma link C++ class THaVertexModule+;
#pragma link C++ class THaTrackingModule+;
#pragma link C++ class THaDetector+;
#pragma link C++ class THaSubDetector+;
#pragma link C++ class THaSpectrometerDetector+;
#pragma link C++ class THaTrackingDetector+;
#pragma link C++ class THaNonTrackingDetector+;
#pragma link C++ class THaPidDetector+;
#pragma link C++ class THaDetMap+;
#pragma link C++ class THaDetMap::Module+;
#pragma link C++ class THaScintillator+;
#pragma link C++ class THaScintillator::DataDest+;
#pragma link C++ class THaEvent+;
#pragma link C++ class THaEventHeader+;
#pragma link C++ class THaOutput+;
//#pragma link C++ class THaOdata+;
//#pragma link C++ class THaScalerKey+;
#pragma link C++ class THaAnalyzer+;
#pragma link C++ class THaPrintOption+;
#pragma link C++ class THaBeam+;
#pragma link C++ class THaBeamDet+;
#pragma link C++ class THaIdealBeam+;
#pragma link C++ class THaRasteredBeam+;
#pragma link C++ class THaUnRasteredBeam+;
#pragma link C++ class THaRaster+;
#pragma link C++ class THaBPM+;
#pragma link C++ class THaShower+;
#pragma link C++ class THaTrack+;
#pragma link C++ class THaTrackID+;
#pragma link C++ class THaPIDinfo+;
#pragma link C++ class THaParticleInfo+;
#pragma link C++ class THaCluster+;
#pragma link C++ class THaArrayString+;
#pragma link C++ class THaCherenkov+;
#pragma link C++ class THaTotalShower+;
#pragma link C++ class THaVDC+;
#pragma link C++ class THaVDCUVPlane+;
#pragma link C++ class THaVDCPlane+;
#pragma link C++ class THaVDCCluster+;
#pragma link C++ class THaVDCHit+;
#pragma link C++ class THaVDCWire+;
#pragma link C++ class THaVDCTimeToDistConv+;
#pragma link C++ class THaVDCAnalyticTTDConv+;
#pragma link C++ class THaVDCPoint+;
#pragma link C++ class THaVDCPointPair+;
#pragma link C++ class THaVDCTrackID+;
#pragma link C++ class VDCeff+;
#pragma link C++ class THaRTTI+;
#pragma link C++ class THaScalerGroup+;
#pragma link C++ class THaElectronKine+;
#pragma link C++ class THaReactionPoint+;
#pragma link C++ class THaReacPointFoil+;
#pragma link C++ class THaTwoarmVertex+;
#pragma link C++ class THaAvgVertex+;
#pragma link C++ class THaExtTarCor+;
#pragma link C++ class THaTrackInfo+;
#pragma link C++ class THaDebugModule+;
#pragma link C++ class THaGoldenTrack+;
#pragma link C++ class THaPrimaryKine+;
#pragma link C++ class THaSecondaryKine+;
#pragma link C++ class THaCoincTime+;
#pragma link C++ class THaS2CoincTime+;
#pragma link C++ class THaTrackProj+;
#pragma link C++ class THaPostProcess+;
#pragma link C++ class THaFilter+;
#pragma link C++ class THaElossCorrection+;
#pragma link C++ class THaTrackEloss+;
#pragma link C++ class THaBeamModule+;
#pragma link C++ class THaBeamInfo+;
#pragma link C++ class THaEpicsEbeam+;
#pragma link C++ class THaBeamEloss+;
#pragma link C++ class THaTriggerTime+;
#pragma link C++ class THaTrackOut+;
#pragma link C++ class THaHelicityDet+;
#pragma link C++ class THaADCHelicity+;
#pragma link C++ class THaADCHelicity::ChanDef_t+;
#pragma link C++ class THaHelicity+;
#pragma link C++ class THaG0HelicityReader+;
#pragma link C++ class THaG0HelicityReader::ROCinfo+;
#pragma link C++ class THaG0Helicity+;
#pragma link C++ class THaPhotoReaction+;
#pragma link C++ class THaSAProtonEP+;
#pragma link C++ class THaTextvars+;
#pragma link C++ class THaQWEAKHelicity+;
#pragma link C++ class THaQWEAKHelicityReader+;
#pragma link C++ class THaQWEAKHelicityReader::ROCinfo+;

#ifdef ONLINE_ET
#pragma link C++ class THaOnlRun+;
#endif


#endif
