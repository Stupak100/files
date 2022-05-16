#include<iostream>
using namespace std;

const int N=6;
int tab[N]={6,3,2,4,5,8};
int tabduze[N/2];
int tabmale[N/2];

int main(){
    for(int i=0;i<N;i+=2){
        if(tab[i]>tab[i+1]){
            tabduze[i/2]=tab[i];
            tabmale[i/2]=tab[i+1];

        }
        else{
            tabmale[i/2]=tab[i];
            tabduze[i/2]=tab[i+1];

        }
    }
    cout<<"wieksze"<<endl;
    for(int i=0;i<N/2;i++){
        cout<<tabduze[i]<<", ";
    }
    cout<<endl;
    cout<<"mniejsze"<<endl;
    for(int i=0;i<N/2;i++){
        cout<<tabmale[i]<<", ";
    }
return 0;
}
