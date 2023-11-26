#include "../include/Memory.h"

using namespace std;

Memory::Memory(unsigned int size){
    capacity = size;
    start_Add = new char[capacity];
}

unsigned int Memory::Read(unsigned int address) const{
    if(address >= 0 && address <= capacity - sizeof(unsigned int)){
        unsigned int *add = (unsigned int*)(start_Add + address);
        return *add;
    }
}

void Memory::Write(unsigned int address, unsigned int data){
    if(address >= 0 && address <= capacity - sizeof(unsigned int)){
        unsigned int *add = (unsigned int*)(start_Add + address);
        *add = data;
    }
}
Memory::~Memory(){
    delete[] start_Add;
}