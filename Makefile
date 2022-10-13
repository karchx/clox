.PHONY: __all

__all: compile

compile:
	gcc *.c -o clox

clean:
	rm -rf clox
