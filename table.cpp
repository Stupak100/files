#include<iostream>
using namespace std;
const int N=10;
float tab[N];
void w(){
    for(int i=0; i<N; i++){
        cout<<"wpisz liczbe:\n";
        cin>>tab[i];
    }
}
r(){
int zer=0, AAAA=0;
    //cout<<"wprowadzone liczby:\n";
    for(int i=0; i<N; i++){
        if(tab[i]==0){
            cout<<"0 ma indeks: "<<i+1;
            AAAA=1;
        }
        else{
            zer=1+zer;
        }
    }
    if(zer==0){
    }
    else{
        if(AAAA==0){
            cout<<"brak elementu zerowego";
        }
    }
}
int main(){
w();
r();
return 0;
}
