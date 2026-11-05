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

// Function: sub_0039EAF8
// Address: 0x39eaf8 - 0x39eb38
void sub_0039EAF8_0x39eaf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039EAF8_0x39eaf8");
#endif

    ctx->pc = 0x39eaf8u;

    // 0x39eaf8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x39eaf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x39eafc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x39eafcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x39eb00: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x39eb00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x39eb04: 0x80830009  lb          $v1, 0x9($a0)
    ctx->pc = 0x39eb04u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 9)));
    // 0x39eb08: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x39EB08u;
    {
        const bool branch_taken_0x39eb08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x39EB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EB08u;
        // 0x39eb0c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39eb08) {
            ctx->pc = 0x39EB20u;
            goto label_39eb20;
        }
    }
    ctx->pc = 0x39EB10u;
    // 0x39eb10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x39eb10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39eb14: 0x80e7a12  j           func_39E848
    ctx->pc = 0x39EB14u;
    ctx->pc = 0x39EB18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39EB14u;
    // 0x39eb18: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39E848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39E848u, 0x39EB14u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x39EB1Cu;
    // 0x39eb1c: 0x0  nop
    ctx->pc = 0x39eb1cu;
    // NOP
label_39eb20:
    // 0x39eb20: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x39EB20u;
    {
        const bool branch_taken_0x39eb20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x39EB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EB20u;
        // 0x39eb24: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39eb20) {
            ctx->pc = 0x39EB30u;
            goto label_39eb30;
        }
    }
    ctx->pc = 0x39EB28u;
    // 0x39eb28: 0x80e79fa  j           func_39E7E8
    ctx->pc = 0x39EB28u;
    ctx->pc = 0x39EB2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39EB28u;
    // 0x39eb2c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39E7E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39E7E8u, 0x39EB28u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x39EB30u;
label_39eb30:
    // 0x39eb30: 0x3e00008  jr          $ra
    ctx->pc = 0x39EB30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39EB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39EB30u;
        // 0x39eb34: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39EB30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39EB38u;
}
