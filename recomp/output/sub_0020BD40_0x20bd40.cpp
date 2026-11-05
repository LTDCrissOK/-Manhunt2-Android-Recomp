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

// Function: sub_0020BD40
// Address: 0x20bd40 - 0x20bd70
void sub_0020BD40_0x20bd40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020BD40_0x20bd40");
#endif

    switch (ctx->pc) {
        case 0x20bd64u: goto label_20bd64;
        default: break;
    }

    ctx->pc = 0x20bd40u;

    // 0x20bd40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20bd40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20bd44: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x20bd44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x20bd48: 0x14a20006  bne         $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x20BD48u;
    {
        const bool branch_taken_0x20bd48 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x20BD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BD48u;
        // 0x20bd4c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bd48) {
            ctx->pc = 0x20BD64u;
            goto label_20bd64;
        }
    }
    ctx->pc = 0x20BD50u;
    // 0x20bd50: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20BD50u;
    {
        const bool branch_taken_0x20bd50 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BD50u;
        // 0x20bd54: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bd50) {
            ctx->pc = 0x20BD68u;
            goto label_20bd68;
        }
    }
    ctx->pc = 0x20BD58u;
    // 0x20bd58: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x20bd58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
    // 0x20bd5c: 0xc0d75dc  jal         func_35D770
    ctx->pc = 0x20BD5Cu;
    SET_GPR_U32(ctx, 31, 0x20BD64u);
    ctx->pc = 0x20BD60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20BD5Cu;
    // 0x20bd60: 0x2484e498  addiu       $a0, $a0, -0x1B68 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D770u, 0x20BD5Cu, 0x20BD64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BD64u;
label_20bd64:
    // 0x20bd64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20bd64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20bd68:
    // 0x20bd68: 0x3e00008  jr          $ra
    ctx->pc = 0x20BD68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20BD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BD68u;
        // 0x20bd6c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20BD68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20BD70u;
}
