/*
  Björn Bidar	      
  ITA-E1
  04.12.2012
*/




#include <iostream>
#include <cstdio>
using namespace std;e

int main() {
  float K, P, T, Z, result;
  int choice, need_K, need_P, need_T, need_Z;
  
  cout << "Bitte  zu Berechnende Variable w\303\244hlen";
  cout << "\
  1. K \n \
  2. P \n \
  3. T \n\
  4. Z\n";
  
  cin	>> choice;
  
  switch (choice) {
    case 'K': need_P; need_T=1; ;need_Z=1; break;
    case 'P': need_K=1; need_T=1; need_Z=1; break;
    case 'T': need_K=1; need_P=1; need_Z=1; break;
    case 'Z': need_K=1; need_P=1; need_T; break;
  }
  
  if (need_K)
  {
    cout	<< "Bitte K eingeben";
    cin		>> K;
  }
  
  if (need_P) 
  {
    cout	<< "Bitte P eingeben";
    cin		>> P;
  }
  
  if (need_T)
  {
    cout	<< "Bitte T eingeben";
    cin		>> T;
  }
  
  if (need_Z) {
    cout	<< "Bitte Z eingeben";
    cin		>> Z;
  }
  switch (choice) {
    case 'K': result=3600*Z/P*T;break; 
    case 'P': result=3600*Z/K*T;break;
    case 'T': result=3600*Z/P*K;break;
    case 'Z': result=K*P*T/3600; break;
  }
    
    
  cout << choice << ":" << result;
  
  
  return 0;
  
}
