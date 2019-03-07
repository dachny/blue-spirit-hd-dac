
//Create from C:\current\blue-spirit-hd-dac\stm32h7\keil\altera\blue_spirit_hd_transport.rbf

#ifndef _BLUE_SPIRIT_HD_TRANSPORT_RBF_H_
#define _BLUE_SPIRIT_HD_TRANSPORT_RBF_H_

	unsigned char rbf_load_fpga(unsigned int uiTimeOut);

	void fpga_set_pin_Dclk(unsigned char uchValue);
	void fpga_set_pin_Data0(unsigned char uchValue);
	void fpga_set_pin_nConfig(unsigned char uchValue);

	unsigned char fpga_get_pin_nStatus(void);
	unsigned char fpga_get_pin_ConfDone(void);

#endif // !_BLUE_SPIRIT_HD_TRANSPORT_RBF_H_

