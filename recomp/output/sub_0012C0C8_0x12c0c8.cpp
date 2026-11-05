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

// Function: sub_0012C0C8
// Address: 0x12c0c8 - 0x12c100
void sub_0012C0C8_0x12c0c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012C0C8_0x12c0c8");
#endif

    switch (ctx->pc) {
        case 0x12c0dcu: goto label_12c0dc;
        case 0x12c0ecu: goto label_12c0ec;
        default: break;
    }

    ctx->pc = 0x12c0c8u;

    // 0x12c0c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x12c0c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12c0cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12c0ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12c0d0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x12c0d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x12c0d4: 0xc04b100  jal         func_12C400
    ctx->pc = 0x12C0D4u;
    SET_GPR_U32(ctx, 31, 0x12C0DCu);
    ctx->pc = 0x12C0D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C0D4u;
    // 0x12c0d8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C400u, 0x12C0D4u, 0x12C0DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C0DCu;
label_12c0dc:
    // 0x12c0dc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x12c0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x12c0e0: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x12c0e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x12c0e4: 0xc05f514  jal         func_17D450
    ctx->pc = 0x12C0E4u;
    SET_GPR_U32(ctx, 31, 0x12C0ECu);
    ctx->pc = 0x12C0E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C0E4u;
    // 0x12c0e8: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D450u, 0x12C0E4u, 0x12C0ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C0ECu;
label_12c0ec:
    // 0x12c0ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12c0ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12c0f0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x12c0f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12c0f4: 0x3e00008  jr          $ra
    ctx->pc = 0x12C0F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12C0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C0F4u;
        // 0x12c0f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12C0F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12C0FCu;
    // 0x12c0fc: 0x0  nop
    ctx->pc = 0x12c0fcu;
    // NOP
    ctx->pc = 0x12c100u;
}
