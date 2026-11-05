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

// Function: sub_001DDD38
// Address: 0x1ddd38 - 0x1dddf8
void sub_001DDD38_0x1ddd38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DDD38_0x1ddd38");
#endif

    switch (ctx->pc) {
        case 0x1dddb8u: goto label_1dddb8;
        default: break;
    }

    ctx->pc = 0x1ddd38u;

    // 0x1ddd38: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1ddd38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1ddd3c: 0xc4a10010  lwc1        $f1, 0x10($a1)
    ctx->pc = 0x1ddd3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ddd40: 0xc44091b0  lwc1        $f0, -0x6E50($v0)
    ctx->pc = 0x1ddd40u;
    { uint32_t bits = FAST_READ32(0x3F91B0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ddd44: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1ddd44u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ddd48: 0x0  nop
    ctx->pc = 0x1ddd48u;
    // NOP
    // 0x1ddd4c: 0x45000028  bc1f        . + 4 + (0x28 << 2)
    ctx->pc = 0x1DDD4Cu;
    {
        const bool branch_taken_0x1ddd4c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DDD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDD4Cu;
        // 0x1ddd50: 0x40582d  daddu       $t3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddd4c) {
            ctx->pc = 0x1DDDF0u;
            goto label_1dddf0;
        }
    }
    ctx->pc = 0x1DDD54u;
    // 0x1ddd54: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x1ddd54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1ddd58: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x1DDD58u;
    {
        const bool branch_taken_0x1ddd58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ddd58) {
            ctx->pc = 0x1DDD5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DDD58u;
            // 0x1ddd5c: 0x3c020049  lui         $v0, 0x49 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DDD8Cu;
            goto label_1ddd8c;
        }
    }
    ctx->pc = 0x1DDD60u;
    // 0x1ddd60: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x1ddd60u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ddd64: 0x38620010  xori        $v0, $v1, 0x10
    ctx->pc = 0x1ddd64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)16);
    // 0x1ddd68: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DDD68u;
    {
        const bool branch_taken_0x1ddd68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DDD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDD68u;
        // 0x1ddd6c: 0x3c020047  lui         $v0, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddd68) {
            ctx->pc = 0x1DDD78u;
            goto label_1ddd78;
        }
    }
    ctx->pc = 0x1DDD70u;
    // 0x1ddd70: 0x3e00008  jr          $ra
    ctx->pc = 0x1DDD70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DDD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDD70u;
        // 0x1ddd74: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DDD70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DDD78u;
label_1ddd78:
    // 0x1ddd78: 0x24422870  addiu       $v0, $v0, 0x2870
    ctx->pc = 0x1ddd78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10352));
    // 0x1ddd7c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1ddd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ddd80: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1ddd80u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ddd84: 0x1460001a  bnez        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x1DDD84u;
    {
        const bool branch_taken_0x1ddd84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DDD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDD84u;
        // 0x1ddd88: 0x3c020049  lui         $v0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddd84) {
            ctx->pc = 0x1DDDF0u;
            goto label_1dddf0;
        }
    }
    ctx->pc = 0x1DDD8Cu;
label_1ddd8c:
    // 0x1ddd8c: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x1ddd8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1ddd90: 0x244400b0  addiu       $a0, $v0, 0xB0
    ctx->pc = 0x1ddd90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x1ddd94: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1ddd94u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ddd98: 0xf84100b0  sqc2        $vf1, 0xB0($v0)
    ctx->pc = 0x1ddd98u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 176), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ddd9c: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x1ddd9cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ddda0: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x1ddda0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ddda4: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x1ddda4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1ddda8: 0x24880014  addiu       $t0, $a0, 0x14
    ctx->pc = 0x1ddda8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x1dddac: 0x24630014  addiu       $v1, $v1, 0x14
    ctx->pc = 0x1dddacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x1dddb0: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1dddb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1dddb4: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x1dddb4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
label_1dddb8:
    // 0x1dddb8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1dddb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1dddbc: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x1dddbcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x1dddc0: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x1dddc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1dddc4: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x1dddc4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x1dddc8: 0x14e9fffb  bne         $a3, $t1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1DDDC8u;
    {
        const bool branch_taken_0x1dddc8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 9));
        ctx->pc = 0x1DDDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDDC8u;
        // 0x1dddcc: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dddc8) {
            ctx->pc = 0x1DDDB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dddb8;
        }
    }
    ctx->pc = 0x1DDDD0u;
    // 0x1dddd0: 0x254200b0  addiu       $v0, $t2, 0xB0
    ctx->pc = 0x1dddd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 176));
    // 0x1dddd4: 0xacc20034  sw          $v0, 0x34($a2)
    ctx->pc = 0x1dddd4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 52), GPR_U32(ctx, 2));
    // 0x1dddd8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1dddd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1ddddc: 0xacc30040  sw          $v1, 0x40($a2)
    ctx->pc = 0x1ddddcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 64), GPR_U32(ctx, 3));
    // 0x1ddde0: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x1ddde0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1ddde4: 0xacc20050  sw          $v0, 0x50($a2)
    ctx->pc = 0x1ddde4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 80), GPR_U32(ctx, 2));
    // 0x1ddde8: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x1ddde8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dddec: 0xe56091b0  swc1        $f0, -0x6E50($t3)
    ctx->pc = 0x1dddecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 4294939056), bits); }
label_1dddf0:
    // 0x1dddf0: 0x3e00008  jr          $ra
    ctx->pc = 0x1DDDF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DDDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDDF0u;
        // 0x1dddf4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DDDF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DDDF8u;
}
