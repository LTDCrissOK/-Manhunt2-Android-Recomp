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

// Function: sub_00290A68
// Address: 0x290a68 - 0x290a98
void sub_00290A68_0x290a68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00290A68_0x290a68");
#endif

    switch (ctx->pc) {
        case 0x290a8cu: goto label_290a8c;
        default: break;
    }

    ctx->pc = 0x290a68u;

    // 0x290a68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x290a68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x290a6c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x290a6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x290a70: 0x8c8202e0  lw          $v0, 0x2E0($a0)
    ctx->pc = 0x290a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 736)));
    // 0x290a74: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x290A74u;
    {
        const bool branch_taken_0x290a74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x290A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290A74u;
        // 0x290a78: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290a74) {
            ctx->pc = 0x290A84u;
            goto label_290a84;
        }
    }
    ctx->pc = 0x290A7Cu;
    // 0x290a7c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x290A7Cu;
    {
        const bool branch_taken_0x290a7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290A7Cu;
        // 0x290a80: 0xac85000c  sw          $a1, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290a7c) {
            ctx->pc = 0x290A8Cu;
            goto label_290a8c;
        }
    }
    ctx->pc = 0x290A84u;
label_290a84:
    // 0x290a84: 0xc0a9968  jal         func_2A65A0
    ctx->pc = 0x290A84u;
    SET_GPR_U32(ctx, 31, 0x290A8Cu);
    ctx->pc = 0x2A65A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A65A0u, 0x290A84u, 0x290A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290A8Cu;
label_290a8c:
    // 0x290a8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x290a8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x290a90: 0x3e00008  jr          $ra
    ctx->pc = 0x290A90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x290A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290A90u;
        // 0x290a94: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x290A90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x290A98u;
}
