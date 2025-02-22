#include<iostream>
using namespace std;
int main()
{
    float num = 10;
    float *pt1 = &num;
    float **pt2 = &pt1;
    cout << " address of num = " << &num << endl;
    cout << " address stored by pt1 = " << pt1 << endl;
    cout << " value pointed by pt1 = " << *pt1 << endl;
    cout << " address of pt1 = " << &pt1 << endl;
    cout << " address stored by pt2 = " << pt2 << endl;
    cout << " value of num = " << **pt2 << endl;
    return 0;
}