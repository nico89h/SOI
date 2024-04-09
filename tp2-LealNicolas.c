#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#ifndef MAX_BUF
#define MAX_BUF 200
#endif

int main(void) {
  char path[MAX_BUF];

  getcwd(path, MAX_BUF);
  printf("Trabajando en el directorio: %s\n", path);
  getchar();
  exit(EXIT_SUCCESS);
}
/*
// C program to demonstrate
// example of time() function.
#include <stdio.h>
#include <time.h>

int main ()
{
	time_t seconds;
	
	seconds = time(NULL);
	printf("Seconds since January 1, 1970 = %ld\n", seconds);
	
	return(0);
}

#include<stdio.h> 

// chdir function is declared 
// inside this header 
#include<unistd.h> 
int main() 
{ 
	char s[100]; 

	// printing current working directory 
	printf("%s\n", getcwd(s, 100)); 

	// using the command 
	chdir(".."); 

	// printing current working directory 
	printf("%s\n", getcwd(s, 100)); 

	// after chdir is executed 
	return 0; 
} 
*/