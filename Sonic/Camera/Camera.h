#pragma once

#include <Hedgehog/MirageCore/Camera/hhCamera.h>
#include <Hedgehog/Universe/Engine/hhStateMachine.h>

#include <Sonic/System/GameObject.h>

namespace Hedgehog::Sound
{
    class CSoundListener;
};

namespace Sonic
{
    class CCamera : public CGameObject, public Hedgehog::Universe::TStateMachine<CCamera>
    {
    public:
        class CMyCamera : public Hedgehog::Mirage::CCamera
        {
        public:
            Hedgehog::Math::CMatrix m_InputView;
        } m_MyCamera;

        BB_INSERT_PADDING(0x10);
        Hedgehog::Math::CVector m_Position;
        Hedgehog::Math::CVector m_TargetPosition;
        Hedgehog::Math::CVector m_UpVector;
        BB_INSERT_PADDING(0x1DC);
        uint32_t m_ActorID;
        Hedgehog::Base::CSharedString m_WorldName;
        BB_INSERT_PADDING(0x04);
        float m_FieldOfView;
        float m_FieldOfViewTarget;
        BB_INSERT_PADDING(0x28);
        boost::shared_ptr<Hedgehog::Sound::CSoundListener> m_spSoundListener;
        BB_INSERT_PADDING(0x20);
    };

    BB_ASSERT_OFFSETOF(CCamera::CMyCamera, m_InputView, 0xC0);
    BB_ASSERT_OFFSETOF(CCamera, m_MyCamera,         0x110);
    BB_ASSERT_OFFSETOF(CCamera, m_Position,         0x220);
    BB_ASSERT_OFFSETOF(CCamera, m_TargetPosition,   0x230);
    BB_ASSERT_OFFSETOF(CCamera, m_UpVector,         0x240);
    BB_ASSERT_OFFSETOF(CCamera, m_ActorID,          0x42C);
    BB_ASSERT_OFFSETOF(CCamera, m_WorldName,        0x430);
    BB_ASSERT_OFFSETOF(CCamera, m_FieldOfView,      0x438);
    BB_ASSERT_OFFSETOF(CCamera, m_spSoundListener,  0x468);
    BB_ASSERT_SIZEOF(CCamera, 0x490);
}