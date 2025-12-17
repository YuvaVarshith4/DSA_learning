#include<bits/stdc++.h>
using namespace std;

int main(){
    int n = 5;
    int arr[5] = {1,2,3,4,5};
    int maxsum = INT_MIN;

    for(int st=0; st<n; st++){
        int presentsum = 0;
        for(int end=st; end<n; end++){
            presentsum += arr[end];
            maxsum = max(presentsum,maxsum);
        }
    }
    cout<<"Max subarray sum = "<< maxsum << endl;
    return 0;
}