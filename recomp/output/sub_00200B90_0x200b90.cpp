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

// Function: sub_00200B90
// Address: 0x200b90 - 0x200bc0
void sub_00200B90_0x200b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00200B90_0x200b90");
#endif

    switch (ctx->pc) {
        case 0x200bacu: goto label_200bac;
        default: break;
    }

    ctx->pc = 0x200b90u;

    // 0x200b90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x200b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x200b94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x200b94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x200b98: 0x9082004b  lbu         $v0, 0x4B($a0)
    ctx->pc = 0x200b98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 75)));
    // 0x200b9c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x200B9Cu;
    {
        const bool branch_taken_0x200b9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x200BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200B9Cu;
        // 0x200ba0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200b9c) {
            ctx->pc = 0x200BB4u;
            goto label_200bb4;
        }
    }
    ctx->pc = 0x200BA4u;
    // 0x200ba4: 0xc081972  jal         func_2065C8
    ctx->pc = 0x200BA4u;
    SET_GPR_U32(ctx, 31, 0x200BACu);
    ctx->pc = 0x200BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200BA4u;
    // 0x200ba8: 0x8c840034  lw          $a0, 0x34($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2065C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2065C8u, 0x200BA4u, 0x200BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200BACu;
label_200bac:
    // 0x200bac: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x200BACu;
    {
        const bool branch_taken_0x200bac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x200BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200BACu;
        // 0x200bb0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200bac) {
            ctx->pc = 0x200BB8u;
            goto label_200bb8;
        }
    }
    ctx->pc = 0x200BB4u;
label_200bb4:
    // 0x200bb4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x200bb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_200bb8:
    // 0x200bb8: 0x3e00008  jr          $ra
    ctx->pc = 0x200BB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x200BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200BB8u;
        // 0x200bbc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x200BB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x200BC0u;
}
