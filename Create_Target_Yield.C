
void Create()
{
const Int_t Ndata = 115;
const Int_t maxrun = 5;
double atomic_percent_90[maxrun] ={0.9936,0.0651,0.0254,0.0191,0.0919};
double atomic_percent_91[maxrun] ={0.0030,0.8850,0.0104,0.0051,0.0202};
double atomic_percent_92[maxrun] ={0.0017,0.0321,0.9513,0.0085,0.2720};
double atomic_percent_94[maxrun] ={0.0012,0.0161,0.0111,0.9649,0.0422};
double atomic_percent_96[maxrun] ={0.0004,0.0017,0.0018,0.0026,0.5736};
ifstream data_zr90;
data_zr90.open("YIELD_90ZR_TALYS_ALPHAN.txt");
ifstream data_zr91;
data_zr91.open("YIELD_91ZR_TALYS_ALPHAN.txt");
ifstream data_zr92;
data_zr92.open("YIELD_92ZR_TALYS_ALPHAN.txt");
ifstream data_zr94;
data_zr94.open("YIELD_94ZR_TALYS_ALPHAN.txt");
ifstream data_zr96;
data_zr96.open("YIELD_96ZR_TALYS_ALPHAN.txt");
Double_t E[Ndata],yield_90[Ndata],yield_91[Ndata],yield_92[Ndata],yield_94[Ndata],yield_96[Ndata];
for (Int_t i=0;i<Ndata;i++){
data_zr90>> E[i] >> yield_90[i];
data_zr91>> E[i] >> yield_91[i];
data_zr92>> E[i] >> yield_92[i];
data_zr94>> E[i] >> yield_94[i];
data_zr96>> E[i] >> yield_96[i];
}
for(Int_t it=0 ; it < maxrun ; it++){
cout <<it <<"  " <<  " =========" << endl;
//cout <<atomic_percent_90[it]<< "  " << atomic_percent_91[it]<< "  " <<atomic_percent_92[it]<< "  "<< atomic_percent_94[it]<< "   "<< atomic_percent_96[it]<< endl;
double Target_Yield =0;
for (Int_t i=0 ; i < Ndata ; i++){
    Target_Yield = ((atomic_percent_90[it] * yield_90[i]) + (atomic_percent_91[it] * yield_91[i]) + (atomic_percent_92[it] * yield_92[i]) + (atomic_percent_94[it] * yield_94[i]) + (atomic_percent_96[it] * yield_96[i]));
//cout <<atomic_percent_90[it]<< "  " << atomic_percent_91[it]<< "  " <<atomic_percent_92[it]<< "  "<< atomic_percent_94[it]<< "   "<< atomic_percent_96[it]<< endl;
cout << E[i] << "      " << Target_Yield << endl;
    
    }
}

 
    
    
    
}









































































void Create1()
{
const Int_t Ndata = 115;

double atomic_percent_90 = 0.0919 ;
double atomic_percent_91 = 0.0202 ;
double atomic_percent_92 = 0.272 ;
double atomic_percent_94 = 0.0422 ;
double atomic_percent_96 = 0.5736 ;

ifstream data_zr90;
data_zr90.open("YIELD_90ZR_TALYS_ALPHAN.txt");
ifstream data_zr91;
data_zr91.open("YIELD_91ZR_TALYS_ALPHAN.txt");
ifstream data_zr92;
data_zr92.open("YIELD_92ZR_TALYS_ALPHAN.txt");
ifstream data_zr94;
data_zr94.open("YIELD_94ZR_TALYS_ALPHAN.txt");
ifstream data_zr96;
data_zr96.open("YIELD_96ZR_TALYS_ALPHAN.txt");
Double_t E[Ndata],yield_90[Ndata],yield_91[Ndata],yield_92[Ndata],yield_94[Ndata],yield_96[Ndata];
for (Int_t i=0;i<Ndata;i++) {
data_zr90>> E[i]>>yield_90[i];
data_zr91>> E[i]>>yield_91[i];
data_zr92>> E[i]>>yield_92[i];
data_zr94>> E[i]>>yield_94[i];
data_zr96>> E[i]>>yield_96[i];

double Target_Yield = ((atomic_percent_90 * yield_90[i]) + (atomic_percent_91 * yield_91[i]) + (atomic_percent_92 * yield_92[i]) + (atomic_percent_94* yield_94[i]) + (atomic_percent_96* yield_96[i]));
cout <<Target_Yield << endl;

}
    cout << " =========" << endl;
}









void Create2()
{
const int maxrun = 5;
const Int_t Ndata = 115;
double atomic_percent_90[maxrun],atomic_percent_91[maxrun],atomic_percent_92[maxrun],atomic_percent_94[maxrun],atomic_percent_96[maxrun];
double yield[Ndata],E[Ndata];
int isotop[maxrun];
ifstream runlist;
ifstream data_file;
TString directory_input = Form("/Users/gula/Desktop/yield");
runlist.open(Form("/Users/gula/Desktop/yield/run_list.txt"));
for(int it=0;it<maxrun;it++)
{
runlist>>isotop[it]>>atomic_percent_91[it]>>atomic_percent_92[it]>>atomic_percent_94[it]>>atomic_percent_96[it]; ;
cout << isotop[it]<<endl;
if (!gSystem->AccessPathName(Form("%s/YIELD_%dZR_TALYS_ALPHAN.txt",directory_input.Data(),isotop[it])))
{
data_file.open(Form("%s/YIELD_%dZR_TALYS_ALPHAN.txt",directory_input.Data(),isotop[it]));
for(int i=0;i<Ndata;i++)
{
data_file >> E[i] >> yield[i];
double Target_Yield = ((atomic_percent_90[it] * yield[i]) + (atomic_percent_91[it] * yield[i]) + (atomic_percent_92[it] * yield[i]) + (atomic_percent_94[it] * yield[i])  +(atomic_percent_96[it] * yield[i]));
cout <<Target_Yield << endl;
}
data_file.close();
data_file.clear();
}
 cout<<" ============================================ "<< endl;
}
}

