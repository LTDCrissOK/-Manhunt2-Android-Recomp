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

// Function: sub_002CAF10
// Address: 0x2caf10 - 0x2caf58
void sub_002CAF10_0x2caf10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CAF10_0x2caf10");
#endif

    switch (ctx->pc) {
        case 0x2caf24u: goto label_2caf24;
        default: break;
    }

    ctx->pc = 0x2caf10u;

    // 0x2caf10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2caf10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2caf14: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2caf14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2caf18: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2caf18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2caf1c: 0xc0b2b6a  jal         func_2CADA8
    ctx->pc = 0x2CAF1Cu;
    SET_GPR_U32(ctx, 31, 0x2CAF24u);
    ctx->pc = 0x2CAF20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CAF1Cu;
    // 0x2caf20: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CADA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CADA8u, 0x2CAF1Cu, 0x2CAF24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CAF24u;
label_2caf24:
    // 0x2caf24: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x2caf24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
    // 0x2caf28: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2caf28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x2caf2c: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x2caf2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x2caf30: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x2caf30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x2caf34: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x2caf34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
    // 0x2caf38: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x2caf38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
    // 0x2caf3c: 0xae000054  sw          $zero, 0x54($s0)
    ctx->pc = 0x2caf3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
    // 0x2caf40: 0xae00004c  sw          $zero, 0x4C($s0)
    ctx->pc = 0x2caf40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
    // 0x2caf44: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2caf44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2caf48: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2caf48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2caf4c: 0x3e00008  jr          $ra
    ctx->pc = 0x2CAF4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CAF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAF4Cu;
        // 0x2caf50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CAF4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CAF54u;
    // 0x2caf54: 0x0  nop
    ctx->pc = 0x2caf54u;
    // NOP
    ctx->pc = 0x2caf58u;
}
