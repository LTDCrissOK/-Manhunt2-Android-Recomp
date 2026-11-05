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

// Function: sub_00131B60
// Address: 0x131b60 - 0x131b90
void sub_00131B60_0x131b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00131B60_0x131b60");
#endif

    switch (ctx->pc) {
        case 0x131b7cu: goto label_131b7c;
        default: break;
    }

    ctx->pc = 0x131b60u;

    // 0x131b60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x131b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x131b64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x131b64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x131b68: 0x8c840010  lw          $a0, 0x10($a0)
    ctx->pc = 0x131b68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x131b6c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x131B6Cu;
    {
        const bool branch_taken_0x131b6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x131B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131B6Cu;
        // 0x131b70: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131b6c) {
            ctx->pc = 0x131B84u;
            goto label_131b84;
        }
    }
    ctx->pc = 0x131B74u;
    // 0x131b74: 0xc04cf8c  jal         func_133E30
    ctx->pc = 0x131B74u;
    SET_GPR_U32(ctx, 31, 0x131B7Cu);
    ctx->pc = 0x133E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133E30u, 0x131B74u, 0x131B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131B7Cu;
label_131b7c:
    // 0x131b7c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x131B7Cu;
    {
        const bool branch_taken_0x131b7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x131B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131B7Cu;
        // 0x131b80: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131b7c) {
            ctx->pc = 0x131B88u;
            goto label_131b88;
        }
    }
    ctx->pc = 0x131B84u;
label_131b84:
    // 0x131b84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x131b84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_131b88:
    // 0x131b88: 0x3e00008  jr          $ra
    ctx->pc = 0x131B88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x131B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131B88u;
        // 0x131b8c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x131B88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x131B90u;
}
