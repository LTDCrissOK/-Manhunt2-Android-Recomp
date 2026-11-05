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

// Function: sub_002AB9A0
// Address: 0x2ab9a0 - 0x2ab9e8
void sub_002AB9A0_0x2ab9a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AB9A0_0x2ab9a0");
#endif

    switch (ctx->pc) {
        case 0x2ab9b8u: goto label_2ab9b8;
        case 0x2ab9c4u: goto label_2ab9c4;
        case 0x2ab9d0u: goto label_2ab9d0;
        case 0x2ab9d8u: goto label_2ab9d8;
        default: break;
    }

    ctx->pc = 0x2ab9a0u;

    // 0x2ab9a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ab9a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ab9a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ab9a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab9a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ab9a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ab9ac: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2ab9acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2ab9b0: 0xc0f8d8c  jal         func_3E3630
    ctx->pc = 0x2AB9B0u;
    SET_GPR_U32(ctx, 31, 0x2AB9B8u);
    ctx->pc = 0x2AB9B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB9B0u;
    // 0x2ab9b4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E3630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E3630u, 0x2AB9B0u, 0x2AB9B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB9B8u;
label_2ab9b8:
    // 0x2ab9b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ab9b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ab9bc: 0xc0f8d8a  jal         func_3E3628
    ctx->pc = 0x2AB9BCu;
    SET_GPR_U32(ctx, 31, 0x2AB9C4u);
    ctx->pc = 0x2AB9C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB9BCu;
    // 0x2ab9c0: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E3628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E3628u, 0x2AB9BCu, 0x2AB9C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB9C4u;
label_2ab9c4:
    // 0x2ab9c4: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2ab9c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x2ab9c8: 0xc0aae86  jal         func_2ABA18
    ctx->pc = 0x2AB9C8u;
    SET_GPR_U32(ctx, 31, 0x2AB9D0u);
    ctx->pc = 0x2AB9CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB9C8u;
    // 0x2ab9cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABA18u, 0x2AB9C8u, 0x2AB9D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB9D0u;
label_2ab9d0:
    // 0x2ab9d0: 0xc0aae7a  jal         func_2AB9E8
    ctx->pc = 0x2AB9D0u;
    SET_GPR_U32(ctx, 31, 0x2AB9D8u);
    ctx->pc = 0x2AB9D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AB9D0u;
    // 0x2ab9d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AB9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AB9E8u, 0x2AB9D0u, 0x2AB9D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AB9D8u;
label_2ab9d8:
    // 0x2ab9d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ab9d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ab9dc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2ab9dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ab9e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2AB9E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AB9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AB9E0u;
        // 0x2ab9e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AB9E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AB9E8u;
}
