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

// Function: sub_002054F0
// Address: 0x2054f0 - 0x205520
void sub_002054F0_0x2054f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002054F0_0x2054f0");
#endif

    switch (ctx->pc) {
        case 0x20550cu: goto label_20550c;
        default: break;
    }

    ctx->pc = 0x2054f0u;

    // 0x2054f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2054f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2054f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2054f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2054f8: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x2054f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2054fc: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2054FCu;
    {
        const bool branch_taken_0x2054fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2054fc) {
            ctx->pc = 0x205500u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2054FCu;
            // 0x205500: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x205514u;
            goto label_205514;
        }
    }
    ctx->pc = 0x205504u;
    // 0x205504: 0xc0e6e40  jal         func_39B900
    ctx->pc = 0x205504u;
    SET_GPR_U32(ctx, 31, 0x20550Cu);
    ctx->pc = 0x39B900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39B900u, 0x205504u, 0x20550Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20550Cu;
label_20550c:
    // 0x20550c: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x20550cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
    // 0x205510: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x205510u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_205514:
    // 0x205514: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x205514u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x205518: 0x3e00008  jr          $ra
    ctx->pc = 0x205518u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20551Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205518u;
        // 0x20551c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x205518u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x205520u;
}
