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

// Function: sub_0025CD08
// Address: 0x25cd08 - 0x25cd30
void sub_0025CD08_0x25cd08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025CD08_0x25cd08");
#endif

    switch (ctx->pc) {
        case 0x25cd24u: goto label_25cd24;
        default: break;
    }

    ctx->pc = 0x25cd08u;

    // 0x25cd08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x25cd08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x25cd0c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25cd0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25cd10: 0x8c840224  lw          $a0, 0x224($a0)
    ctx->pc = 0x25cd10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 548)));
    // 0x25cd14: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25CD14u;
    {
        const bool branch_taken_0x25cd14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x25CD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CD14u;
        // 0x25cd18: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25cd14) {
            ctx->pc = 0x25CD28u;
            goto label_25cd28;
        }
    }
    ctx->pc = 0x25CD1Cu;
    // 0x25cd1c: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x25CD1Cu;
    SET_GPR_U32(ctx, 31, 0x25CD24u);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x25CD1Cu, 0x25CD24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25CD24u;
label_25cd24:
    // 0x25cd24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25cd24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_25cd28:
    // 0x25cd28: 0x3e00008  jr          $ra
    ctx->pc = 0x25CD28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25CD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25CD28u;
        // 0x25cd2c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25CD28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25CD30u;
}
