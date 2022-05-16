#include<iostream>
#include<string>
using namespace std;
int a=0,b=0;
int main(){
   do{
    cout<<"podaj liczbe: "<<endl;
    cin>>a;
    b=a+b;
    cout<<"suma liczb wynosi: "<<b<<endl;
   }
while(a!=0);
}
