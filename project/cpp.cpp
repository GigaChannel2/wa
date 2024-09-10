#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
  char c;
  do{
    int v1;
    int v2;
    int ops;
    int totpl;
    int totm;
    int totb;
    int totx;
    int totp;
    int b;
    cout << "Nominal Pertama: ";
    cin >> v1;
    cout << "Nominal Kedua: ";
    cin >> v2;
    cout << "1.Tambah 2.Kurang 3.Kali 4.Bagi 5.Pangkat ";
    cin >> ops;
    totp = v1;
    for (b=1; b<v2; b++)
        {
          totp = totp*v1;
        }
    switch(ops)
    {
      case 1:
        totpl = v1 + v2;
        cout << "Jawabanya adalah " << totpl;
        break;
      case 2:
        totm = v1 - v2;
        cout << "Jawabannya adalah " << totm;
        break;
      case 3:
        totx = v1*v2;
        cout << "Jawabannya adalah " << totx;
        break;
      case 4:
      	totb = v1/v2;
      	cout << "Jawabannya Adalah " << totb;
      	break;
      case 5:
        cout << "Jawabannya Adalah " << totp;
        break;
    }
    cout << "\nContinue calculating? Press Y If Yes, Press Anything If No ";
    cin >> c;
   } while (c=='y');
}