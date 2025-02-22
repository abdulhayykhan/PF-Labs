#include<iostream>
using namespace std;
int main()
{
    char *p1;
    int a = 8;
    p1 = (char*)&a;  // Casting to char* to avoid type mismatch
    cout << p1 << endl;
    return 0;
}