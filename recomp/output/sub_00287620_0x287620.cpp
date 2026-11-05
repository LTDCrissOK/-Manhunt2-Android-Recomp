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

// Function: sub_00287620
// Address: 0x287620 - 0x2876a0
void sub_00287620_0x287620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00287620_0x287620");
#endif

    ctx->pc = 0x287620u;

    // 0x287620: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x287620u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x287624: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x287624u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x287628: 0x8ca4a4bc  lw          $a0, -0x5B44($a1)
    ctx->pc = 0x287628u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3FA4BCu));
    // 0x28762c: 0x8c62a4c0  lw          $v0, -0x5B40($v1)
    ctx->pc = 0x28762cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FA4C0u));
    // 0x287630: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x287630u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x287634: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x287634u;
    {
        const bool branch_taken_0x287634 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x287638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287634u;
        // 0x287638: 0x27bdffe0  addiu       $sp, $sp, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287634) {
            ctx->pc = 0x28764Cu;
            goto label_28764c;
        }
    }
    ctx->pc = 0x28763Cu;
    // 0x28763c: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x28763cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x287640: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x287640u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x287644: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x287644u;
    {
        const bool branch_taken_0x287644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x287648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287644u;
        // 0x287648: 0xaca3a4bc  sw          $v1, -0x5B44($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4294943932), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287644) {
            ctx->pc = 0x287698u;
            goto label_287698;
        }
    }
    ctx->pc = 0x28764Cu;
label_28764c:
    // 0x28764c: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x28764cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x287650: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x287650u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x287654: 0xc4822450  lwc1        $f2, 0x2450($a0)
    ctx->pc = 0x287654u;
    { uint32_t bits = FAST_READ32(0x4C2450u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x287658: 0x24832450  addiu       $v1, $a0, 0x2450
    ctx->pc = 0x287658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 9296));
    // 0x28765c: 0xc444a4c4  lwc1        $f4, -0x5B3C($v0)
    ctx->pc = 0x28765cu;
    { uint32_t bits = FAST_READ32(0x3FA4C4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x287660: 0xc4630008  lwc1        $f3, 0x8($v1)
    ctx->pc = 0x287660u;
    { uint32_t bits = FAST_READ32(0x4C2458u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x287664: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x287664u;
    { uint32_t bits = FAST_READ32(0x4C245Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x287668: 0x46022034  c.lt.s      $f4, $f2
    ctx->pc = 0x287668u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28766c: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x28766cu;
    { uint32_t bits = FAST_READ32(0x4C2454u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x287670: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x287670u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x287674: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x287674u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x287678: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x287678u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x28767c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x28767Cu;
    {
        const bool branch_taken_0x28767c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x287680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28767Cu;
        // 0x287680: 0xe7a30010  swc1        $f3, 0x10($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28767c) {
            ctx->pc = 0x287694u;
            goto label_287694;
        }
    }
    ctx->pc = 0x287684u;
    // 0x287684: 0x46032034  c.lt.s      $f4, $f3
    ctx->pc = 0x287684u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x287688: 0x0  nop
    ctx->pc = 0x287688u;
    // NOP
    // 0x28768c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x28768Cu;
    {
        const bool branch_taken_0x28768c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x287690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28768Cu;
        // 0x287690: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28768c) {
            ctx->pc = 0x287698u;
            goto label_287698;
        }
    }
    ctx->pc = 0x287694u;
label_287694:
    // 0x287694: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x287694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_287698:
    // 0x287698: 0x3e00008  jr          $ra
    ctx->pc = 0x287698u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28769Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287698u;
        // 0x28769c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x287698u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2876A0u;
}
