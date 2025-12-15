#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {2,1,5,8};
    int sum = 0, product = 1;
    for (int i = 0; i<4; i++){
        sum+=arr[i];
        product*=arr[i];
    }
    cout<<"sum is"<<sum<<" "<<"product is"<<product<<endl;
    return 0;

}