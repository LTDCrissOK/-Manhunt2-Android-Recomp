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

// Function: sub_0025A710
// Address: 0x25a710 - 0x25a788
void sub_0025A710_0x25a710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025A710_0x25a710");
#endif

    ctx->pc = 0x25a710u;

    // 0x25a710: 0x3c014296  lui         $at, 0x4296
    ctx->pc = 0x25a710u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17046 << 16));
    // 0x25a714: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25a714u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25a718: 0x0  nop
    ctx->pc = 0x25a718u;
    // NOP
    // 0x25a71c: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x25a71cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25a720: 0x0  nop
    ctx->pc = 0x25a720u;
    // NOP
    // 0x25a724: 0x45010016  bc1t        . + 4 + (0x16 << 2)
    ctx->pc = 0x25A724u;
    {
        const bool branch_taken_0x25a724 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x25A728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A724u;
        // 0x25a728: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a724) {
            ctx->pc = 0x25A780u;
            goto label_25a780;
        }
    }
    ctx->pc = 0x25A72Cu;
    // 0x25a72c: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x25a72cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
    // 0x25a730: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25a730u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25a734: 0x0  nop
    ctx->pc = 0x25a734u;
    // NOP
    // 0x25a738: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x25a738u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25a73c: 0x0  nop
    ctx->pc = 0x25a73cu;
    // NOP
    // 0x25a740: 0x4501000f  bc1t        . + 4 + (0xF << 2)
    ctx->pc = 0x25A740u;
    {
        const bool branch_taken_0x25a740 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x25A744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A740u;
        // 0x25a744: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a740) {
            ctx->pc = 0x25A780u;
            goto label_25a780;
        }
    }
    ctx->pc = 0x25A748u;
    // 0x25a748: 0x3c014188  lui         $at, 0x4188
    ctx->pc = 0x25a748u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16776 << 16));
    // 0x25a74c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25a74cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25a750: 0x0  nop
    ctx->pc = 0x25a750u;
    // NOP
    // 0x25a754: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x25a754u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25a758: 0x0  nop
    ctx->pc = 0x25a758u;
    // NOP
    // 0x25a75c: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x25A75Cu;
    {
        const bool branch_taken_0x25a75c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x25A760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A75Cu;
        // 0x25a760: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a75c) {
            ctx->pc = 0x25A780u;
            goto label_25a780;
        }
    }
    ctx->pc = 0x25A764u;
    // 0x25a764: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x25a764u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25a768: 0x0  nop
    ctx->pc = 0x25a768u;
    // NOP
    // 0x25a76c: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x25a76cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25a770: 0x0  nop
    ctx->pc = 0x25a770u;
    // NOP
    // 0x25a774: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x25A774u;
    {
        const bool branch_taken_0x25a774 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x25A778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A774u;
        // 0x25a778: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a774) {
            ctx->pc = 0x25A780u;
            goto label_25a780;
        }
    }
    ctx->pc = 0x25A77Cu;
    // 0x25a77c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x25a77cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_25a780:
    // 0x25a780: 0x3e00008  jr          $ra
    ctx->pc = 0x25A780u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25A780u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25A788u;
}
