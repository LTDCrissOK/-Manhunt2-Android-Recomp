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

// Function: sub_0017AB58
// Address: 0x17ab58 - 0x17aba0
void sub_0017AB58_0x17ab58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017AB58_0x17ab58");
#endif

    ctx->pc = 0x17ab58u;

    // 0x17ab58: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x17ab58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x17ab5c: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x17ab5cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x17ab60: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x17ab60u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x17ab64: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x17ab64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17ab68: 0x24080012  addiu       $t0, $zero, 0x12
    ctx->pc = 0x17ab68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x17ab6c: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x17ab6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x17ab70: 0xac470090  sw          $a3, 0x90($v0)
    ctx->pc = 0x17ab70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 144), GPR_U32(ctx, 7));
    // 0x17ab74: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x17ab74u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ab78: 0xac680094  sw          $t0, 0x94($v1)
    ctx->pc = 0x17ab78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 148), GPR_U32(ctx, 8));
    // 0x17ab7c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x17ab7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ab80: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x17ab80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x17ab84: 0xacc00098  sw          $zero, 0x98($a2)
    ctx->pc = 0x17ab84u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 152), GPR_U32(ctx, 0));
    // 0x17ab88: 0xac40009c  sw          $zero, 0x9C($v0)
    ctx->pc = 0x17ab88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 156), GPR_U32(ctx, 0));
    // 0x17ab8c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x17ab8cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ab90: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x17ab90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ab94: 0xac6000a0  sw          $zero, 0xA0($v1)
    ctx->pc = 0x17ab94u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 160), GPR_U32(ctx, 0));
    // 0x17ab98: 0x3e00008  jr          $ra
    ctx->pc = 0x17AB98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17AB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AB98u;
        // 0x17ab9c: 0xaca000a4  sw          $zero, 0xA4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 164), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17AB98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17ABA0u;
}
