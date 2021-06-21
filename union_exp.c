#include <stdio.h>
#include <string.h>
union employee
{   int id;
    char name[50];
}e11;  //declaring e1 variable for union
int main( )
{

   printf( "size of union %d\n", sizeof(union employee));
   //store first employee information

   strcpy(e11.name, "raju gupta");
   e11.id=11;//copying string into char array
   //printing first employee information
   printf( "employee 1 id : %d\n", e11.id);
   printf( "employee 1 name : %s\n", e11.name);

   return 0;
}
