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

// Function: sub_003E8738
// Address: 0x3e8738 - 0x3e8758
void sub_003E8738_0x3e8738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E8738_0x3e8738");
#endif

    switch (ctx->pc) {
        case 0x3e8748u: goto label_3e8748;
        default: break;
    }

    ctx->pc = 0x3e8738u;

    // 0x3e8738: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3e8738u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3e873c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3e873cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3e8740: 0xc0b0340  jal         func_2C0D00
    ctx->pc = 0x3E8740u;
    SET_GPR_U32(ctx, 31, 0x3E8748u);
    ctx->pc = 0x3E8744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E8740u;
    // 0x3e8744: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0D00u, 0x3E8740u, 0x3E8748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E8748u;
label_3e8748:
    // 0x3e8748: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3e8748u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e874c: 0x3e00008  jr          $ra
    ctx->pc = 0x3E874Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E8750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E874Cu;
        // 0x3e8750: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E874Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E8754u;
    // 0x3e8754: 0x0  nop
    ctx->pc = 0x3e8754u;
    // NOP
    ctx->pc = 0x3e8758u;
}
