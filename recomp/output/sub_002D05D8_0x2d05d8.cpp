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

// Function: sub_002D05D8
// Address: 0x2d05d8 - 0x2d0608
void sub_002D05D8_0x2d05d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D05D8_0x2d05d8");
#endif

    switch (ctx->pc) {
        case 0x2d05fcu: goto label_2d05fc;
        default: break;
    }

    ctx->pc = 0x2d05d8u;

    // 0x2d05d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d05d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d05dc: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2d05dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2d05e0: 0x14a20006  bne         $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D05E0u;
    {
        const bool branch_taken_0x2d05e0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D05E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D05E0u;
        // 0x2d05e4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d05e0) {
            ctx->pc = 0x2D05FCu;
            goto label_2d05fc;
        }
    }
    ctx->pc = 0x2D05E8u;
    // 0x2d05e8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D05E8u;
    {
        const bool branch_taken_0x2d05e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D05ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D05E8u;
        // 0x2d05ec: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d05e8) {
            ctx->pc = 0x2D0600u;
            goto label_2d0600;
        }
    }
    ctx->pc = 0x2D05F0u;
    // 0x2d05f0: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x2d05f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x2d05f4: 0xc05372e  jal         func_14DCB8
    ctx->pc = 0x2D05F4u;
    SET_GPR_U32(ctx, 31, 0x2D05FCu);
    ctx->pc = 0x2D05F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D05F4u;
    // 0x2d05f8: 0x2484a700  addiu       $a0, $a0, -0x5900 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DCB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DCB8u, 0x2D05F4u, 0x2D05FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D05FCu;
label_2d05fc:
    // 0x2d05fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d05fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2d0600:
    // 0x2d0600: 0x3e00008  jr          $ra
    ctx->pc = 0x2D0600u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D0604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0600u;
        // 0x2d0604: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D0600u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D0608u;
}
