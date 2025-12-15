#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {12,9,18,-15,30};
    int smallINDEX = 0;
    int largeINDEX = 0;
    for(int i=0;i<5;i++){
        if(arr[i] < smallINDEX) smallINDEX=i;
        if(arr[i] > largeINDEX) largeINDEX=i;
    }
    swap(arr[smallINDEX],arr[largeINDEX]);
    return 0;
}