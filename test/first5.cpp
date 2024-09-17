//Findinng roots of a quadratic equation
#include<iostream>
#include<cmath>
using namespace std;
// int main(){
// float a,b,c,r1,r2;//i make mistake here i put interger and flot value in float
// cout<<"Enter a,b,c,";
// cin>>a>>b>>c;
// r1 = (-b+sqrt(b*b-4*a*c))/(2*a);
// r2 = (-b-sqrt(b*b-4*a*c))/(2*a);
// cout<<"Root is "<<r1<<" "<<r2<<endl;
// return 0;
// }
int main(){
    int a,b,c;
    float root1,root2;
    cout<<"Enter 3 values";
    cin>>a>>b>>c;
    root1 = (-b+sqrt(b*b-4*a*c))/(2*a);
    root2 = (-b-sqrt(b*b-4*a*c))/(2*a);
    cout<<"Root is "<<root1<<" "<<root2;
    return 0;
}