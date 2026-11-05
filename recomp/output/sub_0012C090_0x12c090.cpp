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

// Function: sub_0012C090
// Address: 0x12c090 - 0x12c0c8
void sub_0012C090_0x12c090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012C090_0x12c090");
#endif

    switch (ctx->pc) {
        case 0x12c0a4u: goto label_12c0a4;
        default: break;
    }

    ctx->pc = 0x12c090u;

    // 0x12c090: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x12c090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12c094: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12c094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12c098: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x12c098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x12c09c: 0xc04b100  jal         func_12C400
    ctx->pc = 0x12C09Cu;
    SET_GPR_U32(ctx, 31, 0x12C0A4u);
    ctx->pc = 0x12C0A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C09Cu;
    // 0x12c0a0: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C400u, 0x12C09Cu, 0x12C0A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C0A4u;
label_12c0a4:
    // 0x12c0a4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x12c0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x12c0a8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x12c0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12c0ac: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x12c0acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x12c0b0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x12c0b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12c0b4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x12c0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x12c0b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12c0b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12c0bc: 0xac430038  sw          $v1, 0x38($v0)
    ctx->pc = 0x12c0bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 3));
    // 0x12c0c0: 0x3e00008  jr          $ra
    ctx->pc = 0x12C0C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12C0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C0C0u;
        // 0x12c0c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12C0C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12C0C8u;
}
