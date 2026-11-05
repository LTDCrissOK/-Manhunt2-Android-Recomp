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

// Function: sub_001A4828
// Address: 0x1a4828 - 0x1a4850
void sub_001A4828_0x1a4828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A4828_0x1a4828");
#endif

    switch (ctx->pc) {
        case 0x1a4840u: goto label_1a4840;
        default: break;
    }

    ctx->pc = 0x1a4828u;

    // 0x1a4828: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a4828u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a482c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a482cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a4830: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x1a4830u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a4834: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x1a4834u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x1a4838: 0xc0f7200  jal         func_3DC800
    ctx->pc = 0x1A4838u;
    SET_GPR_U32(ctx, 31, 0x1A4840u);
    ctx->pc = 0x1A483Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4838u;
    // 0x1a483c: 0x2484f030  addiu       $a0, $a0, -0xFD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC800u, 0x1A4838u, 0x1A4840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A4840u;
label_1a4840:
    // 0x1a4840: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a4840u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a4844: 0x3e00008  jr          $ra
    ctx->pc = 0x1A4844u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A4848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4844u;
        // 0x1a4848: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4844u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A484Cu;
    // 0x1a484c: 0x0  nop
    ctx->pc = 0x1a484cu;
    // NOP
    ctx->pc = 0x1a4850u;
}
