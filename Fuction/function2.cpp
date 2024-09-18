//function returning the max between two numbers
// #include<iostream>
// using namespace std;

// //function declaration
// int max(int num1, int num2);

// int main(){

//     //local variable declaration:
//     int a = 384;
//     int b = 543;
//     int c;
//     //calling a function to get a max value:
//     c = max(a,b);
//     cout<<" Max value is : "<< c <<endl;
//     return 0;
// }
// //function returning the max between the two numbers:
// int max(int num1, int num2){
//     //local variable declaration:
//     int result;
//     if(num1 > num2)
//     result  = num1;
//     else
//     result = num2;
//     return result;
// }


//function returning the max between the three numbers:
#include<iostream>
using namespace std;
int maxim(int a, int b, int c){
    if(a > b && a > c )
    return a;
    else if (b>c)
    return b;
    else return c;

}
int main(){
    int x=10, y=15, z=5, r;
    r = maxim(x,y,z);
    cout<< r << endl;
    return 0;
}



