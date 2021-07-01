#ifndef WHEELSON_LIBRARY_BATTERYSERVICE_H
#define WHEELSON_LIBRARY_BATTERYSERVICE_H

#include <Arduino.h>
#include <Loop/LoopListener.h>
#include <Wire.h>
#include <Display/Sprite.h>

class BatteryService : public LoopListener {
public:
	BatteryService();
	void loop(uint micros) override;
	uint16_t getVoltage() const;
	uint8_t getLevel();
	uint8_t getPercentage();
	void disableShutdown(bool _shutdown);

	uint8_t getLastDrawnLevel() const;

	void drawIcon(Sprite* canvas);

private:
	uint16_t voltage = 0; //in mV
	static const uint16_t measureInterval;
	uint measureMicros = measureInterval*1000000;
	uint8_t lastDrawn=0;
	bool shutdownDisable = false;
};


#endif //WHEELSON_LIBRARY_BATTERYSERVICE_H
