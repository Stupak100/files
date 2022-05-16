#include<iostream>
using namespace std;
int main(){
    int a,b,x;
    cout<<"podaj a i b:"<<endl;
    cin>>a>>b;
    if (a==0){
        if(b==0){
            cout<<"nieskonczenie wiele rozwiazan";
        }
        else{
            cout<<"rownanie sprzeczne";
        }
    }
    else{
        x=(-b/a);
        cout<<"x wynosi: "<<x;
    }
    return 0;
}


