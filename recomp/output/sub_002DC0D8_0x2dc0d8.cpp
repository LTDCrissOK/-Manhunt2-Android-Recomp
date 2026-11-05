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

// Function: sub_002DC0D8
// Address: 0x2dc0d8 - 0x2dc0f8
void sub_002DC0D8_0x2dc0d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DC0D8_0x2dc0d8");
#endif

    ctx->pc = 0x2dc0d8u;

    // 0x2dc0d8: 0xc4800424  lwc1        $f0, 0x424($a0)
    ctx->pc = 0x2dc0d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 1060)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2dc0dc: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x2dc0dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2dc0e0: 0x0  nop
    ctx->pc = 0x2dc0e0u;
    // NOP
    // 0x2dc0e4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2DC0E4u;
    {
        const bool branch_taken_0x2dc0e4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DC0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC0E4u;
        // 0x2dc0e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc0e4) {
            ctx->pc = 0x2DC0F0u;
            goto label_2dc0f0;
        }
    }
    ctx->pc = 0x2DC0ECu;
    // 0x2dc0ec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2dc0ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2dc0f0:
    // 0x2dc0f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2DC0F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DC0F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DC0F8u;
}
