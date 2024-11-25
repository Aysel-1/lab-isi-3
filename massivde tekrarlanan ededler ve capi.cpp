#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Massivin uzunlugu: ";
    cin >> n;

    int array[n];
    cout << "Massivin elementleri: ";
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }

    for (int i = 0; i < n; i++) {
        int say = 0;
        for (int j = 0; j < n; j++) {
            if (array[i] == array[j]) {
                say++;
            }
        }     
        int yoxlama = 0;  
        for (int k = 0; k < i; k++) {
            if (array[i] == array[k]) {
                yoxlama= 1; 
                break;
            }
        }
        if (say > 1 and  yoxlama== 0) {
            cout << "tekrarlanan eded: " << array[i] <<endl<< " Sayi: " << say << endl<<"--------------------\n";
        }
    }

    return 0;
}

