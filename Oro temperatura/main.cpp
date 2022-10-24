//Dovydas Ziedelis 2 Uzd.
#include <iostream>
using namespace std;
int main()
{
    int t, n, temp;
    cout << "t = ";
    cin >> t;
    cout << "n = ";
    cin >> n;
    for (int i = 0; i <= n; i++){
    cout << "Temperaturu pokyciai ";
    cin >> temp;
            t += temp;
    }
    cout "Paskutinio oro stebejimo temperatura " << t;
    return 0;
}
