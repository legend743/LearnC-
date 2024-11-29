#include <iostream>
bool power(int a)
{

  for (int i = 2; i < a / 2; i++)
  {
  }
  if (a / 2 == 0)
  {
    return true;
  }
  else
  {
    return false;
  }
}
int main()
{
  int a = 6;
  int b = 10;

  // bin of 4=0100 and bin of 8=1000 xor of both =1100 which is equal to 12
  std::cout << (a ^ b) << std::endl;
  std::cout << (a & b) << std::endl;

  std::cout << (a | b) << std::endl;

  // bitwise leftshift operator "<<" and bitwise rightshift operator ">>"
  //  bin of 4=0100 when left shifted it becomes 01000 which is now 8 in decimal
  std::cout << (4 << 1) << std::endl;

  /// bitwise rightshift operator
  // bin of 10=1010 when right shifted it become 0101 =5
  std::cout << (10 >> 1) << std::endl;

  std::cout << (8 >> 2) << std::endl;

  std::cout << "This is left shift " << (10 << 2) << " This is right shift " << (10 >> 1) << std::endl;
}