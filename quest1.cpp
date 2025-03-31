//Problem Statement: Given an array, we have to find the smallest element in the array.
#include<bits/stdc++.h>
using namespace std;
 
int sortArr(vector<int>& arr) {
    sort(arr.begin(),arr.end());
    return arr[0];
}

int large(vector<int>& arr){
    sort(arr.begin(),arr.end());
    return arr[arr.size()-1];
}
 
int main() {
    vector<int> arr1 = {2,5,1,3,0};
    vector<int> arr2 = {8,10,5,7,9};
   
    cout<<"The smallest element in the array is: "<<sortArr(arr1)<<endl;
    cout<<"The largest element in the array is: "<<large(arr2);
   
    return 0;
}