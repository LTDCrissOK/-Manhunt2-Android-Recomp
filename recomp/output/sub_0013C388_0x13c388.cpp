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

// Function: sub_0013C388
// Address: 0x13c388 - 0x13c3b8
void sub_0013C388_0x13c388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013C388_0x13c388");
#endif

    ctx->pc = 0x13c388u;

    // 0x13c388: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x13c388u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x13c38c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x13c38cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13c390: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x13c390u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x13c394: 0x2402001a  addiu       $v0, $zero, 0x1A
    ctx->pc = 0x13c394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x13c398: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x13c398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x13c39c: 0xac660010  sw          $a2, 0x10($v1)
    ctx->pc = 0x13c39cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 6));
    // 0x13c3a0: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x13c3a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c3a4: 0xace20014  sw          $v0, 0x14($a3)
    ctx->pc = 0x13c3a4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 2));
    // 0x13c3a8: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x13c3a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c3ac: 0x3e00008  jr          $ra
    ctx->pc = 0x13C3ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13C3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C3ACu;
        // 0x13c3b0: 0xac800018  sw          $zero, 0x18($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13C3ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13C3B4u;
    // 0x13c3b4: 0x0  nop
    ctx->pc = 0x13c3b4u;
    // NOP
    ctx->pc = 0x13c3b8u;
}
