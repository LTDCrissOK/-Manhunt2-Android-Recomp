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

// Function: sub_001409C0
// Address: 0x1409c0 - 0x1409e8
void sub_001409C0_0x1409c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001409C0_0x1409c0");
#endif

    switch (ctx->pc) {
        case 0x1409d4u: goto label_1409d4;
        default: break;
    }

    ctx->pc = 0x1409c0u;

    // 0x1409c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1409c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1409c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1409c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1409c8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1409c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1409cc: 0xc04d6d2  jal         func_135B48
    ctx->pc = 0x1409CCu;
    SET_GPR_U32(ctx, 31, 0x1409D4u);
    ctx->pc = 0x1409D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1409CCu;
    // 0x1409d0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135B48u, 0x1409CCu, 0x1409D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1409D4u;
label_1409d4:
    // 0x1409d4: 0xae000460  sw          $zero, 0x460($s0)
    ctx->pc = 0x1409d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1120), GPR_U32(ctx, 0));
    // 0x1409d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1409d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1409dc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1409dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1409e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1409E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1409E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1409E0u;
        // 0x1409e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1409E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1409E8u;
}
