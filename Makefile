.PHONY: __all

__all: compile

compile:
	gcc *.c -o clox -w

clean:
	rm -rf clox
