all:	clean build

build:
	@echo "CC loadcpu.c"
	@cc -fopenmp ./loadcpu.c -o loadcpu
	@echo "Done."
	
clean:
	@echo "CLEAN"
	@rm -f ./loadcpu
	@echo "Done."
