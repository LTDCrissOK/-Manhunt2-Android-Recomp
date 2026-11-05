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

// Function: sub_001D1D88
// Address: 0x1d1d88 - 0x1d1de8
void sub_001D1D88_0x1d1d88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D1D88_0x1d1d88");
#endif

    switch (ctx->pc) {
        case 0x1d1d9cu: goto label_1d1d9c;
        default: break;
    }

    ctx->pc = 0x1d1d88u;

    // 0x1d1d88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d1d88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d1d8c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d1d8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d1d90: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1d1d90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1d1d94: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x1D1D94u;
    SET_GPR_U32(ctx, 31, 0x1D1D9Cu);
    ctx->pc = 0x1D1D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1D94u;
    // 0x1d1d98: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x1D1D94u, 0x1D1D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1D9Cu;
label_1d1d9c:
    // 0x1d1d9c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1d1d9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1da0: 0xa6000008  sh          $zero, 0x8($s0)
    ctx->pc = 0x1d1da0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 0));
    // 0x1d1da4: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1d1da4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1d1da8: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x1d1da8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x1d1dac: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x1d1dacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x1d1db0: 0xa6000018  sh          $zero, 0x18($s0)
    ctx->pc = 0x1d1db0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 24), (uint16_t)GPR_U32(ctx, 0));
    // 0x1d1db4: 0xa200001a  sb          $zero, 0x1A($s0)
    ctx->pc = 0x1d1db4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 26), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d1db8: 0xa200001b  sb          $zero, 0x1B($s0)
    ctx->pc = 0x1d1db8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 27), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d1dbc: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x1d1dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x1d1dc0: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x1d1dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x1d1dc4: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1d1dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1d1dc8: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x1d1dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x1d1dcc: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x1d1dccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x1d1dd0: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x1d1dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x1d1dd4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d1dd4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d1dd8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1d1dd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d1ddc: 0x3e00008  jr          $ra
    ctx->pc = 0x1D1DDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D1DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1DDCu;
        // 0x1d1de0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1DDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D1DE4u;
    // 0x1d1de4: 0x0  nop
    ctx->pc = 0x1d1de4u;
    // NOP
    ctx->pc = 0x1d1de8u;
}
