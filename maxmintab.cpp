#include<iostream>
using namespace std;

const int N=6;
int tab[N]={6,3,2,4,5,8};
int najm=0;
int najw=0;

int main(){
    for(int i=0;i<N;i++){
    if (tab[i]>tab[i-1]){
        najw=tab[i];
        }
    else if (tab[i]<=tab[i-1]){
        najm=tab[i];
    }
}
    cout<<"najwieksza"<<endl<<najw<<endl;
    cout<<"najmniejsza"<<endl<<najm<<endl;
return 0;
}
