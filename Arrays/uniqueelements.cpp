#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {1,4,5,6,2,1,2,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0; i<n; i++){
        bool found = false;
           for(int j = 0; j<n; j++){
            if(i!=j && arr[j] == arr[i]) {
                found = true; 
                break;
            }
           }
        if (found == false) {
            
            cout<<arr[i]<<endl; 
            
        }
    }
    return 0;
}