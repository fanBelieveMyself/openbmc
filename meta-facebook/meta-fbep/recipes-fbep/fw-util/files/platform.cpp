#include "usbdbg.h"

UsbDbgComponent usbdbg("ocpdbg", "mcu", "JG7", 13, 0x60, false);
UsbDbgBlComponent usbdbgbl("ocpdbg", "mcubl", 13, 0x60, 0x02);  // target ID of bootloader = 0x02
