

bigint_t* gcd(bigint_t* a, bigint_t* b){
	bigint_t temp;
	while(!is_zero(b)){
		temp = bigint_clone(b);
		b = bigint_modul(a,b);
		a = bigint_clone(temp)
	}
	return a;
}