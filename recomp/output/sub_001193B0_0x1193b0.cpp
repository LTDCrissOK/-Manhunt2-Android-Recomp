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

// Function: sub_001193B0
// Address: 0x1193b0 - 0x1193e8
void sub_001193B0_0x1193b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001193B0_0x1193b0");
#endif

    switch (ctx->pc) {
        case 0x1193c8u: goto label_1193c8;
        case 0x1193d8u: goto label_1193d8;
        default: break;
    }

    ctx->pc = 0x1193b0u;

    // 0x1193b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1193b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1193b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1193b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1193b8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1193b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1193bc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1193bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1193c0: 0xc045f12  jal         func_117C48
    ctx->pc = 0x1193C0u;
    SET_GPR_U32(ctx, 31, 0x1193C8u);
    ctx->pc = 0x1193C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1193C0u;
    // 0x1193c4: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117C48u, 0x1193C0u, 0x1193C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1193C8u;
label_1193c8:
    // 0x1193c8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1193C8u;
    {
        const bool branch_taken_0x1193c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1193CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1193C8u;
        // 0x1193cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1193c8) {
            ctx->pc = 0x1193D8u;
            goto label_1193d8;
        }
    }
    ctx->pc = 0x1193D0u;
    // 0x1193d0: 0xc045f0c  jal         func_117C30
    ctx->pc = 0x1193D0u;
    SET_GPR_U32(ctx, 31, 0x1193D8u);
    ctx->pc = 0x1193D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1193D0u;
    // 0x1193d4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117C30u, 0x1193D0u, 0x1193D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1193D8u;
label_1193d8:
    // 0x1193d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1193d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1193dc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1193dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1193e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1193E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1193E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1193E0u;
        // 0x1193e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1193E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1193E8u;
}
