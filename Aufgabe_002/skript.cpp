
#include <iostream>
#include <cmath>

int main()
{
  std::cout << std::endl << std::endl;

  int r;

  std::cout << "Radius: ";
  std::cin >> r;
  
  std::cout << std::endl;

  std::cout << "Oberfläche = " << 4 * M_PI * pow(r,2.0) << std::endl;
  std::cout << "Volumen    = " << (4/3.) * M_PI * pow(r,3.0) << std::endl;

  std::cout << std::endl << std::endl;
  return 0;
}
