#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Rus");
    cout << "������� ����� ��� ������: ";
    int a;
    cin >> a;
    switch (a) {
    case 1: {
        cout << "�����������." << endl;
        break;
    }
    case 2: {
        cout << "�������." << endl;
        break;
    }
    case 3: {
        cout << "�����." << endl;
        break;
    }
    case 4: {
        cout << "�������." << endl;
        break;
    }
    case 5: {
        cout << "�������." << endl;
        break;
    }
    case 6: {
        cout << "�������." << endl;
        break;
    }
    case 7: {
        cout << "�����������." << endl;
        break;
    }

    default: cout << "������� ���������� ����� ��� ������!" << endl;
    }
}
#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Rus");
    int n;
    cout << "������� �����: ";
    cin >> n;
    while (n)
    {
        cout << n % 10 << endl;
        n /= 10;
    }
    return 0;
}