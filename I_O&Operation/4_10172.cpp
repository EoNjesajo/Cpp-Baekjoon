#include <iostream>
#include <string>

int main() {
  std::string dog[5] = {"|\\_/|", "|q p|   /}", "( 0 )\"\"\"\\", "|\"^\"`    |",
                        "||_/=\\\\__|"};

  for (int i = 0; i < 5; i++) {
    std::cout << dog[i] << std::endl;
  }

  // std::cout << "|\\_/|" << std::endl;
  // std::cout << "|q p|   /}" << std::endl;
  // std::cout << "( 0 )\"\"\"\\" << std::endl;
  // std::cout << "|\"^\"`    |" << std::endl;
  // std::cout << "||_/=\\\\__|" << std::endl;
}
