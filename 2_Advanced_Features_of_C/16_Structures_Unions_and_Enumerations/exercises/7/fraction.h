struct fraction {
    int numerator, denominator;
};

/**************************************************
 * read_fraction: Reads a fraction from user,     *
 *                returns the value of type       *
 *                struct fraction.                *
 **************************************************/
struct fraction read_fraction(void);

/**************************************************
 * write_fraction: Writes fraction in the from    *
 *                 n/d, where n is numerator and  *
 *                 d is denominator.              * 
 **************************************************/
void write_fraction(struct fraction *f);

/**************************************************
 * recude: Accepts a pointer to the fraction,     *
 *         reduces the numberator and denominator *
 *         by finding their GCD and dividing them *
 *         by it.                                 *
 **************************************************/
void reduce(struct fraction *f);

/**************************************************
 * add: Adds two fractions, returns the sum       *
 *      in lowest terms.                          *
 **************************************************/
struct fraction add(struct fraction f1, struct fraction f2);

/**************************************************
 * subtract: Subtracts two fractions, returns the *
 *           result in lowest terms.              *
 **************************************************/
struct fraction subtract(struct fraction f1, struct fraction f2);

/**************************************************
 * multiply: Multiplies two fractions, returns    *
 *           the result in lowest terms.          *
 **************************************************/
struct fraction multiply(struct fraction f1, struct fraction f2);

/**************************************************
 * divide: Divides two fractions, returns the     *
 *         result in lowest terms.                *
 **************************************************/
struct fraction divide(struct fraction f1, struct fraction f2);
