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

// Function: sub_0012B380
// Address: 0x12b380 - 0x12b3b0
void sub_0012B380_0x12b380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012B380_0x12b380");
#endif

    switch (ctx->pc) {
        case 0x12b3a4u: goto label_12b3a4;
        default: break;
    }

    ctx->pc = 0x12b380u;

    // 0x12b380: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x12b380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12b384: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x12b384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x12b388: 0x14a20006  bne         $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x12B388u;
    {
        const bool branch_taken_0x12b388 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x12B38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B388u;
        // 0x12b38c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b388) {
            ctx->pc = 0x12B3A4u;
            goto label_12b3a4;
        }
    }
    ctx->pc = 0x12B390u;
    // 0x12b390: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x12B390u;
    {
        const bool branch_taken_0x12b390 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B390u;
        // 0x12b394: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b390) {
            ctx->pc = 0x12B3A8u;
            goto label_12b3a8;
        }
    }
    ctx->pc = 0x12B398u;
    // 0x12b398: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x12b398u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x12b39c: 0xc0483b8  jal         func_120EE0
    ctx->pc = 0x12B39Cu;
    SET_GPR_U32(ctx, 31, 0x12B3A4u);
    ctx->pc = 0x12B3A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B39Cu;
    // 0x12b3a0: 0x2484a080  addiu       $a0, $a0, -0x5F80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120EE0u, 0x12B39Cu, 0x12B3A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B3A4u;
label_12b3a4:
    // 0x12b3a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12b3a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_12b3a8:
    // 0x12b3a8: 0x3e00008  jr          $ra
    ctx->pc = 0x12B3A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12B3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B3A8u;
        // 0x12b3ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12B3A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12B3B0u;
}
