from ctypes import *

path_lib = "./print.so"
cpp_lib = CDLL(path_lib)
print(cpp_lib)
cpp_lib.print()