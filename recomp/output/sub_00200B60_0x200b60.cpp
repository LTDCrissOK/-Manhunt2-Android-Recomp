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

// Function: sub_00200B60
// Address: 0x200b60 - 0x200b90
void sub_00200B60_0x200b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00200B60_0x200b60");
#endif

    switch (ctx->pc) {
        case 0x200b7cu: goto label_200b7c;
        default: break;
    }

    ctx->pc = 0x200b60u;

    // 0x200b60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x200b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x200b64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x200b64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x200b68: 0x9082004b  lbu         $v0, 0x4B($a0)
    ctx->pc = 0x200b68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 75)));
    // 0x200b6c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x200B6Cu;
    {
        const bool branch_taken_0x200b6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x200B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200B6Cu;
        // 0x200b70: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200b6c) {
            ctx->pc = 0x200B80u;
            goto label_200b80;
        }
    }
    ctx->pc = 0x200B74u;
    // 0x200b74: 0xc0818b6  jal         func_2062D8
    ctx->pc = 0x200B74u;
    SET_GPR_U32(ctx, 31, 0x200B7Cu);
    ctx->pc = 0x200B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200B74u;
    // 0x200b78: 0x8c840034  lw          $a0, 0x34($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2062D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2062D8u, 0x200B74u, 0x200B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200B7Cu;
label_200b7c:
    // 0x200b7c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x200b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_200b80:
    // 0x200b80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x200b80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x200b84: 0x3e00008  jr          $ra
    ctx->pc = 0x200B84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x200B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200B84u;
        // 0x200b88: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x200B84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x200B8Cu;
    // 0x200b8c: 0x0  nop
    ctx->pc = 0x200b8cu;
    // NOP
    ctx->pc = 0x200b90u;
}
