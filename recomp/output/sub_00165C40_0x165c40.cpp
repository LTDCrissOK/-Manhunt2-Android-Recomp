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

// Function: sub_00165C40
// Address: 0x165c40 - 0x165c60
void sub_00165C40_0x165c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00165C40_0x165c40");
#endif

    switch (ctx->pc) {
        case 0x165c54u: goto label_165c54;
        default: break;
    }

    ctx->pc = 0x165c40u;

    // 0x165c40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x165c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x165c44: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x165c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x165c48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x165c48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x165c4c: 0xc0598fa  jal         func_1663E8
    ctx->pc = 0x165C4Cu;
    SET_GPR_U32(ctx, 31, 0x165C54u);
    ctx->pc = 0x165C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165C4Cu;
    // 0x165c50: 0xac820304  sw          $v0, 0x304($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 772), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1663E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1663E8u, 0x165C4Cu, 0x165C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165C54u;
label_165c54:
    // 0x165c54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x165c54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x165c58: 0x3e00008  jr          $ra
    ctx->pc = 0x165C58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x165C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165C58u;
        // 0x165c5c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x165C58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x165C60u;
}
