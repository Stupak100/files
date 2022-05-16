#include <iostream>
using namespace std;
int main(){
    int a, l, n;
    l=0;
    cout<<"Ile liczb?"<<endl;
    cin>>n;
    for(int i=1; i<=n; i++){
        cout<<"Podaj liczbe numer "<<i<<endl;
        cin>>a;
        if (a%3==0)
            l=l+1;
    }
    cout<<"Ilosc liczb podzielnych przez 3 wynosi: "<<l;
return 0;
}
