#include <stdbool.h>

struct point { int x, y; };
struct rectangle { struct point upper_left, lower_right; };


/************************************************************
 * read_point: Reads a point from the user. Returns the     *
 *             point structure.                             *
 ************************************************************/
struct point read_point(void);

/************************************************************
 * write_point: Wrints the coordinates of the given point.  *
 ************************************************************/
void write_point(struct point p);

/************************************************************
 * read_rectangle: Reads the rectangle cootdinates and      *
 *                 returns the structure.                   *
 ************************************************************/
struct rectangle read_rectangle(void);

/************************************************************
 * write_rectangle: Writes the rectangle coordinates.       *
 ************************************************************/
void write_rectangle(struct rectangle r);

/************************************************************
 * area: Returns the area of a given rectangle.             *
 ************************************************************/
long area(struct rectangle r);

/************************************************************
 * center: Returns the center of a given rectangle.         *
 ************************************************************/
struct point center(struct rectangle r);

/************************************************************
 * move: Moves the rectangle by given x and y. Returns the  *
 *       new rectangle structure.                           *
 ************************************************************/
struct rectangle move(struct rectangle r, int x, int y); 

/************************************************************
 * is_point_in: Returns true if point p is inside  of the   *
 *              rectangle, false otherwise.                 *
 ************************************************************/
bool is_point_in(struct point p, struct rectangle r);
