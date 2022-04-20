#include <fstream>
using namespace std;

class Proses {
public:
  void iProses();
  void hitung();
  void oProses();

private:
  int sks, distot;
  ifstream getdata;
  ofstream outdata;
};

void Proses::iProses() {
  int i = 1;
  fstream in;
  in.open("../temp/datainputan.txt");
  while (!in.eof()) {
    if (i == 4) {
      in >> sks;
    } else {
      i++;
    }
  }
  in.close();
}
void Proses::hitung() {
  sks *= 125.000;
  distot = sks - (sks * 0, 2);
}

void Proses::oProses() {
  outdata.open("../temp/temp_proses.txt");
  outdata << distot;
  outdata.close();
}