typedef unsigned char uchar;

typedef struct {
    int nl;
    int nc;
    uchar **px;
} matrix;

matrix *matrix_new(int nl, int nc);
void matrix_free(matrix *n);
matrix *read_pgm(void);
void dx(matrix *m, matrix *dx);
void matrix_mag(matrix *dx, matrix *dy, matrix *aag);
void matrix_norm(matrix *m);
void matrix_print_pgm(matrix *m);