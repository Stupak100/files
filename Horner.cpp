#include <iostream>
#include<cmath>
using namespace std;
const int N=13;
int suma=0, i, x,tab[N];
int main(){
    for(i=0; i<N;i++){
        cout<<"Podaj indeks:"<<endl;
        cin>>tab[i];
    }

    cout<<"Podaj liczbe potegowana:";
    cin>>x;

    for(i=0; i<N;i++){
        suma=(suma*x)+tab[i];
    }

    cout<<"Wynik to: "<<suma;
return 0;
}
