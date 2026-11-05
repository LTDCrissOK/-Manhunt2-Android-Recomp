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

// Function: sub_001AB210
// Address: 0x1ab210 - 0x1ab248
void sub_001AB210_0x1ab210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AB210_0x1ab210");
#endif

    switch (ctx->pc) {
        case 0x1ab238u: goto label_1ab238;
        default: break;
    }

    ctx->pc = 0x1ab210u;

    // 0x1ab210: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ab210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ab214: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ab214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ab218: 0x8c8201e4  lw          $v0, 0x1E4($a0)
    ctx->pc = 0x1ab218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 484)));
    // 0x1ab21c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AB21Cu;
    {
        const bool branch_taken_0x1ab21c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AB220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB21Cu;
        // 0x1ab220: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab21c) {
            ctx->pc = 0x1AB230u;
            goto label_1ab230;
        }
    }
    ctx->pc = 0x1AB224u;
    // 0x1ab224: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ab224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ab228: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1AB228u;
    {
        const bool branch_taken_0x1ab228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB228u;
        // 0x1ab22c: 0xac820160  sw          $v0, 0x160($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 352), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab228) {
            ctx->pc = 0x1AB238u;
            goto label_1ab238;
        }
    }
    ctx->pc = 0x1AB230u;
label_1ab230:
    // 0x1ab230: 0xc06a4c2  jal         func_1A9308
    ctx->pc = 0x1AB230u;
    SET_GPR_U32(ctx, 31, 0x1AB238u);
    ctx->pc = 0x1AB234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB230u;
    // 0x1ab234: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A9308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A9308u, 0x1AB230u, 0x1AB238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB238u;
label_1ab238:
    // 0x1ab238: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ab238u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ab23c: 0x3e00008  jr          $ra
    ctx->pc = 0x1AB23Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AB240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB23Cu;
        // 0x1ab240: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AB23Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AB244u;
    // 0x1ab244: 0x0  nop
    ctx->pc = 0x1ab244u;
    // NOP
    ctx->pc = 0x1ab248u;
}
