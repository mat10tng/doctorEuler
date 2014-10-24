#ifndef DOCTOR_NUMBER_H
#define DOCTOR_NUMBER_H

// we want big int here maybe ? 
void* reverse_nbr(void* nbr);
void* dec_to_bin(void* nbr);

void* to_array(void* nbr);
void* to_array_n_last_digits(void* nbr, size_t size);

void* to_set(void* nbr);
void* to_number(void* array);

void* nbr_permutations(void* nbr);
void* nbr_combinations(void* nbr);

int is_lychrel(void* nbr);


#endif