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

// Function: sub_003DD708
// Address: 0x3dd708 - 0x3dd730
void sub_003DD708_0x3dd708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DD708_0x3dd708");
#endif

    ctx->pc = 0x3dd708u;

    // 0x3dd708: 0xc4810054  lwc1        $f1, 0x54($a0)
    ctx->pc = 0x3dd708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3dd70c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3dd70cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3dd710: 0x0  nop
    ctx->pc = 0x3dd710u;
    // NOP
    // 0x3dd714: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x3dd714u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3dd718: 0x0  nop
    ctx->pc = 0x3dd718u;
    // NOP
    // 0x3dd71c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x3DD71Cu;
    {
        const bool branch_taken_0x3dd71c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3DD720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD71Cu;
        // 0x3dd720: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dd71c) {
            ctx->pc = 0x3DD728u;
            goto label_3dd728;
        }
    }
    ctx->pc = 0x3DD724u;
    // 0x3dd724: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3dd724u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3dd728:
    // 0x3dd728: 0x3e00008  jr          $ra
    ctx->pc = 0x3DD728u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DD728u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DD730u;
}
