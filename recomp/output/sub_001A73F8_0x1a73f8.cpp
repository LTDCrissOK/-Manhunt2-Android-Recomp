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

// Function: sub_001A73F8
// Address: 0x1a73f8 - 0x1a7460
void sub_001A73F8_0x1a73f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A73F8_0x1a73f8");
#endif

    switch (ctx->pc) {
        case 0x1a741cu: goto label_1a741c;
        case 0x1a742cu: goto label_1a742c;
        case 0x1a7444u: goto label_1a7444;
        case 0x1a7454u: goto label_1a7454;
        default: break;
    }

    ctx->pc = 0x1a73f8u;

    // 0x1a73f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a73f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a73fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a73fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a7400: 0x908201a4  lbu         $v0, 0x1A4($a0)
    ctx->pc = 0x1a7400u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 420)));
    // 0x1a7404: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1A7404u;
    {
        const bool branch_taken_0x1a7404 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a7404) {
            ctx->pc = 0x1A7434u;
            goto label_1a7434;
        }
    }
    ctx->pc = 0x1A740Cu;
    // 0x1a740c: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A740Cu;
    {
        const bool branch_taken_0x1a740c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A740Cu;
        // 0x1a7410: 0x24050038  addiu       $a1, $zero, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a740c) {
            ctx->pc = 0x1A7424u;
            goto label_1a7424;
        }
    }
    ctx->pc = 0x1A7414u;
    // 0x1a7414: 0xc069712  jal         func_1A5C48
    ctx->pc = 0x1A7414u;
    SET_GPR_U32(ctx, 31, 0x1A741Cu);
    ctx->pc = 0x1A7418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7414u;
    // 0x1a7418: 0x240607c5  addiu       $a2, $zero, 0x7C5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1989));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5C48u, 0x1A7414u, 0x1A741Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A741Cu;
label_1a741c:
    // 0x1a741c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1A741Cu;
    {
        const bool branch_taken_0x1a741c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A741Cu;
        // 0x1a7420: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a741c) {
            ctx->pc = 0x1A7458u;
            goto label_1a7458;
        }
    }
    ctx->pc = 0x1A7424u;
label_1a7424:
    // 0x1a7424: 0xc069712  jal         func_1A5C48
    ctx->pc = 0x1A7424u;
    SET_GPR_U32(ctx, 31, 0x1A742Cu);
    ctx->pc = 0x1A7428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7424u;
    // 0x1a7428: 0x240607c3  addiu       $a2, $zero, 0x7C3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1987));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5C48u, 0x1A7424u, 0x1A742Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A742Cu;
label_1a742c:
    // 0x1a742c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1A742Cu;
    {
        const bool branch_taken_0x1a742c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A742Cu;
        // 0x1a7430: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a742c) {
            ctx->pc = 0x1A7458u;
            goto label_1a7458;
        }
    }
    ctx->pc = 0x1A7434u;
label_1a7434:
    // 0x1a7434: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A7434u;
    {
        const bool branch_taken_0x1a7434 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7434u;
        // 0x1a7438: 0x24050038  addiu       $a1, $zero, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7434) {
            ctx->pc = 0x1A744Cu;
            goto label_1a744c;
        }
    }
    ctx->pc = 0x1A743Cu;
    // 0x1a743c: 0xc069712  jal         func_1A5C48
    ctx->pc = 0x1A743Cu;
    SET_GPR_U32(ctx, 31, 0x1A7444u);
    ctx->pc = 0x1A7440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A743Cu;
    // 0x1a7440: 0x240607c6  addiu       $a2, $zero, 0x7C6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1990));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5C48u, 0x1A743Cu, 0x1A7444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7444u;
label_1a7444:
    // 0x1a7444: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1A7444u;
    {
        const bool branch_taken_0x1a7444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7444u;
        // 0x1a7448: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7444) {
            ctx->pc = 0x1A7458u;
            goto label_1a7458;
        }
    }
    ctx->pc = 0x1A744Cu;
label_1a744c:
    // 0x1a744c: 0xc069712  jal         func_1A5C48
    ctx->pc = 0x1A744Cu;
    SET_GPR_U32(ctx, 31, 0x1A7454u);
    ctx->pc = 0x1A7450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A744Cu;
    // 0x1a7450: 0x240607c4  addiu       $a2, $zero, 0x7C4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1988));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5C48u, 0x1A744Cu, 0x1A7454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7454u;
label_1a7454:
    // 0x1a7454: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a7454u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a7458:
    // 0x1a7458: 0x3e00008  jr          $ra
    ctx->pc = 0x1A7458u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A745Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7458u;
        // 0x1a745c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A7458u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A7460u;
}
