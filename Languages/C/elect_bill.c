//Prit Electricity bill
/*0-50: 1
51-100: 1.5
101-200: 2
201-300: 2.5
301 & above: 3.25 
*/
#include <stdio.h>
int main(){
        int unit,bill,i;
        bill=0;
        printf("Enter number of units: ");
        scanf("%d",&unit);
        for (i=0;i<unit;i++){
            if (i<51){
                bill+=1;
            }
            else if (i<101){
                bill+=1.5;
            }
            else if (i<201){
                bill+=2;
            }
            else if (i<301){
                bill+=2.5;
            }
            else {
                bill+=3.5;
            }
        }
        printf("Total Electricity bill = %d\n",bill);
}