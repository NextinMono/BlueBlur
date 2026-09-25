#pragma once

#include <Hedgehog/Base/Type/hhSharedString.h>
#include <Hedgehog/Universe/Engine/hhMessageActor.h>

namespace Sonic::Sequence
{
	class CStoryImpl;
	class CSequenceMainImpl : public Hedgehog::Universe::CMessageActor
	{
	public:
		enum EFlags : int
		{
			eFlag_IsQuitGame = 1
		};
		enum EModuleState : int
		{
			eModuleState_Started = 1,
			eModuleState_Updating = 2,
			eModuleState_Ending = 3,
		};
		Hedgehog::Base::CSharedString m_CurrentSequenceModeName;
		boost::shared_ptr<CSequenceMode> m_spCurrentSequenceMode;
		EModuleState m_ModuleState;
		int m_EndState;
		int m_NextFlowIndex;
		CStoryImpl* m_pStorySequence;
		int m_GameFlags;
		int m_Field9C;
	};
	BB_ASSERT_OFFSETOF(CSequenceMainImpl, m_CurrentSequenceModeName, 0x7C);
	BB_ASSERT_OFFSETOF(CSequenceMainImpl, m_spCurrentSequenceMode, 0x80);
	BB_ASSERT_OFFSETOF(CSequenceMainImpl, m_ModuleState, 0x88);
	BB_ASSERT_OFFSETOF(CSequenceMainImpl, m_EndState, 0x8C);
	BB_ASSERT_OFFSETOF(CSequenceMainImpl, m_NextFlowIndex, 0x90);
	BB_ASSERT_OFFSETOF(CSequenceMainImpl, m_pStorySequence, 0x94);
	BB_ASSERT_OFFSETOF(CSequenceMainImpl, m_GameFlags, 0x98);
	BB_ASSERT_OFFSETOF(CSequenceMainImpl, m_Field9C, 0x9C);
}