#include<iostream>
using namespace std;
int main(){
    float x,y,z;
    cout<<"wprowadz x"<<endl;
    cin>>x;
    cout<<"wprowadz y"<<endl;
    cin>>y;
    cout<<"wprowadz z"<<endl;
    cin>>z;
    if(x>0 && y>0 && z>0){
        if(x>y && x>z){
            cout<<"x ("<<x<<") jest najwieszy";
            }
        else if (y<x && y<z){
           cout<<"y ("<<y<<") jest najwieszy";
        }
        else{
            cout<<"z ("<<z<<") jest najwieszy";
        }
    }
    else{
        cout<<"podaj liczby wieksze od 0";
    }
}
