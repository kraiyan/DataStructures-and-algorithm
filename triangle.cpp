#include<iostream>
using namespace std;

int main(){

 int n=5;
         for(int i=1;i<=n;i++){
                  for(int j=1;j<=n-i;j++){
                         cout<<" ";
                  }

                   for(int k=1;k<=2*i-1;k++){
                         cout<<"*"<<" ";
                   }

                   cout<<endl;

                    for(int l=n;l>=1;l--)
                    {
                        for(int j=n;j<=n-l;j++){
                         cout<<" ";
                  }   
                           for(int k=1;k<=2*i-1;k++){
                         cout<<"*"<<" ";
                   }

                    }
         }




}