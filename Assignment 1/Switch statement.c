#include <stdio.h>
#include <stdlib.h>

int main()
{

    int day ;


    printf("Which number is today?\n");
    scanf("%d", &day);

switch (day) {
  case 1:
    printf("Monday");
    break;
  case 2:
    printf("Tuesday");
    break;
  case 3:
    printf("Wednesday");
    break;
  case 4:
    printf("Thursday");
    break;
  case 5:
    printf("Friday");
    break;
  case 6:
    printf("Saturday");
    break;
  case 7:
    printf("Sunday");
    break;
}
return (0);
}
