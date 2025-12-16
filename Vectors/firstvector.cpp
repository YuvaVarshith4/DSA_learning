#include<bits/stdc++.h>
using namespace std;

// arrays : static allocation (stack) (compile time)
// vectors : dynamic allocation (heap) (runtime)
int main(){
    vector<int> vec(5,0); //  Here 5 is the size and 0 is the value for all 5 indices
    cout << vec[0] << endl;
    cout << vec[1] << endl;
    cout << vec[2] << endl;
    cout << vec[3] << endl;
    cout << vec[4] << endl;


    vector<char> vecna = {'a','b','c','d','e'};

    for(char k: vecna){ //for each
        cout << k << endl;
    }

    cout<<vecna.size()<<endl;  //for size
    vecna.push_back('f');   //attach element at the end of the vector
    vecna.pop_back();         //removes/pops the last element of the vector
    cout<<vecna.front()<<endl;            //outputs the first element of the vector
    cout<<vecna.back()<<endl;             //output the last element of vector 
    cout<<vecna.at(2)<<endl;           //returns the value at the 2nd index of the vector
    
/*
* **Size** is the number of elements currently present in the vector.
* **Capacity** is the amount of memory allocated for the vector.
* Capacity is always **greater than or equal to size**.
* `push_back()` **increases size** and increases capacity **only when capacity is full**.
* `pop_back()` **decreases size** but **does not change capacity**.
* Capacity usually grows automatically (often doubles) to make insertions efficient.
*/
    return 0;
}