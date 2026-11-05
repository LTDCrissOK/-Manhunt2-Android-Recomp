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

// Function: sub_0030CCA0
// Address: 0x30cca0 - 0x30ccd8
void sub_0030CCA0_0x30cca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030CCA0_0x30cca0");
#endif

    switch (ctx->pc) {
        case 0x30ccc8u: goto label_30ccc8;
        default: break;
    }

    ctx->pc = 0x30cca0u;

    // 0x30cca0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x30cca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x30cca4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x30cca4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x30cca8: 0x14a20007  bne         $a1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x30CCA8u;
    {
        const bool branch_taken_0x30cca8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x30CCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CCA8u;
        // 0x30ccac: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30cca8) {
            ctx->pc = 0x30CCC8u;
            goto label_30ccc8;
        }
    }
    ctx->pc = 0x30CCB0u;
    // 0x30ccb0: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30CCB0u;
    {
        const bool branch_taken_0x30ccb0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x30CCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CCB0u;
        // 0x30ccb4: 0x3c04005a  lui         $a0, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)90 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ccb0) {
            ctx->pc = 0x30CCC8u;
            goto label_30ccc8;
        }
    }
    ctx->pc = 0x30CCB8u;
    // 0x30ccb8: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x30ccb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x30ccbc: 0x24847eb8  addiu       $a0, $a0, 0x7EB8
    ctx->pc = 0x30ccbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32440));
    // 0x30ccc0: 0xc0b2aaa  jal         func_2CAAA8
    ctx->pc = 0x30CCC0u;
    SET_GPR_U32(ctx, 31, 0x30CCC8u);
    ctx->pc = 0x30CCC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30CCC0u;
    // 0x30ccc4: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CAAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CAAA8u, 0x30CCC0u, 0x30CCC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30CCC8u;
label_30ccc8:
    // 0x30ccc8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30ccc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30cccc: 0x3e00008  jr          $ra
    ctx->pc = 0x30CCCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30CCD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CCCCu;
        // 0x30ccd0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30CCCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30CCD4u;
    // 0x30ccd4: 0x0  nop
    ctx->pc = 0x30ccd4u;
    // NOP
    ctx->pc = 0x30ccd8u;
}
