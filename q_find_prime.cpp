#include <iostream>
bool brute_force_is_prime(std::size_t num){
if (num < 2)
   return false;
 for (std::size_t i = 2; i * i <= num; i++)
    if (num % i == 0)
       return false;
 return true;
}


int main(){
      if (brute_force_is_prime(2) )
	 std::cout<<"2 is prime"<<"\n";
   return 0;
}
