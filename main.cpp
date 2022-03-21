#include <iostream>

using namespace std;

int main()
{
    cout << "Enter A and B: ";
    int a, b;
    cin >> a >> b;
<<<<<<< HEAD
    if (a>b)
=======
        if (a>b)
>>>>>>> code: вывод максимума
        cout <<"Max = " << a << '\n';
    else
        cout <<"Max = " << b<< '\n';

<<<<<<< HEAD
=======
        if (a<b)
        cout <<"Min = " << a << '\n';
    else
        cout <<"Min = " << b << '\n';

>>>>>>> code: вывод минимума
    cout << "Sum: " << a + b << endl;
    cout << "Raz: " << a - b << endl;
    cout << "Proiz: " <<a*b<< endl;
    cout << "A + B = " << a + b << '\n'
         << "A - B = " << a - b << '\n'
         << "A * B = " << a * b << '\n'
         << "A / B = " << a / b << '\n';
}

