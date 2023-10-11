#include <stdio.h>
#include <stdarg.h>

int	filipnum(int n, ...)
{
	va_list filip2; 
	va_start(filip2, n); // this stores in filip2 the correct order the argumernts
	
	int a; 
	a = va_arg(filip2, int);

	char b; 
	b = va_arg(filip2, char);

	char *c;
	c = malloc(6*sizeof(char)); 
	c = va_arg(filip2, (char *));

}

int	main()
{
	filipnum(4,3,'c', "filip"); 
	// filipnum(4,3);
	// filipnum(4, "string"); 
	// filipnum(3, 4, 'c', 6); 
}