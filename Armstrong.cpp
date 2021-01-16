#include<iostream>
using namespace std;
#include <math.h>

int main(){


       int n;
       cin>>n;
       int original=n;
       int sum=0;
       int lastDigit;
       


       while(n>0){


              lastDigit=n%10;
                 sum=sum+pow(lastDigit,3);
                 n=n/10;
       }

               if(original==sum){

                      cout<<"The number is armstrong";

               }
               else
               {
                   cout<<"the number is not an armstrong number";
               }
               
 
    return 0;

}