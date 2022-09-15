typedef struct {
    int nl, nc;
    unsigned char **px;
} matrix;

matrix pgm_read(void);