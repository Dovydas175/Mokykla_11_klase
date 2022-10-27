//Dovydas Þiedelis IIIA
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int n;
    int A[30];
    int suma;
    double vidmt, vidmen;
    ifstream fd("Duomenys.txt");
    fd >> n;
    for(int i = 0; i < n; i++)
    {
        fd << A[i] << endl;
    }
    fd.close();
    suma = 0;
    for (int i = 0; i < n; i++)
    {
        suma = suma + A[i];
    }
    vidmt = suma / n;

    ofstream fr("Rezultatai.txt");
    fr << suma << endl;
    fr << vidmt << endl;

    fr.close();
    return 0;
}
