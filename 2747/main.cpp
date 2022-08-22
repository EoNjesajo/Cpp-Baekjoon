//0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987, 1597
#include<iostream>

int number[45] = {0,};

int fib(int n){
    if(n<2)
        return n;
    else{
        return (number[n]>0) ? number[n] : number[n]=fib(n-1) + fib(n-2);
    }
    // else if(number[n]>0)
    //     return number[n];
    // else{
    //     number[n] = fib(n-1) + fib(n-2);
    //     return number[n];
    // }
}

int main(){
    std::ios_base::sync_with_stdio(false);
    int n;
    std::cin >> n;
    std::cout << fib(n) << "\n";
}

// int main(){
//     std::ios_base::sync_with_stdio(false);
//     int f[] = {0, 1};
//     int n;
//     std::cin >> n;
//     if(n<2){
//         std::cout << f[n] << "\n";
//         return 0;
//     }
//     for(int i=2; i<=n; i++){
//         int temp = f[0] + f[1];
//         f[0] = f[1];
//         f[1] = temp;
//     }
//     std::cout << f[1] << "\n";
// }