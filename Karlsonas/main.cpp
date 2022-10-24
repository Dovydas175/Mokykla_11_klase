//Dovydas Ziedelis 4 Uzd.
#include <iostream>
using namespace std;
int main()
{
    int n, m, uog, suvalg, lik;
    cout << "n = ";
    cin >> n;
    cout << "m = ";
    cin >> m;
    suvalg = 0;
    for (int i = 0; i <= m; i++){
        cout << "Kas valge uogiene: ";
        cin >> uog;
        if(uog = 1){
          suvalg  += 2;
        }
        else if(uog = 2){
            suvalg += 5;
        }
        else suvalg += 3;
    }
    lik = n - suvalg;
    cout << "Uogienes likutis ";
    cin >> lik;
    return 0;
}
