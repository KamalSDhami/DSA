#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;

void print(vector<int>arr, string s){
    cout << s << " : ";
    for (int i = 0 ; i<arr.size() ; i++){
        cout << " "<< arr[i];
    }
    cout<< endl;
}
   vector<int> findDisappearedNumbers(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        print(nums,"sorted");
        vector <int> missing;
        int prev = 1;
        for (int i = 0 ; i< nums.size() ; i++){
            if(i!= 0 && nums[i] == prev-1){
                cout<< "Pass : " << nums[i] <<" prev-1 : "<< prev-1 <<endl;
                continue;
            }
            if (prev != nums[i]){
                cout << "Push "<< prev << " num : "<<nums[i]<<endl;
                missing.push_back(prev);
            }
            cout<< "skip : " << "prev: "<< prev << " nums : "<< nums[i]<<endl;
            prev++;
        }
        for (int i = prev+1 ; i<= nums.size(); i++){
            missing.push_back(i);
        }
        return missing;
    }

int main(){
    // vector<int> arr ={4,3,2,7,8,2,3,1};
    vector<int> arr ={4,3,2,7,7,2,3,1};
    vector<int> missing = findDisappearedNumbers(arr);
    print(missing,"missing ");

    return 0;
}