/*
|       CPU benchmark program
|       loads all available CPU until Ctrl+C
|
|       compile using:
|       cc ./loadcpu.c -o loadcpu -fopenmp
|                                                                       
|       _______________________________________                         
|                                                                       
|       (c) cjayho, 2020+                                               
|                                                                       
|       This program is distributed under the terms of                  
|       3-clause BSD license                                            
|                                                                       
*/                                                                      
                                                                        
#include <stdio.h>                                                      
#include <omp.h>                                                        
                                                                        
int main( void )
{
	char* banner = "\n\
\
|\n\
|	loadCPU simple benchmark\n\
|	loads all available cpu cores in parallel\n\
|	\n\
|	Stop using Ctrl-C\n\
|	______________________________________________\n\
|\n\
|	(c) cjayho, 2020+\n\
|	This program is distributed under the terms\n\
|	of 3-clause BSD license.\n\
|\n";
	
	puts( banner );
	
	#pragma omp parallel
	while(1)
	{
		; // nop
	}
}
