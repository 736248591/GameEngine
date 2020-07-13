#pragma once
#include "Command.h"
class JumpCommand : public Command
{
public:
	virtual ~JumpCommand();
	virtual void execute(Actor& actor);

};

