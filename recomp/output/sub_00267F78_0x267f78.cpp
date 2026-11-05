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

// Function: sub_00267F78
// Address: 0x267f78 - 0x2680e0
void sub_00267F78_0x267f78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00267F78_0x267f78");
#endif

    switch (ctx->pc) {
        case 0x267f78u: goto label_267f78;
        case 0x267f7cu: goto label_267f7c;
        case 0x267f80u: goto label_267f80;
        case 0x267f84u: goto label_267f84;
        case 0x267f88u: goto label_267f88;
        case 0x267f8cu: goto label_267f8c;
        case 0x267f90u: goto label_267f90;
        case 0x267f94u: goto label_267f94;
        case 0x267f98u: goto label_267f98;
        case 0x267f9cu: goto label_267f9c;
        case 0x267fa0u: goto label_267fa0;
        case 0x267fa4u: goto label_267fa4;
        case 0x267fa8u: goto label_267fa8;
        case 0x267facu: goto label_267fac;
        case 0x267fb0u: goto label_267fb0;
        case 0x267fb4u: goto label_267fb4;
        case 0x267fb8u: goto label_267fb8;
        case 0x267fbcu: goto label_267fbc;
        case 0x267fc0u: goto label_267fc0;
        case 0x267fc4u: goto label_267fc4;
        case 0x267fc8u: goto label_267fc8;
        case 0x267fccu: goto label_267fcc;
        case 0x267fd0u: goto label_267fd0;
        case 0x267fd4u: goto label_267fd4;
        case 0x267fd8u: goto label_267fd8;
        case 0x267fdcu: goto label_267fdc;
        case 0x267fe0u: goto label_267fe0;
        case 0x267fe4u: goto label_267fe4;
        case 0x267fe8u: goto label_267fe8;
        case 0x267fecu: goto label_267fec;
        case 0x267ff0u: goto label_267ff0;
        case 0x267ff4u: goto label_267ff4;
        case 0x267ff8u: goto label_267ff8;
        case 0x267ffcu: goto label_267ffc;
        case 0x268000u: goto label_268000;
        case 0x268004u: goto label_268004;
        case 0x268008u: goto label_268008;
        case 0x26800cu: goto label_26800c;
        case 0x268010u: goto label_268010;
        case 0x268014u: goto label_268014;
        case 0x268018u: goto label_268018;
        case 0x26801cu: goto label_26801c;
        case 0x268020u: goto label_268020;
        case 0x268024u: goto label_268024;
        case 0x268028u: goto label_268028;
        case 0x26802cu: goto label_26802c;
        case 0x268030u: goto label_268030;
        case 0x268034u: goto label_268034;
        case 0x268038u: goto label_268038;
        case 0x26803cu: goto label_26803c;
        case 0x268040u: goto label_268040;
        case 0x268044u: goto label_268044;
        case 0x268048u: goto label_268048;
        case 0x26804cu: goto label_26804c;
        case 0x268050u: goto label_268050;
        case 0x268054u: goto label_268054;
        case 0x268058u: goto label_268058;
        case 0x26805cu: goto label_26805c;
        case 0x268060u: goto label_268060;
        case 0x268064u: goto label_268064;
        case 0x268068u: goto label_268068;
        case 0x26806cu: goto label_26806c;
        case 0x268070u: goto label_268070;
        case 0x268074u: goto label_268074;
        case 0x268078u: goto label_268078;
        case 0x26807cu: goto label_26807c;
        case 0x268080u: goto label_268080;
        case 0x268084u: goto label_268084;
        case 0x268088u: goto label_268088;
        case 0x26808cu: goto label_26808c;
        case 0x268090u: goto label_268090;
        case 0x268094u: goto label_268094;
        case 0x268098u: goto label_268098;
        case 0x26809cu: goto label_26809c;
        case 0x2680a0u: goto label_2680a0;
        case 0x2680a4u: goto label_2680a4;
        case 0x2680a8u: goto label_2680a8;
        case 0x2680acu: goto label_2680ac;
        case 0x2680b0u: goto label_2680b0;
        case 0x2680b4u: goto label_2680b4;
        case 0x2680b8u: goto label_2680b8;
        case 0x2680bcu: goto label_2680bc;
        case 0x2680c0u: goto label_2680c0;
        case 0x2680c4u: goto label_2680c4;
        case 0x2680c8u: goto label_2680c8;
        case 0x2680ccu: goto label_2680cc;
        case 0x2680d0u: goto label_2680d0;
        case 0x2680d4u: goto label_2680d4;
        case 0x2680d8u: goto label_2680d8;
        case 0x2680dcu: goto label_2680dc;
        default: break;
    }

    ctx->pc = 0x267f78u;

label_267f78:
    // 0x267f78: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x267f78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_267f7c:
    // 0x267f7c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x267f7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_267f80:
    // 0x267f80: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x267f80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_267f84:
    // 0x267f84: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x267f84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_267f88:
    // 0x267f88: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x267f88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_267f8c:
    // 0x267f8c: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x267f8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
label_267f90:
    // 0x267f90: 0x8e420278  lw          $v0, 0x278($s2)
    ctx->pc = 0x267f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 632)));
label_267f94:
    // 0x267f94: 0x10400049  beqz        $v0, . + 4 + (0x49 << 2)
label_267f98:
    if (ctx->pc == 0x267F98u) {
        ctx->pc = 0x267F9Cu;
        goto label_267f9c;
    }
    ctx->pc = 0x267F94u;
    {
        const bool branch_taken_0x267f94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x267f94) {
            ctx->pc = 0x2680BCu;
            goto label_2680bc;
        }
    }
    ctx->pc = 0x267F9Cu;
label_267f9c:
    // 0x267f9c: 0x8c420104  lw          $v0, 0x104($v0)
    ctx->pc = 0x267f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
label_267fa0:
    // 0x267fa0: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x267fa0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_267fa4:
    // 0x267fa4: 0xc0f70ce  jal         func_3DC338
label_267fa8:
    if (ctx->pc == 0x267FA8u) {
        ctx->pc = 0x267FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267FA4u;
        // 0x267fa8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267FACu;
        goto label_267fac;
    }
    ctx->pc = 0x267FA4u;
    SET_GPR_U32(ctx, 31, 0x267FACu);
    ctx->pc = 0x267FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267FA4u;
    // 0x267fa8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x267FA4u, 0x267FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267FACu;
label_267fac:
    // 0x267fac: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_267fb0:
    if (ctx->pc == 0x267FB0u) {
        ctx->pc = 0x267FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267FACu;
        // 0x267fb0: 0x260300b0  addiu       $v1, $s0, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267FB4u;
        goto label_267fb4;
    }
    ctx->pc = 0x267FACu;
    {
        const bool branch_taken_0x267fac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x267FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267FACu;
        // 0x267fb0: 0x260300b0  addiu       $v1, $s0, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267fac) {
            ctx->pc = 0x267FC0u;
            goto label_267fc0;
        }
    }
    ctx->pc = 0x267FB4u;
label_267fb4:
    // 0x267fb4: 0xc0c4900  jal         func_312400
label_267fb8:
    if (ctx->pc == 0x267FB8u) {
        ctx->pc = 0x267FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267FB4u;
        // 0x267fb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x267FBCu;
        goto label_267fbc;
    }
    ctx->pc = 0x267FB4u;
    SET_GPR_U32(ctx, 31, 0x267FBCu);
    ctx->pc = 0x267FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267FB4u;
    // 0x267fb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x267FB4u, 0x267FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267FBCu;
label_267fbc:
    // 0x267fbc: 0x260300b0  addiu       $v1, $s0, 0xB0
    ctx->pc = 0x267fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
label_267fc0:
    // 0x267fc0: 0x26420280  addiu       $v0, $s2, 0x280
    ctx->pc = 0x267fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 640));
label_267fc4:
    // 0x267fc4: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x267fc4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_267fc8:
    // 0x267fc8: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x267fc8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_267fcc:
    // 0x267fcc: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x267fccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_267fd0:
    // 0x267fd0: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x267fd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
label_267fd4:
    // 0x267fd4: 0xc7a30010  lwc1        $f3, 0x10($sp)
    ctx->pc = 0x267fd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_267fd8:
    // 0x267fd8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x267fd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_267fdc:
    // 0x267fdc: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x267fdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_267fe0:
    // 0x267fe0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x267fe0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_267fe4:
    // 0x267fe4: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x267fe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_267fe8:
    // 0x267fe8: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x267fe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_267fec:
    // 0x267fec: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x267fecu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_267ff0:
    // 0x267ff0: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x267ff0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_267ff4:
    // 0x267ff4: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x267ff4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_267ff8:
    // 0x267ff8: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x267ff8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_267ffc:
    // 0x267ffc: 0x8e420218  lw          $v0, 0x218($s2)
    ctx->pc = 0x267ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 536)));
label_268000:
    // 0x268000: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x268000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_268004:
    // 0x268004: 0x60f809  jalr        $v1
label_268008:
    if (ctx->pc == 0x268008u) {
        ctx->pc = 0x268008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268004u;
        // 0x268008: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26800Cu;
        goto label_26800c;
    }
    ctx->pc = 0x268004u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x26800Cu);
        ctx->pc = 0x268008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268004u;
        // 0x268008: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x268004u, 0x26800Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26800Cu;
label_26800c:
    // 0x26800c: 0x8e440278  lw          $a0, 0x278($s2)
    ctx->pc = 0x26800cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 632)));
label_268010:
    // 0x268010: 0x8e430104  lw          $v1, 0x104($s2)
    ctx->pc = 0x268010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
label_268014:
    // 0x268014: 0x8c8200bc  lw          $v0, 0xBC($a0)
    ctx->pc = 0x268014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 188)));
label_268018:
    // 0x268018: 0x30423001  andi        $v0, $v0, 0x3001
    ctx->pc = 0x268018u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)12289);
label_26801c:
    // 0x26801c: 0x38423001  xori        $v0, $v0, 0x3001
    ctx->pc = 0x26801cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)12289);
label_268020:
    // 0x268020: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
label_268024:
    if (ctx->pc == 0x268024u) {
        ctx->pc = 0x268024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268020u;
        // 0x268024: 0x8c710000  lw          $s1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268028u;
        goto label_268028;
    }
    ctx->pc = 0x268020u;
    {
        const bool branch_taken_0x268020 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x268024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268020u;
        // 0x268024: 0x8c710000  lw          $s1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268020) {
            ctx->pc = 0x26806Cu;
            goto label_26806c;
        }
    }
    ctx->pc = 0x268028u;
label_268028:
    // 0x268028: 0x8c820274  lw          $v0, 0x274($a0)
    ctx->pc = 0x268028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 628)));
label_26802c:
    // 0x26802c: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
label_268030:
    if (ctx->pc == 0x268030u) {
        ctx->pc = 0x268030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26802Cu;
        // 0x268030: 0x8c820104  lw          $v0, 0x104($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 260)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268034u;
        goto label_268034;
    }
    ctx->pc = 0x26802Cu;
    {
        const bool branch_taken_0x26802c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26802c) {
            ctx->pc = 0x268030u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26802Cu;
            // 0x268030: 0x8c820104  lw          $v0, 0x104($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x268070u;
            goto label_268070;
        }
    }
    ctx->pc = 0x268034u;
label_268034:
    // 0x268034: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x268034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_268038:
    // 0x268038: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x268038u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_26803c:
    // 0x26803c: 0xfa210040  sqc2        $vf1, 0x40($s1)
    ctx->pc = 0x26803cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 64), _mm_castps_si128(ctx->vu0_vf[1]));
label_268040:
    // 0x268040: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x268040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_268044:
    // 0x268044: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x268044u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_268048:
    // 0x268048: 0xfa210050  sqc2        $vf1, 0x50($s1)
    ctx->pc = 0x268048u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 80), _mm_castps_si128(ctx->vu0_vf[1]));
label_26804c:
    // 0x26804c: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x26804cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_268050:
    // 0x268050: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x268050u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_268054:
    // 0x268054: 0xfa210060  sqc2        $vf1, 0x60($s1)
    ctx->pc = 0x268054u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 96), _mm_castps_si128(ctx->vu0_vf[1]));
label_268058:
    // 0x268058: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x268058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
label_26805c:
    // 0x26805c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x26805cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_268060:
    // 0x268060: 0xfa210070  sqc2        $vf1, 0x70($s1)
    ctx->pc = 0x268060u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 112), _mm_castps_si128(ctx->vu0_vf[1]));
label_268064:
    // 0x268064: 0x10000015  b           . + 4 + (0x15 << 2)
label_268068:
    if (ctx->pc == 0x268068u) {
        ctx->pc = 0x26806Cu;
        goto label_26806c;
    }
    ctx->pc = 0x268064u;
    {
        const bool branch_taken_0x268064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x268064) {
            ctx->pc = 0x2680BCu;
            goto label_2680bc;
        }
    }
    ctx->pc = 0x26806Cu;
label_26806c:
    // 0x26806c: 0x8c820104  lw          $v0, 0x104($a0)
    ctx->pc = 0x26806cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 260)));
label_268070:
    // 0x268070: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x268070u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_268074:
    // 0x268074: 0xc0f70ce  jal         func_3DC338
label_268078:
    if (ctx->pc == 0x268078u) {
        ctx->pc = 0x268078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268074u;
        // 0x268078: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26807Cu;
        goto label_26807c;
    }
    ctx->pc = 0x268074u;
    SET_GPR_U32(ctx, 31, 0x26807Cu);
    ctx->pc = 0x268078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268074u;
    // 0x268078: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x268074u, 0x26807Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26807Cu;
label_26807c:
    // 0x26807c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_268080:
    if (ctx->pc == 0x268080u) {
        ctx->pc = 0x268080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26807Cu;
        // 0x268080: 0x26020080  addiu       $v0, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x268084u;
        goto label_268084;
    }
    ctx->pc = 0x26807Cu;
    {
        const bool branch_taken_0x26807c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x268080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26807Cu;
        // 0x268080: 0x26020080  addiu       $v0, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26807c) {
            ctx->pc = 0x268090u;
            goto label_268090;
        }
    }
    ctx->pc = 0x268084u;
label_268084:
    // 0x268084: 0xc0c4900  jal         func_312400
label_268088:
    if (ctx->pc == 0x268088u) {
        ctx->pc = 0x268088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268084u;
        // 0x268088: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26808Cu;
        goto label_26808c;
    }
    ctx->pc = 0x268084u;
    SET_GPR_U32(ctx, 31, 0x26808Cu);
    ctx->pc = 0x268088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268084u;
    // 0x268088: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x268084u, 0x26808Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26808Cu;
label_26808c:
    // 0x26808c: 0x26020080  addiu       $v0, $s0, 0x80
    ctx->pc = 0x26808cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
label_268090:
    // 0x268090: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x268090u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_268094:
    // 0x268094: 0xfa210040  sqc2        $vf1, 0x40($s1)
    ctx->pc = 0x268094u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 64), _mm_castps_si128(ctx->vu0_vf[1]));
label_268098:
    // 0x268098: 0x26030090  addiu       $v1, $s0, 0x90
    ctx->pc = 0x268098u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
label_26809c:
    // 0x26809c: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x26809cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2680a0:
    // 0x2680a0: 0xfa210050  sqc2        $vf1, 0x50($s1)
    ctx->pc = 0x2680a0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 80), _mm_castps_si128(ctx->vu0_vf[1]));
label_2680a4:
    // 0x2680a4: 0x260200a0  addiu       $v0, $s0, 0xA0
    ctx->pc = 0x2680a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_2680a8:
    // 0x2680a8: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2680a8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2680ac:
    // 0x2680ac: 0xfa210060  sqc2        $vf1, 0x60($s1)
    ctx->pc = 0x2680acu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 96), _mm_castps_si128(ctx->vu0_vf[1]));
label_2680b0:
    // 0x2680b0: 0x260300b0  addiu       $v1, $s0, 0xB0
    ctx->pc = 0x2680b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
label_2680b4:
    // 0x2680b4: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2680b4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2680b8:
    // 0x2680b8: 0xfa210070  sqc2        $vf1, 0x70($s1)
    ctx->pc = 0x2680b8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 112), _mm_castps_si128(ctx->vu0_vf[1]));
label_2680bc:
    // 0x2680bc: 0xc084172  jal         func_2105C8
label_2680c0:
    if (ctx->pc == 0x2680C0u) {
        ctx->pc = 0x2680C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2680BCu;
        // 0x2680c0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2680C4u;
        goto label_2680c4;
    }
    ctx->pc = 0x2680BCu;
    SET_GPR_U32(ctx, 31, 0x2680C4u);
    ctx->pc = 0x2680C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2680BCu;
    // 0x2680c0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2105C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2105C8u, 0x2680BCu, 0x2680C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2680C4u;
label_2680c4:
    // 0x2680c4: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2680c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2680c8:
    // 0x2680c8: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x2680c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_2680cc:
    // 0x2680cc: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2680ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2680d0:
    // 0x2680d0: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x2680d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_2680d4:
    // 0x2680d4: 0x3e00008  jr          $ra
label_2680d8:
    if (ctx->pc == 0x2680D8u) {
        ctx->pc = 0x2680D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2680D4u;
        // 0x2680d8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2680DCu;
        goto label_2680dc;
    }
    ctx->pc = 0x2680D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2680D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2680D4u;
        // 0x2680d8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2680D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2680DCu;
label_2680dc:
    // 0x2680dc: 0x0  nop
    ctx->pc = 0x2680dcu;
    // NOP
    ctx->pc = 0x2680e0u;
}
