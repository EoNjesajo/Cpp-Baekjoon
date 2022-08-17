#include<iostream>
#include <string>

int main() {
    std::string input;
    std::string alphabet = "abcdefghijklmnopqrstuvwxyz";
    std::cin >> input;
    for(int i = 0; i < alphabet.length(); i++)
        std::cout << static_cast<int>(input.find(alphabet[i])) << " ";
    std::cout<<std::endl;
}

// int main(){
//     int number[26];
//     std::fill_n(number, 26, -1);
//     char input[100];
//     std::cin >> input;
//     for(int i=0;;i++){
//         int index = static_cast<int>(input[i]-97);
//         if(input[i]=='\0') break;
//         if(number[index]==-1)
//             number[index] = i;
//     }
//     for(int i=0; i<26; i++)
//         std::cout << number[i] << ' ';
//     std::cout << std::endl;
// }1