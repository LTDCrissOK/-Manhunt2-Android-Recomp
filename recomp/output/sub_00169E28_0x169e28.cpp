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

// Function: sub_00169E28
// Address: 0x169e28 - 0x169e60
void sub_00169E28_0x169e28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00169E28_0x169e28");
#endif

    ctx->pc = 0x169e28u;

    // 0x169e28: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x169e28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x169e2c: 0xac8000c4  sw          $zero, 0xC4($a0)
    ctx->pc = 0x169e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 196), GPR_U32(ctx, 0));
    // 0x169e30: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x169e30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
    // 0x169e34: 0xa0800004  sb          $zero, 0x4($a0)
    ctx->pc = 0x169e34u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x169e38: 0xa0800030  sb          $zero, 0x30($a0)
    ctx->pc = 0x169e38u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 48), (uint8_t)GPR_U32(ctx, 0));
    // 0x169e3c: 0xa0800051  sb          $zero, 0x51($a0)
    ctx->pc = 0x169e3cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 81), (uint8_t)GPR_U32(ctx, 0));
    // 0x169e40: 0xa0800072  sb          $zero, 0x72($a0)
    ctx->pc = 0x169e40u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 114), (uint8_t)GPR_U32(ctx, 0));
    // 0x169e44: 0xa0800093  sb          $zero, 0x93($a0)
    ctx->pc = 0x169e44u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 147), (uint8_t)GPR_U32(ctx, 0));
    // 0x169e48: 0xac8000b4  sw          $zero, 0xB4($a0)
    ctx->pc = 0x169e48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 180), GPR_U32(ctx, 0));
    // 0x169e4c: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x169e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x169e50: 0xac8000b8  sw          $zero, 0xB8($a0)
    ctx->pc = 0x169e50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 184), GPR_U32(ctx, 0));
    // 0x169e54: 0xac8000bc  sw          $zero, 0xBC($a0)
    ctx->pc = 0x169e54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 188), GPR_U32(ctx, 0));
    // 0x169e58: 0x3e00008  jr          $ra
    ctx->pc = 0x169E58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x169E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169E58u;
        // 0x169e5c: 0xac8000c0  sw          $zero, 0xC0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 192), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x169E58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x169E60u;
}
