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

// Function: sub_002C6198
// Address: 0x2c6198 - 0x2c61d0
void sub_002C6198_0x2c6198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C6198_0x2c6198");
#endif

    switch (ctx->pc) {
        case 0x2c61c0u: goto label_2c61c0;
        default: break;
    }

    ctx->pc = 0x2c6198u;

    // 0x2c6198: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c6198u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2c619c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2c619cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2c61a0: 0x14a20007  bne         $a1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2C61A0u;
    {
        const bool branch_taken_0x2c61a0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2C61A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C61A0u;
        // 0x2c61a4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c61a0) {
            ctx->pc = 0x2C61C0u;
            goto label_2c61c0;
        }
    }
    ctx->pc = 0x2C61A8u;
    // 0x2c61a8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C61A8u;
    {
        const bool branch_taken_0x2c61a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C61ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C61A8u;
        // 0x2c61ac: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c61a8) {
            ctx->pc = 0x2C61C0u;
            goto label_2c61c0;
        }
    }
    ctx->pc = 0x2C61B0u;
    // 0x2c61b0: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x2c61b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2c61b4: 0x24845ad0  addiu       $a0, $a0, 0x5AD0
    ctx->pc = 0x2c61b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23248));
    // 0x2c61b8: 0xc0b2aaa  jal         func_2CAAA8
    ctx->pc = 0x2C61B8u;
    SET_GPR_U32(ctx, 31, 0x2C61C0u);
    ctx->pc = 0x2C61BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C61B8u;
    // 0x2c61bc: 0x240603e8  addiu       $a2, $zero, 0x3E8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CAAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CAAA8u, 0x2C61B8u, 0x2C61C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C61C0u;
label_2c61c0:
    // 0x2c61c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c61c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c61c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2C61C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C61C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C61C4u;
        // 0x2c61c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C61C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C61CCu;
    // 0x2c61cc: 0x0  nop
    ctx->pc = 0x2c61ccu;
    // NOP
    ctx->pc = 0x2c61d0u;
}
