/*
 * SwapMetric.h
 *
 *  Created on: Jun 12, 2014
 *      Author: ravitandon
 */

#ifndef SWAPMETRIC_H_
#define SWAPMETRIC_H_

#include "swap_global.h"


class SwapMetric {
private:
	static long int _swapOuts;
	static long int _swapIns;
	static timespec _swapOutTime;
	static timespec _swapInTime;
	static long int _swapOutBytes;
	static long int _swapInBytes;
	static long int _segFaults;
	static long int _swapInPages;
	static long int _swapOutPages;
	static long int _swapInsCompiler;
	static long int _swapInsInterpreter;

public:
	static long int getSwapOutPages();
	static long int getSwapInPages();
	static void incrementSegFaults();
	static long int getSegFaultCount();
	static void incrementSwapOuts();
	static void incrementSwapOutsPages(int pages);
	static long int getSwapOuts();
	static void incrementSwapIns();
	static void incrementSwapInsPages(int pages);
	static long int getSwapIns();
	static timespec getTotalSwapInTime();
	static void incrementSwapInTime(timespec start, timespec end);
	static timespec getTotalSwapOutTime();
	static void incrementSwapOutTime(timespec start, timespec end);
	static timespec diff(timespec start, timespec end);
	static void print_on();
	static void incrementSwapOutBytes(long bytes);
	static void incrementSwapInBytes(int bytes);

};

#endif /* SWAPMETRIC_H_ */
