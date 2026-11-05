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

// Function: sub_00121368
// Address: 0x121368 - 0x121398
void sub_00121368_0x121368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00121368_0x121368");
#endif

    switch (ctx->pc) {
        case 0x121380u: goto label_121380;
        default: break;
    }

    ctx->pc = 0x121368u;

    // 0x121368: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x121368u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12136c: 0x24020021  addiu       $v0, $zero, 0x21
    ctx->pc = 0x12136cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x121370: 0x10a20005  beq         $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x121370u;
    {
        const bool branch_taken_0x121370 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x121374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121370u;
        // 0x121374: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121370) {
            ctx->pc = 0x121388u;
            goto label_121388;
        }
    }
    ctx->pc = 0x121378u;
    // 0x121378: 0xc042962  jal         func_10A588
    ctx->pc = 0x121378u;
    SET_GPR_U32(ctx, 31, 0x121380u);
    ctx->pc = 0x12137Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121378u;
    // 0x12137c: 0x8c840078  lw          $a0, 0x78($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 120)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A588u, 0x121378u, 0x121380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121380u;
label_121380:
    // 0x121380: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x121380u;
    {
        const bool branch_taken_0x121380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x121384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121380u;
        // 0x121384: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121380) {
            ctx->pc = 0x121390u;
            goto label_121390;
        }
    }
    ctx->pc = 0x121388u;
label_121388:
    // 0x121388: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x121388u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12138c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12138cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_121390:
    // 0x121390: 0x3e00008  jr          $ra
    ctx->pc = 0x121390u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x121394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121390u;
        // 0x121394: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x121390u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x121398u;
}
