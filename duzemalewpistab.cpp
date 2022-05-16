#include<iostream>
using namespace std;
const int N=6;
int tab[N];
int tabduze[N/2];
int tabmale[N/2];
int najm=0, najw=0;
void w(){
    for(int i=0; i<N; i++){
        cout<<"wpisz liczbe:\n";
        cin>>tab[i];
    }
}
void test(){
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
}
void test2(){
for(int i=0;i<N;i++){
    if (tab[i]>tab[i-1]){
        najw=tab[i];
        }
    else if (tab[i]<=tab[i-1]){
        najm=tab[i];
    }
}
}
void r(){
    cout<<"najwieksza"<<endl;
    for(int i=0;i<N/2;i++){
        cout<<tabduze[i]<<", ";
    }
    cout<<endl;
    cout<<"najmniejsza"<<endl;
    for(int i=0;i<N/2;i++){
        cout<<tabmale[i]<<", ";
    }
}
void r2(){
    cout<<"najwieksza"<<endl<<najw<<endl;
    cout<<"najmniejsza"<<endl<<najm<<endl;
}
int main(){
w();
test2();
r2();
return 0;
}
