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

// Function: sub_00158330
// Address: 0x158330 - 0x158510
void sub_00158330_0x158330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00158330_0x158330");
#endif

    switch (ctx->pc) {
        case 0x158370u: goto label_158370;
        case 0x158398u: goto label_158398;
        case 0x1583a8u: goto label_1583a8;
        case 0x1583b4u: goto label_1583b4;
        case 0x1583d0u: goto label_1583d0;
        case 0x15841cu: goto label_15841c;
        case 0x15842cu: goto label_15842c;
        case 0x15843cu: goto label_15843c;
        case 0x15844cu: goto label_15844c;
        case 0x158474u: goto label_158474;
        case 0x158488u: goto label_158488;
        case 0x158498u: goto label_158498;
        case 0x1584ccu: goto label_1584cc;
        default: break;
    }

    ctx->pc = 0x158330u;

    // 0x158330: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x158330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x158334: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x158334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x158338: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x158338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x15833c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x15833cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158340: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x158340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x158344: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x158344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x158348: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x158348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x15834c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x15834cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x158350: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x158350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x158354: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x158354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x158358: 0x92020009  lbu         $v0, 0x9($s0)
    ctx->pc = 0x158358u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
    // 0x15835c: 0x10400062  beqz        $v0, . + 4 + (0x62 << 2)
    ctx->pc = 0x15835Cu;
    {
        const bool branch_taken_0x15835c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x158360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15835Cu;
        // 0x158360: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15835c) {
            ctx->pc = 0x1584E8u;
            goto label_1584e8;
        }
    }
    ctx->pc = 0x158364u;
    // 0x158364: 0x2a0982d  daddu       $s3, $s5, $zero
    ctx->pc = 0x158364u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158368: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x158368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x15836c: 0x0  nop
    ctx->pc = 0x15836cu;
    // NOP
label_158370:
    // 0x158370: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x158370u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x158374: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x158374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x158378: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x158378u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15837c: 0x12800053  beqz        $s4, . + 4 + (0x53 << 2)
    ctx->pc = 0x15837Cu;
    {
        const bool branch_taken_0x15837c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x158380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15837Cu;
        // 0x158380: 0x26760001  addiu       $s6, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15837c) {
            ctx->pc = 0x1584CCu;
            goto label_1584cc;
        }
    }
    ctx->pc = 0x158384u;
    // 0x158384: 0x26a20001  addiu       $v0, $s5, 0x1
    ctx->pc = 0x158384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x158388: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x158388u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15838c: 0x305500ff  andi        $s5, $v0, 0xFF
    ctx->pc = 0x15838cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x158390: 0xc04f1ae  jal         func_13C6B8
    ctx->pc = 0x158390u;
    SET_GPR_U32(ctx, 31, 0x158398u);
    ctx->pc = 0x158394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158390u;
    // 0x158394: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C6B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C6B8u, 0x158390u, 0x158398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158398u;
label_158398:
    // 0x158398: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x158398u;
    {
        const bool branch_taken_0x158398 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15839Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158398u;
        // 0x15839c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158398) {
            ctx->pc = 0x1583A8u;
            goto label_1583a8;
        }
    }
    ctx->pc = 0x1583A0u;
    // 0x1583a0: 0xc04f452  jal         func_13D148
    ctx->pc = 0x1583A0u;
    SET_GPR_U32(ctx, 31, 0x1583A8u);
    ctx->pc = 0x1583A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1583A0u;
    // 0x1583a4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13D148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13D148u, 0x1583A0u, 0x1583A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1583A8u;
label_1583a8:
    // 0x1583a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1583a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1583ac: 0xc04f112  jal         func_13C448
    ctx->pc = 0x1583ACu;
    SET_GPR_U32(ctx, 31, 0x1583B4u);
    ctx->pc = 0x1583B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1583ACu;
    // 0x1583b0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C448u, 0x1583ACu, 0x1583B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1583B4u;
label_1583b4:
    // 0x1583b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1583b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1583b8: 0x1443002c  bne         $v0, $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x1583B8u;
    {
        const bool branch_taken_0x1583b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1583BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1583B8u;
        // 0x1583bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1583b8) {
            ctx->pc = 0x15846Cu;
            goto label_15846c;
        }
    }
    ctx->pc = 0x1583C0u;
    // 0x1583c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1583c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1583c4: 0x26060228  addiu       $a2, $s0, 0x228
    ctx->pc = 0x1583c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 552));
    // 0x1583c8: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x1583c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1583cc: 0x0  nop
    ctx->pc = 0x1583ccu;
    // NOP
label_1583d0:
    // 0x1583d0: 0xc31021  addu        $v0, $a2, $v1
    ctx->pc = 0x1583d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1583d4: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x1583d4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1583d8: 0x1220001e  beqz        $s1, . + 4 + (0x1E << 2)
    ctx->pc = 0x1583D8u;
    {
        const bool branch_taken_0x1583d8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1583DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1583D8u;
        // 0x1583dc: 0x2031021  addu        $v0, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1583d8) {
            ctx->pc = 0x158454u;
            goto label_158454;
        }
    }
    ctx->pc = 0x1583E0u;
    // 0x1583e0: 0x8c52022c  lw          $s2, 0x22C($v0)
    ctx->pc = 0x1583e0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 556)));
    // 0x1583e4: 0x2643fff7  addiu       $v1, $s2, -0x9
    ctx->pc = 0x1583e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967287));
    // 0x1583e8: 0x2c620010  sltiu       $v0, $v1, 0x10
    ctx->pc = 0x1583e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x1583ec: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1583ECu;
    {
        const bool branch_taken_0x1583ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1583F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1583ECu;
        // 0x1583f0: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1583ec) {
            ctx->pc = 0x158454u;
            goto label_158454;
        }
    }
    ctx->pc = 0x1583F4u;
    // 0x1583f4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1583f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1583f8: 0x2442edb0  addiu       $v0, $v0, -0x1250
    ctx->pc = 0x1583f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962608));
    // 0x1583fc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1583fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x158400: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x158400u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x158404: 0x800008  jr          $a0
    ctx->pc = 0x158404u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15840Cu: goto label_15840c;
            case 0x158454u: goto label_158454;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x158404u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x15840Cu;
label_15840c:
    // 0x15840c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15840cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158410: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x158410u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158414: 0xc04d6fe  jal         func_135BF8
    ctx->pc = 0x158414u;
    SET_GPR_U32(ctx, 31, 0x15841Cu);
    ctx->pc = 0x158418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158414u;
    // 0x158418: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135BF8u, 0x158414u, 0x15841Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15841Cu;
label_15841c:
    // 0x15841c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15841cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158420: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x158420u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158424: 0xc04f10c  jal         func_13C430
    ctx->pc = 0x158424u;
    SET_GPR_U32(ctx, 31, 0x15842Cu);
    ctx->pc = 0x158428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158424u;
    // 0x158428: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C430u, 0x158424u, 0x15842Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15842Cu;
label_15842c:
    // 0x15842c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x15842cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158430: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x158430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158434: 0xc04f124  jal         func_13C490
    ctx->pc = 0x158434u;
    SET_GPR_U32(ctx, 31, 0x15843Cu);
    ctx->pc = 0x158438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158434u;
    // 0x158438: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C490u, 0x158434u, 0x15843Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15843Cu;
label_15843c:
    // 0x15843c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x15843cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158440: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x158440u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158444: 0xc04f118  jal         func_13C460
    ctx->pc = 0x158444u;
    SET_GPR_U32(ctx, 31, 0x15844Cu);
    ctx->pc = 0x158448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158444u;
    // 0x158448: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C460u, 0x158444u, 0x15844Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15844Cu;
label_15844c:
    // 0x15844c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x15844Cu;
    {
        const bool branch_taken_0x15844c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x158450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15844Cu;
        // 0x158450: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15844c) {
            ctx->pc = 0x15846Cu;
            goto label_15846c;
        }
    }
    ctx->pc = 0x158454u;
label_158454:
    // 0x158454: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x158454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x158458: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x158458u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x15845c: 0x2ca30010  sltiu       $v1, $a1, 0x10
    ctx->pc = 0x15845cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x158460: 0x1460ffdb  bnez        $v1, . + 4 + (-0x25 << 2)
    ctx->pc = 0x158460u;
    {
        const bool branch_taken_0x158460 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x158464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158460u;
        // 0x158464: 0x518c0  sll         $v1, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158460) {
            ctx->pc = 0x1583D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1583d0;
        }
    }
    ctx->pc = 0x158468u;
    // 0x158468: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x158468u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15846c:
    // 0x15846c: 0xc04f112  jal         func_13C448
    ctx->pc = 0x15846Cu;
    SET_GPR_U32(ctx, 31, 0x158474u);
    ctx->pc = 0x158470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15846Cu;
    // 0x158470: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C448u, 0x15846Cu, 0x158474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158474u;
label_158474:
    // 0x158474: 0x54400016  bnel        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x158474u;
    {
        const bool branch_taken_0x158474 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x158474) {
            ctx->pc = 0x158478u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x158474u;
            // 0x158478: 0x32d300ff  andi        $s3, $s6, 0xFF (Delay Slot)
            SET_GPR_U64(ctx, 19, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1584D0u;
            goto label_1584d0;
        }
    }
    ctx->pc = 0x15847Cu;
    // 0x15847c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15847cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158480: 0xc04f130  jal         func_13C4C0
    ctx->pc = 0x158480u;
    SET_GPR_U32(ctx, 31, 0x158488u);
    ctx->pc = 0x158484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158480u;
    // 0x158484: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C4C0u, 0x158480u, 0x158488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158488u;
label_158488:
    // 0x158488: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x158488u;
    {
        const bool branch_taken_0x158488 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15848Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158488u;
        // 0x15848c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158488) {
            ctx->pc = 0x1584CCu;
            goto label_1584cc;
        }
    }
    ctx->pc = 0x158490u;
    // 0x158490: 0xc04f11e  jal         func_13C478
    ctx->pc = 0x158490u;
    SET_GPR_U32(ctx, 31, 0x158498u);
    ctx->pc = 0x158494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158490u;
    // 0x158494: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C478u, 0x158490u, 0x158498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158498u;
label_158498:
    // 0x158498: 0x2443fff7  addiu       $v1, $v0, -0x9
    ctx->pc = 0x158498u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967287));
    // 0x15849c: 0x2c620010  sltiu       $v0, $v1, 0x10
    ctx->pc = 0x15849cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x1584a0: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1584A0u;
    {
        const bool branch_taken_0x1584a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1584A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1584A0u;
        // 0x1584a4: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1584a0) {
            ctx->pc = 0x1584CCu;
            goto label_1584cc;
        }
    }
    ctx->pc = 0x1584A8u;
    // 0x1584a8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1584a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1584ac: 0x2442edf0  addiu       $v0, $v0, -0x1210
    ctx->pc = 0x1584acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962672));
    // 0x1584b0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1584b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1584b4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1584b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1584b8: 0x800008  jr          $a0
    ctx->pc = 0x1584B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1584C0u: goto label_1584c0;
            case 0x1584CCu: goto label_1584cc;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1584B8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1584C0u;
label_1584c0:
    // 0x1584c0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1584c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1584c4: 0xc04f576  jal         func_13D5D8
    ctx->pc = 0x1584C4u;
    SET_GPR_U32(ctx, 31, 0x1584CCu);
    ctx->pc = 0x1584C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1584C4u;
    // 0x1584c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13D5D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13D5D8u, 0x1584C4u, 0x1584CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1584CCu;
label_1584cc:
    // 0x1584cc: 0x32d300ff  andi        $s3, $s6, 0xFF
    ctx->pc = 0x1584ccu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
label_1584d0:
    // 0x1584d0: 0x2e620010  sltiu       $v0, $s3, 0x10
    ctx->pc = 0x1584d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x1584d4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1584D4u;
    {
        const bool branch_taken_0x1584d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1584d4) {
            ctx->pc = 0x1584D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1584D4u;
            // 0x1584d8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1584ECu;
            goto label_1584ec;
        }
    }
    ctx->pc = 0x1584DCu;
    // 0x1584dc: 0x92020009  lbu         $v0, 0x9($s0)
    ctx->pc = 0x1584dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
    // 0x1584e0: 0x56a2ffa3  bnel        $s5, $v0, . + 4 + (-0x5D << 2)
    ctx->pc = 0x1584E0u;
    {
        const bool branch_taken_0x1584e0 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        if (branch_taken_0x1584e0) {
            ctx->pc = 0x1584E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1584E0u;
            // 0x1584e4: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x158370u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_158370;
        }
    }
    ctx->pc = 0x1584E8u;
label_1584e8:
    // 0x1584e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1584e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1584ec:
    // 0x1584ec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1584ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1584f0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1584f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1584f4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1584f4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1584f8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1584f8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1584fc: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1584fcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x158500: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x158500u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x158504: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x158504u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x158508: 0x3e00008  jr          $ra
    ctx->pc = 0x158508u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15850Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158508u;
        // 0x15850c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x158508u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x158510u;
}
