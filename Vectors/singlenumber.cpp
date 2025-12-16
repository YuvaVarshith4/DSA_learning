#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> vecna = {2,1,4,1,2};
    int ans = 0;
    for(int val : vecna){
        ans ^= val;
    }
    cout << ans;
    return 0;
}