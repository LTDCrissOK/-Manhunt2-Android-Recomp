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

// Function: sub_001451B0
// Address: 0x1451b0 - 0x1451d8
void sub_001451B0_0x1451b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001451B0_0x1451b0");
#endif

    switch (ctx->pc) {
        case 0x1451c4u: goto label_1451c4;
        default: break;
    }

    ctx->pc = 0x1451b0u;

    // 0x1451b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1451b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1451b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1451b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1451b8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1451b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1451bc: 0xc04d6d2  jal         func_135B48
    ctx->pc = 0x1451BCu;
    SET_GPR_U32(ctx, 31, 0x1451C4u);
    ctx->pc = 0x1451C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1451BCu;
    // 0x1451c0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135B48u, 0x1451BCu, 0x1451C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1451C4u;
label_1451c4:
    // 0x1451c4: 0xae000460  sw          $zero, 0x460($s0)
    ctx->pc = 0x1451c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1120), GPR_U32(ctx, 0));
    // 0x1451c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1451c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1451cc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1451ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1451d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1451D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1451D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1451D0u;
        // 0x1451d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1451D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1451D8u;
}
