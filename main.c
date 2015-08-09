/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  08/08/2015 17:30:50
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Arthur Ramolet (ARA), arthur.ramolet@hotmail.fr
 *   Organization:  
 *
 * =====================================================================================
 */


#include	<stdlib.h>
#include    <stdio.h>
#include    "canard.c"

typedef struct tomate_s{
    int nb_tomates;
    char * tab_tomates;
}tomate_t;

typedef struct carotte_s{
    int nb_carottes;
    char * tab_carottes;
}carotte_t;
int caca = 48;
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
    int
main ( )
{
    int prout='c';
    miaou();
    printf("Dans ton fion %c\n",prout);
    return EXIT_SUCCESS;

}/* ----------  end of function main  ---------- */


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  toto
 *  Description:  
 * =====================================================================================
 */
    int
toto (int plop)
{
    printf("Hello World !");
    return plop;
}		/* -----  end of function toto  ----- */
