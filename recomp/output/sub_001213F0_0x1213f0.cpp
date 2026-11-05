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

// Function: sub_001213F0
// Address: 0x1213f0 - 0x121448
void sub_001213F0_0x1213f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001213F0_0x1213f0");
#endif

    switch (ctx->pc) {
        case 0x121410u: goto label_121410;
        case 0x121424u: goto label_121424;
        default: break;
    }

    ctx->pc = 0x1213f0u;

    // 0x1213f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1213f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1213f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1213f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1213f8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1213f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1213fc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1213fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121400: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x121400u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121404: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x121404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x121408: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x121408u;
    SET_GPR_U32(ctx, 31, 0x121410u);
    ctx->pc = 0x12140Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121408u;
    // 0x12140c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x121408u, 0x121410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121410u;
label_121410:
    // 0x121410: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x121410u;
    {
        const bool branch_taken_0x121410 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x121414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121410u;
        // 0x121414: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121410) {
            ctx->pc = 0x121428u;
            goto label_121428;
        }
    }
    ctx->pc = 0x121418u;
    // 0x121418: 0x8e240078  lw          $a0, 0x78($s1)
    ctx->pc = 0x121418u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x12141c: 0xc042546  jal         func_109518
    ctx->pc = 0x12141Cu;
    SET_GPR_U32(ctx, 31, 0x121424u);
    ctx->pc = 0x121420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12141Cu;
    // 0x121420: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109518u, 0x12141Cu, 0x121424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121424u;
label_121424:
    // 0x121424: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x121424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_121428:
    // 0x121428: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x121428u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12142c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x12142cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x121430: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x121430u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x121434: 0x3e00008  jr          $ra
    ctx->pc = 0x121434u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x121438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121434u;
        // 0x121438: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x121434u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12143Cu;
    // 0x12143c: 0x0  nop
    ctx->pc = 0x12143cu;
    // NOP
    // 0x121440: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x121440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x121444: 0x0  nop
    ctx->pc = 0x121444u;
    // NOP
    ctx->pc = 0x121448u;
}
