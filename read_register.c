// gcc read_register.c ; ./a.out; echo $?

int main(void)
{
	int value = 0;

	__asm__("movl $5, %ecx;"); // move value 5 into ecx register
	__asm__("movl %%ecx, %0;" : "=r" (value) : ); // Store value from ecx to variable

	return (value);
}
