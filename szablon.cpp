#include<iostream>
using namespace std;

const int Pion=2;
const int Poziom=3;
int a[Pion][Poziom];

void r(){
	cout<<"wprowadz liczby:"<<endl;
	for(int i=0; i<Pion; i++){
		for(int j=0; j<Poziom; j++){
			cin>>a[i][j];
		}
		cout<<endl;
	}
}
int main(){

return 0;
}
