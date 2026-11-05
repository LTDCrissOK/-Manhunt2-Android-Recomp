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

// Function: sub_001EAE60
// Address: 0x1eae60 - 0x1eaea8
void sub_001EAE60_0x1eae60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EAE60_0x1eae60");
#endif

    switch (ctx->pc) {
        case 0x1eae80u: goto label_1eae80;
        case 0x1eae90u: goto label_1eae90;
        default: break;
    }

    ctx->pc = 0x1eae60u;

    // 0x1eae60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1eae60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1eae64: 0x3c050049  lui         $a1, 0x49
    ctx->pc = 0x1eae64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)73 << 16));
    // 0x1eae68: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1eae68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1eae6c: 0x24a50400  addiu       $a1, $a1, 0x400
    ctx->pc = 0x1eae6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1024));
    // 0x1eae70: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1eae70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1eae74: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1eae74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eae78: 0xc07a9fa  jal         func_1EA7E8
    ctx->pc = 0x1EAE78u;
    SET_GPR_U32(ctx, 31, 0x1EAE80u);
    ctx->pc = 0x1EAE7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EAE78u;
    // 0x1eae7c: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA7E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA7E8u, 0x1EAE78u, 0x1EAE80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EAE80u;
label_1eae80:
    // 0x1eae80: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EAE80u;
    {
        const bool branch_taken_0x1eae80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EAE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAE80u;
        // 0x1eae84: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eae80) {
            ctx->pc = 0x1EAE94u;
            goto label_1eae94;
        }
    }
    ctx->pc = 0x1EAE88u;
    // 0x1eae88: 0xc07aad2  jal         func_1EAB48
    ctx->pc = 0x1EAE88u;
    SET_GPR_U32(ctx, 31, 0x1EAE90u);
    ctx->pc = 0x1EAE8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EAE88u;
    // 0x1eae8c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAB48u, 0x1EAE88u, 0x1EAE90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EAE90u;
label_1eae90:
    // 0x1eae90: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1eae90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1eae94:
    // 0x1eae94: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1eae94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1eae98: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1eae98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1eae9c: 0x3e00008  jr          $ra
    ctx->pc = 0x1EAE9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EAEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAE9Cu;
        // 0x1eaea0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EAE9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EAEA4u;
    // 0x1eaea4: 0x0  nop
    ctx->pc = 0x1eaea4u;
    // NOP
    ctx->pc = 0x1eaea8u;
}
