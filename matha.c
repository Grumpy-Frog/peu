#include <stdio.h>

int main() {
  float matrix[2][2], determinant;
  int i, j;

  printf("Enter the elements of the 2x2 matrix:\n");
  for (i = 0; i < 2; i++) {
    for (j = 0; j < 2; j++) {
      scanf("%f", &matrix[i][j]);
    }
  }

  determinant = matrix[0][0] * matrix[1][1] - matrix[0][1] * matrix[1][0];

  printf("Determinant of the matrix = %.2f\n", determinant);

  if (determinant == 0) {
    printf("Inverse of the matrix doesn't exist.\n");
  } else {
    float temp = matrix[0][0];
    matrix[0][0] = matrix[1][1];
    matrix[1][1] = temp;
    matrix[0][1] = -matrix[0][1];
    matrix[1][0] = -matrix[1][0];

    for (i = 0; i < 2; i++) {
      for (j = 0; j < 2; j++) {
        matrix[i][j] /= determinant;
      }
    }

    printf("Inverse of the matrix:\n");
    for (i = 0; i < 2; i++) {
      for (j = 0; j < 2; j++) {
        printf("%.2f\t", matrix[i][j]);
      }
      printf("\n");
    }
  }

  return 0;
}
