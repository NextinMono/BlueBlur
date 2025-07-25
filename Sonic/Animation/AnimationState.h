﻿#pragma once

#include <Hedgehog/Universe/Engine/hhStateMachine.h>

namespace Hedgehog::Animation
{
    class CAnimationControlSingle;
}

namespace Sonic
{
    class IAnimationContext;

    class CAnimationState : public Hedgehog::Universe::TStateMachine<IAnimationContext>::TState
    {
    public:
        BB_INSERT_PADDING(0x20) {};
        boost::shared_ptr<Hedgehog::Animation::CAnimationControlSingle> m_spAnimationControlSingle;
        Hedgehog::Base::CSharedString m_TransitionState;
        float m_Field8C;
        uint32_t m_Field90;
        Hedgehog::Base::CSharedString m_Field94;
        BB_INSERT_PADDING(0xF0);
        hh::vector<boost::shared_ptr<Sonic::CAnimationState>> m_FieldF0;
        BB_INSERT_PADDING(0x4) {};

        void SetTransitionState(const Hedgehog::Base::CSharedString& in_rTargetStateName, bool in_IsTransition = true, float in_Unknown01 = -1.0f);
        float GetDuration();
        float GetLocalTime();
    };

    BB_ASSERT_OFFSETOF(CAnimationState, m_spAnimationControlSingle, 0x80);
    BB_ASSERT_OFFSETOF(CAnimationState, m_TransitionState, 0x88);
    BB_ASSERT_OFFSETOF(CAnimationState, m_FieldF0, 0x188);
    BB_ASSERT_SIZEOF(CAnimationState, 0x19C);
}

#include <Sonic/Animation/AnimationState.inl>