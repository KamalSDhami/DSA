// Rotate array by D places 

#include<iostream>
#include<vector>
#include <set>
#include<algorithm>
using namespace std;

void Brute_Force (vector<int> arr, int d){ //O(n)
    d = d% arr.size();
    vector<int> temp(d);
    for (int i = 0; i< d; i++){
        temp[i] = arr[i];
    }
    for (int i =0, j = d; j< arr.size(); i++, j++){
        arr[i] = arr[j];
    }
   for (int i = arr.size()-d, j = 0; j< temp.size(); i++, j++){
        arr[i] = temp[j];
   }

   // print array 
   cout <<"array brute force : ";
   for (int i : arr){
       cout << i << " ";
    }
    cout<<endl;
}

void Optimal (vector<int> arr,int d ){ //O (n)
    d = d % arr.size();
    reverse(arr.begin(), arr.begin()+d);
    reverse(arr.begin()+d, arr.end());
    reverse(arr.begin(), arr.end());
    
    // print array 
    cout <<"array optmial : ";
    for (int i : arr){
        cout << i << " ";
    }
    cout << endl;
}

int main(){
    vector<int> array ={3,2,-1,4,-2,-1};
    Brute_Force(array,2) ; //O(n log n)
    Optimal(array,2) ; // O(n)
    return 0;
}