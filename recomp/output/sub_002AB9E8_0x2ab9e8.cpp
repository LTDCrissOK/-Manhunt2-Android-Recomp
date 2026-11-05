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

// Function: sub_002AB9E8
// Address: 0x2ab9e8 - 0x2aba18
void sub_002AB9E8_0x2ab9e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AB9E8_0x2ab9e8");
#endif

    switch (ctx->pc) {
        case 0x2ab9fcu: goto label_2ab9fc;
        case 0x2aba04u: goto label_2aba04;
        default: break;
    }

    ctx->pc = 0x2ab9e8u;

    // 0x2ab9e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ab9e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ab9ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ab9ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ab9f0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2ab9f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2ab9f4: 0xc0aae9a  jal         func_2ABA68
    ctx->pc = 0x2AB9F4u;
    SET_GPR_U32(ctx, 31, 0x2AB9FCu);
    ctx->pc = 0x2AB9F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB9F4u;
    // 0x2ab9f8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABA68u, 0x2AB9F4u, 0x2AB9FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB9FCu;
label_2ab9fc:
    // 0x2ab9fc: 0xc0aaef0  jal         func_2ABBC0
    ctx->pc = 0x2AB9FCu;
    SET_GPR_U32(ctx, 31, 0x2ABA04u);
    ctx->pc = 0x2ABA00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB9FCu;
    // 0x2aba00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABBC0u, 0x2AB9FCu, 0x2ABA04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ABA04u;
label_2aba04:
    // 0x2aba04: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2aba04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2aba08: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2aba08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2aba0c: 0x3e00008  jr          $ra
    ctx->pc = 0x2ABA0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ABA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABA0Cu;
        // 0x2aba10: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ABA0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ABA14u;
    // 0x2aba14: 0x0  nop
    ctx->pc = 0x2aba14u;
    // NOP
    ctx->pc = 0x2aba18u;
}
