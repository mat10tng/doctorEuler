#ifndef DOCTOR_PRIME_H
#define DOCTOR_PRIME_H
// Tuan Nguyen
int gcd(void* a, void* b);
int find_prime_array_below(void* range);
void* find_divisor_array(void* nbr, void* prime_array);
void* find_prime_divisor_array(void* nbr,void* lst_prime);
void* find_prime_divisor_count_array_under(void* range);
void* find_odd_composite_array_under(void* range);

#endif