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

// Function: sub_00198008
// Address: 0x198008 - 0x198100
void sub_00198008_0x198008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00198008_0x198008");
#endif

    switch (ctx->pc) {
        case 0x198008u: goto label_198008;
        case 0x19800cu: goto label_19800c;
        case 0x198010u: goto label_198010;
        case 0x198014u: goto label_198014;
        case 0x198018u: goto label_198018;
        case 0x19801cu: goto label_19801c;
        case 0x198020u: goto label_198020;
        case 0x198024u: goto label_198024;
        case 0x198028u: goto label_198028;
        case 0x19802cu: goto label_19802c;
        case 0x198030u: goto label_198030;
        case 0x198034u: goto label_198034;
        case 0x198038u: goto label_198038;
        case 0x19803cu: goto label_19803c;
        case 0x198040u: goto label_198040;
        case 0x198044u: goto label_198044;
        case 0x198048u: goto label_198048;
        case 0x19804cu: goto label_19804c;
        case 0x198050u: goto label_198050;
        case 0x198054u: goto label_198054;
        case 0x198058u: goto label_198058;
        case 0x19805cu: goto label_19805c;
        case 0x198060u: goto label_198060;
        case 0x198064u: goto label_198064;
        case 0x198068u: goto label_198068;
        case 0x19806cu: goto label_19806c;
        case 0x198070u: goto label_198070;
        case 0x198074u: goto label_198074;
        case 0x198078u: goto label_198078;
        case 0x19807cu: goto label_19807c;
        case 0x198080u: goto label_198080;
        case 0x198084u: goto label_198084;
        case 0x198088u: goto label_198088;
        case 0x19808cu: goto label_19808c;
        case 0x198090u: goto label_198090;
        case 0x198094u: goto label_198094;
        case 0x198098u: goto label_198098;
        case 0x19809cu: goto label_19809c;
        case 0x1980a0u: goto label_1980a0;
        case 0x1980a4u: goto label_1980a4;
        case 0x1980a8u: goto label_1980a8;
        case 0x1980acu: goto label_1980ac;
        case 0x1980b0u: goto label_1980b0;
        case 0x1980b4u: goto label_1980b4;
        case 0x1980b8u: goto label_1980b8;
        case 0x1980bcu: goto label_1980bc;
        case 0x1980c0u: goto label_1980c0;
        case 0x1980c4u: goto label_1980c4;
        case 0x1980c8u: goto label_1980c8;
        case 0x1980ccu: goto label_1980cc;
        case 0x1980d0u: goto label_1980d0;
        case 0x1980d4u: goto label_1980d4;
        case 0x1980d8u: goto label_1980d8;
        case 0x1980dcu: goto label_1980dc;
        case 0x1980e0u: goto label_1980e0;
        case 0x1980e4u: goto label_1980e4;
        case 0x1980e8u: goto label_1980e8;
        case 0x1980ecu: goto label_1980ec;
        case 0x1980f0u: goto label_1980f0;
        case 0x1980f4u: goto label_1980f4;
        case 0x1980f8u: goto label_1980f8;
        case 0x1980fcu: goto label_1980fc;
        default: break;
    }

    ctx->pc = 0x198008u;

label_198008:
    // 0x198008: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x198008u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_19800c:
    // 0x19800c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x19800cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_198010:
    // 0x198010: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x198010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_198014:
    // 0x198014: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x198014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_198018:
    // 0x198018: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x198018u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19801c:
    // 0x19801c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x19801cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_198020:
    // 0x198020: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x198020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_198024:
    // 0x198024: 0x50430032  beql        $v0, $v1, . + 4 + (0x32 << 2)
label_198028:
    if (ctx->pc == 0x198028u) {
        ctx->pc = 0x198028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198024u;
        // 0x198028: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19802Cu;
        goto label_19802c;
    }
    ctx->pc = 0x198024u;
    {
        const bool branch_taken_0x198024 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x198024) {
            ctx->pc = 0x198028u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x198024u;
            // 0x198028: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1980F0u;
            goto label_1980f0;
        }
    }
    ctx->pc = 0x19802Cu;
label_19802c:
    // 0x19802c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x19802cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_198030:
    // 0x198030: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_198034:
    if (ctx->pc == 0x198034u) {
        ctx->pc = 0x198034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198030u;
        // 0x198034: 0xae030014  sw          $v1, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198038u;
        goto label_198038;
    }
    ctx->pc = 0x198030u;
    {
        const bool branch_taken_0x198030 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x198034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198030u;
        // 0x198034: 0xae030014  sw          $v1, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198030) {
            ctx->pc = 0x198048u;
            goto label_198048;
        }
    }
    ctx->pc = 0x198038u;
label_198038:
    // 0x198038: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x198038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_19803c:
    // 0x19803c: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x19803cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_198040:
    // 0x198040: 0x40f809  jalr        $v0
label_198044:
    if (ctx->pc == 0x198044u) {
        ctx->pc = 0x198048u;
        goto label_198048;
    }
    ctx->pc = 0x198040u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x198048u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x198040u, 0x198048u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x198048u;
label_198048:
    // 0x198048: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x198048u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_19804c:
    // 0x19804c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19804cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_198050:
    // 0x198050: 0xc061a12  jal         func_186848
label_198054:
    if (ctx->pc == 0x198054u) {
        ctx->pc = 0x198054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198050u;
        // 0x198054: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198058u;
        goto label_198058;
    }
    ctx->pc = 0x198050u;
    SET_GPR_U32(ctx, 31, 0x198058u);
    ctx->pc = 0x198054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198050u;
    // 0x198054: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x198050u, 0x198058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198058u;
label_198058:
    // 0x198058: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x198058u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_19805c:
    // 0x19805c: 0xc4400240  lwc1        $f0, 0x240($v0)
    ctx->pc = 0x19805cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_198060:
    // 0x198060: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x198060u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_198064:
    // 0x198064: 0x0  nop
    ctx->pc = 0x198064u;
    // NOP
label_198068:
    // 0x198068: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_19806c:
    if (ctx->pc == 0x19806Cu) {
        ctx->pc = 0x19806Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198068u;
        // 0x19806c: 0x24510220  addiu       $s1, $v0, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 544));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198070u;
        goto label_198070;
    }
    ctx->pc = 0x198068u;
    {
        const bool branch_taken_0x198068 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x198068) {
            ctx->pc = 0x19806Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x198068u;
            // 0x19806c: 0x24510220  addiu       $s1, $v0, 0x220 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 544));
            ctx->in_delay_slot = false;
            ctx->pc = 0x198070u;
            goto label_198070;
        }
    }
    ctx->pc = 0x198070u;
label_198070:
    // 0x198070: 0xc061a12  jal         func_186848
label_198074:
    if (ctx->pc == 0x198074u) {
        ctx->pc = 0x198074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198070u;
        // 0x198074: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198078u;
        goto label_198078;
    }
    ctx->pc = 0x198070u;
    SET_GPR_U32(ctx, 31, 0x198078u);
    ctx->pc = 0x198074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198070u;
    // 0x198074: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x198070u, 0x198078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198078u;
label_198078:
    // 0x198078: 0x244201e0  addiu       $v0, $v0, 0x1E0
    ctx->pc = 0x198078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 480));
label_19807c:
    // 0x19807c: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x19807cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_198080:
    // 0x198080: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x198080u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_198084:
    // 0x198084: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x198084u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_198088:
    // 0x198088: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x198088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
label_19808c:
    // 0x19808c: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x19808cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_198090:
    // 0x198090: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x198090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_198094:
    // 0x198094: 0xc7a30010  lwc1        $f3, 0x10($sp)
    ctx->pc = 0x198094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_198098:
    // 0x198098: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x198098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19809c:
    // 0x19809c: 0xc7a2001c  lwc1        $f2, 0x1C($sp)
    ctx->pc = 0x19809cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1980a0:
    // 0x1980a0: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x1980a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1980a4:
    // 0x1980a4: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x1980a4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1980a8:
    // 0x1980a8: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x1980a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1980ac:
    // 0x1980ac: 0xc061a12  jal         func_186848
label_1980b0:
    if (ctx->pc == 0x1980B0u) {
        ctx->pc = 0x1980B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1980ACu;
        // 0x1980b0: 0xe7a2000c  swc1        $f2, 0xC($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1980B4u;
        goto label_1980b4;
    }
    ctx->pc = 0x1980ACu;
    SET_GPR_U32(ctx, 31, 0x1980B4u);
    ctx->pc = 0x1980B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1980ACu;
    // 0x1980b0: 0xe7a2000c  swc1        $f2, 0xC($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x1980ACu, 0x1980B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1980B4u;
label_1980b4:
    // 0x1980b4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1980b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1980b8:
    // 0x1980b8: 0xc0707ac  jal         func_1C1EB0
label_1980bc:
    if (ctx->pc == 0x1980BCu) {
        ctx->pc = 0x1980BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1980B8u;
        // 0x1980bc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1980C0u;
        goto label_1980c0;
    }
    ctx->pc = 0x1980B8u;
    SET_GPR_U32(ctx, 31, 0x1980C0u);
    ctx->pc = 0x1980BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1980B8u;
    // 0x1980bc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C1EB0u, 0x1980B8u, 0x1980C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1980C0u;
label_1980c0:
    // 0x1980c0: 0xc061a16  jal         func_186858
label_1980c4:
    if (ctx->pc == 0x1980C4u) {
        ctx->pc = 0x1980C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1980C0u;
        // 0x1980c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1980C8u;
        goto label_1980c8;
    }
    ctx->pc = 0x1980C0u;
    SET_GPR_U32(ctx, 31, 0x1980C8u);
    ctx->pc = 0x1980C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1980C0u;
    // 0x1980c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x1980C0u, 0x1980C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1980C8u;
label_1980c8:
    // 0x1980c8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1980c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1980cc:
    // 0x1980cc: 0xc06ee66  jal         func_1BB998
label_1980d0:
    if (ctx->pc == 0x1980D0u) {
        ctx->pc = 0x1980D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1980CCu;
        // 0x1980d0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1980D4u;
        goto label_1980d4;
    }
    ctx->pc = 0x1980CCu;
    SET_GPR_U32(ctx, 31, 0x1980D4u);
    ctx->pc = 0x1980D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1980CCu;
    // 0x1980d0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB998u, 0x1980CCu, 0x1980D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1980D4u;
label_1980d4:
    // 0x1980d4: 0xc061a16  jal         func_186858
label_1980d8:
    if (ctx->pc == 0x1980D8u) {
        ctx->pc = 0x1980D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1980D4u;
        // 0x1980d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1980DCu;
        goto label_1980dc;
    }
    ctx->pc = 0x1980D4u;
    SET_GPR_U32(ctx, 31, 0x1980DCu);
    ctx->pc = 0x1980D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1980D4u;
    // 0x1980d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x1980D4u, 0x1980DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1980DCu;
label_1980dc:
    // 0x1980dc: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x1980dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
label_1980e0:
    // 0x1980e0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1980e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1980e4:
    // 0x1980e4: 0x0  nop
    ctx->pc = 0x1980e4u;
    // NOP
label_1980e8:
    // 0x1980e8: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x1980e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
label_1980ec:
    // 0x1980ec: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1980ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1980f0:
    // 0x1980f0: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x1980f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1980f4:
    // 0x1980f4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1980f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1980f8:
    // 0x1980f8: 0x3e00008  jr          $ra
label_1980fc:
    if (ctx->pc == 0x1980FCu) {
        ctx->pc = 0x1980FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1980F8u;
        // 0x1980fc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198100u;
        goto label_fallthrough_0x1980f8;
    }
    ctx->pc = 0x1980F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1980FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1980F8u;
        // 0x1980fc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1980F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1980f8:
    ctx->pc = 0x198100u;
}
