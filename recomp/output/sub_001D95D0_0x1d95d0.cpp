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

// Function: sub_001D95D0
// Address: 0x1d95d0 - 0x1d9600
void sub_001D95D0_0x1d95d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D95D0_0x1d95d0");
#endif

    switch (ctx->pc) {
        case 0x1d95ecu: goto label_1d95ec;
        default: break;
    }

    ctx->pc = 0x1d95d0u;

    // 0x1d95d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d95d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d95d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d95d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d95d8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d95d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d95dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d95dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d95e0: 0xae050010  sw          $a1, 0x10($s0)
    ctx->pc = 0x1d95e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 5));
    // 0x1d95e4: 0xc0762ea  jal         func_1D8BA8
    ctx->pc = 0x1D95E4u;
    SET_GPR_U32(ctx, 31, 0x1D95ECu);
    ctx->pc = 0x1D95E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D95E4u;
    // 0x1d95e8: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8BA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8BA8u, 0x1D95E4u, 0x1D95ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D95ECu;
label_1d95ec:
    // 0x1d95ec: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x1d95ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x1d95f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d95f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d95f4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d95f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d95f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D95F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D95FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D95F8u;
        // 0x1d95fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D95F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D9600u;
}
