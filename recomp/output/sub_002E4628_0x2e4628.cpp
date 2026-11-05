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

// Function: sub_002E4628
// Address: 0x2e4628 - 0x2e4668
void sub_002E4628_0x2e4628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E4628_0x2e4628");
#endif

    switch (ctx->pc) {
        case 0x2e463cu: goto label_2e463c;
        default: break;
    }

    ctx->pc = 0x2e4628u;

    // 0x2e4628: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e4628u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2e462c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e462cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e4630: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2e4630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2e4634: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2E4634u;
    SET_GPR_U32(ctx, 31, 0x2E463Cu);
    ctx->pc = 0x2E4638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4634u;
    // 0x2e4638: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2E4634u, 0x2E463Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E463Cu;
label_2e463c:
    // 0x2e463c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2e463cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4640: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x2e4640u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x2e4644: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x2e4644u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x2e4648: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x2e4648u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x2e464c: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x2e464cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x2e4650: 0xa2000020  sb          $zero, 0x20($s0)
    ctx->pc = 0x2e4650u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 32), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e4654: 0xa2000021  sb          $zero, 0x21($s0)
    ctx->pc = 0x2e4654u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 33), (uint8_t)GPR_U32(ctx, 0));
    // 0x2e4658: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e4658u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e465c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2e465cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e4660: 0x3e00008  jr          $ra
    ctx->pc = 0x2E4660u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E4664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4660u;
        // 0x2e4664: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E4660u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E4668u;
}
