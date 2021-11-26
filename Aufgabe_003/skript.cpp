
#include <iostream>
#include <cfloat>

int main()
{
  std::cout << std::endl << std::endl;

  int s;
  int m;
  int h;
  int d;

  std::cout << "Number of seconds: ";
  std::cin >> s;

  d = s / (24 * 3600);
  s = s % (24 * 3600);
  h = s / 3600;
  s %= 3600;
  m = s / 60 ;
  s %= 60;
     
  std::cout << d << " days" << std::endl;
  std::cout << h << " hours" << std::endl;
  std::cout << m << " minutes" << std::endl;
  std::cout << s << " seconds" << std::endl;

  std::cout << std::endl << std::endl;

  //float
  std::cout << "float:" << std::endl;
  std::cout << "Bytezahl:                   4" << std::endl;
  std::cout << "Kleinster positiver Wert:   " << FLT_MIN << std::endl;
  std::cout << "Größter positiver Wert:     " << FLT_MAX << std::endl;
  std::cout << "Genauigkeit:                " << FLT_DIG << std::endl << std::endl;

  //double
  std::cout << "double:" << std::endl;
  std::cout << "Bytezahl:                   8" << std::endl;
  std::cout << "Kleinster positiver Wert:   " << DBL_MIN << std::endl;
  std::cout << "Größter positiver Wert:     " << DBL_MAX << std::endl;
  std::cout << "Genauigkeit:                " << DBL_DIG << std::endl;

  std::cout << std::endl << std::endl;
  return 0;
}
