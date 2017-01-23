#include "String.h"
#include <cstdio>
#include <cstdlib>

int main()
{
  String a = String ("bonjour");
  std::cout << a.c_str() << std::endl;

  return 0;
}
