// This function calculating the difference in time using timer counter in millis() or micros() Arduino.
uint32_t getDifference(uint32_t t0, uint32_t t1) {
	uint32_t returnValue = 0;
	if (t1 > t0) {
		returnValue = t1 - t0;
		return returnValue;
	}
	else {
		uint32_t x = ((2 ^ 32) - 1) - t0;
		returnValue = t1 + x;
		return returnValue;
	}
}
