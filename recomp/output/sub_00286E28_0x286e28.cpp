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

// Function: sub_00286E28
// Address: 0x286e28 - 0x286e80
void sub_00286E28_0x286e28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00286E28_0x286e28");
#endif

    ctx->pc = 0x286e28u;

    // 0x286e28: 0x3c080067  lui         $t0, 0x67
    ctx->pc = 0x286e28u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)103 << 16));
    // 0x286e2c: 0x8d02a320  lw          $v0, -0x5CE0($t0)
    ctx->pc = 0x286e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x66A320u));
    // 0x286e30: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x286E30u;
    {
        const bool branch_taken_0x286e30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x286E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286E30u;
        // 0x286e34: 0x2503a320  addiu       $v1, $t0, -0x5CE0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294943520));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286e30) {
            ctx->pc = 0x286E74u;
            goto label_286e74;
        }
    }
    ctx->pc = 0x286E38u;
    // 0x286e38: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x286e38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x286e3c: 0xa0670034  sb          $a3, 0x34($v1)
    ctx->pc = 0x286e3cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 52), (uint8_t)GPR_U32(ctx, 7));
    // 0x286e40: 0xad02a320  sw          $v0, -0x5CE0($t0)
    ctx->pc = 0x286e40u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4294943520), GPR_U32(ctx, 2));
    // 0x286e44: 0xac640014  sw          $a0, 0x14($v1)
    ctx->pc = 0x286e44u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 4));
    // 0x286e48: 0xac62001c  sw          $v0, 0x1C($v1)
    ctx->pc = 0x286e48u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 2));
    // 0x286e4c: 0xac650018  sw          $a1, 0x18($v1)
    ctx->pc = 0x286e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 5));
    // 0x286e50: 0xac660020  sw          $a2, 0x20($v1)
    ctx->pc = 0x286e50u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 6));
    // 0x286e54: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x286e54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x286e58: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x286e58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x286e5c: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x286e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x286e60: 0xac600024  sw          $zero, 0x24($v1)
    ctx->pc = 0x286e60u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 0));
    // 0x286e64: 0xac600028  sw          $zero, 0x28($v1)
    ctx->pc = 0x286e64u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 0));
    // 0x286e68: 0xac60002c  sw          $zero, 0x2C($v1)
    ctx->pc = 0x286e68u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 0));
    // 0x286e6c: 0xac600030  sw          $zero, 0x30($v1)
    ctx->pc = 0x286e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 0));
    // 0x286e70: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x286e70u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
label_286e74:
    // 0x286e74: 0x3e00008  jr          $ra
    ctx->pc = 0x286E74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x286E74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x286E7Cu;
    // 0x286e7c: 0x0  nop
    ctx->pc = 0x286e7cu;
    // NOP
    ctx->pc = 0x286e80u;
}
