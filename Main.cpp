#include <bits/stdc++.h>

using namespace std;
vector<int> quickSort(vector<int> arr) {
    
    int start = 0;
    int pivot = arr[0];
    int end = arr.size() - 1 ;
    while(start < end ){
        while(arr[start] <= pivot  ){
            start++;
        }
        while(arr[end] > pivot  ){
            end--;
        }
        if(start < end){
        int temp = arr[end];
        arr[end] = arr[start];
        arr[start] = temp;
        }
        
        }
    for(int n : arr){
        cout << n << "  " ;
    }
    cout << endl;
    int temp = arr[end];
    arr[end] = pivot;
    arr[0] = temp;
    
    return arr;
}

int main(){
    int n ;
    cout << "Enter number of elements:";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the array :";

    for (int i = 0; i < n; i++) {
        int num ;
        cin >> num;

        arr[i] = num;
    }

    vector<int>  ans = quickSort(arr);
    for(int n : ans){
        cout << n << "  ";
    }

}