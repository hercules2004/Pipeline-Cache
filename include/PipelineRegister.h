#pragma once

#include "Register.h"

class PipelineRegister{
public:
	Register<bool> bubble;
    
	Register<unsigned int> PC;
	Register<unsigned int> instruction_word;
	Register<unsigned int> branchTarget;
	Register<unsigned int> A;
	Register<unsigned int> B;
	Register<unsigned int> operand2;
	Register<unsigned int> aluResult;
	Register<unsigned int> ldResult;

	Register<bool> isSt;
	Register<bool> isLd;
	Register<bool> isBeq;
	Register<bool> isBgt;
	Register<bool> isRet;
	Register<bool> isImmediate;
	Register<bool> isWb;
	Register<bool> isUbranch;
	Register<bool> isCall;
	Register<bool> isAdd;
	Register<bool> isSub;
	Register<bool> isCmp;
	Register<bool> isMul;
	Register<bool> isDiv;
	Register<bool> isMod;
	Register<bool> isLsl;
	Register<bool> isLsr;
	Register<bool> isAsr;
	Register<bool> isOr;
	Register<bool> isAnd;
	Register<bool> isNot;
	Register<bool> isMov;

    //Methods
	explicit PipelineRegister(bool pipe);
	void clock();
	void WriteBubble(bool to_bubble);
	void ForwardBubble(bool to_bubble);
};