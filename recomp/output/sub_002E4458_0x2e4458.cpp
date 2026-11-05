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

// Function: sub_002E4458
// Address: 0x2e4458 - 0x2e4478
void sub_002E4458_0x2e4458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E4458_0x2e4458");
#endif

    switch (ctx->pc) {
        case 0x2e446cu: goto label_2e446c;
        default: break;
    }

    ctx->pc = 0x2e4458u;

    // 0x2e4458: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e4458u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2e445c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2e445cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e4460: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e4460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e4464: 0xc0b90fe  jal         func_2E43F8
    ctx->pc = 0x2E4464u;
    SET_GPR_U32(ctx, 31, 0x2E446Cu);
    ctx->pc = 0x2E4468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4464u;
    // 0x2e4468: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E43F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E43F8u, 0x2E4464u, 0x2E446Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E446Cu;
label_2e446c:
    // 0x2e446c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e446cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e4470: 0x3e00008  jr          $ra
    ctx->pc = 0x2E4470u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E4474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4470u;
        // 0x2e4474: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E4470u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E4478u;
}
