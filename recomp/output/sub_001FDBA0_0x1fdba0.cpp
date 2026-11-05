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

// Function: sub_001FDBA0
// Address: 0x1fdba0 - 0x1fdbc0
void sub_001FDBA0_0x1fdba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FDBA0_0x1fdba0");
#endif

    switch (ctx->pc) {
        case 0x1fdbb4u: goto label_1fdbb4;
        default: break;
    }

    ctx->pc = 0x1fdba0u;

    // 0x1fdba0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1fdba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1fdba4: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x1fdba4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x1fdba8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fdba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1fdbac: 0xc07e6aa  jal         func_1F9AA8
    ctx->pc = 0x1FDBACu;
    SET_GPR_U32(ctx, 31, 0x1FDBB4u);
    ctx->pc = 0x1FDBB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FDBACu;
    // 0x1fdbb0: 0x24840480  addiu       $a0, $a0, 0x480 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9AA8u, 0x1FDBACu, 0x1FDBB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FDBB4u;
label_1fdbb4:
    // 0x1fdbb4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fdbb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fdbb8: 0x3e00008  jr          $ra
    ctx->pc = 0x1FDBB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FDBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDBB8u;
        // 0x1fdbbc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FDBB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FDBC0u;
}
