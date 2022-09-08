#include<iostream>
#include<vector>

long long sum(std::vector<int> &a){
    long long ans = 0;
    for(int i=0; i<a.size(); i++)
        ans += a[i];
    return ans;
}

// int main(){
//     int n, input, sum;
//     std::vector<int> number;
//     std::cin >> n;
//     for(int i=0; i<n; i++){
//         std::cin>>input;
//         number.push_back(input);
//     }
//     int result = ::sum(number);
//     std::cout << result << std::endl;
// }