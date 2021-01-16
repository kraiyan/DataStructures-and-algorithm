#include <iostream>
using namespace std;

#include<string>

void reversing(string s){


            if(s.length()==0){
                    
                    return;

            }

              string ros=s.substr(1);
               reversing(ros);
              cout<<s[0];


}


 void replacepi(string p){

         if(p.length()==0){

              return;
         }


            if(p[0]=='p'&&p[1]=='i')
                     
                     {

                         cout<<"3.14";
                         replacepi(p.substr(2));
                     }

             else{

                      cout<<p[0];
                      replacepi(p.substr(1));
             }

         }




string   removeallduplicates(string s){


    if(s.length()==0){

              return "";

    }

      char ch=s[0];

      string ros=removeallduplicates(s.substr(1));

        if(ch==ros[0]){

                  return ros;
        }
        else
        {
             return ch+ros;
        }
        
}

int main()
{

      

      cout<<removeallduplicates("aaaaaaaaaaaaaaabbbbdjndmckekekmdckckcc");
          



    return 0;
}