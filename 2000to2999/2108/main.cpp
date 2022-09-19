#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

int main() {
    int t, tmp, range, median = 0, mode, aver = 0, flag = 0;
    std::vector<int> input;
    int mode_count = -9999;
    int number[8001] = {0,};

    std::cin >> t;
    while(t--){
        std::cin >> tmp;
        input.push_back(tmp);
        aver += tmp;
        number[4000+tmp]++;
    }
    sort(input.begin(),input.end());
    for(int i = 0; i < 8001; i++){
        if(number[i] == 0)
            continue;
        if(number[i] == mode_count){
            if(flag){
                mode = i - 4000;
                flag = false;
            }
        }
        if(number[i] > mode_count){
            mode_count = number[i];
            mode = i - 4000;
            flag = 1;
        }
    }
    median = input[input.size()/2];
    aver = round((float)aver / input.size());
    range = input.back() - input.front();
    std::cout << aver << '\n' << median << '\n' << mode << '\n' << range;
}


// #include<iostream>
// #include<vector>
// #include<algorithm>
// #include<iomanip>
// #include <cmath>

// void print_aver(std::vector<int> number){
//     int sum = 0;
//     for(auto ele : number)
//         sum+=ele;
//     double aver = std::round((double)sum/number.size());
//     if(aver==-0)
//         aver = -aver;
//     std::cout << aver <<"\n";
// }
// void print_median(std::vector<int> number){
//     int median_index = (number.size()-1)/2;
//     std::cout << number[median_index] << "\n";
// }
// void print_mode(std::vector<int> number){
//     int mode, count, mode_count = 0, flag = 1;
//     for(auto ele : number){
//         count = std::count(number.begin(), number.end(), ele);
//         if(mode_count < count){
//             mode_count = count;
//             mode = ele;
//             flag = 1;
//         }else if(flag && mode!=ele&&mode_count == count){
//             mode = ele;
//             flag = 0;
//         }
//     }
//     std::cout << mode << "\n";
// }

// void print_range(int min, int max){
//     if(min==max)
//         std::cout << 0 << "\n";
//     else{
//         int range = (min<0) ? max-min : max+min;
//         std::cout << range << "\n"; 
//     }
// }

// int main(){
//     std::ios_base::sync_with_stdio(false);

//     int t, tmp, min, max;
//     std::vector<int> number;
//     std::cin >> t;
//     while(t--){
//         std::cin>>tmp;
//         number.push_back(tmp);
//     }
//     std::sort(number.begin(), number.end());
//     min = *number.begin();
//     max = *(number.end()-1);

//     print_aver(number);
//     print_median(number);
//     print_mode(number);
//     print_range(min, max);
// }