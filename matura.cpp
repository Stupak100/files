#include<iostream>
using namespace std;
int main(){
    float p, m;
    m=100;
    cout<<"podaj liczbe punktow"<<endl;
    cin>>p;
    if(p<=m && p>=0){
        p=((p/m)*100);
        if(p>=(m*0.3){
            cout<<"zdales";
        }
        else{
            cout<<"nie zdales";
        }
    }
    else{
        cout<<"poaj liczbe z zakresu";
    }
return 0;
}
