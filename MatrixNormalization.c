#include <stdio.h>

int main()
{
  int column , row;
  //input column

  printf("Column = ");
  scanf("%d",&column);
  
  // check column  
  if(column < 0){
    while (column<0)
    {
      printf("Invalid column\n");
      printf("Column = ");
      scanf("%d",&column);
    }
  }
  
  //input row
  printf("Row = ");
  scanf("%d",&row);

  //check row
  if(row < 0){
    while (row<0)
    {
      printf("Invalid row\n");
      printf("Row = ");
      scanf("%d",&row);
    }
  }

  double arr[row][column];
  double arrcal[row][column];
  double temp;

  //input number
  for(int i = 0; i < row ; i++){
    for(int j = 0; j < column ; j++){
      double num;
      printf("input number = ");
      scanf("%lf",&num);
      arr[i][j] = num;
    }
  }

  // find max min values
  double max_num = arr[0][0];
  double min_num = arr[0][0];

  for (int i = 0; i < row; i++) {
    for (int j = 0; j < column; j++) {
      if (arr[i][j] > max_num) {
        max_num = arr[i][j];
      }
      if (arr[i][j] < min_num) {
        min_num = arr[i][j];
      }
    }
  }


// normalize calculate [0 - 1]
  double max = max_num;
  double min = min_num;
  double cal_max_min = max - min;

  for (int i = 0; i < row; i++) {
    for (int j = 0; j < column; j++) {
      double cal = (arr[i][j] - min);
      double cal2 = cal/cal_max_min;
      arrcal[i][j] = cal2;
      }
    }

// show all of value in arraycal

  for (int i = 0; i < row; i++) {
    for (int j = 0; j < column; j++) {
      printf("%.4lf ", arrcal[i][j]);  
    }
    printf("\n");
  }
  
	return 0;
}
