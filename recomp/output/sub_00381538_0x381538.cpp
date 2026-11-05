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

// Function: sub_00381538
// Address: 0x381538 - 0x381558
void sub_00381538_0x381538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00381538_0x381538");
#endif

    switch (ctx->pc) {
        case 0x38154cu: goto label_38154c;
        default: break;
    }

    ctx->pc = 0x381538u;

    // 0x381538: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x381538u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x38153c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x38153cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x381540: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x381540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x381544: 0xc0b2742  jal         func_2C9D08
    ctx->pc = 0x381544u;
    SET_GPR_U32(ctx, 31, 0x38154Cu);
    ctx->pc = 0x381548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x381544u;
    // 0x381548: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9D08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9D08u, 0x381544u, 0x38154Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38154Cu;
label_38154c:
    // 0x38154c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38154cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x381550: 0x3e00008  jr          $ra
    ctx->pc = 0x381550u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x381554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381550u;
        // 0x381554: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x381550u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x381558u;
}
