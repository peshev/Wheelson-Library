#ifndef WHEELSON_LIBRARY_NUVOTON_H
#define WHEELSON_LIBRARY_NUVOTON_H

#include <Wire.h>

#define IDENTIFY_BYTE 0x00
#define WSNV_ADDR 0x38
#define WSNV_PIN_RESET 33

class Nuvoton {
public:
	Nuvoton(TwoWire& Wire);
	bool begin();
	bool identify();
	void reset();
	TwoWire& getWire();

private:
	TwoWire& Wire;
};

#endif //WHEELSON_LIBRARY_NUVOTON_H
