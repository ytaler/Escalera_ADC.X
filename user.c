/******************************************************************************/
/* Files to Include                                                           */
/******************************************************************************/

#if defined(__XC)
    #include <xc.h>         /* XC8 General Include File */
#elif defined(HI_TECH_C)
    #include <htc.h>        /* HiTech General Include File */
#endif

#include <stdint.h>         /* For uint8_t definition */
#include <stdbool.h>        /* For true/false definition */

#include "user.h"

/******************************************************************************/
/* User Functions                                                             */
/******************************************************************************/

/* <Initialize variables in user.h and insert code for user algorithms.> */

void InitApp(void)
{
    INTCON = 0;     // Deshabilitamos interrupciones
    GPIO = 0;       // Inicializamos puertos
    CMCON = 7;   // Apgamos comparadores
    ADCON0 = 0x89;  // ADC encendido, justificado a la derecha, canal 2 (gp2)
    RP0 = 1;        // Cambiamos de banco al banco 1
    ANSEL = 0x74;   // Clock, internal RC, GP2 para AD, resto pines IO digital
    TRISIO = 0x1F;  // Configuramos GP5 como salida y el resto como entrada
    WPU = 0;        // Deshabilitamos las resistencias pull-up
    RP0 = 0;        // Cambiamos de banco al banco 1
    T1CON = 0;      // Apgamos el timer 1
}

