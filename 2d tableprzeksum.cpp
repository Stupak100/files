#include<iostream>
using namespace std;

const int Pion=5, Poziom=5;
int a[Pion][Poziom];
int suma=0;

void r(){
	cout<<"wprowadz liczby:"<<endl;
	for(int i=0; i<Pion; i++){
		for(int j=0; j<Poziom; j++){
			cin>>a[i][j];
		}
		cout<<endl;
	}
}
void w(){
	cout<<"suma przek¹tnej:"<<endl;
	for(int i=0; i<Pion; i++){
		suma=a[i][i]+suma;
	}
	cout<<suma;
}
//void iloczyn(){
//    for(int i=0; i<Pion; i++){
//		for(int j=0; j<Poziom; j++){
//			ilocz= a[i][j]*ilocz;
//		}
//	}
//    cout<<ilocz;
//}
int main(){
	r();
	w();
	//iloczyn();
	return 0;
}
