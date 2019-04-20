#include <stdio.h>
#include <conio.h>
void main() 
{
    char str[100];
    int begin, middle, end, length = 0;
    scanf("%s",str);
    while (str[length] != '\0')
    length++;
 
  end = length - 1;
  middle = length/2;
 
  for (begin = 0; begin < middle; begin++)
  {
    if (str[begin] != str[end])
    {
      printf("no");
      break;
    }
    end--;
  }
  if (begin == middle)
    printf("yes");
}
