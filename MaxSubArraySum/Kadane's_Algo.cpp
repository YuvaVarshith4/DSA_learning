#include <bits/stdc++.h>
using namespace std;

int main() {
  int n = 5;
  int arr[5] = {1, 2, 3, 4, 5};
  int maxsum = INT_MIN;
  int presentsum = 0;

  for (int end = 0; end < n; end++) {
    presentsum += arr[end];
    maxsum = max(presentsum, maxsum);
    if(presentsum < 0) presentsum = 0;
  }
  cout << "Max subarray sum = " << maxsum << endl;
  return 0;
}