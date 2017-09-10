
/* File generated by gen_cfile.py. Should not be modified. */

#include "TestSlave.h"

/**************************************************************************/
/* Declaration of mapped variables                                        */
/**************************************************************************/

/**************************************************************************/
/* Declaration of value range types                                       */
/**************************************************************************/

#define valueRange_EMC 0x9F /* Type for index 0x1003 subindex 0x00 (only set of value 0 is possible) */
UNS32 TestSlave_valueRangeTest (UNS8 typeValue, void * value)
{
  switch (typeValue) {
    case valueRange_EMC:
      if (*(UNS8*)value != (UNS8)0) return OD_VALUE_RANGE_EXCEEDED;
      break;
  }
  return 0;
}

/**************************************************************************/
/* The node id                                                            */
/**************************************************************************/
/* node_id default value.*/
UNS8 TestSlave_bDeviceNodeId = 0x00;

/**************************************************************************/
/* Array of message processing information */

const UNS8 TestSlave_iam_a_slave = 1;

TIMER_HANDLE TestSlave_heartBeatTimers[1];

/*
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$

                               OBJECT DICTIONARY

$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
*/

/* index 0x1000 :   Device Type. */
                    UNS32 TestSlave_obj1000 = 0xCD;	/* 205 */
                    subindex TestSlave_Index1000[] = 
                     {
                       { RO, uint32, sizeof (UNS32), (void*)&TestSlave_obj1000 }
                     };

/* index 0x1001 :   Error Register. */
                    UNS8 TestSlave_obj1001 = 0x0;	/* 0 */
                    subindex TestSlave_Index1001[] = 
                     {
                       { RO, uint8, sizeof (UNS8), (void*)&TestSlave_obj1001 }
                     };

/* index 0x1003 :   Pre-defined Error Field */
                    UNS8 TestSlave_highestSubIndex_obj1003 = 0; /* number of subindex - 1*/
                    UNS32 TestSlave_obj1003[] = 
                    {
                      0x0	/* 0 */
                    };
                    ODCallback_t TestSlave_Index1003_callbacks[] = 
                     {
                       NULL,
                       NULL,
                     };
                    subindex TestSlave_Index1003[] = 
                     {
                       { RW, valueRange_EMC, sizeof (UNS8), (void*)&TestSlave_highestSubIndex_obj1003 },
                       { RO, uint32, sizeof (UNS32), (void*)&TestSlave_obj1003[0] }
                     };

/* index 0x1005 :   SYNC COB ID. */
                    UNS32 TestSlave_obj1005 = 0x0;	/* 0 */
                    ODCallback_t TestSlave_Index1005_callbacks[] = 
                     {
                       NULL,
                     };
                    subindex TestSlave_Index1005[] = 
                     {
                       { RW, uint32, sizeof (UNS32), (void*)&TestSlave_obj1005 }
                     };

/* index 0x1006 :   Communication / Cycle Period. */
                    UNS32 TestSlave_obj1006 = 0x0;	/* 0 */
                    ODCallback_t TestSlave_Index1006_callbacks[] = 
                     {
                       NULL,
                     };
                    subindex TestSlave_Index1006[] = 
                     {
                       { RW, uint32, sizeof (UNS32), (void*)&TestSlave_obj1006 }
                     };

/* index 0x1008 :   Manufacturer Device Name. */
                    UNS8 TestSlave_obj1008[20] = "Controller,It's used";
                    subindex TestSlave_Index1008[] = 
                     {
                       { RO, visible_string, 20, (void*)&TestSlave_obj1008 }
                     };

/* index 0x1009 :   Manufacturer Hardware Version. */
                    UNS8 TestSlave_obj1009[10] = "1.0.0";
                    subindex TestSlave_Index1009[] = 
                     {
                       { RO, visible_string, 10, (void*)&TestSlave_obj1009 }
                     };

/* index 0x100A :   Manufacturer Software Version. */
                    UNS8 TestSlave_obj100A[10] = "1.1.0";
                    subindex TestSlave_Index100A[] = 
                     {
                       { RO, visible_string, 10, (void*)&TestSlave_obj100A }
                     };

/* index 0x100C :   Guard Time */ 
                    UNS16 TestSlave_obj100C = 0x0;   /* 0 */

/* index 0x100D :   Life Time Factor */ 
                    UNS8 TestSlave_obj100D = 0x0;   /* 0 */

/* index 0x1014 :   Emergency COB ID */
                    UNS32 TestSlave_obj1014 = 0x80 + 0x00;   /* 128 + NodeID */

/* index 0x1016 :   Consumer Heartbeat Time */
                    UNS8 TestSlave_highestSubIndex_obj1016 = 0;
                    UNS32 TestSlave_obj1016[]={0};

/* index 0x1017 :   Producer Heartbeat Time. */
                    UNS16 TestSlave_obj1017 = 0x0;	/*  1Hz*/
                    ODCallback_t TestSlave_Index1017_callbacks[] = 
                     {
                       NULL,
                     };
                    subindex TestSlave_Index1017[] = 
                     {
                       { RW, uint16, sizeof (UNS16), (void*)&TestSlave_obj1017 }
                     };

/* index 0x1018 :   Identity. */
                    UNS8 TestSlave_highestSubIndex_obj1018 = 4; /* number of subindex - 1*/
                    UNS32 TestSlave_obj1018_Vendor_ID = 0x12;	/* 18 */
                    UNS32 TestSlave_obj1018_Product_Code = 0xA2;	/* 162 */
                    UNS32 TestSlave_obj1018_Revision_Number = 0x1;	/* 1 */
                    UNS32 TestSlave_obj1018_Serial_Number = 0x234;	/* 564 */
                    subindex TestSlave_Index1018[] = 
                     {
                       { RO, uint8, sizeof (UNS8), (void*)&TestSlave_highestSubIndex_obj1018 },
                       { RO, uint32, sizeof (UNS32), (void*)&TestSlave_obj1018_Vendor_ID },
                       { RO, uint32, sizeof (UNS32), (void*)&TestSlave_obj1018_Product_Code },
                       { RO, uint32, sizeof (UNS32), (void*)&TestSlave_obj1018_Revision_Number },
                       { RO, uint32, sizeof (UNS32), (void*)&TestSlave_obj1018_Serial_Number }
                     };

/* index 0x1200 :   Server SDO Parameter. */
                    UNS8 TestSlave_highestSubIndex_obj1200 = 2; /* number of subindex - 1*/
                    UNS32 TestSlave_obj1200_COB_ID_Client_to_Server_Receive_SDO = 0x600;	/* 1536 */
                    UNS32 TestSlave_obj1200_COB_ID_Server_to_Client_Transmit_SDO = 0x580;	/* 1408 */
                    subindex TestSlave_Index1200[] = 
                     {
                       { RO, uint8, sizeof (UNS8), (void*)&TestSlave_highestSubIndex_obj1200 },
                       { RO, uint32, sizeof (UNS32), (void*)&TestSlave_obj1200_COB_ID_Client_to_Server_Receive_SDO },
                       { RO, uint32, sizeof (UNS32), (void*)&TestSlave_obj1200_COB_ID_Server_to_Client_Transmit_SDO }
                     };

/* index 0x1400 :   Receive PDO 1 Parameter. */
                    UNS8 TestSlave_highestSubIndex_obj1400 = 5; /* number of subindex - 1*/
                    UNS32 TestSlave_obj1400_COB_ID_used_by_PDO = 0x200;	/* 512 */
                    UNS8 TestSlave_obj1400_Transmission_Type = 0x0;	/* 0 */
                    UNS16 TestSlave_obj1400_Inhibit_Time = 0x0;	/* 0 */
                    UNS8 TestSlave_obj1400_Compatibility_Entry = 0x0;	/* 0 */
                    UNS16 TestSlave_obj1400_Event_Timer = 0x0;	/* 0 */
                    subindex TestSlave_Index1400[] = 
                     {
                       { RO, uint8, sizeof (UNS8), (void*)&TestSlave_highestSubIndex_obj1400 },
                       { RW, uint32, sizeof (UNS32), (void*)&TestSlave_obj1400_COB_ID_used_by_PDO },
                       { RW, uint8, sizeof (UNS8), (void*)&TestSlave_obj1400_Transmission_Type },
                       { RW, uint16, sizeof (UNS16), (void*)&TestSlave_obj1400_Inhibit_Time },
                       { RW, uint8, sizeof (UNS8), (void*)&TestSlave_obj1400_Compatibility_Entry },
                       { RW, uint16, sizeof (UNS16), (void*)&TestSlave_obj1400_Event_Timer }
                     };

/* index 0x1401 :   Receive PDO 2 Parameter. */
                    UNS8 TestSlave_highestSubIndex_obj1401 = 5; /* number of subindex - 1*/
                    UNS32 TestSlave_obj1401_COB_ID_used_by_PDO = 0x300;	/* 768 */
                    UNS8 TestSlave_obj1401_Transmission_Type = 0x0;	/* 0 */
                    UNS16 TestSlave_obj1401_Inhibit_Time = 0x0;	/* 0 */
                    UNS8 TestSlave_obj1401_Compatibility_Entry = 0x0;	/* 0 */
                    UNS16 TestSlave_obj1401_Event_Timer = 0x0;	/* 0 */
                    subindex TestSlave_Index1401[] = 
                     {
                       { RO, uint8, sizeof (UNS8), (void*)&TestSlave_highestSubIndex_obj1401 },
                       { RW, uint32, sizeof (UNS32), (void*)&TestSlave_obj1401_COB_ID_used_by_PDO },
                       { RW, uint8, sizeof (UNS8), (void*)&TestSlave_obj1401_Transmission_Type },
                       { RW, uint16, sizeof (UNS16), (void*)&TestSlave_obj1401_Inhibit_Time },
                       { RW, uint8, sizeof (UNS8), (void*)&TestSlave_obj1401_Compatibility_Entry },
                       { RW, uint16, sizeof (UNS16), (void*)&TestSlave_obj1401_Event_Timer }
                     };

/* index 0x1402 :   Receive PDO 3 Parameter. */
                    UNS8 TestSlave_highestSubIndex_obj1402 = 5; /* number of subindex - 1*/
                    UNS32 TestSlave_obj1402_COB_ID_used_by_PDO = 0x400;	/* 1024 */
                    UNS8 TestSlave_obj1402_Transmission_Type = 0x0;	/* 0 */
                    UNS16 TestSlave_obj1402_Inhibit_Time = 0x0;	/* 0 */
                    UNS8 TestSlave_obj1402_Compatibility_Entry = 0x0;	/* 0 */
                    UNS16 TestSlave_obj1402_Event_Timer = 0x0;	/* 0 */
                    subindex TestSlave_Index1402[] = 
                     {
                       { RO, uint8, sizeof (UNS8), (void*)&TestSlave_highestSubIndex_obj1402 },
                       { RW, uint32, sizeof (UNS32), (void*)&TestSlave_obj1402_COB_ID_used_by_PDO },
                       { RW, uint8, sizeof (UNS8), (void*)&TestSlave_obj1402_Transmission_Type },
                       { RW, uint16, sizeof (UNS16), (void*)&TestSlave_obj1402_Inhibit_Time },
                       { RW, uint8, sizeof (UNS8), (void*)&TestSlave_obj1402_Compatibility_Entry },
                       { RW, uint16, sizeof (UNS16), (void*)&TestSlave_obj1402_Event_Timer }
                     };

/* index 0x1403 :   Receive PDO 4 Parameter. */
                    UNS8 TestSlave_highestSubIndex_obj1403 = 5; /* number of subindex - 1*/
                    UNS32 TestSlave_obj1403_COB_ID_used_by_PDO = 0x500;	/* 1280 */
                    UNS8 TestSlave_obj1403_Transmission_Type = 0x0;	/* 0 */
                    UNS16 TestSlave_obj1403_Inhibit_Time = 0x0;	/* 0 */
                    UNS8 TestSlave_obj1403_Compatibility_Entry = 0x0;	/* 0 */
                    UNS16 TestSlave_obj1403_Event_Timer = 0x0;	/* 0 */
                    subindex TestSlave_Index1403[] = 
                     {
                       { RO, uint8, sizeof (UNS8), (void*)&TestSlave_highestSubIndex_obj1403 },
                       { RW, uint32, sizeof (UNS32), (void*)&TestSlave_obj1403_COB_ID_used_by_PDO },
                       { RW, uint8, sizeof (UNS8), (void*)&TestSlave_obj1403_Transmission_Type },
                       { RW, uint16, sizeof (UNS16), (void*)&TestSlave_obj1403_Inhibit_Time },
                       { RW, uint8, sizeof (UNS8), (void*)&TestSlave_obj1403_Compatibility_Entry },
                       { RW, uint16, sizeof (UNS16), (void*)&TestSlave_obj1403_Event_Timer }
                     };

/* index 0x1600 :   Receive PDO 1 Mapping. */
                    UNS8 TestSlave_highestSubIndex_obj1600 = 8; /* number of subindex - 1*/
                    UNS32 TestSlave_obj1600[] = 
                    {
                      0x0,	/* 0 */
                      0x0,	/* 0 */
                      0x0,	/* 0 */
                      0x0,	/* 0 */
                      0x0,	/* 0 */
                      0x0,	/* 0 */
                      0x0,	/* 0 */
                      0x0	/* 0 */
                    };
                    subindex TestSlave_Index1600[] = 
                     {
                       { RW, uint8, sizeof (UNS8), (void*)&TestSlave_highestSubIndex_obj1600 },
                       { RW, uint32, sizeof (UNS32), (void*)&TestSlave_obj1600[0] },
                       { RW, uint32, sizeof (UNS32), (void*)&TestSlave_obj1600[1] },
                       { RW, uint32, sizeof (UNS32), (void*)&TestSlave_obj1600[2] },
                       { RW, uint32, sizeof (UNS32), (void*)&TestSlave_obj1600[3] },
                       { RW, uint32, sizeof (UNS32), (void*)&TestSlave_obj1600[4] },
                       { RW, uint32, sizeof (UNS32), (void*)&TestSlave_obj1600[5] },
                       { RW, uint32, sizeof (UNS32), (void*)&TestSlave_obj1600[6] },
                       { RW, uint32, sizeof (UNS32), (void*)&TestSlave_obj1600[7] }
                     };

/* index 0x1601 :   Receive PDO 2 Mapping. */
                    UNS8 TestSlave_highestSubIndex_obj1601 = 8; /* number of subindex - 1*/
                    UNS32 TestSlave_obj1601[] = 
                    {
                      0x0,	/* 0 */
                      0x0,	/* 0 */
                      0x0,	/* 0 */
                      0x0,	/* 0 */
                      0x0,	/* 0 */
                      0x0,	/* 0 */
                      0x0,	/* 0 */
                      0x0	/* 0 */
                    };
                    subindex TestSlave_Index1601[] = 
                     {
                       { RW, uint8, sizeof (UNS8), (void*)&TestSlave_highestSubIndex_obj1601 },
                       { RW, uint32, sizeof (UNS32), (void*)&TestSlave_obj1601[0] },
                       { RW, uint32, sizeof (UNS32), (void*)&TestSlave_obj1601[1] },
                       { RW, uint32, sizeof (UNS32), (void*)&TestSlave_obj1601[2] },
                       { RW, uint32, sizeof (UNS32), (void*)&TestSlave_obj1601[3] },
                       { RW, uint32, sizeof (UNS32), (void*)&TestSlave_obj1601[4] },
                       { RW, uint32, sizeof (UNS32), (void*)&TestSlave_obj1601[5] },
                       { RW, uint32, sizeof (UNS32), (void*)&TestSlave_obj1601[6] },
                       { RW, uint32, sizeof (UNS32), (void*)&TestSlave_obj1601[7] }
                     };

/* index 0x1602 :   Receive PDO 3 Mapping. */
                    UNS8 TestSlave_highestSubIndex_obj1602 = 8; /* number of subindex - 1*/
                    UNS32 TestSlave_obj1602[] = 
                    {
                      0x0,	/* 0 */
                      0x0,	/* 0 */
                      0x0,	/* 0 */
                      0x0,	/* 0 */
                      0x0,	/* 0 */
                      0x0,	/* 0 */
                      0x0,	/* 0 */
                      0x0	/* 0 */
                    };
                    subindex TestSlave_Index1602[] = 
                     {
                       { RW, uint8, sizeof (UNS8), (void*)&TestSlave_highestSubIndex_obj1602 },
                       { RW, uint32, sizeof (UNS32), (void*)&TestSlave_obj1602[0] },
                       { RW, uint32, sizeof (UNS32), (void*)&TestSlave_obj1602[1] },
                       { RW, uint32, sizeof (UNS32), (void*)&TestSlave_obj1602[2] },
                       { RW, uint32, sizeof (UNS32), (void*)&TestSlave_obj1602[3] },
                       { RW, uint32, sizeof (UNS32), (void*)&TestSlave_obj1602[4] },
                       { RW, uint32, sizeof (UNS32), (void*)&TestSlave_obj1602[5] },
                       { RW, uint32, sizeof (UNS32), (void*)&TestSlave_obj1602[6] },
                       { RW, uint32, sizeof (UNS32), (void*)&TestSlave_obj1602[7] }
                     };

/* index 0x1603 :   Receive PDO 4 Mapping. */
                    UNS8 TestSlave_highestSubIndex_obj1603 = 8; /* number of subindex - 1*/
                    UNS32 TestSlave_obj1603[] = 
                    {
                      0x0,	/* 0 */
                      0x0,	/* 0 */
                      0x0,	/* 0 */
                      0x0,	/* 0 */
                      0x0,	/* 0 */
                      0x0,	/* 0 */
                      0x0,	/* 0 */
                      0x0	/* 0 */
                    };
                    subindex TestSlave_Index1603[] = 
                     {
                       { RW, uint8, sizeof (UNS8), (void*)&TestSlave_highestSubIndex_obj1603 },
                       { RW, uint32, sizeof (UNS32), (void*)&TestSlave_obj1603[0] },
                       { RW, uint32, sizeof (UNS32), (void*)&TestSlave_obj1603[1] },
                       { RW, uint32, sizeof (UNS32), (void*)&TestSlave_obj1603[2] },
                       { RW, uint32, sizeof (UNS32), (void*)&TestSlave_obj1603[3] },
                       { RW, uint32, sizeof (UNS32), (void*)&TestSlave_obj1603[4] },
                       { RW, uint32, sizeof (UNS32), (void*)&TestSlave_obj1603[5] },
                       { RW, uint32, sizeof (UNS32), (void*)&TestSlave_obj1603[6] },
                       { RW, uint32, sizeof (UNS32), (void*)&TestSlave_obj1603[7] }
                     };

/* index 0x1800 :   Transmit PDO 1 Parameter. */
                    UNS8 TestSlave_highestSubIndex_obj1800 = 5; /* number of subindex - 1*/
                    UNS32 TestSlave_obj1800_COB_ID_used_by_PDO = 0x180;	/* 384 */
                    UNS8 TestSlave_obj1800_Transmission_Type = 0x0;	/* 0 */
                    UNS16 TestSlave_obj1800_Inhibit_Time = 0x0;	/* 0 */
                    UNS8 TestSlave_obj1800_Compatibility_Entry = 0x0;	/* 0 */
                    UNS16 TestSlave_obj1800_Event_Timer = 0x0;	/* 0 */
                    ODCallback_t TestSlave_Index1800_callbacks[] = 
                     {
                       NULL,
                       NULL,
                       NULL,
                       NULL,
                       NULL,
                       NULL,
                     };
                    subindex TestSlave_Index1800[] = 
                     {
                       { RO, uint8, sizeof (UNS8), (void*)&TestSlave_highestSubIndex_obj1800 },
                       { RW, uint32, sizeof (UNS32), (void*)&TestSlave_obj1800_COB_ID_used_by_PDO },
                       { RW, uint8, sizeof (UNS8), (void*)&TestSlave_obj1800_Transmission_Type },
                       { RW, uint16, sizeof (UNS16), (void*)&TestSlave_obj1800_Inhibit_Time },
                       { RW, uint8, sizeof (UNS8), (void*)&TestSlave_obj1800_Compatibility_Entry },
                       { RW, uint16, sizeof (UNS16), (void*)&TestSlave_obj1800_Event_Timer }
                     };

/* index 0x1801 :   Transmit PDO 2 Parameter. */
                    UNS8 TestSlave_highestSubIndex_obj1801 = 5; /* number of subindex - 1*/
                    UNS32 TestSlave_obj1801_COB_ID_used_by_PDO = 0x280;	/* 640 */
                    UNS8 TestSlave_obj1801_Transmission_Type = 0x0;	/* 0 */
                    UNS16 TestSlave_obj1801_Inhibit_Time = 0x0;	/* 0 */
                    UNS8 TestSlave_obj1801_Compatibility_Entry = 0x0;	/* 0 */
                    UNS16 TestSlave_obj1801_Event_Timer = 0x0;	/* 0 */
                    ODCallback_t TestSlave_Index1801_callbacks[] = 
                     {
                       NULL,
                       NULL,
                       NULL,
                       NULL,
                       NULL,
                       NULL,
                     };
                    subindex TestSlave_Index1801[] = 
                     {
                       { RO, uint8, sizeof (UNS8), (void*)&TestSlave_highestSubIndex_obj1801 },
                       { RW, uint32, sizeof (UNS32), (void*)&TestSlave_obj1801_COB_ID_used_by_PDO },
                       { RW, uint8, sizeof (UNS8), (void*)&TestSlave_obj1801_Transmission_Type },
                       { RW, uint16, sizeof (UNS16), (void*)&TestSlave_obj1801_Inhibit_Time },
                       { RW, uint8, sizeof (UNS8), (void*)&TestSlave_obj1801_Compatibility_Entry },
                       { RW, uint16, sizeof (UNS16), (void*)&TestSlave_obj1801_Event_Timer }
                     };

/* index 0x1802 :   Transmit PDO 3 Parameter. */
                    UNS8 TestSlave_highestSubIndex_obj1802 = 5; /* number of subindex - 1*/
                    UNS32 TestSlave_obj1802_COB_ID_used_by_PDO = 0x380;	/* 896 */
                    UNS8 TestSlave_obj1802_Transmission_Type = 0x0;	/* 0 */
                    UNS16 TestSlave_obj1802_Inhibit_Time = 0x0;	/* 0 */
                    UNS8 TestSlave_obj1802_Compatibility_Entry = 0x0;	/* 0 */
                    UNS16 TestSlave_obj1802_Event_Timer = 0x0;	/* 0 */
                    ODCallback_t TestSlave_Index1802_callbacks[] = 
                     {
                       NULL,
                       NULL,
                       NULL,
                       NULL,
                       NULL,
                       NULL,
                     };
                    subindex TestSlave_Index1802[] = 
                     {
                       { RO, uint8, sizeof (UNS8), (void*)&TestSlave_highestSubIndex_obj1802 },
                       { RW, uint32, sizeof (UNS32), (void*)&TestSlave_obj1802_COB_ID_used_by_PDO },
                       { RW, uint8, sizeof (UNS8), (void*)&TestSlave_obj1802_Transmission_Type },
                       { RW, uint16, sizeof (UNS16), (void*)&TestSlave_obj1802_Inhibit_Time },
                       { RW, uint8, sizeof (UNS8), (void*)&TestSlave_obj1802_Compatibility_Entry },
                       { RW, uint16, sizeof (UNS16), (void*)&TestSlave_obj1802_Event_Timer }
                     };

/* index 0x1803 :   Transmit PDO 4 Parameter. */
                    UNS8 TestSlave_highestSubIndex_obj1803 = 5; /* number of subindex - 1*/
                    UNS32 TestSlave_obj1803_COB_ID_used_by_PDO = 0x480;	/* 1152 */
                    UNS8 TestSlave_obj1803_Transmission_Type = 0x0;	/* 0 */
                    UNS16 TestSlave_obj1803_Inhibit_Time = 0x0;	/* 0 */
                    UNS8 TestSlave_obj1803_Compatibility_Entry = 0x0;	/* 0 */
                    UNS16 TestSlave_obj1803_Event_Timer = 0x0;	/* 0 */
                    ODCallback_t TestSlave_Index1803_callbacks[] = 
                     {
                       NULL,
                       NULL,
                       NULL,
                       NULL,
                       NULL,
                       NULL,
                     };
                    subindex TestSlave_Index1803[] = 
                     {
                       { RO, uint8, sizeof (UNS8), (void*)&TestSlave_highestSubIndex_obj1803 },
                       { RW, uint32, sizeof (UNS32), (void*)&TestSlave_obj1803_COB_ID_used_by_PDO },
                       { RW, uint8, sizeof (UNS8), (void*)&TestSlave_obj1803_Transmission_Type },
                       { RW, uint16, sizeof (UNS16), (void*)&TestSlave_obj1803_Inhibit_Time },
                       { RW, uint8, sizeof (UNS8), (void*)&TestSlave_obj1803_Compatibility_Entry },
                       { RW, uint16, sizeof (UNS16), (void*)&TestSlave_obj1803_Event_Timer }
                     };

/* index 0x1A00 :   Transmit PDO 1 Mapping. */
                    UNS8 TestSlave_highestSubIndex_obj1A00 = 8; /* number of subindex - 1*/
                    UNS32 TestSlave_obj1A00[] = 
                    {
                      0x0,	/* 0 */
                      0x0,	/* 0 */
                      0x0,	/* 0 */
                      0x0,	/* 0 */
                      0x0,	/* 0 */
                      0x0,	/* 0 */
                      0x0,	/* 0 */
                      0x0	/* 0 */
                    };
                    subindex TestSlave_Index1A00[] = 
                     {
                       { RW, uint8, sizeof (UNS8), (void*)&TestSlave_highestSubIndex_obj1A00 },
                       { RW, uint32, sizeof (UNS32), (void*)&TestSlave_obj1A00[0] },
                       { RW, uint32, sizeof (UNS32), (void*)&TestSlave_obj1A00[1] },
                       { RW, uint32, sizeof (UNS32), (void*)&TestSlave_obj1A00[2] },
                       { RW, uint32, sizeof (UNS32), (void*)&TestSlave_obj1A00[3] },
                       { RW, uint32, sizeof (UNS32), (void*)&TestSlave_obj1A00[4] },
                       { RW, uint32, sizeof (UNS32), (void*)&TestSlave_obj1A00[5] },
                       { RW, uint32, sizeof (UNS32), (void*)&TestSlave_obj1A00[6] },
                       { RW, uint32, sizeof (UNS32), (void*)&TestSlave_obj1A00[7] }
                     };

/* index 0x1A01 :   Transmit PDO 2 Mapping. */
                    UNS8 TestSlave_highestSubIndex_obj1A01 = 8; /* number of subindex - 1*/
                    UNS32 TestSlave_obj1A01[] = 
                    {
                      0x0,	/* 0 */
                      0x0,	/* 0 */
                      0x0,	/* 0 */
                      0x0,	/* 0 */
                      0x0,	/* 0 */
                      0x0,	/* 0 */
                      0x0,	/* 0 */
                      0x0	/* 0 */
                    };
                    subindex TestSlave_Index1A01[] = 
                     {
                       { RW, uint8, sizeof (UNS8), (void*)&TestSlave_highestSubIndex_obj1A01 },
                       { RW, uint32, sizeof (UNS32), (void*)&TestSlave_obj1A01[0] },
                       { RW, uint32, sizeof (UNS32), (void*)&TestSlave_obj1A01[1] },
                       { RW, uint32, sizeof (UNS32), (void*)&TestSlave_obj1A01[2] },
                       { RW, uint32, sizeof (UNS32), (void*)&TestSlave_obj1A01[3] },
                       { RW, uint32, sizeof (UNS32), (void*)&TestSlave_obj1A01[4] },
                       { RW, uint32, sizeof (UNS32), (void*)&TestSlave_obj1A01[5] },
                       { RW, uint32, sizeof (UNS32), (void*)&TestSlave_obj1A01[6] },
                       { RW, uint32, sizeof (UNS32), (void*)&TestSlave_obj1A01[7] }
                     };

/* index 0x1A02 :   Transmit PDO 3 Mapping. */
                    UNS8 TestSlave_highestSubIndex_obj1A02 = 8; /* number of subindex - 1*/
                    UNS32 TestSlave_obj1A02[] = 
                    {
                      0x0,	/* 0 */
                      0x0,	/* 0 */
                      0x0,	/* 0 */
                      0x0,	/* 0 */
                      0x0,	/* 0 */
                      0x0,	/* 0 */
                      0x0,	/* 0 */
                      0x0	/* 0 */
                    };
                    subindex TestSlave_Index1A02[] = 
                     {
                       { RW, uint8, sizeof (UNS8), (void*)&TestSlave_highestSubIndex_obj1A02 },
                       { RW, uint32, sizeof (UNS32), (void*)&TestSlave_obj1A02[0] },
                       { RW, uint32, sizeof (UNS32), (void*)&TestSlave_obj1A02[1] },
                       { RW, uint32, sizeof (UNS32), (void*)&TestSlave_obj1A02[2] },
                       { RW, uint32, sizeof (UNS32), (void*)&TestSlave_obj1A02[3] },
                       { RW, uint32, sizeof (UNS32), (void*)&TestSlave_obj1A02[4] },
                       { RW, uint32, sizeof (UNS32), (void*)&TestSlave_obj1A02[5] },
                       { RW, uint32, sizeof (UNS32), (void*)&TestSlave_obj1A02[6] },
                       { RW, uint32, sizeof (UNS32), (void*)&TestSlave_obj1A02[7] }
                     };

/* index 0x1A03 :   Transmit PDO 4 Mapping. */
                    UNS8 TestSlave_highestSubIndex_obj1A03 = 8; /* number of subindex - 1*/
                    UNS32 TestSlave_obj1A03[] = 
                    {
                      0x0,	/* 0 */
                      0x0,	/* 0 */
                      0x0,	/* 0 */
                      0x0,	/* 0 */
                      0x0,	/* 0 */
                      0x0,	/* 0 */
                      0x0,	/* 0 */
                      0x0	/* 0 */
                    };
                    subindex TestSlave_Index1A03[] = 
                     {
                       { RW, uint8, sizeof (UNS8), (void*)&TestSlave_highestSubIndex_obj1A03 },
                       { RW, uint32, sizeof (UNS32), (void*)&TestSlave_obj1A03[0] },
                       { RW, uint32, sizeof (UNS32), (void*)&TestSlave_obj1A03[1] },
                       { RW, uint32, sizeof (UNS32), (void*)&TestSlave_obj1A03[2] },
                       { RW, uint32, sizeof (UNS32), (void*)&TestSlave_obj1A03[3] },
                       { RW, uint32, sizeof (UNS32), (void*)&TestSlave_obj1A03[4] },
                       { RW, uint32, sizeof (UNS32), (void*)&TestSlave_obj1A03[5] },
                       { RW, uint32, sizeof (UNS32), (void*)&TestSlave_obj1A03[6] },
                       { RW, uint32, sizeof (UNS32), (void*)&TestSlave_obj1A03[7] }
                     };

/**************************************************************************/
/* Declaration of pointed variables                                       */
/**************************************************************************/

const indextable TestSlave_objdict[] = 
{
  { (subindex*)TestSlave_Index1000,sizeof(TestSlave_Index1000)/sizeof(TestSlave_Index1000[0]), 0x1000},
  { (subindex*)TestSlave_Index1001,sizeof(TestSlave_Index1001)/sizeof(TestSlave_Index1001[0]), 0x1001},
  { (subindex*)TestSlave_Index1005,sizeof(TestSlave_Index1005)/sizeof(TestSlave_Index1005[0]), 0x1005},
  { (subindex*)TestSlave_Index1006,sizeof(TestSlave_Index1006)/sizeof(TestSlave_Index1006[0]), 0x1006},
  { (subindex*)TestSlave_Index1008,sizeof(TestSlave_Index1008)/sizeof(TestSlave_Index1008[0]), 0x1008},
  { (subindex*)TestSlave_Index1009,sizeof(TestSlave_Index1009)/sizeof(TestSlave_Index1009[0]), 0x1009},
  { (subindex*)TestSlave_Index100A,sizeof(TestSlave_Index100A)/sizeof(TestSlave_Index100A[0]), 0x100A},
  { (subindex*)TestSlave_Index1017,sizeof(TestSlave_Index1017)/sizeof(TestSlave_Index1017[0]), 0x1017},
  { (subindex*)TestSlave_Index1018,sizeof(TestSlave_Index1018)/sizeof(TestSlave_Index1018[0]), 0x1018},
  { (subindex*)TestSlave_Index1200,sizeof(TestSlave_Index1200)/sizeof(TestSlave_Index1200[0]), 0x1200},
  { (subindex*)TestSlave_Index1400,sizeof(TestSlave_Index1400)/sizeof(TestSlave_Index1400[0]), 0x1400},
  { (subindex*)TestSlave_Index1401,sizeof(TestSlave_Index1401)/sizeof(TestSlave_Index1401[0]), 0x1401},
  { (subindex*)TestSlave_Index1402,sizeof(TestSlave_Index1402)/sizeof(TestSlave_Index1402[0]), 0x1402},
  { (subindex*)TestSlave_Index1403,sizeof(TestSlave_Index1403)/sizeof(TestSlave_Index1403[0]), 0x1403},
  { (subindex*)TestSlave_Index1600,sizeof(TestSlave_Index1600)/sizeof(TestSlave_Index1600[0]), 0x1600},
  { (subindex*)TestSlave_Index1601,sizeof(TestSlave_Index1601)/sizeof(TestSlave_Index1601[0]), 0x1601},
  { (subindex*)TestSlave_Index1602,sizeof(TestSlave_Index1602)/sizeof(TestSlave_Index1602[0]), 0x1602},
  { (subindex*)TestSlave_Index1603,sizeof(TestSlave_Index1603)/sizeof(TestSlave_Index1603[0]), 0x1603},
  { (subindex*)TestSlave_Index1800,sizeof(TestSlave_Index1800)/sizeof(TestSlave_Index1800[0]), 0x1800},
  { (subindex*)TestSlave_Index1801,sizeof(TestSlave_Index1801)/sizeof(TestSlave_Index1801[0]), 0x1801},
  { (subindex*)TestSlave_Index1802,sizeof(TestSlave_Index1802)/sizeof(TestSlave_Index1802[0]), 0x1802},
  { (subindex*)TestSlave_Index1803,sizeof(TestSlave_Index1803)/sizeof(TestSlave_Index1803[0]), 0x1803},
  { (subindex*)TestSlave_Index1A00,sizeof(TestSlave_Index1A00)/sizeof(TestSlave_Index1A00[0]), 0x1A00},
  { (subindex*)TestSlave_Index1A01,sizeof(TestSlave_Index1A01)/sizeof(TestSlave_Index1A01[0]), 0x1A01},
  { (subindex*)TestSlave_Index1A02,sizeof(TestSlave_Index1A02)/sizeof(TestSlave_Index1A02[0]), 0x1A02},
  { (subindex*)TestSlave_Index1A03,sizeof(TestSlave_Index1A03)/sizeof(TestSlave_Index1A03[0]), 0x1A03},
};

const indextable * TestSlave_scanIndexOD (UNS16 wIndex, UNS32 * errorCode, ODCallback_t **callbacks)
{
	int i;
	*callbacks = NULL;
	switch(wIndex){
		case 0x1000: i = 0;break;
		case 0x1001: i = 1;break;
		case 0x1005: i = 2;*callbacks = TestSlave_Index1005_callbacks; break;
		case 0x1006: i = 3;*callbacks = TestSlave_Index1006_callbacks; break;
		case 0x1008: i = 4;break;
		case 0x1009: i = 5;break;
		case 0x100A: i = 6;break;
		case 0x1017: i = 7;*callbacks = TestSlave_Index1017_callbacks; break;
		case 0x1018: i = 8;break;
		case 0x1200: i = 9;break;
		case 0x1400: i = 10;break;
		case 0x1401: i = 11;break;
		case 0x1402: i = 12;break;
		case 0x1403: i = 13;break;
		case 0x1600: i = 14;break;
		case 0x1601: i = 15;break;
		case 0x1602: i = 16;break;
		case 0x1603: i = 17;break;
		case 0x1800: i = 18;*callbacks = TestSlave_Index1800_callbacks; break;
		case 0x1801: i = 19;*callbacks = TestSlave_Index1801_callbacks; break;
		case 0x1802: i = 20;*callbacks = TestSlave_Index1802_callbacks; break;
		case 0x1803: i = 21;*callbacks = TestSlave_Index1803_callbacks; break;
		case 0x1A00: i = 22;break;
		case 0x1A01: i = 23;break;
		case 0x1A02: i = 24;break;
		case 0x1A03: i = 25;break;
		default:
			*errorCode = OD_NO_SUCH_OBJECT;
			return NULL;
	}
	*errorCode = OD_SUCCESSFUL;
	return &TestSlave_objdict[i];
}

/* 
 * To count at which received SYNC a PDO must be sent.
 * Even if no pdoTransmit are defined, at least one entry is computed
 * for compilations issues.
 */
s_PDO_status TestSlave_PDO_status[4] = {s_PDO_status_Initializer,s_PDO_status_Initializer,s_PDO_status_Initializer,s_PDO_status_Initializer};

const quick_index TestSlave_firstIndex = {
  9, /* SDO_SVR */
  0, /* SDO_CLT */
  10, /* PDO_RCV */
  14, /* PDO_RCV_MAP */
  18, /* PDO_TRS */
  22 /* PDO_TRS_MAP */
};

const quick_index TestSlave_lastIndex = {
  9, /* SDO_SVR */
  0, /* SDO_CLT */
  13, /* PDO_RCV */
  17, /* PDO_RCV_MAP */
  21, /* PDO_TRS */
  25 /* PDO_TRS_MAP */
};

const UNS16 TestSlave_ObjdictSize = sizeof(TestSlave_objdict)/sizeof(TestSlave_objdict[0]); 

CO_Data TestSlave_Data = CANOPEN_NODE_DATA_INITIALIZER(TestSlave);

