/*You have to complete the function void update(int *a,int *b), which reads two integers as argument, and sets  with the sum of them, and  with the absolute difference of them.

Input Format

Input will contain two integers,  and , separated by a newline.

Output Format

You have to print the updated value of  and , on two different lines.


P.S.: Input/ouput will be automatically handled. You only have to complete the void update(int *a,int *b) function.

Sample Input

4
5
Sample Output

9
1
*/
#include <stdio.h>
#include<math.h>

void update(int *a,int *b) {
    *a=(*a)+(*b);
    *b=abs((*a)-2*(*b)); 
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}

