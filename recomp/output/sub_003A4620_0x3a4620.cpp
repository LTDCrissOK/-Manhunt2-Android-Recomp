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

// Function: sub_003A4620
// Address: 0x3a4620 - 0x3a4658
void sub_003A4620_0x3a4620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A4620_0x3a4620");
#endif

    switch (ctx->pc) {
        case 0x3a463cu: goto label_3a463c;
        default: break;
    }

    ctx->pc = 0x3a4620u;

    // 0x3a4620: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3a4620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3a4624: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3a4624u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a4628: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3A4628u;
    {
        const bool branch_taken_0x3a4628 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A462Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4628u;
        // 0x3a462c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4628) {
            ctx->pc = 0x3A4648u;
            goto label_3a4648;
        }
    }
    ctx->pc = 0x3A4630u;
    // 0x3a4630: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x3a4630u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x3a4634: 0xc0e8ff0  jal         func_3A3FC0
    ctx->pc = 0x3A4634u;
    SET_GPR_U32(ctx, 31, 0x3A463Cu);
    ctx->pc = 0x3A4638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A4634u;
    // 0x3a4638: 0x24a5d8c8  addiu       $a1, $a1, -0x2738 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3FC0u, 0x3A4634u, 0x3A463Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A463Cu;
label_3a463c:
    // 0x3a463c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3A463Cu;
    {
        const bool branch_taken_0x3a463c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A4640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A463Cu;
        // 0x3a4640: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a463c) {
            ctx->pc = 0x3A464Cu;
            goto label_3a464c;
        }
    }
    ctx->pc = 0x3A4644u;
    // 0x3a4644: 0x0  nop
    ctx->pc = 0x3a4644u;
    // NOP
label_3a4648:
    // 0x3a4648: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x3a4648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_3a464c:
    // 0x3a464c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a464cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a4650: 0x3e00008  jr          $ra
    ctx->pc = 0x3A4650u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A4654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4650u;
        // 0x3a4654: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A4650u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A4658u;
}
