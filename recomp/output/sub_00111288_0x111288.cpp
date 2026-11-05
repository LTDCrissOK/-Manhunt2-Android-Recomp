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

// Function: sub_00111288
// Address: 0x111288 - 0x1112b8
void sub_00111288_0x111288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00111288_0x111288");
#endif

    switch (ctx->pc) {
        case 0x1112a4u: goto label_1112a4;
        default: break;
    }

    ctx->pc = 0x111288u;

    // 0x111288: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x111288u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11128c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11128cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x111290: 0x8c84001c  lw          $a0, 0x1C($a0)
    ctx->pc = 0x111290u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x111294: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x111294u;
    {
        const bool branch_taken_0x111294 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x111298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111294u;
        // 0x111298: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111294) {
            ctx->pc = 0x1112ACu;
            goto label_1112ac;
        }
    }
    ctx->pc = 0x11129Cu;
    // 0x11129c: 0xc05dfe0  jal         func_177F80
    ctx->pc = 0x11129Cu;
    SET_GPR_U32(ctx, 31, 0x1112A4u);
    ctx->pc = 0x177F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177F80u, 0x11129Cu, 0x1112A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1112A4u;
label_1112a4:
    // 0x1112a4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1112A4u;
    {
        const bool branch_taken_0x1112a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1112A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1112A4u;
        // 0x1112a8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1112a4) {
            ctx->pc = 0x1112B0u;
            goto label_1112b0;
        }
    }
    ctx->pc = 0x1112ACu;
label_1112ac:
    // 0x1112ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1112acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1112b0:
    // 0x1112b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1112B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1112B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1112B0u;
        // 0x1112b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1112B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1112B8u;
}
