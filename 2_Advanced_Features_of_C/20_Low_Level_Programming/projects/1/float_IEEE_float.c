#include <stdio.h>

struct IEEE_float {
	unsigned int fraction: 23;
	unsigned int exponent: 8;
	unsigned int sign: 1;
};

int main(void)
{
	union {
		struct IEEE_float ieeef;
		float f;
	} ieee_f;

	ieee_f.ieeef.sign = 1;
	ieee_f.ieeef.exponent = 128;
	ieee_f.ieeef.fraction = 0;
	
	printf("%f\n", ieee_f.f);

	return 0;
}
