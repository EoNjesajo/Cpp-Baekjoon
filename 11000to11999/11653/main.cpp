#include <iostream>
 
int main() {
    std::ios_base::sync_with_stdio(false);
    int n;
    std::cin >> n;
 
    if (n == 1) return 0;
 
    for (int i = 2; i <= n; i++) {
        while (n % i == 0) {
            std::cout << i << "\n";
            n /= i;
        }
    }
}


// #include<iostream>
// #include<vector>

// int check_prime(int);

// int main(){
//     std::ios_base::sync_with_stdio(false);
//     int n, count = 0;
//     std::vector<int> prime_number;
//     std::cin >> n;
//     for(int i = 2; i <= n; i++){
//         for (int j = 1; j <= i; j++) {
// 			if (i%j == 0)
// 				count++;
// 		}
// 		if (count == 2)
//             prime_number.push_back(i);
// 		count = 0;
//     }
//     do{
//         for(auto ele : prime_number){
//             if(n%ele == 0){
//                 std::cout << ele << "\n";
//                 n/=ele;
//                 break;
//             }
//         }
//     } while (check_prime(n)&&n!=1);
// }

// int check_prime(int value){
//     int count = 0;
//     for(int i=1; i<=count; i++){
//         if(value%i==0)
//             count++;
//     }
//     return (count==2)?0:1;
// }