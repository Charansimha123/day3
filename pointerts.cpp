#include <iostream>
using namespace std;

int main(){

    int a,b;
    int *ptrA = &a;
    int *ptrB = &b;

    cout << "Please enter the value of a : ";
    cin >> a;

    cout << "Please enter the value of b : ";
    cin >> b;

    cout << "The value of (a,b) is (" << a << "," << b << ")" << endl;

    return 0;
}
2. String Pointer
Given the string “A string”. Print the letters “r” and “g” of the string (using the pointer).

#include <iostream>
using namespace std;

int main(){

    char myStr[] = "A string";
    char *ptr = myStr;

    cout << *(ptr+3) << endl;  // prints t
    cout << *(ptr+4) << endl;  // prints r
    cout << *(ptr+7) << endl;  // prints g

    return 0;
}

