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

// Function: sub_0016E820
// Address: 0x16e820 - 0x16e898
void sub_0016E820_0x16e820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016E820_0x16e820");
#endif

    switch (ctx->pc) {
        case 0x16e88cu: goto label_16e88c;
        default: break;
    }

    ctx->pc = 0x16e820u;

    // 0x16e820: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16e820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16e824: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x16e824u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e828: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16e828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16e82c: 0xacc00104  sw          $zero, 0x104($a2)
    ctx->pc = 0x16e82cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 260), GPR_U32(ctx, 0));
    // 0x16e830: 0x8cc50100  lw          $a1, 0x100($a2)
    ctx->pc = 0x16e830u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 256)));
    // 0x16e834: 0x10a00015  beqz        $a1, . + 4 + (0x15 << 2)
    ctx->pc = 0x16E834u;
    {
        const bool branch_taken_0x16e834 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E834u;
        // 0x16e838: 0x24020022  addiu       $v0, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e834) {
            ctx->pc = 0x16E88Cu;
            goto label_16e88c;
        }
    }
    ctx->pc = 0x16E83Cu;
    // 0x16e83c: 0x8ca70004  lw          $a3, 0x4($a1)
    ctx->pc = 0x16e83cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x16e840: 0xacc00100  sw          $zero, 0x100($a2)
    ctx->pc = 0x16e840u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 256), GPR_U32(ctx, 0));
    // 0x16e844: 0x10e20011  beq         $a3, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x16E844u;
    {
        const bool branch_taken_0x16e844 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x16E848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E844u;
        // 0x16e848: 0xacc00108  sw          $zero, 0x108($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 264), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e844) {
            ctx->pc = 0x16E88Cu;
            goto label_16e88c;
        }
    }
    ctx->pc = 0x16E84Cu;
    // 0x16e84c: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x16e84cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x16e850: 0x10e2000e  beq         $a3, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x16E850u;
    {
        const bool branch_taken_0x16e850 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x16E854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E850u;
        // 0x16e854: 0x3c040049  lui         $a0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e850) {
            ctx->pc = 0x16E88Cu;
            goto label_16e88c;
        }
    }
    ctx->pc = 0x16E858u;
    // 0x16e858: 0x90c300f8  lbu         $v1, 0xF8($a2)
    ctx->pc = 0x16e858u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 248)));
    // 0x16e85c: 0x8cc50004  lw          $a1, 0x4($a2)
    ctx->pc = 0x16e85cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x16e860: 0x24849a08  addiu       $a0, $a0, -0x65F8
    ctx->pc = 0x16e860u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941192));
    // 0x16e864: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x16e864u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x16e868: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x16e868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x16e86c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x16e86cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16e870: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16e870u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16e874: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x16e874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x16e878: 0x8c84020c  lw          $a0, 0x20C($a0)
    ctx->pc = 0x16e878u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 524)));
    // 0x16e87c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x16E87Cu;
    {
        const bool branch_taken_0x16e87c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E87Cu;
        // 0x16e880: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e87c) {
            ctx->pc = 0x16E890u;
            goto label_16e890;
        }
    }
    ctx->pc = 0x16E884u;
    // 0x16e884: 0xc043f84  jal         func_10FE10
    ctx->pc = 0x16E884u;
    SET_GPR_U32(ctx, 31, 0x16E88Cu);
    ctx->pc = 0x16E888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E884u;
    // 0x16e888: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FE10u, 0x16E884u, 0x16E88Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E88Cu;
label_16e88c:
    // 0x16e88c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16e88cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16e890:
    // 0x16e890: 0x3e00008  jr          $ra
    ctx->pc = 0x16E890u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16E894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E890u;
        // 0x16e894: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16E890u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16E898u;
}
