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

// Function: sub_0018E410
// Address: 0x18e410 - 0x18e490
void sub_0018E410_0x18e410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018E410_0x18e410");
#endif

    switch (ctx->pc) {
        case 0x18e410u: goto label_18e410;
        case 0x18e414u: goto label_18e414;
        case 0x18e418u: goto label_18e418;
        case 0x18e41cu: goto label_18e41c;
        case 0x18e420u: goto label_18e420;
        case 0x18e424u: goto label_18e424;
        case 0x18e428u: goto label_18e428;
        case 0x18e42cu: goto label_18e42c;
        case 0x18e430u: goto label_18e430;
        case 0x18e434u: goto label_18e434;
        case 0x18e438u: goto label_18e438;
        case 0x18e43cu: goto label_18e43c;
        case 0x18e440u: goto label_18e440;
        case 0x18e444u: goto label_18e444;
        case 0x18e448u: goto label_18e448;
        case 0x18e44cu: goto label_18e44c;
        case 0x18e450u: goto label_18e450;
        case 0x18e454u: goto label_18e454;
        case 0x18e458u: goto label_18e458;
        case 0x18e45cu: goto label_18e45c;
        case 0x18e460u: goto label_18e460;
        case 0x18e464u: goto label_18e464;
        case 0x18e468u: goto label_18e468;
        case 0x18e46cu: goto label_18e46c;
        case 0x18e470u: goto label_18e470;
        case 0x18e474u: goto label_18e474;
        case 0x18e478u: goto label_18e478;
        case 0x18e47cu: goto label_18e47c;
        case 0x18e480u: goto label_18e480;
        case 0x18e484u: goto label_18e484;
        case 0x18e488u: goto label_18e488;
        case 0x18e48cu: goto label_18e48c;
        default: break;
    }

    ctx->pc = 0x18e410u;

label_18e410:
    // 0x18e410: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x18e410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_18e414:
    // 0x18e414: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x18e414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_18e418:
    // 0x18e418: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x18e418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_18e41c:
    // 0x18e41c: 0xc061a2e  jal         func_1868B8
label_18e420:
    if (ctx->pc == 0x18E420u) {
        ctx->pc = 0x18E420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E41Cu;
        // 0x18e420: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E424u;
        goto label_18e424;
    }
    ctx->pc = 0x18E41Cu;
    SET_GPR_U32(ctx, 31, 0x18E424u);
    ctx->pc = 0x18E420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E41Cu;
    // 0x18e420: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1868B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1868B8u, 0x18E41Cu, 0x18E424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E424u;
label_18e424:
    // 0x18e424: 0x8c430060  lw          $v1, 0x60($v0)
    ctx->pc = 0x18e424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_18e428:
    // 0x18e428: 0x8c440064  lw          $a0, 0x64($v0)
    ctx->pc = 0x18e428u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_18e42c:
    // 0x18e42c: 0x8c6504c0  lw          $a1, 0x4C0($v1)
    ctx->pc = 0x18e42cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1216)));
label_18e430:
    // 0x18e430: 0x8c820450  lw          $v0, 0x450($a0)
    ctx->pc = 0x18e430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1104)));
label_18e434:
    // 0x18e434: 0x10450005  beq         $v0, $a1, . + 4 + (0x5 << 2)
label_18e438:
    if (ctx->pc == 0x18E438u) {
        ctx->pc = 0x18E43Cu;
        goto label_18e43c;
    }
    ctx->pc = 0x18E434u;
    {
        const bool branch_taken_0x18e434 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x18e434) {
            ctx->pc = 0x18E44Cu;
            goto label_18e44c;
        }
    }
    ctx->pc = 0x18E43Cu;
label_18e43c:
    // 0x18e43c: 0xc061a16  jal         func_186858
label_18e440:
    if (ctx->pc == 0x18E440u) {
        ctx->pc = 0x18E440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E43Cu;
        // 0x18e440: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E444u;
        goto label_18e444;
    }
    ctx->pc = 0x18E43Cu;
    SET_GPR_U32(ctx, 31, 0x18E444u);
    ctx->pc = 0x18E440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E43Cu;
    // 0x18e440: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x18E43Cu, 0x18E444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E444u;
label_18e444:
    // 0x18e444: 0x1000000e  b           . + 4 + (0xE << 2)
label_18e448:
    if (ctx->pc == 0x18E448u) {
        ctx->pc = 0x18E448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E444u;
        // 0x18e448: 0xac400028  sw          $zero, 0x28($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E44Cu;
        goto label_18e44c;
    }
    ctx->pc = 0x18E444u;
    {
        const bool branch_taken_0x18e444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E444u;
        // 0x18e448: 0xac400028  sw          $zero, 0x28($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e444) {
            ctx->pc = 0x18E480u;
            goto label_18e480;
        }
    }
    ctx->pc = 0x18E44Cu;
label_18e44c:
    // 0x18e44c: 0xc061a12  jal         func_186848
label_18e450:
    if (ctx->pc == 0x18E450u) {
        ctx->pc = 0x18E450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E44Cu;
        // 0x18e450: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E454u;
        goto label_18e454;
    }
    ctx->pc = 0x18E44Cu;
    SET_GPR_U32(ctx, 31, 0x18E454u);
    ctx->pc = 0x18E450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E44Cu;
    // 0x18e450: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x18E44Cu, 0x18E454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E454u;
label_18e454:
    // 0x18e454: 0x8c430394  lw          $v1, 0x394($v0)
    ctx->pc = 0x18e454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 916)));
label_18e458:
    // 0x18e458: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18e458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18e45c:
    // 0x18e45c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x18e45cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_18e460:
    // 0x18e460: 0x40f809  jalr        $v0
label_18e464:
    if (ctx->pc == 0x18E464u) {
        ctx->pc = 0x18E468u;
        goto label_18e468;
    }
    ctx->pc = 0x18E460u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18E468u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18E460u, 0x18E468u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18E468u;
label_18e468:
    // 0x18e468: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_18e46c:
    if (ctx->pc == 0x18E46Cu) {
        ctx->pc = 0x18E46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E468u;
        // 0x18e46c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E470u;
        goto label_18e470;
    }
    ctx->pc = 0x18E468u;
    {
        const bool branch_taken_0x18e468 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18e468) {
            ctx->pc = 0x18E46Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18E468u;
            // 0x18e46c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18E484u;
            goto label_18e484;
        }
    }
    ctx->pc = 0x18E470u;
label_18e470:
    // 0x18e470: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x18e470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_18e474:
    // 0x18e474: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x18e474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_18e478:
    // 0x18e478: 0x40f809  jalr        $v0
label_18e47c:
    if (ctx->pc == 0x18E47Cu) {
        ctx->pc = 0x18E47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E478u;
        // 0x18e47c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E480u;
        goto label_18e480;
    }
    ctx->pc = 0x18E478u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18E480u);
        ctx->pc = 0x18E47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E478u;
        // 0x18e47c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18E478u, 0x18E480u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18E480u;
label_18e480:
    // 0x18e480: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x18e480u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_18e484:
    // 0x18e484: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x18e484u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_18e488:
    // 0x18e488: 0x3e00008  jr          $ra
label_18e48c:
    if (ctx->pc == 0x18E48Cu) {
        ctx->pc = 0x18E48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E488u;
        // 0x18e48c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E490u;
        goto label_fallthrough_0x18e488;
    }
    ctx->pc = 0x18E488u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18E48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E488u;
        // 0x18e48c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18E488u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x18e488:
    ctx->pc = 0x18E490u;
}
