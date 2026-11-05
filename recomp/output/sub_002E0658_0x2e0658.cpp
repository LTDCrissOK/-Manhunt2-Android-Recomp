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

// Function: sub_002E0658
// Address: 0x2e0658 - 0x2e0688
void sub_002E0658_0x2e0658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E0658_0x2e0658");
#endif

    switch (ctx->pc) {
        case 0x2e066cu: goto label_2e066c;
        case 0x2e0678u: goto label_2e0678;
        default: break;
    }

    ctx->pc = 0x2e0658u;

    // 0x2e0658: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e0658u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2e065c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e065cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e0660: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2e0660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2e0664: 0xc0b7292  jal         func_2DCA48
    ctx->pc = 0x2E0664u;
    SET_GPR_U32(ctx, 31, 0x2E066Cu);
    ctx->pc = 0x2E0668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0664u;
    // 0x2e0668: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DCA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DCA48u, 0x2E0664u, 0x2E066Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E066Cu;
label_2e066c:
    // 0x2e066c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e066cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0670: 0xc092d94  jal         func_24B650
    ctx->pc = 0x2E0670u;
    SET_GPR_U32(ctx, 31, 0x2E0678u);
    ctx->pc = 0x2E0674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0670u;
    // 0x2e0674: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B650u, 0x2E0670u, 0x2E0678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0678u;
label_2e0678:
    // 0x2e0678: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e0678u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e067c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2e067cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e0680: 0x3e00008  jr          $ra
    ctx->pc = 0x2E0680u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E0684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0680u;
        // 0x2e0684: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E0680u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E0688u;
}
