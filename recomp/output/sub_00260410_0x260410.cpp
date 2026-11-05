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

// Function: sub_00260410
// Address: 0x260410 - 0x260460
void sub_00260410_0x260410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00260410_0x260410");
#endif

    switch (ctx->pc) {
        case 0x260424u: goto label_260424;
        case 0x26043cu: goto label_26043c;
        case 0x260448u: goto label_260448;
        default: break;
    }

    ctx->pc = 0x260410u;

    // 0x260410: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x260410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x260414: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x260414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x260418: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x260418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x26041c: 0xc097f26  jal         func_25FC98
    ctx->pc = 0x26041Cu;
    SET_GPR_U32(ctx, 31, 0x260424u);
    ctx->pc = 0x260420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26041Cu;
    // 0x260420: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FC98u, 0x26041Cu, 0x260424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260424u;
label_260424:
    // 0x260424: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x260424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x260428: 0x10430008  beq         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x260428u;
    {
        const bool branch_taken_0x260428 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x26042Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260428u;
        // 0x26042c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260428) {
            ctx->pc = 0x26044Cu;
            goto label_26044c;
        }
    }
    ctx->pc = 0x260430u;
    // 0x260430: 0x8e100338  lw          $s0, 0x338($s0)
    ctx->pc = 0x260430u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 824)));
    // 0x260434: 0xc06bdde  jal         func_1AF778
    ctx->pc = 0x260434u;
    SET_GPR_U32(ctx, 31, 0x26043Cu);
    ctx->pc = 0x260438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260434u;
    // 0x260438: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF778u, 0x260434u, 0x26043Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26043Cu;
label_26043c:
    // 0x26043c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26043cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260440: 0xc06c546  jal         func_1B1518
    ctx->pc = 0x260440u;
    SET_GPR_U32(ctx, 31, 0x260448u);
    ctx->pc = 0x260444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260440u;
    // 0x260444: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1518u, 0x260440u, 0x260448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260448u;
label_260448:
    // 0x260448: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x260448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26044c:
    // 0x26044c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x26044cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x260450: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x260450u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x260454: 0x3e00008  jr          $ra
    ctx->pc = 0x260454u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x260458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260454u;
        // 0x260458: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x260454u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26045Cu;
    // 0x26045c: 0x0  nop
    ctx->pc = 0x26045cu;
    // NOP
    ctx->pc = 0x260460u;
}
