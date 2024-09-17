//calculate distance between two points 
#include<iostream>
using namespace std;
int main(){
int x1,x2,y1,y2,d;
cout<<"Enter x1,x2,y1,y2";
cin>>x1>>x2>>y1>>y2;
d = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
cout<<"Distance between two points is "<<d<<endl;
return 0 ;



}