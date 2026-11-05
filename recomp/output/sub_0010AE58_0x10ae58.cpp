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

// Function: sub_0010AE58
// Address: 0x10ae58 - 0x10aea8
void sub_0010AE58_0x10ae58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010AE58_0x10ae58");
#endif

    switch (ctx->pc) {
        case 0x10ae6cu: goto label_10ae6c;
        case 0x10ae90u: goto label_10ae90;
        default: break;
    }

    ctx->pc = 0x10ae58u;

    // 0x10ae58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10ae58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10ae5c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10ae5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10ae60: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x10ae60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x10ae64: 0xc043366  jal         func_10CD98
    ctx->pc = 0x10AE64u;
    SET_GPR_U32(ctx, 31, 0x10AE6Cu);
    ctx->pc = 0x10AE68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AE64u;
    // 0x10ae68: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CD98u, 0x10AE64u, 0x10AE6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AE6Cu;
label_10ae6c:
    // 0x10ae6c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x10ae6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x10ae70: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x10ae70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x10ae74: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x10ae74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x10ae78: 0x8c44001c  lw          $a0, 0x1C($v0)
    ctx->pc = 0x10ae78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x10ae7c: 0x8c8300d0  lw          $v1, 0xD0($a0)
    ctx->pc = 0x10ae7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 208)));
    // 0x10ae80: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x10AE80u;
    {
        const bool branch_taken_0x10ae80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x10ae80) {
            ctx->pc = 0x10AE84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10AE80u;
            // 0x10ae84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10AE94u;
            goto label_10ae94;
        }
    }
    ctx->pc = 0x10AE88u;
    // 0x10ae88: 0xc043a46  jal         func_10E918
    ctx->pc = 0x10AE88u;
    SET_GPR_U32(ctx, 31, 0x10AE90u);
    ctx->pc = 0x10E918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E918u, 0x10AE88u, 0x10AE90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AE90u;
label_10ae90:
    // 0x10ae90: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x10ae90u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_10ae94:
    // 0x10ae94: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10ae94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10ae98: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x10ae98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10ae9c: 0x3e00008  jr          $ra
    ctx->pc = 0x10AE9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10AEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AE9Cu;
        // 0x10aea0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10AE9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10AEA4u;
    // 0x10aea4: 0x0  nop
    ctx->pc = 0x10aea4u;
    // NOP
    ctx->pc = 0x10aea8u;
}
