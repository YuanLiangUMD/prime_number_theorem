all:test_is_prime_predicate q_find_prime
test_is_prime_predicate:is_prime_predicate.cpp is_prime_predicate.hpp test_is_prime_predicate.cpp
	g++ -std=c++14 -o3 is_prime_predicate.cpp test_is_prime_predicate.cpp -o test_is_prime_predicate

q_find_prime:q_find_prime.cpp
	g++ -std=c++14 -o3 q_find_prime.cpp -o q_find_prime

.PHONY: clean time verify
clean:
	-rm test_is_prime_predicate q_find_prime

time:
	time ./test_is_prime_predicate
	time ./q_find_prime

verify:
	./test_is_prime_predicate > test1.txt
	./q_find_prime > test2.txt
	diff test2.txt test1.txt
	rm test1.txt
	rm test2.txt
