#include <stdio.h>
#include <stdlib.h>

int main( int argc, char* argv[] )
{
	printf( "main function started" );  
	if( argc > 1 ) 
	{	
		printf( "input arguments are not allowed" );
		exit(-1);
	}
	return 0;
}
