COMPILER:=gcc

COMPILER:=$(CROSS_COMPILE)$(COMPILER)
$(info $(COMPILER))

writer: writer.o
	$(COMPILER) writer.c -o writer


writer.o: writer.c
	$(COMPILER) -c writer.c

clean:
	rm *.o writer
