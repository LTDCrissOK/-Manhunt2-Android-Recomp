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

// Function: sub_001FDA30
// Address: 0x1fda30 - 0x1fda50
void sub_001FDA30_0x1fda30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FDA30_0x1fda30");
#endif

    switch (ctx->pc) {
        case 0x1fda44u: goto label_1fda44;
        default: break;
    }

    ctx->pc = 0x1fda30u;

    // 0x1fda30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1fda30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1fda34: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x1fda34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
    // 0x1fda38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fda38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1fda3c: 0xc080062  jal         func_200188
    ctx->pc = 0x1FDA3Cu;
    SET_GPR_U32(ctx, 31, 0x1FDA44u);
    ctx->pc = 0x1FDA40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FDA3Cu;
    // 0x1fda40: 0x24849b28  addiu       $a0, $a0, -0x64D8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200188u, 0x1FDA3Cu, 0x1FDA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FDA44u;
label_1fda44:
    // 0x1fda44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fda44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fda48: 0x3e00008  jr          $ra
    ctx->pc = 0x1FDA48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FDA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDA48u;
        // 0x1fda4c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FDA48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FDA50u;
}
