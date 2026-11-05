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

// Function: sub_001EBE30
// Address: 0x1ebe30 - 0x1ebe70
void sub_001EBE30_0x1ebe30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EBE30_0x1ebe30");
#endif

    ctx->pc = 0x1ebe30u;

    // 0x1ebe30: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x1ebe30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1ebe34: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x1ebe34u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1ebe38: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x1ebe38u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1ebe3c: 0x34038420  ori         $v1, $zero, 0x8420
    ctx->pc = 0x1ebe3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33824);
    // 0x1ebe40: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ebe40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ebe44: 0xac800158  sw          $zero, 0x158($a0)
    ctx->pc = 0x1ebe44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 344), GPR_U32(ctx, 0));
    // 0x1ebe48: 0xac820124  sw          $v0, 0x124($a0)
    ctx->pc = 0x1ebe48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 292), GPR_U32(ctx, 2));
    // 0x1ebe4c: 0xac820114  sw          $v0, 0x114($a0)
    ctx->pc = 0x1ebe4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 276), GPR_U32(ctx, 2));
    // 0x1ebe50: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1ebe50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1ebe54: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x1ebe54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1ebe58: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x1ebe58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1ebe5c: 0x3e00008  jr          $ra
    ctx->pc = 0x1EBE5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EBE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBE5Cu;
        // 0x1ebe60: 0xac820144  sw          $v0, 0x144($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 324), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EBE5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EBE64u;
    // 0x1ebe64: 0x0  nop
    ctx->pc = 0x1ebe64u;
    // NOP
    // 0x1ebe68: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1ebe68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1ebe6c: 0x0  nop
    ctx->pc = 0x1ebe6cu;
    // NOP
    ctx->pc = 0x1ebe70u;
}
