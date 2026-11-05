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

// Function: sub_001A74C0
// Address: 0x1a74c0 - 0x1a74f8
void sub_001A74C0_0x1a74c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A74C0_0x1a74c0");
#endif

    switch (ctx->pc) {
        case 0x1a74d8u: goto label_1a74d8;
        case 0x1a74ecu: goto label_1a74ec;
        default: break;
    }

    ctx->pc = 0x1a74c0u;

    // 0x1a74c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a74c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a74c4: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A74C4u;
    {
        const bool branch_taken_0x1a74c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A74C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A74C4u;
        // 0x1a74c8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a74c4) {
            ctx->pc = 0x1A74E0u;
            goto label_1a74e0;
        }
    }
    ctx->pc = 0x1A74CCu;
    // 0x1a74cc: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x1a74ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1a74d0: 0xc069712  jal         func_1A5C48
    ctx->pc = 0x1A74D0u;
    SET_GPR_U32(ctx, 31, 0x1A74D8u);
    ctx->pc = 0x1A74D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A74D0u;
    // 0x1a74d4: 0x240607ce  addiu       $a2, $zero, 0x7CE (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1998));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5C48u, 0x1A74D0u, 0x1A74D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A74D8u;
label_1a74d8:
    // 0x1a74d8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1A74D8u;
    {
        const bool branch_taken_0x1a74d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A74DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A74D8u;
        // 0x1a74dc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a74d8) {
            ctx->pc = 0x1A74F0u;
            goto label_1a74f0;
        }
    }
    ctx->pc = 0x1A74E0u;
label_1a74e0:
    // 0x1a74e0: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x1a74e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1a74e4: 0xc069712  jal         func_1A5C48
    ctx->pc = 0x1A74E4u;
    SET_GPR_U32(ctx, 31, 0x1A74ECu);
    ctx->pc = 0x1A74E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A74E4u;
    // 0x1a74e8: 0x240607cd  addiu       $a2, $zero, 0x7CD (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1997));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5C48u, 0x1A74E4u, 0x1A74ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A74ECu;
label_1a74ec:
    // 0x1a74ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a74ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a74f0:
    // 0x1a74f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A74F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A74F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A74F0u;
        // 0x1a74f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A74F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A74F8u;
}
