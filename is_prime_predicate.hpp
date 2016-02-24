#if!defined IS_PRIME_PREDICATE
#define IS_PRIME_PREDICATE
/*
concept: dynamic programming
*/
#include<algorithm>
#include<vector>
class is_prime_predicate{
   public:
      bool operator() (std::size_t num) noexcept;
   private:
      std::size_t find_next_prime(std::size_t num) const noexcept;
      std::vector<std::size_t> primes{2,3,5,7,11};
};
#endif
