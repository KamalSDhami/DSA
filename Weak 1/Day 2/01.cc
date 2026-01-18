//move all zeros to the end of the array

#include<iostream>
#include <vector>

using namespace std;
//bruteforce ()//2nd array and sand the non 0 
void bruteforce(vector<int> arr){
    int n = arr.size();
    vector<int> temp(arr.size(),0);
    int i=0 ,j=0;
    while(i<n){//fill temp with non 0 element
        if (arr[i]!=0){
            temp[j++] = arr[i];
        }
        i++;
    }
    //fill non 0 element on original array
    for (i=0; i<j ; i++){
        arr[i]= temp[i];
    }
    //initilize the end element with 0
    for (i= j ; i< n ;i++){
        arr[i]= 0;
    }

    //print the array 
    cout << "bruteforce : ";
    for (i = 0 ; i<n ; i++){
        cout << " "<< arr[i];
    }
    cout<< endl;
}
void optimal (vector <int> arr){ //O(n) T(1)
    int n = arr.size();
    int i, j;
    for (i = 0 ; i<n ; i++){
        if (arr[i] == 0 ){
            break;
        }
    }
    
    for (j = i+1; j<n; j++){
        if (arr[j] !=0 ){
            swap(arr[i], arr[j]);
            i++;
        }
    }
    //print the array 
    cout << "optmial : ";
    for (i = 0 ; i<n ; i++){
        cout << " "<< arr[i];
    }
    cout<< endl;
}

int main(){
    vector<int> arr={2,5,0,5,2,0,3};
    bruteforce(arr);
    optimal(arr);
}