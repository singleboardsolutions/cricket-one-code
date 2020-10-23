#ifndef RPI_GPIO_H
#define RPI_GPIO_H

// Simple set of definitions to allow the use of the RPi GPIO numbers without 
// having to keep a lookup table nearby.  
// ATMEGA328PB MiniCore includes A6, A7, 23, 24

#define GPIO_0    -1	// Not populated
#define GPIO_1    -1	// Not populated
#define GPIO_2    A4
#define GPIO_3    A5
#define GPIO_4    A3
#define GPIO_5    7
#define GPIO_6    6
#define GPIO_7    9
#define GPIO_8    10
#define GPIO_9    12
#define GPIO_10   11
#define GPIO_11   13
#define GPIO_12   5
#define GPIO_13   23	//PE0
#define GPIO_14   1
#define GPIO_15   0
#define GPIO_16   A6	//PE2
#define GPIO_17   A2
#define GPIO_18   2
#define GPIO_19   24	//PE1
#define GPIO_20   A7	//PE3
#define GPIO_21   20
#define GPIO_22   A0
#define GPIO_23   3
#define GPIO_24   4
#define GPIO_25   8
#define GPIO_26   21
#define GPIO_27   A1

#endif
