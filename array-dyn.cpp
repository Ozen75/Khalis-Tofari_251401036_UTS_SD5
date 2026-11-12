#include <iostream>
int main(){
    int a = 2;
    int b = 3;
    int c = 4;

    int arr[a][b][c];
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            for (int k = 0; k < c; k++) {
                if (i == 0) {
                    int n;
                    std::cout << "masukkan nilai layer ke-" << i+1 << ": \n";
                    std::cout << "baris ke-" << j+1 << ": \n";
                    std::cout << "kolom ke-" << k+1 << ": \n";
                    std::cin >> n;
                    arr[i][j][k] = n;
                }
                
                if (i == 1) {
                    int n;
                    std::cout << "masukkan nilai layer ke-" << i+1 << ": \n";
                    std::cout << "baris ke-" << j+1 << ": \n";
                    std::cout << "kolom ke-" << k+1 << ": \n";
                    std::cin >> n;
                    arr[i][j][k] = n;
                }
            }
        }
    }
    
    int hasil[3][4];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            int average;
            hasil[i][j] = (arr[0][i][j] + arr[1][i][j])/2 ;
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            std::cout << hasil[i][j] << " ";
        }

        std::cout << "\n";
    }
}