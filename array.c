#include <stdio.h>
#include <stdlib.h>

//ints

typedef struct{
    int*values;
    int length;
} intArray;

void printInts(intArray * arr){
    for(int i = 0; i < arr->length; i++){
        printf("Value %i: %i\n",i,arr->values[i]);
    }
}

intArray pushInt(intArray * arr, int value){
    arr->length++;
    arr->values = (int*)realloc(arr->values, sizeof(int)*arr->length);
    arr->values[arr->length-1] = value;
    return *arr;
}

intArray spliceInt(intArray * arr, int index){
    for(int i = index; i < arr->length - 1; i++){
        arr->values[i] = arr->values[i+1];
    }
    arr->length--;
    arr->values = (int*)realloc(arr->values, sizeof(int)*arr->length);
    return *arr;
}

intArray popInt(intArray * arr){
    arr->length--;
    arr->values = (int*)realloc(arr->values, sizeof(int)*arr->length);
    return *arr;
}

//doubles

typedef struct{
    double*values;
    int length;
} dblArray;

void printDbls(dblArray * arr){
    for(int i = 0; i < arr->length; i++){
        printf("Value %i: %f\n",i,arr->values[i]);
    }
}

dblArray pushDbl(dblArray * arr, double value){
    arr->length++;
    arr->values = (double*)realloc(arr->values, sizeof(int)*arr->length);
    arr->values[arr->length-1] = value;
    return *arr;
}

dblArray spliceDbl(dblArray * arr, int index){
    for(int i = index; i < arr->length - 1; i++){
        arr->values[i] = arr->values[i+1];
    }
    arr->length--;
    arr->values = (double*)realloc(arr->values, sizeof(int)*arr->length);
    return *arr;
}

dblArray popDbl(dblArray * arr){
    arr->length--;
    arr->values = (double*)realloc(arr->values, sizeof(int)*arr->length);
    return *arr;
}

//Strings

typedef struct{
    char**values;
    int length;
} strArray;

void printStrs(strArray * arr){
    for(int i = 0; i < arr->length; i++){
        printf("Value %i: %s\n",i,arr->values[i]);
    }
}

strArray pushStr(strArray * arr, char * value){
    arr->length++;
    arr->values = (char**)realloc(arr->values, sizeof(int)*arr->length);
    arr->values[arr->length-1] = value;
    return *arr;
}

strArray spliceStr(strArray * arr, int index){
    for(int i = index; i < arr->length - 1; i++){
        arr->values[i] = arr->values[i+1];
    }
    arr->length--;
    arr->values = (char**)realloc(arr->values, sizeof(int)*arr->length);
    return *arr;
}

strArray popStr(strArray * arr){
    arr->length--;
    arr->values = (char**)realloc(arr->values, sizeof(int)*arr->length);
    return *arr;
}

//chars

typedef struct{
    char*letters;
    int length;
} chrArray;

void printChrs(chrArray * arr){
    for(int i = 0; i < arr->length; i++){
        printf("letter %i: %c\n",i,arr->letters[i]);
    }
}

chrArray pushChr(chrArray * arr, char letter){
    arr->length++;
    arr->letters = (char*)realloc(arr->letters, sizeof(int)*arr->length);
    arr->letters[arr->length-1] = letter;
    return *arr;
}

chrArray spliceChr(chrArray * arr, int index){
    for(int i = index; i < arr->length - 1; i++){
        arr->letters[i] = arr->letters[i+1];
    }
    arr->length--;
    arr->letters = (char*)realloc(arr->letters, sizeof(int)*arr->length);
    return *arr;
}

chrArray popChr(chrArray * arr){
    arr->length--;
    arr->letters = (char*)realloc(arr->letters, sizeof(int)*arr->length);
    return *arr;
}
