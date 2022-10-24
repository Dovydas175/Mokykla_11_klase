//Dovydas Şiedelis 11A
#include <iostream>
using namespace std;
int main()
{
    int sk, suma, kvad, tsum, nsan;
    double vid;
    suma = 0;
    vid = 0;
    tsum = 0;
    nsan = 1;
    for(int i=0; i < 5; i++){
    cout << "Skaiciai = ";
    cin >> sk;
    suma += sk;
    suma = suma + sk;
    if (sk > 0){
            tsum += sk;
    }
    else nsan *= sk;
    }
    kvad = suma * suma;
    cout << "Skaiciu sumos kvadratas = " << kvad;
    vid = suma / 5;
    cout << " Skaiciu aritmetinis vidurkis = " << vid;
    cout << " Teigiamu skaiciu suma = " << tsum;
    cout << " Neigiamu skaiciu sandauga = " << nsan;

    return 0;
}
