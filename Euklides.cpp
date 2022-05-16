#include<iostream>
using namespace std;
int a,b,c;

void dziel(){
c=0;
do{
    c= a%b;
    a= b;
    b= c;
   }
while(b);
}

void odejm(){
do{
	if(a>b) 
		a= a-b;
	else
		b= b-a;
   }
while(a!=b);
}

int main(){
cout<<"1: Dzielenie, 2: Mnozenie"<<endl;
cin>>c;
cout<<"podaj a i b:"<<endl;
cin>>a>>b;
if (c==1){
	dziel();
}
else{
	odejm();
}
cout<<a;
return 0;
}


