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

// Function: sub_0012B798
// Address: 0x12b798 - 0x12b7e0
void sub_0012B798_0x12b798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012B798_0x12b798");
#endif

    switch (ctx->pc) {
        case 0x12b7b4u: goto label_12b7b4;
        case 0x12b7ccu: goto label_12b7cc;
        default: break;
    }

    ctx->pc = 0x12b798u;

    // 0x12b798: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12b798u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12b79c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12b79cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12b7a0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12b7a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12b7a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12b7a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b7a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x12b7a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x12b7ac: 0xc04b19a  jal         func_12C668
    ctx->pc = 0x12B7ACu;
    SET_GPR_U32(ctx, 31, 0x12B7B4u);
    ctx->pc = 0x12B7B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B7ACu;
    // 0x12b7b0: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C668u, 0x12B7ACu, 0x12B7B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B7B4u;
label_12b7b4:
    // 0x12b7b4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x12b7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x12b7b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12b7b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b7bc: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x12b7bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x12b7c0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x12b7c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b7c4: 0xc04b032  jal         func_12C0C8
    ctx->pc = 0x12B7C4u;
    SET_GPR_U32(ctx, 31, 0x12B7CCu);
    ctx->pc = 0x12B7C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B7C4u;
    // 0x12b7c8: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C0C8u, 0x12B7C4u, 0x12B7CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12B7CCu;
label_12b7cc:
    // 0x12b7cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12b7ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12b7d0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x12b7d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12b7d4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x12b7d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12b7d8: 0x3e00008  jr          $ra
    ctx->pc = 0x12B7D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12B7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B7D8u;
        // 0x12b7dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12B7D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12B7E0u;
}
