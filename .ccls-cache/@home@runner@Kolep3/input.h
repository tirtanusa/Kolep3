#include <string>
using namespace std;

class Masukan {
public:
  void inData();
  void outData();

private:
  int n;
  int hasil;
  string mhs;
  int mahasiswa;
  string matk[50];
  char matkul[50];
  int mk[50];
};

void Masukan::inData(){
  cout << "Masukkan nama mahasiswa : ";
  cin >> mhs;
  int y = 1;
  int i =1;
  int jumlah;
  while (y == 1) {
    cout << "Masukkan nama Mata Kuliah : ";
    cin.ignore();
    cin.getline(matkul,50);
    cout << "Masukkan jumlah SKS : ";
    cin >> mk[i];
    cout << "Sudah ? : (1 ya / 0 tidak)";
    cin >> y;
    jumlah += mk[i];
    i++;
  }
  cout << "Output" << endl;
  for (int j = 0; j < i; j++) {
    cout << "Nama mahasiswa : " << mhs << endl;
    cout << "Mata Kuliah : " << matk[i] << endl;
    cout << "Jumlah SKS : " << mk[i];
  }
}