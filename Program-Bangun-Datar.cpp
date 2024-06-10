#include <iostream>
#include <cmath> // Includ library matematika
using namespace std;

// Fungsi untuk menghitung luas persegi
double luasPersegi(double sisi) {
    return sisi * sisi;
}

// Fungsi untuk menghitung keliling persegi
double kelilingPersegi(double sisi) {
    return 4 * sisi;
}

// Fungsi untuk menghitung panjang sisi persegi
double sisiPersegi(double luas) {
    return sqrt(luas);
}

// Fungsi untuk menghitung luas persegi panjang
double luasPersegiPanjang(double panjang, double lebar) {
    return panjang * lebar;
}

// Fungsi untuk menghitung keliling persegi panjang
double kelilingPersegiPanjang(double panjang, double lebar) {
    return 2 * (panjang + lebar);
}

// Fungsi untuk menghitung diagonal persegi panjang
double diagonalPersegiPanjang(double panjang, double lebar) {
    return sqrt(pow(panjang, 2) + pow(lebar, 2));
}

// Fungsi untuk menghitung panjang persegi panjang
double panjangPersegiPanjang(double luas, double lebar) {
    return luas/lebar;
}

// Fungsi untuk menghitung lebar persegi panjang
double lebarPersegiPanjang(double luas, double panjang) {
    return luas/panjang;
}

// Fungsi untuk menghitung luas lingkaran
double luasLingkaran(double jariJari) {
    return M_PI * pow(jariJari, 2);
}

// Fungsi untuk menghitung keliling lingkaran
double kelilingLingkaran(double jariJari) {
    return 2 * M_PI * jariJari;
}

// Fungsi untuk menghitung diameter lingkaran
double diameterLingkaran(double jariJari) {
    return 2 * jariJari;
}

// Fungsi untuk menghitung jari-jari lingkaran
double jariJariLingkaran(double diameter) {
    return diameter/2;
}

// Fungsi untuk menghitung luas segitiga
double luasSegitiga(double alas, double tinggi) {
    return 0.5 * alas * tinggi;
}

// Fungsi untuk menghitung keliling segitiga
double kelilingSegitiga(double sisi1, double sisi2, double sisi3) {
    return sisi1 + sisi2 + sisi3;
}

// Fungsi untuk menghitung tinggi segitiga
double tinggiSegitiga(double luas, double alas) {
    return 2 * (luas/alas);
}

// Fungsi untuk menghitung alas segitiga
double alasSegitiga(double luas, double tinggi) {
    return 2 * (luas/tinggi);
}

// Fungsi untuk menghitung sisi segitiga
double sisiSegitiga(double keliling, double sisi1, double sisi2) {
    return keliling - sisi1 - sisi2;
}

int main() {
    int pilihanBangunDatar, pilihanRumus;
    char pilihanLanjut = '1';

    cout << "SELAMAT DATANG DI PROGRAM BANGUN DATAR!" << endl;
    cout << "DIBUAT OLEH: FAUZAN." << endl;
cout << "Ini merupakan program rumus bangun datar. Anda dapat dengan mudah mendapatkan nilai apa pun yang terkait dengan bangun datar." << endl;
    cout << "Siapa pun boleh mengambil, meng-copy, memodifikasi dan mengembangkan program ini sebagai acuan atau reprensi dalam belajar bahasa pemograman C++." << endl;
     cout << endl;
    cout << "-----------------------------------" << endl;
    cout << endl;
    cout << "Silahkan tekan enter untuk melanjutkan..." << endl;
    cin.get();

    while (pilihanLanjut == '1') {
        cout << "Rumus bangun datar apa yang ingin Anda cari? Silakan pilih 1-4. Untuk keluar dari program, pilih 5." << endl;
        cout << "1. Persegi." << endl;
        cout << "2. Persegi panjang." << endl;
        cout << "3. Lingkaran." << endl;
        cout << "4. Segitiga." << endl;
        cout << "5. Keluar dari program" << endl;
        cin >> pilihanBangunDatar;

        switch (pilihanBangunDatar) {
            case 1:
                cout << "Anda memilih persegi. Rumus mana yang ingin Anda cari?" << endl;
                cout << "1. Luas." << endl;
                cout << "2. Keliling." << endl;
                cout << "3. Panjang sisi" << endl;
                cout << "4. Keluar dari program." << endl;
                cin >> pilihanRumus;

                double sisiDariPersegi, luasDariPersegi;
                if (pilihanRumus == 1) {
                    cout << "Masukkan panjang sisi persegi: ";
                    cin >> sisiDariPersegi;
                    cout << "Luas persegi: " << luasPersegi(sisiDariPersegi) << endl;
                } else if (pilihanRumus == 2) {
                    cout << "Masukkan panjang sisi persegi: ";
                    cin >> sisiDariPersegi;
                    cout << "Keliling persegi: " << kelilingPersegi(sisiDariPersegi) << endl;
                } else if (pilihanRumus == 3) {
                    cout << "Masukkan luas persegi: ";
                    cin >> luasDariPersegi;
                    cout << "Panjang sisi persegi: " << sisiPersegi(luasDariPersegi) << endl;
                } else if (pilihanRumus == 4) {
                    // Keluar dari program.
                } else {
                    cout << "Pilihan rumus tidak valid.";
                }
                break;

            case 2:
                cout << "Anda memilih persegi panjang. Rumus mana yang ingin Anda cari?" << endl;
                cout << "1. Luas." << endl;
                cout << "2. Keliling." << endl;
                cout << "3. Diagonal" << endl;
                cout << "4. Panjang." << endl;
                cout << "5. Lebar." << endl;
                cout << "6. Keluar dari program." << endl;
                cin >> pilihanRumus;

                double panjangDariPersegiPanjang, lebarDariPersegiPanjang, luasDariPersegiPanjang;
                if (pilihanRumus == 1) {
                    cout << "Masukkan panjang persegi panjang: ";
                    cin >> panjangDariPersegiPanjang;
                    cout << "Masukkan lebar persegi panjang: ";
                    cin >> lebarDariPersegiPanjang;
                    cout << "Luas persegi panjang: " << luasPersegiPanjang(panjangDariPersegiPanjang, lebarDariPersegiPanjang) << endl;
                } else if (pilihanRumus == 2) {
                    cout << "Masukkan panjang persegi panjang: ";
                    cin >> panjangDariPersegiPanjang;
                    cout << "Masukkan lebar persegi panjang: ";
                    cin >> lebarDariPersegiPanjang;
                    cout << "Keliling persegi panjang: " << kelilingPersegiPanjang(panjangDariPersegiPanjang, lebarDariPersegiPanjang) << endl;
                } else if (pilihanRumus == 3) {
                    cout << "Masukkan panjang persegi panjang: ";
                    cin >> panjangDariPersegiPanjang;
                    cout << "Masukkan lebar persegi panjang: ";
                    cin >> lebarDariPersegiPanjang;
                    cout << "Diagonal persegi panjang: " << diagonalPersegiPanjang(panjangDariPersegiPanjang, lebarDariPersegiPanjang) << endl;
                } else if (pilihanRumus == 4) {
                    cout << "Masukkan luas persegi panjang: ";
                    cin >> luasDariPersegiPanjang;
                    cout << "Masukkan lebar persegi panjang: ";
                    cin >> lebarDariPersegiPanjang;
                    cout << "Panjang persegi panjang: " << panjangPersegiPanjang(luasDariPersegiPanjang, lebarDariPersegiPanjang) << endl;
                } else if (pilihanRumus == 5) {
                    cout << "Masukkan luas persegi panjang: ";
                    cin >> luasDariPersegiPanjang;
                    cout << "Masukkan panjang persegi panjang: ";
                    cin >> panjangDariPersegiPanjang;
                    cout << "Lebar persegi panjang: " << lebarPersegiPanjang(luasDariPersegiPanjang, panjangDariPersegiPanjang) << endl;
                } else if (pilihanRumus == 6) {
                    // Keluar dari program.
                } else {
                    cout << "Pilihan rumus tidak valid.";
                }
                break;

            case 3:
                cout << "Anda memilih lingkaran. Rumus mana yang ingin Anda cari?" << endl;
                cout << "1. Luas." << endl;
                cout << "2. Keliling." << endl;
                cout << "3. Diameter." << endl;
                cout << "4. Jari-jari." << endl;
                cout << "5. Keluar dari program." << endl;
                cin >> pilihanRumus;

                double jariJariDariLingkaran, diameterDariLingkaran;
                if (pilihanRumus == 1) {
                    cout << "Masukkan jari-jari lingkaran: ";
                    cin >> jariJariDariLingkaran;
                    cout << "Luas lingkaran: " << luasLingkaran(jariJariDariLingkaran) << endl;
                } else if (pilihanRumus == 2) {
                    cout << "Masukkan jari-jari lingkaran: ";
                    cin >> jariJariDariLingkaran;
                    cout << "Keliling Lingkaran: " << kelilingLingkaran(jariJariDariLingkaran) << endl;
                } else if (pilihanRumus == 3) {
                    cout << "Masukkan jari-jari lingkaran: ";
                    cin >> jariJariDariLingkaran;
                    cout << "Diameter Lingkaran: " << diameterLingkaran(jariJariDariLingkaran) << endl;
                } else if (pilihanRumus == 4) {
                    cout << "Masukkan diameter lingkaran: ";
                    cin >> diameterDariLingkaran;
                    cout << "Jari-jari Lingkaran: " << jariJariLingkaran(diameterDariLingkaran) << endl;
                } else if (pilihanRumus == 5) {
                    // Keluar dari program.
                } else {
                    cout << "Pilihan rumus tidak valid.";
                }
                break;

            case 4:
                cout << "Anda memilih segitiga. Rumus mana yang ingin Anda cari?" << endl;
                cout << "1. Luas." << endl;
                cout << "2. Keliling." << endl;
                cout << "3. Tinggi." << endl;
                cout << "4. Alas." << endl;
cout << "5. Salah satu sisi." << endl;
                cout << "6. Keluar dari program." << endl;
                cin >> pilihanRumus;

                double alasDariSegitiga, tinggiDariSegitiga, sisi1DariSegitiga, sisi2DariSegitiga, sisi3DariSegitiga, luasDariSegitiga, kelilingDariSegitiga;
                if (pilihanRumus == 1) {
                    cout << "Masukkan alas segitiga: ";
                    cin >> alasDariSegitiga;
                    cout << "Masukkan tinggi segitiga: ";
                    cin >> tinggiDariSegitiga;
                    cout << "Luas segitiga: " << luasSegitiga(alasDariSegitiga, tinggiDariSegitiga) << endl;
                } else if (pilihanRumus == 2) {
                    cout << "Masukkan sisi 1 segitiga: ";
                    cin >> sisi1DariSegitiga;
                    cout << "Masukkan sisi 2 segitiga: ";
                    cin >> sisi2DariSegitiga;
                    cout << "Masukkan sisi 3 segitiga: ";
                    cin >> sisi3DariSegitiga;
                    cout << "Keliling Segitiga: " << kelilingSegitiga(sisi1DariSegitiga, sisi2DariSegitiga, sisi3DariSegitiga) << endl;
                } else if (pilihanRumus == 3) {
                    cout << "Masukkan luas segitiga: ";
                    cin >> luasDariSegitiga;
                    cout << "Masukkan alas segitiga: ";
                    cin >> alasDariSegitiga;
                    cout << "Tinggi Segitiga: " << tinggiSegitiga(luasDariSegitiga, alasDariSegitiga) << endl;
                } else if (pilihanRumus == 4) {
                    cout << "Masukkan luas segitiga: ";
                    cin >> luasDariSegitiga;
                    cout << "Masukkan tinggi segitiga: ";
                    cin >> tinggiDariSegitiga;
                    cout << "Alas Segitiga: " << alasSegitiga(luasDariSegitiga, tinggiDariSegitiga) << endl;
                } else if (pilihanRumus == 5) {
                    cout << "Masukkan keliling segitiga: ";
                    cin >> kelilingDariSegitiga;
                    cout << "Masukkan sisi 1 segitiga: ";
                    cin >> sisi1DariSegitiga;
                    cout << "Masukkan sisi 2 segitiga: ";
                    cin >> sisi2DariSegitiga;
                    cout << "Sisi Segitiga: " << sisiSegitiga(kelilingDariSegitiga, sisi1DariSegitiga, sisi2DariSegitiga) << endl;
                } else if (pilihanRumus == 6) {
                    // Keluar dari program.
                } else {
                    cout << "Pilihan rumus tidak valid.";
                }
                break;

            case 5:
                cout << "Terima kasih telah menggunakan program ini! Program ditutup, selamat tinggal.\n Salam hangat dari saya, Fauzan." << endl;
                pilihanLanjut = '2';
                break;

            default:
                cout << "Pilihan bangun datar tidak valid." << endl;
                break;
        }

        if (pilihanLanjut != '2') {
            cout << "Apakah Anda ingin mencari rumus bangun datar yang lain atau keluar dari program? Pilih 1 untuk lanjut mencari rumus yang lain. Dan pilih 2 untuk keluar dari program." << endl;
            cin >> pilihanLanjut;
        }
    }

system ("pause");
    return 0;
}
