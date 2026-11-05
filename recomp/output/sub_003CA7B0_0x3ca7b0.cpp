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

// Function: sub_003CA7B0
// Address: 0x3ca7b0 - 0x3ca878
void sub_003CA7B0_0x3ca7b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CA7B0_0x3ca7b0");
#endif

    switch (ctx->pc) {
        case 0x3ca800u: goto label_3ca800;
        case 0x3ca820u: goto label_3ca820;
        case 0x3ca834u: goto label_3ca834;
        case 0x3ca848u: goto label_3ca848;
        case 0x3ca858u: goto label_3ca858;
        case 0x3ca860u: goto label_3ca860;
        default: break;
    }

    ctx->pc = 0x3ca7b0u;

    // 0x3ca7b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3ca7b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3ca7b4: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x3ca7b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x3ca7b8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3ca7b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x3ca7bc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3ca7bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ca7c0: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x3ca7c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x3ca7c4: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x3ca7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x3ca7c8: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x3ca7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x3ca7cc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3ca7ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3ca7d0: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3CA7D0u;
    {
        const bool branch_taken_0x3ca7d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ca7d0) {
            ctx->pc = 0x3CA7D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3CA7D0u;
            // 0x3ca7d4: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3CA7E4u;
            goto label_3ca7e4;
        }
    }
    ctx->pc = 0x3CA7D8u;
    // 0x3ca7d8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3ca7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3ca7dc: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x3CA7DCu;
    {
        const bool branch_taken_0x3ca7dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CA7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA7DCu;
        // 0x3ca7e0: 0x34428008  ori         $v0, $v0, 0x8008 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32776);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ca7dc) {
            ctx->pc = 0x3CA864u;
            goto label_3ca864;
        }
    }
    ctx->pc = 0x3CA7E4u;
label_3ca7e4:
    // 0x3ca7e4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3ca7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ca7e8: 0x244219f0  addiu       $v0, $v0, 0x19F0
    ctx->pc = 0x3ca7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6640));
    // 0x3ca7ec: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x3ca7ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x3ca7f0: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x3ca7f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x3ca7f4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3ca7f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ca7f8: 0xc0f2668  jal         func_3C99A0
    ctx->pc = 0x3CA7F8u;
    SET_GPR_U32(ctx, 31, 0x3CA800u);
    ctx->pc = 0x3CA7FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CA7F8u;
    // 0x3ca7fc: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C99A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C99A0u, 0x3CA7F8u, 0x3CA800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CA800u;
label_3ca800:
    // 0x3ca800: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3ca800u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ca804: 0x6010004  bgez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3CA804u;
    {
        const bool branch_taken_0x3ca804 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x3CA808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA804u;
        // 0x3ca808: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ca804) {
            ctx->pc = 0x3CA818u;
            goto label_3ca818;
        }
    }
    ctx->pc = 0x3CA80Cu;
    // 0x3ca80c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3ca80cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3ca810: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x3CA810u;
    {
        const bool branch_taken_0x3ca810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CA814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA810u;
        // 0x3ca814: 0x34428003  ori         $v0, $v0, 0x8003 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32771);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ca810) {
            ctx->pc = 0x3CA864u;
            goto label_3ca864;
        }
    }
    ctx->pc = 0x3CA818u;
label_3ca818:
    // 0x3ca818: 0xc0f4458  jal         func_3D1160
    ctx->pc = 0x3CA818u;
    SET_GPR_U32(ctx, 31, 0x3CA820u);
    ctx->pc = 0x3CA81Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CA818u;
    // 0x3ca81c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D1160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D1160u, 0x3CA818u, 0x3CA820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CA820u;
label_3ca820:
    // 0x3ca820: 0x3c05003d  lui         $a1, 0x3D
    ctx->pc = 0x3ca820u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61 << 16));
    // 0x3ca824: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3ca824u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ca828: 0x24a5a9f0  addiu       $a1, $a1, -0x5610
    ctx->pc = 0x3ca828u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945264));
    // 0x3ca82c: 0xc0f44a4  jal         func_3D1290
    ctx->pc = 0x3CA82Cu;
    SET_GPR_U32(ctx, 31, 0x3CA834u);
    ctx->pc = 0x3CA830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CA82Cu;
    // 0x3ca830: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D1290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D1290u, 0x3CA82Cu, 0x3CA834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CA834u;
label_3ca834:
    // 0x3ca834: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3ca834u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ca838: 0x6210005  bgez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3CA838u;
    {
        const bool branch_taken_0x3ca838 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x3ca838) {
            ctx->pc = 0x3CA850u;
            goto label_3ca850;
        }
    }
    ctx->pc = 0x3CA840u;
    // 0x3ca840: 0xc0f266c  jal         func_3C99B0
    ctx->pc = 0x3CA840u;
    SET_GPR_U32(ctx, 31, 0x3CA848u);
    ctx->pc = 0x3CA844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CA840u;
    // 0x3ca844: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C99B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C99B0u, 0x3CA840u, 0x3CA848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CA848u;
label_3ca848:
    // 0x3ca848: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3CA848u;
    {
        const bool branch_taken_0x3ca848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CA84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA848u;
        // 0x3ca84c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ca848) {
            ctx->pc = 0x3CA864u;
            goto label_3ca864;
        }
    }
    ctx->pc = 0x3CA850u;
label_3ca850:
    // 0x3ca850: 0xc0f2678  jal         func_3C99E0
    ctx->pc = 0x3CA850u;
    SET_GPR_U32(ctx, 31, 0x3CA858u);
    ctx->pc = 0x3CA854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CA850u;
    // 0x3ca854: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C99E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C99E0u, 0x3CA850u, 0x3CA858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CA858u;
label_3ca858:
    // 0x3ca858: 0xc0f266c  jal         func_3C99B0
    ctx->pc = 0x3CA858u;
    SET_GPR_U32(ctx, 31, 0x3CA860u);
    ctx->pc = 0x3CA85Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CA858u;
    // 0x3ca85c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C99B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C99B0u, 0x3CA858u, 0x3CA860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CA860u;
label_3ca860:
    // 0x3ca860: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3ca860u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ca864:
    // 0x3ca864: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3ca864u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3ca868: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x3ca868u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3ca86c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x3ca86cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3ca870: 0x3e00008  jr          $ra
    ctx->pc = 0x3CA870u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CA874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CA870u;
        // 0x3ca874: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CA870u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3CA878u;
}
