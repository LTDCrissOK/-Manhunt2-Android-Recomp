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

// Function: sub_0025FED8
// Address: 0x25fed8 - 0x25ff18
void sub_0025FED8_0x25fed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025FED8_0x25fed8");
#endif

    switch (ctx->pc) {
        case 0x25fee8u: goto label_25fee8;
        default: break;
    }

    ctx->pc = 0x25fed8u;

    // 0x25fed8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x25fed8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x25fedc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25fedcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25fee0: 0xc097f26  jal         func_25FC98
    ctx->pc = 0x25FEE0u;
    SET_GPR_U32(ctx, 31, 0x25FEE8u);
    ctx->pc = 0x25FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FC98u, 0x25FEE0u, 0x25FEE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FEE8u;
label_25fee8:
    // 0x25fee8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x25fee8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25feec: 0x2862000a  slti        $v0, $v1, 0xA
    ctx->pc = 0x25feecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x25fef0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25FEF0u;
    {
        const bool branch_taken_0x25fef0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FEF0u;
        // 0x25fef4: 0x28630008  slti        $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fef0) {
            ctx->pc = 0x25FF00u;
            goto label_25ff00;
        }
    }
    ctx->pc = 0x25FEF8u;
    // 0x25fef8: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x25FEF8u;
    {
        const bool branch_taken_0x25fef8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FEF8u;
        // 0x25fefc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fef8) {
            ctx->pc = 0x25FF04u;
            goto label_25ff04;
        }
    }
    ctx->pc = 0x25FF00u;
label_25ff00:
    // 0x25ff00: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x25ff00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25ff04:
    // 0x25ff04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25ff04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25ff08: 0x3e00008  jr          $ra
    ctx->pc = 0x25FF08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25FF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FF08u;
        // 0x25ff0c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25FF08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25FF10u;
    // 0x25ff10: 0x27bd01a0  addiu       $sp, $sp, 0x1A0
    ctx->pc = 0x25ff10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x25ff14: 0x0  nop
    ctx->pc = 0x25ff14u;
    // NOP
    ctx->pc = 0x25ff18u;
}
