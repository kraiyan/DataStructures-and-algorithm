#include<iostream>
using namespace std;




 int sumofArray(int n){

               if(n==0){


                   return 0;
               }



            int prev=sumofArray(n-1);
             return n + prev;
}
      int powerof(int n,int p){


                 if(p==0){

                        return 1;
                 }


                 return n*powerof(n,p-1);
                 
      }
      int fibonacci(int n){


              if(n==0||n==1){
                   return n;

              }
               return fibonacci(n-1)+fibonacci(n-2);
      }


int main(){


               
            cout<<powerof(10,3)<<endl;
            cout<<fibonacci(10);
      


    return 0;

}