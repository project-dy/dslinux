#include "linux/input.h"

const unsigned short keyboard_Map_Unpressed[] = {
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 

	0x0000, 0x0001, 0x0002, 0x0003, 0x0001, 0x0002, 0x0001, 0x0002, 
	0x0001, 0x0002, 0x0001, 0x0002, 0x0003, 0x0001, 0x0002, 0x0001, 
	0x0002, 0x0001, 0x0002, 0x0001, 0x0002, 0x0003, 0x0001, 0x0002, 
	0x0001, 0x0002, 0x0001, 0x0002, 0x0001, 0x0002, 0x0003, 0x0000, 

	0x0000, 0x0004, 0x0005, 0x0003, 0x0004, 0x0005, 0x0004, 0x0005, 
	0x0004, 0x0005, 0x0004, 0x0005, 0x0003, 0x0004, 0x0005, 0x0004, 
	0x0005, 0x0004, 0x0005, 0x0004, 0x0005, 0x0003, 0x0004, 0x0005, 
	0x0004, 0x0005, 0x0004, 0x0005, 0x0004, 0x0005, 0x0003, 0x0000, 

	0x0000, 0x0006, 0x0006, 0x0007, 0x0006, 0x0006, 0x0006, 0x0006, 
	0x0006, 0x0006, 0x0006, 0x0006, 0x0007, 0x0006, 0x0006, 0x0006, 
	0x0006, 0x0006, 0x0006, 0x0006, 0x0006, 0x0007, 0x0006, 0x0006, 
	0x0006, 0x0006, 0x0006, 0x0006, 0x0006, 0x0006, 0x0007, 0x0000, 

	0x0000, 0x0001, 0x0002, 0x0001, 0x0002, 0x0001, 0x0002, 0x0001, 
	0x0002, 0x0001, 0x0002, 0x0001, 0x0002, 0x0001, 0x0002, 0x0001, 
	0x0002, 0x0001, 0x0002, 0x0001, 0x0002, 0x0001, 0x0002, 0x0001, 
	0x0002, 0x0001, 0x0002, 0x0001, 0x0002, 0x0002, 0x0002, 0x0003, 

	0x0000, 0x0004, 0x0005, 0x0004, 0x0005, 0x0004, 0x0005, 0x0004, 
	0x0005, 0x0004, 0x0005, 0x0004, 0x0005, 0x0004, 0x0005, 0x0004, 
	0x0005, 0x0004, 0x0005, 0x0004, 0x0005, 0x0004, 0x0005, 0x0004, 
	0x0005, 0x0004, 0x0005, 0x0004, 0x0005, 0x0005, 0x0005, 0x0003, 

	0x0000, 0x0001, 0x0002, 0x0002, 0x0001, 0x0002, 0x0001, 0x0002, 
	0x0001, 0x0002, 0x0001, 0x0002, 0x0001, 0x0002, 0x0001, 0x0002, 
	0x0001, 0x0002, 0x0001, 0x0002, 0x0001, 0x0002, 0x0001, 0x0002, 
	0x0001, 0x0002, 0x0001, 0x0002, 0x0001, 0x0002, 0x0002, 0x0003, 

	0x0000, 0x0004, 0x0005, 0x0005, 0x0004, 0x0005, 0x0004, 0x0005, 
	0x0004, 0x0005, 0x0004, 0x0005, 0x0004, 0x0005, 0x0004, 0x0005, 
	0x0004, 0x0005, 0x0004, 0x0005, 0x0004, 0x0005, 0x0004, 0x0005, 
	0x0004, 0x0005, 0x0004, 0x0005, 0x0004, 0x0005, 0x0005, 0x0003, 

	0x0000, 0x0001, 0x0002, 0x0002, 0x0002, 0x0001, 0x0002, 0x0001, 
	0x0002, 0x0001, 0x0002, 0x0001, 0x0002, 0x0001, 0x0002, 0x0001, 
	0x0002, 0x0001, 0x0002, 0x0001, 0x0002, 0x0001, 0x0002, 0x0001, 
	0x0002, 0x0001, 0x0002, 0x0001, 0x0002, 0x0004, 0x0005, 0x0003, 

	0x0000, 0x0004, 0x0005, 0x0005, 0x0005, 0x0004, 0x0005, 0x0004, 
	0x0005, 0x0004, 0x0005, 0x0004, 0x0005, 0x0004, 0x0005, 0x0004, 
	0x0005, 0x0004, 0x0005, 0x0004, 0x0005, 0x0004, 0x0005, 0x0004, 
	0x0005, 0x0004, 0x0005, 0x0004, 0x0005, 0x0004, 0x0005, 0x0003, 

	0x0000, 0x0001, 0x0002, 0x0002, 0x0001, 0x0002, 0x0001, 0x0002, 
	0x0001, 0x0002, 0x0001, 0x0002, 0x0001, 0x0002, 0x0001, 0x0002, 
	0x0001, 0x0002, 0x0001, 0x0002, 0x0001, 0x0002, 0x0001, 0x0002, 
	0x0001, 0x0002, 0x0001, 0x0002, 0x0002, 0x0002, 0x0002, 0x0003, 

	0x0000, 0x0004, 0x0005, 0x0005, 0x0004, 0x0005, 0x0004, 0x0005, 
	0x0004, 0x0005, 0x0004, 0x0005, 0x0004, 0x0005, 0x0004, 0x0005, 
	0x0004, 0x0005, 0x0004, 0x0005, 0x0004, 0x0005, 0x0004, 0x0005, 
	0x0004, 0x0005, 0x0004, 0x0005, 0x0005, 0x0005, 0x0005, 0x0003, 

	0x0000, 0x0001, 0x0002, 0x0002, 0x0001, 0x0002, 0x0002, 0x0001, 
	0x0002, 0x0002, 0x0001, 0x0002, 0x0002, 0x0002, 0x0002, 0x0002, 
	0x0002, 0x0002, 0x0002, 0x0001, 0x0002, 0x0002, 0x0001, 0x0002, 
	0x0002, 0x0001, 0x0002, 0x0002, 0x0001, 0x0002, 0x0002, 0x0003, 

	0x0000, 0x0004, 0x0005, 0x0005, 0x0004, 0x0005, 0x0005, 0x0004, 
	0x0005, 0x0005, 0x0004, 0x0005, 0x0005, 0x0005, 0x0005, 0x0005, 
	0x0005, 0x0005, 0x0005, 0x0004, 0x0005, 0x0005, 0x0004, 0x0005, 
	0x0005, 0x0004, 0x0005, 0x0005, 0x0004, 0x0005, 0x0005, 0x0003, 

	0x0000, 0x0006, 0x0006, 0x0006, 0x0006, 0x0006, 0x0006, 0x0006, 
	0x0006, 0x0006, 0x0006, 0x0006, 0x0006, 0x0006, 0x0006, 0x0006, 
	0x0006, 0x0006, 0x0006, 0x0006, 0x0006, 0x0006, 0x0006, 0x0006, 
	0x0006, 0x0006, 0x0006, 0x0006, 0x0006, 0x0006, 0x0006, 0x0007
};

const unsigned short keyboard_Map_Pressed[] = {
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
	0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 

	0x0000, 0x0008, 0x0009, 0x0003, 0x0008, 0x0009, 0x0008, 0x0009, 
	0x0008, 0x0009, 0x0008, 0x0009, 0x0003, 0x0008, 0x0009, 0x0008, 
	0x0009, 0x0008, 0x0009, 0x0008, 0x0009, 0x0003, 0x0008, 0x0009, 
	0x0008, 0x0009, 0x0008, 0x0009, 0x0008, 0x0009, 0x0003, 0x0000, 

	0x0000, 0x000a, 0x000b, 0x0003, 0x000a, 0x000b, 0x000a, 0x000b, 
	0x000a, 0x000b, 0x000a, 0x000b, 0x0003, 0x000a, 0x000b, 0x000a, 
	0x000b, 0x000a, 0x000b, 0x000a, 0x000b, 0x0003, 0x000a, 0x000b, 
	0x000a, 0x000b, 0x000a, 0x000b, 0x000a, 0x000b, 0x0003, 0x0000, 

	0x0000, 0x0006, 0x0006, 0x0007, 0x0006, 0x0006, 0x0006, 0x0006, 
	0x0006, 0x0006, 0x0006, 0x0006, 0x0007, 0x0006, 0x0006, 0x0006, 
	0x0006, 0x0006, 0x0006, 0x0006, 0x0006, 0x0007, 0x0006, 0x0006, 
	0x0006, 0x0006, 0x0006, 0x0006, 0x0006, 0x0006, 0x0007, 0x0000, 

	0x0000, 0x0008, 0x0009, 0x0008, 0x0009, 0x0008, 0x0009, 0x0008, 
	0x0009, 0x0008, 0x0009, 0x0008, 0x0009, 0x0008, 0x0009, 0x0008, 
	0x0009, 0x0008, 0x0009, 0x0008, 0x0009, 0x0008, 0x0009, 0x0008, 
	0x0009, 0x0008, 0x0009, 0x0008, 0x0009, 0x0009, 0x0009, 0x0003, 

	0x0000, 0x000a, 0x000b, 0x000a, 0x000b, 0x000a, 0x000b, 0x000a, 
	0x000b, 0x000a, 0x000b, 0x000a, 0x000b, 0x000a, 0x000b, 0x000a, 
	0x000b, 0x000a, 0x000b, 0x000a, 0x000b, 0x000a, 0x000b, 0x000a, 
	0x000b, 0x000a, 0x000b, 0x000a, 0x000b, 0x000b, 0x000b, 0x0003, 

	0x0000, 0x0008, 0x0009, 0x0009, 0x0008, 0x0009, 0x0008, 0x0009, 
	0x0008, 0x0009, 0x0008, 0x0009, 0x0008, 0x0009, 0x0008, 0x0009, 
	0x0008, 0x0009, 0x0008, 0x0009, 0x0008, 0x0009, 0x0008, 0x0009, 
	0x0008, 0x0009, 0x0008, 0x0009, 0x0008, 0x0009, 0x0009, 0x0003, 

	0x0000, 0x000a, 0x000b, 0x000b, 0x000a, 0x000b, 0x000a, 0x000b, 
	0x000a, 0x000b, 0x000a, 0x000b, 0x000a, 0x000b, 0x000a, 0x000b, 
	0x000a, 0x000b, 0x000a, 0x000b, 0x000a, 0x000b, 0x000a, 0x000b, 
	0x000a, 0x000b, 0x000a, 0x000b, 0x000a, 0x000b, 0x000b, 0x0003, 

	0x0000, 0x0008, 0x0009, 0x0009, 0x0009, 0x0008, 0x0009, 0x0008, 
	0x0009, 0x0008, 0x0009, 0x0008, 0x0009, 0x0008, 0x0009, 0x0008, 
	0x0009, 0x0008, 0x0009, 0x0008, 0x0009, 0x0008, 0x0009, 0x0008, 
	0x0009, 0x0008, 0x0009, 0x0008, 0x0009, 0x000a, 0x000b, 0x0003, 

	0x0000, 0x000a, 0x000b, 0x000b, 0x000b, 0x000a, 0x000b, 0x000a, 
	0x000b, 0x000a, 0x000b, 0x000a, 0x000b, 0x000a, 0x000b, 0x000a, 
	0x000b, 0x000a, 0x000b, 0x000a, 0x000b, 0x000a, 0x000b, 0x000a, 
	0x000b, 0x000a, 0x000b, 0x000a, 0x000b, 0x000a, 0x000b, 0x0003, 

	0x0000, 0x0008, 0x0009, 0x0009, 0x0008, 0x0009, 0x0008, 0x0009, 
	0x0008, 0x0009, 0x0008, 0x0009, 0x0008, 0x0009, 0x0008, 0x0009, 
	0x0008, 0x0009, 0x0008, 0x0009, 0x0008, 0x0009, 0x0008, 0x0009, 
	0x0008, 0x0009, 0x0008, 0x0009, 0x0009, 0x0009, 0x0009, 0x0003, 

	0x0000, 0x000a, 0x000b, 0x000b, 0x000a, 0x000b, 0x000a, 0x000b, 
	0x000a, 0x000b, 0x000a, 0x000b, 0x000a, 0x000b, 0x000a, 0x000b, 
	0x000a, 0x000b, 0x000a, 0x000b, 0x000a, 0x000b, 0x000a, 0x000b, 
	0x000a, 0x000b, 0x000a, 0x000b, 0x000b, 0x000b, 0x000b, 0x0003, 

	0x0000, 0x0008, 0x0009, 0x0009, 0x0008, 0x0009, 0x0009, 0x0008, 
	0x0009, 0x0009, 0x0008, 0x0009, 0x0009, 0x0009, 0x0009, 0x0009, 
	0x0009, 0x0009, 0x0009, 0x0008, 0x0009, 0x0009, 0x0008, 0x0009, 
	0x0009, 0x0008, 0x0009, 0x0009, 0x0008, 0x0009, 0x0009, 0x0003, 

	0x0000, 0x000a, 0x000b, 0x000b, 0x000a, 0x000b, 0x000b, 0x000a, 
	0x000b, 0x000b, 0x000a, 0x000b, 0x000b, 0x000b, 0x000b, 0x000b, 
	0x000b, 0x000b, 0x000b, 0x000a, 0x000b, 0x000b, 0x000a, 0x000b, 
	0x000b, 0x000a, 0x000b, 0x000b, 0x000a, 0x000b, 0x000b, 0x0003, 

	0x0000, 0x0006, 0x0006, 0x0006, 0x0006, 0x0006, 0x0006, 0x0006, 
	0x0006, 0x0006, 0x0006, 0x0006, 0x0006, 0x0006, 0x0006, 0x0006, 
	0x0006, 0x0006, 0x0006, 0x0006, 0x0006, 0x0006, 0x0006, 0x0006, 
	0x0006, 0x0006, 0x0006, 0x0006, 0x0006, 0x0006, 0x0006, 0x0007
};

const unsigned short keyboard_Map_Qwerty_Lower[] = {
	0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 
	0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 
	0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 
	0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 

	0x000c, 0x000d, 0x000e, 0x000c, 0x000f, 0x0010, 0x000f, 0x0011, 
	0x000f, 0x0011, 0x000f, 0x0012, 0x000c, 0x000f, 0x0013, 0x000f, 
	0x0014, 0x000f, 0x0015, 0x000f, 0x0016, 0x000c, 0x000f, 0x0016, 
	0x0017, 0x0018, 0x0017, 0x0019, 0x0017, 0x001a, 0x000c, 0x000c, 

	0x000c, 0x001b, 0x001c, 0x000c, 0x001d, 0x001e, 0x001d, 0x001f, 
	0x001d, 0x0020, 0x001d, 0x0021, 0x000c, 0x001d, 0x0022, 0x001d, 
	0x0023, 0x001d, 0x0024, 0x001d, 0x0025, 0x000c, 0x001d, 0x0026, 
	0x0027, 0x0028, 0x0027, 0x0029, 0x002a, 0x002b, 0x000c, 0x000c, 

	0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 
	0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 
	0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 
	0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 

	0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 
	0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 
	0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 
	0x000c, 0x000c, 0x000c, 0x002c, 0x000c, 0x000c, 0x000c, 0x000c, 

	0x000c, 0x002d, 0x000c, 0x002e, 0x000c, 0x002f, 0x000c, 0x0030, 
	0x000c, 0x0031, 0x000c, 0x0032, 0x000c, 0x0033, 0x000c, 0x0034, 
	0x000c, 0x0035, 0x000c, 0x0036, 0x000c, 0x0037, 0x000c, 0x0038, 
	0x000c, 0x0039, 0x000c, 0x003a, 0x003b, 0x000c, 0x000c, 0x000c, 

	0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 
	0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 
	0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 
	0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 

	0x000c, 0x003c, 0x003d, 0x000c, 0x003e, 0x000c, 0x003f, 0x000c, 
	0x0040, 0x000c, 0x0041, 0x000c, 0x0042, 0x000c, 0x0043, 0x000c, 
	0x0044, 0x000c, 0x0045, 0x000c, 0x0046, 0x000c, 0x0047, 0x000c, 
	0x0048, 0x000c, 0x0049, 0x000c, 0x000c, 0x002c, 0x004a, 0x000c, 

	0x000c, 0x0411, 0x004b, 0x004c, 0x004d, 0x000c, 0x000c, 0x000c, 
	0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 
	0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 
	0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 0x003a, 0x003b, 0x000c, 

	0x000c, 0x004e, 0x004f, 0x0050, 0x000c, 0x0051, 0x000c, 0x0052, 
	0x000c, 0x0053, 0x000c, 0x0842, 0x000c, 0x0054, 0x000c, 0x0055, 
	0x000c, 0x0056, 0x000c, 0x0057, 0x000c, 0x0058, 0x000c, 0x0059, 
	0x000c, 0x005a, 0x000c, 0x005b, 0x000c, 0x000c, 0x000c, 0x000c, 

	0x000c, 0x005c, 0x005d, 0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 
	0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 
	0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 
	0x000c, 0x000c, 0x005e, 0x083b, 0x000c, 0x000c, 0x000c, 0x000c, 

	0x000c, 0x005f, 0x0060, 0x000c, 0x0061, 0x000c, 0x0062, 0x000c, 
	0x0063, 0x000c, 0x0064, 0x000c, 0x0065, 0x000c, 0x0066, 0x000c, 
	0x0067, 0x000c, 0x0068, 0x000c, 0x0069, 0x000c, 0x006a, 0x000c, 
	0x006b, 0x000c, 0x006c, 0x006d, 0x000c, 0x000c, 0x000c, 0x000c, 

	0x000c, 0x006e, 0x006f, 0x0070, 0x0071, 0x0072, 0x000c, 0x0073, 
	0x0074, 0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 
	0x000c, 0x000c, 0x000c, 0x0075, 0x0076, 0x0077, 0x0071, 0x0072, 
	0x000c, 0x0078, 0x0079, 0x000c, 0x006e, 0x006f, 0x0070, 0x000c, 

	0x000c, 0x007a, 0x007b, 0x007c, 0x007d, 0x007e, 0x000c, 0x007f, 
	0x0080, 0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 
	0x000c, 0x000c, 0x000c, 0x0081, 0x0082, 0x0083, 0x007d, 0x007e, 
	0x000c, 0x0084, 0x0085, 0x000c, 0x007a, 0x007b, 0x007c, 0x000c, 

	0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 
	0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 
	0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 
	0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 
};

const unsigned short keyboard_Map_Qwerty_Upper[] = {
	0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 
	0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 
	0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 
	0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 

	0x000c, 0x000d, 0x000e, 0x000c, 0x000f, 0x0010, 0x000f, 0x0011, 
	0x000f, 0x0011, 0x000f, 0x0012, 0x000c, 0x000f, 0x0013, 0x000f, 
	0x0014, 0x000f, 0x0015, 0x000f, 0x0016, 0x000c, 0x000f, 0x0016, 
	0x0017, 0x0018, 0x0017, 0x0019, 0x0017, 0x001a, 0x000c, 0x000c, 

	0x000c, 0x001b, 0x001c, 0x000c, 0x001d, 0x001e, 0x001d, 0x001f, 
	0x001d, 0x0020, 0x001d, 0x0021, 0x000c, 0x001d, 0x0022, 0x001d, 
	0x0023, 0x001d, 0x0024, 0x001d, 0x0025, 0x000c, 0x001d, 0x0026, 
	0x0027, 0x0028, 0x0027, 0x0029, 0x002a, 0x002b, 0x000c, 0x000c, 

	0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 
	0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 
	0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 
	0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 

	0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 
	0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 
	0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 
	0x000c, 0x000c, 0x000c, 0x002c, 0x000c, 0x000c, 0x000c, 0x000c, 

	0x000c, 0x0086, 0x000c, 0x0087, 0x000c, 0x0088, 0x000c, 0x0089, 
	0x000c, 0x008a, 0x000c, 0x008b, 0x000c, 0x008c, 0x000c, 0x008d, 
	0x000c, 0x008e, 0x000c, 0x008f, 0x000c, 0x0090, 0x000c, 0x0091, 
	0x000c, 0x0092, 0x000c, 0x003a, 0x003b, 0x000c, 0x000c, 0x000c, 

	0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 
	0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 
	0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 
	0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 

	0x000c, 0x0093, 0x0094, 0x000c, 0x0095, 0x000c, 0x0096, 0x000c, 
	0x0097, 0x000c, 0x0098, 0x000c, 0x0099, 0x000c, 0x009a, 0x000c, 
	0x009b, 0x000c, 0x009c, 0x000c, 0x009d, 0x000c, 0x0047, 0x000c, 
	0x0048, 0x000c, 0x0049, 0x000c, 0x000c, 0x002c, 0x004a, 0x000c, 

	0x000c, 0x0411, 0x004b, 0x004c, 0x004d, 0x000c, 0x000c, 0x000c, 
	0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 
	0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 
	0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 0x003a, 0x003b, 0x000c, 

	0x000c, 0x004e, 0x004f, 0x0050, 0x000c, 0x009e, 0x000c, 0x009f, 
	0x000c, 0x00a0, 0x000c, 0x00a1, 0x000c, 0x00a2, 0x000c, 0x00a3, 
	0x000c, 0x00a4, 0x000c, 0x00a5, 0x000c, 0x00a6, 0x000c, 0x00a7, 
	0x000c, 0x00a8, 0x00a9, 0x00aa, 0x000c, 0x000c, 0x000c, 0x000c, 

	0x000c, 0x005c, 0x005d, 0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 
	0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 
	0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 
	0x000c, 0x000c, 0x005e, 0x083b, 0x000c, 0x000c, 0x000c, 0x000c, 

	0x000c, 0x005f, 0x0060, 0x000c, 0x0058, 0x000c, 0x00ab, 0x000c, 
	0x00ac, 0x000c, 0x00ad, 0x000c, 0x00ae, 0x000c, 0x00af, 0x000c, 
	0x00b0, 0x000c, 0x00b1, 0x000c, 0x0069, 0x000c, 0x006a, 0x000c, 
	0x00b2, 0x000c, 0x006c, 0x006d, 0x000c, 0x000c, 0x000c, 0x000c, 

	0x000c, 0x006e, 0x006f, 0x0070, 0x0071, 0x0072, 0x000c, 0x0073, 
	0x0074, 0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 
	0x000c, 0x000c, 0x000c, 0x0075, 0x0076, 0x0077, 0x0071, 0x0072, 
	0x000c, 0x0078, 0x0079, 0x000c, 0x006e, 0x006f, 0x0070, 0x000c, 

	0x000c, 0x007a, 0x007b, 0x007c, 0x007d, 0x007e, 0x000c, 0x007f, 
	0x0080, 0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 
	0x000c, 0x000c, 0x000c, 0x0081, 0x0082, 0x0083, 0x007d, 0x007e, 
	0x000c, 0x0084, 0x0085, 0x000c, 0x007a, 0x007b, 0x007c, 0x000c, 

	0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 
	0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 
	0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 
	0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 0x000c, 0x000c
};

const u16 qwertyKeyMap[] = {
	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,
	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,
	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,
	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,
	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,
	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,
	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,
	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,

	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,
	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,
	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,
	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,
	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,
	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,
	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,
	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,

	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,
	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,
	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,
	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,
	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,
	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,
	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,
	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,

	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,
	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,
	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,
	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,
	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,
	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,
	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,
	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,

	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,
	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,
	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,
	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,
	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,
	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,
	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,
	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,

	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,
	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,
	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,
	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,
	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,
	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,
	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,
	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,

	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,
	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,
	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,
	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,
	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,
	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,
	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,
	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,

	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,
	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,
	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,
	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,
	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,
	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,
	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,
	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,

	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,
	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,
	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,
	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,
	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,
	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,
	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,
	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,

	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,
	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,
	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,
	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,
	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,
	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,
	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,
	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,

	KEY_RESERVED,	KEY_ESC,	KEY_ESC,	KEY_RESERVED,
	KEY_F1,		KEY_F1,		KEY_F2,		KEY_F2,
	KEY_F3,		KEY_F3,		KEY_F4,		KEY_F4,
	KEY_RESERVED,	KEY_F5,		KEY_F5,		KEY_F6,
	KEY_F6,		KEY_F7,		KEY_F7,		KEY_F8,
	KEY_F8,		KEY_RESERVED,	KEY_F9,		KEY_F9,
	KEY_F10,	KEY_F10,	KEY_F11,	KEY_F11,
	KEY_F12,	KEY_F12,	KEY_RESERVED,	KEY_RESERVED,

	KEY_RESERVED,	KEY_ESC,	KEY_ESC,	KEY_RESERVED,
	KEY_F1,		KEY_F1,		KEY_F2,		KEY_F2,
	KEY_F3,		KEY_F3,		KEY_F4,		KEY_F4,
	KEY_RESERVED,	KEY_F5,		KEY_F5,		KEY_F6,
	KEY_F6,		KEY_F7,		KEY_F7,		KEY_F8,
	KEY_F8,		KEY_RESERVED,	KEY_F9,		KEY_F9,
	KEY_F10,	KEY_F10,	KEY_F11,	KEY_F11,
	KEY_F12,	KEY_F12,	KEY_RESERVED,	KEY_RESERVED,

	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,
	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,
	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,
	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,
	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,
	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,
	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,
	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,

	KEY_RESERVED,	KEY_GRAVE,	KEY_GRAVE,	KEY_1,
	KEY_1,		KEY_2,		KEY_2,		KEY_3,
	KEY_3,		KEY_4,		KEY_4,		KEY_5,
	KEY_5,		KEY_6,		KEY_6,		KEY_7,
	KEY_7,		KEY_8,		KEY_8,		KEY_9,
	KEY_9,		KEY_0,		KEY_0,		KEY_MINUS,
	KEY_MINUS,	KEY_EQUAL,	KEY_EQUAL,	KEY_BACKSPACE,
	KEY_BACKSPACE,	KEY_BACKSPACE,	KEY_BACKSPACE,	KEY_RESERVED,

	KEY_RESERVED,	KEY_GRAVE,	KEY_GRAVE,	KEY_1,
	KEY_1,		KEY_2,		KEY_2,		KEY_3,
	KEY_3,		KEY_4,		KEY_4,		KEY_5,
	KEY_5,		KEY_6,		KEY_6,		KEY_7,
	KEY_7,		KEY_8,		KEY_8,		KEY_9,
	KEY_9,		KEY_0,		KEY_0,		KEY_MINUS,
	KEY_MINUS,	KEY_EQUAL,	KEY_EQUAL,	KEY_BACKSPACE,
	KEY_BACKSPACE,	KEY_BACKSPACE,	KEY_BACKSPACE,	KEY_RESERVED,

	KEY_RESERVED,	KEY_TAB,	KEY_TAB,	KEY_TAB,
	KEY_Q,		KEY_Q,		KEY_W,		KEY_W,
	KEY_E,		KEY_E,		KEY_R,		KEY_R,
	KEY_T,		KEY_T,		KEY_Y,		KEY_Y,
	KEY_U,		KEY_U,		KEY_I,		KEY_I,
	KEY_O,		KEY_O,		KEY_P,		KEY_P,
	KEY_LEFTBRACE,	KEY_LEFTBRACE,	KEY_RIGHTBRACE,	KEY_RIGHTBRACE,
	KEY_ENTER,	KEY_ENTER,	KEY_ENTER,	KEY_RESERVED,

	KEY_RESERVED,	KEY_TAB,	KEY_TAB,	KEY_TAB,
	KEY_Q,		KEY_Q,		KEY_W,		KEY_W,
	KEY_E,		KEY_E,		KEY_R,		KEY_R,
	KEY_T,		KEY_T,		KEY_Y,		KEY_Y,
	KEY_U,		KEY_U,		KEY_I,		KEY_I,
	KEY_O,		KEY_O,		KEY_P,		KEY_P,
	KEY_LEFTBRACE,	KEY_LEFTBRACE,	KEY_RIGHTBRACE,	KEY_RIGHTBRACE,
	KEY_ENTER,	KEY_ENTER,	KEY_ENTER,	KEY_RESERVED,

	KEY_RESERVED,	KEY_CAPSLOCK,	KEY_CAPSLOCK,	KEY_CAPSLOCK,
	KEY_CAPSLOCK,	KEY_A,		KEY_A,		KEY_S,
	KEY_S,		KEY_D,		KEY_D,		KEY_F,
	KEY_F,		KEY_G,		KEY_G,		KEY_H,
	KEY_H,		KEY_J,		KEY_J,		KEY_K,
	KEY_K,		KEY_L,		KEY_L,		KEY_SEMICOLON,
	KEY_SEMICOLON,	KEY_APOSTROPHE,	KEY_APOSTROPHE,	KEY_RESERVED,
	KEY_RESERVED,	KEY_ENTER,	KEY_ENTER,	KEY_RESERVED,

	KEY_RESERVED,	KEY_CAPSLOCK,	KEY_CAPSLOCK,	KEY_CAPSLOCK,
	KEY_CAPSLOCK,	KEY_A,		KEY_A,		KEY_S,
	KEY_S,		KEY_D,		KEY_D,		KEY_F,
	KEY_F,		KEY_G,		KEY_G,		KEY_H,
	KEY_H,		KEY_J,		KEY_J,		KEY_K,
	KEY_K,		KEY_L,		KEY_L,		KEY_SEMICOLON,
	KEY_SEMICOLON,	KEY_APOSTROPHE,	KEY_APOSTROPHE,	KEY_RESERVED,
	KEY_RESERVED,	KEY_ENTER,	KEY_ENTER,	KEY_RESERVED,

	KEY_RESERVED,	KEY_LEFTSHIFT,	KEY_LEFTSHIFT,	KEY_LEFTSHIFT,
	KEY_BACKSLASH,	KEY_BACKSLASH,	KEY_Z,		KEY_Z,
	KEY_X,		KEY_X,		KEY_C,		KEY_C,
	KEY_V,		KEY_V,		KEY_B,		KEY_B,
	KEY_N,		KEY_N,		KEY_M,		KEY_M,
	KEY_COMMA,	KEY_COMMA,	KEY_DOT,	KEY_DOT,
	KEY_SLASH,	KEY_SLASH,	KEY_RIGHTSHIFT,	KEY_RIGHTSHIFT,
	KEY_RIGHTSHIFT,	KEY_RIGHTSHIFT,	KEY_RIGHTSHIFT,	KEY_RESERVED,

	KEY_RESERVED,	KEY_LEFTSHIFT,	KEY_LEFTSHIFT,	KEY_LEFTSHIFT,
	KEY_BACKSLASH,	KEY_BACKSLASH,	KEY_Z,		KEY_Z,
	KEY_X,		KEY_X,		KEY_C,		KEY_C,
	KEY_V,		KEY_V,		KEY_B,		KEY_B,
	KEY_N,		KEY_N,		KEY_M,		KEY_M,
	KEY_COMMA,	KEY_COMMA,	KEY_DOT,	KEY_DOT,
	KEY_SLASH,	KEY_SLASH,	KEY_RIGHTSHIFT,	KEY_RIGHTSHIFT,
	KEY_RIGHTSHIFT,	KEY_RIGHTSHIFT,	KEY_RIGHTSHIFT,	KEY_RESERVED,

	KEY_RESERVED,	KEY_LEFTCTRL,	KEY_LEFTCTRL,	KEY_LEFTCTRL,
	KEY_LEFTMETA,	KEY_LEFTMETA,	KEY_LEFTMETA,	KEY_LEFTALT,
	KEY_LEFTALT,	KEY_LEFTALT,	KEY_SPACE,	KEY_SPACE,
	KEY_SPACE,	KEY_SPACE,	KEY_SPACE,	KEY_SPACE,
	KEY_SPACE,	KEY_SPACE,	KEY_SPACE,	KEY_RIGHTALT,
	KEY_RIGHTALT,	KEY_RIGHTALT,	KEY_RIGHTMETA,	KEY_RIGHTMETA,
	KEY_RIGHTMETA,	KEY_MENU,	KEY_MENU,	KEY_MENU,
	KEY_RIGHTCTRL,	KEY_RIGHTCTRL,	KEY_RIGHTCTRL,	KEY_RESERVED,

	KEY_RESERVED,	KEY_LEFTCTRL,	KEY_LEFTCTRL,	KEY_LEFTCTRL,
	KEY_LEFTMETA,	KEY_LEFTMETA,	KEY_LEFTMETA,	KEY_LEFTALT,
	KEY_LEFTALT,	KEY_LEFTALT,	KEY_SPACE,	KEY_SPACE,
	KEY_SPACE,	KEY_SPACE,	KEY_SPACE,	KEY_SPACE,
	KEY_SPACE,	KEY_SPACE,	KEY_SPACE,	KEY_RIGHTALT,
	KEY_RIGHTALT,	KEY_RIGHTALT,	KEY_RIGHTMETA,	KEY_RIGHTMETA,
	KEY_RIGHTMETA,	KEY_MENU,	KEY_MENU,	KEY_MENU,
	KEY_RIGHTCTRL,	KEY_RIGHTCTRL,	KEY_RIGHTCTRL,	KEY_RESERVED,

	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,
	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,
	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,
	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,
	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,
	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,
	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,
	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,	KEY_RESERVED,
};

