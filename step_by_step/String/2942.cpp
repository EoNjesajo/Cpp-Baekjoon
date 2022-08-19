#include<iostream>
#include<string>
#include <vector>
//c=, c-, dz=, d-, lj, nj, s=, z=

int main() {
    std::vector<std::string> croatian = {"c=","c-","dz=","d-","lj","nj","s=","z="};
    std::ios_base::sync_with_stdio(false);
    int index;
    std::string str;
    std::cin >> str;
    for(int i = 0; i < croatian.size(); i++)
    {
        while(true){
            index = str.find(croatian[i]);
            if(index == std::string::npos)
                break;
            str.replace(index,croatian[i].length(),"_");
        }
    }
    std::cout << str.length()<<'\n';
}

// int main(){
//     std::ios_base::sync_with_stdio(false);
//     std::string input;
//     std::cin >> input;
//     int count = 0, number = 0;
//     do{

//         if(input[count]=='d'&&input[count+1]=='z'&&input[count+2]=='='){
//             count+=3;
//         }else if((input[count]=='c'||input[count]=='s'||input[count]=='z')&&input[count+1]=='='){
//             count+=2;
//         }else if((input[count]=='l'||input[count]=='n')&&input[count+1]=='j'){
//             count+=2;
//         }else if((input[count]=='c'||input[count]=='d')&&input[count+1]=='-'){
//             count+=2;
//         }
//         else
//             count++;
//         number++;
//     }while(count<input.length());
//     std::cout<<number<<"\n";
// }