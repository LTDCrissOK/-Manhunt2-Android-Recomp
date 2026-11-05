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

// Function: sub_003807B8
// Address: 0x3807b8 - 0x3807d8
void sub_003807B8_0x3807b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003807B8_0x3807b8");
#endif

    switch (ctx->pc) {
        case 0x3807c8u: goto label_3807c8;
        default: break;
    }

    ctx->pc = 0x3807b8u;

    // 0x3807b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3807b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3807bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3807bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3807c0: 0xc0e021a  jal         func_380868
    ctx->pc = 0x3807C0u;
    SET_GPR_U32(ctx, 31, 0x3807C8u);
    ctx->pc = 0x3807C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3807C0u;
    // 0x3807c4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x380868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x380868u, 0x3807C0u, 0x3807C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3807C8u;
label_3807c8:
    // 0x3807c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3807c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3807cc: 0x3e00008  jr          $ra
    ctx->pc = 0x3807CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3807D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3807CCu;
        // 0x3807d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3807CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3807D4u;
    // 0x3807d4: 0x0  nop
    ctx->pc = 0x3807d4u;
    // NOP
    ctx->pc = 0x3807d8u;
}
