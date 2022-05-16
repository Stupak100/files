#include<iostream>
using namespace std;
int main(){
    int a, suma;
    suma=0;
    for(int i=1; i<=5; i++){
        cout<<"podaj a:"<<endl;
        cin>>a;
        suma=suma+a;
    }
    cout<<"suma wynosi: "<<suma;
return 0;
}
