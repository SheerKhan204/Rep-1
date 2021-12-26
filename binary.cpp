#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter a positive integer: ";
    cin >> num;
    cout << "Binary equivalent of " << num << " is ";

    char bin[33] = {0}; //an int can be max 32 bits
    int i = 0;
    while(num > 0)
    {
        bin[i++] = num%2 + '0';
        num = num/2;
    }

    int len = i;
    char c;
    for(i = 0; i < len/2; i ++)
    {
        c = bin[i];
        bin[i] = bin[len - 1 - i];
        bin[len - 1 - i] = c;
    }
    cout << bin << endl;
    return 0;
}

