Welcome to the github repository of TF2 On Everything where i have some patches that allow TF2 and other Linux native Source engine games to run on absolute potato hardware.

Currently the only patch is avaiable is a patch that fixes opengl on the nvidia-304 driver.


OpenGL

64-bit: gcc -fPIC -DPIC -O2 -c ogl/strstr.c -o strstr64.o && ld -m elf_x86_64 -shared -o strstr64.so strstr64.o
32-bit: gcc -fPIC -DPIC -O2 -m32 -c ogl/strstr.c && ld -m elf_i386 -shared -o strstr.so strstr.o

Have fun!
