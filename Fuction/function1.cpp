//Add two numbers using function
#include<iostream>
using namespace std;
//Fubction declaration
float add(float x, float y){
    //local variable declaration:
    float z;
    z = x+y;
    return z;
}
int main(){
    float x = 3.6,y = 9.3, z;
    //calling function to get sum:
    z = add(x,y);
    cout<< z <<endl;
    return 0;
}