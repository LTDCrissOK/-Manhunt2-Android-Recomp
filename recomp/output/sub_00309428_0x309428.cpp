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

// Function: sub_00309428
// Address: 0x309428 - 0x309460
void sub_00309428_0x309428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00309428_0x309428");
#endif

    switch (ctx->pc) {
        case 0x309450u: goto label_309450;
        default: break;
    }

    ctx->pc = 0x309428u;

    // 0x309428: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x309428u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x30942c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x30942cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x309430: 0x14a20007  bne         $a1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x309430u;
    {
        const bool branch_taken_0x309430 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x309434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309430u;
        // 0x309434: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309430) {
            ctx->pc = 0x309450u;
            goto label_309450;
        }
    }
    ctx->pc = 0x309438u;
    // 0x309438: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x309438u;
    {
        const bool branch_taken_0x309438 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x30943Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309438u;
        // 0x30943c: 0x3c04005a  lui         $a0, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)90 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309438) {
            ctx->pc = 0x309450u;
            goto label_309450;
        }
    }
    ctx->pc = 0x309440u;
    // 0x309440: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x309440u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x309444: 0x24846810  addiu       $a0, $a0, 0x6810
    ctx->pc = 0x309444u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26640));
    // 0x309448: 0xc0b2aaa  jal         func_2CAAA8
    ctx->pc = 0x309448u;
    SET_GPR_U32(ctx, 31, 0x309450u);
    ctx->pc = 0x30944Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x309448u;
    // 0x30944c: 0x24060190  addiu       $a2, $zero, 0x190 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CAAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CAAA8u, 0x309448u, 0x309450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309450u;
label_309450:
    // 0x309450: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x309450u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x309454: 0x3e00008  jr          $ra
    ctx->pc = 0x309454u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x309458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309454u;
        // 0x309458: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x309454u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30945Cu;
    // 0x30945c: 0x0  nop
    ctx->pc = 0x30945cu;
    // NOP
    ctx->pc = 0x309460u;
}
