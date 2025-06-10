#include <iostream>
using namespace std;

int main()
{
    try
    {
        cout << "selamat belajar di prodi TI UMY" << endl;
        throw 5 ;
        cout << "pernyataan tidak akan dieksekusi " << endl;
    }
    catch(int a)
    { 
        cout << "pengecualian akan dieksekusi" << endl;
    }
    catch(...)
    {
      cout << "default pengecualiaan dieksekusi" << endl;
    }

    return 0;
    
}