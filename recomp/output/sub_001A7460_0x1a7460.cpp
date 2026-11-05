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

// Function: sub_001A7460
// Address: 0x1a7460 - 0x1a7480
void sub_001A7460_0x1a7460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A7460_0x1a7460");
#endif

    switch (ctx->pc) {
        case 0x1a7474u: goto label_1a7474;
        default: break;
    }

    ctx->pc = 0x1a7460u;

    // 0x1a7460: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a7460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a7464: 0x24050039  addiu       $a1, $zero, 0x39
    ctx->pc = 0x1a7464u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x1a7468: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a7468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a746c: 0xc069712  jal         func_1A5C48
    ctx->pc = 0x1A746Cu;
    SET_GPR_U32(ctx, 31, 0x1A7474u);
    ctx->pc = 0x1A7470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A746Cu;
    // 0x1a7470: 0x2406080d  addiu       $a2, $zero, 0x80D (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2061));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5C48u, 0x1A746Cu, 0x1A7474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7474u;
label_1a7474:
    // 0x1a7474: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a7474u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a7478: 0x3e00008  jr          $ra
    ctx->pc = 0x1A7478u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A747Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7478u;
        // 0x1a747c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A7478u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A7480u;
}
