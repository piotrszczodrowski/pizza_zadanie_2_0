#include <iostream>
using namespace std;
int main()
{
    const int slices_per_pizza = 8;
    int guests, pizzas;
    cout << "Podaj liczbę gosci: ";
    cin >> guests;
    cout << endl;
    cout << "Podaj liczbę placków pizzy: ";
    cin >> pizzas;
    cout << endl;
    int pieces = slices_per_pizza*pizzas;
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
