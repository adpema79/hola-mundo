/** @file main.cpp
 *  @brief This file contain a code test for file.
 *
 *  The main idea is to include most of the types defined for doxygen
 *  to document a file.
 *
 *  @author Adbeel Alejandro Pérez (aaperez)
 *  @bug No documented bugs.
 */

/* -- Includes -- */
/* libc includes. */


/* libc includes. */
#include "main.h"

int var3=0;
/** @brief main function.
 *
 *  This is the entrypoint to any execution.
 *
 * @return Should return 0
 */
int main ()
{
    /*
     * define ptr to functions
     */
	int (*const fnc)(int,int)=funcion;
	void (*const fnc2)(int,int)=funcion2;
	int a=5;
	/*
	 * Apply operations
	 */
	a= fnc(6,4);
	fnc2(2,3);
	/*
	 * Show values to user
	 */
	printf("valor de salida= %i\n",a);
	printf("valor de salida= %i\n",var3);
	return 0;
}



int funcion(int var1, int var2)
{
	return var1+var2;
}

void funcion2(int var1, int var2)
{
	var3=var1+var2;

}



