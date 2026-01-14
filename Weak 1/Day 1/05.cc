// find smalest index (0-based) where target appare in the array 

#include<iostream>
#include<vector>
#include <set>
#include<algorithm>
using namespace std;


int Optimal (vector<int> arr,int target ){ //O (n)
    for(int i = 0 ; i< arr.size(); i++){
        if (arr[i] == target){
            return i;
        }
    }
    return -1;
}

int main(){
    vector<int> array ={3,2,-1,4,-2,-1};
    cout <<"Optimal: " << Optimal(array,4) << endl; // O(n)
    return 0;
}