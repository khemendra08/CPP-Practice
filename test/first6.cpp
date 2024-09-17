//calculate distance 
#include<iostream>
using namespace std;
int main(){
int u,v,a,d;
cout<<"Enter u,v,a";
cin>>u>>v>>a;
d = (v*v-u*u)/(2*a);
cout<<"Distance is "<<d<<endl;
return 0;
}