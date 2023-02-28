#include <stdio.h>
 
int main()
{
   int m=40,n=20;
   int o=20,p=30;
   if (m>n && m !=0)
   {
      printf("&& Operator : Both conditions are true\n");
   }
   if (o>p || p!=20)
   {
      printf("|| Operator : Only one condition is true\n");
   }
   if (!(m>n && m !=0))
   {
      printf("! Operator : Both conditions are true\n");
   }
   else
   {
      printf("! Operator : Both conditions are true. " \
      "But, status is inverted as false\n");
   }
}

/**
 *In this program, operators (&&, || and !) are used to perform logical operations on the given expressions.
 *&& operator – “if clause” becomes true only when both conditions (m>n and m! =0) is true. Else, it becomes false.
 *|| Operator – “if clause” becomes true when any one of the condition (o>p || p!=20) is true. It becomes false when none of the condition is true.
 *! Operator  – It is used to reverses the state of the operand.
 *If the conditions (m>n && m!=0) is true, true (1) is returned. This value is inverted by “!” operator.
 *So, “! (m>n and m! =0)” returns false (0).
 */
