#include <stdio.h>
 void  main()
{
   char ch;
 printf("Enter the character");
   scanf("%c", &ch);
   if ( isdigit ( ch ) )
      printf ( "yes" ) ;
   else
      printf ( "no" ) ;
}
