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

// Function: sub_0012D2F0
// Address: 0x12d2f0 - 0x12d320
void sub_0012D2F0_0x12d2f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012D2F0_0x12d2f0");
#endif

    switch (ctx->pc) {
        case 0x12d30cu: goto label_12d30c;
        default: break;
    }

    ctx->pc = 0x12d2f0u;

    // 0x12d2f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x12d2f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12d2f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12d2f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12d2f8: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x12d2f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x12d2fc: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x12D2FCu;
    {
        const bool branch_taken_0x12d2fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D2FCu;
        // 0x12d300: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d2fc) {
            ctx->pc = 0x12D314u;
            goto label_12d314;
        }
    }
    ctx->pc = 0x12D304u;
    // 0x12d304: 0xc04c6d8  jal         func_131B60
    ctx->pc = 0x12D304u;
    SET_GPR_U32(ctx, 31, 0x12D30Cu);
    ctx->pc = 0x131B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131B60u, 0x12D304u, 0x12D30Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D30Cu;
label_12d30c:
    // 0x12d30c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x12D30Cu;
    {
        const bool branch_taken_0x12d30c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12D310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D30Cu;
        // 0x12d310: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d30c) {
            ctx->pc = 0x12D318u;
            goto label_12d318;
        }
    }
    ctx->pc = 0x12D314u;
label_12d314:
    // 0x12d314: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12d314u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_12d318:
    // 0x12d318: 0x3e00008  jr          $ra
    ctx->pc = 0x12D318u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12D31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D318u;
        // 0x12d31c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12D318u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12D320u;
}
