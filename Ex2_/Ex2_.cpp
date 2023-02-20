// Ex2_.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
typedef unsigned char byte;

void Swap(int* pa, int* pb) {
    int c = *pa;
    *pa = *pb;
    *pb = c;
}

int main()
{
    /*int x = 3;
    int *p = &x;
    cout << x << ' ' << *p << ' ' << p << endl;
    p++;
    cout << p << endl;
    cout << p - &x << endl;
    byte* pb = (byte*)--p;
    for (byte* pt = pb; pt - pb < sizeof(int); pt++)
        cout << (int)*pt << ' ';
    cout << endl;*/
    int a = 3, b = 5;
    cout << a << b << endl;
    Swap(&a, &b);
    cout << a << b << endl;
}