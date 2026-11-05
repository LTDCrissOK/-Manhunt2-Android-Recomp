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

// Function: sub_003AC370
// Address: 0x3ac370 - 0x3ac3b0
void sub_003AC370_0x3ac370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AC370_0x3ac370");
#endif

    ctx->pc = 0x3ac370u;

    // 0x3ac370: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3ac370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3ac374: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x3ac374u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
    // 0x3ac378: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3ac378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3ac37c: 0x2463278c  addiu       $v1, $v1, 0x278C
    ctx->pc = 0x3ac37cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10124));
    // 0x3ac380: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3ac380u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x42278Cu));
    // 0x3ac384: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3ac384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3ac388: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3AC388u;
    {
        const bool branch_taken_0x3ac388 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AC38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC388u;
        // 0x3ac38c: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac388) {
            ctx->pc = 0x3AC3A0u;
            goto label_3ac3a0;
        }
    }
    ctx->pc = 0x3AC390u;
    // 0x3ac390: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3ac390u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ac394: 0x80e8f6c  j           func_3A3DB0
    ctx->pc = 0x3AC394u;
    ctx->pc = 0x3AC398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AC394u;
    // 0x3ac398: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3DB0u;
    sub_003A3DB0_0x3a3db0(rdram, ctx, runtime); return;
    ctx->pc = 0x3AC39Cu;
    // 0x3ac39c: 0x0  nop
    ctx->pc = 0x3ac39cu;
    // NOP
label_3ac3a0:
    // 0x3ac3a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3ac3a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ac3a4: 0x3e00008  jr          $ra
    ctx->pc = 0x3AC3A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AC3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC3A4u;
        // 0x3ac3a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AC3A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AC3ACu;
    // 0x3ac3ac: 0x0  nop
    ctx->pc = 0x3ac3acu;
    // NOP
    ctx->pc = 0x3ac3b0u;
}
