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

// Function: sub_001594B0
// Address: 0x1594b0 - 0x159500
void sub_001594B0_0x1594b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001594B0_0x1594b0");
#endif

    switch (ctx->pc) {
        case 0x1594c8u: goto label_1594c8;
        case 0x1594e0u: goto label_1594e0;
        case 0x1594f0u: goto label_1594f0;
        default: break;
    }

    ctx->pc = 0x1594b0u;

    // 0x1594b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1594b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1594b4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1594b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1594b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1594b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1594bc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1594bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1594c0: 0xc04f43a  jal         func_13D0E8
    ctx->pc = 0x1594C0u;
    SET_GPR_U32(ctx, 31, 0x1594C8u);
    ctx->pc = 0x1594C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1594C0u;
    // 0x1594c4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13D0E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13D0E8u, 0x1594C0u, 0x1594C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1594C8u;
label_1594c8:
    // 0x1594c8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1594c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1594cc: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1594ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1594d0: 0x14a20005  bne         $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1594D0u;
    {
        const bool branch_taken_0x1594d0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x1594d0) {
            ctx->pc = 0x1594E8u;
            goto label_1594e8;
        }
    }
    ctx->pc = 0x1594D8u;
    // 0x1594d8: 0xc056568  jal         func_1595A0
    ctx->pc = 0x1594D8u;
    SET_GPR_U32(ctx, 31, 0x1594E0u);
    ctx->pc = 0x1594DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1594D8u;
    // 0x1594dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1595A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1595A0u, 0x1594D8u, 0x1594E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1594E0u;
label_1594e0:
    // 0x1594e0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1594E0u;
    {
        const bool branch_taken_0x1594e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1594E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1594E0u;
        // 0x1594e4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1594e0) {
            ctx->pc = 0x1594F4u;
            goto label_1594f4;
        }
    }
    ctx->pc = 0x1594E8u;
label_1594e8:
    // 0x1594e8: 0xc0565d8  jal         func_159760
    ctx->pc = 0x1594E8u;
    SET_GPR_U32(ctx, 31, 0x1594F0u);
    ctx->pc = 0x1594ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1594E8u;
    // 0x1594ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x159760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x159760u, 0x1594E8u, 0x1594F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1594F0u;
label_1594f0:
    // 0x1594f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1594f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1594f4:
    // 0x1594f4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1594f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1594f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1594F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1594FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1594F8u;
        // 0x1594fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1594F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x159500u;
}
