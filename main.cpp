#include <iostream>

using namespace std;

int main()
{
    cout << "Enter A and B: ";
    int a, b;
    cin >> a >> b;


    if (a>b)
{
    cout <<"Max = " << a << '\n';
}
    else
 {
    cout <<"Max = " << b<< '\n';
 }

    if (a < b)
    {
        cout <<"Minimum is "<< a << '\n';
    }
    else
    {
        cout <<"Minimum is "<< b << '\n';
    }
    cout << "Sum: " << a + b << endl;
    cout << "Raz: " << a - b << endl;
    cout << "Proiz: " <<a*b<< endl;
    cout << "A + B = " << a + b << '\n'
         << "A - B = " << a - b << '\n'
         << "A * B = " << a * b << '\n'
         << "A / B = " << a / b << '\n';
}

