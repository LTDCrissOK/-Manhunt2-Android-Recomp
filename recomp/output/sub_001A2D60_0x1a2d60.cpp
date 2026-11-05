#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A2D60
// Address: 0x1a2d60 - 0x1a31d0
void sub_001A2D60_0x1a2d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A2D60_0x1a2d60");
#endif

    switch (ctx->pc) {
        case 0x1a2d60u: goto label_1a2d60;
        case 0x1a2d64u: goto label_1a2d64;
        case 0x1a2d68u: goto label_1a2d68;
        case 0x1a2d6cu: goto label_1a2d6c;
        case 0x1a2d70u: goto label_1a2d70;
        case 0x1a2d74u: goto label_1a2d74;
        case 0x1a2d78u: goto label_1a2d78;
        case 0x1a2d7cu: goto label_1a2d7c;
        case 0x1a2d80u: goto label_1a2d80;
        case 0x1a2d84u: goto label_1a2d84;
        case 0x1a2d88u: goto label_1a2d88;
        case 0x1a2d8cu: goto label_1a2d8c;
        case 0x1a2d90u: goto label_1a2d90;
        case 0x1a2d94u: goto label_1a2d94;
        case 0x1a2d98u: goto label_1a2d98;
        case 0x1a2d9cu: goto label_1a2d9c;
        case 0x1a2da0u: goto label_1a2da0;
        case 0x1a2da4u: goto label_1a2da4;
        case 0x1a2da8u: goto label_1a2da8;
        case 0x1a2dacu: goto label_1a2dac;
        case 0x1a2db0u: goto label_1a2db0;
        case 0x1a2db4u: goto label_1a2db4;
        case 0x1a2db8u: goto label_1a2db8;
        case 0x1a2dbcu: goto label_1a2dbc;
        case 0x1a2dc0u: goto label_1a2dc0;
        case 0x1a2dc4u: goto label_1a2dc4;
        case 0x1a2dc8u: goto label_1a2dc8;
        case 0x1a2dccu: goto label_1a2dcc;
        case 0x1a2dd0u: goto label_1a2dd0;
        case 0x1a2dd4u: goto label_1a2dd4;
        case 0x1a2dd8u: goto label_1a2dd8;
        case 0x1a2ddcu: goto label_1a2ddc;
        case 0x1a2de0u: goto label_1a2de0;
        case 0x1a2de4u: goto label_1a2de4;
        case 0x1a2de8u: goto label_1a2de8;
        case 0x1a2decu: goto label_1a2dec;
        case 0x1a2df0u: goto label_1a2df0;
        case 0x1a2df4u: goto label_1a2df4;
        case 0x1a2df8u: goto label_1a2df8;
        case 0x1a2dfcu: goto label_1a2dfc;
        case 0x1a2e00u: goto label_1a2e00;
        case 0x1a2e04u: goto label_1a2e04;
        case 0x1a2e08u: goto label_1a2e08;
        case 0x1a2e0cu: goto label_1a2e0c;
        case 0x1a2e10u: goto label_1a2e10;
        case 0x1a2e14u: goto label_1a2e14;
        case 0x1a2e18u: goto label_1a2e18;
        case 0x1a2e1cu: goto label_1a2e1c;
        case 0x1a2e20u: goto label_1a2e20;
        case 0x1a2e24u: goto label_1a2e24;
        case 0x1a2e28u: goto label_1a2e28;
        case 0x1a2e2cu: goto label_1a2e2c;
        case 0x1a2e30u: goto label_1a2e30;
        case 0x1a2e34u: goto label_1a2e34;
        case 0x1a2e38u: goto label_1a2e38;
        case 0x1a2e3cu: goto label_1a2e3c;
        case 0x1a2e40u: goto label_1a2e40;
        case 0x1a2e44u: goto label_1a2e44;
        case 0x1a2e48u: goto label_1a2e48;
        case 0x1a2e4cu: goto label_1a2e4c;
        case 0x1a2e50u: goto label_1a2e50;
        case 0x1a2e54u: goto label_1a2e54;
        case 0x1a2e58u: goto label_1a2e58;
        case 0x1a2e5cu: goto label_1a2e5c;
        case 0x1a2e60u: goto label_1a2e60;
        case 0x1a2e64u: goto label_1a2e64;
        case 0x1a2e68u: goto label_1a2e68;
        case 0x1a2e6cu: goto label_1a2e6c;
        case 0x1a2e70u: goto label_1a2e70;
        case 0x1a2e74u: goto label_1a2e74;
        case 0x1a2e78u: goto label_1a2e78;
        case 0x1a2e7cu: goto label_1a2e7c;
        case 0x1a2e80u: goto label_1a2e80;
        case 0x1a2e84u: goto label_1a2e84;
        case 0x1a2e88u: goto label_1a2e88;
        case 0x1a2e8cu: goto label_1a2e8c;
        case 0x1a2e90u: goto label_1a2e90;
        case 0x1a2e94u: goto label_1a2e94;
        case 0x1a2e98u: goto label_1a2e98;
        case 0x1a2e9cu: goto label_1a2e9c;
        case 0x1a2ea0u: goto label_1a2ea0;
        case 0x1a2ea4u: goto label_1a2ea4;
        case 0x1a2ea8u: goto label_1a2ea8;
        case 0x1a2eacu: goto label_1a2eac;
        case 0x1a2eb0u: goto label_1a2eb0;
        case 0x1a2eb4u: goto label_1a2eb4;
        case 0x1a2eb8u: goto label_1a2eb8;
        case 0x1a2ebcu: goto label_1a2ebc;
        case 0x1a2ec0u: goto label_1a2ec0;
        case 0x1a2ec4u: goto label_1a2ec4;
        case 0x1a2ec8u: goto label_1a2ec8;
        case 0x1a2eccu: goto label_1a2ecc;
        case 0x1a2ed0u: goto label_1a2ed0;
        case 0x1a2ed4u: goto label_1a2ed4;
        case 0x1a2ed8u: goto label_1a2ed8;
        case 0x1a2edcu: goto label_1a2edc;
        case 0x1a2ee0u: goto label_1a2ee0;
        case 0x1a2ee4u: goto label_1a2ee4;
        case 0x1a2ee8u: goto label_1a2ee8;
        case 0x1a2eecu: goto label_1a2eec;
        case 0x1a2ef0u: goto label_1a2ef0;
        case 0x1a2ef4u: goto label_1a2ef4;
        case 0x1a2ef8u: goto label_1a2ef8;
        case 0x1a2efcu: goto label_1a2efc;
        case 0x1a2f00u: goto label_1a2f00;
        case 0x1a2f04u: goto label_1a2f04;
        case 0x1a2f08u: goto label_1a2f08;
        case 0x1a2f0cu: goto label_1a2f0c;
        case 0x1a2f10u: goto label_1a2f10;
        case 0x1a2f14u: goto label_1a2f14;
        case 0x1a2f18u: goto label_1a2f18;
        case 0x1a2f1cu: goto label_1a2f1c;
        case 0x1a2f20u: goto label_1a2f20;
        case 0x1a2f24u: goto label_1a2f24;
        case 0x1a2f28u: goto label_1a2f28;
        case 0x1a2f2cu: goto label_1a2f2c;
        case 0x1a2f30u: goto label_1a2f30;
        case 0x1a2f34u: goto label_1a2f34;
        case 0x1a2f38u: goto label_1a2f38;
        case 0x1a2f3cu: goto label_1a2f3c;
        case 0x1a2f40u: goto label_1a2f40;
        case 0x1a2f44u: goto label_1a2f44;
        case 0x1a2f48u: goto label_1a2f48;
        case 0x1a2f4cu: goto label_1a2f4c;
        case 0x1a2f50u: goto label_1a2f50;
        case 0x1a2f54u: goto label_1a2f54;
        case 0x1a2f58u: goto label_1a2f58;
        case 0x1a2f5cu: goto label_1a2f5c;
        case 0x1a2f60u: goto label_1a2f60;
        case 0x1a2f64u: goto label_1a2f64;
        case 0x1a2f68u: goto label_1a2f68;
        case 0x1a2f6cu: goto label_1a2f6c;
        case 0x1a2f70u: goto label_1a2f70;
        case 0x1a2f74u: goto label_1a2f74;
        case 0x1a2f78u: goto label_1a2f78;
        case 0x1a2f7cu: goto label_1a2f7c;
        case 0x1a2f80u: goto label_1a2f80;
        case 0x1a2f84u: goto label_1a2f84;
        case 0x1a2f88u: goto label_1a2f88;
        case 0x1a2f8cu: goto label_1a2f8c;
        case 0x1a2f90u: goto label_1a2f90;
        case 0x1a2f94u: goto label_1a2f94;
        case 0x1a2f98u: goto label_1a2f98;
        case 0x1a2f9cu: goto label_1a2f9c;
        case 0x1a2fa0u: goto label_1a2fa0;
        case 0x1a2fa4u: goto label_1a2fa4;
        case 0x1a2fa8u: goto label_1a2fa8;
        case 0x1a2facu: goto label_1a2fac;
        case 0x1a2fb0u: goto label_1a2fb0;
        case 0x1a2fb4u: goto label_1a2fb4;
        case 0x1a2fb8u: goto label_1a2fb8;
        case 0x1a2fbcu: goto label_1a2fbc;
        case 0x1a2fc0u: goto label_1a2fc0;
        case 0x1a2fc4u: goto label_1a2fc4;
        case 0x1a2fc8u: goto label_1a2fc8;
        case 0x1a2fccu: goto label_1a2fcc;
        case 0x1a2fd0u: goto label_1a2fd0;
        case 0x1a2fd4u: goto label_1a2fd4;
        case 0x1a2fd8u: goto label_1a2fd8;
        case 0x1a2fdcu: goto label_1a2fdc;
        case 0x1a2fe0u: goto label_1a2fe0;
        case 0x1a2fe4u: goto label_1a2fe4;
        case 0x1a2fe8u: goto label_1a2fe8;
        case 0x1a2fecu: goto label_1a2fec;
        case 0x1a2ff0u: goto label_1a2ff0;
        case 0x1a2ff4u: goto label_1a2ff4;
        case 0x1a2ff8u: goto label_1a2ff8;
        case 0x1a2ffcu: goto label_1a2ffc;
        case 0x1a3000u: goto label_1a3000;
        case 0x1a3004u: goto label_1a3004;
        case 0x1a3008u: goto label_1a3008;
        case 0x1a300cu: goto label_1a300c;
        case 0x1a3010u: goto label_1a3010;
        case 0x1a3014u: goto label_1a3014;
        case 0x1a3018u: goto label_1a3018;
        case 0x1a301cu: goto label_1a301c;
        case 0x1a3020u: goto label_1a3020;
        case 0x1a3024u: goto label_1a3024;
        case 0x1a3028u: goto label_1a3028;
        case 0x1a302cu: goto label_1a302c;
        case 0x1a3030u: goto label_1a3030;
        case 0x1a3034u: goto label_1a3034;
        case 0x1a3038u: goto label_1a3038;
        case 0x1a303cu: goto label_1a303c;
        case 0x1a3040u: goto label_1a3040;
        case 0x1a3044u: goto label_1a3044;
        case 0x1a3048u: goto label_1a3048;
        case 0x1a304cu: goto label_1a304c;
        case 0x1a3050u: goto label_1a3050;
        case 0x1a3054u: goto label_1a3054;
        case 0x1a3058u: goto label_1a3058;
        case 0x1a305cu: goto label_1a305c;
        case 0x1a3060u: goto label_1a3060;
        case 0x1a3064u: goto label_1a3064;
        case 0x1a3068u: goto label_1a3068;
        case 0x1a306cu: goto label_1a306c;
        case 0x1a3070u: goto label_1a3070;
        case 0x1a3074u: goto label_1a3074;
        case 0x1a3078u: goto label_1a3078;
        case 0x1a307cu: goto label_1a307c;
        case 0x1a3080u: goto label_1a3080;
        case 0x1a3084u: goto label_1a3084;
        case 0x1a3088u: goto label_1a3088;
        case 0x1a308cu: goto label_1a308c;
        case 0x1a3090u: goto label_1a3090;
        case 0x1a3094u: goto label_1a3094;
        case 0x1a3098u: goto label_1a3098;
        case 0x1a309cu: goto label_1a309c;
        case 0x1a30a0u: goto label_1a30a0;
        case 0x1a30a4u: goto label_1a30a4;
        case 0x1a30a8u: goto label_1a30a8;
        case 0x1a30acu: goto label_1a30ac;
        case 0x1a30b0u: goto label_1a30b0;
        case 0x1a30b4u: goto label_1a30b4;
        case 0x1a30b8u: goto label_1a30b8;
        case 0x1a30bcu: goto label_1a30bc;
        case 0x1a30c0u: goto label_1a30c0;
        case 0x1a30c4u: goto label_1a30c4;
        case 0x1a30c8u: goto label_1a30c8;
        case 0x1a30ccu: goto label_1a30cc;
        case 0x1a30d0u: goto label_1a30d0;
        case 0x1a30d4u: goto label_1a30d4;
        case 0x1a30d8u: goto label_1a30d8;
        case 0x1a30dcu: goto label_1a30dc;
        case 0x1a30e0u: goto label_1a30e0;
        case 0x1a30e4u: goto label_1a30e4;
        case 0x1a30e8u: goto label_1a30e8;
        case 0x1a30ecu: goto label_1a30ec;
        case 0x1a30f0u: goto label_1a30f0;
        case 0x1a30f4u: goto label_1a30f4;
        case 0x1a30f8u: goto label_1a30f8;
        case 0x1a30fcu: goto label_1a30fc;
        case 0x1a3100u: goto label_1a3100;
        case 0x1a3104u: goto label_1a3104;
        case 0x1a3108u: goto label_1a3108;
        case 0x1a310cu: goto label_1a310c;
        case 0x1a3110u: goto label_1a3110;
        case 0x1a3114u: goto label_1a3114;
        case 0x1a3118u: goto label_1a3118;
        case 0x1a311cu: goto label_1a311c;
        case 0x1a3120u: goto label_1a3120;
        case 0x1a3124u: goto label_1a3124;
        case 0x1a3128u: goto label_1a3128;
        case 0x1a312cu: goto label_1a312c;
        case 0x1a3130u: goto label_1a3130;
        case 0x1a3134u: goto label_1a3134;
        case 0x1a3138u: goto label_1a3138;
        case 0x1a313cu: goto label_1a313c;
        case 0x1a3140u: goto label_1a3140;
        case 0x1a3144u: goto label_1a3144;
        case 0x1a3148u: goto label_1a3148;
        case 0x1a314cu: goto label_1a314c;
        case 0x1a3150u: goto label_1a3150;
        case 0x1a3154u: goto label_1a3154;
        case 0x1a3158u: goto label_1a3158;
        case 0x1a315cu: goto label_1a315c;
        case 0x1a3160u: goto label_1a3160;
        case 0x1a3164u: goto label_1a3164;
        case 0x1a3168u: goto label_1a3168;
        case 0x1a316cu: goto label_1a316c;
        case 0x1a3170u: goto label_1a3170;
        case 0x1a3174u: goto label_1a3174;
        case 0x1a3178u: goto label_1a3178;
        case 0x1a317cu: goto label_1a317c;
        case 0x1a3180u: goto label_1a3180;
        case 0x1a3184u: goto label_1a3184;
        case 0x1a3188u: goto label_1a3188;
        case 0x1a318cu: goto label_1a318c;
        case 0x1a3190u: goto label_1a3190;
        case 0x1a3194u: goto label_1a3194;
        case 0x1a3198u: goto label_1a3198;
        case 0x1a319cu: goto label_1a319c;
        case 0x1a31a0u: goto label_1a31a0;
        case 0x1a31a4u: goto label_1a31a4;
        case 0x1a31a8u: goto label_1a31a8;
        case 0x1a31acu: goto label_1a31ac;
        case 0x1a31b0u: goto label_1a31b0;
        case 0x1a31b4u: goto label_1a31b4;
        case 0x1a31b8u: goto label_1a31b8;
        case 0x1a31bcu: goto label_1a31bc;
        case 0x1a31c0u: goto label_1a31c0;
        case 0x1a31c4u: goto label_1a31c4;
        case 0x1a31c8u: goto label_1a31c8;
        case 0x1a31ccu: goto label_1a31cc;
        default: break;
    }

    ctx->pc = 0x1a2d60u;

label_1a2d60:
    // 0x1a2d60: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1a2d60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1a2d64:
    // 0x1a2d64: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x1a2d64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
label_1a2d68:
    // 0x1a2d68: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a2d68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a2d6c:
    // 0x1a2d6c: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x1a2d6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
label_1a2d70:
    // 0x1a2d70: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1a2d70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1a2d74:
    // 0x1a2d74: 0xc061a26  jal         func_186898
label_1a2d78:
    if (ctx->pc == 0x1A2D78u) {
        ctx->pc = 0x1A2D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2D74u;
        // 0x1a2d78: 0xe7b40050  swc1        $f20, 0x50($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2D7Cu;
        goto label_1a2d7c;
    }
    ctx->pc = 0x1A2D74u;
    SET_GPR_U32(ctx, 31, 0x1A2D7Cu);
    ctx->pc = 0x1A2D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2D74u;
    // 0x1a2d78: 0xe7b40050  swc1        $f20, 0x50($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x186898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186898u, 0x1A2D74u, 0x1A2D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2D7Cu;
label_1a2d7c:
    // 0x1a2d7c: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x1a2d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
label_1a2d80:
    // 0x1a2d80: 0x24420140  addiu       $v0, $v0, 0x140
    ctx->pc = 0x1a2d80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 320));
label_1a2d84:
    // 0x1a2d84: 0x24635b40  addiu       $v1, $v1, 0x5B40
    ctx->pc = 0x1a2d84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23360));
label_1a2d88:
    // 0x1a2d88: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1a2d88u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1a2d8c:
    // 0x1a2d8c: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x1a2d8cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_1a2d90:
    // 0x1a2d90: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x1a2d90u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_1a2d94:
    // 0x1a2d94: 0x4bc1106e  vopmsub.xyz $vf1, $vf2, $vf1
    ctx->pc = 0x1a2d94u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_1a2d98:
    // 0x1a2d98: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1a2d98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_1a2d9c:
    // 0x1a2d9c: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1a2d9cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1a2da0:
    // 0x1a2da0: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x1a2da0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_1a2da4:
    // 0x1a2da4: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x1a2da4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_1a2da8:
    // 0x1a2da8: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x1a2da8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_1a2dac:
    // 0x1a2dac: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x1a2dacu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_1a2db0:
    // 0x1a2db0: 0x4a0003bf  vwaitq
    ctx->pc = 0x1a2db0u;
    // VWAITQ (Q already resolved in this runtime)
label_1a2db4:
    // 0x1a2db4: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x1a2db4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_1a2db8:
    // 0x1a2db8: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1a2db8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_1a2dbc:
    // 0x1a2dbc: 0x8e02005c  lw          $v0, 0x5C($s0)
    ctx->pc = 0x1a2dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
label_1a2dc0:
    // 0x1a2dc0: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_1a2dc4:
    if (ctx->pc == 0x1A2DC4u) {
        ctx->pc = 0x1A2DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2DC0u;
        // 0x1a2dc4: 0x27b10010  addiu       $s1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2DC8u;
        goto label_1a2dc8;
    }
    ctx->pc = 0x1A2DC0u;
    {
        const bool branch_taken_0x1a2dc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A2DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2DC0u;
        // 0x1a2dc4: 0x27b10010  addiu       $s1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2dc0) {
            ctx->pc = 0x1A2DF8u;
            goto label_1a2df8;
        }
    }
    ctx->pc = 0x1A2DC8u;
label_1a2dc8:
    // 0x1a2dc8: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x1a2dc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a2dcc:
    // 0x1a2dcc: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x1a2dccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a2dd0:
    // 0x1a2dd0: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x1a2dd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a2dd4:
    // 0x1a2dd4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1a2dd4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1a2dd8:
    // 0x1a2dd8: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x1a2dd8u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_1a2ddc:
    // 0x1a2ddc: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x1a2ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
label_1a2de0:
    // 0x1a2de0: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x1a2de0u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
label_1a2de4:
    // 0x1a2de4: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x1a2de4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_1a2de8:
    // 0x1a2de8: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x1a2de8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_1a2dec:
    // 0x1a2dec: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x1a2decu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_1a2df0:
    // 0x1a2df0: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x1a2df0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_1a2df4:
    // 0x1a2df4: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1a2df4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_1a2df8:
    // 0x1a2df8: 0xc061a12  jal         func_186848
label_1a2dfc:
    if (ctx->pc == 0x1A2DFCu) {
        ctx->pc = 0x1A2DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2DF8u;
        // 0x1a2dfc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2E00u;
        goto label_1a2e00;
    }
    ctx->pc = 0x1A2DF8u;
    SET_GPR_U32(ctx, 31, 0x1A2E00u);
    ctx->pc = 0x1A2DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2DF8u;
    // 0x1a2dfc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x1A2DF8u, 0x1A2E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2E00u;
label_1a2e00:
    // 0x1a2e00: 0x244201e0  addiu       $v0, $v0, 0x1E0
    ctx->pc = 0x1a2e00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 480));
label_1a2e04:
    // 0x1a2e04: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1a2e04u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1a2e08:
    // 0x1a2e08: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x1a2e08u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1a2e0c:
    // 0x1a2e0c: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1a2e0cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_1a2e10:
    // 0x1a2e10: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x1a2e10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
label_1a2e14:
    // 0x1a2e14: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x1a2e14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a2e18:
    // 0x1a2e18: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x1a2e18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a2e1c:
    // 0x1a2e1c: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x1a2e1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a2e20:
    // 0x1a2e20: 0xc7a3002c  lwc1        $f3, 0x2C($sp)
    ctx->pc = 0x1a2e20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1a2e24:
    // 0x1a2e24: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x1a2e24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_1a2e28:
    // 0x1a2e28: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x1a2e28u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_1a2e2c:
    // 0x1a2e2c: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x1a2e2cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_1a2e30:
    // 0x1a2e30: 0xe7a3001c  swc1        $f3, 0x1C($sp)
    ctx->pc = 0x1a2e30u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_1a2e34:
    // 0x1a2e34: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x1a2e34u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_1a2e38:
    // 0x1a2e38: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1a2e38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_1a2e3c:
    // 0x1a2e3c: 0xc061a12  jal         func_186848
label_1a2e40:
    if (ctx->pc == 0x1A2E40u) {
        ctx->pc = 0x1A2E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2E3Cu;
        // 0x1a2e40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2E44u;
        goto label_1a2e44;
    }
    ctx->pc = 0x1A2E3Cu;
    SET_GPR_U32(ctx, 31, 0x1A2E44u);
    ctx->pc = 0x1A2E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2E3Cu;
    // 0x1a2e40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x1A2E3Cu, 0x1A2E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2E44u;
label_1a2e44:
    // 0x1a2e44: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1a2e44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1a2e48:
    // 0x1a2e48: 0xc0707ac  jal         func_1C1EB0
label_1a2e4c:
    if (ctx->pc == 0x1A2E4Cu) {
        ctx->pc = 0x1A2E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2E48u;
        // 0x1a2e4c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2E50u;
        goto label_1a2e50;
    }
    ctx->pc = 0x1A2E48u;
    SET_GPR_U32(ctx, 31, 0x1A2E50u);
    ctx->pc = 0x1A2E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2E48u;
    // 0x1a2e4c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1EB0u, 0x1A2E48u, 0x1A2E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2E50u;
label_1a2e50:
    // 0x1a2e50: 0xc061a1e  jal         func_186878
label_1a2e54:
    if (ctx->pc == 0x1A2E54u) {
        ctx->pc = 0x1A2E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2E50u;
        // 0x1a2e54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2E58u;
        goto label_1a2e58;
    }
    ctx->pc = 0x1A2E50u;
    SET_GPR_U32(ctx, 31, 0x1A2E58u);
    ctx->pc = 0x1A2E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2E50u;
    // 0x1a2e54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x1A2E50u, 0x1A2E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2E58u;
label_1a2e58:
    // 0x1a2e58: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1a2e58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a2e5c:
    // 0x1a2e5c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a2e5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a2e60:
    // 0x1a2e60: 0xc06cdda  jal         func_1B3768
label_1a2e64:
    if (ctx->pc == 0x1A2E64u) {
        ctx->pc = 0x1A2E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2E60u;
        // 0x1a2e64: 0x8c651004  lw          $a1, 0x1004($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4100)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2E68u;
        goto label_1a2e68;
    }
    ctx->pc = 0x1A2E60u;
    SET_GPR_U32(ctx, 31, 0x1A2E68u);
    ctx->pc = 0x1A2E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2E60u;
    // 0x1a2e64: 0x8c651004  lw          $a1, 0x1004($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4100)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3768u, 0x1A2E60u, 0x1A2E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2E68u;
label_1a2e68:
    // 0x1a2e68: 0xc061a26  jal         func_186898
label_1a2e6c:
    if (ctx->pc == 0x1A2E6Cu) {
        ctx->pc = 0x1A2E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2E68u;
        // 0x1a2e6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2E70u;
        goto label_1a2e70;
    }
    ctx->pc = 0x1A2E68u;
    SET_GPR_U32(ctx, 31, 0x1A2E70u);
    ctx->pc = 0x1A2E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2E68u;
    // 0x1a2e6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186898u, 0x1A2E68u, 0x1A2E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2E70u;
label_1a2e70:
    // 0x1a2e70: 0xc4410138  lwc1        $f1, 0x138($v0)
    ctx->pc = 0x1a2e70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a2e74:
    // 0x1a2e74: 0x3c014090  lui         $at, 0x4090
    ctx->pc = 0x1a2e74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16528 << 16));
label_1a2e78:
    // 0x1a2e78: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a2e78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a2e7c:
    // 0x1a2e7c: 0x0  nop
    ctx->pc = 0x1a2e7cu;
    // NOP
label_1a2e80:
    // 0x1a2e80: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1a2e80u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a2e84:
    // 0x1a2e84: 0x0  nop
    ctx->pc = 0x1a2e84u;
    // NOP
label_1a2e88:
    // 0x1a2e88: 0x45000020  bc1f        . + 4 + (0x20 << 2)
label_1a2e8c:
    if (ctx->pc == 0x1A2E8Cu) {
        ctx->pc = 0x1A2E90u;
        goto label_1a2e90;
    }
    ctx->pc = 0x1A2E88u;
    {
        const bool branch_taken_0x1a2e88 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a2e88) {
            ctx->pc = 0x1A2F0Cu;
            goto label_1a2f0c;
        }
    }
    ctx->pc = 0x1A2E90u;
label_1a2e90:
    // 0x1a2e90: 0xc061a12  jal         func_186848
label_1a2e94:
    if (ctx->pc == 0x1A2E94u) {
        ctx->pc = 0x1A2E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2E90u;
        // 0x1a2e94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2E98u;
        goto label_1a2e98;
    }
    ctx->pc = 0x1A2E90u;
    SET_GPR_U32(ctx, 31, 0x1A2E98u);
    ctx->pc = 0x1A2E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2E90u;
    // 0x1a2e94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x1A2E90u, 0x1A2E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2E98u;
label_1a2e98:
    // 0x1a2e98: 0x8c430394  lw          $v1, 0x394($v0)
    ctx->pc = 0x1a2e98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 916)));
label_1a2e9c:
    // 0x1a2e9c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a2e9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a2ea0:
    // 0x1a2ea0: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x1a2ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_1a2ea4:
    // 0x1a2ea4: 0x40f809  jalr        $v0
label_1a2ea8:
    if (ctx->pc == 0x1A2EA8u) {
        ctx->pc = 0x1A2EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2EA4u;
        // 0x1a2ea8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2EACu;
        goto label_1a2eac;
    }
    ctx->pc = 0x1A2EA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A2EACu);
        ctx->pc = 0x1A2EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2EA4u;
        // 0x1a2ea8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2EA4u, 0x1A2EACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A2EACu;
label_1a2eac:
    // 0x1a2eac: 0xc068f6e  jal         func_1A3DB8
label_1a2eb0:
    if (ctx->pc == 0x1A2EB0u) {
        ctx->pc = 0x1A2EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2EACu;
        // 0x1a2eb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2EB4u;
        goto label_1a2eb4;
    }
    ctx->pc = 0x1A2EACu;
    SET_GPR_U32(ctx, 31, 0x1A2EB4u);
    ctx->pc = 0x1A2EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2EACu;
    // 0x1a2eb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3DB8u, 0x1A2EACu, 0x1A2EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2EB4u;
label_1a2eb4:
    // 0x1a2eb4: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1a2eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_1a2eb8:
    // 0x1a2eb8: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x1a2eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11008)));
label_1a2ebc:
    // 0x1a2ebc: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_1a2ec0:
    if (ctx->pc == 0x1A2EC0u) {
        ctx->pc = 0x1A2EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2EBCu;
        // 0x1a2ec0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2EC4u;
        goto label_1a2ec4;
    }
    ctx->pc = 0x1A2EBCu;
    {
        const bool branch_taken_0x1a2ebc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1A2EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2EBCu;
        // 0x1a2ec0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2ebc) {
            ctx->pc = 0x1A2ED8u;
            goto label_1a2ed8;
        }
    }
    ctx->pc = 0x1A2EC4u;
label_1a2ec4:
    // 0x1a2ec4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1a2ec4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1a2ec8:
    // 0x1a2ec8: 0x0  nop
    ctx->pc = 0x1a2ec8u;
    // NOP
label_1a2ecc:
    // 0x1a2ecc: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1a2eccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1a2ed0:
    // 0x1a2ed0: 0x10000007  b           . + 4 + (0x7 << 2)
label_1a2ed4:
    if (ctx->pc == 0x1A2ED4u) {
        ctx->pc = 0x1A2ED8u;
        goto label_1a2ed8;
    }
    ctx->pc = 0x1A2ED0u;
    {
        const bool branch_taken_0x1a2ed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2ed0) {
            ctx->pc = 0x1A2EF0u;
            goto label_1a2ef0;
        }
    }
    ctx->pc = 0x1A2ED8u;
label_1a2ed8:
    // 0x1a2ed8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1a2ed8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1a2edc:
    // 0x1a2edc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1a2edcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1a2ee0:
    // 0x1a2ee0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1a2ee0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1a2ee4:
    // 0x1a2ee4: 0x0  nop
    ctx->pc = 0x1a2ee4u;
    // NOP
label_1a2ee8:
    // 0x1a2ee8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1a2ee8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1a2eec:
    // 0x1a2eec: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1a2eecu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_1a2ef0:
    // 0x1a2ef0: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1a2ef0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
label_1a2ef4:
    // 0x1a2ef4: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1a2ef4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_1a2ef8:
    // 0x1a2ef8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a2ef8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a2efc:
    // 0x1a2efc: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x1a2efcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_1a2f00:
    // 0x1a2f00: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1a2f00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a2f04:
    // 0x1a2f04: 0x10000065  b           . + 4 + (0x65 << 2)
label_1a2f08:
    if (ctx->pc == 0x1A2F08u) {
        ctx->pc = 0x1A2F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2F04u;
        // 0x1a2f08: 0x46001002  mul.s       $f0, $f2, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2F0Cu;
        goto label_1a2f0c;
    }
    ctx->pc = 0x1A2F04u;
    {
        const bool branch_taken_0x1a2f04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2F04u;
        // 0x1a2f08: 0x46001002  mul.s       $f0, $f2, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2f04) {
            ctx->pc = 0x1A309Cu;
            goto label_1a309c;
        }
    }
    ctx->pc = 0x1A2F0Cu;
label_1a2f0c:
    // 0x1a2f0c: 0x3c013fe6  lui         $at, 0x3FE6
    ctx->pc = 0x1a2f0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16358 << 16));
label_1a2f10:
    // 0x1a2f10: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x1a2f10u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_1a2f14:
    // 0x1a2f14: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a2f14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a2f18:
    // 0x1a2f18: 0x0  nop
    ctx->pc = 0x1a2f18u;
    // NOP
label_1a2f1c:
    // 0x1a2f1c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1a2f1cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a2f20:
    // 0x1a2f20: 0x0  nop
    ctx->pc = 0x1a2f20u;
    // NOP
label_1a2f24:
    // 0x1a2f24: 0x45000028  bc1f        . + 4 + (0x28 << 2)
label_1a2f28:
    if (ctx->pc == 0x1A2F28u) {
        ctx->pc = 0x1A2F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2F24u;
        // 0x1a2f28: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2F2Cu;
        goto label_1a2f2c;
    }
    ctx->pc = 0x1A2F24u;
    {
        const bool branch_taken_0x1a2f24 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A2F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2F24u;
        // 0x1a2f28: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2f24) {
            ctx->pc = 0x1A2FC8u;
            goto label_1a2fc8;
        }
    }
    ctx->pc = 0x1A2F2Cu;
label_1a2f2c:
    // 0x1a2f2c: 0xc061a12  jal         func_186848
label_1a2f30:
    if (ctx->pc == 0x1A2F30u) {
        ctx->pc = 0x1A2F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2F2Cu;
        // 0x1a2f30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2F34u;
        goto label_1a2f34;
    }
    ctx->pc = 0x1A2F2Cu;
    SET_GPR_U32(ctx, 31, 0x1A2F34u);
    ctx->pc = 0x1A2F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2F2Cu;
    // 0x1a2f30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x1A2F2Cu, 0x1A2F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2F34u;
label_1a2f34:
    // 0x1a2f34: 0x8c430394  lw          $v1, 0x394($v0)
    ctx->pc = 0x1a2f34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 916)));
label_1a2f38:
    // 0x1a2f38: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a2f38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a2f3c:
    // 0x1a2f3c: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x1a2f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_1a2f40:
    // 0x1a2f40: 0x40f809  jalr        $v0
label_1a2f44:
    if (ctx->pc == 0x1A2F44u) {
        ctx->pc = 0x1A2F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2F40u;
        // 0x1a2f44: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2F48u;
        goto label_1a2f48;
    }
    ctx->pc = 0x1A2F40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A2F48u);
        ctx->pc = 0x1A2F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2F40u;
        // 0x1a2f44: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2F40u, 0x1A2F48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A2F48u;
label_1a2f48:
    // 0x1a2f48: 0x3c030044  lui         $v1, 0x44
    ctx->pc = 0x1a2f48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)68 << 16));
label_1a2f4c:
    // 0x1a2f4c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1a2f4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1a2f50:
    // 0x1a2f50: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1a2f50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a2f54:
    // 0x1a2f54: 0x2462fe90  addiu       $v0, $v1, -0x170
    ctx->pc = 0x1a2f54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966928));
label_1a2f58:
    // 0x1a2f58: 0x9c66fe90  lwu         $a2, -0x170($v1)
    ctx->pc = 0x1a2f58u;
    SET_GPR_ZE32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 3), 4294966928)));
label_1a2f5c:
    // 0x1a2f5c: 0x9c450004  lwu         $a1, 0x4($v0)
    ctx->pc = 0x1a2f5cu;
    SET_GPR_ZE32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1a2f60:
    // 0x1a2f60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a2f60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a2f64:
    // 0x1a2f64: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x1a2f64u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
label_1a2f68:
    // 0x1a2f68: 0xc06924e  jal         func_1A4938
label_1a2f6c:
    if (ctx->pc == 0x1A2F6Cu) {
        ctx->pc = 0x1A2F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2F68u;
        // 0x1a2f6c: 0xa62825  or          $a1, $a1, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2F70u;
        goto label_1a2f70;
    }
    ctx->pc = 0x1A2F68u;
    SET_GPR_U32(ctx, 31, 0x1A2F70u);
    ctx->pc = 0x1A2F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2F68u;
    // 0x1a2f6c: 0xa62825  or          $a1, $a1, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4938u, 0x1A2F68u, 0x1A2F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2F70u;
label_1a2f70:
    // 0x1a2f70: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1a2f70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_1a2f74:
    // 0x1a2f74: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x1a2f74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11008)));
label_1a2f78:
    // 0x1a2f78: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_1a2f7c:
    if (ctx->pc == 0x1A2F7Cu) {
        ctx->pc = 0x1A2F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2F78u;
        // 0x1a2f7c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2F80u;
        goto label_1a2f80;
    }
    ctx->pc = 0x1A2F78u;
    {
        const bool branch_taken_0x1a2f78 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1A2F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2F78u;
        // 0x1a2f7c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2f78) {
            ctx->pc = 0x1A2F94u;
            goto label_1a2f94;
        }
    }
    ctx->pc = 0x1A2F80u;
label_1a2f80:
    // 0x1a2f80: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a2f80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a2f84:
    // 0x1a2f84: 0x0  nop
    ctx->pc = 0x1a2f84u;
    // NOP
label_1a2f88:
    // 0x1a2f88: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1a2f88u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1a2f8c:
    // 0x1a2f8c: 0x10000007  b           . + 4 + (0x7 << 2)
label_1a2f90:
    if (ctx->pc == 0x1A2F90u) {
        ctx->pc = 0x1A2F94u;
        goto label_1a2f94;
    }
    ctx->pc = 0x1A2F8Cu;
    {
        const bool branch_taken_0x1a2f8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2f8c) {
            ctx->pc = 0x1A2FACu;
            goto label_1a2fac;
        }
    }
    ctx->pc = 0x1A2F94u;
label_1a2f94:
    // 0x1a2f94: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1a2f94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1a2f98:
    // 0x1a2f98: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1a2f98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1a2f9c:
    // 0x1a2f9c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1a2f9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a2fa0:
    // 0x1a2fa0: 0x0  nop
    ctx->pc = 0x1a2fa0u;
    // NOP
label_1a2fa4:
    // 0x1a2fa4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1a2fa4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1a2fa8:
    // 0x1a2fa8: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1a2fa8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1a2fac:
    // 0x1a2fac: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1a2facu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
label_1a2fb0:
    // 0x1a2fb0: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1a2fb0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_1a2fb4:
    // 0x1a2fb4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a2fb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a2fb8:
    // 0x1a2fb8: 0x0  nop
    ctx->pc = 0x1a2fb8u;
    // NOP
label_1a2fbc:
    // 0x1a2fbc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1a2fbcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1a2fc0:
    // 0x1a2fc0: 0x1000007c  b           . + 4 + (0x7C << 2)
label_1a2fc4:
    if (ctx->pc == 0x1A2FC4u) {
        ctx->pc = 0x1A2FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2FC0u;
        // 0x1a2fc4: 0xe600004c  swc1        $f0, 0x4C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 76), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2FC8u;
        goto label_1a2fc8;
    }
    ctx->pc = 0x1A2FC0u;
    {
        const bool branch_taken_0x1a2fc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2FC0u;
        // 0x1a2fc4: 0xe600004c  swc1        $f0, 0x4C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 76), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2fc0) {
            ctx->pc = 0x1A31B4u;
            goto label_1a31b4;
        }
    }
    ctx->pc = 0x1A2FC8u;
label_1a2fc8:
    // 0x1a2fc8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1a2fc8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a2fcc:
    // 0x1a2fcc: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x1a2fccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11008)));
label_1a2fd0:
    // 0x1a2fd0: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_1a2fd4:
    if (ctx->pc == 0x1A2FD4u) {
        ctx->pc = 0x1A2FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2FD0u;
        // 0x1a2fd4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A2FD8u;
        goto label_1a2fd8;
    }
    ctx->pc = 0x1A2FD0u;
    {
        const bool branch_taken_0x1a2fd0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1A2FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2FD0u;
        // 0x1a2fd4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2fd0) {
            ctx->pc = 0x1A2FECu;
            goto label_1a2fec;
        }
    }
    ctx->pc = 0x1A2FD8u;
label_1a2fd8:
    // 0x1a2fd8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1a2fd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1a2fdc:
    // 0x1a2fdc: 0x0  nop
    ctx->pc = 0x1a2fdcu;
    // NOP
label_1a2fe0:
    // 0x1a2fe0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1a2fe0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1a2fe4:
    // 0x1a2fe4: 0x10000007  b           . + 4 + (0x7 << 2)
label_1a2fe8:
    if (ctx->pc == 0x1A2FE8u) {
        ctx->pc = 0x1A2FECu;
        goto label_1a2fec;
    }
    ctx->pc = 0x1A2FE4u;
    {
        const bool branch_taken_0x1a2fe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2fe4) {
            ctx->pc = 0x1A3004u;
            goto label_1a3004;
        }
    }
    ctx->pc = 0x1A2FECu;
label_1a2fec:
    // 0x1a2fec: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1a2fecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1a2ff0:
    // 0x1a2ff0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1a2ff0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1a2ff4:
    // 0x1a2ff4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1a2ff4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1a2ff8:
    // 0x1a2ff8: 0x0  nop
    ctx->pc = 0x1a2ff8u;
    // NOP
label_1a2ffc:
    // 0x1a2ffc: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1a2ffcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1a3000:
    // 0x1a3000: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1a3000u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_1a3004:
    // 0x1a3004: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1a3004u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
label_1a3008:
    // 0x1a3008: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1a3008u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_1a300c:
    // 0x1a300c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a300cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a3010:
    // 0x1a3010: 0xc6010048  lwc1        $f1, 0x48($s0)
    ctx->pc = 0x1a3010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a3014:
    // 0x1a3014: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1a3014u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_1a3018:
    // 0x1a3018: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1a3018u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a301c:
    // 0x1a301c: 0x0  nop
    ctx->pc = 0x1a301cu;
    // NOP
label_1a3020:
    // 0x1a3020: 0x45000021  bc1f        . + 4 + (0x21 << 2)
label_1a3024:
    if (ctx->pc == 0x1A3024u) {
        ctx->pc = 0x1A3028u;
        goto label_1a3028;
    }
    ctx->pc = 0x1A3020u;
    {
        const bool branch_taken_0x1a3020 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a3020) {
            ctx->pc = 0x1A30A8u;
            goto label_1a30a8;
        }
    }
    ctx->pc = 0x1A3028u;
label_1a3028:
    // 0x1a3028: 0xc061a12  jal         func_186848
label_1a302c:
    if (ctx->pc == 0x1A302Cu) {
        ctx->pc = 0x1A302Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3028u;
        // 0x1a302c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3030u;
        goto label_1a3030;
    }
    ctx->pc = 0x1A3028u;
    SET_GPR_U32(ctx, 31, 0x1A3030u);
    ctx->pc = 0x1A302Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3028u;
    // 0x1a302c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x1A3028u, 0x1A3030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3030u;
label_1a3030:
    // 0x1a3030: 0x8c430394  lw          $v1, 0x394($v0)
    ctx->pc = 0x1a3030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 916)));
label_1a3034:
    // 0x1a3034: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a3034u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a3038:
    // 0x1a3038: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x1a3038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_1a303c:
    // 0x1a303c: 0x40f809  jalr        $v0
label_1a3040:
    if (ctx->pc == 0x1A3040u) {
        ctx->pc = 0x1A3040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A303Cu;
        // 0x1a3040: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3044u;
        goto label_1a3044;
    }
    ctx->pc = 0x1A303Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A3044u);
        ctx->pc = 0x1A3040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A303Cu;
        // 0x1a3040: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A303Cu, 0x1A3044u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A3044u;
label_1a3044:
    // 0x1a3044: 0xc06928e  jal         func_1A4A38
label_1a3048:
    if (ctx->pc == 0x1A3048u) {
        ctx->pc = 0x1A3048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3044u;
        // 0x1a3048: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A304Cu;
        goto label_1a304c;
    }
    ctx->pc = 0x1A3044u;
    SET_GPR_U32(ctx, 31, 0x1A304Cu);
    ctx->pc = 0x1A3048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3044u;
    // 0x1a3048: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4A38u, 0x1A3044u, 0x1A304Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A304Cu;
label_1a304c:
    // 0x1a304c: 0x8e222b00  lw          $v0, 0x2B00($s1)
    ctx->pc = 0x1a304cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11008)));
label_1a3050:
    // 0x1a3050: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_1a3054:
    if (ctx->pc == 0x1A3054u) {
        ctx->pc = 0x1A3054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3050u;
        // 0x1a3054: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3058u;
        goto label_1a3058;
    }
    ctx->pc = 0x1A3050u;
    {
        const bool branch_taken_0x1a3050 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1A3054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3050u;
        // 0x1a3054: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3050) {
            ctx->pc = 0x1A306Cu;
            goto label_1a306c;
        }
    }
    ctx->pc = 0x1A3058u;
label_1a3058:
    // 0x1a3058: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1a3058u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1a305c:
    // 0x1a305c: 0x0  nop
    ctx->pc = 0x1a305cu;
    // NOP
label_1a3060:
    // 0x1a3060: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1a3060u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1a3064:
    // 0x1a3064: 0x10000007  b           . + 4 + (0x7 << 2)
label_1a3068:
    if (ctx->pc == 0x1A3068u) {
        ctx->pc = 0x1A306Cu;
        goto label_1a306c;
    }
    ctx->pc = 0x1A3064u;
    {
        const bool branch_taken_0x1a3064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a3064) {
            ctx->pc = 0x1A3084u;
            goto label_1a3084;
        }
    }
    ctx->pc = 0x1A306Cu;
label_1a306c:
    // 0x1a306c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1a306cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1a3070:
    // 0x1a3070: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1a3070u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1a3074:
    // 0x1a3074: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1a3074u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1a3078:
    // 0x1a3078: 0x0  nop
    ctx->pc = 0x1a3078u;
    // NOP
label_1a307c:
    // 0x1a307c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1a307cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1a3080:
    // 0x1a3080: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1a3080u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_1a3084:
    // 0x1a3084: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1a3084u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
label_1a3088:
    // 0x1a3088: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1a3088u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_1a308c:
    // 0x1a308c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a308cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a3090:
    // 0x1a3090: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x1a3090u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
label_1a3094:
    // 0x1a3094: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1a3094u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a3098:
    // 0x1a3098: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1a3098u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_1a309c:
    // 0x1a309c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1a309cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1a30a0:
    // 0x1a30a0: 0x10000044  b           . + 4 + (0x44 << 2)
label_1a30a4:
    if (ctx->pc == 0x1A30A4u) {
        ctx->pc = 0x1A30A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A30A0u;
        // 0x1a30a4: 0xe600004c  swc1        $f0, 0x4C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 76), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A30A8u;
        goto label_1a30a8;
    }
    ctx->pc = 0x1A30A0u;
    {
        const bool branch_taken_0x1a30a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A30A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A30A0u;
        // 0x1a30a4: 0xe600004c  swc1        $f0, 0x4C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 76), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a30a0) {
            ctx->pc = 0x1A31B4u;
            goto label_1a31b4;
        }
    }
    ctx->pc = 0x1A30A8u;
label_1a30a8:
    // 0x1a30a8: 0xc061a12  jal         func_186848
label_1a30ac:
    if (ctx->pc == 0x1A30ACu) {
        ctx->pc = 0x1A30ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A30A8u;
        // 0x1a30ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A30B0u;
        goto label_1a30b0;
    }
    ctx->pc = 0x1A30A8u;
    SET_GPR_U32(ctx, 31, 0x1A30B0u);
    ctx->pc = 0x1A30ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A30A8u;
    // 0x1a30ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x1A30A8u, 0x1A30B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A30B0u;
label_1a30b0:
    // 0x1a30b0: 0x8c4304d0  lw          $v1, 0x4D0($v0)
    ctx->pc = 0x1a30b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1232)));
label_1a30b4:
    // 0x1a30b4: 0x54600019  bnel        $v1, $zero, . + 4 + (0x19 << 2)
label_1a30b8:
    if (ctx->pc == 0x1A30B8u) {
        ctx->pc = 0x1A30B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A30B4u;
        // 0x1a30b8: 0x8e02005c  lw          $v0, 0x5C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A30BCu;
        goto label_1a30bc;
    }
    ctx->pc = 0x1A30B4u;
    {
        const bool branch_taken_0x1a30b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a30b4) {
            ctx->pc = 0x1A30B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A30B4u;
            // 0x1a30b8: 0x8e02005c  lw          $v0, 0x5C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A311Cu;
            goto label_1a311c;
        }
    }
    ctx->pc = 0x1A30BCu;
label_1a30bc:
    // 0x1a30bc: 0x8e222b00  lw          $v0, 0x2B00($s1)
    ctx->pc = 0x1a30bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11008)));
label_1a30c0:
    // 0x1a30c0: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_1a30c4:
    if (ctx->pc == 0x1A30C4u) {
        ctx->pc = 0x1A30C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A30C0u;
        // 0x1a30c4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A30C8u;
        goto label_1a30c8;
    }
    ctx->pc = 0x1A30C0u;
    {
        const bool branch_taken_0x1a30c0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1A30C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A30C0u;
        // 0x1a30c4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a30c0) {
            ctx->pc = 0x1A30DCu;
            goto label_1a30dc;
        }
    }
    ctx->pc = 0x1A30C8u;
label_1a30c8:
    // 0x1a30c8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1a30c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1a30cc:
    // 0x1a30cc: 0x0  nop
    ctx->pc = 0x1a30ccu;
    // NOP
label_1a30d0:
    // 0x1a30d0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1a30d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1a30d4:
    // 0x1a30d4: 0x10000007  b           . + 4 + (0x7 << 2)
label_1a30d8:
    if (ctx->pc == 0x1A30D8u) {
        ctx->pc = 0x1A30DCu;
        goto label_1a30dc;
    }
    ctx->pc = 0x1A30D4u;
    {
        const bool branch_taken_0x1a30d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a30d4) {
            ctx->pc = 0x1A30F4u;
            goto label_1a30f4;
        }
    }
    ctx->pc = 0x1A30DCu;
label_1a30dc:
    // 0x1a30dc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1a30dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1a30e0:
    // 0x1a30e0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1a30e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1a30e4:
    // 0x1a30e4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1a30e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1a30e8:
    // 0x1a30e8: 0x0  nop
    ctx->pc = 0x1a30e8u;
    // NOP
label_1a30ec:
    // 0x1a30ec: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1a30ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1a30f0:
    // 0x1a30f0: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1a30f0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_1a30f4:
    // 0x1a30f4: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1a30f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
label_1a30f8:
    // 0x1a30f8: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1a30f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_1a30fc:
    // 0x1a30fc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a30fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a3100:
    // 0x1a3100: 0xc6010050  lwc1        $f1, 0x50($s0)
    ctx->pc = 0x1a3100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a3104:
    // 0x1a3104: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1a3104u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_1a3108:
    // 0x1a3108: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1a3108u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a310c:
    // 0x1a310c: 0x0  nop
    ctx->pc = 0x1a310cu;
    // NOP
label_1a3110:
    // 0x1a3110: 0x45020029  bc1fl       . + 4 + (0x29 << 2)
label_1a3114:
    if (ctx->pc == 0x1A3114u) {
        ctx->pc = 0x1A3114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3110u;
        // 0x1a3114: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3118u;
        goto label_1a3118;
    }
    ctx->pc = 0x1A3110u;
    {
        const bool branch_taken_0x1a3110 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a3110) {
            ctx->pc = 0x1A3114u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A3110u;
            // 0x1a3114: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A31B8u;
            goto label_1a31b8;
        }
    }
    ctx->pc = 0x1A3118u;
label_1a3118:
    // 0x1a3118: 0x8e02005c  lw          $v0, 0x5C($s0)
    ctx->pc = 0x1a3118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
label_1a311c:
    // 0x1a311c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1a3120:
    if (ctx->pc == 0x1A3120u) {
        ctx->pc = 0x1A3120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A311Cu;
        // 0x1a3120: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3124u;
        goto label_1a3124;
    }
    ctx->pc = 0x1A311Cu;
    {
        const bool branch_taken_0x1a311c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A311Cu;
        // 0x1a3120: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a311c) {
            ctx->pc = 0x1A312Cu;
            goto label_1a312c;
        }
    }
    ctx->pc = 0x1A3124u;
label_1a3124:
    // 0x1a3124: 0x10000002  b           . + 4 + (0x2 << 2)
label_1a3128:
    if (ctx->pc == 0x1A3128u) {
        ctx->pc = 0x1A3128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3124u;
        // 0x1a3128: 0xae00005c  sw          $zero, 0x5C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A312Cu;
        goto label_1a312c;
    }
    ctx->pc = 0x1A3124u;
    {
        const bool branch_taken_0x1a3124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3124u;
        // 0x1a3128: 0xae00005c  sw          $zero, 0x5C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3124) {
            ctx->pc = 0x1A3130u;
            goto label_1a3130;
        }
    }
    ctx->pc = 0x1A312Cu;
label_1a312c:
    // 0x1a312c: 0xae02005c  sw          $v0, 0x5C($s0)
    ctx->pc = 0x1a312cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 2));
label_1a3130:
    // 0x1a3130: 0xc061a12  jal         func_186848
label_1a3134:
    if (ctx->pc == 0x1A3134u) {
        ctx->pc = 0x1A3134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3130u;
        // 0x1a3134: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3138u;
        goto label_1a3138;
    }
    ctx->pc = 0x1A3130u;
    SET_GPR_U32(ctx, 31, 0x1A3138u);
    ctx->pc = 0x1A3134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3130u;
    // 0x1a3134: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x1A3130u, 0x1A3138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3138u;
label_1a3138:
    // 0x1a3138: 0x8c430394  lw          $v1, 0x394($v0)
    ctx->pc = 0x1a3138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 916)));
label_1a313c:
    // 0x1a313c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a313cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a3140:
    // 0x1a3140: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x1a3140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_1a3144:
    // 0x1a3144: 0x40f809  jalr        $v0
label_1a3148:
    if (ctx->pc == 0x1A3148u) {
        ctx->pc = 0x1A3148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3144u;
        // 0x1a3148: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A314Cu;
        goto label_1a314c;
    }
    ctx->pc = 0x1A3144u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A314Cu);
        ctx->pc = 0x1A3148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3144u;
        // 0x1a3148: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A3144u, 0x1A314Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A314Cu;
label_1a314c:
    // 0x1a314c: 0x8e222b00  lw          $v0, 0x2B00($s1)
    ctx->pc = 0x1a314cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11008)));
label_1a3150:
    // 0x1a3150: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_1a3154:
    if (ctx->pc == 0x1A3154u) {
        ctx->pc = 0x1A3154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3150u;
        // 0x1a3154: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A3158u;
        goto label_1a3158;
    }
    ctx->pc = 0x1A3150u;
    {
        const bool branch_taken_0x1a3150 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1A3154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3150u;
        // 0x1a3154: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3150) {
            ctx->pc = 0x1A316Cu;
            goto label_1a316c;
        }
    }
    ctx->pc = 0x1A3158u;
label_1a3158:
    // 0x1a3158: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a3158u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a315c:
    // 0x1a315c: 0x0  nop
    ctx->pc = 0x1a315cu;
    // NOP
label_1a3160:
    // 0x1a3160: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a3160u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1a3164:
    // 0x1a3164: 0x10000007  b           . + 4 + (0x7 << 2)
label_1a3168:
    if (ctx->pc == 0x1A3168u) {
        ctx->pc = 0x1A316Cu;
        goto label_1a316c;
    }
    ctx->pc = 0x1A3164u;
    {
        const bool branch_taken_0x1a3164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a3164) {
            ctx->pc = 0x1A3184u;
            goto label_1a3184;
        }
    }
    ctx->pc = 0x1A316Cu;
label_1a316c:
    // 0x1a316c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1a316cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1a3170:
    // 0x1a3170: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1a3170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1a3174:
    // 0x1a3174: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a3174u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a3178:
    // 0x1a3178: 0x0  nop
    ctx->pc = 0x1a3178u;
    // NOP
label_1a317c:
    // 0x1a317c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a317cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1a3180:
    // 0x1a3180: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1a3180u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1a3184:
    // 0x1a3184: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1a3184u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
label_1a3188:
    // 0x1a3188: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1a3188u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_1a318c:
    // 0x1a318c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1a318cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1a3190:
    // 0x1a3190: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x1a3190u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_1a3194:
    // 0x1a3194: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1a3194u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1a3198:
    // 0x1a3198: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x1a3198u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
label_1a319c:
    // 0x1a319c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1a319cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1a31a0:
    // 0x1a31a0: 0xc0b12b0  jal         func_2C4AC0
label_1a31a4:
    if (ctx->pc == 0x1A31A4u) {
        ctx->pc = 0x1A31A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A31A0u;
        // 0x1a31a4: 0x46140502  mul.s       $f20, $f0, $f20 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A31A8u;
        goto label_1a31a8;
    }
    ctx->pc = 0x1A31A0u;
    SET_GPR_U32(ctx, 31, 0x1A31A8u);
    ctx->pc = 0x1A31A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A31A0u;
    // 0x1a31a4: 0x46140502  mul.s       $f20, $f0, $f20 (Delay Slot)
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4AC0u, 0x1A31A0u, 0x1A31A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A31A8u;
label_1a31a8:
    // 0x1a31a8: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x1a31a8u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_1a31ac:
    // 0x1a31ac: 0xe6140048  swc1        $f20, 0x48($s0)
    ctx->pc = 0x1a31acu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
label_1a31b0:
    // 0x1a31b0: 0xe6140050  swc1        $f20, 0x50($s0)
    ctx->pc = 0x1a31b0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
label_1a31b4:
    // 0x1a31b4: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x1a31b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1a31b8:
    // 0x1a31b8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a31b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a31bc:
    // 0x1a31bc: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x1a31bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_1a31c0:
    // 0x1a31c0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1a31c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1a31c4:
    // 0x1a31c4: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x1a31c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1a31c8:
    // 0x1a31c8: 0x3e00008  jr          $ra
label_1a31cc:
    if (ctx->pc == 0x1A31CCu) {
        ctx->pc = 0x1A31CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A31C8u;
        // 0x1a31cc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A31D0u;
        goto label_fallthrough_0x1a31c8;
    }
    ctx->pc = 0x1A31C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A31CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A31C8u;
        // 0x1a31cc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A31C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1a31c8:
    ctx->pc = 0x1A31D0u;
}
