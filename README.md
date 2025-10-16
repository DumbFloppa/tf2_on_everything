Welcome to the github repository of TF2 On Everything where i have some patches that allow TF2 and other Linux native Source engine games to run on absolute potato hardware.

Currently the only patch is avaiable is a patch that fixes opengl on the nvidia-304 driver.


OpenGL

64-bit: gcc -fPIC -DPIC -O2 -c ogl/strstr.c -o strstr64.o && ld -m elf_x86_64 -shared -o strstr64.so strstr64.o

To use just add LD_PRELOAD="strstr64.so $LD_PRELOAD" %command% to Steam launch arguments and copy the strstr64.so to the 64-bit Linux Source engine based game's folder.

32-bit: gcc -fPIC -DPIC -O2 -m32 -c ogl/strstr.c && ld -m elf_i386 -shared -o strstr.so strstr.o

To use just add LD_PRELOAD="strstr.so $LD_PRELOAD" %command% to Steam launch arguments and copy the strstr.so to the 32-bit Linux Source engine based game's folder.

FAQ


Q: How to download Linux 32-bit TF2?

A:

Easy.

Open a terminal and type steam steam://open/console // I'll update the guide later to include the Flatpak version of Steam.

download_depot 440 441 310401172695269575

download_depot 440 232253 1021304105111148610

Client Dated: 10 January 2024 – 00:58:40 UTC

Have fun!
