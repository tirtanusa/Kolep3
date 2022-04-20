#include <string>
#include <fstream>
using namespace std;

class Masukan {
public:
  void inData();
  void outData();

private:
  string mhs;
  char matkul[50];
  int sks;
  int nim;
  int jsks;
};

void Masukan::inData() {
  cout << "Masukkan NIM :";
  cin >> nim;
  cout << "Masukkan nama mahasiswa : ";
  cin >> mhs;
  int y = 0;
  while (y == 0) {
    cout << "Masukkan Mata Kuliah : ";
    cin.ignore();
    cin.getline(matkul, 50);
    cout << "Masukkan jumlah SKS : ";
    cin >> sks;
    jsks += sks;
    cout << "selesai? (1 ya/ 0 tidak) ";
    cin >> y;
  }
}

void Masukan::outData() {
  ofstream oData;
  oData.open("../temp/datainputan.txt");
  oData << nim<<endl;
  oData << mhs<<endl;
  oData << matkul<<endl;
  oData << jsks;
  oData.close();
}