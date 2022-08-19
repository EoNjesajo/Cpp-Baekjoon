#include<iostream>
#include<string>

int main(){	
	int dial[26] = { 3, 3, 3, 4, 4, 4, 5, 5, 5, 6, 6, 6, 7, 7, 7, 8, 8, 8, 8, 9, 9, 9, 10, 10, 10, 10 };
	int sum = 0;
	std::string input;
	std::cin >> input;
 
	for (int i = 0; i < input.length(); ++i) {
		int index = input[i] - 65;
		sum += dial[index];
	}
	std::cout << sum << std::endl;
}

// int main(){
//     //2   3   4   5   6   7    8   9
//     //ABC DEF GHI JKL MNO PORS TUV WXYZ
//     std::ios_base::sync_with_stdio(false);
//     std::string dial[] = {"ABC", "DEF", "GHI", "JKL", "MNO", "PORS", "TUV", "WXYZ"}; //3~10
//     std::string input;
//     std::cin >> input;
//     int sum = 0;
//     for(int i=0; i<input.length(); i++){
//         for(int j=0; j<7; j++){
//             if(dial[j].find(input[i])!=std::string::npos)
//                 sum+=j+3;
//         }
//     }
//     std::cout << sum << "\n";
// }

