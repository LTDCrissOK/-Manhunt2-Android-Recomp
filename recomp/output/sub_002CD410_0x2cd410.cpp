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

// Function: sub_002CD410
// Address: 0x2cd410 - 0x2cd458
void sub_002CD410_0x2cd410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CD410_0x2cd410");
#endif

    switch (ctx->pc) {
        case 0x2cd448u: goto label_2cd448;
        default: break;
    }

    ctx->pc = 0x2cd410u;

    // 0x2cd410: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2cd410u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2cd414: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2cd414u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2cd418: 0x8c45b4a8  lw          $a1, -0x4B58($v0)
    ctx->pc = 0x2cd418u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3FB4A8u));
    // 0x2cd41c: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x2cd41cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x2cd420: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cd420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2cd424: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2cd424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2cd428: 0x8c6230ac  lw          $v0, 0x30AC($v1)
    ctx->pc = 0x2cd428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12460)));
    // 0x2cd42c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CD42Cu;
    {
        const bool branch_taken_0x2cd42c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CD430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD42Cu;
        // 0x2cd430: 0x3c040067  lui         $a0, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd42c) {
            ctx->pc = 0x2CD43Cu;
            goto label_2cd43c;
        }
    }
    ctx->pc = 0x2CD434u;
    // 0x2cd434: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2CD434u;
    {
        const bool branch_taken_0x2cd434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CD438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD434u;
        // 0x2cd438: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd434) {
            ctx->pc = 0x2CD448u;
            goto label_2cd448;
        }
    }
    ctx->pc = 0x2CD43Cu;
label_2cd43c:
    // 0x2cd43c: 0x34843038  ori         $a0, $a0, 0x3038
    ctx->pc = 0x2cd43cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)12344);
    // 0x2cd440: 0xc0b2c22  jal         func_2CB088
    ctx->pc = 0x2CD440u;
    SET_GPR_U32(ctx, 31, 0x2CD448u);
    ctx->pc = 0x2CD444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD440u;
    // 0x2cd444: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB088u, 0x2CD440u, 0x2CD448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD448u;
label_2cd448:
    // 0x2cd448: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cd448u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cd44c: 0x3e00008  jr          $ra
    ctx->pc = 0x2CD44Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CD450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD44Cu;
        // 0x2cd450: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CD44Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CD454u;
    // 0x2cd454: 0x0  nop
    ctx->pc = 0x2cd454u;
    // NOP
    ctx->pc = 0x2cd458u;
}
