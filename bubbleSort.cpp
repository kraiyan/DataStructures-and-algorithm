#include <iostream>
using namespace std;

int main(){

              int n;
              cin>>n;
              int arr[n];
;                 for(int i=0;i<n;i++){
                         cin>>arr[i];
                 }
        
     int Count=1;

     while(Count<n){

                 for(int i=0;i<n-Count;i++){

                           if(arr[i]>arr[i+1]){
                                
                               int temp=arr[i];
                                arr[i]=arr[i+1];
                                arr[i+1]=temp;
                                

                           }
                           
                 }Count++;



     }



             for(int j=0;j<n;j++){
                     arr[j]<<" ";
             }


    return 0;
}