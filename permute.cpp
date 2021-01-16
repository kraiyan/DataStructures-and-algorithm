#include<iostream>

using namespace std;




      void permute1(string s, string ans){

              if(s.length()==0){


                      cout<<ans<<endl;
                      return;
              }
               
                        char ch=s[0];
                        int code=ch;
                        string ros=s.substr(1);
                        permute1(ros,ans);
                        permute1(ros,ans+ch);
                        permute1(ros,ans + to_string(code));

                   
      }

int main(){


              permute1("abc","");
      

    return 0;
}