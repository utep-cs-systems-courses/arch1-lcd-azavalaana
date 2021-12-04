# makfile configuration
CPU             	= msp430g2553
CFLAGS          	= -mmcu=${CPU} -Os -I../h
LDFLAGS		= -L../lib -L/opt/ti/msp430_gcc/include/ 

#switch the compiler (for the internal make rules)
CC              = msp430-elf-gcc
AS              = msp430-elf-gcc -mmcu=${CPU} -c

all:wakedemoC.elf wakedemoAssy.elf

#additional rules for files
wakedemoC.elf: ${COMMON_OBJECTS} wakedemo.o wdt_handler.o buzzer.o switch-c.o 
	${CC} ${CFLAGS} ${LDFLAGS} -o $@ $^ -lTimer -lLcd 
wakedemoAssy.elf: ${COMMON_OBJECTS} wakedemo.o wdt_handler.o buzzer.o switch-s.o 
	${CC} ${CFLAGS} ${LDFLAGS} -o $@ $^ -lTimer -lLcd 


loadC: wakedemoC.elf
	msp430loader.sh $^
loadAssy: wakedemoAssy.elf
	msp430loader.sh $^

clean:
	rm -f *.o *.elf

switchC.o: wakedemo.h

switchAssy.o: wakedemo.h

wakedemo.o: wakedemo.h
