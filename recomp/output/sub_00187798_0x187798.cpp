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

// Function: sub_00187798
// Address: 0x187798 - 0x187850
void sub_00187798_0x187798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00187798_0x187798");
#endif

    switch (ctx->pc) {
        case 0x187798u: goto label_187798;
        case 0x18779cu: goto label_18779c;
        case 0x1877a0u: goto label_1877a0;
        case 0x1877a4u: goto label_1877a4;
        case 0x1877a8u: goto label_1877a8;
        case 0x1877acu: goto label_1877ac;
        case 0x1877b0u: goto label_1877b0;
        case 0x1877b4u: goto label_1877b4;
        case 0x1877b8u: goto label_1877b8;
        case 0x1877bcu: goto label_1877bc;
        case 0x1877c0u: goto label_1877c0;
        case 0x1877c4u: goto label_1877c4;
        case 0x1877c8u: goto label_1877c8;
        case 0x1877ccu: goto label_1877cc;
        case 0x1877d0u: goto label_1877d0;
        case 0x1877d4u: goto label_1877d4;
        case 0x1877d8u: goto label_1877d8;
        case 0x1877dcu: goto label_1877dc;
        case 0x1877e0u: goto label_1877e0;
        case 0x1877e4u: goto label_1877e4;
        case 0x1877e8u: goto label_1877e8;
        case 0x1877ecu: goto label_1877ec;
        case 0x1877f0u: goto label_1877f0;
        case 0x1877f4u: goto label_1877f4;
        case 0x1877f8u: goto label_1877f8;
        case 0x1877fcu: goto label_1877fc;
        case 0x187800u: goto label_187800;
        case 0x187804u: goto label_187804;
        case 0x187808u: goto label_187808;
        case 0x18780cu: goto label_18780c;
        case 0x187810u: goto label_187810;
        case 0x187814u: goto label_187814;
        case 0x187818u: goto label_187818;
        case 0x18781cu: goto label_18781c;
        case 0x187820u: goto label_187820;
        case 0x187824u: goto label_187824;
        case 0x187828u: goto label_187828;
        case 0x18782cu: goto label_18782c;
        case 0x187830u: goto label_187830;
        case 0x187834u: goto label_187834;
        case 0x187838u: goto label_187838;
        case 0x18783cu: goto label_18783c;
        case 0x187840u: goto label_187840;
        case 0x187844u: goto label_187844;
        case 0x187848u: goto label_187848;
        case 0x18784cu: goto label_18784c;
        default: break;
    }

    ctx->pc = 0x187798u;

label_187798:
    // 0x187798: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x187798u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_18779c:
    // 0x18779c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x18779cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1877a0:
    // 0x1877a0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1877a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1877a4:
    // 0x1877a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1877a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1877a8:
    // 0x1877a8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1877a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1877ac:
    // 0x1877ac: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1877acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1877b0:
    // 0x1877b0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1877b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_1877b4:
    // 0x1877b4: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x1877b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1877b8:
    // 0x1877b8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1877b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_1877bc:
    // 0x1877bc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1877bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1877c0:
    // 0x1877c0: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1877c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_1877c4:
    // 0x1877c4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1877c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1877c8:
    // 0x1877c8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_1877cc:
    if (ctx->pc == 0x1877CCu) {
        ctx->pc = 0x1877CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1877C8u;
        // 0x1877cc: 0x100a02d  daddu       $s4, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1877D0u;
        goto label_1877d0;
    }
    ctx->pc = 0x1877C8u;
    {
        const bool branch_taken_0x1877c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1877CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1877C8u;
        // 0x1877cc: 0x100a02d  daddu       $s4, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1877c8) {
            ctx->pc = 0x1877E0u;
            goto label_1877e0;
        }
    }
    ctx->pc = 0x1877D0u;
label_1877d0:
    // 0x1877d0: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x1877d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1877d4:
    // 0x1877d4: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x1877d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_1877d8:
    // 0x1877d8: 0x40f809  jalr        $v0
label_1877dc:
    if (ctx->pc == 0x1877DCu) {
        ctx->pc = 0x1877E0u;
        goto label_1877e0;
    }
    ctx->pc = 0x1877D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1877E0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1877D8u, 0x1877E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1877E0u;
label_1877e0:
    // 0x1877e0: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x1877e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_1877e4:
    // 0x1877e4: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_1877e8:
    if (ctx->pc == 0x1877E8u) {
        ctx->pc = 0x1877E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1877E4u;
        // 0x1877e8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1877ECu;
        goto label_1877ec;
    }
    ctx->pc = 0x1877E4u;
    {
        const bool branch_taken_0x1877e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1877E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1877E4u;
        // 0x1877e8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1877e4) {
            ctx->pc = 0x18780Cu;
            goto label_18780c;
        }
    }
    ctx->pc = 0x1877ECu;
label_1877ec:
    // 0x1877ec: 0xc0f5240  jal         func_3D4900
label_1877f0:
    if (ctx->pc == 0x1877F0u) {
        ctx->pc = 0x1877F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1877ECu;
        // 0x1877f0: 0x240400b0  addiu       $a0, $zero, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1877F4u;
        goto label_1877f4;
    }
    ctx->pc = 0x1877ECu;
    SET_GPR_U32(ctx, 31, 0x1877F4u);
    ctx->pc = 0x1877F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1877ECu;
    // 0x1877f0: 0x240400b0  addiu       $a0, $zero, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x1877ECu, 0x1877F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1877F4u;
label_1877f4:
    // 0x1877f4: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1877f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1877f8:
    // 0x1877f8: 0xc065b6c  jal         func_196DB0
label_1877fc:
    if (ctx->pc == 0x1877FCu) {
        ctx->pc = 0x1877FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1877F8u;
        // 0x1877fc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187800u;
        goto label_187800;
    }
    ctx->pc = 0x1877F8u;
    SET_GPR_U32(ctx, 31, 0x187800u);
    ctx->pc = 0x1877FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1877F8u;
    // 0x1877fc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x196DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x196DB0u, 0x1877F8u, 0x187800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187800u;
label_187800:
    // 0x187800: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x187800u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
label_187804:
    // 0x187804: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x187804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_187808:
    // 0x187808: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x187808u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_18780c:
    // 0x18780c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x18780cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_187810:
    // 0x187810: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x187810u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_187814:
    // 0x187814: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x187814u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_187818:
    // 0x187818: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x187818u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_18781c:
    // 0x18781c: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x18781cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_187820:
    // 0x187820: 0x8c690028  lw          $t1, 0x28($v1)
    ctx->pc = 0x187820u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_187824:
    // 0x187824: 0x120f809  jalr        $t1
label_187828:
    if (ctx->pc == 0x187828u) {
        ctx->pc = 0x187828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187824u;
        // 0x187828: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18782Cu;
        goto label_18782c;
    }
    ctx->pc = 0x187824u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 9);
        SET_GPR_U32(ctx, 31, 0x18782Cu);
        ctx->pc = 0x187828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187824u;
        // 0x187828: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x187824u, 0x18782Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18782Cu;
label_18782c:
    // 0x18782c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x18782cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_187830:
    // 0x187830: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x187830u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_187834:
    // 0x187834: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x187834u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_187838:
    // 0x187838: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x187838u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_18783c:
    // 0x18783c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x18783cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_187840:
    // 0x187840: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x187840u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_187844:
    // 0x187844: 0x3e00008  jr          $ra
label_187848:
    if (ctx->pc == 0x187848u) {
        ctx->pc = 0x187848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187844u;
        // 0x187848: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18784Cu;
        goto label_18784c;
    }
    ctx->pc = 0x187844u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x187848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187844u;
        // 0x187848: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x187844u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18784Cu;
label_18784c:
    // 0x18784c: 0x0  nop
    ctx->pc = 0x18784cu;
    // NOP
    ctx->pc = 0x187850u;
}
