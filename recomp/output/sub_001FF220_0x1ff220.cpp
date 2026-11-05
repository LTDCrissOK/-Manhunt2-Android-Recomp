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

// Function: sub_001FF220
// Address: 0x1ff220 - 0x1ff250
void sub_001FF220_0x1ff220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FF220_0x1ff220");
#endif

    switch (ctx->pc) {
        case 0x1ff244u: goto label_1ff244;
        default: break;
    }

    ctx->pc = 0x1ff220u;

    // 0x1ff220: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ff220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ff224: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ff224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ff228: 0x8c820054  lw          $v0, 0x54($a0)
    ctx->pc = 0x1ff228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x1ff22c: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FF22Cu;
    {
        const bool branch_taken_0x1ff22c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1FF230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF22Cu;
        // 0x1ff230: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff22c) {
            ctx->pc = 0x1FF23Cu;
            goto label_1ff23c;
        }
    }
    ctx->pc = 0x1FF234u;
    // 0x1ff234: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1FF234u;
    {
        const bool branch_taken_0x1ff234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF234u;
        // 0x1ff238: 0xac820054  sw          $v0, 0x54($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff234) {
            ctx->pc = 0x1FF244u;
            goto label_1ff244;
        }
    }
    ctx->pc = 0x1FF23Cu;
label_1ff23c:
    // 0x1ff23c: 0xc07fc94  jal         func_1FF250
    ctx->pc = 0x1FF23Cu;
    SET_GPR_U32(ctx, 31, 0x1FF244u);
    ctx->pc = 0x1FF240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF23Cu;
    // 0x1ff240: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF250u, 0x1FF23Cu, 0x1FF244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF244u;
label_1ff244:
    // 0x1ff244: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ff244u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ff248: 0x3e00008  jr          $ra
    ctx->pc = 0x1FF248u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FF24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF248u;
        // 0x1ff24c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FF248u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FF250u;
}
