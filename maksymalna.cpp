#include<iostream>
using namespace std;
int main(){
int a, b, c;
cout<<"Wprowadz liczby(w kolejnosci a,b,c):"<<endl;
cin>>a>>b>>c;
    if(a>=b && a>=c){
        cout<<"A ("<<a<<")jest najwieksze";
    }
    else if(b>=a && b>=c){
        cout<<"B ("<<b<<")jest najwieksze";
    }
    else{
        cout<<"C ("<<c<<")jest najwieksze";
    }
return 0;
}
