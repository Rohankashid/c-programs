#include<stdio.h>
void main()

{   label:
   printf("\n we ae inside in label");
   goto end;
    printf("\n hello world");
    goto label;
end:
printf("\n we are at end");
}