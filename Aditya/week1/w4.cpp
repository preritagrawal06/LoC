#include <iostream>
using namespace std;

int main(){
int a,b,c;

cout<<"Enter first number";
cin>>a;
cout<<"Enter second number";
cin>>b;
cout<<"For adition = 1\n"<<"For subtraction = 2 \n"<<"For multiplication = 3\n"<<"For division = 4 \n";
cin>>c;
switch(c){
case 1:
cout<<a+b;
break;
case 2:
cout<<a-b;
break;
case 3:
cout<<a*b;
break;
case 4:
cout<<a/b;
break;
default:
cout<<"Wrong operater";
break;

}
return 0;
}