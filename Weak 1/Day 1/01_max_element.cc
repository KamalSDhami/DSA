// Find the max element of an array 

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int Brute_Force (vector<int> arr ){
    sort(arr.begin(), arr.end()); // O(n log n)
    return arr[arr.size() - 1];// O(1)
}

int Optimal (vector<int> arr){
    int maxi = -1;
    for (int value: arr){ // O (n)
        if (maxi < value){
            maxi = value;
        }
    }
    return maxi;
}

int main(){
    vector<int> array ={5,2,7,2,4};
    cout <<"Brute Force: " << Brute_Force(array) << endl; //O(n log n)
    cout <<"Optimal: " << Optimal(array) << endl; // O(n)
    return 0;
}