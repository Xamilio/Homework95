#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "ru");
    //1
    //char s;
    //cout << "������� ������: ";
    //cin >> s;
    //
    //if (s >= 65 && s <= 90 || s >= 97 && s <= 122)
    //{
    //    cout << "��� �����";
    //}
    //else if (s >= 48 && s <= 57)
    //{
    //    cout << "��� �����";
    //}
    //else if (s == 44 || s == 33 || s == 45 || s == 46 || s == 63)
    //{
    //    cout << "��� ��������� ����";
    //}
    //else
    //{
    //    cout << "��� ���-�� ������";
    //}

    //2
    int v;
    double cost = 0;
    cout << "(1)�������: 1 ��� = 2 ���,(2)��������: 1 ��� = 3 ���\n";
    double d;
    cout << "������� ������������ ���������: ";
    cin >> d;
    cout << "�������� �������: ";
    cin >> v;
    switch (v)
    {
        case(1):
        {
            cost = d * 2;
            cout << "���������: " << cost;
            break;
        }
        case(2):
        {
            cost = d * 3;
            cout << "���������: " << cost;
            break;
        }
    }

}

