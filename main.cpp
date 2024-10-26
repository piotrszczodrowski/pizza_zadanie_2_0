#include <iostream>
using namespace std;
int main()
{
    int guests, pizzas;
    cout << "Podaj liczbę gosci: ";
    cin >> guests;
    cout << endl;
    cout << "Podaj liczbę placków pizzy: ";
    cin >> pizzas;
    cout << endl;
    if ((pizzas*8)<guests) {
        cout << "Za mało pizzy względem liczby gości!";
    }
    else {
        cout << "Każdy otrzyma " << pizzas*8/guests << " kawałków (kawałki), dla organizatora zostanie " << (pizzas*8)%guests << " kawałków (kawałki)";

    }

    return 0;
}
