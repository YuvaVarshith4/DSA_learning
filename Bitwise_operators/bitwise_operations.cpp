#include <iostream>
using namespace std;

int main(){
    int a = 4, b = 9;
    cout << (a & b) << endl; //AND
    cout << (a | b) << endl; //OR
    cout << (a ^ b) << endl; //XOR
    cout << (a << 1) << endl; //Left shift :- Here 4 (100) will become 8 (1000) ------ // if a1 << a2, then answer will become a1*2^(a2)
    cout << (b >> 1) << endl; //Right Shift :- Here 9 (1001) will become 4 (100) ----- // if a1 >> a2, then answer will become a1/2^(a2)
    return 0;
}