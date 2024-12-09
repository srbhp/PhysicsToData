#include <iostream>
#include <vector>
// write a templete function
template <typename T> class regression {
  std::vector<T> coeff;
  regression() { std::cout << "Regression finished" << std::endl; }
  std::vector<T> fit(const std::vector<std::vector<T>>& x,
                     const std::vector<T>& y) {}
};
template <typename T>
double cost_function(const std::vector<T>& x, const std::vector<T>& y) {}
int main() {
  std::cout << " Random String " << std::endl;
  return 0;
}
