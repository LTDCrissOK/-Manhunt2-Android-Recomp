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

// Function: sub_0013E2A8
// Address: 0x13e2a8 - 0x13e300
void sub_0013E2A8_0x13e2a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013E2A8_0x13e2a8");
#endif

    switch (ctx->pc) {
        case 0x13e2ccu: goto label_13e2cc;
        default: break;
    }

    ctx->pc = 0x13e2a8u;

    // 0x13e2a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x13e2a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13e2ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13e2acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x13e2b0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x13e2b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x13e2b4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13e2b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e2b8: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x13e2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x13e2bc: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x13E2BCu;
    {
        const bool branch_taken_0x13e2bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13e2bc) {
            ctx->pc = 0x13E2C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13E2BCu;
            // 0x13e2c0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13E2F0u;
            goto label_13e2f0;
        }
    }
    ctx->pc = 0x13E2C4u;
    // 0x13e2c4: 0xc04f740  jal         func_13DD00
    ctx->pc = 0x13E2C4u;
    SET_GPR_U32(ctx, 31, 0x13E2CCu);
    ctx->pc = 0x13DD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13DD00u, 0x13E2C4u, 0x13E2CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E2CCu;
label_13e2cc:
    // 0x13e2cc: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x13e2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x13e2d0: 0xae00006c  sw          $zero, 0x6C($s0)
    ctx->pc = 0x13e2d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 0));
    // 0x13e2d4: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x13e2d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x13e2d8: 0xae000054  sw          $zero, 0x54($s0)
    ctx->pc = 0x13e2d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
    // 0x13e2dc: 0xae00005c  sw          $zero, 0x5C($s0)
    ctx->pc = 0x13e2dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 0));
    // 0x13e2e0: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x13e2e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
    // 0x13e2e4: 0xa2000068  sb          $zero, 0x68($s0)
    ctx->pc = 0x13e2e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 104), (uint8_t)GPR_U32(ctx, 0));
    // 0x13e2e8: 0xa2000069  sb          $zero, 0x69($s0)
    ctx->pc = 0x13e2e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 105), (uint8_t)GPR_U32(ctx, 0));
    // 0x13e2ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13e2ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13e2f0:
    // 0x13e2f0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x13e2f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13e2f4: 0x3e00008  jr          $ra
    ctx->pc = 0x13E2F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13E2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E2F4u;
        // 0x13e2f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13E2F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13E2FCu;
    // 0x13e2fc: 0x0  nop
    ctx->pc = 0x13e2fcu;
    // NOP
    ctx->pc = 0x13e300u;
}
