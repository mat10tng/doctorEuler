#include <iostream>
#include <vector>
using namespace std;
typedef unsigned long long int (large_int);

int gcd(large_int a, large_int b);
int find_prime_below(large_int range);
vector[int] find_divisor(large_int number, vector<int> lst_prime);
set find_prime_divisor(large_int number, vector<int> lst_prime);
vector[int] find_prime_divisor_count_under(large_int range);
vector[int] find_odd_composite_under(large_int range);

