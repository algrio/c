#include <stdio.h>
#include <stdbool.h>

int main(void)
{
int dep1=8*60, dep2=9*60+43, dep3=11*60+19, dep4=12*60+47, dep5=14*60, dep6=15*60+45, dep7=19*60, dep8=21*60+45;
int arr1=10*60+16, arr2=11*60+52, arr3=13*60+31, arr4=15*60, arr5=16*60+8, arr6=17*60+55, arr7=21*60+20, arr8=23*60+58;
int hour, minute, time, dep, arr;

printf("Enter Estimated Departure Time (HH:MM, 24H): ");
scanf("%d:%d", &hour, &minute);
time = hour * 60 + minute;

if(time <= (dep1+dep2)/2)
    {dep = dep1;
    arr = arr1;}
else if(time <= (dep2+dep3)/2)
    {dep = dep2;
    arr = arr2;}
else if(time <= (dep3+dep4)/2)
    {dep = dep3;
    arr = arr3;}
else if(time <= (dep4+dep5)/2)
    {dep = dep4;
    arr = arr4;}
else if(time <= (dep5+dep6)/2)
    {dep = dep5;
    arr = arr5;}
else if(time <= (dep6+dep7)/2)
    {dep = dep6;
    arr = arr6;}
else if(time <= (dep7+dep8)/2)
    {dep = dep7;
    arr = arr7;}
else
    {dep = dep8;
    arr = arr8;};

if (dep < 60)
    printf("The Closest Departure Time Is %02d:%02d A.M., Arriving At ", 12+dep/60, dep%60);
else if(dep < 720)
    printf("The Closest Departure Time Is %02d:%02d A.M., Arriving At ", dep/60, dep%60);
else if(dep < 780)
    printf("The Closest Departure Time Is %02d:%02d P.M., Arriving At ", dep/60, dep%60);
else
    printf("The Closest Departure Time Is %02d:%02d P.M., Arriving At ", dep/60-12, dep%60);

if (arr < 60)
    printf("%02d:%02d A.M.\n", 12+arr/60, arr%60);
else if (arr < 720)
    printf("%02d:%02d A.M.\n", arr/60, arr%60);
else if (arr < 780)
    printf("%02d:%02d P.M.\n", arr/60, arr%60);
else
    printf("%02d:%02d P.M.\n", arr/60-12, arr%60);

return 0; 
}
