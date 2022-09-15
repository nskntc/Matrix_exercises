#include <stdio.h>

int main() {

    for(l=0; l<nla; l++) {
        for(c=0; c<ncb; c++) {
            x=0;
            for(k=0; k<nca; k++) {
                x=x+A[l][k]*B[k][c];
            }
            M[l][c]=x;
        }
    }

    return 0;
}