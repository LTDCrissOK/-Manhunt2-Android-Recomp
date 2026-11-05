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

// Function: sub_00142DD0
// Address: 0x142dd0 - 0x142df8
void sub_00142DD0_0x142dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00142DD0_0x142dd0");
#endif

    switch (ctx->pc) {
        case 0x142de4u: goto label_142de4;
        default: break;
    }

    ctx->pc = 0x142dd0u;

    // 0x142dd0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x142dd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x142dd4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x142dd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x142dd8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x142dd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x142ddc: 0xc04e4fa  jal         func_1393E8
    ctx->pc = 0x142DDCu;
    SET_GPR_U32(ctx, 31, 0x142DE4u);
    ctx->pc = 0x142DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142DDCu;
    // 0x142de0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1393E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1393E8u, 0x142DDCu, 0x142DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142DE4u;
label_142de4:
    // 0x142de4: 0xae000460  sw          $zero, 0x460($s0)
    ctx->pc = 0x142de4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1120), GPR_U32(ctx, 0));
    // 0x142de8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x142de8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x142dec: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x142decu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x142df0: 0x3e00008  jr          $ra
    ctx->pc = 0x142DF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x142DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142DF0u;
        // 0x142df4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x142DF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x142DF8u;
}
