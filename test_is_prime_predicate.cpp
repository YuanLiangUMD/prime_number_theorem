#include <iostream>
#include "./is_prime_predicate.hpp"
int main(){
   is_prime_predicate is_prime;
   std::size_t cnt, limit = 1;
   for (std::size_t k = 1; 
	 k <= 10; k++){
      limit *= 10;
      cnt = 0;
      for (std::size_t i = 0; 
	    i <= limit ; i++)
	 if (is_prime(i))
	    cnt++;
      std::cout
	 //<<"the number of prime less than "<<limit<<" is "
	 <<cnt<<std::endl;

   }
   return 0;

}
