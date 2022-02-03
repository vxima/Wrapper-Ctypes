# Basic example of calling a C function in python

* ## How to compile :

This makes a .so file for the Linux systems whick can be called from the CDLL funciton in the python file.

```
gcc -shared -Wl,-soname,print -o print.so -fPIC print.c
```

* ## How to run:

Executes the python code which calls the C function

```
python wrap.py
```
