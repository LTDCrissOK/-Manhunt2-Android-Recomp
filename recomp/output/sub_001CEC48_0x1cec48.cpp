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

// Function: sub_001CEC48
// Address: 0x1cec48 - 0x1cec90
void sub_001CEC48_0x1cec48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CEC48_0x1cec48");
#endif

    switch (ctx->pc) {
        case 0x1cec78u: goto label_1cec78;
        default: break;
    }

    ctx->pc = 0x1cec48u;

    // 0x1cec48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cec48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cec4c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cec4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cec50: 0x8c820034  lw          $v0, 0x34($a0)
    ctx->pc = 0x1cec50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x1cec54: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1CEC54u;
    {
        const bool branch_taken_0x1cec54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CEC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEC54u;
        // 0x1cec58: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cec54) {
            ctx->pc = 0x1CEC80u;
            goto label_1cec80;
        }
    }
    ctx->pc = 0x1CEC5Cu;
    // 0x1cec5c: 0x8c820070  lw          $v0, 0x70($a0)
    ctx->pc = 0x1cec5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
    // 0x1cec60: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1CEC60u;
    {
        const bool branch_taken_0x1cec60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CEC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEC60u;
        // 0x1cec64: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cec60) {
            ctx->pc = 0x1CEC80u;
            goto label_1cec80;
        }
    }
    ctx->pc = 0x1CEC68u;
    // 0x1cec68: 0x8ca300c4  lw          $v1, 0xC4($a1)
    ctx->pc = 0x1cec68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 196)));
    // 0x1cec6c: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x1cec6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x1cec70: 0xc073b3e  jal         func_1CECF8
    ctx->pc = 0x1CEC70u;
    SET_GPR_U32(ctx, 31, 0x1CEC78u);
    ctx->pc = 0x1CEC74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CEC70u;
    // 0x1cec74: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CECF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CECF8u, 0x1CEC70u, 0x1CEC78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CEC78u;
label_1cec78:
    // 0x1cec78: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1CEC78u;
    {
        const bool branch_taken_0x1cec78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CEC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEC78u;
        // 0x1cec7c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cec78) {
            ctx->pc = 0x1CEC84u;
            goto label_1cec84;
        }
    }
    ctx->pc = 0x1CEC80u;
label_1cec80:
    // 0x1cec80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cec80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1cec84:
    // 0x1cec84: 0x3e00008  jr          $ra
    ctx->pc = 0x1CEC84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CEC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEC84u;
        // 0x1cec88: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CEC84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CEC8Cu;
    // 0x1cec8c: 0x0  nop
    ctx->pc = 0x1cec8cu;
    // NOP
    ctx->pc = 0x1cec90u;
}
