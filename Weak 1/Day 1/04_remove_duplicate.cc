// remove duplicate in-place from sorted array

#include<iostream>
#include<vector>
#include <set>
#include<algorithm>
using namespace std;

int Brute_Force (vector<int> arr ){
    set<int> s;
    for (int i = 0; i< arr.size() ; i++){  //O(n)
        s.insert(arr[i]); // O(log n) (n) ~ O (n log n)
    }
    int i = 0 ; 
    for (auto num: s){// O(n);
        arr[i++] = num;
    }


    // printing the element 
    cout << "Brute_force : " << endl;
    for (int k =0 ; k< i; k++){
        cout << arr[k] << " " ;
    }
    return i;
}

int Optimal (vector<int> arr){ //O (n)
    int i = 0;
    for (int j =1; j< arr.size() ; j++){
        if (arr[i] != arr[j]){
            i++;
            arr[i]=arr[j];
        }
    }
       // printing the element 
    cout << "Optimal : " << endl;
    for (int k =0 ; k< i+1; k++){
        cout << arr[k] << " " ;
    }
    return i+1 ;
}

int main(){
    vector<int> array ={1,2,3,3,4,5};
    cout <<"Brute Force: " << Brute_Force(array) << endl; //O(n log n)
    cout <<"Optimal: " << Optimal(array) << endl; // O(n)
    return 0;
}