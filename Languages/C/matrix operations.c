//Program To perfrom addition operations on Matrices

#include<stdio.h>
void main()
{
	int i,j,l,h,l1,h1,c;
	printf("Enter 1st length : ");
	scanf("%d",&l);
	printf("Enter 1st height : ");
	scanf("%d",&h);
	int a[l][h],b[l][h];
	for (i=0;i<l;i++){
		for (j=0;j<h;j++){
			printf("Enter (%d,%d) element of 1st matrix : ",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n");
	printf("Enter 2nd length : ");
	scanf("%d",&l1);
	printf("Enter 2nd height : ");
	scanf("%d",&h1);
	for (i=0;i<l1;i++){
		for (j=0;j<h1;j++){
			printf("Enter (%d,%d) element of 2nd matrix : ",i+1,j+1);
			scanf("%d",&b[i][j]);
		}
	}
	scanf("%d",&c);
	switch(c){
		case 1:
			if (l==l1 && h==h1){
				int d[l][h];
				for (i=0;i<l1;i++){
					for (j=0;j<h1;j++){
						d[i][j]=a[i][j]+b[i][j];
					}
				}
				for (i=0;i<l1;i++){
					for (j=0;j<h1;j++){
						printf("%d ",d[i][j]);
					}
					printf("\n");
				} 
			}
			else{
				printf("Not possible\n");
			}
			break;
		case 2:
			if (l==l1 && h==h1){
				int d[l][h];
				for (i=0;i<l1;i++){
					for (j=0;j<h1;j++){
						d[i][j]=a[i][j]-b[i][j];
					}
				}
				for (i=0;i<l1;i++){
					for (j=0;j<h1;j++){
						printf("%d ",d[i][j]);
					}
					printf("\n");
				}
			}
			else{
				printf("Not possible\n");
			}
			break;
		case 3:
			if (l==h1){
				int d[l][h1];
				for (i=0;i<l;i++){
					for (j=0;j<h1;j++){
						d[i][j]=0;
							for (int k = 0; k < h1; k++) {
                				d[i][j] += a[i][k] * b[k][j];
           	 				}
					}
				}
				for (i=0;i<l;i++){
					for (j=0;j<h1;j++){
						printf("%d ",d[i][j]);
					}
					printf("\n");
				}
			}
			else{
				printf("Not possible\n");
			}
			break;
		case 4:
			for (i=0;i<l;i++){
					for (j=0;j<h;j++){
						printf("%d ",a[j][i]);
					}
					printf("\n");
				}
			break;
		default:
			printf("Invalid output\n");
	}
}