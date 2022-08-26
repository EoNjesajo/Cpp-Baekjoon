#include<iostream>
#include<string>

int main(){
    std::ios_base::sync_with_stdio(false);    
    int n;
    std::cin >> n;
    for(int i=1;i<=n; i++){
        std::string star(i, '*');
        std::string blank((n-i)*2, ' ');
        std::cout << star << blank << star << "\n";
    }
    for(int i=n-1;i>=1; i--){
        std::string star(i, '*');
        std::string blank((n-i)*2, ' ');
        std::cout << star << blank << star << "\n";
    }
}