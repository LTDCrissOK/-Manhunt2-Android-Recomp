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

// Function: sub_00161808
// Address: 0x161808 - 0x161898
void sub_00161808_0x161808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00161808_0x161808");
#endif

    switch (ctx->pc) {
        case 0x161840u: goto label_161840;
        case 0x161858u: goto label_161858;
        case 0x161874u: goto label_161874;
        default: break;
    }

    ctx->pc = 0x161808u;

    // 0x161808: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x161808u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x16180c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16180cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x161810: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x161810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x161814: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x161814u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161818: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x161818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x16181c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x16181cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161820: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x161820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x161824: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x161824u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161828: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x161828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x16182c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x16182cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161830: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x161830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x161834: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x161834u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161838: 0xc04f750  jal         func_13DD40
    ctx->pc = 0x161838u;
    SET_GPR_U32(ctx, 31, 0x161840u);
    ctx->pc = 0x16183Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161838u;
    // 0x16183c: 0x100a02d  daddu       $s4, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13DD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13DD40u, 0x161838u, 0x161840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161840u;
label_161840:
    // 0x161840: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x161840u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161844: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x161844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x161848: 0x50a2000b  beql        $a1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x161848u;
    {
        const bool branch_taken_0x161848 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x161848) {
            ctx->pc = 0x16184Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x161848u;
            // 0x16184c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x161878u;
            goto label_161878;
        }
    }
    ctx->pc = 0x161850u;
    // 0x161850: 0xc04f130  jal         func_13C4C0
    ctx->pc = 0x161850u;
    SET_GPR_U32(ctx, 31, 0x161858u);
    ctx->pc = 0x161854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161850u;
    // 0x161854: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C4C0u, 0x161850u, 0x161858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161858u;
label_161858:
    // 0x161858: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x161858u;
    {
        const bool branch_taken_0x161858 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16185Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161858u;
        // 0x16185c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161858) {
            ctx->pc = 0x161874u;
            goto label_161874;
        }
    }
    ctx->pc = 0x161860u;
    // 0x161860: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x161860u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161864: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x161864u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161868: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x161868u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16186c: 0xc04d7c6  jal         func_135F18
    ctx->pc = 0x16186Cu;
    SET_GPR_U32(ctx, 31, 0x161874u);
    ctx->pc = 0x161870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16186Cu;
    // 0x161870: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135F18u, 0x16186Cu, 0x161874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161874u;
label_161874:
    // 0x161874: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x161874u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_161878:
    // 0x161878: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x161878u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16187c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x16187cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x161880: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x161880u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x161884: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x161884u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x161888: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x161888u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x16188c: 0x3e00008  jr          $ra
    ctx->pc = 0x16188Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x161890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16188Cu;
        // 0x161890: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16188Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x161894u;
    // 0x161894: 0x0  nop
    ctx->pc = 0x161894u;
    // NOP
    ctx->pc = 0x161898u;
}
