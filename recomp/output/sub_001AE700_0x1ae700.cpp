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

// Function: sub_001AE700
// Address: 0x1ae700 - 0x1ae7f0
void sub_001AE700_0x1ae700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AE700_0x1ae700");
#endif

    switch (ctx->pc) {
        case 0x1ae718u: goto label_1ae718;
        case 0x1ae738u: goto label_1ae738;
        case 0x1ae780u: goto label_1ae780;
        case 0x1ae7c4u: goto label_1ae7c4;
        case 0x1ae7dcu: goto label_1ae7dc;
        default: break;
    }

    ctx->pc = 0x1ae700u;

    // 0x1ae700: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ae700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ae704: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ae704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ae708: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ae708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ae70c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1ae70cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1ae710: 0xc06c11c  jal         func_1B0470
    ctx->pc = 0x1AE710u;
    SET_GPR_U32(ctx, 31, 0x1AE718u);
    ctx->pc = 0x1AE714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE710u;
    // 0x1ae714: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0470u, 0x1AE710u, 0x1AE718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE718u;
label_1ae718:
    // 0x1ae718: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1ae718u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae71c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1ae71cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ae720: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AE720u;
    {
        const bool branch_taken_0x1ae720 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AE724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE720u;
        // 0x1ae724: 0x241001ba  addiu       $s0, $zero, 0x1BA (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 442));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae720) {
            ctx->pc = 0x1AE730u;
            goto label_1ae730;
        }
    }
    ctx->pc = 0x1AE728u;
    // 0x1ae728: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1AE728u;
    {
        const bool branch_taken_0x1ae728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE728u;
        // 0x1ae72c: 0x247000af  addiu       $s0, $v1, 0xAF (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 175));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae728) {
            ctx->pc = 0x1AE798u;
            goto label_1ae798;
        }
    }
    ctx->pc = 0x1AE730u;
label_1ae730:
    // 0x1ae730: 0xc06c148  jal         func_1B0520
    ctx->pc = 0x1AE730u;
    SET_GPR_U32(ctx, 31, 0x1AE738u);
    ctx->pc = 0x1AE734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE730u;
    // 0x1ae734: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0520u, 0x1AE730u, 0x1AE738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE738u;
label_1ae738:
    // 0x1ae738: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1ae738u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae73c: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x1ae73cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1ae740: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AE740u;
    {
        const bool branch_taken_0x1ae740 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1AE744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE740u;
        // 0x1ae744: 0x28620008  slti        $v0, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae740) {
            ctx->pc = 0x1AE750u;
            goto label_1ae750;
        }
    }
    ctx->pc = 0x1AE748u;
    // 0x1ae748: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1AE748u;
    {
        const bool branch_taken_0x1ae748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE748u;
        // 0x1ae74c: 0x241000b4  addiu       $s0, $zero, 0xB4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae748) {
            ctx->pc = 0x1AE798u;
            goto label_1ae798;
        }
    }
    ctx->pc = 0x1AE750u;
label_1ae750:
    // 0x1ae750: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x1AE750u;
    {
        const bool branch_taken_0x1ae750 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ae750) {
            ctx->pc = 0x1AE754u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AE750u;
            // 0x1ae754: 0x28630000  slti        $v1, $v1, 0x0 (Delay Slot)
            SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AE790u;
            goto label_1ae790;
        }
    }
    ctx->pc = 0x1AE758u;
    // 0x1ae758: 0x8e24009c  lw          $a0, 0x9C($s1)
    ctx->pc = 0x1ae758u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
    // 0x1ae75c: 0x8c8200bc  lw          $v0, 0xBC($a0)
    ctx->pc = 0x1ae75cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 188)));
    // 0x1ae760: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x1ae760u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
    // 0x1ae764: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1AE764u;
    {
        const bool branch_taken_0x1ae764 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE764u;
        // 0x1ae768: 0x241000b7  addiu       $s0, $zero, 0xB7 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 183));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae764) {
            ctx->pc = 0x1AE798u;
            goto label_1ae798;
        }
    }
    ctx->pc = 0x1AE76Cu;
    // 0x1ae76c: 0x8c840ff4  lw          $a0, 0xFF4($a0)
    ctx->pc = 0x1ae76cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4084)));
    // 0x1ae770: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1AE770u;
    {
        const bool branch_taken_0x1ae770 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE770u;
        // 0x1ae774: 0x241000b8  addiu       $s0, $zero, 0xB8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 184));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae770) {
            ctx->pc = 0x1AE798u;
            goto label_1ae798;
        }
    }
    ctx->pc = 0x1AE778u;
    // 0x1ae778: 0xc0619d2  jal         func_186748
    ctx->pc = 0x1AE778u;
    SET_GPR_U32(ctx, 31, 0x1AE780u);
    ctx->pc = 0x1AE77Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE778u;
    // 0x1ae77c: 0x241000b9  addiu       $s0, $zero, 0xB9 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 185));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186748u, 0x1AE778u, 0x1AE780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE780u;
label_1ae780:
    // 0x1ae780: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1AE780u;
    {
        const bool branch_taken_0x1ae780 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AE784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE780u;
        // 0x1ae784: 0x240201ba  addiu       $v0, $zero, 0x1BA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 442));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae780) {
            ctx->pc = 0x1AE79Cu;
            goto label_1ae79c;
        }
    }
    ctx->pc = 0x1AE788u;
    // 0x1ae788: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1AE788u;
    {
        const bool branch_taken_0x1ae788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE788u;
        // 0x1ae78c: 0x241000b8  addiu       $s0, $zero, 0xB8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 184));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae788) {
            ctx->pc = 0x1AE79Cu;
            goto label_1ae79c;
        }
    }
    ctx->pc = 0x1AE790u;
label_1ae790:
    // 0x1ae790: 0x240200b6  addiu       $v0, $zero, 0xB6
    ctx->pc = 0x1ae790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 182));
    // 0x1ae794: 0x43800a  movz        $s0, $v0, $v1
    ctx->pc = 0x1ae794u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
label_1ae798:
    // 0x1ae798: 0x240201ba  addiu       $v0, $zero, 0x1BA
    ctx->pc = 0x1ae798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 442));
label_1ae79c:
    // 0x1ae79c: 0x12020006  beq         $s0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1AE79Cu;
    {
        const bool branch_taken_0x1ae79c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AE7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE79Cu;
        // 0x1ae7a0: 0x101880  sll         $v1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae79c) {
            ctx->pc = 0x1AE7B8u;
            goto label_1ae7b8;
        }
    }
    ctx->pc = 0x1AE7A4u;
    // 0x1ae7a4: 0x8e220080  lw          $v0, 0x80($s1)
    ctx->pc = 0x1ae7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x1ae7a8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1ae7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1ae7ac: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1ae7acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ae7b0: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1AE7B0u;
    {
        const bool branch_taken_0x1ae7b0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AE7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE7B0u;
        // 0x1ae7b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae7b0) {
            ctx->pc = 0x1AE7CCu;
            goto label_1ae7cc;
        }
    }
    ctx->pc = 0x1AE7B8u;
label_1ae7b8:
    // 0x1ae7b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ae7b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae7bc: 0xc06b85c  jal         func_1AE170
    ctx->pc = 0x1AE7BCu;
    SET_GPR_U32(ctx, 31, 0x1AE7C4u);
    ctx->pc = 0x1AE7C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE7BCu;
    // 0x1ae7c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE170u, 0x1AE7BCu, 0x1AE7C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE7C4u;
label_1ae7c4:
    // 0x1ae7c4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1AE7C4u;
    {
        const bool branch_taken_0x1ae7c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AE7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE7C4u;
        // 0x1ae7c8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ae7c4) {
            ctx->pc = 0x1AE7E0u;
            goto label_1ae7e0;
        }
    }
    ctx->pc = 0x1AE7CCu;
label_1ae7cc:
    // 0x1ae7cc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1ae7ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ae7d0: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1ae7d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1ae7d4: 0xc06b808  jal         func_1AE020
    ctx->pc = 0x1AE7D4u;
    SET_GPR_U32(ctx, 31, 0x1AE7DCu);
    ctx->pc = 0x1AE7D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AE7D4u;
    // 0x1ae7d8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE020u, 0x1AE7D4u, 0x1AE7DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AE7DCu;
label_1ae7dc:
    // 0x1ae7dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ae7dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ae7e0:
    // 0x1ae7e0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ae7e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ae7e4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ae7e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ae7e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1AE7E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AE7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AE7E8u;
        // 0x1ae7ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AE7E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AE7F0u;
}
