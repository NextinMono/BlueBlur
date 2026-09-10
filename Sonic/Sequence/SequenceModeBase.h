#pragma once

#include <Hedgehog/Universe/Engine/hhMessageActor.h>

namespace Sonic::Sequence
{
	class CSequenceMode : public Hedgehog::Universe::CMessageActor
	{
	public:
		virtual bool Update() { return 0; };
		virtual void Start() { return; };
		virtual void End() { return; };
	};
}
