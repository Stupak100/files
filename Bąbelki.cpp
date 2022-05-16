#include<iostream>
using namespace std;

const int N=9;
int tab[N];
int  i, a, b;
bool SortTak=false;

int main(){
cout<<"Podaj liczby:\n";
for(i=0; i<=N; i++){
	cin>>tab[i];
}

while (SortTak==false){
    SortTak=true;
    for(i=0; i<N; i++){
        if (tab[i] > tab[i+1]){
            SortTak=false;
            swap(tab[i], tab[i+1]);
        }
    }
}

for(i=0; i<=N; i++){
	cout<<tab[i]<<", ";
}

return 0;
}
