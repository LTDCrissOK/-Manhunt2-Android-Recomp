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

// Function: sub_0026A168
// Address: 0x26a168 - 0x26a1a0
void sub_0026A168_0x26a168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026A168_0x26a168");
#endif

    switch (ctx->pc) {
        case 0x26a190u: goto label_26a190;
        default: break;
    }

    ctx->pc = 0x26a168u;

    // 0x26a168: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x26a168u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x26a16c: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x26a16cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x26a170: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x26a170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x26a174: 0x24422748  addiu       $v0, $v0, 0x2748
    ctx->pc = 0x26a174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10056));
    // 0x26a178: 0xac820218  sw          $v0, 0x218($a0)
    ctx->pc = 0x26a178u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 536), GPR_U32(ctx, 2));
    // 0x26a17c: 0x8c830220  lw          $v1, 0x220($a0)
    ctx->pc = 0x26a17cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 544)));
    // 0x26a180: 0x54600001  bnel        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x26A180u;
    {
        const bool branch_taken_0x26a180 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x26a180) {
            ctx->pc = 0x26A184u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26A180u;
            // 0x26a184: 0xac600030  sw          $zero, 0x30($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26A188u;
            goto label_26a188;
        }
    }
    ctx->pc = 0x26A188u;
label_26a188:
    // 0x26a188: 0xc0836c2  jal         func_20DB08
    ctx->pc = 0x26A188u;
    SET_GPR_U32(ctx, 31, 0x26A190u);
    ctx->pc = 0x20DB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20DB08u, 0x26A188u, 0x26A190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26A190u;
label_26a190:
    // 0x26a190: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26a190u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26a194: 0x3e00008  jr          $ra
    ctx->pc = 0x26A194u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26A198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26A194u;
        // 0x26a198: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26A194u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26A19Cu;
    // 0x26a19c: 0x0  nop
    ctx->pc = 0x26a19cu;
    // NOP
    ctx->pc = 0x26a1a0u;
}
