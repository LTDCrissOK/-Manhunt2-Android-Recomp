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

// Function: sub_0016C6D0
// Address: 0x16c6d0 - 0x16c720
void sub_0016C6D0_0x16c6d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016C6D0_0x16c6d0");
#endif

    switch (ctx->pc) {
        case 0x16c6e4u: goto label_16c6e4;
        default: break;
    }

    ctx->pc = 0x16c6d0u;

    // 0x16c6d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16c6d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16c6d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16c6d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16c6d8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x16c6d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x16c6dc: 0xc04f8aa  jal         func_13E2A8
    ctx->pc = 0x16C6DCu;
    SET_GPR_U32(ctx, 31, 0x16C6E4u);
    ctx->pc = 0x16C6E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C6DCu;
    // 0x16c6e0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E2A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E2A8u, 0x16C6DCu, 0x16C6E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C6E4u;
label_16c6e4:
    // 0x16c6e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16c6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16c6e8: 0xae00011c  sw          $zero, 0x11C($s0)
    ctx->pc = 0x16c6e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 284), GPR_U32(ctx, 0));
    // 0x16c6ec: 0xae020118  sw          $v0, 0x118($s0)
    ctx->pc = 0x16c6ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 280), GPR_U32(ctx, 2));
    // 0x16c6f0: 0xa20000f8  sb          $zero, 0xF8($s0)
    ctx->pc = 0x16c6f0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 248), (uint8_t)GPR_U32(ctx, 0));
    // 0x16c6f4: 0xae000100  sw          $zero, 0x100($s0)
    ctx->pc = 0x16c6f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 0));
    // 0x16c6f8: 0xae000104  sw          $zero, 0x104($s0)
    ctx->pc = 0x16c6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 260), GPR_U32(ctx, 0));
    // 0x16c6fc: 0xae000108  sw          $zero, 0x108($s0)
    ctx->pc = 0x16c6fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 0));
    // 0x16c700: 0xae00010c  sw          $zero, 0x10C($s0)
    ctx->pc = 0x16c700u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 0));
    // 0x16c704: 0xae000110  sw          $zero, 0x110($s0)
    ctx->pc = 0x16c704u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 0));
    // 0x16c708: 0xae000114  sw          $zero, 0x114($s0)
    ctx->pc = 0x16c708u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 0));
    // 0x16c70c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16c70cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16c710: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x16c710u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16c714: 0x3e00008  jr          $ra
    ctx->pc = 0x16C714u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16C718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C714u;
        // 0x16c718: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16C714u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16C71Cu;
    // 0x16c71c: 0x0  nop
    ctx->pc = 0x16c71cu;
    // NOP
    ctx->pc = 0x16c720u;
}
