#include <bits/stdc++.h>
using namespace std;

void swap(int *xp, int *yp)  { 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
} 

vector <int> selectionSort(vector <int> array) {
    
    for (int i = 0; i < array.size() ; i++) {
        
        int minIndex = i;
        //printArray(array);
        for (int j = i+1; j < array.size(); j++) {
            if (array[j] < array[minIndex]) {
                minIndex = j;
            }
        }
        //cout << endl;
        swap(&array[minIndex], &array[i]);
    }

    return array;
    
}

int main(int argc, char const *argv[]) {
    int t; cin >> t;
    while (t--) {
        int k, n; cin >> n>> k;
        vector<int> nums(k);
        int sum = 0;
        for (int i = 0; i < n; i++) {
            //cout<< "." << endl;
            cin >> nums[i];
        }
        nums = selectionSort(nums);

        int child=0;
        if(k>n-k){
            child=n-k;
        }else{
            child=k;
        }
        int counter1 =0,counter2=0;
        for(int i=0;i<nums.size()-child;i++){
            counter1+=nums[i];
        }
        for(int i=nums.size()-child;i<nums.size();i++){
            counter2+=nums[i];
        }
        cout <<counter1 -counter2<< endl;        
    }
    
    return 0;
}
