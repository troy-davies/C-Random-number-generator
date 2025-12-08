# C-Random-number-generator
A very simple random number generator written in C, very much usable but also for learning c or use in situations where randomisation is a critical feature that must be speedy.
Written in twenty lines of code.
Weather you are an online service provider or want to flip a nonexistent coin, this program can be for you.
At the moment, releases do not require installation. Just run the executable through the command line.
Command line only...
For now.
# Linux compilation
DEPENDENCIES:
libsodium-dev clang 
Package manager should do the rest.
COMPILE:
clang main.c -o randnumgenlinux -lsodium
# Compilation for windows
WIP < Just use the python version or the version 0.9 which is peudo-random.
May look something like
~~"clang -o crandnumgen.exe main.c -L~/projects/crandnumgen/C-Random-number-generator/lib -lsodium -I~/projects/crandnumgen/C-Random-number-generator -target x86_64-w64-mingw32" on linux but currently I have trouble figuring it out.~~
~~Use Visual Studio~~
~~Use w64devkit gcc~~
~~Try to learn make~~
~~Just use tcc~~
