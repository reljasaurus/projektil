#include <stdio.h>
	

int main (void) {
	int m, zadnjaznamenka;
	printf ("Upisite jedan pozitivan cijeli broj:\t ");
	scanf ("%d", &m);
		
		if (m>0) {
			zadnjaznamenka = m % 10;
			printf ("Zadnja znamenka broja %5d je %d\n" , m, zadnjaznamenka);
		} else { 
			printf ("Broj %5d nije pozitivan broj\n", m);
		}
		return 0;

	}
