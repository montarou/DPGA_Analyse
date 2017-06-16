//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Thu Jun 15 16:52:21 2017 by ROOT version 6.08/00
// from TTree tree/tree
// found on file: run110.root
//////////////////////////////////////////////////////////

#ifndef DPGAanalyse_2_h
#define DPGAanalyse_2_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>
#include <TSelector.h>
#include <TTreeReader.h>
#include <TTreeReaderValue.h>
#include <TTreeReaderArray.h>

// Headers needed by this particular selector


class DPGAanalyse_2 : public TSelector {
public :
   TTreeReader     fReader;  //!the tree reader
   TTree          *fChain = 0;   //!pointer to the analyzed TTree or TChain
  

   Int_t           NoPulsess;
   Double_t        Pulse[59][999];   //[NoPulsess]
   TBranch        *b_NoPulsess;   //!
   TBranch        *b_Pulse;   //!


   // Readers to access the data (delete the ones you do not need).
   TTreeReaderValue<UInt_t> Run = {fReader, "Run"};
   TTreeReaderValue<UInt_t> Evt = {fReader, "Evt"};
   TTreeReaderValue<UInt_t> T0 = {fReader, "T0"};
   TTreeReaderValue<ULong64_t> TimeStamp = {fReader, "TimeStamp"};
   TTreeReaderValue<Double_t> RateBoard1 = {fReader, "RateBoard1"};
   TTreeReaderValue<Double_t> RateBoard2 = {fReader, "RateBoard2"};
   TTreeReaderValue<Double_t> RateBoard3 = {fReader, "RateBoard3"};
   TTreeReaderValue<Double_t> RateBoard4 = {fReader, "RateBoard4"};
   TTreeReaderValue<Double_t> RateBoard5 = {fReader, "RateBoard5"};
   TTreeReaderValue<Double_t> RateBoard6 = {fReader, "RateBoard6"};
   TTreeReaderValue<Double_t> RateBoard7 = {fReader, "RateBoard7"};
   TTreeReaderValue<Double_t> RateBoard8 = {fReader, "RateBoard8"};
   TTreeReaderValue<Double_t> RateBoard9 = {fReader, "RateBoard9"};
   TTreeReaderValue<Double_t> RateBoard10 = {fReader, "RateBoard10"};
   TTreeReaderValue<Double_t> RateBoard11 = {fReader, "RateBoard11"};
   TTreeReaderValue<Double_t> RateBoard12 = {fReader, "RateBoard12"};
   TTreeReaderValue<Double_t> RateLvsR1 = {fReader, "RateLvsR1"};
   TTreeReaderValue<Double_t> RateLvsR2 = {fReader, "RateLvsR2"};
   TTreeReaderValue<Double_t> RateLvsR3 = {fReader, "RateLvsR3"};
   TTreeReaderValue<Double_t> RateLvsR4 = {fReader, "RateLvsR4"};
   TTreeReaderValue<Double_t> RateLvsR5 = {fReader, "RateLvsR5"};
   TTreeReaderValue<Double_t> RateLvsR6 = {fReader, "RateLvsR6"};
   TTreeReaderValue<Double_t> RateLvsR7 = {fReader, "RateLvsR7"};
   TTreeReaderValue<Double_t> RateLvs3L1 = {fReader, "RateLvs3L1"};
   TTreeReaderValue<Double_t> RateLvs3L2 = {fReader, "RateLvs3L2"};
   TTreeReaderValue<Double_t> RateLvs3L3 = {fReader, "RateLvs3L3"};
   TTreeReaderValue<Double_t> RateLvs3L4 = {fReader, "RateLvs3L4"};
   TTreeReaderValue<Double_t> RateLvs3L5 = {fReader, "RateLvs3L5"};
   TTreeReaderValue<Double_t> RateLvs3L6 = {fReader, "RateLvs3L6"};
   TTreeReaderValue<Double_t> RateLvs3L7 = {fReader, "RateLvs3L7"};
   TTreeReaderValue<Double_t> RateLvsL1 = {fReader, "RateLvsL1"};
   TTreeReaderValue<Double_t> RateLvsL2 = {fReader, "RateLvsL2"};
   TTreeReaderValue<Double_t> RateLvsL3 = {fReader, "RateLvsL3"};
   TTreeReaderValue<Double_t> RateLvsL4 = {fReader, "RateLvsL4"};
   TTreeReaderValue<Double_t> RateLvsL5 = {fReader, "RateLvsL5"};
   TTreeReaderValue<Double_t> RateLvsL6 = {fReader, "RateLvsL6"};
   TTreeReaderValue<Double_t> RateLvsL7 = {fReader, "RateLvsL7"};
   TTreeReaderValue<Int_t> NoPulses = {fReader, "NoPulses"};
   TTreeReaderArray<UShort_t> IChanAbs240 = {fReader, "IChanAbs240"};
   TTreeReaderArray<UChar_t> IQuartetAbs60 = {fReader, "IQuartetAbs60"};
   TTreeReaderArray<UChar_t> ILineAbs12 = {fReader, "ILineAbs12"};
   TTreeReaderArray<UChar_t> IHemi = {fReader, "IHemi"};
   TTreeReaderArray<Double_t> E = {fReader, "E"};
   TTreeReaderArray<Double_t> Ampl = {fReader, "Ampl"};
   TTreeReaderArray<UChar_t> Sat = {fReader, "Sat"};
   TTreeReaderArray<Double_t> Charge = {fReader, "Charge"};
   TTreeReaderArray<Double_t> T10 = {fReader, "T10"};
   TTreeReaderArray<Double_t> T20 = {fReader, "T20"};
   TTreeReaderArray<Double_t> T30 = {fReader, "T30"};
   TTreeReaderArray<Double_t> T80 = {fReader, "T80"};
   TTreeReaderArray<Double_t> T90 = {fReader, "T90"};
   TTreeReaderArray<Double_t> Tf20 = {fReader, "Tf20"};
   TTreeReaderArray<UShort_t> NoLocMaxRisingFront = {fReader, "NoLocMaxRisingFront"};
   TTreeReaderArray<Double_t> SampleTimes = {fReader, "SampleTimes"};
   TTreeReaderArray<Double_t> PulseRF = {fReader, "PulseRF"};
   TTreeReaderArray<Double_t> X = {fReader, "X"};
   TTreeReaderArray<Double_t> Y = {fReader, "Y"};
   TTreeReaderArray<Double_t> Z = {fReader, "Z"};
   TTreeReaderArray<Double_t> Xc = {fReader, "Xc"};
   TTreeReaderArray<Double_t> Yc = {fReader, "Yc"};
   TTreeReaderArray<Double_t> Zc = {fReader, "Zc"};
   TTreeReaderValue<Int_t> NoLORs = {fReader, "NoLORs"};
   TTreeReaderArray<Int_t> LORIdx1 = {fReader, "LORIdx1"};
   TTreeReaderArray<Int_t> LORIdx2 = {fReader, "LORIdx2"};
   TTreeReaderArray<Double_t> LORTMean = {fReader, "LORTMean"};
   TTreeReaderArray<Double_t> LORTRF = {fReader, "LORTRF"};
   TTreeReaderArray<Double_t> LORXmar = {fReader, "LORXmar"};
   TTreeReaderArray<Double_t> LORYmar = {fReader, "LORYmar"};
   TTreeReaderArray<Double_t> LORZmar = {fReader, "LORZmar"};
   TTreeReaderArray<Double_t> LORRmar = {fReader, "LORRmar"};


TGraph* g;

   DPGAanalyse_2(TTree * /*tree*/ =0) { }
   virtual ~DPGAanalyse_2() { }
   virtual Int_t   Version() const { return 2; }
   virtual void    Begin(TTree *tree);
   virtual void    SlaveBegin(TTree *tree);
   virtual void    Init(TTree *tree);
   virtual Bool_t  Notify();
   virtual Bool_t  Process(Long64_t entry);
   virtual Int_t   GetEntry(Long64_t entry, Int_t getall = 0) { return fChain ? fChain->GetTree()->GetEntry(entry, getall) : 0; }
   virtual void    SetOption(const char *option) { fOption = option; }
   virtual void    SetObject(TObject *obj) { fObject = obj; }
   virtual void    SetInputList(TList *input) { fInput = input; }
   virtual TList  *GetOutputList() const { return fOutput; }
   virtual void    SlaveTerminate();
   virtual void    Terminate();

   ClassDef(DPGAanalyse_2,0);

};

#endif

#ifdef DPGAanalyse_2_cxx
void DPGAanalyse_2::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the reader is initialized.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   fReader.SetTree(tree);


   fReader.GetTree()->SetBranchAddress("NoPulses", &NoPulsess, &b_NoPulsess);
   fReader.GetTree()->SetBranchAddress("Pulse", Pulse, &b_Pulse);


}

Bool_t DPGAanalyse_2::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}


#endif // #ifdef DPGAanalyse_2_cxx
