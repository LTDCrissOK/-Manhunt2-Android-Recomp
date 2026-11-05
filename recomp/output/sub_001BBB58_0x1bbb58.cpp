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

// Function: sub_001BBB58
// Address: 0x1bbb58 - 0x1bbc00
void sub_001BBB58_0x1bbb58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BBB58_0x1bbb58");
#endif

    switch (ctx->pc) {
        case 0x1bbbbcu: goto label_1bbbbc;
        default: break;
    }

    ctx->pc = 0x1bbb58u;

    // 0x1bbb58: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x1bbb58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x1bbb5c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1bbb5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bbb60: 0x0  nop
    ctx->pc = 0x1bbb60u;
    // NOP
    // 0x1bbb64: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x1bbb64u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1bbb68: 0x0  nop
    ctx->pc = 0x1bbb68u;
    // NOP
    // 0x1bbb6c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1BBB6Cu;
    {
        const bool branch_taken_0x1bbb6c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1bbb6c) {
            ctx->pc = 0x1BBB70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BBB6Cu;
            // 0x1bbb70: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
            ctx->f[12] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BBB74u;
            goto label_1bbb74;
        }
    }
    ctx->pc = 0x1BBB74u;
label_1bbb74:
    // 0x1bbb74: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bbb74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bbb78: 0x10a20014  beq         $a1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1BBB78u;
    {
        const bool branch_taken_0x1bbb78 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BBB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBB78u;
        // 0x1bbb7c: 0x28a20002  slti        $v0, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbb78) {
            ctx->pc = 0x1BBBCCu;
            goto label_1bbbcc;
        }
    }
    ctx->pc = 0x1BBB80u;
    // 0x1bbb80: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BBB80u;
    {
        const bool branch_taken_0x1bbb80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bbb80) {
            ctx->pc = 0x1BBB84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BBB80u;
            // 0x1bbb84: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BBB98u;
            goto label_1bbb98;
        }
    }
    ctx->pc = 0x1BBB88u;
    // 0x1bbb88: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BBB88u;
    {
        const bool branch_taken_0x1bbb88 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bbb88) {
            ctx->pc = 0x1BBBA8u;
            goto label_1bbba8;
        }
    }
    ctx->pc = 0x1BBB90u;
    // 0x1bbb90: 0x3e00008  jr          $ra
    ctx->pc = 0x1BBB90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BBB90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BBB98u;
label_1bbb98:
    // 0x1bbb98: 0x50a20012  beql        $a1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1BBB98u;
    {
        const bool branch_taken_0x1bbb98 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x1bbb98) {
            ctx->pc = 0x1BBB9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BBB98u;
            // 0x1bbb9c: 0xac800068  sw          $zero, 0x68($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 104), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BBBE4u;
            goto label_1bbbe4;
        }
    }
    ctx->pc = 0x1BBBA0u;
    // 0x1bbba0: 0x3e00008  jr          $ra
    ctx->pc = 0x1BBBA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BBBA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BBBA8u;
label_1bbba8:
    // 0x1bbba8: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x1bbba8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x1bbbac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1bbbacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bbbb0: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x1bbbb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x1bbbb4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1bbbb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bbbb8: 0x46006001  sub.s       $f0, $f12, $f0
    ctx->pc = 0x1bbbb8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
label_1bbbbc:
    // 0x1bbbbc: 0xe48c0060  swc1        $f12, 0x60($a0)
    ctx->pc = 0x1bbbbcu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 96), bits); }
    // 0x1bbbc0: 0xe4810068  swc1        $f1, 0x68($a0)
    ctx->pc = 0x1bbbc0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 104), bits); }
    // 0x1bbbc4: 0x3e00008  jr          $ra
    ctx->pc = 0x1BBBC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BBBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBBC4u;
        // 0x1bbbc8: 0xe4800064  swc1        $f0, 0x64($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 100), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BBBC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BBBCCu;
label_1bbbcc:
    // 0x1bbbcc: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x1bbbccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x1bbbd0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1bbbd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bbbd4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1bbbd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1bbbd8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1bbbd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bbbdc: 0x1000fff7  b           . + 4 + (-0x9 << 2)
    ctx->pc = 0x1BBBDCu;
    {
        const bool branch_taken_0x1bbbdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BBBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBBDCu;
        // 0x1bbbe0: 0x46006001  sub.s       $f0, $f12, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbbdc) {
            ctx->pc = 0x1BBBBCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bbbbc;
        }
    }
    ctx->pc = 0x1BBBE4u;
label_1bbbe4:
    // 0x1bbbe4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1bbbe4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1bbbe8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1bbbe8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bbbec: 0x0  nop
    ctx->pc = 0x1bbbecu;
    // NOP
    // 0x1bbbf0: 0x46006001  sub.s       $f0, $f12, $f0
    ctx->pc = 0x1bbbf0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x1bbbf4: 0xe48c0060  swc1        $f12, 0x60($a0)
    ctx->pc = 0x1bbbf4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 96), bits); }
    // 0x1bbbf8: 0x3e00008  jr          $ra
    ctx->pc = 0x1BBBF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BBBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBBF8u;
        // 0x1bbbfc: 0xe4800064  swc1        $f0, 0x64($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 100), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BBBF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BBC00u;
}
