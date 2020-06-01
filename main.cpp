#include <iostream>
#include <string>

int main() {
  int result = 0;
  std::string input = "1337";
  for (int i = 0; i < input.length(); i++) {
    char charRead = input[i];
    result *= 10;
    result += charRead - '0';
    std::cout << result << std::endl;
  }
  return 0;
}