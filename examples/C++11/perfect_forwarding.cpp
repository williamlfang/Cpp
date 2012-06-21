/**
 * Demonstrates the use of perfect forwarding.
 *
 * Compile with:
 *
 *   g++ -std=c++0x perfect_forwarding.cpp
 */

#include <string>
#include <vector>

class Blob
{
  std::vector<std::string> _v;
public:
 
  template<typename... Args>
  Blob(Args&&... args)
   : _v(std::forward<Args>(args)...)
  {  }
 
};
 
int main(void)
{
  const char * shapes[3] = { "Circle", "Triangle", "Square" };
 
  Blob b1(5, "C++ Truths"); 
  Blob b2(shapes, shapes+3);
}
