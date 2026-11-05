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

// Function: sub_001193F8
// Address: 0x1193f8 - 0x119430
void sub_001193F8_0x1193f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001193F8_0x1193f8");
#endif

    switch (ctx->pc) {
        case 0x119420u: goto label_119420;
        default: break;
    }

    ctx->pc = 0x1193f8u;

    // 0x1193f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1193f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1193fc: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1193fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x119400: 0x14a20007  bne         $a1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x119400u;
    {
        const bool branch_taken_0x119400 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x119404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119400u;
        // 0x119404: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119400) {
            ctx->pc = 0x119420u;
            goto label_119420;
        }
    }
    ctx->pc = 0x119408u;
    // 0x119408: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x119408u;
    {
        const bool branch_taken_0x119408 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x11940Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119408u;
        // 0x11940c: 0x3c040049  lui         $a0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119408) {
            ctx->pc = 0x119420u;
            goto label_119420;
        }
    }
    ctx->pc = 0x119410u;
    // 0x119410: 0x24050090  addiu       $a1, $zero, 0x90
    ctx->pc = 0x119410u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x119414: 0x24848780  addiu       $a0, $a0, -0x7880
    ctx->pc = 0x119414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936448));
    // 0x119418: 0xc0b2aaa  jal         func_2CAAA8
    ctx->pc = 0x119418u;
    SET_GPR_U32(ctx, 31, 0x119420u);
    ctx->pc = 0x11941Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119418u;
    // 0x11941c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CAAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CAAA8u, 0x119418u, 0x119420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x119420u;
label_119420:
    // 0x119420: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x119420u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x119424: 0x3e00008  jr          $ra
    ctx->pc = 0x119424u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x119428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119424u;
        // 0x119428: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119424u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11942Cu;
    // 0x11942c: 0x0  nop
    ctx->pc = 0x11942cu;
    // NOP
    ctx->pc = 0x119430u;
}
