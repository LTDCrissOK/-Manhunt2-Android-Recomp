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

// Function: sub_0017F278
// Address: 0x17f278 - 0x17f2a8
void sub_0017F278_0x17f278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017F278_0x17f278");
#endif

    switch (ctx->pc) {
        case 0x17f294u: goto label_17f294;
        default: break;
    }

    ctx->pc = 0x17f278u;

    // 0x17f278: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17f278u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17f27c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17f27cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17f280: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x17f280u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x17f284: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x17F284u;
    {
        const bool branch_taken_0x17f284 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F284u;
        // 0x17f288: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f284) {
            ctx->pc = 0x17F29Cu;
            goto label_17f29c;
        }
    }
    ctx->pc = 0x17F28Cu;
    // 0x17f28c: 0xc05f030  jal         func_17C0C0
    ctx->pc = 0x17F28Cu;
    SET_GPR_U32(ctx, 31, 0x17F294u);
    ctx->pc = 0x17C0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C0C0u, 0x17F28Cu, 0x17F294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F294u;
label_17f294:
    // 0x17f294: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x17F294u;
    {
        const bool branch_taken_0x17f294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F294u;
        // 0x17f298: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f294) {
            ctx->pc = 0x17F2A0u;
            goto label_17f2a0;
        }
    }
    ctx->pc = 0x17F29Cu;
label_17f29c:
    // 0x17f29c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17f29cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17f2a0:
    // 0x17f2a0: 0x3e00008  jr          $ra
    ctx->pc = 0x17F2A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17F2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F2A0u;
        // 0x17f2a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17F2A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17F2A8u;
}
