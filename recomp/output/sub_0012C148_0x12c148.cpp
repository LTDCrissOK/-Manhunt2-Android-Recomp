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

// Function: sub_0012C148
// Address: 0x12c148 - 0x12c180
void sub_0012C148_0x12c148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012C148_0x12c148");
#endif

    switch (ctx->pc) {
        case 0x12c15cu: goto label_12c15c;
        case 0x12c16cu: goto label_12c16c;
        default: break;
    }

    ctx->pc = 0x12c148u;

    // 0x12c148: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x12c148u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12c14c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12c14cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12c150: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x12c150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x12c154: 0xc04b100  jal         func_12C400
    ctx->pc = 0x12C154u;
    SET_GPR_U32(ctx, 31, 0x12C15Cu);
    ctx->pc = 0x12C158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C154u;
    // 0x12c158: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C400u, 0x12C154u, 0x12C15Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C15Cu;
label_12c15c:
    // 0x12c15c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x12c15cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x12c160: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x12c160u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x12c164: 0xc05f53a  jal         func_17D4E8
    ctx->pc = 0x12C164u;
    SET_GPR_U32(ctx, 31, 0x12C16Cu);
    ctx->pc = 0x12C168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C164u;
    // 0x12c168: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D4E8u, 0x12C164u, 0x12C16Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C16Cu;
label_12c16c:
    // 0x12c16c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12c16cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12c170: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x12c170u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12c174: 0x3e00008  jr          $ra
    ctx->pc = 0x12C174u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12C178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C174u;
        // 0x12c178: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12C174u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12C17Cu;
    // 0x12c17c: 0x0  nop
    ctx->pc = 0x12c17cu;
    // NOP
    ctx->pc = 0x12c180u;
}
