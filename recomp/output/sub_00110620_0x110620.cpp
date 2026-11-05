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

// Function: sub_00110620
// Address: 0x110620 - 0x110650
void sub_00110620_0x110620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00110620_0x110620");
#endif

    switch (ctx->pc) {
        case 0x11063cu: goto label_11063c;
        default: break;
    }

    ctx->pc = 0x110620u;

    // 0x110620: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x110620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x110624: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x110624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x110628: 0x8c84001c  lw          $a0, 0x1C($a0)
    ctx->pc = 0x110628u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x11062c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11062Cu;
    {
        const bool branch_taken_0x11062c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x110630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11062Cu;
        // 0x110630: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11062c) {
            ctx->pc = 0x110644u;
            goto label_110644;
        }
    }
    ctx->pc = 0x110634u;
    // 0x110634: 0xc05dee2  jal         func_177B88
    ctx->pc = 0x110634u;
    SET_GPR_U32(ctx, 31, 0x11063Cu);
    ctx->pc = 0x177B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x177B88u, 0x110634u, 0x11063Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11063Cu;
label_11063c:
    // 0x11063c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x11063Cu;
    {
        const bool branch_taken_0x11063c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11063Cu;
        // 0x110640: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11063c) {
            ctx->pc = 0x110648u;
            goto label_110648;
        }
    }
    ctx->pc = 0x110644u;
label_110644:
    // 0x110644: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x110644u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_110648:
    // 0x110648: 0x3e00008  jr          $ra
    ctx->pc = 0x110648u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11064Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110648u;
        // 0x11064c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x110648u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x110650u;
}
