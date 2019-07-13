/*
 * @brief		Sinkronisasi waktu dengan format 24 jam.
 * @details		Jika waktu telah menununjukkan lebih dari 24, maka akan disesuaikan
 *				dengan format waktu 24 jam.
 * @param1 [in]	hour	: Waktu dalam jam (0-23)
 * @param2 [in] gmt		: Nilai GMT (0-12)
 * @param3 [in] gmtSign	: Tanda GMT ( + atau - )
 * @return		Waktu yang telah terformat.
 *				-1 jika salam memasukkan parameter 'gmt' dan 'gmtSign'
 */
int8_t syncHour(int8_t hour, int8_t gmt = 0, char gmtSign = '+') {
	if (hour > 23 || hour < 0)
		return -1;
	if (gmt <= 12 && gmtSign == '+') {
		if ((hour + gmt) > 24) {
			return (hour - gmt);
		}
		return hour;
	}
	else if (gmt <= 12 && gmtSign == '-') {
		if ((hour - gmt) < 0) {
			return (hour + gmt);
		}
		return hour;
	}
	else {
		return -1;
	}
}
