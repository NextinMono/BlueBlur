#pragma once

namespace Sonic
{
    struct SStageData
    {
        struct SSonicConfig
        {
            Hedgehog::Math::CVector4 Position;
            float Yaw;
            float DeadHeight;
            Hedgehog::Base::CSharedString CameraView;
            Hedgehog::Base::CSharedString Mode;
            float Speed;
            float Time;
        };
        SSonicConfig SonicConfig;
        Hedgehog::Math::CVector CameraPosition;
    };
    BB_ASSERT_OFFSETOF(SStageData::SSonicConfig, Position, 0x0);
    BB_ASSERT_OFFSETOF(SStageData::SSonicConfig, Yaw, 0x10);
    BB_ASSERT_OFFSETOF(SStageData::SSonicConfig, DeadHeight, 0x14);
    BB_ASSERT_OFFSETOF(SStageData::SSonicConfig, CameraView, 0x18);
    BB_ASSERT_OFFSETOF(SStageData::SSonicConfig, Mode, 0x1C);
    BB_ASSERT_OFFSETOF(SStageData::SSonicConfig, Speed, 0x20);
    BB_ASSERT_OFFSETOF(SStageData::SSonicConfig, Time, 0x24);
    BB_ASSERT_OFFSETOF(SStageData, SonicConfig, 0x0);
    BB_ASSERT_OFFSETOF(SStageData, CameraPosition, 0x30);
};