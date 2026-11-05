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

// Function: sub_003372B0
// Address: 0x3372b0 - 0x337300
void sub_003372B0_0x3372b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003372B0_0x3372b0");
#endif

    switch (ctx->pc) {
        case 0x3372e8u: goto label_3372e8;
        default: break;
    }

    ctx->pc = 0x3372b0u;

    // 0x3372b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3372b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3372b4: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3372B4u;
    {
        const bool branch_taken_0x3372b4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x3372B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3372B4u;
        // 0x3372b8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3372b4) {
            ctx->pc = 0x3372C4u;
            goto label_3372c4;
        }
    }
    ctx->pc = 0x3372BCu;
    // 0x3372bc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3372BCu;
    {
        const bool branch_taken_0x3372bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3372C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3372BCu;
        // 0x3372c0: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3372bc) {
            ctx->pc = 0x3372E0u;
            goto label_3372e0;
        }
    }
    ctx->pc = 0x3372C4u;
label_3372c4:
    // 0x3372c4: 0x8ca200bc  lw          $v0, 0xBC($a1)
    ctx->pc = 0x3372c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 188)));
    // 0x3372c8: 0x30420401  andi        $v0, $v0, 0x401
    ctx->pc = 0x3372c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1025);
    // 0x3372cc: 0x38420401  xori        $v0, $v0, 0x401
    ctx->pc = 0x3372ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1025);
    // 0x3372d0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3372D0u;
    {
        const bool branch_taken_0x3372d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3372D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3372D0u;
        // 0x3372d4: 0x24050017  addiu       $a1, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3372d0) {
            ctx->pc = 0x3372E0u;
            goto label_3372e0;
        }
    }
    ctx->pc = 0x3372D8u;
    // 0x3372d8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3372D8u;
    {
        const bool branch_taken_0x3372d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3372DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3372D8u;
        // 0x3372dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3372d8) {
            ctx->pc = 0x3372ECu;
            goto label_3372ec;
        }
    }
    ctx->pc = 0x3372E0u;
label_3372e0:
    // 0x3372e0: 0xc0cdfdc  jal         func_337F70
    ctx->pc = 0x3372E0u;
    SET_GPR_U32(ctx, 31, 0x3372E8u);
    ctx->pc = 0x337F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337F70u, 0x3372E0u, 0x3372E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3372E8u;
label_3372e8:
    // 0x3372e8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3372e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3372ec:
    // 0x3372ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3372ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3372f0: 0x3e00008  jr          $ra
    ctx->pc = 0x3372F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3372F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3372F0u;
        // 0x3372f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3372F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3372F8u;
    // 0x3372f8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3372f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3372fc: 0x0  nop
    ctx->pc = 0x3372fcu;
    // NOP
    ctx->pc = 0x337300u;
}
