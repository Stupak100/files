#include<iostream>
using namespace std;
int a,b,c,i=0;

//void dziel(){
//do{
//    c=a%b;
//    a=b;
//    b=c;
//   }
//while(b);
//}

void odejm(){
do{
	if(a>b)
		a=a-b;
	else
		b=b-a;
    i++;
   }
while(a!=b);
}

int main(){
cout<<"1: Dzielenie, 2: Mnozenie"<<endl;
cin>>c;
cout<<"podaj a i b:"<<endl;
cin>>a>>b;
if (c==1){
//	dziel();
}
else{
	odejm();
}
cout<<a<<endl<<i;
return 0;
}


