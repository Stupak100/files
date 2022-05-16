#include<iostream>
using namespace std;

const int n=8;
int tab[n]={6,3,4,5,7,9,0,2};

int main(){
    int maks;
    for (int i=0; i<n; i++){
        if(i==0){
            maks=tab[i];
        }
        else if(tab[i]>maks){
            maks=tab[i];
        }
    }
    cout<<maks;
return 0;
}
