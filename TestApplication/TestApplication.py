
from ctypes import *

dll = cdll.LoadLibrary(r"C:\Users\krone\source\repos\TestDll\x64\Release\TestDll.dll")

result = dll.addThree(2);

print(result)

dll.printer(1)