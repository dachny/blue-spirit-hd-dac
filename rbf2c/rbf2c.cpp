// Alexander V Sagaydachnyy (c) 2019
// dachhy@sibgeo.net

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

static const char chRbfLoadFpga[] =
"unsigned char rbf_load_fpga(unsigned int uiTimeOut)"	"\r\n"
"{"														"\r\n"
"	unsigned int	uiTime = 0;"						"\r\n"
"	unsigned char	uchPin = 0;"						"\r\n"
"	unsigned int	ui = 0;"							"\r\n"
""														"\r\n"
""														"\r\n"
"	fpga_set_pin_Dclk(0);"								"\r\n"
"	fpga_set_pin_Data0(0);"								"\r\n"
""														"\r\n"
"	fpga_set_pin_nConfig(0);"							"\r\n"
""														"\r\n"
"	uiTime = 0;"										"\r\n"
"	uchPin = fpga_get_pin_nStatus();"					"\r\n"
"	while (uchPin != 0)"								"\r\n"
"	{"													"\r\n"
"		uchPin = fpga_get_pin_nStatus();"				"\r\n"
"		uiTime += 1;"									"\r\n"
""														"\r\n"
"		if (uiTime > uiTimeOut)"						"\r\n"
"		{"												"\r\n"
"			return 1;"									"\r\n"
"		}"												"\r\n"
"	}"													"\r\n"
""														"\r\n"
"	fpga_set_pin_nConfig(1);"							"\r\n"
""														"\r\n"
"	uiTime = 0;"										"\r\n"
"	uchPin = fpga_get_pin_nStatus();"					"\r\n"
"	while (uchPin == 0)"								"\r\n"
"	{"													"\r\n"
"		uchPin = fpga_get_pin_nStatus();"				"\r\n"
"		uiTime += 1;"									"\r\n"
""														"\r\n"
"		if (uiTime > uiTimeOut)"						"\r\n"
"		{"												"\r\n"
"			return 2;"									"\r\n"
"		}"												"\r\n"
"	}"													"\r\n"
""														"\r\n"
"	for (ui = 0; ui < sizeof(uchRbf); ui++)"	"\r\n"
"	{"													"\r\n"
"		fpga_set_pin_Dclk(0);"							"\r\n"
"		fpga_set_pin_Data0( ( uchRbf[ui] & 0x01 ) != 0x00 );"	"\r\n"
"		fpga_set_pin_Dclk(1);"							"\r\n"
""														"\r\n"
"		fpga_set_pin_Dclk(0);"							"\r\n"
"		fpga_set_pin_Data0( ( uchRbf[ui] & 0x02 ) != 0x00 );"	"\r\n"
"		fpga_set_pin_Dclk(1);"							"\r\n"
""														"\r\n"
"		fpga_set_pin_Dclk(0);"							"\r\n"
"		fpga_set_pin_Data0( ( uchRbf[ui] & 0x04 ) != 0x00 );"	"\r\n"
"		fpga_set_pin_Dclk(1);"							"\r\n"
""														"\r\n"
"		fpga_set_pin_Dclk(0);"							"\r\n"
"		fpga_set_pin_Data0( ( uchRbf[ui] & 0x08 ) != 0x00 );"	"\r\n"
"		fpga_set_pin_Dclk(1);"							"\r\n"
""														"\r\n"
"		fpga_set_pin_Dclk(0);"							"\r\n"
"		fpga_set_pin_Data0( ( uchRbf[ui] & 0x10 ) != 0x00 );"	"\r\n"
"		fpga_set_pin_Dclk(1);"							"\r\n"
""														"\r\n"
"		fpga_set_pin_Dclk(0);"							"\r\n"
"		fpga_set_pin_Data0( ( uchRbf[ui] & 0x20 ) != 0x00 );"	"\r\n"
"		fpga_set_pin_Dclk(1);"							"\r\n"
""														"\r\n"
"		fpga_set_pin_Dclk(0);"							"\r\n"
"		fpga_set_pin_Data0( ( uchRbf[ui] & 0x40 ) != 0x00 );"	"\r\n"
"		fpga_set_pin_Dclk(1);"							"\r\n"
""														"\r\n"
"		fpga_set_pin_Dclk(0);"							"\r\n"
"		fpga_set_pin_Data0( ( uchRbf[ui] & 0x80 ) != 0x00 );"	"\r\n"
"		fpga_set_pin_Dclk(1);"							"\r\n"
"	}"													"\r\n"
""														"\r\n"
""														"\r\n"
"		fpga_set_pin_Dclk(0);"							"\r\n"
"		fpga_set_pin_Data0(0);"							"\r\n"
"		fpga_set_pin_Dclk(1);"							"\r\n"
""														"\r\n"
"		fpga_set_pin_Dclk(0);"							"\r\n"
"		fpga_set_pin_Data0(0);"							"\r\n"
"		fpga_set_pin_Dclk(1);"							"\r\n"
""														"\r\n"
"		fpga_set_pin_Dclk(0);"							"\r\n"
"		fpga_set_pin_Data0(0);"							"\r\n"
"		fpga_set_pin_Dclk(1);"							"\r\n"
"		fpga_set_pin_Dclk(0);"							"\r\n"
""														"\r\n"
"	uiTime = 0;"										"\r\n"
"	uchPin = fpga_get_pin_ConfDone();"					"\r\n"
"	while (uchPin == 0)"								"\r\n"
"	{"													"\r\n"
"		uchPin = fpga_get_pin_ConfDone();"				"\r\n"
"		uiTime += 1;"									"\r\n"
""														"\r\n"
"		if (uiTime > uiTimeOut)"						"\r\n"
"		{"												"\r\n"
"			return 3;"									"\r\n"
"		}"												"\r\n"
"	}"													"\r\n"
""														"\r\n"
"	return 0;"											"\r\n"
"}"														"\r\n";

int wmain( int iArgCount, wchar_t** ppwchArg )
{
	FILE* pfileRbf	= NULL;
	FILE* pfileC = NULL;
	FILE* pfileH = NULL;

	wchar_t		wchPathRbf[FILENAME_MAX]		= { '\0' };
	wchar_t		wchPathRbfDrive[FILENAME_MAX]	= { '\0' };
	wchar_t		wchPathRbfDir[FILENAME_MAX]		= { '\0' };
	wchar_t		wchPathRbfFileName[FILENAME_MAX] = { '\0' };
	wchar_t		wchPathRbfExt[FILENAME_MAX]		= { '\0' };

	wchar_t		wchPathC[FILENAME_MAX] = { '\0' };
	wchar_t		wchPathH[FILENAME_MAX] = { '\0' };


	char	chPathHFileNameForInclude[FILENAME_MAX] = { '\0' };


	int iRes = 0;

	int iByteCouter = 0;

	unsigned char uchByte = 0;

	if (iArgCount < 1) return -1;

	_wfullpath(wchPathRbf, ppwchArg[1], FILENAME_MAX) ;
	
	pfileRbf = _wfopen( wchPathRbf, L"rb");

	if (pfileRbf == NULL)
	{
		return -2;
	}

	_wsplitpath(wchPathRbf, wchPathRbfDrive, wchPathRbfDir, wchPathRbfFileName, wchPathRbfExt);

	swprintf(wchPathC, FILENAME_MAX, L"%s.c", wchPathRbf );
	swprintf(wchPathH, FILENAME_MAX, L"%s.h", wchPathRbf );


	pfileC = _wfopen(wchPathC, L"wb");
	if (pfileC == NULL)
	{
		fclose(pfileRbf);
		return -3;
	}

	pfileH = _wfopen(wchPathH, L"wb");
	if (pfileH == NULL)
	{
		fclose(pfileC);
		fclose(pfileRbf);
		return -4;
	}

	snprintf(chPathHFileNameForInclude, FILENAME_MAX, "_%S%S_H_", wchPathRbfFileName , wchPathRbfExt  );
	size_t stLen = strlen(chPathHFileNameForInclude);

	for (size_t sti = 0; sti < stLen; sti++)
	{
		chPathHFileNameForInclude[sti] = toupper(chPathHFileNameForInclude[sti]);

		if (chPathHFileNameForInclude[sti] == '-')
		{
			chPathHFileNameForInclude[sti] = '_';
		}

		if (chPathHFileNameForInclude[sti] == ' ')
		{
			chPathHFileNameForInclude[sti] = '_';
		}

		if (chPathHFileNameForInclude[sti] == '.')
		{
			chPathHFileNameForInclude[sti] = '_';
		}

	}


	//header
	fprintf(pfileH, "\r\n");
	fprintf(pfileH, "//Create from %S\r\n", wchPathRbf );
	fprintf(pfileH, "\r\n");

	fprintf(pfileH, "#ifndef %s\r\n", chPathHFileNameForInclude);
	fprintf(pfileH, "#define %s\r\n", chPathHFileNameForInclude);
	fprintf(pfileH, "\r\n");

	fprintf(pfileH, "\tunsigned char rbf_load_fpga(unsigned int uiTimeOut);\r\n");
	fprintf(pfileH, "\r\n");
	fprintf(pfileH, "\tvoid fpga_set_pin_Dclk(unsigned char uchValue);\r\n");
	fprintf(pfileH, "\tvoid fpga_set_pin_Data0(unsigned char uchValue);\r\n");
	fprintf(pfileH, "\tvoid fpga_set_pin_nConfig(unsigned char uchValue);\r\n");
	fprintf(pfileH, "\r\n");
	fprintf(pfileH, "\tunsigned char fpga_get_pin_nStatus(void);\r\n");
	fprintf(pfileH, "\tunsigned char fpga_get_pin_ConfDone(void);\r\n");
	fprintf(pfileH, "\r\n");

	fprintf(pfileH, "#endif // !%s\r\n", chPathHFileNameForInclude);
	fprintf(pfileH, "\r\n");

	//c file
	fprintf(pfileC, "\r\n");
	fprintf(pfileC, "//Create from %S\r\n", wchPathRbf );
	fprintf(pfileC, "#include \"%S%S.h\"\r\n", wchPathRbfFileName, wchPathRbfExt );
	fprintf(pfileC, "\r\n");

	fprintf(pfileC, "static const unsigned char uchRbf[] =\r\n");
	fprintf(pfileC, "{\r\n");
	fprintf(pfileC, "\t");

	iByteCouter = 0;

	iRes = fread(&uchByte, sizeof(unsigned char), 1, pfileRbf);
	while( iRes == 1 )
	{
		fprintf(pfileC, "0x%2.2x", uchByte );

		iRes = fread(&uchByte, sizeof(unsigned char), 1, pfileRbf);
		if (iRes == 1)
		{
			iByteCouter += 1;
			if (iByteCouter >= 16)
			{
				fprintf(pfileC, ",\r\n");
				fprintf(pfileC, "\t");
				iByteCouter = 0;
			}
			else
			{
				fprintf(pfileC, ", ");
			}
		}
		else
		{
			fprintf(pfileC, "\r\n");
		}
	}

	fprintf(pfileC, "};\r\n");

	fprintf(pfileC, "\r\n");

	fprintf(pfileC, chRbfLoadFpga );

	fprintf(pfileC, "\r\n");


	fclose(pfileH);
	fclose(pfileC);
	fclose(pfileRbf);

	return 0;
}


