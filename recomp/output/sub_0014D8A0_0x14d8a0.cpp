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

// Function: sub_0014D8A0
// Address: 0x14d8a0 - 0x14d8e0
void sub_0014D8A0_0x14d8a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014D8A0_0x14d8a0");
#endif

    switch (ctx->pc) {
        case 0x14d8b8u: goto label_14d8b8;
        case 0x14d8ccu: goto label_14d8cc;
        default: break;
    }

    ctx->pc = 0x14d8a0u;

    // 0x14d8a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14d8a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14d8a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x14d8a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x14d8a8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x14d8a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x14d8ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14d8acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d8b0: 0xc04d8dc  jal         func_136370
    ctx->pc = 0x14D8B0u;
    SET_GPR_U32(ctx, 31, 0x14D8B8u);
    ctx->pc = 0x14D8B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D8B0u;
    // 0x14d8b4: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136370u, 0x14D8B0u, 0x14D8B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D8B8u;
label_14d8b8:
    // 0x14d8b8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x14d8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14d8bc: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x14D8BCu;
    {
        const bool branch_taken_0x14d8bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x14D8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D8BCu;
        // 0x14d8c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d8bc) {
            ctx->pc = 0x14D8D0u;
            goto label_14d8d0;
        }
    }
    ctx->pc = 0x14D8C4u;
    // 0x14d8c4: 0xc0536ee  jal         func_14DBB8
    ctx->pc = 0x14D8C4u;
    SET_GPR_U32(ctx, 31, 0x14D8CCu);
    ctx->pc = 0x14D8C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D8C4u;
    // 0x14d8c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DBB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DBB8u, 0x14D8C4u, 0x14D8CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D8CCu;
label_14d8cc:
    // 0x14d8cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14d8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14d8d0:
    // 0x14d8d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x14d8d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14d8d4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x14d8d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x14d8d8: 0x3e00008  jr          $ra
    ctx->pc = 0x14D8D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14D8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D8D8u;
        // 0x14d8dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14D8D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14D8E0u;
}
