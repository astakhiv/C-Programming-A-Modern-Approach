#include <stdbool.h>

struct color {
    int red, green, blue;
};


/**************************************************
 * read_color: Returns a color structure, read    *
 *             from the user.                     *
 **************************************************/
struct color read_color(void);

/**************************************************
 * write_color: Writes a given color strcuture in *
 *              a format: "r: red, g: green, b:   *
 *              blue".                            *
 **************************************************/
void write_color(struct color c);

/**************************************************
 * make_color: Creates a color structure with     *
 *             specified red, green and blue      *
 *             values.                            *
 **************************************************/
struct color make_color(int red, int green, int blue);

/**************************************************
 * getRed: Returns the red value of the given     *
 *         structure.                             *
 **************************************************/
int getRed(struct color c);

/**************************************************
 * equal_color: Returns if the members of the two *
 *              given color structures are equal. * 
 **************************************************/
bool equal_color(struct color color1, struct color color2);

/**************************************************
 * brighter:  Returns a brighter version of the   *
 *            given color.                        *
 **************************************************/
struct color brighter(struct color c);

/**************************************************
 * darker: Returns a darker version of the given  *
 *         color.                                 *
 **************************************************/
struct color darker(struct color c);
