#include<iostream>
using namespace std;
int main(){
    int p;
    cout<<"wprowadz liczbe punktow: "<<endl;
    cin>>p;
    if (0<=p && p<=60){
        if (p>40){
            cout<<"grupa zaawansowana";
        }
        else if(p>20){
            cout<<"grupa srednozaawansowana";
        }
        else{
            cout<<"grupa podstawowa";
        }
    }
    else{
        cout<<"podaj liczbe od 0 do 60"<<endl;
    }
    return 0;
}
