#include"./is_prime_predicate.hpp"
bool 
is_prime_predicate::operator()(std::size_t num) noexcept{
   if (num < 2)
      return false;
   auto max = primes.back();
   while (max * max < num){
      max = find_next_prime(max);
      primes.push_back(max);
   }
   for (auto i:primes)
      if ( i * i > num)
	 break;
      else if (num % i == 0 )
	 return false;
   return true;
}
inline std::size_t 
is_prime_predicate::find_next_prime(std::size_t num) const noexcept{
   do{
      num++;
   }while (
	 std::any_of(primes.begin(),primes.end(),
	    [=](std::size_t p)
	    { return num % p ==  0; })
	 );
   return num;
}
