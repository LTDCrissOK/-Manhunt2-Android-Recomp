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

// Function: sub_0014D298
// Address: 0x14d298 - 0x14d2c0
void sub_0014D298_0x14d298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014D298_0x14d298");
#endif

    switch (ctx->pc) {
        case 0x14d2acu: goto label_14d2ac;
        default: break;
    }

    ctx->pc = 0x14d298u;

    // 0x14d298: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14d298u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14d29c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x14d29cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x14d2a0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x14d2a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x14d2a4: 0xc04d6d2  jal         func_135B48
    ctx->pc = 0x14D2A4u;
    SET_GPR_U32(ctx, 31, 0x14D2ACu);
    ctx->pc = 0x14D2A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D2A4u;
    // 0x14d2a8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135B48u, 0x14D2A4u, 0x14D2ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D2ACu;
label_14d2ac:
    // 0x14d2ac: 0xae000460  sw          $zero, 0x460($s0)
    ctx->pc = 0x14d2acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1120), GPR_U32(ctx, 0));
    // 0x14d2b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x14d2b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14d2b4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x14d2b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x14d2b8: 0x3e00008  jr          $ra
    ctx->pc = 0x14D2B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14D2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D2B8u;
        // 0x14d2bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14D2B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14D2C0u;
}
