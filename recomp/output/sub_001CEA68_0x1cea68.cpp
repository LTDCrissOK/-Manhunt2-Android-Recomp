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

// Function: sub_001CEA68
// Address: 0x1cea68 - 0x1cea98
void sub_001CEA68_0x1cea68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CEA68_0x1cea68");
#endif

    ctx->pc = 0x1cea68u;

    // 0x1cea68: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CEA68u;
    {
        const bool branch_taken_0x1cea68 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CEA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEA68u;
        // 0x1cea6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cea68) {
            ctx->pc = 0x1CEA8Cu;
            goto label_1cea8c;
        }
    }
    ctx->pc = 0x1CEA70u;
    // 0x1cea70: 0xc480007c  lwc1        $f0, 0x7C($a0)
    ctx->pc = 0x1cea70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cea74: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x1cea74u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cea78: 0x0  nop
    ctx->pc = 0x1cea78u;
    // NOP
    // 0x1cea7c: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x1CEA7Cu;
    {
        const bool branch_taken_0x1cea7c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CEA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEA7Cu;
        // 0x1cea80: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cea7c) {
            ctx->pc = 0x1CEA8Cu;
            goto label_1cea8c;
        }
    }
    ctx->pc = 0x1CEA84u;
    // 0x1cea84: 0x3e00008  jr          $ra
    ctx->pc = 0x1CEA84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CEA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEA84u;
        // 0x1cea88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CEA84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CEA8Cu;
label_1cea8c:
    // 0x1cea8c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CEA8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CEA8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CEA94u;
    // 0x1cea94: 0x0  nop
    ctx->pc = 0x1cea94u;
    // NOP
    ctx->pc = 0x1cea98u;
}
