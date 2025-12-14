#include<bits/stdc++.h>
#include <climits>
using namespace std;
int main(){
    int arr[] = {12,9,18,-15,30};
    int smallest = INT_MAX;

    for(int i : arr){
        smallest = min(smallest,i);
    }

    cout << smallest;
    

    return 0;
}