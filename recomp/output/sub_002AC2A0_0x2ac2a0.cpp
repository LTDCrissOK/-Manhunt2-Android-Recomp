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

// Function: sub_002AC2A0
// Address: 0x2ac2a0 - 0x2ac2d0
void sub_002AC2A0_0x2ac2a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AC2A0_0x2ac2a0");
#endif

    switch (ctx->pc) {
        case 0x2ac2c4u: goto label_2ac2c4;
        default: break;
    }

    ctx->pc = 0x2ac2a0u;

    // 0x2ac2a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ac2a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ac2a4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2ac2a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2ac2a8: 0x14a20006  bne         $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2AC2A8u;
    {
        const bool branch_taken_0x2ac2a8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2AC2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC2A8u;
        // 0x2ac2ac: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac2a8) {
            ctx->pc = 0x2AC2C4u;
            goto label_2ac2c4;
        }
    }
    ctx->pc = 0x2AC2B0u;
    // 0x2ac2b0: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2AC2B0u;
    {
        const bool branch_taken_0x2ac2b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC2B0u;
        // 0x2ac2b4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac2b0) {
            ctx->pc = 0x2AC2C8u;
            goto label_2ac2c8;
        }
    }
    ctx->pc = 0x2AC2B8u;
    // 0x2ac2b8: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x2ac2b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x2ac2bc: 0xc0ab02a  jal         func_2AC0A8
    ctx->pc = 0x2AC2BCu;
    SET_GPR_U32(ctx, 31, 0x2AC2C4u);
    ctx->pc = 0x2AC2C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC2BCu;
    // 0x2ac2c0: 0x24842400  addiu       $a0, $a0, 0x2400 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AC0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AC0A8u, 0x2AC2BCu, 0x2AC2C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC2C4u;
label_2ac2c4:
    // 0x2ac2c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ac2c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2ac2c8:
    // 0x2ac2c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2AC2C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AC2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC2C8u;
        // 0x2ac2cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AC2C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AC2D0u;
}
