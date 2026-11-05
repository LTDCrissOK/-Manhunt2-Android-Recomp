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

// Function: sub_001A6508
// Address: 0x1a6508 - 0x1a6528
void sub_001A6508_0x1a6508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A6508_0x1a6508");
#endif

    switch (ctx->pc) {
        case 0x1a651cu: goto label_1a651c;
        default: break;
    }

    ctx->pc = 0x1a6508u;

    // 0x1a6508: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a6508u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a650c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1a650cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6510: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a6510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a6514: 0xc069712  jal         func_1A5C48
    ctx->pc = 0x1A6514u;
    SET_GPR_U32(ctx, 31, 0x1A651Cu);
    ctx->pc = 0x1A6518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6514u;
    // 0x1a6518: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5C48u, 0x1A6514u, 0x1A651Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A651Cu;
label_1a651c:
    // 0x1a651c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a651cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a6520: 0x3e00008  jr          $ra
    ctx->pc = 0x1A6520u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A6524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6520u;
        // 0x1a6524: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6520u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A6528u;
}
