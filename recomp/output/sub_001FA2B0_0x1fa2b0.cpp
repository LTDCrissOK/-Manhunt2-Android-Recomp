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

// Function: sub_001FA2B0
// Address: 0x1fa2b0 - 0x1fa2f0
void sub_001FA2B0_0x1fa2b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FA2B0_0x1fa2b0");
#endif

    ctx->pc = 0x1fa2b0u;

    // 0x1fa2b0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1fa2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1fa2b4: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x1fa2b4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x1fa2b8: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x1fa2b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x1fa2bc: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1fa2bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x1fa2c0: 0x24a5cfb0  addiu       $a1, $a1, -0x3050
    ctx->pc = 0x1fa2c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954928));
    // 0x1fa2c4: 0x90c29310  lbu         $v0, -0x6CF0($a2)
    ctx->pc = 0x1fa2c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x3F9310u));
    // 0x1fa2c8: 0x90c39310  lbu         $v1, -0x6CF0($a2)
    ctx->pc = 0x1fa2c8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x3F9310u));
    // 0x1fa2cc: 0x8c870004  lw          $a3, 0x4($a0)
    ctx->pc = 0x1fa2ccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1fa2d0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1fa2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1fa2d4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1fa2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1fa2d8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1fa2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1fa2dc: 0xac470000  sw          $a3, 0x0($v0)
    ctx->pc = 0x1fa2dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
    // 0x1fa2e0: 0xa0c39310  sb          $v1, -0x6CF0($a2)
    ctx->pc = 0x1fa2e0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 4294939408), (uint8_t)GPR_U32(ctx, 3));
    // 0x1fa2e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1FA2E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FA2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA2E4u;
        // 0x1fa2e8: 0xac800004  sw          $zero, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FA2E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FA2ECu;
    // 0x1fa2ec: 0x0  nop
    ctx->pc = 0x1fa2ecu;
    // NOP
    ctx->pc = 0x1fa2f0u;
}
