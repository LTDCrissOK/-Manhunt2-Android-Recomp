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

// Function: sub_003CC058
// Address: 0x3cc058 - 0x3cc080
void sub_003CC058_0x3cc058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CC058_0x3cc058");
#endif

    switch (ctx->pc) {
        case 0x3cc070u: goto label_3cc070;
        default: break;
    }

    ctx->pc = 0x3cc058u;

    // 0x3cc058: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3cc058u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3cc05c: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x3cc05cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cc060: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3CC060u;
    {
        const bool branch_taken_0x3cc060 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CC064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC060u;
        // 0x3cc064: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cc060) {
            ctx->pc = 0x3CC070u;
            goto label_3cc070;
        }
    }
    ctx->pc = 0x3CC068u;
    // 0x3cc068: 0xc0f2be6  jal         func_3CAF98
    ctx->pc = 0x3CC068u;
    SET_GPR_U32(ctx, 31, 0x3CC070u);
    ctx->pc = 0x3CAF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CAF98u, 0x3CC068u, 0x3CC070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CC070u;
label_3cc070:
    // 0x3cc070: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3cc070u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3cc074: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3cc074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3cc078: 0x3e00008  jr          $ra
    ctx->pc = 0x3CC078u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CC07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC078u;
        // 0x3cc07c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CC078u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3CC080u;
}
