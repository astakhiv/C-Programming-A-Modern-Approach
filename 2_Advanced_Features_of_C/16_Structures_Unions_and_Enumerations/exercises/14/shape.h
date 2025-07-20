struct point { int x, y; };

struct shape {
    int shape_kind; /* RECTANGLE or CIRCLE */
    struct point center; /* coordinates of center */
    union {
        struct {
            int height, width;
        } rectangle;
        struct {
            int radius;
        } circle;
    } u;
} s;

/************************************************************
 * read_point: Reads coordinates from the user. Returns     *
 *             them as the point structure.                 * 
 ************************************************************/
struct point read_point(void);

/************************************************************
 * read_shape: Reads values of the shape from the user.     *
 *             Returns them as shape structure.             *
 ************************************************************/
struct shape read_shape(void);

/************************************************************
 * write_point: Prints the coordinates of the given point   *
 *              structure.                                  *
 ************************************************************/
void write_point(struct point p);

/************************************************************
 * write_shape: Prints the values of the given shape        *
 *              structure.                                  *
 ************************************************************/
void write_shape(struct shape s);

/************************************************************
 * compute_area: Returns the value of area of the given     *
 *               shape structure.                           *
 ************************************************************/
long compute_area(struct shape s);

/************************************************************
 * move_by: Modifies coordinates of the shape by x and y.   *
 *          Returns the modified structure.                 *
 ************************************************************/
struct shape move_by(struct shape s, int x, int y);

/************************************************************
 * scale_by: Scales coordinates of the shape by factor c.   *
 *           Returns the modified structure.                *
 ************************************************************/
struct shape scale_by(struct shape s, double c);
