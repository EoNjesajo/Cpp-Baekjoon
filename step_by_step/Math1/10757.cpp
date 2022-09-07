#include <iostream>
#include <algorithm>

int main(){
    std::ios_base::sync_with_stdio(false);
    std::string a, b;
    std::cin >> a >> b;

    if (b.length() > a.length()) {
        std::swap(a, b);
    }
    std::string tmp = "";
    if (a.length() != b.length()){
        for (int i=0; i<(a.length()-b.length()); i++)
            tmp += "0";
    }
    b = tmp+b;

    std::string result = "";
    int carry = 0; 
    int x, y, digit;
    for (int i=a.length()-1; i>=0; i--){
        x = a[i] - '0';
        y = b[i] - '0';
        digit = x + y;
        if (carry == 1) {
            digit++;
            carry = 0;
        }
        if (digit > 9) 
            carry = 1;
        result += digit%10 + '0'; 
    }

    for (int i=result.length() - 1; i>=0; i--){
        std::cout << result[i];
    }
}