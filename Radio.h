/***********************************************************************/
/*                                                                     */
/*  FILE        :TestAX5043.c                                          */
/*  DATE        :Mon, Dec 09, 2013                                     */
/*  DESCRIPTION :main program file.                                    */
/*  CPU GROUP   :10                                                    */
/*                                                                     */
/*  This file is generated by Renesas Project Generator (Ver.4.18).    */
/*  NOTE:THIS IS A TYPICAL EXAMPLE.                                    */
/***********************************************************************/
//#include "sfr_r81B.h"
#ifndef _RADIO_H_
#define _RADIO_H_

#include "Typedef.h"

#define CHANNEL_NUM	16
extern unsigned char ubReceiveFlag;

void SpiWriteByte(unsigned char ubByte);
void SpiWriteWord(unsigned int ubByte);
unsigned char SpiReadByte(void);
void SpiWriteSingleAddressRegister(unsigned char Addr, unsigned char Data);
void SpiWriteLongAddressRegister(unsigned int Addr, unsigned char Data);
unsigned char SpiReadSingleAddressRegister(unsigned char Addr);  
unsigned char SpiReadLongAddressRegister(unsigned int Addr);
void RF_CommonPWRMODE(unsigned char ubCom);
void InitAx5043REG(void);
void AX5043_Reset(void);
unsigned char InitAX5043(void);

void RdioWaitXtal(void);
char SetChannel(unsigned char ubNum );

void SpiReadData(unsigned char *pBuf,unsigned char Length);

//#ifdef MASTER
void SetTransmitMode(void);
void transmit_packet(void);
void ReceiveData(void);

//#else
void AX5043ReceiverON(void);
void SetReceiveMode(void);
void RdioXtalON(void);
void Ax5043SetRegisters_RX(void);
void transmit_packet_task(U8 *Buf, U8 u8Len);

void AX5043_SLEEP(void);

extern unsigned char ubRFState ;

extern unsigned char TXBuff[UART_DATA_MAX_LEN+1];
extern unsigned char TxLen;
extern unsigned char RXBuff[UART_DATA_MAX_LEN+1];
extern unsigned char RxLen;

INTERRUPT void EXTI4_IRQHandler(void); /* EXTI PIN4 */

//void WirelessBitRateConfigure(U8 Param);
void WirelessBitRate_20K(void);

#endif

/*************************the end of file*******************************/
