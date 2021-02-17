#include <iostream>
#include<cstdio>
#include<bits/stdc++.h>

using namespace std;

int main() {
	// your code goes here
    int debit;
    float balance;
    cin>>debit>>balance;
    if(debit < balance)
    {
          if(debit%5==0){
                if(debit>0 && debit<2001  && balance>0 && balance<2001)
                  {
                  cout<<fixed<<setprecision(2)<<(balance-debit)-0.50;
                  }
                else{cout<<fixed<<setprecision(2)<<balance;}
                
          }
          else{cout<<fixed<<setprecision(2)<<balance;}
                
          }
          else{cout<<fixed<<setprecision(2)<<balance;}
   
  
	return 0;
}
