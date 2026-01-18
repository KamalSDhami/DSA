// Find the 2nd max element of an array 

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int Brute_Force (vector<int> arr ){
    sort(arr.begin(), arr.end()); // O(n log n)
    int i,value;
    for (i =1 ; i< arr.size()-1   ; i++){
        value = arr[(arr.size() -1) - i] ;// O(1)
        if (value != arr[arr.size()-1]){
            return value;
        }
    }
    return -1;
}

int Optimal (vector<int> arr){
    int maxi = -1;
    for (int value: arr){ // O (n)
        if (maxi < value){
            maxi = value;
        }
    }
    int maxi2 =-1;
    for (int value: arr){ // O (n)
        if (maxi2 < value && maxi > value){
            maxi2 = value;
        }
    }
    return maxi2;
}

int main(){
    vector<int> array ={2,4,1,5,3,5};
    cout <<"Brute Force: " << Brute_Force(array) << endl; //O(n log n)
    cout <<"Optimal: " << Optimal(array) << endl; // O(n)
    return 0;
}