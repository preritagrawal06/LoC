#include <iostream>
using namespace std;

int main(){
int i,a,b,c;
 
for(i=1;i<11;i++){
    a=i%3;
    b=i%5;
  
    if(a==0){
    
         cout<<"Fizz"<<"\n";
         
    } else if (b==0){
        cout<<"BUZZ"<<"\n";
    } else{
        cout<<i<<endl;
    }
   
}

    return 0;
}