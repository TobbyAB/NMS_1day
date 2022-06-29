
#include "ax5043.h"
#include "spi.h"
#include "ax5043def.h"


// TX: fcarrier= 40.680MHz dev=  4.250kHz br=  0.595kBit/s pwr= 10.0dBm
// RX: fcarrier= 40.680MHz bw=  7.893kHz br=  0.595kBit/s
//SpiWriteAutoAddressRegister(REG_AX5043_
void AX5043_set_registers(void)
{
	SpiWriteAutoAddressRegister(REG_AX5043_MODULATION           , 0x08);
	SpiWriteAutoAddressRegister(REG_AX5043_ENCODING             , 0x00);
	SpiWriteAutoAddressRegister(REG_AX5043_FRAMING              , 0x06);
	SpiWriteAutoAddressRegister(REG_AX5043_PINFUNCSYSCLK        , 0x01);

        SpiWriteAutoAddressRegister(REG_AX5043_MODCFGF              , 0x00);
	SpiWriteAutoAddressRegister(REG_AX5043_FSKDEV2              , 0x00);
	SpiWriteAutoAddressRegister(REG_AX5043_FSKDEV1              , 0x0a);
	SpiWriteAutoAddressRegister(REG_AX5043_FSKDEV0              , 0xb6);
	SpiWriteAutoAddressRegister(REG_AX5043_MODCFGA              , 0x06);
	SpiWriteAutoAddressRegister(REG_AX5043_TXRATE2              , 0x00);
	SpiWriteAutoAddressRegister(REG_AX5043_TXRATE1              , 0x01);
	SpiWriteAutoAddressRegister(REG_AX5043_TXRATE0              , 0x80);
	SpiWriteAutoAddressRegister(REG_AX5043_TXPWRCOEFFA1         , 0x00);
	SpiWriteAutoAddressRegister(REG_AX5043_TXPWRCOEFFA0         , 0x00);
	SpiWriteAutoAddressRegister(REG_AX5043_TXPWRCOEFFB1         , 0x09);//09
	SpiWriteAutoAddressRegister(REG_AX5043_TXPWRCOEFFB0         , 0xD4);//D4
	SpiWriteAutoAddressRegister(REG_AX5043_PLLVCOI              , 0x80);
	SpiWriteAutoAddressRegister(REG_AX5043_PLLRNGCLK            , 0x04);
        
        SpiWriteAutoAddressRegister(REG_AX5043_PKTADDRCFG           , 0x80);

        SpiWriteAutoAddressRegister(REG_AX5043_TMGTXBOOST           , 0x3e);
	SpiWriteAutoAddressRegister(REG_AX5043_TMGTXSETTLE          , 0x31);

	SpiWriteAutoAddressRegister(REG_AX5043_REF                  , 0x03);
	SpiWriteAutoAddressRegister(REG_AX5043_XTALOSC              , 0x04);            //REG_AX5043_0xF10
	SpiWriteAutoAddressRegister(REG_AX5043_XTALAMPL             , 0x00);            //REG_AX5043_0xF10

        SpiWriteAutoAddressRegister(REG_AX5043_PLLLOOP              , 0x0A);
	SpiWriteAutoAddressRegister(REG_AX5043_PLLCPI               , 0x10);
	SpiWriteAutoAddressRegister(REG_AX5043_PLLVCODIV            , 0x35);
	SpiWriteAutoAddressRegister(REG_AX5043_XTALCAP              , 0x00);
	SpiWriteAutoAddressRegister(REG_AX5043_0xF00                , 0x0F);
	SpiWriteAutoAddressRegister(REG_AX5043_0xF18                , 0x06);
        
        //uint32_t f = 0x28AE148;
        uint32_t f = 0x1908AA2;
    SpiWriteAutoAddressRegister(REG_AX5043_FREQA0,f & 0xff);
    SpiWriteAutoAddressRegister(REG_AX5043_FREQA1,f >> 8);
    SpiWriteAutoAddressRegister(REG_AX5043_FREQA2, f >> 16);
    SpiWriteAutoAddressRegister(REG_AX5043_FREQA3, f >> 24);       
}








