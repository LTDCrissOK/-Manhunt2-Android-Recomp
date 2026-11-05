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

// Function: sub_00397EB8
// Address: 0x397eb8 - 0x397ef8
void sub_00397EB8_0x397eb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00397EB8_0x397eb8");
#endif

    ctx->pc = 0x397eb8u;

    // 0x397eb8: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x397eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x397ebc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x397ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x397ec0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x397ec0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x397ec4: 0xac83003c  sw          $v1, 0x3C($a0)
    ctx->pc = 0x397ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 3));
    // 0x397ec8: 0xac820038  sw          $v0, 0x38($a0)
    ctx->pc = 0x397ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 2));
    // 0x397ecc: 0xac8000a4  sw          $zero, 0xA4($a0)
    ctx->pc = 0x397eccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 164), GPR_U32(ctx, 0));
    // 0x397ed0: 0xac800098  sw          $zero, 0x98($a0)
    ctx->pc = 0x397ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 152), GPR_U32(ctx, 0));
    // 0x397ed4: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x397ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x397ed8: 0xac800030  sw          $zero, 0x30($a0)
    ctx->pc = 0x397ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
    // 0x397edc: 0xac800034  sw          $zero, 0x34($a0)
    ctx->pc = 0x397edcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
    // 0x397ee0: 0xac800040  sw          $zero, 0x40($a0)
    ctx->pc = 0x397ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 0));
    // 0x397ee4: 0xac800044  sw          $zero, 0x44($a0)
    ctx->pc = 0x397ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 0));
    // 0x397ee8: 0xa0800003  sb          $zero, 0x3($a0)
    ctx->pc = 0x397ee8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x397eec: 0x3e00008  jr          $ra
    ctx->pc = 0x397EECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x397EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397EECu;
        // 0x397ef0: 0xac8000a0  sw          $zero, 0xA0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x397EECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x397EF4u;
    // 0x397ef4: 0x0  nop
    ctx->pc = 0x397ef4u;
    // NOP
    ctx->pc = 0x397ef8u;
}
