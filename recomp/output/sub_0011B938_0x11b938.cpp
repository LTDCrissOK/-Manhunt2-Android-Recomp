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

// Function: sub_0011B938
// Address: 0x11b938 - 0x11b968
void sub_0011B938_0x11b938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011B938_0x11b938");
#endif

    switch (ctx->pc) {
        case 0x11b95cu: goto label_11b95c;
        default: break;
    }

    ctx->pc = 0x11b938u;

    // 0x11b938: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11b938u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11b93c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x11b93cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x11b940: 0x14a20006  bne         $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11B940u;
    {
        const bool branch_taken_0x11b940 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x11B944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B940u;
        // 0x11b944: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b940) {
            ctx->pc = 0x11B95Cu;
            goto label_11b95c;
        }
    }
    ctx->pc = 0x11B948u;
    // 0x11b948: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11B948u;
    {
        const bool branch_taken_0x11b948 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B948u;
        // 0x11b94c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b948) {
            ctx->pc = 0x11B960u;
            goto label_11b960;
        }
    }
    ctx->pc = 0x11B950u;
    // 0x11b950: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x11b950u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x11b954: 0xc046514  jal         func_119450
    ctx->pc = 0x11B954u;
    SET_GPR_U32(ctx, 31, 0x11B95Cu);
    ctx->pc = 0x11B958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B954u;
    // 0x11b958: 0x248487a0  addiu       $a0, $a0, -0x7860 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119450u, 0x11B954u, 0x11B95Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B95Cu;
label_11b95c:
    // 0x11b95c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11b95cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_11b960:
    // 0x11b960: 0x3e00008  jr          $ra
    ctx->pc = 0x11B960u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B960u;
        // 0x11b964: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B960u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11B968u;
}
