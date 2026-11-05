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

// Function: sub_002E1BF0
// Address: 0x2e1bf0 - 0x2e1f00
void sub_002E1BF0_0x2e1bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E1BF0_0x2e1bf0");
#endif

    switch (ctx->pc) {
        case 0x2e1bf0u: goto label_2e1bf0;
        case 0x2e1bf4u: goto label_2e1bf4;
        case 0x2e1bf8u: goto label_2e1bf8;
        case 0x2e1bfcu: goto label_2e1bfc;
        case 0x2e1c00u: goto label_2e1c00;
        case 0x2e1c04u: goto label_2e1c04;
        case 0x2e1c08u: goto label_2e1c08;
        case 0x2e1c0cu: goto label_2e1c0c;
        case 0x2e1c10u: goto label_2e1c10;
        case 0x2e1c14u: goto label_2e1c14;
        case 0x2e1c18u: goto label_2e1c18;
        case 0x2e1c1cu: goto label_2e1c1c;
        case 0x2e1c20u: goto label_2e1c20;
        case 0x2e1c24u: goto label_2e1c24;
        case 0x2e1c28u: goto label_2e1c28;
        case 0x2e1c2cu: goto label_2e1c2c;
        case 0x2e1c30u: goto label_2e1c30;
        case 0x2e1c34u: goto label_2e1c34;
        case 0x2e1c38u: goto label_2e1c38;
        case 0x2e1c3cu: goto label_2e1c3c;
        case 0x2e1c40u: goto label_2e1c40;
        case 0x2e1c44u: goto label_2e1c44;
        case 0x2e1c48u: goto label_2e1c48;
        case 0x2e1c4cu: goto label_2e1c4c;
        case 0x2e1c50u: goto label_2e1c50;
        case 0x2e1c54u: goto label_2e1c54;
        case 0x2e1c58u: goto label_2e1c58;
        case 0x2e1c5cu: goto label_2e1c5c;
        case 0x2e1c60u: goto label_2e1c60;
        case 0x2e1c64u: goto label_2e1c64;
        case 0x2e1c68u: goto label_2e1c68;
        case 0x2e1c6cu: goto label_2e1c6c;
        case 0x2e1c70u: goto label_2e1c70;
        case 0x2e1c74u: goto label_2e1c74;
        case 0x2e1c78u: goto label_2e1c78;
        case 0x2e1c7cu: goto label_2e1c7c;
        case 0x2e1c80u: goto label_2e1c80;
        case 0x2e1c84u: goto label_2e1c84;
        case 0x2e1c88u: goto label_2e1c88;
        case 0x2e1c8cu: goto label_2e1c8c;
        case 0x2e1c90u: goto label_2e1c90;
        case 0x2e1c94u: goto label_2e1c94;
        case 0x2e1c98u: goto label_2e1c98;
        case 0x2e1c9cu: goto label_2e1c9c;
        case 0x2e1ca0u: goto label_2e1ca0;
        case 0x2e1ca4u: goto label_2e1ca4;
        case 0x2e1ca8u: goto label_2e1ca8;
        case 0x2e1cacu: goto label_2e1cac;
        case 0x2e1cb0u: goto label_2e1cb0;
        case 0x2e1cb4u: goto label_2e1cb4;
        case 0x2e1cb8u: goto label_2e1cb8;
        case 0x2e1cbcu: goto label_2e1cbc;
        case 0x2e1cc0u: goto label_2e1cc0;
        case 0x2e1cc4u: goto label_2e1cc4;
        case 0x2e1cc8u: goto label_2e1cc8;
        case 0x2e1cccu: goto label_2e1ccc;
        case 0x2e1cd0u: goto label_2e1cd0;
        case 0x2e1cd4u: goto label_2e1cd4;
        case 0x2e1cd8u: goto label_2e1cd8;
        case 0x2e1cdcu: goto label_2e1cdc;
        case 0x2e1ce0u: goto label_2e1ce0;
        case 0x2e1ce4u: goto label_2e1ce4;
        case 0x2e1ce8u: goto label_2e1ce8;
        case 0x2e1cecu: goto label_2e1cec;
        case 0x2e1cf0u: goto label_2e1cf0;
        case 0x2e1cf4u: goto label_2e1cf4;
        case 0x2e1cf8u: goto label_2e1cf8;
        case 0x2e1cfcu: goto label_2e1cfc;
        case 0x2e1d00u: goto label_2e1d00;
        case 0x2e1d04u: goto label_2e1d04;
        case 0x2e1d08u: goto label_2e1d08;
        case 0x2e1d0cu: goto label_2e1d0c;
        case 0x2e1d10u: goto label_2e1d10;
        case 0x2e1d14u: goto label_2e1d14;
        case 0x2e1d18u: goto label_2e1d18;
        case 0x2e1d1cu: goto label_2e1d1c;
        case 0x2e1d20u: goto label_2e1d20;
        case 0x2e1d24u: goto label_2e1d24;
        case 0x2e1d28u: goto label_2e1d28;
        case 0x2e1d2cu: goto label_2e1d2c;
        case 0x2e1d30u: goto label_2e1d30;
        case 0x2e1d34u: goto label_2e1d34;
        case 0x2e1d38u: goto label_2e1d38;
        case 0x2e1d3cu: goto label_2e1d3c;
        case 0x2e1d40u: goto label_2e1d40;
        case 0x2e1d44u: goto label_2e1d44;
        case 0x2e1d48u: goto label_2e1d48;
        case 0x2e1d4cu: goto label_2e1d4c;
        case 0x2e1d50u: goto label_2e1d50;
        case 0x2e1d54u: goto label_2e1d54;
        case 0x2e1d58u: goto label_2e1d58;
        case 0x2e1d5cu: goto label_2e1d5c;
        case 0x2e1d60u: goto label_2e1d60;
        case 0x2e1d64u: goto label_2e1d64;
        case 0x2e1d68u: goto label_2e1d68;
        case 0x2e1d6cu: goto label_2e1d6c;
        case 0x2e1d70u: goto label_2e1d70;
        case 0x2e1d74u: goto label_2e1d74;
        case 0x2e1d78u: goto label_2e1d78;
        case 0x2e1d7cu: goto label_2e1d7c;
        case 0x2e1d80u: goto label_2e1d80;
        case 0x2e1d84u: goto label_2e1d84;
        case 0x2e1d88u: goto label_2e1d88;
        case 0x2e1d8cu: goto label_2e1d8c;
        case 0x2e1d90u: goto label_2e1d90;
        case 0x2e1d94u: goto label_2e1d94;
        case 0x2e1d98u: goto label_2e1d98;
        case 0x2e1d9cu: goto label_2e1d9c;
        case 0x2e1da0u: goto label_2e1da0;
        case 0x2e1da4u: goto label_2e1da4;
        case 0x2e1da8u: goto label_2e1da8;
        case 0x2e1dacu: goto label_2e1dac;
        case 0x2e1db0u: goto label_2e1db0;
        case 0x2e1db4u: goto label_2e1db4;
        case 0x2e1db8u: goto label_2e1db8;
        case 0x2e1dbcu: goto label_2e1dbc;
        case 0x2e1dc0u: goto label_2e1dc0;
        case 0x2e1dc4u: goto label_2e1dc4;
        case 0x2e1dc8u: goto label_2e1dc8;
        case 0x2e1dccu: goto label_2e1dcc;
        case 0x2e1dd0u: goto label_2e1dd0;
        case 0x2e1dd4u: goto label_2e1dd4;
        case 0x2e1dd8u: goto label_2e1dd8;
        case 0x2e1ddcu: goto label_2e1ddc;
        case 0x2e1de0u: goto label_2e1de0;
        case 0x2e1de4u: goto label_2e1de4;
        case 0x2e1de8u: goto label_2e1de8;
        case 0x2e1decu: goto label_2e1dec;
        case 0x2e1df0u: goto label_2e1df0;
        case 0x2e1df4u: goto label_2e1df4;
        case 0x2e1df8u: goto label_2e1df8;
        case 0x2e1dfcu: goto label_2e1dfc;
        case 0x2e1e00u: goto label_2e1e00;
        case 0x2e1e04u: goto label_2e1e04;
        case 0x2e1e08u: goto label_2e1e08;
        case 0x2e1e0cu: goto label_2e1e0c;
        case 0x2e1e10u: goto label_2e1e10;
        case 0x2e1e14u: goto label_2e1e14;
        case 0x2e1e18u: goto label_2e1e18;
        case 0x2e1e1cu: goto label_2e1e1c;
        case 0x2e1e20u: goto label_2e1e20;
        case 0x2e1e24u: goto label_2e1e24;
        case 0x2e1e28u: goto label_2e1e28;
        case 0x2e1e2cu: goto label_2e1e2c;
        case 0x2e1e30u: goto label_2e1e30;
        case 0x2e1e34u: goto label_2e1e34;
        case 0x2e1e38u: goto label_2e1e38;
        case 0x2e1e3cu: goto label_2e1e3c;
        case 0x2e1e40u: goto label_2e1e40;
        case 0x2e1e44u: goto label_2e1e44;
        case 0x2e1e48u: goto label_2e1e48;
        case 0x2e1e4cu: goto label_2e1e4c;
        case 0x2e1e50u: goto label_2e1e50;
        case 0x2e1e54u: goto label_2e1e54;
        case 0x2e1e58u: goto label_2e1e58;
        case 0x2e1e5cu: goto label_2e1e5c;
        case 0x2e1e60u: goto label_2e1e60;
        case 0x2e1e64u: goto label_2e1e64;
        case 0x2e1e68u: goto label_2e1e68;
        case 0x2e1e6cu: goto label_2e1e6c;
        case 0x2e1e70u: goto label_2e1e70;
        case 0x2e1e74u: goto label_2e1e74;
        case 0x2e1e78u: goto label_2e1e78;
        case 0x2e1e7cu: goto label_2e1e7c;
        case 0x2e1e80u: goto label_2e1e80;
        case 0x2e1e84u: goto label_2e1e84;
        case 0x2e1e88u: goto label_2e1e88;
        case 0x2e1e8cu: goto label_2e1e8c;
        case 0x2e1e90u: goto label_2e1e90;
        case 0x2e1e94u: goto label_2e1e94;
        case 0x2e1e98u: goto label_2e1e98;
        case 0x2e1e9cu: goto label_2e1e9c;
        case 0x2e1ea0u: goto label_2e1ea0;
        case 0x2e1ea4u: goto label_2e1ea4;
        case 0x2e1ea8u: goto label_2e1ea8;
        case 0x2e1eacu: goto label_2e1eac;
        case 0x2e1eb0u: goto label_2e1eb0;
        case 0x2e1eb4u: goto label_2e1eb4;
        case 0x2e1eb8u: goto label_2e1eb8;
        case 0x2e1ebcu: goto label_2e1ebc;
        case 0x2e1ec0u: goto label_2e1ec0;
        case 0x2e1ec4u: goto label_2e1ec4;
        case 0x2e1ec8u: goto label_2e1ec8;
        case 0x2e1eccu: goto label_2e1ecc;
        case 0x2e1ed0u: goto label_2e1ed0;
        case 0x2e1ed4u: goto label_2e1ed4;
        case 0x2e1ed8u: goto label_2e1ed8;
        case 0x2e1edcu: goto label_2e1edc;
        case 0x2e1ee0u: goto label_2e1ee0;
        case 0x2e1ee4u: goto label_2e1ee4;
        case 0x2e1ee8u: goto label_2e1ee8;
        case 0x2e1eecu: goto label_2e1eec;
        case 0x2e1ef0u: goto label_2e1ef0;
        case 0x2e1ef4u: goto label_2e1ef4;
        case 0x2e1ef8u: goto label_2e1ef8;
        case 0x2e1efcu: goto label_2e1efc;
        default: break;
    }

    ctx->pc = 0x2e1bf0u;

label_2e1bf0:
    // 0x2e1bf0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2e1bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_2e1bf4:
    // 0x2e1bf4: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x2e1bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
label_2e1bf8:
    // 0x2e1bf8: 0xffb10068  sd          $s1, 0x68($sp)
    ctx->pc = 0x2e1bf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 17));
label_2e1bfc:
    // 0x2e1bfc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e1bfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2e1c00:
    // 0x2e1c00: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x2e1c00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
label_2e1c04:
    // 0x2e1c04: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x2e1c04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
label_2e1c08:
    // 0x2e1c08: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x2e1c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
label_2e1c0c:
    // 0x2e1c0c: 0x104000b3  beqz        $v0, . + 4 + (0xB3 << 2)
label_2e1c10:
    if (ctx->pc == 0x2E1C10u) {
        ctx->pc = 0x2E1C14u;
        goto label_2e1c14;
    }
    ctx->pc = 0x2E1C0Cu;
    {
        const bool branch_taken_0x2e1c0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e1c0c) {
            ctx->pc = 0x2E1EDCu;
            goto label_2e1edc;
        }
    }
    ctx->pc = 0x2E1C14u;
label_2e1c14:
    // 0x2e1c14: 0xc0f6a96  jal         func_3DAA58
label_2e1c18:
    if (ctx->pc == 0x2E1C18u) {
        ctx->pc = 0x2E1C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1C14u;
        // 0x2e1c18: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E1C1Cu;
        goto label_2e1c1c;
    }
    ctx->pc = 0x2E1C14u;
    SET_GPR_U32(ctx, 31, 0x2E1C1Cu);
    ctx->pc = 0x2E1C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1C14u;
    // 0x2e1c18: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2E1C14u, 0x2E1C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1C1Cu;
label_2e1c1c:
    // 0x2e1c1c: 0xc0f6a96  jal         func_3DAA58
label_2e1c20:
    if (ctx->pc == 0x2E1C20u) {
        ctx->pc = 0x2E1C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1C1Cu;
        // 0x2e1c20: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E1C24u;
        goto label_2e1c24;
    }
    ctx->pc = 0x2E1C1Cu;
    SET_GPR_U32(ctx, 31, 0x2E1C24u);
    ctx->pc = 0x2E1C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1C1Cu;
    // 0x2e1c20: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2E1C1Cu, 0x2E1C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1C24u;
label_2e1c24:
    // 0x2e1c24: 0x26080030  addiu       $t0, $s0, 0x30
    ctx->pc = 0x2e1c24u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_2e1c28:
    // 0x2e1c28: 0xd9010000  lqc2        $vf1, 0x0($t0)
    ctx->pc = 0x2e1c28u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
label_2e1c2c:
    // 0x2e1c2c: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x2e1c2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
label_2e1c30:
    // 0x2e1c30: 0x8e070108  lw          $a3, 0x108($s0)
    ctx->pc = 0x2e1c30u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
label_2e1c34:
    // 0x2e1c34: 0x26050110  addiu       $a1, $s0, 0x110
    ctx->pc = 0x2e1c34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
label_2e1c38:
    // 0x2e1c38: 0x8ce30104  lw          $v1, 0x104($a3)
    ctx->pc = 0x2e1c38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 260)));
label_2e1c3c:
    // 0x2e1c3c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2e1c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2e1c40:
    // 0x2e1c40: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x2e1c40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_2e1c44:
    // 0x2e1c44: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x2e1c44u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_2e1c48:
    // 0x2e1c48: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x2e1c48u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2e1c4c:
    // 0x2e1c4c: 0xd8430010  lqc2        $vf3, 0x10($v0)
    ctx->pc = 0x2e1c4cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
label_2e1c50:
    // 0x2e1c50: 0xd8440020  lqc2        $vf4, 0x20($v0)
    ctx->pc = 0x2e1c50u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
label_2e1c54:
    // 0x2e1c54: 0xd8450030  lqc2        $vf5, 0x30($v0)
    ctx->pc = 0x2e1c54u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
label_2e1c58:
    // 0x2e1c58: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x2e1c58u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_2e1c5c:
    // 0x2e1c5c: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x2e1c5cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_2e1c60:
    // 0x2e1c60: 0x4bc1214a  vmaddz.xyz  $vf5, $vf4, $vf1z
    ctx->pc = 0x2e1c60u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_2e1c64:
    // 0x2e1c64: 0xfba50000  sqc2        $vf5, 0x0($sp)
    ctx->pc = 0x2e1c64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[5]));
label_2e1c68:
    // 0x2e1c68: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2e1c68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2e1c6c:
    // 0x2e1c6c: 0x8ce50104  lw          $a1, 0x104($a3)
    ctx->pc = 0x2e1c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 260)));
label_2e1c70:
    // 0x2e1c70: 0x8c860104  lw          $a2, 0x104($a0)
    ctx->pc = 0x2e1c70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 260)));
label_2e1c74:
    // 0x2e1c74: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2e1c74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2e1c78:
    // 0x2e1c78: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2e1c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2e1c7c:
    // 0x2e1c7c: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x2e1c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_2e1c80:
    // 0x2e1c80: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x2e1c80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_2e1c84:
    // 0x2e1c84: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2e1c84u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2e1c88:
    // 0x2e1c88: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x2e1c88u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2e1c8c:
    // 0x2e1c8c: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2e1c8cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2e1c90:
    // 0x2e1c90: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x2e1c90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
label_2e1c94:
    // 0x2e1c94: 0xc7a30030  lwc1        $f3, 0x30($sp)
    ctx->pc = 0x2e1c94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2e1c98:
    // 0x2e1c98: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x2e1c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2e1c9c:
    // 0x2e1c9c: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x2e1c9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e1ca0:
    // 0x2e1ca0: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x2e1ca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2e1ca4:
    // 0x2e1ca4: 0xc7a2003c  lwc1        $f2, 0x3C($sp)
    ctx->pc = 0x2e1ca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2e1ca8:
    // 0x2e1ca8: 0xe7a30020  swc1        $f3, 0x20($sp)
    ctx->pc = 0x2e1ca8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_2e1cac:
    // 0x2e1cac: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x2e1cacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_2e1cb0:
    // 0x2e1cb0: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x2e1cb0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_2e1cb4:
    // 0x2e1cb4: 0xe7a2002c  swc1        $f2, 0x2C($sp)
    ctx->pc = 0x2e1cb4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_2e1cb8:
    // 0x2e1cb8: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x2e1cb8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2e1cbc:
    // 0x2e1cbc: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x2e1cbcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2e1cc0:
    // 0x2e1cc0: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2e1cc0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2e1cc4:
    // 0x2e1cc4: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x2e1cc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_2e1cc8:
    // 0x2e1cc8: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x2e1cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2e1ccc:
    // 0x2e1ccc: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x2e1cccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2e1cd0:
    // 0x2e1cd0: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x2e1cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2e1cd4:
    // 0x2e1cd4: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x2e1cd4u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
label_2e1cd8:
    // 0x2e1cd8: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x2e1cd8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
label_2e1cdc:
    // 0x2e1cdc: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x2e1cdcu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
label_2e1ce0:
    // 0x2e1ce0: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x2e1ce0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
label_2e1ce4:
    // 0x2e1ce4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2e1ce4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e1ce8:
    // 0x2e1ce8: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x2e1ce8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2e1cec:
    // 0x2e1cec: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2e1cecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2e1cf0:
    // 0x2e1cf0: 0x0  nop
    ctx->pc = 0x2e1cf0u;
    // NOP
label_2e1cf4:
    // 0x2e1cf4: 0x45000027  bc1f        . + 4 + (0x27 << 2)
label_2e1cf8:
    if (ctx->pc == 0x2E1CF8u) {
        ctx->pc = 0x2E1CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1CF4u;
        // 0x2e1cf8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E1CFCu;
        goto label_2e1cfc;
    }
    ctx->pc = 0x2E1CF4u;
    {
        const bool branch_taken_0x2e1cf4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E1CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1CF4u;
        // 0x2e1cf8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1cf4) {
            ctx->pc = 0x2E1D94u;
            goto label_2e1d94;
        }
    }
    ctx->pc = 0x2E1CFCu;
label_2e1cfc:
    // 0x2e1cfc: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x2e1cfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2e1d00:
    // 0x2e1d00: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x2e1d00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2e1d04:
    // 0x2e1d04: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x2e1d04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2e1d08:
    // 0x2e1d08: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x2e1d08u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
label_2e1d0c:
    // 0x2e1d0c: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x2e1d0cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
label_2e1d10:
    // 0x2e1d10: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x2e1d10u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
label_2e1d14:
    // 0x2e1d14: 0x46010044  c1          0x10044
    ctx->pc = 0x2e1d14u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
label_2e1d18:
    // 0x2e1d18: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2e1d18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_2e1d1c:
    // 0x2e1d1c: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x2e1d1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_2e1d20:
    // 0x2e1d20: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2e1d20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2e1d24:
    // 0x2e1d24: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2e1d24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e1d28:
    // 0x2e1d28: 0x0  nop
    ctx->pc = 0x2e1d28u;
    // NOP
label_2e1d2c:
    // 0x2e1d2c: 0x0  nop
    ctx->pc = 0x2e1d2cu;
    // NOP
label_2e1d30:
    // 0x2e1d30: 0x46012943  div.s       $f5, $f5, $f1
    ctx->pc = 0x2e1d30u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[5] = FPU_DIV_S(ctx->f[5], ctx->f[1]); }
label_2e1d34:
    // 0x2e1d34: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x2e1d34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2e1d38:
    // 0x2e1d38: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x2e1d38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2e1d3c:
    // 0x2e1d3c: 0xc7a1000c  lwc1        $f1, 0xC($sp)
    ctx->pc = 0x2e1d3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2e1d40:
    // 0x2e1d40: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x2e1d40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2e1d44:
    // 0x2e1d44: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2e1d44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2e1d48:
    // 0x2e1d48: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x2e1d48u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
label_2e1d4c:
    // 0x2e1d4c: 0x24430030  addiu       $v1, $v0, 0x30
    ctx->pc = 0x2e1d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
label_2e1d50:
    // 0x2e1d50: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x2e1d50u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2e1d54:
    // 0x2e1d54: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x2e1d54u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_2e1d58:
    // 0x2e1d58: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x2e1d58u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_2e1d5c:
    // 0x2e1d5c: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x2e1d5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_2e1d60:
    // 0x2e1d60: 0xe7a1002c  swc1        $f1, 0x2C($sp)
    ctx->pc = 0x2e1d60u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_2e1d64:
    // 0x2e1d64: 0xe7a20020  swc1        $f2, 0x20($sp)
    ctx->pc = 0x2e1d64u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_2e1d68:
    // 0x2e1d68: 0xe7a30024  swc1        $f3, 0x24($sp)
    ctx->pc = 0x2e1d68u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_2e1d6c:
    // 0x2e1d6c: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x2e1d6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_2e1d70:
    // 0x2e1d70: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2e1d70u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2e1d74:
    // 0x2e1d74: 0xda220000  lqc2        $vf2, 0x0($s1)
    ctx->pc = 0x2e1d74u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_2e1d78:
    // 0x2e1d78: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2e1d78u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2e1d7c:
    // 0x2e1d7c: 0xf8410030  sqc2        $vf1, 0x30($v0)
    ctx->pc = 0x2e1d7cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), _mm_castps_si128(ctx->vu0_vf[1]));
label_2e1d80:
    // 0x2e1d80: 0x44022800  mfc1        $v0, $f5
    ctx->pc = 0x2e1d80u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_2e1d84:
    // 0x2e1d84: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x2e1d84u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2e1d88:
    // 0x2e1d88: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2e1d88u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2e1d8c:
    // 0x2e1d8c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2e1d8cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2e1d90:
    // 0x2e1d90: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x2e1d90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_2e1d94:
    // 0x2e1d94: 0x8e02005c  lw          $v0, 0x5C($s0)
    ctx->pc = 0x2e1d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
label_2e1d98:
    // 0x2e1d98: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2e1d9c:
    if (ctx->pc == 0x2E1D9Cu) {
        ctx->pc = 0x2E1D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1D98u;
        // 0x2e1d9c: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E1DA0u;
        goto label_2e1da0;
    }
    ctx->pc = 0x2E1D98u;
    {
        const bool branch_taken_0x2e1d98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E1D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1D98u;
        // 0x2e1d9c: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1d98) {
            ctx->pc = 0x2E1DA8u;
            goto label_2e1da8;
        }
    }
    ctx->pc = 0x2E1DA0u;
label_2e1da0:
    // 0x2e1da0: 0x10000004  b           . + 4 + (0x4 << 2)
label_2e1da4:
    if (ctx->pc == 0x2E1DA4u) {
        ctx->pc = 0x2E1DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1DA0u;
        // 0x2e1da4: 0xc4412b30  lwc1        $f1, 0x2B30($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 11056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E1DA8u;
        goto label_2e1da8;
    }
    ctx->pc = 0x2E1DA0u;
    {
        const bool branch_taken_0x2e1da0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1DA0u;
        // 0x2e1da4: 0xc4412b30  lwc1        $f1, 0x2B30($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 11056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1da0) {
            ctx->pc = 0x2E1DB4u;
            goto label_2e1db4;
        }
    }
    ctx->pc = 0x2E1DA8u;
label_2e1da8:
    // 0x2e1da8: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x2e1da8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
label_2e1dac:
    // 0x2e1dac: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2e1dacu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2e1db0:
    // 0x2e1db0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2e1db0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2e1db4:
    // 0x2e1db4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2e1db4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2e1db8:
    // 0x2e1db8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2e1db8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e1dbc:
    // 0x2e1dbc: 0x0  nop
    ctx->pc = 0x2e1dbcu;
    // NOP
label_2e1dc0:
    // 0x2e1dc0: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2e1dc0u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_2e1dc4:
    // 0x2e1dc4: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2e1dc4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_2e1dc8:
    // 0x2e1dc8: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x2e1dc8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2e1dcc:
    // 0x2e1dcc: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2e1dccu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2e1dd0:
    // 0x2e1dd0: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2e1dd0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2e1dd4:
    // 0x2e1dd4: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x2e1dd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_2e1dd8:
    // 0x2e1dd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e1dd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e1ddc:
    // 0x2e1ddc: 0xc0b7264  jal         func_2DC990
label_2e1de0:
    if (ctx->pc == 0x2E1DE0u) {
        ctx->pc = 0x2E1DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1DDCu;
        // 0x2e1de0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E1DE4u;
        goto label_2e1de4;
    }
    ctx->pc = 0x2E1DDCu;
    SET_GPR_U32(ctx, 31, 0x2E1DE4u);
    ctx->pc = 0x2E1DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1DDCu;
    // 0x2e1de0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC990u, 0x2E1DDCu, 0x2E1DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1DE4u;
label_2e1de4:
    // 0x2e1de4: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x2e1de4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2e1de8:
    // 0x2e1de8: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x2e1de8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_2e1dec:
    // 0x2e1dec: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x2e1decu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2e1df0:
    // 0x2e1df0: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2e1df0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2e1df4:
    // 0x2e1df4: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x2e1df4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
label_2e1df8:
    // 0x2e1df8: 0xc7a50050  lwc1        $f5, 0x50($sp)
    ctx->pc = 0x2e1df8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_2e1dfc:
    // 0x2e1dfc: 0xc7a60054  lwc1        $f6, 0x54($sp)
    ctx->pc = 0x2e1dfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_2e1e00:
    // 0x2e1e00: 0xc7a80058  lwc1        $f8, 0x58($sp)
    ctx->pc = 0x2e1e00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_2e1e04:
    // 0x2e1e04: 0x46002a47  neg.s       $f9, $f5
    ctx->pc = 0x2e1e04u;
    ctx->f[9] = FPU_NEG_S(ctx->f[5]);
label_2e1e08:
    // 0x2e1e08: 0x46003287  neg.s       $f10, $f6
    ctx->pc = 0x2e1e08u;
    ctx->f[10] = FPU_NEG_S(ctx->f[6]);
label_2e1e0c:
    // 0x2e1e0c: 0xc6000024  lwc1        $f0, 0x24($s0)
    ctx->pc = 0x2e1e0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e1e10:
    // 0x2e1e10: 0x460041c7  neg.s       $f7, $f8
    ctx->pc = 0x2e1e10u;
    ctx->f[7] = FPU_NEG_S(ctx->f[8]);
label_2e1e14:
    // 0x2e1e14: 0xafa0003c  sw          $zero, 0x3C($sp)
    ctx->pc = 0x2e1e14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
label_2e1e18:
    // 0x2e1e18: 0x0  nop
    ctx->pc = 0x2e1e18u;
    // NOP
label_2e1e1c:
    // 0x2e1e1c: 0x0  nop
    ctx->pc = 0x2e1e1cu;
    // NOP
label_2e1e20:
    // 0x2e1e20: 0x46004903  div.s       $f4, $f9, $f0
    ctx->pc = 0x2e1e20u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = FPU_DIV_S(ctx->f[9], ctx->f[0]); }
label_2e1e24:
    // 0x2e1e24: 0xc7a2005c  lwc1        $f2, 0x5C($sp)
    ctx->pc = 0x2e1e24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2e1e28:
    // 0x2e1e28: 0x0  nop
    ctx->pc = 0x2e1e28u;
    // NOP
label_2e1e2c:
    // 0x2e1e2c: 0x0  nop
    ctx->pc = 0x2e1e2cu;
    // NOP
label_2e1e30:
    // 0x2e1e30: 0x460050c3  div.s       $f3, $f10, $f0
    ctx->pc = 0x2e1e30u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[10], ctx->f[0]); }
label_2e1e34:
    // 0x2e1e34: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x2e1e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2e1e38:
    // 0x2e1e38: 0x46003803  div.s       $f0, $f7, $f0
    ctx->pc = 0x2e1e38u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[7], ctx->f[0]); }
label_2e1e3c:
    // 0x2e1e3c: 0xe7a2004c  swc1        $f2, 0x4C($sp)
    ctx->pc = 0x2e1e3cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
label_2e1e40:
    // 0x2e1e40: 0xe7a1002c  swc1        $f1, 0x2C($sp)
    ctx->pc = 0x2e1e40u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_2e1e44:
    // 0x2e1e44: 0xe7a50040  swc1        $f5, 0x40($sp)
    ctx->pc = 0x2e1e44u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_2e1e48:
    // 0x2e1e48: 0xe7a60044  swc1        $f6, 0x44($sp)
    ctx->pc = 0x2e1e48u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_2e1e4c:
    // 0x2e1e4c: 0xe7a40020  swc1        $f4, 0x20($sp)
    ctx->pc = 0x2e1e4cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_2e1e50:
    // 0x2e1e50: 0xe7a30024  swc1        $f3, 0x24($sp)
    ctx->pc = 0x2e1e50u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_2e1e54:
    // 0x2e1e54: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x2e1e54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_2e1e58:
    // 0x2e1e58: 0xe7a80048  swc1        $f8, 0x48($sp)
    ctx->pc = 0x2e1e58u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_2e1e5c:
    // 0x2e1e5c: 0xe7a90030  swc1        $f9, 0x30($sp)
    ctx->pc = 0x2e1e5cu;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_2e1e60:
    // 0x2e1e60: 0xe7aa0034  swc1        $f10, 0x34($sp)
    ctx->pc = 0x2e1e60u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_2e1e64:
    // 0x2e1e64: 0xe7a70038  swc1        $f7, 0x38($sp)
    ctx->pc = 0x2e1e64u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_2e1e68:
    // 0x2e1e68: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x2e1e68u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_2e1e6c:
    // 0x2e1e6c: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x2e1e6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_2e1e70:
    // 0x2e1e70: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x2e1e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_2e1e74:
    // 0x2e1e74: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2e1e74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2e1e78:
    // 0x2e1e78: 0xc4410020  lwc1        $f1, 0x20($v0)
    ctx->pc = 0x2e1e78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2e1e7c:
    // 0x2e1e7c: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x2e1e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_2e1e80:
    // 0x2e1e80: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x2e1e80u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_2e1e84:
    // 0x2e1e84: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2e1e84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e1e88:
    // 0x2e1e88: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x2e1e88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_2e1e8c:
    // 0x2e1e8c: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2e1e8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2e1e90:
    // 0x2e1e90: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x2e1e90u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_2e1e94:
    // 0x2e1e94: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x2e1e94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e1e98:
    // 0x2e1e98: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x2e1e98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_2e1e9c:
    // 0x2e1e9c: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x2e1e9cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_2e1ea0:
    // 0x2e1ea0: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x2e1ea0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_2e1ea4:
    // 0x2e1ea4: 0xd8830010  lqc2        $vf3, 0x10($a0)
    ctx->pc = 0x2e1ea4u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 16)));
label_2e1ea8:
    // 0x2e1ea8: 0xd8840020  lqc2        $vf4, 0x20($a0)
    ctx->pc = 0x2e1ea8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 32)));
label_2e1eac:
    // 0x2e1eac: 0xd8850030  lqc2        $vf5, 0x30($a0)
    ctx->pc = 0x2e1eacu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
label_2e1eb0:
    // 0x2e1eb0: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x2e1eb0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_2e1eb4:
    // 0x2e1eb4: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x2e1eb4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_2e1eb8:
    // 0x2e1eb8: 0x4bc1214a  vmaddz.xyz  $vf5, $vf4, $vf1z
    ctx->pc = 0x2e1eb8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_2e1ebc:
    // 0x2e1ebc: 0xfba50020  sqc2        $vf5, 0x20($sp)
    ctx->pc = 0x2e1ebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[5]));
label_2e1ec0:
    // 0x2e1ec0: 0x8e030070  lw          $v1, 0x70($s0)
    ctx->pc = 0x2e1ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_2e1ec4:
    // 0x2e1ec4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2e1ec4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2e1ec8:
    // 0x2e1ec8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e1ec8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e1ecc:
    // 0x2e1ecc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2e1eccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2e1ed0:
    // 0x2e1ed0: 0x8c62005c  lw          $v0, 0x5C($v1)
    ctx->pc = 0x2e1ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
label_2e1ed4:
    // 0x2e1ed4: 0x40f809  jalr        $v0
label_2e1ed8:
    if (ctx->pc == 0x2E1ED8u) {
        ctx->pc = 0x2E1ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1ED4u;
        // 0x2e1ed8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E1EDCu;
        goto label_2e1edc;
    }
    ctx->pc = 0x2E1ED4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2E1EDCu);
        ctx->pc = 0x2E1ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1ED4u;
        // 0x2e1ed8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E1ED4u, 0x2E1EDCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E1EDCu;
label_2e1edc:
    // 0x2e1edc: 0xc0b7aee  jal         func_2DEBB8
label_2e1ee0:
    if (ctx->pc == 0x2E1EE0u) {
        ctx->pc = 0x2E1EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1EDCu;
        // 0x2e1ee0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E1EE4u;
        goto label_2e1ee4;
    }
    ctx->pc = 0x2E1EDCu;
    SET_GPR_U32(ctx, 31, 0x2E1EE4u);
    ctx->pc = 0x2E1EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1EDCu;
    // 0x2e1ee0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DEBB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DEBB8u, 0x2E1EDCu, 0x2E1EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1EE4u;
label_2e1ee4:
    // 0x2e1ee4: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x2e1ee4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2e1ee8:
    // 0x2e1ee8: 0xdfb10068  ld          $s1, 0x68($sp)
    ctx->pc = 0x2e1ee8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 104)));
label_2e1eec:
    // 0x2e1eec: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x2e1eecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_2e1ef0:
    // 0x2e1ef0: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x2e1ef0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
label_2e1ef4:
    // 0x2e1ef4: 0x3e00008  jr          $ra
label_2e1ef8:
    if (ctx->pc == 0x2E1EF8u) {
        ctx->pc = 0x2E1EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1EF4u;
        // 0x2e1ef8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E1EFCu;
        goto label_2e1efc;
    }
    ctx->pc = 0x2E1EF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E1EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1EF4u;
        // 0x2e1ef8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E1EF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E1EFCu;
label_2e1efc:
    // 0x2e1efc: 0x0  nop
    ctx->pc = 0x2e1efcu;
    // NOP
    ctx->pc = 0x2e1f00u;
}
