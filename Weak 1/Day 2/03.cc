#include<iostream>
#include<vector>

using namespace std;

/*
find the missing no in an array.
number 0 to 7
or 1 to 8 
slote : 6

{7,1,3,0,4,6,5}

better (+1)
sort the array and check index +1
Tc = o(n2)
sc = o(1)

brute force  : (nested loop)
i loop for countingm, j loop for searching in the array 
sort o(n^2)
sc = O(1)

optimal
use formula : 
sum all the element, 
n(n+1)/2

using xor
use loop to find xor  of the input array
use loop to find xor of no 0 - n
xor both output xor
TC = O(n)+O(n)
o(n)
sc = O(1)

*/

int optimal(vector<int>arr){
    int arr_sum =0;
    for (int num :arr){
        arr_sum += num;
    }
    int n = arr.size();
    int total = (n+1)* (n+2)/2;
    int sum = abs(total- arr_sum);
    return sum;
}
int optimal2(vector<int>arr){
    int sum= 0;
    for (int num:arr){
        sum^=num;
    }
    for (int i = 1; i<=arr.size()+1; i++){
        sum ^= i;
    }
    return sum;
}
int main(){
    vector<int> num= {1,2,3,4,5,6,7,8};
    cout << optimal(num)<<endl;
    cout << optimal2(num)<<endl;
    return 0;
}