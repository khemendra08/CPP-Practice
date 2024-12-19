//union of two arrays

#include<iostream>
#include<vector>
using namespace std;

int main(){
    int arr[] = {2,4,6,8};
    int sizea = 4;
    int brr[] = {1,3,7};
    int sizeb = 3;

    vector<int>ans;
    //push all element of vector arr
    for(int i=0; i<sizea; i++){
        ans.push_back(arr[i]);
    }

    //push all element of vector brr
    for(int i=0; i<sizeb; i++){
        ans.push_back(brr[i]);
    }

    //print ans
    cout<<"printing ans array"<<endl;
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i] << " ";
    }

    return 0;


}