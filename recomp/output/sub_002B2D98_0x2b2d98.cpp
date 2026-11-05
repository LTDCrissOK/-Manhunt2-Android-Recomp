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

// Function: sub_002B2D98
// Address: 0x2b2d98 - 0x2b2dd8
void sub_002B2D98_0x2b2d98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B2D98_0x2b2d98");
#endif

    ctx->pc = 0x2b2d98u;

    // 0x2b2d98: 0x3c050005  lui         $a1, 0x5
    ctx->pc = 0x2b2d98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5 << 16));
    // 0x2b2d9c: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x2b2d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x2b2da0: 0x244238d0  addiu       $v0, $v0, 0x38D0
    ctx->pc = 0x2b2da0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14544));
    // 0x2b2da4: 0x3c030005  lui         $v1, 0x5
    ctx->pc = 0x2b2da4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)5 << 16));
    // 0x2b2da8: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x2b2da8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2b2dac: 0x34632e40  ori         $v1, $v1, 0x2E40
    ctx->pc = 0x2b2dacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)11840);
    // 0x2b2db0: 0xaca22e4c  sw          $v0, 0x2E4C($a1)
    ctx->pc = 0x2b2db0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 11852), GPR_U32(ctx, 2));
    // 0x2b2db4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x2b2db4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2b2db8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2b2db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b2dbc: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x2b2dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x2b2dc0: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x2b2dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x2b2dc4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2b2dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x2b2dc8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2b2dc8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2dcc: 0x3e00008  jr          $ra
    ctx->pc = 0x2B2DCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B2DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2DCCu;
        // 0x2b2dd0: 0xa08058ec  sb          $zero, 0x58EC($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 22764), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B2DCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B2DD4u;
    // 0x2b2dd4: 0x0  nop
    ctx->pc = 0x2b2dd4u;
    // NOP
    ctx->pc = 0x2b2dd8u;
}
