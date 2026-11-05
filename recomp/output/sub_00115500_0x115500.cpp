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

// Function: sub_00115500
// Address: 0x115500 - 0x115538
void sub_00115500_0x115500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00115500_0x115500");
#endif

    switch (ctx->pc) {
        case 0x115514u: goto label_115514;
        default: break;
    }

    ctx->pc = 0x115500u;

    // 0x115500: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x115500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x115504: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x115504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x115508: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x115508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x11550c: 0xc045564  jal         func_115590
    ctx->pc = 0x11550Cu;
    SET_GPR_U32(ctx, 31, 0x115514u);
    ctx->pc = 0x115510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11550Cu;
    // 0x115510: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115590u, 0x11550Cu, 0x115514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115514u;
label_115514:
    // 0x115514: 0x92030068  lbu         $v1, 0x68($s0)
    ctx->pc = 0x115514u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x115518: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x115518u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11551c: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x11551cu;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x115520: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x115520u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x115524: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x115524u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x115528: 0x2c620001  sltiu       $v0, $v1, 0x1
    ctx->pc = 0x115528u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x11552c: 0x3e00008  jr          $ra
    ctx->pc = 0x11552Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x115530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11552Cu;
        // 0x115530: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11552Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x115534u;
    // 0x115534: 0x0  nop
    ctx->pc = 0x115534u;
    // NOP
    ctx->pc = 0x115538u;
}
