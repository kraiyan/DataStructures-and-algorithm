#include <iostream>
using namespace std;





  void printTheNumbers(int n){

         if(n==1){
                cout<<"1"<<endl;
                   return;
         }

         

         printTheNumbers(n-1);
               cout<<n<<endl;


}




bool arraySortedorNot(int arr[],int n){



         if(n==1||n==0){

              return true;

         }
         if(arr[n-1]<arr[n-2]){

                    return false;
         }
                return arraySortedorNot(arr,n-1);

                      
}


  int searching(int arr[],int k,int n){

              if(n<0){
                        return -1;
              }
              if(arr[n]==k){

                     return n;
              }

              return(arr,k,n-1);
 }

int main(){
                 


                 int arr[]={2,3,4,5};

             cout<<searching(arr,9,4);


    return 0;
}