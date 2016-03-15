#define _WITH_GETLINE

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <gmp.h>

#include "defs.h"

void factor_print(mpz_t a1)
{
	mpz_t v5;
	char c;

	mpz_init_set(v5, a1);

	for (int i = 0; i <= 171; ++i) {
		c = 0;
		while (mpz_divisible_ui_p(v5, primes[i])) {
			mpz_tdiv_q_ui(v5, v5, primes[i]);
			++c;
		}
		if (!c) break;
		putchar(c);
	}
	putchar('\n');
}

int main(int argc, char* argv[])
{
	mpz_t v10, v11, v14, v15;
	size_t size = 172;

	mpz_init(v10);
	mpz_init(v11);
	mpz_init(v14);
	mpz_init(v15);

	mpz_set_ui(v15, 1019);

	char* line = (char*)malloc(size);
	size_t s = getline(&line, &size, stdin);
	line[s - 1] = 0;

	// v15 = 1019 * primes[0]^line[0] * primes[1]^line[1] .. primes[limit]^line[limit]
	double limit = fmin((double)s, 84.0);
	for (int i = 0; (double)i < limit; ++i) {
		mpz_set_ui(v14, primes[i]);
		mpz_pow_ui(v14, v14, line[i]);
		mpz_mul(v15, v15, v14);
	}
	// if v15 = fractions[338], or v15 == fractions[339] at this point
	// we get the congratz message.
	// gmp_printf ("Input %Zi\n", v15);
	int cont;
	int i = 0;
	do {
		cont = 0;
		for (int j = 0; j < 423; ++j) {
			gmp_sscanf(fractions[2 * j], "%Zi", v11);
			gmp_sscanf(fractions[2 * j + 1], "%Zi", v10);
			mpz_set(v14, v15);
			mpz_mul(v14, v14, v11);
			if (mpz_divisible_p(v14, v10)) {
				if ( i==0)
				{
                printf("%d\n", 2*j);
                }
				mpz_tdiv_q(v15, v14, v10);
				cont = 1;
				break;
			}
		}
		i++;
	} while(cont);

	factor_print(v15);
}

