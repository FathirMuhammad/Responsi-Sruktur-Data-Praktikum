#include <conio.h>
#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
    string a, b, c;
    char kriteria;
    float nilai_tugas, nilai_uts, nilai_uas, na;
    cout << "BIODATA NILAI " << endl << endl;
    cout << "Nama= "; getline(cin,a);
    cout << "\nNim= "; getline(cin,b);
    cout << "\nMata kuliah= "; getline(cin,c);
    cout << "\nNilai tugas= "; cin >> nilai_tugas;
    cout << "\nNilai Uts   = "; cin >> nilai_uts;
    cout << "\nNilai Uas   = "; cin >> nilai_uas;
    nilai_tugas = nilai_tugas * 0.3;
    nilai_uts = nilai_uts * 0.3;
    nilai_uas = nilai_uas * 0.4;
    na = nilai_tugas * nilai_uts * nilai_uas;
 
    cout << endl;
    cout << "Mahasiswa yang bernama " << ">>" << a << " << " << endl;
    cout << "\nNIM        = " << b << endl;
    cout << "\nMatakuliah        = " << c << endl;
    cout << "\nNilai tugas x 30% = " << nilai_tugas << endl;
    cout << "\nNilai uts x 30%   = " << nilai_uts << endl;
    cout << "\nNilai uas x 40%   = " << nilai_uas << endl;
    cout << "\nmemperoleh nilai akhir  = " << na << endl;
    cout << "\nDengan kriteria   = " << kriteria;
    if(na >= 85){
        cout << "A";
    }else if(na >= 80){
        cout << "AB";
    }else if(na >= 70){
        cout << "B";
    }else if(na >= 65){
        cout << "BC";
    }else if(na >= 55){
        cout << "C";
    }else if(na >= 40){
        cout << "D";
    }else{
        cout << "E";
    }

    getch();        
}
