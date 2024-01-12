
/***
 * This function computes the euclidean distance between 2 points in a 2d space.
 * @param x1 the x-coordinate of the first point
 * @param y1 the y-coordinate of the first point
 * @param x2 the x-coordinate of the second point
 * @param y2 the y-coordinate of the second point
 * @return the euclidean distance
 */
double point_distance_2d(double x1, double y1, double x2, double y2);

/***
 * This function takes as input two arrays of doubles and the dimension. It computes the euclidean distance between the points.
 * @param p1 the first point, assumed to be at least "dimension" elements long
 * @param p2 the second point, assumed to be at least "dimension" elements long
 * @param dimension the dimensionality
 * @return the euclidean distance between the points
 */
double point_distance(double* p1, double* p2, int dimension);
