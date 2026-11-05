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

// Function: sub_00133750
// Address: 0x133750 - 0x133778
void sub_00133750_0x133750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00133750_0x133750");
#endif

    switch (ctx->pc) {
        case 0x133764u: goto label_133764;
        default: break;
    }

    ctx->pc = 0x133750u;

    // 0x133750: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x133750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x133754: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x133754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x133758: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x133758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x13375c: 0xc04ce2a  jal         func_1338A8
    ctx->pc = 0x13375Cu;
    SET_GPR_U32(ctx, 31, 0x133764u);
    ctx->pc = 0x133760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13375Cu;
    // 0x133760: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1338A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1338A8u, 0x13375Cu, 0x133764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133764u;
label_133764:
    // 0x133764: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x133764u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x133768: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x133768u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13376c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x13376cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x133770: 0x3e00008  jr          $ra
    ctx->pc = 0x133770u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x133774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133770u;
        // 0x133774: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x133770u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x133778u;
}
