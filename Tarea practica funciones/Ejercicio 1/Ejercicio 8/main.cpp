#include <iostream>

using namespace std;

bool aniobiciesto(int anio){
    if(anio % 4 == 0){
        if (anio%100 != 0 || anio % 400 == 0)
            return true;
    }
    return false;
}
