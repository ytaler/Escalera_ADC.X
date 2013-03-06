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
    INTCON = 0;  // Deshabilitamos interrupciones
    GPIO = 0;    // Inicializamos puertos
    CMCON = 0x07;   // Apgamos comparadores
    ADCON0 = 0x89;   // ADC encendido, justificado a la derecha, canal 2 (gp2)
    RP0 = 1;     // Cambiamos de banco al banco 1
    //GIE = 0x01;     // Habilitamos interrupciones
    //PEIE = 0x01;    // Habilita interrupcion por perifericos
    //PIE1 = 0x40;    // Habilitamos interrupcion del A/D. Requiere PEIE = 1 en el INTCON
    //INTE = 0x01;    // Habilita interrupcion extrena por el pin GPIO2
    //GPIE = 0x01;    // Habilita interrupcion por cambio de estados en los puertos
    ANSEL = 0x74;   // Clock, internal RC, GP2 para AD, resto pines IO digital
    TRISIO = 0x1F;  // Configuramos GP5 como salida y el resto como entrada
    WPU = 0;     // Deshabilitamos las resistencias pull-up
    //IOC = 0x14;     // Habilitamos interrupciones por cambio de GP2 y GP4
    RP0 = 0;     // Cambiamos de banco al banco 1
    T1CON = 0;   // Apgamos el timer 1
}

