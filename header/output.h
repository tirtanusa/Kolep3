#include<iostream>
#include<fstream>
using namespace std;

class output{
public:
  void cetak(){
    cout<<"Penginputan SKS\n";
    cout<<"Masukkan NIM : "<<data_file[0]<<endl;
    cout << "Masukkan nama mahasiswa : "<<data_file[1]<<endl;
    cout << "Masukkan Mata Kuliah : "<<data_file[2]<<endl;
    cout << "Masukkan jumlah SKS : "<<data_file[3]<<endl;
    cout<<"Total pembayaran : "<<"Rp. "<<jsks;
  }

void getData(){
  ambil_data.open("../temp/input.txt");
  while(!ambil_data.eof()){
    ambil_data<<data_file[index];
    index +=1;
  }
  ambil_data.close();

  ambil_data.open("../temp/temp_proses.txt");
  while(!ambil_data.eof()){
    ambil_data>jsks;
  }
}

private:
  fstream ambil_data;
  string data_file[20];
  string jsks;
  int index=0;
};