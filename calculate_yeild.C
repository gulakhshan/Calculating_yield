void calculate()
{
   ifstream inputfile;
   inputfile.open("DATA_96ZR_TALYS.txt");
    const int n =115;
    Double_t E[n],stop_pow1[n],stop_pow2[n],sigma[n],DeltaE[n];
    for (Int_t i=0;i<n;i++) {
    inputfile>> E[i]  >> DeltaE[i] >> stop_pow1[i] >> stop_pow2[i] >> sigma[i];
        cout << i << " " << E[i]<<endl;
    }
    
    TGraph *gr1 = new TGraph(n,E,stop_pow2);
    TGraph *gr2 = new TGraph(n,E,sigma);
    
    double dE = 0.001;
    for (int i = 0 ; i < n ; i++){
    double Yeild = 0;
    const int m = DeltaE[i] / dE;
    double stopping_power[m];
    double cross_section[m];
    for (int j =0 ; j < m ; j++){
    stopping_power[j]= gr1->Eval(E[i]);
    cross_section[j] =  gr2->Eval(E[i]);
    Yeild = Yeild + ( cross_section[j] * pow(10,-27) / stopping_power[j] ) * dE ;
    E[i] = E[i] - dE;
    }
    cout << Yeild << endl;
   
    }

}






































void graph2()
{
   ifstream inputfile;
   inputfile.open("C13_data.txt");
    const int n =11;
    Double_t E[n],stop_pow1[n],stop_pow2[n],sigma[n],DeltaE[n];
    for (Int_t i=0;i<n;i++) {
    inputfile >> E[i]  >> DeltaE[i] >> stop_pow1[i] >> stop_pow2[i] >> sigma[i];
        cout << E[i]<<endl;
    }
                                         
    TGraph *gr1 = new TGraph(n,E,stop_pow2);
    TGraph *gr2 = new TGraph(n,E,sigma);
    
    double dE = 0.001;
    for (int i =0 ; i<n ; i++){
    double Yeild =0;
    const int m =DeltaE[i]/dE;
    double stopping_power[m];
    double cross_section[m];
    for (int j =0 ; j<m ; j++){
    stopping_power[j]= gr1->Eval(E[i]);
    cross_section[j] =  gr2->Eval(E[i]);
    Yeild = Yeild + (cross_section[j]*pow(10,-27)/stopping_power[j] )*dE;
    E[i] = E[i] - dE;
    }
    cout << Yeild << endl;
    }
}


void graph3()
{
   ifstream inputfile;
   inputfile.open("C132_data.txt");
    const int n =11;
    Double_t E[n],stop_pow1[n],stop_pow2[n],sigma[n],DeltaE[n];
    for (Int_t i=0;i<n;i++) {
    inputfile >> E[i]  >> DeltaE[i] >> stop_pow1[i] >> stop_pow2[i] >> sigma[i];
    }
                                         
    TGraph *gr1 = new TGraph(n,E,stop_pow2);
    TGraph *gr2 = new TGraph(n,E,sigma);
    
    double dE = 0.001;
    for (int i =0 ; i<n ; i++){
    double Yeild =0;
    const int m =DeltaE[i]/dE;
    double stopping_power[m];
    double cross_section[m];
    for (int j =0 ; j<m ; j++){
    stopping_power[j]= gr1->Eval(E[i]);
    cross_section[j] =  gr2->Eval(E[i]);
    Yeild = Yeild + (cross_section[j]*pow(10,-27)/stopping_power[j] )*dE;
    E[i] = E[i] - dE;
    }
    cout << Yeild << endl;
    }
}


void graph4()
{
   ifstream inputfile;
   inputfile.open("c13_new_data.txt");
    const int n =11;
    Double_t E[n],stop_pow1[n],stop_pow2[n],sigma[n],DeltaE[n];
    for (Int_t i=0;i<n;i++) {
    inputfile >> E[i]  >> DeltaE[i] >> stop_pow1[i] >> stop_pow2[i] >> sigma[i];
    }
                                         
    TGraph *gr1 = new TGraph(n,E,stop_pow2);
    TGraph *gr2 = new TGraph(n,E,sigma);
    
    double dE = 0.001;
    for (int i =0 ; i<n ; i++){
    double Yeild =0;
    const int m =DeltaE[i]/dE;
    double stopping_power[m];
    double cross_section[m];
    for (int j =0 ; j<m ; j++){
    stopping_power[j]= gr1->Eval(E[i]);
    cross_section[j] =  gr2->Eval(E[i]);
    Yeild = Yeild + (cross_section[j]*pow(10,-27)/stopping_power[j] )*dE;
    E[i] = E[i] - dE;
    }
    cout << Yeild << endl;
    }
}



void graph5()
{
   ifstream inputfile;
   inputfile.open("Aldata2.txt");//or new.txt
    const int n =27;
    Double_t E[n],stop_pow1[n],stop_pow2[n],sigma[n],DeltaE[n];
    for (Int_t i=0;i<n;i++) {
    inputfile >> E[i]  >> DeltaE[i] >> stop_pow1[i] >> stop_pow2[i] >> sigma[i];
    }
                                         
    TGraph *gr1 = new TGraph(n,E,stop_pow2);
    TGraph *gr2 = new TGraph(n,E,sigma);
    
    double dE = 0.001;
    for (int i =0 ; i<n ; i++){
    double Yeild =0;
    const int m =DeltaE[i]/dE;
    double stopping_power[m];
    double cross_section[m];
    for (int j =0 ; j<m ; j++){
    stopping_power[j]= gr1->Eval(E[i]);
    cross_section[j] =  gr2->Eval(E[i]);
    Yeild = Yeild + (cross_section[j]*pow(10,-27)/stopping_power[j] )*dE;
    E[i] = E[i] - dE;
    }
        
    cout << Yeild << endl;
    
     
    }

}


