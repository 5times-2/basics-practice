int v[5];
int *n = v;//Equal to int *n = &v[0];
n 	== &v[0];			*n 		== v[0];
n+1 == &v[1];			*(n+1)  == v[1];
n+2 == &v[2];			*(n+2)  == v[2];