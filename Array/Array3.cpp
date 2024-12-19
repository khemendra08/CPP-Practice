#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n,key;
    cin>>n;

    int a[1000] = {0};

    for(int i =0; i<n; i++){
        cin>>a[i];

    }
    //Algorithm to find the largest and smallest number in an array
    int largest = INT_MIN;
    int smallest = INT_MAX;
    for(int i=0; i<n; i++){

        // largest = max(laegest , a[i]);
        // smallest = min(smallest , a[i]);  --. you can use threse two condition to avoid the if else condition
        if(a[i]>largest){
            largest = a[i];
        }
        if(a[i]<smallest){
            smallest = a[i];
        }
    }
    // cout<"Largest "<<largest<<endl;
    // cout<" Smallest "<<smallest<<endl;










    return 0;
}