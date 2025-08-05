struct IEEE_float {
	unsigned int sign: 1;
	unsigned int exponent: 8;
	unsigned int fraction: 23;
};

// The answer suggests reverst positioning of members, as x86 architecture stores data in little-endian order,
// being the least signifigant comes first.
