#include <stdio.h>

int main() {
	int m, n, i, j;
	printf("Dimensi Matrik (m x n): "); scanf("%d" "%d", &m, &n);
	int A[m][n];
	for(i=0; i<m; i++) {
		for(j=0; j<n; j++) {
			printf("A[%d][%d] = ", i, j); scanf("%d", &A[i][j]);
		}
	}
	printf("\nMatriks A:\n");
	printf("----------\n");
	for(i=0; i<m; i++) {
		for(j=0; j<n; j++) {
			printf("%3d", A[i][j]);
		}
		printf("\n");
		printf("Transpose Matriks A:\n");
		printf("-------------\n");
		for(i=0; i<n; i++) {
			for(j=0; j<m; j++) {
				printf("%3d", A[j][i]);
			}
			printf("\n");
		}
		return 0;
	}
}
