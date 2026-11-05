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

// Function: sub_001EB0F0
// Address: 0x1eb0f0 - 0x1eb130
void sub_001EB0F0_0x1eb0f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EB0F0_0x1eb0f0");
#endif

    ctx->pc = 0x1eb0f0u;

    // 0x1eb0f0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1eb0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1eb0f4: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x1eb0f4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x1eb0f8: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x1eb0f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x1eb0fc: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1eb0fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x1eb100: 0x24a5c858  addiu       $a1, $a1, -0x37A8
    ctx->pc = 0x1eb100u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953048));
    // 0x1eb104: 0x90c29200  lbu         $v0, -0x6E00($a2)
    ctx->pc = 0x1eb104u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x3F9200u));
    // 0x1eb108: 0x90c39200  lbu         $v1, -0x6E00($a2)
    ctx->pc = 0x1eb108u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x3F9200u));
    // 0x1eb10c: 0x8c870004  lw          $a3, 0x4($a0)
    ctx->pc = 0x1eb10cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1eb110: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1eb110u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1eb114: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1eb114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1eb118: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1eb118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1eb11c: 0xac470000  sw          $a3, 0x0($v0)
    ctx->pc = 0x1eb11cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
    // 0x1eb120: 0xa0c39200  sb          $v1, -0x6E00($a2)
    ctx->pc = 0x1eb120u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 4294939136), (uint8_t)GPR_U32(ctx, 3));
    // 0x1eb124: 0x3e00008  jr          $ra
    ctx->pc = 0x1EB124u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EB128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB124u;
        // 0x1eb128: 0xac800004  sw          $zero, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EB124u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EB12Cu;
    // 0x1eb12c: 0x0  nop
    ctx->pc = 0x1eb12cu;
    // NOP
    ctx->pc = 0x1eb130u;
}
