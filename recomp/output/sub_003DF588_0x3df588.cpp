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

// Function: sub_003DF588
// Address: 0x3df588 - 0x3df5a8
void sub_003DF588_0x3df588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DF588_0x3df588");
#endif

    switch (ctx->pc) {
        case 0x3df59cu: goto label_3df59c;
        default: break;
    }

    ctx->pc = 0x3df588u;

    // 0x3df588: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3df588u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3df58c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3df58cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3df590: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3df590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3df594: 0xc08fed2  jal         func_23FB48
    ctx->pc = 0x3DF594u;
    SET_GPR_U32(ctx, 31, 0x3DF59Cu);
    ctx->pc = 0x3DF598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DF594u;
    // 0x3df598: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x3DF594u, 0x3DF59Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DF59Cu;
label_3df59c:
    // 0x3df59c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3df59cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3df5a0: 0x3e00008  jr          $ra
    ctx->pc = 0x3DF5A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DF5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF5A0u;
        // 0x3df5a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DF5A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DF5A8u;
}
