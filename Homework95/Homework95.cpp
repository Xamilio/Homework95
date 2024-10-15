#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "ru");
    //1
    //char s;
    //cout << "Введите вимвол:     ";
    //cin >> s;
    //
    //if (s >= 65 && s <= 90 || s >= 97 && s <= 122)
    //{
    //    cout << "Это буква";
    //}
    //else if (s >= 48 && s <= 57)
    //{
    //    cout << "Это цыфра";
    //}
    //else if (s == 44 || s == 33 || s == 45 || s == 46 || s == 63)
    //{
    //    cout << "Это розділовий знак";
    //}
    //else
    //{
    //    cout << "Это что-то другое";
    //}

    //2
    int v;
    double cost = 0;
    cout << "(1)Вадафон: 1 мин = 2 грн,(2)Киевстар: 1 мин = 3 грн\n";
    double d;
    cout << "Введите длительность разговора:     ";
    cin >> d;
    cout << "Выберите вариант: ";
    cin >> v;
    switch (v)
    {
        case(1):
        {
            cost = d * 2;
            cout << "Стоимость: " << cost;
            break;
        }
        case(2):
        {
            cost = d * 3;
            cout << "Стоимость: " << cost;
            break;
        }
    }

}

