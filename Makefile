G++   = g++
FILES = main.cpp ./src/Base_Type/Base_Type.cpp ./src/Base_Type/Object/Array/Array.cpp ./src/Base_Type/Object/Function/Function.cpp ./src/Base_Type/Fundamental_Type/Number/Number.cpp ./src/Base_Type/Fundamental_Type/String/String.cpp ./src/Base_Type/Fundamental_Type/Boolean/Boolean.cpp ./src/Base_Type/Fundamental_Type/Null/Null.cpp ./src/Base_Type/Fundamental_Type/Undef/Undef.cpp
EXE   = Types
DEL   = rm

all:
	$(G++) $(FILES) -o $(EXE)
del:
	$(DEL) $(EXE)