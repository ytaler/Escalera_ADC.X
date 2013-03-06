/******************************************************************************/
/* User Level #define Macros                                                  */
/******************************************************************************/

/* TODO Application specific user parameters used in user.c may go here */

/******************************************************************************/
/* User Function Prototypes                                                   */
/******************************************************************************/

#define Enciende_Luz() GP5 = 0x01;
#define Apaga_Luz() GP5 = 0x00;

void InitApp(void);         /* I/O and Peripheral Initialization */
