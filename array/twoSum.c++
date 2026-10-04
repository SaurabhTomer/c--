#include<iostream>
#include <climits>
using namespace std;

bool twoSum(int arr[], int n, int target) {
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i] + arr[j] == target) {
                cout << "Pair found: " << arr[i] << "  + " << arr[j] << endl;
                return true;
            }
        }
    }
    cout << "No pair found" << endl;
    return false;
}

int maxNum(int arr[] , int n ){
    int maxi = INT_MIN;
    for(int i = 0 ; i  < n;i++){
        if( arr[i] > maxi){
            maxi = arr[i];
        }
    }
    return maxi;
}

void reverse(int arr[] , int n){
    int left = 0 ; int right = n-1;
    while(left < right){
        swap(arr[left] , arr[right]);
        left++;
        right--;
    }
    for(int i = 0 ; i < n ; i++){
        cout << arr[i] << " ";
    }
}

int missing(int arr[] , int n){
    int sum = (n*(n+1))/2;
    int arrSum = 0;
    for(int i = 0 ; i < n ; i++){
        arrSum = arr[i] + arrSum;
    }
    return sum  - arrSum;
}
void moveZeros(int arr[], int n) {
    int left = 0;

    // left pointer finds zeros
    // right pointer finds non-zeros
    for(int right = 0; right < n; right++) {
        if(arr[right] != 0) {
            swap(arr[left], arr[right]);  // bring non-zero to front
            left++;
        }
    }
}
int main() {
    // int arr[] = {1, 20, 3, 4, 5 ,10 , 9};
    // int arr[] = {1, 2, 4, 5, 6};
    //  int arr[] = {1, 2, 4, 5,7, 6};
    int arr[] = {0, 1, 0, 3, 12};
    int n = sizeof(arr) / sizeof(arr[0]);  // ✅ correct way to get size
    // int n = 6;                    
    // twoSum(arr, n, 7);
    // int res = maxNum(arr , n);
    // cout << res;
    // reverse(arr , n);
    // int res = missing(arr , n);
    // cout << res;
    
    return 0;
}
