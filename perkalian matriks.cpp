#include <iostream>

using namespace std;

int main() {
  int matriks1[10][10], matriks2[10][10], hasil[10][10];
  int i, j, k, m, n, p, q, jumlah = 0;
  cout << "Masukkan jumlah baris matriks ke-1: ";
  cin >> m;
  cout << "Masukkan jumlah kolom matriks ke-1: ";
  cin >> n;

  cout << "Masukkan jumlah baris matriks ke-2: ";
  cin >> p;
  cout << "Masukkan jumlah kolom matriks ke-2: ";
  cin >> q;

  if(n != p){
    cout << "Matriks tidak bisa dikalikan satu dengan yang lain.\n";
  } else {

    cout << "Masukkan elemen matriks ke-1: \n";
    for(i = 0; i < m; i++){
      for(j = 0; j < n; j++){
        cin >> matriks1[i][j];
      }
    }

    cout << "Masukkan elemen matriks ke-2: \n";
    for(i = 0; i < p; i++){
      for(j = 0; j < q; j++){
        cin >> matriks2[i][j];
      }
    }

    for(i = 0; i < m; i++){
      for(j = 0; j < q; j++){
        for(k = 0; k < p; k++){
          jumlah = jumlah + matriks1[i][k] * matriks2[k][j];
        }
        hasil[i][j] = jumlah;
        jumlah = 0;
      }
    }

    cout << "Hasil perkalian matriks: \n";
    for(i = 0; i < m; i++){
      for(j = 0; j < q; j++){
        cout << hasil[i][j] << "\t";
      }
      cout << endl;
    }

  }
  
  return 0;
}
