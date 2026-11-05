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

// Function: sub_0017F220
// Address: 0x17f220 - 0x17f248
void sub_0017F220_0x17f220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017F220_0x17f220");
#endif

    switch (ctx->pc) {
        case 0x17f23cu: goto label_17f23c;
        default: break;
    }

    ctx->pc = 0x17f220u;

    // 0x17f220: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17f220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17f224: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17f224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17f228: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x17f228u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x17f22c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17F22Cu;
    {
        const bool branch_taken_0x17f22c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F22Cu;
        // 0x17f230: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f22c) {
            ctx->pc = 0x17F240u;
            goto label_17f240;
        }
    }
    ctx->pc = 0x17F234u;
    // 0x17f234: 0xc05fddc  jal         func_17F770
    ctx->pc = 0x17F234u;
    SET_GPR_U32(ctx, 31, 0x17F23Cu);
    ctx->pc = 0x17F770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F770u, 0x17F234u, 0x17F23Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F23Cu;
label_17f23c:
    // 0x17f23c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17f23cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17f240:
    // 0x17f240: 0x3e00008  jr          $ra
    ctx->pc = 0x17F240u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17F244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F240u;
        // 0x17f244: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17F240u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17F248u;
}
