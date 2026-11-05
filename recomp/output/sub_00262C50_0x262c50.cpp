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

// Function: sub_00262C50
// Address: 0x262c50 - 0x262d48
void sub_00262C50_0x262c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00262C50_0x262c50");
#endif

    switch (ctx->pc) {
        case 0x262c50u: goto label_262c50;
        case 0x262c54u: goto label_262c54;
        case 0x262c58u: goto label_262c58;
        case 0x262c5cu: goto label_262c5c;
        case 0x262c60u: goto label_262c60;
        case 0x262c64u: goto label_262c64;
        case 0x262c68u: goto label_262c68;
        case 0x262c6cu: goto label_262c6c;
        case 0x262c70u: goto label_262c70;
        case 0x262c74u: goto label_262c74;
        case 0x262c78u: goto label_262c78;
        case 0x262c7cu: goto label_262c7c;
        case 0x262c80u: goto label_262c80;
        case 0x262c84u: goto label_262c84;
        case 0x262c88u: goto label_262c88;
        case 0x262c8cu: goto label_262c8c;
        case 0x262c90u: goto label_262c90;
        case 0x262c94u: goto label_262c94;
        case 0x262c98u: goto label_262c98;
        case 0x262c9cu: goto label_262c9c;
        case 0x262ca0u: goto label_262ca0;
        case 0x262ca4u: goto label_262ca4;
        case 0x262ca8u: goto label_262ca8;
        case 0x262cacu: goto label_262cac;
        case 0x262cb0u: goto label_262cb0;
        case 0x262cb4u: goto label_262cb4;
        case 0x262cb8u: goto label_262cb8;
        case 0x262cbcu: goto label_262cbc;
        case 0x262cc0u: goto label_262cc0;
        case 0x262cc4u: goto label_262cc4;
        case 0x262cc8u: goto label_262cc8;
        case 0x262cccu: goto label_262ccc;
        case 0x262cd0u: goto label_262cd0;
        case 0x262cd4u: goto label_262cd4;
        case 0x262cd8u: goto label_262cd8;
        case 0x262cdcu: goto label_262cdc;
        case 0x262ce0u: goto label_262ce0;
        case 0x262ce4u: goto label_262ce4;
        case 0x262ce8u: goto label_262ce8;
        case 0x262cecu: goto label_262cec;
        case 0x262cf0u: goto label_262cf0;
        case 0x262cf4u: goto label_262cf4;
        case 0x262cf8u: goto label_262cf8;
        case 0x262cfcu: goto label_262cfc;
        case 0x262d00u: goto label_262d00;
        case 0x262d04u: goto label_262d04;
        case 0x262d08u: goto label_262d08;
        case 0x262d0cu: goto label_262d0c;
        case 0x262d10u: goto label_262d10;
        case 0x262d14u: goto label_262d14;
        case 0x262d18u: goto label_262d18;
        case 0x262d1cu: goto label_262d1c;
        case 0x262d20u: goto label_262d20;
        case 0x262d24u: goto label_262d24;
        case 0x262d28u: goto label_262d28;
        case 0x262d2cu: goto label_262d2c;
        case 0x262d30u: goto label_262d30;
        case 0x262d34u: goto label_262d34;
        case 0x262d38u: goto label_262d38;
        case 0x262d3cu: goto label_262d3c;
        case 0x262d40u: goto label_262d40;
        case 0x262d44u: goto label_262d44;
        default: break;
    }

    ctx->pc = 0x262c50u;

label_262c50:
    // 0x262c50: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x262c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_262c54:
    // 0x262c54: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x262c54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
label_262c58:
    // 0x262c58: 0xffb10078  sd          $s1, 0x78($sp)
    ctx->pc = 0x262c58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 17));
label_262c5c:
    // 0x262c5c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x262c5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_262c60:
    // 0x262c60: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x262c60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_262c64:
    // 0x262c64: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x262c64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_262c68:
    // 0x262c68: 0xc0b1488  jal         func_2C5220
label_262c6c:
    if (ctx->pc == 0x262C6Cu) {
        ctx->pc = 0x262C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262C68u;
        // 0x262c6c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262C70u;
        goto label_262c70;
    }
    ctx->pc = 0x262C68u;
    SET_GPR_U32(ctx, 31, 0x262C70u);
    ctx->pc = 0x262C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262C68u;
    // 0x262c6c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x262C68u, 0x262C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262C70u;
label_262c70:
    // 0x262c70: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
label_262c74:
    if (ctx->pc == 0x262C74u) {
        ctx->pc = 0x262C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262C70u;
        // 0x262c74: 0x8e020278  lw          $v0, 0x278($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262C78u;
        goto label_262c78;
    }
    ctx->pc = 0x262C70u;
    {
        const bool branch_taken_0x262c70 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x262C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262C70u;
        // 0x262c74: 0x8e020278  lw          $v0, 0x278($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262c70) {
            ctx->pc = 0x262C80u;
            goto label_262c80;
        }
    }
    ctx->pc = 0x262C78u;
label_262c78:
    // 0x262c78: 0xae020280  sw          $v0, 0x280($s0)
    ctx->pc = 0x262c78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 640), GPR_U32(ctx, 2));
label_262c7c:
    // 0x262c7c: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x262c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
label_262c80:
    // 0x262c80: 0xac5d0010  sw          $sp, 0x10($v0)
    ctx->pc = 0x262c80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 29));
label_262c84:
    // 0x262c84: 0x8e030234  lw          $v1, 0x234($s0)
    ctx->pc = 0x262c84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 564)));
label_262c88:
    // 0x262c88: 0x8e040278  lw          $a0, 0x278($s0)
    ctx->pc = 0x262c88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
label_262c8c:
    // 0x262c8c: 0x8c620104  lw          $v0, 0x104($v1)
    ctx->pc = 0x262c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
label_262c90:
    // 0x262c90: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x262c90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_262c94:
    // 0x262c94: 0xc0d8e26  jal         func_363898
label_262c98:
    if (ctx->pc == 0x262C98u) {
        ctx->pc = 0x262C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262C94u;
        // 0x262c98: 0x24a50060  addiu       $a1, $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262C9Cu;
        goto label_262c9c;
    }
    ctx->pc = 0x262C94u;
    SET_GPR_U32(ctx, 31, 0x262C9Cu);
    ctx->pc = 0x262C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262C94u;
    // 0x262c98: 0x24a50060  addiu       $a1, $a1, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363898u, 0x262C94u, 0x262C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262C9Cu;
label_262c9c:
    // 0x262c9c: 0x8e040234  lw          $a0, 0x234($s0)
    ctx->pc = 0x262c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 564)));
label_262ca0:
    // 0x262ca0: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x262ca0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_262ca4:
    // 0x262ca4: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x262ca4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
label_262ca8:
    // 0x262ca8: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x262ca8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_262cac:
    // 0x262cac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x262cacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_262cb0:
    // 0x262cb0: 0x8c820104  lw          $v0, 0x104($a0)
    ctx->pc = 0x262cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 260)));
label_262cb4:
    // 0x262cb4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x262cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_262cb8:
    // 0x262cb8: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x262cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
label_262cbc:
    // 0x262cbc: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x262cbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
label_262cc0:
    // 0x262cc0: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x262cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_262cc4:
    // 0x262cc4: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x262cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
label_262cc8:
    // 0x262cc8: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x262cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
label_262ccc:
    // 0x262ccc: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x262cccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_262cd0:
    // 0x262cd0: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x262cd0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_262cd4:
    // 0x262cd4: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x262cd4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_262cd8:
    // 0x262cd8: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x262cd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
label_262cdc:
    // 0x262cdc: 0xc7a30060  lwc1        $f3, 0x60($sp)
    ctx->pc = 0x262cdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_262ce0:
    // 0x262ce0: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x262ce0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_262ce4:
    // 0x262ce4: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x262ce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_262ce8:
    // 0x262ce8: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x262ce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_262cec:
    // 0x262cec: 0xc7a2006c  lwc1        $f2, 0x6C($sp)
    ctx->pc = 0x262cecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_262cf0:
    // 0x262cf0: 0x8e040278  lw          $a0, 0x278($s0)
    ctx->pc = 0x262cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
label_262cf4:
    // 0x262cf4: 0xe7a30040  swc1        $f3, 0x40($sp)
    ctx->pc = 0x262cf4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_262cf8:
    // 0x262cf8: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x262cf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_262cfc:
    // 0x262cfc: 0xe7a10048  swc1        $f1, 0x48($sp)
    ctx->pc = 0x262cfcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_262d00:
    // 0x262d00: 0xc0d8e20  jal         func_363880
label_262d04:
    if (ctx->pc == 0x262D04u) {
        ctx->pc = 0x262D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262D00u;
        // 0x262d04: 0xe7a2004c  swc1        $f2, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x262D08u;
        goto label_262d08;
    }
    ctx->pc = 0x262D00u;
    SET_GPR_U32(ctx, 31, 0x262D08u);
    ctx->pc = 0x262D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262D00u;
    // 0x262d04: 0xe7a2004c  swc1        $f2, 0x4C($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x363880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363880u, 0x262D00u, 0x262D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262D08u;
label_262d08:
    // 0x262d08: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
label_262d0c:
    if (ctx->pc == 0x262D0Cu) {
        ctx->pc = 0x262D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262D08u;
        // 0x262d0c: 0x8e040278  lw          $a0, 0x278($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262D10u;
        goto label_262d10;
    }
    ctx->pc = 0x262D08u;
    {
        const bool branch_taken_0x262d08 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x262D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262D08u;
        // 0x262d0c: 0x8e040278  lw          $a0, 0x278($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262d08) {
            ctx->pc = 0x262D20u;
            goto label_262d20;
        }
    }
    ctx->pc = 0x262D10u;
label_262d10:
    // 0x262d10: 0xc0d8e98  jal         func_363A60
label_262d14:
    if (ctx->pc == 0x262D14u) {
        ctx->pc = 0x262D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262D10u;
        // 0x262d14: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262D18u;
        goto label_262d18;
    }
    ctx->pc = 0x262D10u;
    SET_GPR_U32(ctx, 31, 0x262D18u);
    ctx->pc = 0x262D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262D10u;
    // 0x262d14: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363A60u, 0x262D10u, 0x262D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262D18u;
label_262d18:
    // 0x262d18: 0x10000006  b           . + 4 + (0x6 << 2)
label_262d1c:
    if (ctx->pc == 0x262D1Cu) {
        ctx->pc = 0x262D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262D18u;
        // 0x262d1c: 0xdfb00070  ld          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262D20u;
        goto label_262d20;
    }
    ctx->pc = 0x262D18u;
    {
        const bool branch_taken_0x262d18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x262D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262D18u;
        // 0x262d1c: 0xdfb00070  ld          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262d18) {
            ctx->pc = 0x262D34u;
            goto label_262d34;
        }
    }
    ctx->pc = 0x262D20u;
label_262d20:
    // 0x262d20: 0x8c83005c  lw          $v1, 0x5C($a0)
    ctx->pc = 0x262d20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
label_262d24:
    // 0x262d24: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x262d24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_262d28:
    // 0x262d28: 0x40f809  jalr        $v0
label_262d2c:
    if (ctx->pc == 0x262D2Cu) {
        ctx->pc = 0x262D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262D28u;
        // 0x262d2c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262D30u;
        goto label_262d30;
    }
    ctx->pc = 0x262D28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x262D30u);
        ctx->pc = 0x262D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262D28u;
        // 0x262d2c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x262D28u, 0x262D30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x262D30u;
label_262d30:
    // 0x262d30: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x262d30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_262d34:
    // 0x262d34: 0xdfb10078  ld          $s1, 0x78($sp)
    ctx->pc = 0x262d34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 120)));
label_262d38:
    // 0x262d38: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x262d38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_262d3c:
    // 0x262d3c: 0x3e00008  jr          $ra
label_262d40:
    if (ctx->pc == 0x262D40u) {
        ctx->pc = 0x262D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262D3Cu;
        // 0x262d40: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262D44u;
        goto label_262d44;
    }
    ctx->pc = 0x262D3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x262D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262D3Cu;
        // 0x262d40: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x262D3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x262D44u;
label_262d44:
    // 0x262d44: 0x0  nop
    ctx->pc = 0x262d44u;
    // NOP
    ctx->pc = 0x262d48u;
}
