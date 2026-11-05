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

// Function: sub_002C3D98
// Address: 0x2c3d98 - 0x2c3f38
void sub_002C3D98_0x2c3d98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C3D98_0x2c3d98");
#endif

    switch (ctx->pc) {
        case 0x2c3d98u: goto label_2c3d98;
        case 0x2c3d9cu: goto label_2c3d9c;
        case 0x2c3da0u: goto label_2c3da0;
        case 0x2c3da4u: goto label_2c3da4;
        case 0x2c3da8u: goto label_2c3da8;
        case 0x2c3dacu: goto label_2c3dac;
        case 0x2c3db0u: goto label_2c3db0;
        case 0x2c3db4u: goto label_2c3db4;
        case 0x2c3db8u: goto label_2c3db8;
        case 0x2c3dbcu: goto label_2c3dbc;
        case 0x2c3dc0u: goto label_2c3dc0;
        case 0x2c3dc4u: goto label_2c3dc4;
        case 0x2c3dc8u: goto label_2c3dc8;
        case 0x2c3dccu: goto label_2c3dcc;
        case 0x2c3dd0u: goto label_2c3dd0;
        case 0x2c3dd4u: goto label_2c3dd4;
        case 0x2c3dd8u: goto label_2c3dd8;
        case 0x2c3ddcu: goto label_2c3ddc;
        case 0x2c3de0u: goto label_2c3de0;
        case 0x2c3de4u: goto label_2c3de4;
        case 0x2c3de8u: goto label_2c3de8;
        case 0x2c3decu: goto label_2c3dec;
        case 0x2c3df0u: goto label_2c3df0;
        case 0x2c3df4u: goto label_2c3df4;
        case 0x2c3df8u: goto label_2c3df8;
        case 0x2c3dfcu: goto label_2c3dfc;
        case 0x2c3e00u: goto label_2c3e00;
        case 0x2c3e04u: goto label_2c3e04;
        case 0x2c3e08u: goto label_2c3e08;
        case 0x2c3e0cu: goto label_2c3e0c;
        case 0x2c3e10u: goto label_2c3e10;
        case 0x2c3e14u: goto label_2c3e14;
        case 0x2c3e18u: goto label_2c3e18;
        case 0x2c3e1cu: goto label_2c3e1c;
        case 0x2c3e20u: goto label_2c3e20;
        case 0x2c3e24u: goto label_2c3e24;
        case 0x2c3e28u: goto label_2c3e28;
        case 0x2c3e2cu: goto label_2c3e2c;
        case 0x2c3e30u: goto label_2c3e30;
        case 0x2c3e34u: goto label_2c3e34;
        case 0x2c3e38u: goto label_2c3e38;
        case 0x2c3e3cu: goto label_2c3e3c;
        case 0x2c3e40u: goto label_2c3e40;
        case 0x2c3e44u: goto label_2c3e44;
        case 0x2c3e48u: goto label_2c3e48;
        case 0x2c3e4cu: goto label_2c3e4c;
        case 0x2c3e50u: goto label_2c3e50;
        case 0x2c3e54u: goto label_2c3e54;
        case 0x2c3e58u: goto label_2c3e58;
        case 0x2c3e5cu: goto label_2c3e5c;
        case 0x2c3e60u: goto label_2c3e60;
        case 0x2c3e64u: goto label_2c3e64;
        case 0x2c3e68u: goto label_2c3e68;
        case 0x2c3e6cu: goto label_2c3e6c;
        case 0x2c3e70u: goto label_2c3e70;
        case 0x2c3e74u: goto label_2c3e74;
        case 0x2c3e78u: goto label_2c3e78;
        case 0x2c3e7cu: goto label_2c3e7c;
        case 0x2c3e80u: goto label_2c3e80;
        case 0x2c3e84u: goto label_2c3e84;
        case 0x2c3e88u: goto label_2c3e88;
        case 0x2c3e8cu: goto label_2c3e8c;
        case 0x2c3e90u: goto label_2c3e90;
        case 0x2c3e94u: goto label_2c3e94;
        case 0x2c3e98u: goto label_2c3e98;
        case 0x2c3e9cu: goto label_2c3e9c;
        case 0x2c3ea0u: goto label_2c3ea0;
        case 0x2c3ea4u: goto label_2c3ea4;
        case 0x2c3ea8u: goto label_2c3ea8;
        case 0x2c3eacu: goto label_2c3eac;
        case 0x2c3eb0u: goto label_2c3eb0;
        case 0x2c3eb4u: goto label_2c3eb4;
        case 0x2c3eb8u: goto label_2c3eb8;
        case 0x2c3ebcu: goto label_2c3ebc;
        case 0x2c3ec0u: goto label_2c3ec0;
        case 0x2c3ec4u: goto label_2c3ec4;
        case 0x2c3ec8u: goto label_2c3ec8;
        case 0x2c3eccu: goto label_2c3ecc;
        case 0x2c3ed0u: goto label_2c3ed0;
        case 0x2c3ed4u: goto label_2c3ed4;
        case 0x2c3ed8u: goto label_2c3ed8;
        case 0x2c3edcu: goto label_2c3edc;
        case 0x2c3ee0u: goto label_2c3ee0;
        case 0x2c3ee4u: goto label_2c3ee4;
        case 0x2c3ee8u: goto label_2c3ee8;
        case 0x2c3eecu: goto label_2c3eec;
        case 0x2c3ef0u: goto label_2c3ef0;
        case 0x2c3ef4u: goto label_2c3ef4;
        case 0x2c3ef8u: goto label_2c3ef8;
        case 0x2c3efcu: goto label_2c3efc;
        case 0x2c3f00u: goto label_2c3f00;
        case 0x2c3f04u: goto label_2c3f04;
        case 0x2c3f08u: goto label_2c3f08;
        case 0x2c3f0cu: goto label_2c3f0c;
        case 0x2c3f10u: goto label_2c3f10;
        case 0x2c3f14u: goto label_2c3f14;
        case 0x2c3f18u: goto label_2c3f18;
        case 0x2c3f1cu: goto label_2c3f1c;
        case 0x2c3f20u: goto label_2c3f20;
        case 0x2c3f24u: goto label_2c3f24;
        case 0x2c3f28u: goto label_2c3f28;
        case 0x2c3f2cu: goto label_2c3f2c;
        case 0x2c3f30u: goto label_2c3f30;
        case 0x2c3f34u: goto label_2c3f34;
        default: break;
    }

    ctx->pc = 0x2c3d98u;

label_2c3d98:
    // 0x2c3d98: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c3d98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2c3d9c:
    // 0x2c3d9c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2c3d9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2c3da0:
    // 0x2c3da0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2c3da0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_2c3da4:
    // 0x2c3da4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c3da4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c3da8:
    // 0x2c3da8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2c3da8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2c3dac:
    // 0x2c3dac: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2c3dacu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2c3db0:
    // 0x2c3db0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2c3db0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_2c3db4:
    // 0x2c3db4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2c3db4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2c3db8:
    // 0x2c3db8: 0xae330008  sw          $s3, 0x8($s1)
    ctx->pc = 0x2c3db8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 19));
label_2c3dbc:
    // 0x2c3dbc: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x2c3dbcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_2c3dc0:
    // 0x2c3dc0: 0xfa210010  sqc2        $vf1, 0x10($s1)
    ctx->pc = 0x2c3dc0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), _mm_castps_si128(ctx->vu0_vf[1]));
label_2c3dc4:
    // 0x2c3dc4: 0x24c20010  addiu       $v0, $a2, 0x10
    ctx->pc = 0x2c3dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
label_2c3dc8:
    // 0x2c3dc8: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2c3dc8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2c3dcc:
    // 0x2c3dcc: 0xfa210020  sqc2        $vf1, 0x20($s1)
    ctx->pc = 0x2c3dccu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), _mm_castps_si128(ctx->vu0_vf[1]));
label_2c3dd0:
    // 0x2c3dd0: 0x24c30020  addiu       $v1, $a2, 0x20
    ctx->pc = 0x2c3dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
label_2c3dd4:
    // 0x2c3dd4: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2c3dd4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2c3dd8:
    // 0x2c3dd8: 0xfa210030  sqc2        $vf1, 0x30($s1)
    ctx->pc = 0x2c3dd8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), _mm_castps_si128(ctx->vu0_vf[1]));
label_2c3ddc:
    // 0x2c3ddc: 0x24c60030  addiu       $a2, $a2, 0x30
    ctx->pc = 0x2c3ddcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
label_2c3de0:
    // 0x2c3de0: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x2c3de0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_2c3de4:
    // 0x2c3de4: 0xfa210040  sqc2        $vf1, 0x40($s1)
    ctx->pc = 0x2c3de4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 64), _mm_castps_si128(ctx->vu0_vf[1]));
label_2c3de8:
    // 0x2c3de8: 0xae200068  sw          $zero, 0x68($s1)
    ctx->pc = 0x2c3de8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 0));
label_2c3dec:
    // 0x2c3dec: 0x3c04bfff  lui         $a0, 0xBFFF
    ctx->pc = 0x2c3decu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49151 << 16));
label_2c3df0:
    // 0x2c3df0: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x2c3df0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_2c3df4:
    // 0x2c3df4: 0x420b8  dsll        $a0, $a0, 2
    ctx->pc = 0x2c3df4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 2);
label_2c3df8:
    // 0x2c3df8: 0x34840003  ori         $a0, $a0, 0x3
    ctx->pc = 0x2c3df8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)3);
label_2c3dfc:
    // 0x2c3dfc: 0x3c05bfff  lui         $a1, 0xBFFF
    ctx->pc = 0x2c3dfcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49151 << 16));
label_2c3e00:
    // 0x2c3e00: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x2c3e00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
label_2c3e04:
    // 0x2c3e04: 0x528f8  dsll        $a1, $a1, 3
    ctx->pc = 0x2c3e04u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 3);
label_2c3e08:
    // 0x2c3e08: 0x34a50007  ori         $a1, $a1, 0x7
    ctx->pc = 0x2c3e08u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)7);
label_2c3e0c:
    // 0x2c3e0c: 0x240603e8  addiu       $a2, $zero, 0x3E8
    ctx->pc = 0x2c3e0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
label_2c3e10:
    // 0x2c3e10: 0xde220068  ld          $v0, 0x68($s1)
    ctx->pc = 0x2c3e10u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 104)));
label_2c3e14:
    // 0x2c3e14: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c3e14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c3e18:
    // 0x2c3e18: 0xae27000c  sw          $a3, 0xC($s1)
    ctx->pc = 0x2c3e18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 7));
label_2c3e1c:
    // 0x2c3e1c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2c3e1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_2c3e20:
    // 0x2c3e20: 0xa2230050  sb          $v1, 0x50($s1)
    ctx->pc = 0x2c3e20u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 80), (uint8_t)GPR_U32(ctx, 3));
label_2c3e24:
    // 0x2c3e24: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x2c3e24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
label_2c3e28:
    // 0x2c3e28: 0xa6260064  sh          $a2, 0x64($s1)
    ctx->pc = 0x2c3e28u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 100), (uint16_t)GPR_U32(ctx, 6));
label_2c3e2c:
    // 0x2c3e2c: 0xfe220068  sd          $v0, 0x68($s1)
    ctx->pc = 0x2c3e2cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 104), GPR_U64(ctx, 2));
label_2c3e30:
    // 0x2c3e30: 0xae200058  sw          $zero, 0x58($s1)
    ctx->pc = 0x2c3e30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 0));
label_2c3e34:
    // 0x2c3e34: 0xa2200051  sb          $zero, 0x51($s1)
    ctx->pc = 0x2c3e34u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 81), (uint8_t)GPR_U32(ctx, 0));
label_2c3e38:
    // 0x2c3e38: 0xae200054  sw          $zero, 0x54($s1)
    ctx->pc = 0x2c3e38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 0));
label_2c3e3c:
    // 0x2c3e3c: 0xa6200060  sh          $zero, 0x60($s1)
    ctx->pc = 0x2c3e3cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 96), (uint16_t)GPR_U32(ctx, 0));
label_2c3e40:
    // 0x2c3e40: 0xa6260062  sh          $a2, 0x62($s1)
    ctx->pc = 0x2c3e40u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 98), (uint16_t)GPR_U32(ctx, 6));
label_2c3e44:
    // 0x2c3e44: 0xae200070  sw          $zero, 0x70($s1)
    ctx->pc = 0x2c3e44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 0));
label_2c3e48:
    // 0x2c3e48: 0xae200074  sw          $zero, 0x74($s1)
    ctx->pc = 0x2c3e48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 0));
label_2c3e4c:
    // 0x2c3e4c: 0xae200078  sw          $zero, 0x78($s1)
    ctx->pc = 0x2c3e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 0));
label_2c3e50:
    // 0x2c3e50: 0xae200080  sw          $zero, 0x80($s1)
    ctx->pc = 0x2c3e50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 0));
label_2c3e54:
    // 0x2c3e54: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x2c3e54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_2c3e58:
    // 0x2c3e58: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
label_2c3e5c:
    if (ctx->pc == 0x2C3E5Cu) {
        ctx->pc = 0x2C3E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3E58u;
        // 0x2c3e5c: 0x82640018  lb          $a0, 0x18($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3E60u;
        goto label_2c3e60;
    }
    ctx->pc = 0x2C3E58u;
    {
        const bool branch_taken_0x2c3e58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c3e58) {
            ctx->pc = 0x2C3E5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C3E58u;
            // 0x2c3e5c: 0x82640018  lb          $a0, 0x18($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C3E94u;
            goto label_2c3e94;
        }
    }
    ctx->pc = 0x2C3E60u;
label_2c3e60:
    // 0x2c3e60: 0xc0f5240  jal         func_3D4900
label_2c3e64:
    if (ctx->pc == 0x2C3E64u) {
        ctx->pc = 0x2C3E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3E60u;
        // 0x2c3e64: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3E68u;
        goto label_2c3e68;
    }
    ctx->pc = 0x2C3E60u;
    SET_GPR_U32(ctx, 31, 0x2C3E68u);
    ctx->pc = 0x2C3E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3E60u;
    // 0x2c3e64: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x2C3E60u, 0x2C3E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3E68u;
label_2c3e68:
    // 0x2c3e68: 0xc0b0d44  jal         func_2C3510
label_2c3e6c:
    if (ctx->pc == 0x2C3E6Cu) {
        ctx->pc = 0x2C3E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3E68u;
        // 0x2c3e6c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3E70u;
        goto label_2c3e70;
    }
    ctx->pc = 0x2C3E68u;
    SET_GPR_U32(ctx, 31, 0x2C3E70u);
    ctx->pc = 0x2C3E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3E68u;
    // 0x2c3e6c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3510u, 0x2C3E68u, 0x2C3E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3E70u;
label_2c3e70:
    // 0x2c3e70: 0xae220080  sw          $v0, 0x80($s1)
    ctx->pc = 0x2c3e70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 2));
label_2c3e74:
    // 0x2c3e74: 0x8e630014  lw          $v1, 0x14($s3)
    ctx->pc = 0x2c3e74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_2c3e78:
    // 0x2c3e78: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2c3e78u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2c3e7c:
    // 0x2c3e7c: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2c3e7cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_2c3e80:
    // 0x2c3e80: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x2c3e80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2c3e84:
    // 0x2c3e84: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x2c3e84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
label_2c3e88:
    // 0x2c3e88: 0x8c640014  lw          $a0, 0x14($v1)
    ctx->pc = 0x2c3e88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_2c3e8c:
    // 0x2c3e8c: 0xac440014  sw          $a0, 0x14($v0)
    ctx->pc = 0x2c3e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 4));
label_2c3e90:
    // 0x2c3e90: 0x82640018  lb          $a0, 0x18($s3)
    ctx->pc = 0x2c3e90u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 24)));
label_2c3e94:
    // 0x2c3e94: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2c3e94u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c3e98:
    // 0x2c3e98: 0xc0f52a8  jal         func_3D4AA0
label_2c3e9c:
    if (ctx->pc == 0x2C3E9Cu) {
        ctx->pc = 0x2C3E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3E98u;
        // 0x2c3e9c: 0x42080  sll         $a0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3EA0u;
        goto label_2c3ea0;
    }
    ctx->pc = 0x2C3E98u;
    SET_GPR_U32(ctx, 31, 0x2C3EA0u);
    ctx->pc = 0x2C3E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3E98u;
    // 0x2c3e9c: 0x42080  sll         $a0, $a0, 2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x2C3E98u, 0x2C3EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3EA0u;
label_2c3ea0:
    // 0x2c3ea0: 0xae220084  sw          $v0, 0x84($s1)
    ctx->pc = 0x2c3ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 2));
label_2c3ea4:
    // 0x2c3ea4: 0x82620018  lb          $v0, 0x18($s3)
    ctx->pc = 0x2c3ea4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 24)));
label_2c3ea8:
    // 0x2c3ea8: 0x1840001c  blez        $v0, . + 4 + (0x1C << 2)
label_2c3eac:
    if (ctx->pc == 0x2C3EACu) {
        ctx->pc = 0x2C3EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3EA8u;
        // 0x2c3eac: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3EB0u;
        goto label_2c3eb0;
    }
    ctx->pc = 0x2C3EA8u;
    {
        const bool branch_taken_0x2c3ea8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2C3EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3EA8u;
        // 0x2c3eac: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3ea8) {
            ctx->pc = 0x2C3F1Cu;
            goto label_2c3f1c;
        }
    }
    ctx->pc = 0x2C3EB0u;
label_2c3eb0:
    // 0x2c3eb0: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x2c3eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_2c3eb4:
    // 0x2c3eb4: 0x0  nop
    ctx->pc = 0x2c3eb4u;
    // NOP
label_2c3eb8:
    // 0x2c3eb8: 0x128080  sll         $s0, $s2, 2
    ctx->pc = 0x2c3eb8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_2c3ebc:
    // 0x2c3ebc: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2c3ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2c3ec0:
    // 0x2c3ec0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2c3ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2c3ec4:
    // 0x2c3ec4: 0x8c83003c  lw          $v1, 0x3C($a0)
    ctx->pc = 0x2c3ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
label_2c3ec8:
    // 0x2c3ec8: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x2c3ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_2c3ecc:
    // 0x2c3ecc: 0x40f809  jalr        $v0
label_2c3ed0:
    if (ctx->pc == 0x2C3ED0u) {
        ctx->pc = 0x2C3ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3ECCu;
        // 0x2c3ed0: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3ED4u;
        goto label_2c3ed4;
    }
    ctx->pc = 0x2C3ECCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2C3ED4u);
        ctx->pc = 0x2C3ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3ECCu;
        // 0x2c3ed0: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C3ECCu, 0x2C3ED4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C3ED4u;
label_2c3ed4:
    // 0x2c3ed4: 0x8e230084  lw          $v1, 0x84($s1)
    ctx->pc = 0x2c3ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
label_2c3ed8:
    // 0x2c3ed8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2c3ed8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c3edc:
    // 0x2c3edc: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x2c3edcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_2c3ee0:
    // 0x2c3ee0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2c3ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_2c3ee4:
    // 0x2c3ee4: 0x8e220084  lw          $v0, 0x84($s1)
    ctx->pc = 0x2c3ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
label_2c3ee8:
    // 0x2c3ee8: 0x8e63001c  lw          $v1, 0x1C($s3)
    ctx->pc = 0x2c3ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_2c3eec:
    // 0x2c3eec: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2c3eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2c3ef0:
    // 0x2c3ef0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2c3ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2c3ef4:
    // 0x2c3ef4: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x2c3ef4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_2c3ef8:
    // 0x2c3ef8: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2c3ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2c3efc:
    // 0x2c3efc: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2c3efcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_2c3f00:
    // 0x2c3f00: 0x40f809  jalr        $v0
label_2c3f04:
    if (ctx->pc == 0x2C3F04u) {
        ctx->pc = 0x2C3F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3F00u;
        // 0x2c3f04: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3F08u;
        goto label_2c3f08;
    }
    ctx->pc = 0x2C3F00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2C3F08u);
        ctx->pc = 0x2C3F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3F00u;
        // 0x2c3f04: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C3F00u, 0x2C3F08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2C3F08u;
label_2c3f08:
    // 0x2c3f08: 0x82630018  lb          $v1, 0x18($s3)
    ctx->pc = 0x2c3f08u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 24)));
label_2c3f0c:
    // 0x2c3f0c: 0x243182a  slt         $v1, $s2, $v1
    ctx->pc = 0x2c3f0cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_2c3f10:
    // 0x2c3f10: 0x5460ffe9  bnel        $v1, $zero, . + 4 + (-0x17 << 2)
label_2c3f14:
    if (ctx->pc == 0x2C3F14u) {
        ctx->pc = 0x2C3F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3F10u;
        // 0x2c3f14: 0x8e62001c  lw          $v0, 0x1C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3F18u;
        goto label_2c3f18;
    }
    ctx->pc = 0x2C3F10u;
    {
        const bool branch_taken_0x2c3f10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c3f10) {
            ctx->pc = 0x2C3F14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C3F10u;
            // 0x2c3f14: 0x8e62001c  lw          $v0, 0x1C($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C3EB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c3eb8;
        }
    }
    ctx->pc = 0x2C3F18u;
label_2c3f18:
    // 0x2c3f18: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c3f18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2c3f1c:
    // 0x2c3f1c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c3f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c3f20:
    // 0x2c3f20: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2c3f20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2c3f24:
    // 0x2c3f24: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2c3f24u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2c3f28:
    // 0x2c3f28: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2c3f28u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2c3f2c:
    // 0x2c3f2c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2c3f2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2c3f30:
    // 0x2c3f30: 0x3e00008  jr          $ra
label_2c3f34:
    if (ctx->pc == 0x2C3F34u) {
        ctx->pc = 0x2C3F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3F30u;
        // 0x2c3f34: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C3F38u;
        goto label_fallthrough_0x2c3f30;
    }
    ctx->pc = 0x2C3F30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C3F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3F30u;
        // 0x2c3f34: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C3F30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2c3f30:
    ctx->pc = 0x2C3F38u;
}
