//Marc Westrup
#include <iostream>
using namespace std;
 
 
 int faku_lit (int n)
{  
        
        int i,fakultaet=1;
        

        
        for (i=1; i<=n; i++)
        {
        fakultaet=fakultaet*i;
        }
         
        return fakultaet;

}

main (){
        int wert;
cout<<"geben sie eine zahl ein";
cin>>wert;
cout<<"zahl:"<<faku_lit(wert);
        system("pause");
}