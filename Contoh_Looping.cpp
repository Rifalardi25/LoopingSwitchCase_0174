#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{// Deklarasi Variabel
    int n;
    int perulanganWhile = 0;
    int perulanganDo = 0;

    // Perulangan dengan for

    cout << "Perulangan for pencacah naik" << endl;
    for (n = 0; n < 5; n++)
    {
        cout << "Nilai n = " << n << " Selamat Datang" << endl;
    }
    cout << "Nilai n terakhir = " << n << endl;
    cout << endl;

    cout << "Perulangan for pencacah turun" << endl;
    // Perulangan dengan for
    for (n = 5; n > 0; n--)
    {
        cout << "Nilai n = " << n << " Selamat Datang" << endl;
    }
    cout << "Nilai n terakhir = " << n << endl;
    cout << endl;

    cout << "Perulangan while" << endl;

    srand(time(0));

    n = rand() % 10;

    cout << "Nilai awal n = " << n << endl;

    while (n < 7)
    {
        cout << "Niali n = " << n << endl;
        n = rand() % 10;
        perulanganWhile++;
    }
    cout << "Jumlah Perulangan = " << perulanganWhile << endl;
    cout << "Nilai n terakhir = " << n << endl;


}
