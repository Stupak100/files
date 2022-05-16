//AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA

#include<iostream>
using namespace std;

const int N=4;
int tab[N][N], tabduze[N*N/2], tabmale[N*N/2];
int i,j, najw, najm, przed;

void test(){
    for (i=0;i<N;i++){
        for(int j=0;j<N;j+=2){
        if(przed>tab[i][j]){
            najw=tab[i][j];
            tabduze[j/2]=przed;
            tabmale[j/2]=tab[i][j];
        }
        else{
            najm=tab[i][j];
            tabmale[j/2]=przed;
            tabduze[j/2]=tab[i][j];

            }
        }
    }
}

void w(){
    cout<<"Wprowadz liczbe:";
    cin>>przed;
    tab[i][j]=przed;
    for (i=0;i<N;i++){
        for (int j=1;j<N;j++){
            cout<<"Wprowadz liczbe:";
            cin>>tab[i][j];
            test();
            przed=tab[i][j];
        }
    }
}

void r(){
    cout<<"Wprowadzone liczby:";
    for (i=0;i<N;i++){
        for (int j=0;j<N;j++){
            cout<<tab[i][j]<<", \n";
        }
    }
    cout<<"Wieksze z par:";
    for (int j=0;j<N*N/2;j++){
            cout<<tabduze[j];
    }
    cout<<"Mniejsze z par:";
    for (int j=0;j<N*N/2;j++){
            cout<<tabmale[j];
    }
    cout<<"najwieksza: "<<endl<<najw<<endl;
    cout<<"najmniejsza: "<<endl<<najm<<endl;
}


int main(){
    w();
    r();
    return 0;
}
