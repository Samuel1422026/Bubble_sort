Mengapa Bubble Sort Memiliki Kompleksitas O(n²)?



Karena Bubble Sort membandingkan setiap elemen dengan elemen di sebelahnya dalam sebuah nested loop (loop bersarang).

for (int i = 0; i < 3; i++) {           // loop luar
    for (int j = 0; j < 2; j++) {       // loop dalam
        printf("i = %d, j = %d\n", i, j);
    }
}
Nested loop adalah struktur perulangan di dalam perulangan


Bubble Sort memiliki kompleksitas O(n²) karena jumlah operasi perbandingan meningkat secara kuadratik seiring bertambahnya ukuran data. 
Hal ini menjadikan algoritma ini kurang efisien untuk dataset besar, namun tetap berguna untuk pembelajaran konsep dasar sorting dan implementasi pada data berukuran kecil.
