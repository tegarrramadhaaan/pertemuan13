#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main()
{
   string baris;
   string namafile;

    cout << "memasukan nama file : ";
    cin >> namafile;

    ofstream outfile; 

    outfile.open(namafile + ". txt", ios::out);
}