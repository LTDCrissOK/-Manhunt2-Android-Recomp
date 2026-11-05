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

// Function: sub_001DDCC0
// Address: 0x1ddcc0 - 0x1ddd38
void sub_001DDCC0_0x1ddcc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DDCC0_0x1ddcc0");
#endif

    switch (ctx->pc) {
        case 0x1ddcf8u: goto label_1ddcf8;
        default: break;
    }

    ctx->pc = 0x1ddcc0u;

    // 0x1ddcc0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1ddcc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1ddcc4: 0xc4a10010  lwc1        $f1, 0x10($a1)
    ctx->pc = 0x1ddcc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ddcc8: 0xc44091b0  lwc1        $f0, -0x6E50($v0)
    ctx->pc = 0x1ddcc8u;
    { uint32_t bits = FAST_READ32(0x3F91B0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ddccc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1ddcccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ddcd0: 0x0  nop
    ctx->pc = 0x1ddcd0u;
    // NOP
    // 0x1ddcd4: 0x45000015  bc1f        . + 4 + (0x15 << 2)
    ctx->pc = 0x1DDCD4u;
    {
        const bool branch_taken_0x1ddcd4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DDCD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDCD4u;
        // 0x1ddcd8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddcd4) {
            ctx->pc = 0x1DDD2Cu;
            goto label_1ddd2c;
        }
    }
    ctx->pc = 0x1DDCDCu;
    // 0x1ddcdc: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x1ddcdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1ddce0: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x1DDCE0u;
    {
        const bool branch_taken_0x1ddce0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ddce0) {
            ctx->pc = 0x1DDCE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DDCE0u;
            // 0x1ddce4: 0xc4a00010  lwc1        $f0, 0x10($a1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DDD18u;
            goto label_1ddd18;
        }
    }
    ctx->pc = 0x1DDCE8u;
    // 0x1ddce8: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x1ddce8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ddcec: 0x38620010  xori        $v0, $v1, 0x10
    ctx->pc = 0x1ddcecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)16);
    // 0x1ddcf0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DDCF0u;
    {
        const bool branch_taken_0x1ddcf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DDCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDCF0u;
        // 0x1ddcf4: 0x3c020047  lui         $v0, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddcf0) {
            ctx->pc = 0x1DDD00u;
            goto label_1ddd00;
        }
    }
    ctx->pc = 0x1DDCF8u;
label_1ddcf8:
    // 0x1ddcf8: 0x3e00008  jr          $ra
    ctx->pc = 0x1DDCF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DDCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDCF8u;
        // 0x1ddcfc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DDCF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DDD00u;
label_1ddd00:
    // 0x1ddd00: 0x24422870  addiu       $v0, $v0, 0x2870
    ctx->pc = 0x1ddd00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10352));
    // 0x1ddd04: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1ddd04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ddd08: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1ddd08u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ddd0c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1DDD0Cu;
    {
        const bool branch_taken_0x1ddd0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ddd0c) {
            ctx->pc = 0x1DDCF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ddcf8;
        }
    }
    ctx->pc = 0x1DDD14u;
    // 0x1ddd14: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x1ddd14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ddd18:
    // 0x1ddd18: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ddd18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ddd1c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ddd1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ddd20: 0xe48091b0  swc1        $f0, -0x6E50($a0)
    ctx->pc = 0x1ddd20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294939056), bits); }
    // 0x1ddd24: 0x3e00008  jr          $ra
    ctx->pc = 0x1DDD24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DDD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDD24u;
        // 0x1ddd28: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DDD24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DDD2Cu;
label_1ddd2c:
    // 0x1ddd2c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DDD2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DDD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDD2Cu;
        // 0x1ddd30: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DDD2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DDD34u;
    // 0x1ddd34: 0x0  nop
    ctx->pc = 0x1ddd34u;
    // NOP
    ctx->pc = 0x1ddd38u;
}
