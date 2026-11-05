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

// Function: sub_00202410
// Address: 0x202410 - 0x202490
void sub_00202410_0x202410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00202410_0x202410");
#endif

    switch (ctx->pc) {
        case 0x202464u: goto label_202464;
        case 0x202474u: goto label_202474;
        case 0x202484u: goto label_202484;
        default: break;
    }

    ctx->pc = 0x202410u;

    // 0x202410: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x202410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x202414: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x202414u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x202418: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x202418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20241c: 0x90820004  lbu         $v0, 0x4($a0)
    ctx->pc = 0x20241cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x202420: 0x10450018  beq         $v0, $a1, . + 4 + (0x18 << 2)
    ctx->pc = 0x202420u;
    {
        const bool branch_taken_0x202420 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x202424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202420u;
        // 0x202424: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202420) {
            ctx->pc = 0x202484u;
            goto label_202484;
        }
    }
    ctx->pc = 0x202428u;
    // 0x202428: 0x10a20010  beq         $a1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x202428u;
    {
        const bool branch_taken_0x202428 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x20242Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202428u;
        // 0x20242c: 0xa0850004  sb          $a1, 0x4($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202428) {
            ctx->pc = 0x20246Cu;
            goto label_20246c;
        }
    }
    ctx->pc = 0x202430u;
    // 0x202430: 0x28a20002  slti        $v0, $a1, 0x2
    ctx->pc = 0x202430u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x202434: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x202434u;
    {
        const bool branch_taken_0x202434 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x202434) {
            ctx->pc = 0x202438u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x202434u;
            // 0x202438: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20244Cu;
            goto label_20244c;
        }
    }
    ctx->pc = 0x20243Cu;
    // 0x20243c: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x20243Cu;
    {
        const bool branch_taken_0x20243c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x202440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20243Cu;
        // 0x202440: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20243c) {
            ctx->pc = 0x20245Cu;
            goto label_20245c;
        }
    }
    ctx->pc = 0x202444u;
    // 0x202444: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x202444u;
    {
        const bool branch_taken_0x202444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x202444) {
            ctx->pc = 0x202488u;
            goto label_202488;
        }
    }
    ctx->pc = 0x20244Cu;
label_20244c:
    // 0x20244c: 0x10a2000b  beq         $a1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x20244Cu;
    {
        const bool branch_taken_0x20244c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x202450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20244Cu;
        // 0x202450: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20244c) {
            ctx->pc = 0x20247Cu;
            goto label_20247c;
        }
    }
    ctx->pc = 0x202454u;
    // 0x202454: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x202454u;
    {
        const bool branch_taken_0x202454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x202454) {
            ctx->pc = 0x202488u;
            goto label_202488;
        }
    }
    ctx->pc = 0x20245Cu;
label_20245c:
    // 0x20245c: 0xc082752  jal         func_209D48
    ctx->pc = 0x20245Cu;
    SET_GPR_U32(ctx, 31, 0x202464u);
    ctx->pc = 0x202460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20245Cu;
    // 0x202460: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x209D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209D48u, 0x20245Cu, 0x202464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202464u;
label_202464:
    // 0x202464: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x202464u;
    {
        const bool branch_taken_0x202464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202464u;
        // 0x202468: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202464) {
            ctx->pc = 0x202488u;
            goto label_202488;
        }
    }
    ctx->pc = 0x20246Cu;
label_20246c:
    // 0x20246c: 0xc082752  jal         func_209D48
    ctx->pc = 0x20246Cu;
    SET_GPR_U32(ctx, 31, 0x202474u);
    ctx->pc = 0x202470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20246Cu;
    // 0x202470: 0x2404001d  addiu       $a0, $zero, 0x1D (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    ctx->in_delay_slot = false;
    ctx->pc = 0x209D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209D48u, 0x20246Cu, 0x202474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202474u;
label_202474:
    // 0x202474: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x202474u;
    {
        const bool branch_taken_0x202474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202474u;
        // 0x202478: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202474) {
            ctx->pc = 0x202488u;
            goto label_202488;
        }
    }
    ctx->pc = 0x20247Cu;
label_20247c:
    // 0x20247c: 0xc082752  jal         func_209D48
    ctx->pc = 0x20247Cu;
    SET_GPR_U32(ctx, 31, 0x202484u);
    ctx->pc = 0x202480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20247Cu;
    // 0x202480: 0x2404001f  addiu       $a0, $zero, 0x1F (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    ctx->in_delay_slot = false;
    ctx->pc = 0x209D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209D48u, 0x20247Cu, 0x202484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202484u;
label_202484:
    // 0x202484: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x202484u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_202488:
    // 0x202488: 0x3e00008  jr          $ra
    ctx->pc = 0x202488u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20248Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202488u;
        // 0x20248c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x202488u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x202490u;
}
