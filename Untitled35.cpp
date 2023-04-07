#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    string input;
    cout << "Sikistirilacak bir dize girin: ";
    cin >> input;

    double compress = log2(input.length());
    cout << "sikistirilmis uzunluk: " << compress << endl;

    return 0;
}
