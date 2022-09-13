#include <iostream>
using namespace std;

int main()
{
    char b, letter = 'A';

    cout << "Enter the last character to be printed (uppercase only): ";
    cin >> b;

    for(int i = 1; i <= (b-'A'+1); ++i)
    {
        for(int j = 1; j <= i; ++j)
        {
            cout << letter << " ";
        }
        ++letter;

        cout << endl;
    }
    return 0;
}
