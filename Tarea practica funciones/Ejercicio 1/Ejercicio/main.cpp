#include <iostream>

using namespace std;

bool esMayor(int edad) {
    return (edad>=18);
}

int main()
{
    cout << esMayor(17) << endl;
    return 0;
}
