//Dovydas Ziedelis IIIA Arbuzas
#include <iostream>
#include <fstream>

using namespace std;
void Skaityti(int n, double A[]);
void Vidurkis(int n, double A[], double &vid);
int main()
{
    int n;
    double A[];
    ifstream fd ("Duomenys.txt");
    fd >> n;
    Skaityti(n, A);
    Vidurkis(n, A, vid);
    return 0;
}

void Skaityti(int & n, double A[])
{
    ifstream fd("Duomenys.txt");
    fd >> n;
    for(int i = 0; i < n; i++)
    {
        fd >> A[i];
    }
    fd.close();
}

void Vidurkis(int n, double A[], double &vid)
{
    double suma;
    for(int i = 0; i < n; i++)
    {
        suma += A[i];
    }
    vid = suma / n;
}
