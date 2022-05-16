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

    cout<<"wprowadzone liczby:\n";
    for(int i=N-1; i>=0; i--){
        cout<<tab[i]<<", ";
        }
    }
int main(){
w();
r();
return 0;
}
