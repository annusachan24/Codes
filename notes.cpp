1.In C, printf() returns the number of characters successfully written on the output and scanf() returns number of items successfully 
read.

For example, below program prints geeksforgeeks 13
int main()
{
  printf(" %d", printf("%s", "geeksforgeeks"));
  getchar();
}  

Irrespective of the string user enters, below program prints 1.
int main()
{
  char a[50];  
  printf(" %d", scanf("%s", a));
  getchar();
}  


2.In C, return type of getchar(), fgetc() and getc() is int (not char). So it is recommended to assign the returned values of these 
functions to an integer type variable. 


3. scanf family functions support scanset specifiers which are represented by %[]. Inside scanset, we can specify single character
 or range of characters. While processing scanset, scanf will process only those characters which are part of scanset. We can define 
 scanset by putting characters inside squre brackets. Please note that the scansets are case-sensitive.

Let us see with example. Below example will store only capital letters to character array ‘str’, any other character will not be
stored inside character array.
/* A simple scanset example */
#include <stdio.h>
 
int main(void)
{
    char str[128];
 
    printf("Enter a string: ");
    scanf("%[A-Z]s", str);
 
    printf("You entered: %s\n", str);
 
    return 0;
}



[root@centos-6 C]# ./scan-set 
  Enter a string: GEEKs_for_geeks
  You entered: GEEK


4. If first character of scanset is ‘^’, then the specifier will stop reading after first occurence of that character. For example,
 given below scanset will read all characters but stops after first occurence of ‘o’
scanf("%[^o]s", str);




5.Let us implement gets() function by using scan set. gets() fucntion reads a line from stdin into the buffer pointed to by s until 
either a terminating newline or EOF found.
/* implementation of gets() function using scanset */
#include <stdio.h>
 
int main(void)
{
    char str[128];
 
    printf("Enter a string with spaces: ");
    scanf("%[^\n]s", str);
 
    printf("You entered: %s\n", str);
 
    return 0;
}

  [root@centos-6 C]# ./gets 
  Enter a string with spaces: Geeks For Geeks
  You entered: Geeks For Geeks
  [root@centos-6 C]# 


  6. 
What is use of %n in printf() ?

In C printf(), %n is a special format specifier which instead of printing something causes printf() to load the variable pointed
 by the corresponding argument with a value equal to the number of characters that have been printed by printf() before the occurrence 
 of %n.
#include<stdio.h>
 
int main()
{
  int c;
  printf("geeks for %ngeeks ", &c);
  printf("%d", c);
  getchar();
  return 0;
}

The above program prints “geeks for geeks 10″. The first printf() prints “geeks for geeks”. The second printf() prints 10 as there are 
10 characters printed (the 10 characters are “geeks for “) before %n in first printf() and c is set to 10 by first printf().


7.So we can print “%” using “%%”
/* Program to print %*/
#include<stdio.h>
/* Program to print %*/
int main()
{
   printf("%%");
   getchar();
   return 0;
}

We can also print “%” using below.
printf("%c", '%');
printf("%s", "%");


8.sprintf:
Syntax:

int sprintf(char *str, const char *string,...); 

String print function it is stead of printing on console store it on char buffer which are specified in sprintf

Example:
// Example program to demonstrate sprintf()
#include<stdio.h>
int main()
{
    char buffer[50];
    int a = 10, b = 20, c;
    c = a + b;
    sprintf(buffer, "Sum of %d and %d is %d", a, b, c);
 
    // The string "sum of 10 and 20 is 30" is stored 
    // into buffer instead of printing on stdout
    printf("%s", buffer);
 
    return 0;
}

Output:

Sum of 10 and 20 is 30

fprintf:
fprintf is used to print the sting content in file but not on stdout console.

int fprintf(FILE *fptr, const char *str, ...);

Example:
#include<stdio.h>
int main()
{
    int i, n=2;
    char str[50];
 
    //open file sample.txt in write mode
    FILE *fptr = fopen("sample.txt", "w");
    if (fptr == NULL)
    {
        printf("Could not open file");
        return 0;
    }
 
    for (i=0; i<n; i++)
    {
        puts("Enter a name");
        gets(str);
        fprintf(fptr,"%d.%s\n", i, str);
    }
    fclose(fptr);
 
    return 0;
}

Input: GeeksforGeeks
       GeeksQuiz
Output:  sample.txt file now having output as 
0. GeeksforGeeks
1. GeeksQuiz



9. http://quiz.geeksforgeeks.org/difference-getchar-getch-getc-getche/


10. Short-Circuiting in Logical Operators:
In case of logical AND, the second operand is not evaluated if first operand is false. For example, program 1 below doesn’t print 
“GeeksQuiz” as the first operand of logical AND itself is false.
#include <stdio.h>
#include <stdbool.h>
int main()
{
    int a=10, b=4;
    bool res = ((a == b) && printf("GeeksQuiz"));
    return 0;
}

But below program prints “GeeksQuiz” as first operand of logical AND is true.
#include <stdio.h>
#include <stdbool.h>
int main()
{
    int a=10, b=4;
    bool res = ((a != b) && printf("GeeksQuiz"));
    return 0;
}

 
In case of logical OR, the second operand is not evaluated if first operand is true. For example, program 1 below doesn’t print 
“GeeksQuiz” as the first operand of logical OR itself is true.
#include <stdio.h>
#include <stdbool.h>
int main()
{
    int a=10, b=4;
    bool res = ((a != b) || printf("GeeksQuiz"));
    return 0;
}

But below program prints “GeeksQuiz” as first operand of logical OR is false.
#include <stdio.h>
#include <stdbool.h>
int main()
{
    int a=10, b=4;
    bool res = ((a == b) || printf("GeeksQuiz"));
    return 0;
}



12. 
