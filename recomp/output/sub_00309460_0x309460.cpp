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

// Function: sub_00309460
// Address: 0x309460 - 0x309480
void sub_00309460_0x309460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00309460_0x309460");
#endif

    switch (ctx->pc) {
        case 0x309474u: goto label_309474;
        default: break;
    }

    ctx->pc = 0x309460u;

    // 0x309460: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x309460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x309464: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x309464u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x309468: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x309468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x30946c: 0xc0c250a  jal         func_309428
    ctx->pc = 0x30946Cu;
    SET_GPR_U32(ctx, 31, 0x309474u);
    ctx->pc = 0x309470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30946Cu;
    // 0x309470: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x309428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x309428u, 0x30946Cu, 0x309474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x309474u;
label_309474:
    // 0x309474: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x309474u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x309478: 0x3e00008  jr          $ra
    ctx->pc = 0x309478u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30947Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309478u;
        // 0x30947c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x309478u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x309480u;
}
