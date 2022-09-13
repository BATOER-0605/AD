#include "data.h"

extern double read_scores(char *file_name,int scores[][NOSUB]);
extern void calc_averages(int [][NOSUB],double []);
extern void print_scores(int scores[][NOSUB]);
extern void print_averages(double averages[]);