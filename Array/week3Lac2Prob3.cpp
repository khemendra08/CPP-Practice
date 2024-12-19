//intersection of two arrays:

#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int main(){
    vector<int>arr{1,2,3,4,6,8};
    vector<int>brr{3,4,9,10};
    vector<int>ans;

    //outer loop on arr vector
    for(int i=0; i<arr.size();i++){
        int element = arr[i];

        //for every element run loop on brr
        for(int j=0; j<brr.size(); j++){
            if(element == brr[j]){
                //mark
                brr[j] = INT_MIN;
                ans.push_back(element);
            }
        }
    }

    //print ans
    for(int i=0; i< ans.size(); i++){
        cout<< ans[i] <<" ";
    }

    cout<<endl;






    return 0;
}