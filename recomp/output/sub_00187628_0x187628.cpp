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

// Function: sub_00187628
// Address: 0x187628 - 0x1876e8
void sub_00187628_0x187628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00187628_0x187628");
#endif

    switch (ctx->pc) {
        case 0x187628u: goto label_187628;
        case 0x18762cu: goto label_18762c;
        case 0x187630u: goto label_187630;
        case 0x187634u: goto label_187634;
        case 0x187638u: goto label_187638;
        case 0x18763cu: goto label_18763c;
        case 0x187640u: goto label_187640;
        case 0x187644u: goto label_187644;
        case 0x187648u: goto label_187648;
        case 0x18764cu: goto label_18764c;
        case 0x187650u: goto label_187650;
        case 0x187654u: goto label_187654;
        case 0x187658u: goto label_187658;
        case 0x18765cu: goto label_18765c;
        case 0x187660u: goto label_187660;
        case 0x187664u: goto label_187664;
        case 0x187668u: goto label_187668;
        case 0x18766cu: goto label_18766c;
        case 0x187670u: goto label_187670;
        case 0x187674u: goto label_187674;
        case 0x187678u: goto label_187678;
        case 0x18767cu: goto label_18767c;
        case 0x187680u: goto label_187680;
        case 0x187684u: goto label_187684;
        case 0x187688u: goto label_187688;
        case 0x18768cu: goto label_18768c;
        case 0x187690u: goto label_187690;
        case 0x187694u: goto label_187694;
        case 0x187698u: goto label_187698;
        case 0x18769cu: goto label_18769c;
        case 0x1876a0u: goto label_1876a0;
        case 0x1876a4u: goto label_1876a4;
        case 0x1876a8u: goto label_1876a8;
        case 0x1876acu: goto label_1876ac;
        case 0x1876b0u: goto label_1876b0;
        case 0x1876b4u: goto label_1876b4;
        case 0x1876b8u: goto label_1876b8;
        case 0x1876bcu: goto label_1876bc;
        case 0x1876c0u: goto label_1876c0;
        case 0x1876c4u: goto label_1876c4;
        case 0x1876c8u: goto label_1876c8;
        case 0x1876ccu: goto label_1876cc;
        case 0x1876d0u: goto label_1876d0;
        case 0x1876d4u: goto label_1876d4;
        case 0x1876d8u: goto label_1876d8;
        case 0x1876dcu: goto label_1876dc;
        case 0x1876e0u: goto label_1876e0;
        case 0x1876e4u: goto label_1876e4;
        default: break;
    }

    ctx->pc = 0x187628u;

label_187628:
    // 0x187628: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x187628u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_18762c:
    // 0x18762c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x18762cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_187630:
    // 0x187630: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x187630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_187634:
    // 0x187634: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x187634u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_187638:
    // 0x187638: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x187638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_18763c:
    // 0x18763c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x18763cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_187640:
    // 0x187640: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x187640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_187644:
    // 0x187644: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x187644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_187648:
    // 0x187648: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x187648u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_18764c:
    // 0x18764c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_187650:
    if (ctx->pc == 0x187650u) {
        ctx->pc = 0x187650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18764Cu;
        // 0x187650: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187654u;
        goto label_187654;
    }
    ctx->pc = 0x18764Cu;
    {
        const bool branch_taken_0x18764c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x187650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18764Cu;
        // 0x187650: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18764c) {
            ctx->pc = 0x187664u;
            goto label_187664;
        }
    }
    ctx->pc = 0x187654u;
label_187654:
    // 0x187654: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x187654u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_187658:
    // 0x187658: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x187658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_18765c:
    // 0x18765c: 0x40f809  jalr        $v0
label_187660:
    if (ctx->pc == 0x187660u) {
        ctx->pc = 0x187664u;
        goto label_187664;
    }
    ctx->pc = 0x18765Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x187664u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18765Cu, 0x187664u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x187664u;
label_187664:
    // 0x187664: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x187664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_187668:
    // 0x187668: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
label_18766c:
    if (ctx->pc == 0x18766Cu) {
        ctx->pc = 0x18766Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187668u;
        // 0x18766c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187670u;
        goto label_187670;
    }
    ctx->pc = 0x187668u;
    {
        const bool branch_taken_0x187668 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18766Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187668u;
        // 0x18766c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187668) {
            ctx->pc = 0x1876B0u;
            goto label_1876b0;
        }
    }
    ctx->pc = 0x187670u;
label_187670:
    // 0x187670: 0xc0f5240  jal         func_3D4900
label_187674:
    if (ctx->pc == 0x187674u) {
        ctx->pc = 0x187674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187670u;
        // 0x187674: 0x24040060  addiu       $a0, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187678u;
        goto label_187678;
    }
    ctx->pc = 0x187670u;
    SET_GPR_U32(ctx, 31, 0x187678u);
    ctx->pc = 0x187674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187670u;
    // 0x187674: 0x24040060  addiu       $a0, $zero, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x187670u, 0x187678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187678u;
label_187678:
    // 0x187678: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x187678u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_18767c:
    // 0x18767c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x18767cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_187680:
    // 0x187680: 0xc061a32  jal         func_1868C8
label_187684:
    if (ctx->pc == 0x187684u) {
        ctx->pc = 0x187684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187680u;
        // 0x187684: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187688u;
        goto label_187688;
    }
    ctx->pc = 0x187680u;
    SET_GPR_U32(ctx, 31, 0x187688u);
    ctx->pc = 0x187684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187680u;
    // 0x187684: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1868C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1868C8u, 0x187680u, 0x187688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187688u;
label_187688:
    // 0x187688: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x187688u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
label_18768c:
    // 0x18768c: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x18768cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_187690:
    // 0x187690: 0x246310d0  addiu       $v1, $v1, 0x10D0
    ctx->pc = 0x187690u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4304));
label_187694:
    // 0x187694: 0xc0f6a96  jal         func_3DAA58
label_187698:
    if (ctx->pc == 0x187698u) {
        ctx->pc = 0x187698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187694u;
        // 0x187698: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18769Cu;
        goto label_18769c;
    }
    ctx->pc = 0x187694u;
    SET_GPR_U32(ctx, 31, 0x18769Cu);
    ctx->pc = 0x187698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187694u;
    // 0x187698: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x187694u, 0x18769Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18769Cu;
label_18769c:
    // 0x18769c: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x18769cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1876a0:
    // 0x1876a0: 0xae300010  sw          $s0, 0x10($s1)
    ctx->pc = 0x1876a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 16));
label_1876a4:
    // 0x1876a4: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1876a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_1876a8:
    // 0x1876a8: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1876a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1876ac:
    // 0x1876ac: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1876acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1876b0:
    // 0x1876b0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1876b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1876b4:
    // 0x1876b4: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x1876b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_1876b8:
    // 0x1876b8: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1876b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1876bc:
    // 0x1876bc: 0x8c670020  lw          $a3, 0x20($v1)
    ctx->pc = 0x1876bcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_1876c0:
    // 0x1876c0: 0xe0f809  jalr        $a3
label_1876c4:
    if (ctx->pc == 0x1876C4u) {
        ctx->pc = 0x1876C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1876C0u;
        // 0x1876c4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1876C8u;
        goto label_1876c8;
    }
    ctx->pc = 0x1876C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x1876C8u);
        ctx->pc = 0x1876C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1876C0u;
        // 0x1876c4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1876C0u, 0x1876C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1876C8u;
label_1876c8:
    // 0x1876c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1876c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1876cc:
    // 0x1876cc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1876ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1876d0:
    // 0x1876d0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1876d0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1876d4:
    // 0x1876d4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1876d4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1876d8:
    // 0x1876d8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1876d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1876dc:
    // 0x1876dc: 0x3e00008  jr          $ra
label_1876e0:
    if (ctx->pc == 0x1876E0u) {
        ctx->pc = 0x1876E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1876DCu;
        // 0x1876e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1876E4u;
        goto label_1876e4;
    }
    ctx->pc = 0x1876DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1876E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1876DCu;
        // 0x1876e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1876DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1876E4u;
label_1876e4:
    // 0x1876e4: 0x0  nop
    ctx->pc = 0x1876e4u;
    // NOP
    ctx->pc = 0x1876e8u;
}
