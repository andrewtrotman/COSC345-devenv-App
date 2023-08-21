#include <stdio.h>

#include "main.h"

void call_me(void)
{
puts("call_me");
}

void dead_code(void)
{
puts("dead_code");
}

int main(void)
{
call_me();
return 0;
}