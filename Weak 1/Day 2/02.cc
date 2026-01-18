#include<iostream>
#include<vector>
#include<set>
using namespace std;
//find the union of two sorted arrays
/*
brute force 
remove duplicate from both
find union 
remove duplicate if present in output 

or 
marger first and then remove duplicate ; // S : O(m+n)

or
create a set 
if order : incertion O(logn)
if unorder : O(1) but we hove to sort the ouput in the end O(n logn)
tc = O(n1logn1) + o(n2logn2)


optimal
tak i in arr1 and j in arr2 compare both and add the sort one in arr and move it to next place, take k adn oput in output array and cke if smallest one i greater tehn k
if one array end copy the 2nd array in op but compare it with the k 

Tc = o(n1+ n2)
sc = O(k)

HW : Leetcode 88
*/
void print(vector<int>arr, string s){
    cout << s << " : ";
    for (int i = 0 ; i<arr.size() ; i++){
        cout << " "<< arr[i];
    }
    cout<< endl;
}
vector<int> bruteforce(vector<int> num1,vector<int> num2){
    set<int> s;
    for (int num:num1){
    s.insert(num);
    }
    for (int num:num2){
    s.insert(num);
    }

    vector<int> marge(s.size());
    int i = 0 ;
    for (int num:s){
        marge[i++]= num;
    }

    print(marge,"bruteforce");
    return marge;
}

vector<int> unionSort(vector<int> num1, vector<int> num2){
    int n = num1.size();
    int m = num2.size();
    vector<int> res;
    int i = 0,j =0;
    while(i< n && j<m){
        if ( num1[i] <= num2[j]){// taking element from first array
            if (res.size() == 0 || num1[i] > res.back()){
                res.push_back(num1[i]);
            }  
            i++;
        }else{// taking element from second array 
            if(res.size()== 0 || num2[j]> res.back()){
                res.push_back(num2[j]);
            }
            j++;
        }
    }
    while (i< n){
        if (res.size() == 0 || res.back() < num1[i]){
            res.push_back(num1[i]);
        }
        i++;
    }
    while (j< m){
        if (res.size() == 0 || res.back() < num2[j]){
            res.push_back(num2[j]);
        }
        j++;
    }
    print(res,"optimal");
    return res;
}

int main(){
    vector<int> v1= {1,3,4,6},v2 = {1,2,3,7,8};
    bruteforce(v1,v2);
    cout <<"t1"<<endl;
    unionSort(v1,v2);

}