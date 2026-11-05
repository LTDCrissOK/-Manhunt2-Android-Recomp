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

// Function: sub_001AA710
// Address: 0x1aa710 - 0x1aa730
void sub_001AA710_0x1aa710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AA710_0x1aa710");
#endif

    switch (ctx->pc) {
        case 0x1aa724u: goto label_1aa724;
        default: break;
    }

    ctx->pc = 0x1aa710u;

    // 0x1aa710: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1aa710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1aa714: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1aa714u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa718: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1aa718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1aa71c: 0xc06a4c2  jal         func_1A9308
    ctx->pc = 0x1AA71Cu;
    SET_GPR_U32(ctx, 31, 0x1AA724u);
    ctx->pc = 0x1AA720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA71Cu;
    // 0x1aa720: 0x8c860190  lw          $a2, 0x190($a0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 400)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A9308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A9308u, 0x1AA71Cu, 0x1AA724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA724u;
label_1aa724:
    // 0x1aa724: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1aa724u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1aa728: 0x3e00008  jr          $ra
    ctx->pc = 0x1AA728u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AA72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA728u;
        // 0x1aa72c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AA728u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AA730u;
}
