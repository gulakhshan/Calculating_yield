void Create()
 {
 const Int_t Ndata = 115;
 const Int_t maxrun = 5;
 Double_t Error_add = 0.05;
                                    // 90Zr   91Zr   92Zr   94Zr   96Zr //
 Double_t atomic_percent_90[maxrun] = {0.9936,0.0651,0.0254,0.0191,0.0919};
 Double_t atomic_percent_91[maxrun] = {0.0030,0.8850,0.0104,0.0051,0.0202};
 Double_t atomic_percent_92[maxrun] = {0.0017,0.0321,0.9513,0.0085,0.2720};
 Double_t atomic_percent_94[maxrun] = {0.0012,0.0161,0.0111,0.9649,0.0422};
 Double_t atomic_percent_96[maxrun] = {0.0004,0.0017,0.0018,0.0026,0.5736};
 Double_t Eratomic_percent_90[maxrun]={0.0006,0.0005,0.0010,0.0050,0.0010};
 Double_t Eratomic_percent_91[maxrun]={0.0002,0.0010,0.0010,0.0005,0.0005};
 Double_t Eratomic_percent_92[maxrun]={0.0002,0.0005,0.0010,0.0005,0.0010};
 Double_t Eratomic_percent_94[maxrun]={0.0002,0.0005,0.0010,0.0010,0.0010};
 Double_t Eratomic_percent_96[maxrun]={0.0002,0.0003,0.0005,0.0005,0.0020};
     
 ifstream data_zr90;
 data_zr90.open("TARGET_YIELD_90.TXT");
 ifstream data_zr91;
 data_zr91.open("TARGET_YIELD_91.TXT");
 ifstream data_zr92;
 data_zr92.open("TARGET_YIELD_92.TXT");
 ifstream data_zr94;
 data_zr94.open("TARGET_YIELD_94.TXT");
 ifstream data_zr96;
 data_zr96.open("TARGET_YIELD_96.TXT");

 ifstream five_percent_added_zr90;
 five_percent_added_zr90.open("FOURTH_YIELD_ZR90.txt");
 ifstream five_percent_added_zr91;
 five_percent_added_zr91.open("FOURTH_YIELD_ZR91.txt");
 ifstream five_percent_added_zr92;
 five_percent_added_zr92.open("FOURTH_YIELD_ZR92.txt");
 ifstream five_percent_added_zr94;
 five_percent_added_zr94.open("FOURTH_YIELD_ZR94.txt");
 ifstream five_percent_added_zr96;
 five_percent_added_zr96.open("FOURTH_YIELD_ZR96.txt");
     
 Double_t E[Ndata], target_yield_90[Ndata], target_yield_91[Ndata], target_yield_92[Ndata];
 Double_t target_yield_94[Ndata], target_yield_96[Ndata];
 Double_t yield_90[Ndata], yield_91[Ndata], yield_92[Ndata], yield_94[Ndata], yield_96[Ndata], yield_96ZR[Ndata];
 Double_t Eryield_90[Ndata], Eryield_91[Ndata], Eryield_92[Ndata], Eryield_94[Ndata], Eryield_96[Ndata], Eryield_96ZR[Ndata];
 Double_t Ertarget_yield_90[Ndata], Ertarget_yield_91[Ndata], Ertarget_yield_92[Ndata], Ertarget_yield_94[Ndata], Ertarget_yield_96[Ndata];

     
 for (Int_t i=0;i<Ndata;i++){
 data_zr90>> E[i]>>target_yield_90[i];
 data_zr91>> E[i]>>target_yield_91[i];
 data_zr92>> E[i]>>target_yield_92[i];
 data_zr94>> E[i]>>target_yield_94[i];
 data_zr96>> E[i]>>target_yield_96[i];
 five_percent_added_zr90>> E[i]>>yield_90[i];
 five_percent_added_zr91>> E[i]>>yield_91[i];
 five_percent_added_zr92>> E[i]>>yield_92[i];
 five_percent_added_zr94>> E[i]>>yield_94[i];
 five_percent_added_zr96>> E[i]>>yield_96[i];

 }
 for (Int_t i=0;i<Ndata;i++){
 Eryield_90[i] = yield_90[i] * Error_add;
 Eryield_91[i] = yield_91[i] * Error_add;
 Eryield_92[i] = yield_92[i] * Error_add;
 Eryield_94[i] = yield_94[i] * Error_add;
 Eryield_96[i] = yield_96[i] * Error_add;
 }
     
 int NIT =1;
 do{
 Double_t corrected_target_yied_90Zr0[Ndata] = {0};
 Double_t Ercorrected_target_yied_90Zr0[Ndata] = {0};
 Double_t corrected_target_yied_90Zr1[Ndata] = {0};
 Double_t Ercorrected_target_yied_90Zr1[Ndata] = {0};
 Double_t corrected_target_yied_90Zr2[Ndata] = {0};
 Double_t Ercorrected_target_yied_90Zr2[Ndata] = {0};
 Double_t corrected_target_yied_90Zr3[Ndata] = {0};
 Double_t Ercorrected_target_yied_90Zr3[Ndata] = {0};
 Double_t Error_yield_90Zr[Ndata] = {0};
 Double_t corrected_yield_90Zr[Ndata] = {0};
 Double_t Ercorrected_yield_90Zr[Ndata] = {0};
 Double_t step_900[Ndata] = {0};
 Double_t step_901[Ndata] = {0};
 Double_t step_902[Ndata] = {0};
 Double_t step_903[Ndata] = {0};
 Double_t ErTarget90[Ndata] = {0};
 Double_t t90Zr0[Ndata] = {0};
 Double_t t91Zr0[Ndata] = {0};
 Double_t t92Zr0[Ndata] = {0};
 Double_t t94Zr0[Ndata] = {0};
 Double_t t96Zr0[Ndata] = {0};
 Double_t Ert90Zr0[Ndata] = {0};
 Double_t Ert91Zr0[Ndata] = {0};
 Double_t Ert92Zr0[Ndata] = {0};
 Double_t Ert94Zr0[Ndata] = {0};
 Double_t Ert96Zr0[Ndata] = {0};
//Target_Yield = ((atomic_percent_90[it] * yield_90[i]) + (atomic_percent_91[it] * yield_91[i]) + (atomic_percent_92[it] * yield_92[i]) + (atomic_percent_94[it] * yield_94[i]) + (atomic_percent_96[it] * yield_96[i]));
for (Int_t i=0 ; i< Ndata ; i++){
t90Zr0[i] = (atomic_percent_90[0] * yield_90[i]);// not is not a TALYS yield it needs to be changed
t91Zr0[i] = (atomic_percent_91[0] * yield_91[i]);
t92Zr0[i] = (atomic_percent_92[0] * yield_92[i]);
t94Zr0[i] = (atomic_percent_94[0] * yield_94[i]);
t96Zr0[i] = (atomic_percent_96[0] * yield_96[i]);
Ert90Zr0[i] = abs(t90Zr0[i]) * TMath::Sqrt(TMath::Power((Eratomic_percent_90[0]/atomic_percent_90[0]),2) );
Ert91Zr0[i] = abs(t91Zr0[i]) * TMath::Sqrt(TMath::Power((Eratomic_percent_91[0]/atomic_percent_91[0]),2) );
Ert92Zr0[i] = abs(t92Zr0[i]) * TMath::Sqrt(TMath::Power((Eratomic_percent_92[0]/atomic_percent_92[0]),2) );
Ert94Zr0[i] = abs(t94Zr0[i]) * TMath::Sqrt(TMath::Power((Eratomic_percent_94[0]/atomic_percent_94[0]),2) );
Ert96Zr0[i] = abs(t96Zr0[i]) * TMath::Sqrt(TMath::Power((Eratomic_percent_96[0]/atomic_percent_96[0]),2) );

ErTarget90[i] = TMath::Sqrt(TMath::Power(Ert90Zr0[i],2) + TMath::Power(Ert91Zr0[i],2) + TMath::Power(Ert92Zr0[i],2) + TMath::Power(Ert94Zr0[i],2) + TMath::Power(Ert96Zr0[i],2));
 step_900[i] = (atomic_percent_91[0] * yield_91[i]);
 corrected_target_yied_90Zr0[i] = target_yield_90[i] - step_900[i];
 Ercorrected_target_yied_90Zr0[i] = TMath::Sqrt(TMath::Power(ErTarget90[i],2) + TMath::Power(abs(step_900[i]) * TMath::Sqrt(TMath::Power((Eratomic_percent_91[0]/atomic_percent_91[0]),2) + TMath::Power((Eryield_91[i]/yield_91[i]),2)),2));
 step_901[i] = (atomic_percent_92[0] * yield_92[i]);
 corrected_target_yied_90Zr1[i] = corrected_target_yied_90Zr0[i] - step_901[i];
 Ercorrected_target_yied_90Zr1[i] = TMath::Sqrt(TMath::Power(Ercorrected_target_yied_90Zr0[i],2) + TMath::Power(abs(step_901[i]) * TMath::Sqrt(TMath::Power((Eratomic_percent_92[0]/atomic_percent_92[0]),2) + TMath::Power((Eryield_92[i]/yield_92[i]),2)),2));
 step_902[i] = (atomic_percent_94[0] * yield_94[i]);
 corrected_target_yied_90Zr2[i] = corrected_target_yied_90Zr1[i] - step_902[i];
 Ercorrected_target_yied_90Zr2[i] = TMath::Sqrt(TMath::Power(Ercorrected_target_yied_90Zr1[i],2) + TMath::Power(abs(step_902[i]) * TMath::Sqrt(TMath::Power((Eratomic_percent_94[0]/atomic_percent_94[0]),2) + TMath::Power((Eryield_94[i]/yield_94[i]),2)),2));
 step_903[i] = (atomic_percent_96[0] * yield_96[i]);
 corrected_target_yied_90Zr3[i] = corrected_target_yied_90Zr2[i] - step_903[i];
 Ercorrected_target_yied_90Zr3[i] = TMath::Sqrt(TMath::Power(Ercorrected_target_yied_90Zr2[i],2) + TMath::Power(abs(step_903[i]) * TMath::Sqrt(TMath::Power((Eratomic_percent_96[0]/atomic_percent_96[0]),2) + TMath::Power((Eryield_96[i]/yield_96[i]),2)),2));
     
 corrected_yield_90Zr[i] = corrected_target_yied_90Zr3[i] / atomic_percent_90[0];
 Ercorrected_yield_90Zr[i] = abs(corrected_yield_90Zr[i]) * TMath::Sqrt(TMath::Power(Ercorrected_target_yied_90Zr3[i]/corrected_target_yied_90Zr3[i] ,2) + TMath::Power((Eratomic_percent_90[0]/atomic_percent_90[0]),2) ) ;
 cout << E[i] << "    " <<  corrected_yield_90Zr[i] << "   " <<  Ercorrected_yield_90Zr[i]  << endl;

                                                                              
 }
 cout << NIT <<" ===================================" <<endl;

 Double_t corrected_target_yied_91Zr0[Ndata] = {0};
 Double_t corrected_target_yied_91Zr1[Ndata] = {0};
 Double_t corrected_target_yied_91Zr2[Ndata] = {0};
 Double_t corrected_target_yied_91Zr3[Ndata] = {0};
 Double_t Ercorrected_target_yied_91Zr0[Ndata] = {0};
 Double_t Ercorrected_target_yied_91Zr1[Ndata] = {0};
 Double_t Ercorrected_target_yied_91Zr2[Ndata] = {0};
 Double_t Ercorrected_target_yied_91Zr3[Ndata] = {0};
 Double_t Error_yield_91Zr[Ndata] = {0};
 Double_t corrected_yield_91Zr[Ndata] = {0};
 Double_t Ercorrected_yield_91Zr[Ndata] = {0};
 Double_t step_910[Ndata] = {0};
 Double_t step_911[Ndata] = {0};
 Double_t step_912[Ndata] = {0};
 Double_t step_913[Ndata] = {0};
Double_t ErTarget91[Ndata] = {0};
Double_t t90Zr1[Ndata] = {0};
Double_t t91Zr1[Ndata] = {0};
Double_t t92Zr1[Ndata] = {0};
Double_t t94Zr1[Ndata] = {0};
Double_t t96Zr1[Ndata] = {0};
Double_t Ert90Zr1[Ndata] = {0};
Double_t Ert91Zr1[Ndata] = {0};
Double_t Ert92Zr1[Ndata] = {0};
Double_t Ert94Zr1[Ndata] = {0};
Double_t Ert96Zr1[Ndata] = {0};

 for (Int_t i=0;i< Ndata ; i++){
     
t90Zr1[i] = (atomic_percent_90[1] * yield_90[i]);
t91Zr1[i] = (atomic_percent_91[1] * yield_91[i]);
t92Zr1[i] = (atomic_percent_92[1] * yield_92[i]);
t94Zr1[i] = (atomic_percent_94[1] * yield_94[i]);
t96Zr1[i] = (atomic_percent_96[1] * yield_96[i]);
Ert90Zr1[i] = abs(t90Zr1[i]) * TMath::Sqrt(TMath::Power((Eratomic_percent_90[1]/atomic_percent_90[1]),2) );
Ert91Zr1[i] = abs(t91Zr1[i]) * TMath::Sqrt(TMath::Power((Eratomic_percent_91[1]/atomic_percent_91[1]),2) );
Ert92Zr1[i] = abs(t92Zr1[i]) * TMath::Sqrt(TMath::Power((Eratomic_percent_92[1]/atomic_percent_92[1]),2) );
Ert94Zr1[i] = abs(t94Zr1[i]) * TMath::Sqrt(TMath::Power((Eratomic_percent_94[1]/atomic_percent_94[1]),2) );
Ert96Zr1[i] = abs(t96Zr1[i]) * TMath::Sqrt(TMath::Power((Eratomic_percent_96[1]/atomic_percent_96[1]),2) );
ErTarget91[i] = TMath::Sqrt(TMath::Power(Ert90Zr1[i],2) + TMath::Power(Ert91Zr1[i],2) + TMath::Power(Ert92Zr1[i],2) + TMath::Power(Ert94Zr1[i],2) + TMath::Power(Ert96Zr1[i],2));
step_910[i] = (atomic_percent_90[1] * yield_90[i]);
corrected_target_yied_91Zr0[i] = target_yield_91[i] - step_910[i];
Ercorrected_target_yied_91Zr0[i] = TMath::Sqrt(TMath::Power(ErTarget91[i],2) + TMath::Power(abs(step_910[i]) * TMath::Sqrt(TMath::Power((Eratomic_percent_90[1]/atomic_percent_90[1]),2) + TMath::Power((Eryield_90[i]/yield_90[i]),2)),2));
  
step_911[i] = (atomic_percent_92[1] * yield_92[i]);
     corrected_target_yied_91Zr1[i] = corrected_target_yied_91Zr0[i] - step_911[i];
 Ercorrected_target_yied_91Zr1[i] = TMath::Sqrt(TMath::Power(Ercorrected_target_yied_91Zr0[i],2) + TMath::Power(abs(step_911[i]) * TMath::Sqrt(TMath::Power((Eratomic_percent_92[1]/atomic_percent_92[1]),2) + TMath::Power((Eryield_92[i]/yield_92[i]),2)),2));
  
 step_912[i] = (atomic_percent_94[1] * yield_94[i]);
 corrected_target_yied_91Zr2[i] = corrected_target_yied_91Zr1[i] - step_912[i];
 Ercorrected_target_yied_91Zr2[i] = TMath::Sqrt(TMath::Power(Ercorrected_target_yied_91Zr1[i],2) + TMath::Power(abs(step_912[i]) * TMath::Sqrt(TMath::Power((Eratomic_percent_94[1]/atomic_percent_94[1]),2) + TMath::Power((Eryield_94[i]/yield_94[i]),2)),2));
     
 step_913[i] = (atomic_percent_96[1] * yield_96[i]);
 corrected_target_yied_91Zr3[i]= corrected_target_yied_91Zr2[i] - step_913[i];
 Ercorrected_target_yied_91Zr3[i] = TMath::Sqrt(TMath::Power(Ercorrected_target_yied_91Zr2[i],2) + TMath::Power(abs(step_913[i]) * TMath::Sqrt(TMath::Power((Eratomic_percent_96[1]/atomic_percent_96[1]),2) + TMath::Power((Eryield_96[i]/yield_96[i]),2)),2));

 corrected_yield_91Zr[i] = corrected_target_yied_91Zr3[i] / atomic_percent_91[1];
 Ercorrected_yield_91Zr[i] =abs(corrected_yield_91Zr[i]) * TMath::Sqrt(TMath::Power(Ercorrected_target_yied_91Zr3[i]/corrected_target_yied_91Zr3[i] ,2) + TMath::Power((Eratomic_percent_91[1]/atomic_percent_91[1]),2)) ;
 //cout << E[i] << "    " <<  corrected_yield_91Zr[i] << "   " << Ercorrected_yield_91Zr[i]  << endl;

 }
cout  << NIT <<" ===================================" <<endl;

Double_t corrected_target_yied_92Zr0[Ndata] = {0};
Double_t corrected_target_yied_92Zr1[Ndata] = {0};
Double_t corrected_target_yied_92Zr2[Ndata] = {0};
Double_t corrected_target_yied_92Zr3[Ndata] = {0};
Double_t Ercorrected_target_yied_92Zr0[Ndata] = {0};
Double_t Ercorrected_target_yied_92Zr1[Ndata] = {0};
Double_t Ercorrected_target_yied_92Zr2[Ndata] = {0};
Double_t Ercorrected_target_yied_92Zr3[Ndata] = {0};
Double_t Error_yield_92Zr[Ndata] = {0};
Double_t corrected_yield_92Zr[Ndata] = {0};
Double_t Ercorrected_yield_92Zr[Ndata] = {0};
Double_t step_920[Ndata] = {0};
Double_t step_921[Ndata] = {0};
Double_t step_922[Ndata] = {0};
Double_t step_923[Ndata] = {0};
Double_t ErTarget92[Ndata] = {0};
Double_t t90Zr2[Ndata] = {0};
Double_t t91Zr2[Ndata] = {0};
Double_t t92Zr2[Ndata] = {0};
Double_t t94Zr2[Ndata] = {0};
Double_t t96Zr2[Ndata] = {0};
Double_t Ert90Zr2[Ndata] = {0};
Double_t Ert91Zr2[Ndata] = {0};
Double_t Ert92Zr2[Ndata] = {0};
Double_t Ert94Zr2[Ndata] = {0};
Double_t Ert96Zr2[Ndata] = {0};


for (Int_t i=0;i< Ndata ; i++){
t90Zr2[i] = (atomic_percent_90[2] * yield_90[i]);
t91Zr2[i] = (atomic_percent_91[2] * yield_91[i]);
t92Zr2[i] = (atomic_percent_92[2] * yield_92[i]);
t94Zr2[i] = (atomic_percent_94[2] * yield_94[i]);
t96Zr2[i] = (atomic_percent_96[2] * yield_96[i]);
Ert90Zr2[i] = abs(t90Zr2[i]) * TMath::Sqrt(TMath::Power((Eratomic_percent_90[2]/atomic_percent_90[2]),2) );
Ert91Zr2[i] = abs(t91Zr2[i]) * TMath::Sqrt(TMath::Power((Eratomic_percent_91[2]/atomic_percent_91[2]),2) );
Ert92Zr2[i] = abs(t92Zr2[i]) * TMath::Sqrt(TMath::Power((Eratomic_percent_92[2]/atomic_percent_92[2]),2) );
Ert94Zr2[i] = abs(t94Zr2[i]) * TMath::Sqrt(TMath::Power((Eratomic_percent_94[2]/atomic_percent_94[2]),2) );
Ert96Zr2[i] = abs(t96Zr2[i]) * TMath::Sqrt(TMath::Power((Eratomic_percent_96[2]/atomic_percent_96[2]),2) );
ErTarget92[i] = TMath::Sqrt(TMath::Power(Ert90Zr2[i],2) + TMath::Power(Ert91Zr2[i],2) + TMath::Power(Ert92Zr2[i],2) + TMath::Power(Ert94Zr2[i],2) + TMath::Power(Ert96Zr2[i],2));
step_920[i] = (atomic_percent_90[2] * yield_90[i]);
corrected_target_yied_92Zr0[i] = target_yield_92[i] - step_920[i];
Ercorrected_target_yied_92Zr0[i] = TMath::Sqrt(TMath::Power(ErTarget92[i],2) + TMath::Power(abs(step_920[i]) * TMath::Sqrt(TMath::Power((Eratomic_percent_90[2]/atomic_percent_90[2]),2) + TMath::Power((Eryield_90[i]/yield_90[i]),2)),2));
                                     
step_921[i] = (atomic_percent_91[2] * yield_91[i]);
corrected_target_yied_92Zr1[i] = corrected_target_yied_92Zr0[i] - step_921[i];
Ercorrected_target_yied_92Zr1[i] = TMath::Sqrt(TMath::Power(Ercorrected_target_yied_92Zr0[i],2) + TMath::Power(abs(step_921[i]) * TMath::Sqrt(TMath::Power((Eratomic_percent_91[2]/atomic_percent_91[2]),2) + TMath::Power((Eryield_91[i]/yield_91[i]),2)),2));
  
step_922[i] = (atomic_percent_94[2] * yield_94[i]);
corrected_target_yied_92Zr2[i] = corrected_target_yied_92Zr1[i] - step_922[i];
Ercorrected_target_yied_92Zr2[i] = TMath::Sqrt(TMath::Power(Ercorrected_target_yied_92Zr1[i],2) + TMath::Power(abs(step_922[i]) * TMath::Sqrt(TMath::Power((Eratomic_percent_94[2]/atomic_percent_92[2]),2) + TMath::Power((Eryield_94[i]/yield_94[i]),2)),2));
                                        
step_923[i] = (atomic_percent_96[2] * yield_96[i]);
corrected_target_yied_92Zr3[i] = corrected_target_yied_92Zr2[i] - step_923[i];
Ercorrected_target_yied_92Zr3[i] = TMath::Sqrt(TMath::Power(Ercorrected_target_yied_92Zr2[i],2) + TMath::Power(abs(step_923[i]) * TMath::Sqrt(TMath::Power((Eratomic_percent_96[2]/atomic_percent_96[2]),2) + TMath::Power((Eryield_96[i]/yield_96[i]),2)),2));
     
corrected_yield_92Zr[i] = corrected_target_yied_92Zr3[i] / atomic_percent_92[2];
Ercorrected_yield_92Zr[i] =abs(corrected_yield_92Zr[i]) * TMath::Sqrt(TMath::Power(Ercorrected_target_yied_92Zr3[i]/corrected_target_yied_92Zr3[i] ,2) + TMath::Power((Eratomic_percent_92[2]/atomic_percent_92[2]),2) ) ;
//cout << E[i] << "    " <<  corrected_yield_92Zr[i] << "   " << Ercorrected_yield_92Zr[i]  << endl;
}
cout <<  NIT <<" ===================================" <<endl;


Double_t corrected_target_yied_94Zr0[Ndata] = {0};
Double_t corrected_target_yied_94Zr1[Ndata] = {0};
Double_t corrected_target_yied_94Zr2[Ndata] = {0};
Double_t corrected_target_yied_94Zr3[Ndata] = {0};
Double_t Ercorrected_target_yied_94Zr0[Ndata] = {0};
Double_t Ercorrected_target_yied_94Zr1[Ndata] = {0};
Double_t Ercorrected_target_yied_94Zr2[Ndata] = {0};
Double_t Ercorrected_target_yied_94Zr3[Ndata] = {0};
Double_t Error_yield_94Zr[Ndata] = {0};
Double_t corrected_yield_94Zr[Ndata] = {0};
Double_t Ercorrected_yield_94Zr[Ndata] = {0};
Double_t step_940[Ndata] = {0};
Double_t step_941[Ndata] = {0};
Double_t step_942[Ndata] = {0};
Double_t step_943[Ndata] = {0};
Double_t ErTarget94[Ndata] = {0};
Double_t t90Zr3[Ndata] = {0};
Double_t t91Zr3[Ndata] = {0};
Double_t t92Zr3[Ndata] = {0};
Double_t t94Zr3[Ndata] = {0};
Double_t t96Zr3[Ndata] = {0};
Double_t Ert90Zr3[Ndata] = {0};
Double_t Ert91Zr3[Ndata] = {0};
Double_t Ert92Zr3[Ndata] = {0};
Double_t Ert94Zr3[Ndata] = {0};
Double_t Ert96Zr3[Ndata] = {0};

    
for (Int_t i=0;i< Ndata ; i++){
t90Zr3[i] = (atomic_percent_90[3] * yield_90[i]);
t91Zr3[i] = (atomic_percent_91[3] * yield_91[i]);
t92Zr3[i] = (atomic_percent_92[3] * yield_92[i]);
t94Zr3[i] = (atomic_percent_94[3] * yield_94[i]);
t96Zr3[i] = (atomic_percent_96[3] * yield_96[i]);
Ert90Zr3[i] = abs(t90Zr3[i]) * TMath::Sqrt(TMath::Power((Eratomic_percent_90[3]/atomic_percent_90[3]),2) );
Ert91Zr3[i] = abs(t91Zr3[i]) * TMath::Sqrt(TMath::Power((Eratomic_percent_91[3]/atomic_percent_91[3]),2) );
Ert92Zr3[i] = abs(t92Zr3[i]) * TMath::Sqrt(TMath::Power((Eratomic_percent_92[3]/atomic_percent_92[3]),2) );
Ert94Zr3[i] = abs(t94Zr3[i]) * TMath::Sqrt(TMath::Power((Eratomic_percent_94[3]/atomic_percent_94[3]),2) );
Ert96Zr3[i] = abs(t96Zr3[i]) * TMath::Sqrt(TMath::Power((Eratomic_percent_96[3]/atomic_percent_96[3]),2) );
ErTarget94[i] = TMath::Sqrt(TMath::Power(Ert90Zr3[i],2) + TMath::Power(Ert91Zr3[i],2) + TMath::Power(Ert92Zr3[i],2) + TMath::Power(Ert94Zr3[i],2) + TMath::Power(Ert96Zr3[i],2));
 step_940[i] = (atomic_percent_90[3] * yield_90[i]);
 corrected_target_yied_94Zr0[i] = target_yield_94[i] - step_940[i];
 Ercorrected_target_yied_94Zr0[i] = TMath::Sqrt(TMath::Power(ErTarget94[i],2) + TMath::Power(abs(step_940[i]) * TMath::Sqrt(TMath::Power((Eratomic_percent_90[3]/atomic_percent_90[3]),2) + TMath::Power((Eryield_90[i]/yield_90[i]),2)),2));

 step_941[i] = (atomic_percent_91[3] * yield_91[i]);
 corrected_target_yied_94Zr1[i] = corrected_target_yied_94Zr0[i] - step_941[i];
 Ercorrected_target_yied_94Zr1[i] = TMath::Sqrt(TMath::Power(Ercorrected_target_yied_94Zr0[i],2) + TMath::Power(abs(corrected_target_yied_94Zr1[i]) * TMath::Sqrt(TMath::Power((Eratomic_percent_91[3]/atomic_percent_91[3]),2) + TMath::Power((Eryield_91[i]/yield_91[i]),2)),2));
     
 step_942[i] = (atomic_percent_92[3] * yield_92[i]);
 corrected_target_yied_94Zr2[i] = corrected_target_yied_94Zr1[i] - step_942[i];
 Ercorrected_target_yied_94Zr2[i] = TMath::Sqrt(TMath::Power(Ercorrected_target_yied_94Zr1[i],2) + TMath::Power(abs(step_942[i]) * TMath::Sqrt(TMath::Power((Eratomic_percent_92[3]/atomic_percent_92[3]),2) + TMath::Power((Eryield_92[i]/yield_92[i]),2)),2));

 step_943[i] = (atomic_percent_96[3] * yield_96[i]);
 corrected_target_yied_94Zr3[i] = corrected_target_yied_94Zr2[i] - step_943[i];
 Ercorrected_target_yied_94Zr3[i] = TMath::Sqrt(TMath::Power(Ercorrected_target_yied_94Zr2[i],2) + TMath::Power(abs(step_943[i]) * TMath::Sqrt(TMath::Power((Eratomic_percent_96[3]/atomic_percent_96[3]),2) + TMath::Power((Eryield_96[i]/yield_96[i]),2)),2));

 corrected_yield_94Zr[i] = corrected_target_yied_94Zr3[i] / atomic_percent_94[3];
 Ercorrected_yield_94Zr[i] =abs(corrected_yield_94Zr[i]) * TMath::Sqrt(TMath::Power(Ercorrected_target_yied_94Zr3[i]/corrected_target_yied_94Zr3[i] ,2) + TMath::Power((Eratomic_percent_94[3]/atomic_percent_94[3]),2) ) ;
 //cout << E[i] << "    " <<  corrected_yield_94Zr[i] << "   " << Ercorrected_yield_94Zr[i]  << endl;


 }
 cout <<  NIT <<" ===================================" <<endl;


Double_t corrected_target_yied_96Zr0[Ndata] = {0};
Double_t corrected_target_yied_96Zr1[Ndata] = {0};
Double_t corrected_target_yied_96Zr2[Ndata] = {0};
Double_t corrected_target_yied_96Zr3[Ndata] = {0};
Double_t Ercorrected_target_yied_96Zr0[Ndata] = {0};
Double_t Ercorrected_target_yied_96Zr1[Ndata] = {0};
Double_t Ercorrected_target_yied_96Zr2[Ndata] = {0};
Double_t Ercorrected_target_yied_96Zr3[Ndata] = {0};
Double_t Error_yield_96Zr[Ndata] = {0};
Double_t corrected_yield_96Zr[Ndata] = {0};
Double_t Ercorrected_yield_96Zr[Ndata] = {0};
Double_t step_960[Ndata] = {0};
Double_t step_961[Ndata] = {0};
Double_t step_962[Ndata] = {0};
Double_t step_963[Ndata] = {0};
Double_t ErTarget96[Ndata] = {0};
Double_t t90Zr4[Ndata] = {0};
Double_t t91Zr4[Ndata] = {0};
Double_t t92Zr4[Ndata] = {0};
Double_t t94Zr4[Ndata] = {0};
Double_t t96Zr4[Ndata] = {0};
Double_t Ert90Zr4[Ndata] = {0};
Double_t Ert91Zr4[Ndata] = {0};
Double_t Ert92Zr4[Ndata] = {0};
Double_t Ert94Zr4[Ndata] = {0};
Double_t Ert96Zr4[Ndata] = {0};

 for (Int_t i=0;i< Ndata ; i++){
t90Zr4[i] = (atomic_percent_90[4] * yield_90[i]);
t91Zr4[i] = (atomic_percent_91[4] * yield_91[i]);
t92Zr4[i] = (atomic_percent_92[4] * yield_92[i]);
t94Zr4[i] = (atomic_percent_94[4] * yield_94[i]);
t96Zr4[i] = (atomic_percent_96[4] * yield_96[i]);
Ert90Zr4[i] = abs(t90Zr4[i]) * TMath::Sqrt(TMath::Power((Eratomic_percent_90[4]/atomic_percent_90[4]),2) );
Ert91Zr4[i] = abs(t91Zr4[i]) * TMath::Sqrt(TMath::Power((Eratomic_percent_91[4]/atomic_percent_91[4]),2) );
Ert92Zr4[i] = abs(t92Zr4[i]) * TMath::Sqrt(TMath::Power((Eratomic_percent_92[4]/atomic_percent_92[4]),2) );
Ert94Zr4[i] = abs(t94Zr4[i]) * TMath::Sqrt(TMath::Power((Eratomic_percent_94[4]/atomic_percent_94[4]),2) );
Ert96Zr4[i] = abs(t96Zr4[i]) * TMath::Sqrt(TMath::Power((Eratomic_percent_96[4]/atomic_percent_96[4]),2) );
ErTarget96[i] = TMath::Sqrt(TMath::Power(Ert90Zr4[i],2) + TMath::Power(Ert91Zr4[i],2) + TMath::Power(Ert92Zr4[i],2) + TMath::Power(Ert94Zr4[i],2) + TMath::Power(Ert96Zr4[i],2));
 step_960[i] = (atomic_percent_90[4] * yield_90[i]);
 corrected_target_yied_96Zr0[i] = target_yield_96[i] - step_960[i];
 Ercorrected_target_yied_96Zr0[i] = TMath::Sqrt(TMath::Power(ErTarget96[i],2) + TMath::Power(abs(step_960[i]) * TMath::Sqrt(TMath::Power((Eratomic_percent_90[4]/atomic_percent_90[4]),2) + TMath::Power((Eryield_90[i]/yield_90[i]),2)),2));

 step_961[i] = (atomic_percent_91[4] * yield_91[i]);
 corrected_target_yied_96Zr1[i] = corrected_target_yied_96Zr0[i] - step_961[i];
 Ercorrected_target_yied_96Zr1[i] = TMath::Sqrt(TMath::Power(Ercorrected_target_yied_96Zr0[i],2) + TMath::Power(abs(step_961[i]) * TMath::Sqrt(TMath::Power((Eratomic_percent_91[4]/atomic_percent_91[4]),2) + TMath::Power((Eryield_91[i]/yield_91[i]),2)),2));

 step_962[i] = (atomic_percent_92[4] * yield_92[i]);
 corrected_target_yied_96Zr2[i] = corrected_target_yied_96Zr1[i] - step_962[i];
 Ercorrected_target_yied_96Zr2[i] = TMath::Sqrt(TMath::Power(Ercorrected_target_yied_96Zr1[i],2) + TMath::Power(abs(step_962[i]) * TMath::Sqrt(TMath::Power((Eratomic_percent_92[4]/atomic_percent_92[4]),2) + TMath::Power((Eryield_92[i]/yield_92[i]),2)),2));
     
 step_963[i] = (atomic_percent_94[4] * yield_94[i]);
 corrected_target_yied_96Zr3[i] = corrected_target_yied_96Zr2[i] - step_963[i];
 Ercorrected_target_yied_96Zr3[i] = TMath::Sqrt(TMath::Power(Ercorrected_target_yied_96Zr2[i],2) + TMath::Power(abs(step_963[i]) * TMath::Sqrt(TMath::Power((Eratomic_percent_94[4]/atomic_percent_94[4]),2) + TMath::Power((Eryield_94[i]/yield_94[i]),2)),2));
     
 corrected_yield_96Zr[i] = corrected_target_yied_96Zr3[i] / atomic_percent_96[4];
 Ercorrected_yield_96Zr[i] =abs(corrected_yield_96Zr[i]) * TMath::Sqrt(TMath::Power(Ercorrected_target_yied_96Zr3[i]/corrected_target_yied_96Zr3[i] ,2) + TMath::Power((Eratomic_percent_96[4]/atomic_percent_96[4]),2) ) ;
 //cout << E[i] << "    " <<  corrected_yield_96Zr[i] << "   " << Ercorrected_target_yied_96Zr3[i]   << endl;
 }


yield_90[Ndata] = corrected_target_yied_90Zr3[Ndata]
yield_91[Ndata] = corrected_target_yied_91Zr3[Ndata]
yield_92[Ndata] = corrected_target_yied_92Zr3[Ndata]
yield_94[Ndata] = corrected_target_yied_94Zr3[Ndata]
yield_96[Ndata] = corrected_target_yied_96Zr3[Ndata]

 cout <<  NIT <<"===================================" <<endl;
 NIT = NIT + 1 ;
 }while(NIT < 10);
     
 }

  





















 

void Create0()
{
const Int_t Ndata = 115;
const Int_t maxrun = 5;          // 90Zr   91Zr   92Zr   94Zr   96Zr //
double atomic_percent_90[maxrun] ={0.9936,0.0651,0.0254,0.0191,0.0919};
double atomic_percent_91[maxrun] ={0.0030,0.8850,0.0104,0.0051,0.0202};
double atomic_percent_92[maxrun] ={0.0017,0.0321,0.9513,0.0085,0.2720};
double atomic_percent_94[maxrun] ={0.0012,0.0161,0.0111,0.9649,0.0422};
double atomic_percent_96[maxrun] ={0.0004,0.0017,0.0018,0.0026,0.5736};
ifstream data_zr90;
data_zr90.open("TARGET_YIELD_90.TXT");
ifstream data_zr91;
data_zr91.open("TARGET_YIELD_91.TXT");
ifstream data_zr92;
data_zr92.open("TARGET_YIELD_92.TXT");
ifstream data_zr94;
data_zr94.open("TARGET_YIELD_94.TXT");
ifstream data_zr96;
data_zr96.open("TARGET_YIELD_96.TXT");


ifstream assumeddata_zr90;
assumeddata_zr90.open("FIRST_Zr90_yield.txt");
ifstream assumeddata_zr91;
assumeddata_zr91.open("FIRST_Zr91_yield.txt");
ifstream assumeddata_zr92;
assumeddata_zr92.open("FIRST_Zr92_yield.txt");
ifstream assumeddata_zr94;
assumeddata_zr94.open("FIRST_Zr94_yield.txt");
ifstream assumeddata_zr96;
assumeddata_zr96.open("FIRST_Zr96_yield.txt");
double E[Ndata],target_yield_90[Ndata],target_yield_91[Ndata],target_yield_92[Ndata];
double target_yield_94[Ndata],target_yield_96[Ndata];
double yield_90[Ndata],yield_91[Ndata],yield_92[Ndata],yield_94[Ndata],yield_96[Ndata], yield_96ZR[Ndata];
    
for (Int_t i=0;i<Ndata;i++){
data_zr90>> E[i]>>target_yield_90[i];
data_zr91>> E[i]>>target_yield_91[i];
data_zr92>> E[i]>>target_yield_92[i];
data_zr94>> E[i]>>target_yield_94[i];
data_zr96>> E[i]>>target_yield_96[i];
assumeddata_zr90>> E[i]>>yield_90[i];
assumeddata_zr91>> E[i]>>yield_91[i];
assumeddata_zr92>> E[i]>>yield_92[i];
assumeddata_zr94>> E[i]>>yield_94[i];
assumeddata_zr96>> E[i]>>yield_96[i];


}
    
int NIT =1;
do{
double corrected_target_yied_90Zr0[Ndata] ={0};
double corrected_target_yied_90Zr1[Ndata] = {0};
double corrected_target_yied_90Zr2[Ndata] = {0};
double corrected_target_yied_90Zr3[Ndata] = {0};
for (Int_t i=0 ; i< Ndata ; i++){
corrected_target_yied_90Zr0[i] = target_yield_90[i] - (atomic_percent_91[0] * yield_91[i]);
corrected_target_yied_90Zr1[i] = corrected_target_yied_90Zr0[i] - (atomic_percent_92[0] * yield_92[i]);
corrected_target_yied_90Zr2[i] = corrected_target_yied_90Zr1[i] - (atomic_percent_94[0] * yield_94[i]);
corrected_target_yied_90Zr3[i] = corrected_target_yied_90Zr2[i] - (atomic_percent_96[0] * yield_96[i]);
cout << E[i] << "    " <<  corrected_target_yied_90Zr3[i] / atomic_percent_90[0]   << endl;
}

cout << NIT <<" ===================================" <<endl;

double corrected_target_yied_91Zr0[Ndata] = {0};
double corrected_target_yied_91Zr1[Ndata] = {0};
double corrected_target_yied_91Zr2[Ndata] = {0};
double corrected_target_yied_91Zr3[Ndata] = {0};
for (Int_t i=0;i< Ndata ; i++){
corrected_target_yied_91Zr0[i] = target_yield_91[i] - (atomic_percent_90[1] * yield_90[i]);
corrected_target_yied_91Zr1[i] = corrected_target_yied_91Zr0[i] - (atomic_percent_92[1] * yield_92[i]);
corrected_target_yied_91Zr2[i] = corrected_target_yied_91Zr1[i] - (atomic_percent_94[1] * yield_94[i]);
corrected_target_yied_91Zr3[i]= corrected_target_yied_91Zr2[i] - (atomic_percent_96[1] * yield_96[i]);
cout << E[i] << "    " << corrected_target_yied_91Zr3[i] / atomic_percent_91[1] << endl;

}
cout  << NIT <<" ===================================" <<endl;

double corrected_target_yied_92Zr0[Ndata] = {0};
double corrected_target_yied_92Zr1[Ndata] = {0};
double corrected_target_yied_92Zr2[Ndata] = {0};
double corrected_target_yied_92Zr3[Ndata] = {0};
for (Int_t i=0;i< Ndata ; i++){
corrected_target_yied_92Zr0[i] = target_yield_92[i] - (atomic_percent_90[2] * yield_90[i]);
corrected_target_yied_92Zr1[i] = corrected_target_yied_92Zr0[i] - (atomic_percent_91[2] * yield_91[i]);
corrected_target_yied_92Zr2[i] = corrected_target_yied_92Zr1[i] - (atomic_percent_94[2] * yield_94[i]);
corrected_target_yied_92Zr3[i] = corrected_target_yied_92Zr2[i] - (atomic_percent_96[2] * yield_96[i]);
cout << E[i] << "    " << corrected_target_yied_92Zr3[i] / atomic_percent_92[2] << endl;

}
cout <<  NIT <<" ===================================" <<endl;



double corrected_target_yied_94Zr0[Ndata] = {0};
double corrected_target_yied_94Zr1[Ndata] = {0};
double corrected_target_yied_94Zr2[Ndata] = {0};
double corrected_target_yied_94Zr3[Ndata] = {0};
for (Int_t i=0;i< Ndata ; i++){
corrected_target_yied_94Zr0[i] = target_yield_94[i] - (atomic_percent_90[3] * yield_90[i]);
corrected_target_yied_94Zr1[i] = corrected_target_yied_94Zr0[i] - (atomic_percent_91[3] * yield_91[i]);
corrected_target_yied_94Zr2[i] = corrected_target_yied_94Zr1[i] - (atomic_percent_92[3] * yield_92[i]);
corrected_target_yied_94Zr3[i] = corrected_target_yied_94Zr2[i] - (atomic_percent_96[3] * yield_96[i]);
cout << E[i] << "    " << corrected_target_yied_94Zr3[i] / atomic_percent_94[3] << endl;

}
cout <<  NIT <<" ===================================" <<endl;


double corrected_target_yied_96Zr0[Ndata] = {0};
double corrected_target_yied_96Zr1[Ndata] = {0};
double corrected_target_yied_96Zr2[Ndata] = {0};
double corrected_target_yied_96Zr3[Ndata] = {0};
for (Int_t i=0;i< Ndata ; i++){
corrected_target_yied_96Zr0[i] = target_yield_96[i] - (atomic_percent_90[4] * yield_90[i]);
corrected_target_yied_96Zr1[i] = corrected_target_yied_96Zr0[i] - (atomic_percent_91[4] * yield_91[i]);
corrected_target_yied_96Zr2[i] = corrected_target_yied_96Zr1[i] - (atomic_percent_92[4] * yield_92[i]);
corrected_target_yied_96Zr3[i] = corrected_target_yied_96Zr2[i] - (atomic_percent_94[4] * yield_94[i]);
cout << E[i] << "    " << corrected_target_yied_96Zr3[i] / atomic_percent_96[4]  << endl;
}
// I removed the updates of the variables to Eterate.
cout <<  NIT <<" ===================================" <<endl;
NIT = NIT + 1 ;
}while(NIT < 2);
    
}





