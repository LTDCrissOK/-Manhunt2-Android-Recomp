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

// Function: sub_001B2F00
// Address: 0x1b2f00 - 0x1b2f40
void sub_001B2F00_0x1b2f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B2F00_0x1b2f00");
#endif

    switch (ctx->pc) {
        case 0x1b2f20u: goto label_1b2f20;
        default: break;
    }

    ctx->pc = 0x1b2f00u;

    // 0x1b2f00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b2f00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b2f04: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b2f04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b2f08: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1b2f08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1b2f0c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b2f0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2f10: 0xae060014  sw          $a2, 0x14($s0)
    ctx->pc = 0x1b2f10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 6));
    // 0x1b2f14: 0xae05000c  sw          $a1, 0xC($s0)
    ctx->pc = 0x1b2f14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 5));
    // 0x1b2f18: 0xc0c326a  jal         func_30C9A8
    ctx->pc = 0x1B2F18u;
    SET_GPR_U32(ctx, 31, 0x1B2F20u);
    ctx->pc = 0x1B2F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2F18u;
    // 0x1b2f1c: 0x8cc40104  lw          $a0, 0x104($a2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 260)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30C9A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C9A8u, 0x1B2F18u, 0x1B2F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B2F20u;
label_1b2f20:
    // 0x1b2f20: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x1b2f20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x1b2f24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b2f24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b2f28: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1b2f28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b2f2c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B2F2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B2F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2F2Cu;
        // 0x1b2f30: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B2F2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B2F34u;
    // 0x1b2f34: 0x0  nop
    ctx->pc = 0x1b2f34u;
    // NOP
    // 0x1b2f38: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1b2f38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1b2f3c: 0x0  nop
    ctx->pc = 0x1b2f3cu;
    // NOP
    ctx->pc = 0x1b2f40u;
}
