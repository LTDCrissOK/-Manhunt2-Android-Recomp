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

// Function: sub_0013BAE0
// Address: 0x13bae0 - 0x13bba0
void sub_0013BAE0_0x13bae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013BAE0_0x13bae0");
#endif

    switch (ctx->pc) {
        case 0x13bb44u: goto label_13bb44;
        default: break;
    }

    ctx->pc = 0x13bae0u;

    // 0x13bae0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13bae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x13bae4: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x13bae4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x13bae8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x13bae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x13baec: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x13baecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x13baf0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x13baf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x13baf4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x13baf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x13baf8: 0x8c830ab0  lw          $v1, 0xAB0($a0)
    ctx->pc = 0x13baf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2736)));
    // 0x13bafc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x13bafcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x13bb00: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13bb00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13bb04: 0x8c420108  lw          $v0, 0x108($v0)
    ctx->pc = 0x13bb04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x13bb08: 0x5040001b  beql        $v0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x13BB08u;
    {
        const bool branch_taken_0x13bb08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13bb08) {
            ctx->pc = 0x13BB0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13BB08u;
            // 0x13bb0c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13BB78u;
            goto label_13bb78;
        }
    }
    ctx->pc = 0x13BB10u;
    // 0x13bb10: 0x50a00019  beql        $a1, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x13BB10u;
    {
        const bool branch_taken_0x13bb10 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x13bb10) {
            ctx->pc = 0x13BB14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13BB10u;
            // 0x13bb14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13BB78u;
            goto label_13bb78;
        }
    }
    ctx->pc = 0x13BB18u;
    // 0x13bb18: 0x8c420104  lw          $v0, 0x104($v0)
    ctx->pc = 0x13bb18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    // 0x13bb1c: 0x8ca30104  lw          $v1, 0x104($a1)
    ctx->pc = 0x13bb1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 260)));
    // 0x13bb20: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x13bb20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13bb24: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x13bb24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13bb28: 0x24910070  addiu       $s1, $a0, 0x70
    ctx->pc = 0x13bb28u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
    // 0x13bb2c: 0x12200011  beqz        $s1, . + 4 + (0x11 << 2)
    ctx->pc = 0x13BB2Cu;
    {
        const bool branch_taken_0x13bb2c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x13BB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BB2Cu;
        // 0x13bb30: 0x24b00070  addiu       $s0, $a1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bb2c) {
            ctx->pc = 0x13BB74u;
            goto label_13bb74;
        }
    }
    ctx->pc = 0x13BB34u;
    // 0x13bb34: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x13BB34u;
    {
        const bool branch_taken_0x13bb34 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x13BB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BB34u;
        // 0x13bb38: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bb34) {
            ctx->pc = 0x13BB78u;
            goto label_13bb78;
        }
    }
    ctx->pc = 0x13BB3Cu;
    // 0x13bb3c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x13BB3Cu;
    SET_GPR_U32(ctx, 31, 0x13BB44u);
    ctx->pc = 0x13BB40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13BB3Cu;
    // 0x13bb40: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x13BB3Cu, 0x13BB44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BB44u;
label_13bb44:
    // 0x13bb44: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x13bb44u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x13bb48: 0xda020000  lqc2        $vf2, 0x0($s0)
    ctx->pc = 0x13bb48u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13bb4c: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x13bb4cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x13bb50: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x13bb50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x13bb54: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x13bb54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13bb58: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x13bb58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x13bb5c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13bb5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13bb60: 0x0  nop
    ctx->pc = 0x13bb60u;
    // NOP
    // 0x13bb64: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x13bb64u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13bb68: 0x0  nop
    ctx->pc = 0x13bb68u;
    // NOP
    // 0x13bb6c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x13BB6Cu;
    {
        const bool branch_taken_0x13bb6c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x13BB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BB6Cu;
        // 0x13bb70: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13bb6c) {
            ctx->pc = 0x13BB78u;
            goto label_13bb78;
        }
    }
    ctx->pc = 0x13BB74u;
label_13bb74:
    // 0x13bb74: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13bb74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13bb78:
    // 0x13bb78: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x13bb78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13bb7c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x13bb7cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13bb80: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x13bb80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13bb84: 0x3e00008  jr          $ra
    ctx->pc = 0x13BB84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13BB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BB84u;
        // 0x13bb88: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13BB84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13BB8Cu;
    // 0x13bb8c: 0x0  nop
    ctx->pc = 0x13bb8cu;
    // NOP
    // 0x13bb90: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x13bb90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x13bb94: 0x0  nop
    ctx->pc = 0x13bb94u;
    // NOP
    // 0x13bb98: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x13bb98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x13bb9c: 0x0  nop
    ctx->pc = 0x13bb9cu;
    // NOP
    ctx->pc = 0x13bba0u;
}
