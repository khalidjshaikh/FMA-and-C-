#include <cmath>    // Required for mathematical functions like std::fma

int main() {
  for(unsigned i=0; i<4000000000; i++)
	  std::fma(1,2,3);
}
