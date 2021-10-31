#include <iostream>
#include <iomanip>

using namespace std;
void position(double mass[], int size, int x, int k = 0)
{
    for (int i = 0; i < size; i++)
        if (mass[i] == x)
        {
            cout << i << " ";
            k++;
        }
    if (k == 0)
    {
        cout << 0 << endl;

    }

}

int main()
{
    system("color F0");
    int size, k = 0;
    int A = -9;
    int B = 9;
    cout << "Enter the size of the array: "; cin >> size;
    cout << "Array: ";
    double* mass = new double[size], x;
    srand(time(0));

    for (int i = 0; i < size; i++)
    {
        mass[i] = A + rand() % ((B + 1) - A);
        cout << setw(2) << mass[i] << " ";
    }
    cout << "\nEnter the element: "; cin >> x;
    cout << "Position: ";
    position(mass, size, x, k);
    delete[]mass;
    system("pause");
    return 0;
}
#include <iostream>
#include <iomanip>

using namespace std;
void numbers(double mass[], int size)
{
    for (int i = 0; i < size; i++)
        if (mass[i] < mass[i - 1] - mass[i - 2])
        {
            cout << mass[i] << " ";

        }

}

int main()
{
    system("color F0");
    int size;
    int A = -9;
    int B = 9;
    cout << "Enter the size of the array: "; cin >> size;
    cout << "Array: ";
    double* mass = new double[size];
    srand(time(0));

    for (int i = 0; i < size; i++)
    {
        mass[i] = A + rand() % ((B + 1) - A);
        cout << setw(2) << mass[i] << " ";
    }
    cout << "Numbers ";
    numbers(mass, size);
    delete[]mass;
    system("pause");
    return 0;
}