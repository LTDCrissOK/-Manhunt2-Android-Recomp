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

// Function: sub_001969D0
// Address: 0x1969d0 - 0x196a80
void sub_001969D0_0x1969d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001969D0_0x1969d0");
#endif

    switch (ctx->pc) {
        case 0x1969d0u: goto label_1969d0;
        case 0x1969d4u: goto label_1969d4;
        case 0x1969d8u: goto label_1969d8;
        case 0x1969dcu: goto label_1969dc;
        case 0x1969e0u: goto label_1969e0;
        case 0x1969e4u: goto label_1969e4;
        case 0x1969e8u: goto label_1969e8;
        case 0x1969ecu: goto label_1969ec;
        case 0x1969f0u: goto label_1969f0;
        case 0x1969f4u: goto label_1969f4;
        case 0x1969f8u: goto label_1969f8;
        case 0x1969fcu: goto label_1969fc;
        case 0x196a00u: goto label_196a00;
        case 0x196a04u: goto label_196a04;
        case 0x196a08u: goto label_196a08;
        case 0x196a0cu: goto label_196a0c;
        case 0x196a10u: goto label_196a10;
        case 0x196a14u: goto label_196a14;
        case 0x196a18u: goto label_196a18;
        case 0x196a1cu: goto label_196a1c;
        case 0x196a20u: goto label_196a20;
        case 0x196a24u: goto label_196a24;
        case 0x196a28u: goto label_196a28;
        case 0x196a2cu: goto label_196a2c;
        case 0x196a30u: goto label_196a30;
        case 0x196a34u: goto label_196a34;
        case 0x196a38u: goto label_196a38;
        case 0x196a3cu: goto label_196a3c;
        case 0x196a40u: goto label_196a40;
        case 0x196a44u: goto label_196a44;
        case 0x196a48u: goto label_196a48;
        case 0x196a4cu: goto label_196a4c;
        case 0x196a50u: goto label_196a50;
        case 0x196a54u: goto label_196a54;
        case 0x196a58u: goto label_196a58;
        case 0x196a5cu: goto label_196a5c;
        case 0x196a60u: goto label_196a60;
        case 0x196a64u: goto label_196a64;
        case 0x196a68u: goto label_196a68;
        case 0x196a6cu: goto label_196a6c;
        case 0x196a70u: goto label_196a70;
        case 0x196a74u: goto label_196a74;
        case 0x196a78u: goto label_196a78;
        case 0x196a7cu: goto label_196a7c;
        default: break;
    }

    ctx->pc = 0x1969d0u;

label_1969d0:
    // 0x1969d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1969d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1969d4:
    // 0x1969d4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1969d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1969d8:
    // 0x1969d8: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1969d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_1969dc:
    // 0x1969dc: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1969dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_1969e0:
    // 0x1969e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1969e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1969e4:
    // 0x1969e4: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1969e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1969e8:
    // 0x1969e8: 0x50430021  beql        $v0, $v1, . + 4 + (0x21 << 2)
label_1969ec:
    if (ctx->pc == 0x1969ECu) {
        ctx->pc = 0x1969ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1969E8u;
        // 0x1969ec: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1969F0u;
        goto label_1969f0;
    }
    ctx->pc = 0x1969E8u;
    {
        const bool branch_taken_0x1969e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1969e8) {
            ctx->pc = 0x1969ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1969E8u;
            // 0x1969ec: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x196A70u;
            goto label_196a70;
        }
    }
    ctx->pc = 0x1969F0u;
label_1969f0:
    // 0x1969f0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1969f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1969f4:
    // 0x1969f4: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_1969f8:
    if (ctx->pc == 0x1969F8u) {
        ctx->pc = 0x1969F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1969F4u;
        // 0x1969f8: 0xae030014  sw          $v1, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1969FCu;
        goto label_1969fc;
    }
    ctx->pc = 0x1969F4u;
    {
        const bool branch_taken_0x1969f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1969F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1969F4u;
        // 0x1969f8: 0xae030014  sw          $v1, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1969f4) {
            ctx->pc = 0x196A0Cu;
            goto label_196a0c;
        }
    }
    ctx->pc = 0x1969FCu;
label_1969fc:
    // 0x1969fc: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x1969fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_196a00:
    // 0x196a00: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x196a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_196a04:
    // 0x196a04: 0x40f809  jalr        $v0
label_196a08:
    if (ctx->pc == 0x196A08u) {
        ctx->pc = 0x196A0Cu;
        goto label_196a0c;
    }
    ctx->pc = 0x196A04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x196A0Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x196A04u, 0x196A0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x196A0Cu;
label_196a0c:
    // 0x196a0c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x196a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_196a10:
    // 0x196a10: 0xc061a12  jal         func_186848
label_196a14:
    if (ctx->pc == 0x196A14u) {
        ctx->pc = 0x196A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196A10u;
        // 0x196a14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196A18u;
        goto label_196a18;
    }
    ctx->pc = 0x196A10u;
    SET_GPR_U32(ctx, 31, 0x196A18u);
    ctx->pc = 0x196A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196A10u;
    // 0x196a14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x196A10u, 0x196A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196A18u;
label_196a18:
    // 0x196a18: 0x244201e0  addiu       $v0, $v0, 0x1E0
    ctx->pc = 0x196a18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 480));
label_196a1c:
    // 0x196a1c: 0x26030050  addiu       $v1, $s0, 0x50
    ctx->pc = 0x196a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_196a20:
    // 0x196a20: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x196a20u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_196a24:
    // 0x196a24: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x196a24u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_196a28:
    // 0x196a28: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x196a28u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_196a2c:
    // 0x196a2c: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x196a2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
label_196a30:
    // 0x196a30: 0xc7a30010  lwc1        $f3, 0x10($sp)
    ctx->pc = 0x196a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_196a34:
    // 0x196a34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x196a34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_196a38:
    // 0x196a38: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x196a38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_196a3c:
    // 0x196a3c: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x196a3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_196a40:
    // 0x196a40: 0xc7a2001c  lwc1        $f2, 0x1C($sp)
    ctx->pc = 0x196a40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_196a44:
    // 0x196a44: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x196a44u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_196a48:
    // 0x196a48: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x196a48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_196a4c:
    // 0x196a4c: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x196a4cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_196a50:
    // 0x196a50: 0xc061a12  jal         func_186848
label_196a54:
    if (ctx->pc == 0x196A54u) {
        ctx->pc = 0x196A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196A50u;
        // 0x196a54: 0xe7a2000c  swc1        $f2, 0xC($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x196A58u;
        goto label_196a58;
    }
    ctx->pc = 0x196A50u;
    SET_GPR_U32(ctx, 31, 0x196A58u);
    ctx->pc = 0x196A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196A50u;
    // 0x196a54: 0xe7a2000c  swc1        $f2, 0xC($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x196A50u, 0x196A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196A58u;
label_196a58:
    // 0x196a58: 0x8c430394  lw          $v1, 0x394($v0)
    ctx->pc = 0x196a58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 916)));
label_196a5c:
    // 0x196a5c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x196a5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_196a60:
    // 0x196a60: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x196a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_196a64:
    // 0x196a64: 0x40f809  jalr        $v0
label_196a68:
    if (ctx->pc == 0x196A68u) {
        ctx->pc = 0x196A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196A64u;
        // 0x196a68: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196A6Cu;
        goto label_196a6c;
    }
    ctx->pc = 0x196A64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x196A6Cu);
        ctx->pc = 0x196A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196A64u;
        // 0x196a68: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x196A64u, 0x196A6Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x196A6Cu;
label_196a6c:
    // 0x196a6c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x196a6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_196a70:
    // 0x196a70: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x196a70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_196a74:
    // 0x196a74: 0x3e00008  jr          $ra
label_196a78:
    if (ctx->pc == 0x196A78u) {
        ctx->pc = 0x196A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196A74u;
        // 0x196a78: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196A7Cu;
        goto label_196a7c;
    }
    ctx->pc = 0x196A74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x196A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196A74u;
        // 0x196a78: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x196A74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x196A7Cu;
label_196a7c:
    // 0x196a7c: 0x0  nop
    ctx->pc = 0x196a7cu;
    // NOP
    ctx->pc = 0x196a80u;
}
