#include<iostream>
#include<vector>

std::vector<int> get_prime(int n){
    std::vector<int> prime_number(n+1);
    for(int i = 2; i<=n; i++)
        prime_number[i] = i;

    for(int i = 2; i*i<=n; i++){
        if(prime_number[i] == 0 ) continue;

        for(int j = 2*i; j<=n; j+=i){
            if(prime_number[j] != 0) prime_number[j] = 0;
        }
    }
    return prime_number;
}

void add_prime(std::vector<int> &prime_number, int pred,int n){
    std::vector<int> add_number(n-pred);
    prime_number.insert(prime_number.end(), add_number.begin(), add_number.end());
    for(int i = pred; i<=n; i++)
        prime_number[i] = i;

    for(int i = pred; i*i<=n; i++){
        if(prime_number[i] == 0 ) continue;

        for(int j = pred*i; j<=n; j+=i){
            if(prime_number[j] != 0) prime_number[j] = 0;
        }
    }
}

int main(){
    int t, n, pred= 0, flag = 0;
    std::cin >> t;
    std::vector<int> prime_number;
    for(int i = 0; i<t; i++){
        std::cin >> n;
        if(i==0)
            prime_number = get_prime(n);
        else if(n>pred)
            add_prime(prime_number, pred, n);
        pred = n;
        for(int  j= 2; j<=n; j++){
            if(prime_number[j]!=0){
                for(int k = 2; k<=j; k++)
                    if(prime_number[k]!=0&&j+k == n){
                        std::cout << k << " " << j << "\n";
                        flag = 1;
                        break;
                    }
            }
            if(flag){
                flag = 0;
                break;
            }      
        }
    }
}