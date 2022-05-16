#include<iostream>
using namespace std;
const int n=10;
int maksy;
int tab[n];
void wprowadz(){
    for(int i=0;i<n;i++){
        cout<<"Podaj liczbe:"<<endl;
        cin>>tab[i];
        if(tab[i]>tab[i-1]){
            maksy=tab[i];
        }
    }
}
void wypisz(){
    cout<<"wpisane liczby:"<<endl;
    for(int i=0;i<n;i++){
        cout<<tab[i]<<", ";
    }
    cout<<endl<<"najwieksza:"<<endl<<maksy;
}
int main(){
    wprowadz();
    wypisz();
return 0;
}
