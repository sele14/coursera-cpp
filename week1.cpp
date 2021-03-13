#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>

using namespace std;


/////// Week 1 Challenge

// Class


// define class
class Pair{
    public: // access specifier
        // declare variables
        int a;
        int b;
        // define class method
        int sum(){
            return a + b;
        }
};

// main(); program entry point / code runner
int main(){
    // create instance of class (object)
    Pair p; 

    // get attributes and assign value
    p.a = 100;
    p.b = 200;

    if (p.a + p.b == p.sum()) {
        cout << "p.sum() returns " << p.sum() << " instead of (p.a + p.b): " << (p.a + p.b) << endl;
    }

    return 0;
}