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

// Function: sub_00158D90
// Address: 0x158d90 - 0x158dd0
void sub_00158D90_0x158d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00158D90_0x158d90");
#endif

    switch (ctx->pc) {
        case 0x158da4u: goto label_158da4;
        case 0x158dbcu: goto label_158dbc;
        default: break;
    }

    ctx->pc = 0x158d90u;

    // 0x158d90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x158d90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x158d94: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x158d94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x158d98: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x158d98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x158d9c: 0xc04ef70  jal         func_13BDC0
    ctx->pc = 0x158D9Cu;
    SET_GPR_U32(ctx, 31, 0x158DA4u);
    ctx->pc = 0x158DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158D9Cu;
    // 0x158da0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13BDC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13BDC0u, 0x158D9Cu, 0x158DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158DA4u;
label_158da4:
    // 0x158da4: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x158da4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x158da8: 0xae000210  sw          $zero, 0x210($s0)
    ctx->pc = 0x158da8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 0));
    // 0x158dac: 0x24630c60  addiu       $v1, $v1, 0xC60
    ctx->pc = 0x158dacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3168));
    // 0x158db0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x158db0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158db4: 0xc056474  jal         func_1591D0
    ctx->pc = 0x158DB4u;
    SET_GPR_U32(ctx, 31, 0x158DBCu);
    ctx->pc = 0x158DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158DB4u;
    // 0x158db8: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1591D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1591D0u, 0x158DB4u, 0x158DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158DBCu;
label_158dbc:
    // 0x158dbc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x158dbcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158dc0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x158dc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x158dc4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x158dc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x158dc8: 0x3e00008  jr          $ra
    ctx->pc = 0x158DC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x158DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158DC8u;
        // 0x158dcc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x158DC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x158DD0u;
}
