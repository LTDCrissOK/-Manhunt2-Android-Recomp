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

// Function: sub_00108188
// Address: 0x108188 - 0x1081b0
void sub_00108188_0x108188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00108188_0x108188");
#endif

    switch (ctx->pc) {
        case 0x1081a0u: goto label_1081a0;
        default: break;
    }

    ctx->pc = 0x108188u;

    // 0x108188: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x108188u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10818c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x10818cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108190: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x108190u;
    {
        const bool branch_taken_0x108190 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x108194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108190u;
        // 0x108194: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108190) {
            ctx->pc = 0x1081A0u;
            goto label_1081a0;
        }
    }
    ctx->pc = 0x108198u;
    // 0x108198: 0xc05a67a  jal         func_1699E8
    ctx->pc = 0x108198u;
    SET_GPR_U32(ctx, 31, 0x1081A0u);
    ctx->pc = 0x10819Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108198u;
    // 0x10819c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1699E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1699E8u, 0x108198u, 0x1081A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1081A0u;
label_1081a0:
    // 0x1081a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1081a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1081a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1081A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1081A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1081A4u;
        // 0x1081a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1081A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1081ACu;
    // 0x1081ac: 0x0  nop
    ctx->pc = 0x1081acu;
    // NOP
    ctx->pc = 0x1081b0u;
}
