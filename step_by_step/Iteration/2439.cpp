#include<iostream>

int main() {
    int n;
    std::cin >> n;
 
    for (int i = 1; i <= n; i++) {
        for (int j = n; j > i; j--) {
            std::cout << ' ';
        }
        for (int k = 1; k <= i; k++) {
            std::cout << '*';
        }
        std::cout << std::endl;
    }
}

// int main(){
//     int n;
//     std::cin >> n;
//     char* star = new char[n];
//     std::fill_n(star, n, ' ');
//     for(int i=n-1; i>=0; i--){
//         star[i] = '*';
//         std::cout<<star<<std::endl;
//     }
//     delete[] star;
// }