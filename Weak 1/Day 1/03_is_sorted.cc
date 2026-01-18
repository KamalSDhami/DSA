// check if array is sorted

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool Optimal (vector<int> arr){
    for (int i = 1 ; i< arr.size() ; i++){ // O(n)
        if (arr[i] >= arr[i-1]){
            continue;
        }else{
            return false;
        }
    }
    return true;
}

int main(){
    // vector<int> array ={2,4,1,5,3,5};
    vector<int> array ={1,2,3,4,5,6};
    cout <<"Optimal: " << Optimal(array) << endl; // O(n)
    return 0;
}