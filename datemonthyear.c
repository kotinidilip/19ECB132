#include <stdio.h>

int main()
{
    int dd, mm, yy;
    int date;

    printf("Enter date (dd/mm/yy) format: ");
    scanf("%d/%d/%d", &dd, &mm, &yy);

    printf("\nEntered date is: %02d/%02d/%04d\n", dd, mm, yy);

  
    date = 0;
    date |= (dd & 0xff); 
    date |= (mm & 0xff) << 8; 
    date |= (yy & 0xffff) << 16; 

    printf("Date in single variable: %d [Hex: %08X] \n", date, date);

   

    dd = (date & 0xff); 
    mm = ((date >> 8) & 0xff);
    yy = ((date >> 16) & 0xffff); 

    printf("Date after extracting: %02d/%02d/%04d\n", dd, mm, yy);

    return 0;
}
~/19ECB132-2$ gcc datemonthyear.c
~/19ECB132-2$ ./a.out
Enter date (dd/mm/yy) format: 29/01/02

Entered date is: 29/01/0002
Date in single variable: 131357 [Hex: 0002011D] 
Date after extracting: 29/01/0002