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
    int pieces = 8*pizzas;
    if ((pieces)<guests) {
        cout << "Za mało pizzy względem liczby gości!";
    }
    else {
        int guest_pieces, host_pieces;
        guest_pieces = pieces/guests;
        host_pieces = pieces%guests;
        cout << "Każdy otrzyma " << guest_pieces << " kawałków (kawałki), dla organizatora zostanie " << host_pieces << " kawałków (kawałki)";

    }

    return 0;
}
