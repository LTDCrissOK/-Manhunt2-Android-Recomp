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

// Function: sub_00110840
// Address: 0x110840 - 0x110870
void sub_00110840_0x110840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00110840_0x110840");
#endif

    switch (ctx->pc) {
        case 0x11085cu: goto label_11085c;
        default: break;
    }

    ctx->pc = 0x110840u;

    // 0x110840: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x110840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x110844: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x110844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x110848: 0x8c84001c  lw          $a0, 0x1C($a0)
    ctx->pc = 0x110848u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x11084c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11084Cu;
    {
        const bool branch_taken_0x11084c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x110850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11084Cu;
        // 0x110850: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11084c) {
            ctx->pc = 0x110864u;
            goto label_110864;
        }
    }
    ctx->pc = 0x110854u;
    // 0x110854: 0xc05df88  jal         func_177E20
    ctx->pc = 0x110854u;
    SET_GPR_U32(ctx, 31, 0x11085Cu);
    ctx->pc = 0x177E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177E20u, 0x110854u, 0x11085Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11085Cu;
label_11085c:
    // 0x11085c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x11085Cu;
    {
        const bool branch_taken_0x11085c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11085Cu;
        // 0x110860: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11085c) {
            ctx->pc = 0x110868u;
            goto label_110868;
        }
    }
    ctx->pc = 0x110864u;
label_110864:
    // 0x110864: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x110864u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_110868:
    // 0x110868: 0x3e00008  jr          $ra
    ctx->pc = 0x110868u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11086Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110868u;
        // 0x11086c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x110868u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x110870u;
}
