
/* File generated by gen_cfile.py. Should not be modified. */

#ifndef TESTSLAVE_H
#define TESTSLAVE_H

#include "data.h"

/* Prototypes of function provided by object dictionnary */
UNS32 TestSlave_valueRangeTest (UNS8 typeValue, void * value);
const indextable * TestSlave_scanIndexOD (UNS16 wIndex, UNS32 * errorCode, ODCallback_t **callbacks);

/* Master node data struct */
extern CO_Data TestSlave_Data;
extern UNS8 Datee;		/* Mapped at index 0x2000, subindex 0x00*/
extern UNS8 Datee1[10];		/* Mapped at index 0x2001, subindex 0x01 - 0x0A */
extern UNS32 Read_Input_4_Byte[1];		/* Mapped at index 0x6120, subindex 0x01 - 0x01 */
extern UNS32 Polarity_Input_32_Bit[1];		/* Mapped at index 0x6122, subindex 0x01 - 0x01 */
extern UNS32 Write_Output_32_Bit[1];		/* Mapped at index 0x6320, subindex 0x01 - 0x01 */

#endif // TESTSLAVE_H
