#include<iostream>
using namespace std;
int main(){
    int a,n,i,iloczyn;
    iloczyn=1;
    cout<<"podaj ile liczb ma byc pomnozonych:"<<endl;
    cin>>n;
    for(i=1; i<=n; i++){
        cout<<"podaj liczbe a:"<<endl;
        cin>>a;
        iloczyn=iloczyn*a;
        }
    cout<<"Iloczyn wynosi: "<<iloczyn;
return 0;
}
