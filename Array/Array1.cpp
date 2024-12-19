#include<iostream>
using namespace std;
int main(){
    //init of an array
    int a[10] = {1,2,3};

    // //size of an array
    cout<<sizeof(a)<<endl;

    // //no of element in the array
     int n = sizeof(a)/sizeof(int);
     cout<<n<<endl;

    //taking input all the element from the user 
    for(int i=0; i<5; i++){
        cin>>a[i];
    }

    //update a single index
    a[8] = 100;

    //print all the first n  element
    for(int i=0; i<10; i++){
        cout<<a[i]<<", ";
    }
  




    return 0;
}