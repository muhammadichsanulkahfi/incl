#include <iostream>
using namespace std;

class Mahasiwa{
    public :
    int nim;
    string nama;
    float nilai;

    void printData(){
        cout << "Nim : " << nim << endl;
        cout << "Nama: " << nama << endl;
        cout << "Nilai : " << nilai << endl;
    }

};
int main(){
    Mahasiwa mhs;

    mhs.nim = 2024;
    mhs.nama = "abra";
    
}