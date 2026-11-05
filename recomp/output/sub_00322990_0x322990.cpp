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

// Function: sub_00322990
// Address: 0x322990 - 0x3229d8
void sub_00322990_0x322990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00322990_0x322990");
#endif

    switch (ctx->pc) {
        case 0x3229b0u: goto label_3229b0;
        default: break;
    }

    ctx->pc = 0x322990u;

    // 0x322990: 0x3c02005b  lui         $v0, 0x5B
    ctx->pc = 0x322990u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)91 << 16));
    // 0x322994: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x322994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x322998: 0x24445900  addiu       $a0, $v0, 0x5900
    ctx->pc = 0x322998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 22784));
    // 0x32299c: 0xac435900  sw          $v1, 0x5900($v0)
    ctx->pc = 0x32299cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5B5900u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B5900u, _value); } while (0);
    // 0x3229a0: 0xac8001a0  sw          $zero, 0x1A0($a0)
    ctx->pc = 0x3229a0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5B5AA0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B5AA0u, _value); } while (0);
    // 0x3229a4: 0x24020063  addiu       $v0, $zero, 0x63
    ctx->pc = 0x3229a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x3229a8: 0x24840190  addiu       $a0, $a0, 0x190
    ctx->pc = 0x3229a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 400));
    // 0x3229ac: 0x0  nop
    ctx->pc = 0x3229acu;
    // NOP
label_3229b0:
    // 0x3229b0: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x3229b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x3229b4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3229b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3229b8: 0x0  nop
    ctx->pc = 0x3229b8u;
    // NOP
    // 0x3229bc: 0x0  nop
    ctx->pc = 0x3229bcu;
    // NOP
    // 0x3229c0: 0x441fffb  bgez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3229C0u;
    {
        const bool branch_taken_0x3229c0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x3229C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3229C0u;
        // 0x3229c4: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3229c0) {
            ctx->pc = 0x3229B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3229b0;
        }
    }
    ctx->pc = 0x3229C8u;
    // 0x3229c8: 0x3e00008  jr          $ra
    ctx->pc = 0x3229C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3229C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3229D0u;
    // 0x3229d0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x3229d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3229d4: 0x0  nop
    ctx->pc = 0x3229d4u;
    // NOP
    ctx->pc = 0x3229d8u;
}
