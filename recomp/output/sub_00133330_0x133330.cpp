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

// Function: sub_00133330
// Address: 0x133330 - 0x133368
void sub_00133330_0x133330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00133330_0x133330");
#endif

    switch (ctx->pc) {
        case 0x133348u: goto label_133348;
        case 0x133354u: goto label_133354;
        default: break;
    }

    ctx->pc = 0x133330u;

    // 0x133330: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x133330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x133334: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x133334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x133338: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x133338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x13333c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13333cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133340: 0xc04561a  jal         func_115868
    ctx->pc = 0x133340u;
    SET_GPR_U32(ctx, 31, 0x133348u);
    ctx->pc = 0x133344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133340u;
    // 0x133344: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115868u, 0x133340u, 0x133348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133348u;
label_133348:
    // 0x133348: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x133348u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x13334c: 0xc043be8  jal         func_10EFA0
    ctx->pc = 0x13334Cu;
    SET_GPR_U32(ctx, 31, 0x133354u);
    ctx->pc = 0x133350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13334Cu;
    // 0x133350: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10EFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10EFA0u, 0x13334Cu, 0x133354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133354u;
label_133354:
    // 0x133354: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x133354u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x133358: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x133358u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13335c: 0x3e00008  jr          $ra
    ctx->pc = 0x13335Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x133360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13335Cu;
        // 0x133360: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13335Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x133364u;
    // 0x133364: 0x0  nop
    ctx->pc = 0x133364u;
    // NOP
    ctx->pc = 0x133368u;
}
