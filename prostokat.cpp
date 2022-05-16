#include<iostream>
using namespace std;
int main(){
    float a,b;
    cout<<"Podaj dlugosc pierwszego boku: "<<endl;
    cin>>a;
    cout<<"Podaj dlugosc drugiego boku: "<<endl;
    cin>>b;
    if (a>0 and b>0){
        cout<<"pole prostokata wynosi: "<<a*b<<endl;
    }
    else{
        cout<<"Podaj wartosc wieksza od zera"<<endl;
    }
    return 0;
}
