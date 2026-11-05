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

// Function: sub_0014AB40
// Address: 0x14ab40 - 0x14ab78
void sub_0014AB40_0x14ab40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014AB40_0x14ab40");
#endif

    switch (ctx->pc) {
        case 0x14ab68u: goto label_14ab68;
        default: break;
    }

    ctx->pc = 0x14ab40u;

    // 0x14ab40: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x14ab40u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x14ab44: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14ab44u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14ab48: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x14ab48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x14ab4c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14ab4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14ab50: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x14ab50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x14ab54: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x14ab54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x14ab58: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x14ab58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ab5c: 0xac6604e0  sw          $a2, 0x4E0($v1)
    ctx->pc = 0x14ab5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1248), GPR_U32(ctx, 6));
    // 0x14ab60: 0xc04d8b4  jal         func_1362D0
    ctx->pc = 0x14AB60u;
    SET_GPR_U32(ctx, 31, 0x14AB68u);
    ctx->pc = 0x14AB64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AB60u;
    // 0x14ab64: 0xac4004e4  sw          $zero, 0x4E4($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 1252), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1362D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1362D0u, 0x14AB60u, 0x14AB68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AB68u;
label_14ab68:
    // 0x14ab68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14ab68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14ab6c: 0x3e00008  jr          $ra
    ctx->pc = 0x14AB6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14AB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AB6Cu;
        // 0x14ab70: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14AB6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14AB74u;
    // 0x14ab74: 0x0  nop
    ctx->pc = 0x14ab74u;
    // NOP
    ctx->pc = 0x14ab78u;
}
