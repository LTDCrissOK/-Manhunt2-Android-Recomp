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

// Function: sub_0030C9A8
// Address: 0x30c9a8 - 0x30c9f0
void sub_0030C9A8_0x30c9a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030C9A8_0x30c9a8");
#endif

    switch (ctx->pc) {
        case 0x30c9bcu: goto label_30c9bc;
        case 0x30c9d4u: goto label_30c9d4;
        default: break;
    }

    ctx->pc = 0x30c9a8u;

    // 0x30c9a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x30c9a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x30c9ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x30c9acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x30c9b0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x30c9b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x30c9b4: 0xc0c3254  jal         func_30C950
    ctx->pc = 0x30C9B4u;
    SET_GPR_U32(ctx, 31, 0x30C9BCu);
    ctx->pc = 0x30C9B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C9B4u;
    // 0x30c9b8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30C950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C950u, 0x30C9B4u, 0x30C9BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C9BCu;
label_30c9bc:
    // 0x30c9bc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x30c9bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c9c0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x30c9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x30c9c4: 0x10a20005  beq         $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30C9C4u;
    {
        const bool branch_taken_0x30c9c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x30C9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C9C4u;
        // 0x30c9c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c9c4) {
            ctx->pc = 0x30C9DCu;
            goto label_30c9dc;
        }
    }
    ctx->pc = 0x30C9CCu;
    // 0x30c9cc: 0xc0c3264  jal         func_30C990
    ctx->pc = 0x30C9CCu;
    SET_GPR_U32(ctx, 31, 0x30C9D4u);
    ctx->pc = 0x30C9D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C9CCu;
    // 0x30c9d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30C990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C990u, 0x30C9CCu, 0x30C9D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C9D4u;
label_30c9d4:
    // 0x30c9d4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x30C9D4u;
    {
        const bool branch_taken_0x30c9d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C9D4u;
        // 0x30c9d8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c9d4) {
            ctx->pc = 0x30C9E0u;
            goto label_30c9e0;
        }
    }
    ctx->pc = 0x30C9DCu;
label_30c9dc:
    // 0x30c9dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x30c9dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_30c9e0:
    // 0x30c9e0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x30c9e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x30c9e4: 0x3e00008  jr          $ra
    ctx->pc = 0x30C9E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30C9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C9E4u;
        // 0x30c9e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30C9E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30C9ECu;
    // 0x30c9ec: 0x0  nop
    ctx->pc = 0x30c9ecu;
    // NOP
    ctx->pc = 0x30c9f0u;
}
