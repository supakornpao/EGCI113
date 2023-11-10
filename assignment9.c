#define MaxRow 10 //array-maximum no of rows
#define MinRow 1 //array-minimum no of rows
#define MaxCol 6 //array-maximum no of columns
#define MinCol 1 //array-minimum no of columns

#include <stdio.h>

//Functions declaration
int ReadArraySize(int,int);
void ReadArray(int [][MaxCol], int, int);
void AddArrayC(int [][MaxCol], int[][MaxCol], int[][MaxCol], int, int);
void DispArray(int [][MaxCol], int, int);
void DispArrayT(int [][MaxCol], int, int);
// optional MulArray(int [][MaxCol], int[][MaxCol], int[][MaxCol], int, int),

int main()
{
    int RowSize, ColSize;
    int a[MaxRow][MaxCol],//1st input array
     b[MaxRow][MaxCol],//2nd input array
     c[MaxRow][MaxCol];//resulting array


    printf("Please specify no. of rows of arrays: ");
    RowSize=ReadArraySize(MinRow,MaxRow);

    printf("Please specify no. of columns of arrays: ");
    ColSize=ReadArraySize(MinCol,MaxCol);
    printf("Array size is set to: [%d] [%d]\n", RowSize, ColSize);

    printf("\nInput matrix A:\n");
    ReadArray(a, RowSize, ColSize);//get all value for arrays a (scanf)
    printf("\nInput matrix B:\n");
    ReadArray(b, RowSize, ColSize);//get all value for arrays b (scanf)

//find array c[][] = array a[][] + b[][]
    AddArrayC(a, b, c, RowSize, ColSize);

    printf("Matrix A: \n");
    DispArray(a, RowSize, ColSize);//display a
    printf("Matrix B: \n");
    DispArray(b, RowSize, ColSize);//display b
    printf("Matrix C: \n");
    DispArray(c, RowSize, ColSize);//display c

    printf( "please type any key to show the transpose: \n");
    getchar();
    printf("\nMatrix A Transpose: \n");
    DispArrayT(a, RowSize, ColSize);//display a^T
    printf("Matrix B Transpose: \n");
    DispArrayT(b, RowSize, ColSize);//display b^T
    printf("Matrix C Transpose: \n");
    DispArrayT(c, RowSize, ColSize);//display c^T

    return 0;
}


int ReadArraySize(int MinSize,int MaxSize) //read array size, row then column
{
    int size;
	do{
      	printf(" range[%d..%d] : ",MinSize,MaxSize);
	    scanf("%d", &size);
   	}while(size > MaxSize || size <= MinSize);

    return size;

}
void ReadArray(int x[][MaxCol], int Rowsize, int Colsize){
    int i,j;
    for(i=0;i<Rowsize;i++){
        for(j=0;j<Colsize;j++){
            printf("[%d,%d]: ",i,j);
            scanf("%3d", &x[i][j]);
        }
    }
}
void AddArrayC(int a[][MaxCol], int b[][MaxCol], int c[][MaxCol], int Rowsize, int Colsize){
    int i,j;
    for(i=0;i<Rowsize;i++){
        for(j=0;j<Colsize;j++)
            c[i][j]=a[i][j]+b[i][j];
    }
    printf("\n");
}
void DispArray(int x[][MaxCol], int Rowsize, int Colsize){
    int i,j;
    for(i=0;i<Rowsize;i++){
        for(j=0;j<Colsize;j++)
            printf("%3d", x[i][j]);
        printf("\n");
    }
    printf("\n");
}
void DispArrayT(int x[][MaxCol], int Rowsize, int Colsize){
    int i,j;
    for(i=0;i<Colsize;i++){
        for(j=0;j<Rowsize;j++)
            printf("%3d", x[j][i]);
        printf("\n");
    }
    printf("\n");
}
