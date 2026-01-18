//left rotate array by 1

#include<iostream>
#include<vector>
#include <set>
#include<algorithm>
using namespace std;


void Optimal (vector<int> arr ){ //O (n)
    int temp = arr[0];
    for(int i = 0 ; i< arr.size() -1; i++){
        arr[i] = arr[i+1];
    }
    arr[arr.size()-1] = temp;

    // print the array
    cout <<"array : ";
    for (int i : arr){
        cout << i << " ";
    }
}

int main(){
    vector<int> array ={3,2,1,4,2,7};
    Optimal(array) ; // O(n)
    return 0;
}