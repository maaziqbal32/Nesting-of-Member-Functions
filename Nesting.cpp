#include <iostream>
#include <string>
using namespace std;

class binary{
  private:
     string s;
     void check_bin(void);
  public:
        void read(void);
        
        void ones_compliment(void);
        void display(void);
};

void binary::read(void){
    cout<<"Enter a binary number: "<<endl;
    cin>>s;
}
void binary::check_bin(void){
  for(int i=0; i<s.length(); i++){
    if(s[i]!='0' && s[i]!='1'){
      cout<<"Invalid binary number"<<endl;
      exit (0);
      
    }
  }
}

void binary::ones_compliment(void){
  check_bin();
  for(int i=0; i<s.length(); i++){
    if(s[i]=='0'){
      s[i]='1';
    }
    else if(s[i]=='1'){
      s[i]='0';
    }
  }
  cout<<"The ones compliment of the binary number is: "<<s<<endl;
}

void binary::display(void){
   for(int i=0; i<s.length(); i++){
    cout<<s[i]<<endl;
   }
}

      
int main(){
  binary number;
  number.read();
  number.ones_compliment();
  number.display();
    return 0;
}