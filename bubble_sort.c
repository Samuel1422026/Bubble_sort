// #include <stdio.h>

// void swap(int *a, int *b) {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }

// void bubbleSort(int array[], int size) {
//     for (int i = 0; i < size - 1; i++) {
//         for (int j = 0; j < size - i - 1; j++) {
//             if (array[j] > array[j + 1]) {
//                 swap(&array[j], &array[j + 1]);
//             }
//         }
//     }
// }

// void printArray(int array[], int size) {
//     for (int i = 0; i < size; i++) {
//         printf("%d ", array[i]);
//     }
//     printf("\n");
// }

// int main() {
//     int data[] = {64, 34, 25, 12, 22, 11, 90};
//     int size = sizeof(data) / sizeof(data[0]);

//     printf("Array sebelum diurutkan:\n");
//     printArray(data, size);

//     bubbleSort(data, size);

//     printf("Array setelah diurutkan:\n");
//     printArray(data, size);

//     return 0;
// }


// #include <stdio.h>

// // Fungsi untuk menukar dua nilai
// void swap(int *a, int *b) {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }

// // Fungsi untuk mencetak isi array
// void printArray(int array[], int size) {
//     for (int i = 0; i < size; i++) {
//         printf("%d ", array[i]);
//     }
//     printf("\n");
// }

// // Fungsi bubble sort dengan simulasi per langkah
// void bubbleSort(int array[], int size) {
//     int step = 1;
//     for (int i = 0; i < size - 1; i++) {
//         printf("Pass %d:\n", i + 1);
//         for (int j = 0; j < size - i - 1; j++) {
//             printf("  Bandingkan %d dan %d", array[j], array[j + 1]);
//             if (array[j] > array[j + 1]) {
//                 printf(" => tukar\n");
//                 swap(&array[j], &array[j + 1]);
//             } else {
//                 printf(" => tidak ditukar\n");
//             }
//             printf("    Array sekarang: ");
//             printArray(array, size);
//         }
//         printf("\n");
//     }
// }
  
// int main() {
//     int data[] = {64, 34, 25, 12, 22, 11, 90};
//     int size = sizeof(data) / sizeof(data[0]);

//     printf("Array awal:\n");
//     printArray(data, size);
//     printf("\n");

//     bubbleSort(data, size);

//     printf("Array setelah diurutkan:\n");
//     printArray(data, size);

//     return 0;
// }

// Setelah di modifikasi
// #include <stdio.h>

// // Fungsi untuk menukar dua elemen
// void swap(int *a, int *b) {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }

// // Fungsi untuk mencetak isi array
// void printArray(int array[], int size) {
//     for (int i = 0; i < size; i++) {
//         printf("%d ", array[i]);
//     }
//     printf("\n");
// }

// // Bubble Sort dengan pengurangan perbandingan setiap pass
// void bubbleSort(int array[], int size) {
//     printf("Proses pengurutan:\n");
//     for (int i = 0; i < size - 1; i++) {
//         printf("Pass ke-%d (max %d perbandingan):\n", i + 1, size - i - 1);
//         for (int j = 0; j < size - i - 1; j++) { // inilah modifikasinya
//             printf("  Bandingkan %d dan %d", array[j], array[j + 1]);
//             if (array[j] > array[j + 1]) {
//                 printf(" => tukar\n");
//                 swap(&array[j], &array[j + 1]);
//             } else {
//                 printf(" => tidak ditukar\n");
//             }
//             printf("    Array sekarang: ");
//             printArray(array, size);
//         }
//         printf("\n");
//     }
// }

// int main() {
//     int data[] = {64, 34, 25, 12, 22, 11, 90, 45, 38, 20}; // 10 elemen
//     int size = sizeof(data) / sizeof(data[0]);

//     printf("Array sebelum diurutkan:\n");
//     printArray(data, size);
//     printf("\n");

//     bubbleSort(data, size);

//     printf("Array setelah diurutkan:\n");
//     printArray(data, size);

//     return 0;
// }

// kode bubble_sort swapped
#include <stdio.h>
#include <stdbool.h> // untuk tipe boolean

// Fungsi untuk menukar dua nilai
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Fungsi untuk mencetak array
void printArray(int array[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

// Fungsi bubble sort dengan optimasi pengecekan swap
void bubbleSort(int array[], int size) {
    int totalPass = 0;
    for (int i = 0; i < size - 1; i++) {
        bool swapped = false;
        printf("Pass ke-%d:\n", i + 1);
        
        for (int j = 0; j < size - i - 1; j++) {
            printf("  Bandingkan %d dan %d", array[j], array[j + 1]);
            if (array[j] > array[j + 1]) {
                printf(" => tukar\n");
                swap(&array[j], &array[j + 1]);
                swapped = true;
            } else {
                printf(" => tidak ditukar\n");
            }
            printf("    Array sekarang: ");
            printArray(array, size);
        }
        
        totalPass++;

        if (!swapped) {
            printf("Tidak ada pertukaran pada pass ini. Array sudah terurut.\n");
            break;
        }

        printf("\n");
    }
    
    printf("Total pass yang dilakukan: %d\n", totalPass);
}

int main() {
    // Bisa diganti-ganti: sudah urut, acak, hampir urut, dst.
    int data[] = {11, 12, 22, 25, 34, 64, 90, 100, 105, 120}; // Sudah urut
    // int data[] = {64, 34, 25, 12, 22, 11, 90, 45, 38, 20}; // Acak
    
    int size = sizeof(data) / sizeof(data[0]);

    printf("Array sebelum diurutkan:\n");
    printArray(data, size);
    printf("\n");

    bubbleSort(data, size);

    printf("\nArray setelah diurutkan:\n");
    printArray(data, size);

    return 0;
}

