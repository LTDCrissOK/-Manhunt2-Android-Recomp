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

// Function: sub_002A3ED8
// Address: 0x2a3ed8 - 0x2a3f30
void sub_002A3ED8_0x2a3ed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A3ED8_0x2a3ed8");
#endif

    switch (ctx->pc) {
        case 0x2a3f18u: goto label_2a3f18;
        default: break;
    }

    ctx->pc = 0x2a3ed8u;

    // 0x2a3ed8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2a3ed8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2a3edc: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x2a3edcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x2a3ee0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a3ee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a3ee4: 0x244236a0  addiu       $v0, $v0, 0x36A0
    ctx->pc = 0x2a3ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13984));
    // 0x2a3ee8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2a3ee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2a3eec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2a3eecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3ef0: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2a3ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x2a3ef4: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x2a3ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x2a3ef8: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x2a3ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x2a3efc: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x2a3efcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x2a3f00: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x2a3f00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x2a3f04: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x2a3f04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x2a3f08: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x2a3f08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x2a3f0c: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x2a3f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x2a3f10: 0xc0a90a2  jal         func_2A4288
    ctx->pc = 0x2A3F10u;
    SET_GPR_U32(ctx, 31, 0x2A3F18u);
    ctx->pc = 0x2A3F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3F10u;
    // 0x2a3f14: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A4288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A4288u, 0x2A3F10u, 0x2A3F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3F18u;
label_2a3f18:
    // 0x2a3f18: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2a3f18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3f1c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2a3f1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2a3f20: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a3f20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a3f24: 0x3e00008  jr          $ra
    ctx->pc = 0x2A3F24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A3F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3F24u;
        // 0x2a3f28: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A3F24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A3F2Cu;
    // 0x2a3f2c: 0x0  nop
    ctx->pc = 0x2a3f2cu;
    // NOP
    ctx->pc = 0x2a3f30u;
}
