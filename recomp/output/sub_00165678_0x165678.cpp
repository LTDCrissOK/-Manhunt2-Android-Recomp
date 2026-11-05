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

// Function: sub_00165678
// Address: 0x165678 - 0x165818
void sub_00165678_0x165678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00165678_0x165678");
#endif

    switch (ctx->pc) {
        case 0x1656c0u: goto label_1656c0;
        case 0x1656f8u: goto label_1656f8;
        case 0x165708u: goto label_165708;
        case 0x165718u: goto label_165718;
        case 0x165738u: goto label_165738;
        case 0x165744u: goto label_165744;
        case 0x165754u: goto label_165754;
        case 0x16576cu: goto label_16576c;
        case 0x165780u: goto label_165780;
        case 0x16578cu: goto label_16578c;
        case 0x1657a8u: goto label_1657a8;
        case 0x1657c0u: goto label_1657c0;
        case 0x1657d0u: goto label_1657d0;
        case 0x1657f0u: goto label_1657f0;
        case 0x1657fcu: goto label_1657fc;
        default: break;
    }

    ctx->pc = 0x165678u;

    // 0x165678: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x165678u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16567c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16567cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x165680: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x165680u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x165684: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x165684u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165688: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x165688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x16568c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x16568cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165690: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x165690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x165694: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x165694u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165698: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x165698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x16569c: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x16569cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1656a0: 0x38420009  xori        $v0, $v0, 0x9
    ctx->pc = 0x1656a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)9);
    // 0x1656a4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1656A4u;
    {
        const bool branch_taken_0x1656a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1656A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1656A4u;
        // 0x1656a8: 0x3182b  sltu        $v1, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1656a4) {
            ctx->pc = 0x1656B0u;
            goto label_1656b0;
        }
    }
    ctx->pc = 0x1656ACu;
    // 0x1656ac: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1656acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1656b0:
    // 0x1656b0: 0xae4403b4  sw          $a0, 0x3B4($s2)
    ctx->pc = 0x1656b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 948), GPR_U32(ctx, 4));
    // 0x1656b4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1656b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1656b8: 0xc0597d2  jal         func_165F48
    ctx->pc = 0x1656B8u;
    SET_GPR_U32(ctx, 31, 0x1656C0u);
    ctx->pc = 0x1656BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1656B8u;
    // 0x1656bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165F48u, 0x1656B8u, 0x1656C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1656C0u;
label_1656c0:
    // 0x1656c0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1656c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1656c4: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x1656c4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x1656c8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1656c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1656cc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1656CCu;
    {
        const bool branch_taken_0x1656cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1656D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1656CCu;
        // 0x1656d0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1656cc) {
            ctx->pc = 0x1656E8u;
            goto label_1656e8;
        }
    }
    ctx->pc = 0x1656D4u;
    // 0x1656d4: 0x8e4203b8  lw          $v0, 0x3B8($s2)
    ctx->pc = 0x1656d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 952)));
    // 0x1656d8: 0x14400031  bnez        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x1656D8u;
    {
        const bool branch_taken_0x1656d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1656d8) {
            ctx->pc = 0x1657A0u;
            goto label_1657a0;
        }
    }
    ctx->pc = 0x1656E0u;
    // 0x1656e0: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x1656E0u;
    {
        const bool branch_taken_0x1656e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1656e0) {
            ctx->pc = 0x165784u;
            goto label_165784;
        }
    }
    ctx->pc = 0x1656E8u;
label_1656e8:
    // 0x1656e8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1656e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1656ec: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1656ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1656f0: 0xc0597a8  jal         func_165EA0
    ctx->pc = 0x1656F0u;
    SET_GPR_U32(ctx, 31, 0x1656F8u);
    ctx->pc = 0x1656F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1656F0u;
    // 0x1656f4: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165EA0u, 0x1656F0u, 0x1656F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1656F8u;
label_1656f8:
    // 0x1656f8: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x1656F8u;
    {
        const bool branch_taken_0x1656f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1656FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1656F8u;
        // 0x1656fc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1656f8) {
            ctx->pc = 0x165794u;
            goto label_165794;
        }
    }
    ctx->pc = 0x165700u;
    // 0x165700: 0xc059a48  jal         func_166920
    ctx->pc = 0x165700u;
    SET_GPR_U32(ctx, 31, 0x165708u);
    ctx->pc = 0x165704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165700u;
    // 0x165704: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x166920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166920u, 0x165700u, 0x165708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165708u;
label_165708:
    // 0x165708: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x165708u;
    {
        const bool branch_taken_0x165708 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x165708) {
            ctx->pc = 0x1657C8u;
            goto label_1657c8;
        }
    }
    ctx->pc = 0x165710u;
    // 0x165710: 0xc059b3c  jal         func_166CF0
    ctx->pc = 0x165710u;
    SET_GPR_U32(ctx, 31, 0x165718u);
    ctx->pc = 0x165714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165710u;
    // 0x165714: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x166CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166CF0u, 0x165710u, 0x165718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165718u;
label_165718:
    // 0x165718: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x165718u;
    {
        const bool branch_taken_0x165718 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16571Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165718u;
        // 0x16571c: 0x3c100049  lui         $s0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165718) {
            ctx->pc = 0x1657C8u;
            goto label_1657c8;
        }
    }
    ctx->pc = 0x165720u;
    // 0x165720: 0x8e420214  lw          $v0, 0x214($s2)
    ctx->pc = 0x165720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 532)));
    // 0x165724: 0x2610b060  addiu       $s0, $s0, -0x4FA0
    ctx->pc = 0x165724u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294946912));
    // 0x165728: 0x8e4602e0  lw          $a2, 0x2E0($s2)
    ctx->pc = 0x165728u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 736)));
    // 0x16572c: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x16572cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x165730: 0xc04ae0e  jal         func_12B838
    ctx->pc = 0x165730u;
    SET_GPR_U32(ctx, 31, 0x165738u);
    ctx->pc = 0x165734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165730u;
    // 0x165734: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12B838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B838u, 0x165730u, 0x165738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165738u;
label_165738:
    // 0x165738: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x165738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16573c: 0xc04f0b6  jal         func_13C2D8
    ctx->pc = 0x16573Cu;
    SET_GPR_U32(ctx, 31, 0x165744u);
    ctx->pc = 0x165740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16573Cu;
    // 0x165740: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C2D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C2D8u, 0x16573Cu, 0x165744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165744u;
label_165744:
    // 0x165744: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x165744u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165748: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x165748u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16574c: 0xc0462e4  jal         func_118B90
    ctx->pc = 0x16574Cu;
    SET_GPR_U32(ctx, 31, 0x165754u);
    ctx->pc = 0x165750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16574Cu;
    // 0x165750: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118B90u, 0x16574Cu, 0x165754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165754u;
label_165754:
    // 0x165754: 0x8e420214  lw          $v0, 0x214($s2)
    ctx->pc = 0x165754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 532)));
    // 0x165758: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x165758u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16575c: 0x8e4602e0  lw          $a2, 0x2E0($s2)
    ctx->pc = 0x16575cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 736)));
    // 0x165760: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x165760u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165764: 0xc04adbe  jal         func_12B6F8
    ctx->pc = 0x165764u;
    SET_GPR_U32(ctx, 31, 0x16576Cu);
    ctx->pc = 0x165768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165764u;
    // 0x165768: 0x8c450010  lw          $a1, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12B6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B6F8u, 0x165764u, 0x16576Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16576Cu;
label_16576c:
    // 0x16576c: 0x8e420214  lw          $v0, 0x214($s2)
    ctx->pc = 0x16576cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 532)));
    // 0x165770: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x165770u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165774: 0x8e4602e0  lw          $a2, 0x2E0($s2)
    ctx->pc = 0x165774u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 736)));
    // 0x165778: 0xc04add4  jal         func_12B750
    ctx->pc = 0x165778u;
    SET_GPR_U32(ctx, 31, 0x165780u);
    ctx->pc = 0x16577Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165778u;
    // 0x16577c: 0x8c450010  lw          $a1, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12B750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B750u, 0x165778u, 0x165780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165780u;
label_165780:
    // 0x165780: 0xae4003b8  sw          $zero, 0x3B8($s2)
    ctx->pc = 0x165780u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 952), GPR_U32(ctx, 0));
label_165784:
    // 0x165784: 0xc059634  jal         func_1658D0
    ctx->pc = 0x165784u;
    SET_GPR_U32(ctx, 31, 0x16578Cu);
    ctx->pc = 0x165788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165784u;
    // 0x165788: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1658D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1658D0u, 0x165784u, 0x16578Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16578Cu;
label_16578c:
    // 0x16578c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x16578Cu;
    {
        const bool branch_taken_0x16578c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16578Cu;
        // 0x165790: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16578c) {
            ctx->pc = 0x165800u;
            goto label_165800;
        }
    }
    ctx->pc = 0x165794u;
label_165794:
    // 0x165794: 0x8e4203b8  lw          $v0, 0x3B8($s2)
    ctx->pc = 0x165794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 952)));
    // 0x165798: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x165798u;
    {
        const bool branch_taken_0x165798 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16579Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165798u;
        // 0x16579c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165798) {
            ctx->pc = 0x1657B0u;
            goto label_1657b0;
        }
    }
    ctx->pc = 0x1657A0u;
label_1657a0:
    // 0x1657a0: 0xc059606  jal         func_165818
    ctx->pc = 0x1657A0u;
    SET_GPR_U32(ctx, 31, 0x1657A8u);
    ctx->pc = 0x1657A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1657A0u;
    // 0x1657a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165818u, 0x1657A0u, 0x1657A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1657A8u;
label_1657a8:
    // 0x1657a8: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1657A8u;
    {
        const bool branch_taken_0x1657a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1657ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1657A8u;
        // 0x1657ac: 0xae4003b8  sw          $zero, 0x3B8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 952), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1657a8) {
            ctx->pc = 0x1657FCu;
            goto label_1657fc;
        }
    }
    ctx->pc = 0x1657B0u;
label_1657b0:
    // 0x1657b0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1657b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1657b4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1657b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1657b8: 0xc0597a8  jal         func_165EA0
    ctx->pc = 0x1657B8u;
    SET_GPR_U32(ctx, 31, 0x1657C0u);
    ctx->pc = 0x1657BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1657B8u;
    // 0x1657bc: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165EA0u, 0x1657B8u, 0x1657C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1657C0u;
label_1657c0:
    // 0x1657c0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1657C0u;
    {
        const bool branch_taken_0x1657c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1657c0) {
            ctx->pc = 0x1657C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1657C0u;
            // 0x1657c4: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1657D8u;
            goto label_1657d8;
        }
    }
    ctx->pc = 0x1657C8u;
label_1657c8:
    // 0x1657c8: 0xc059670  jal         func_1659C0
    ctx->pc = 0x1657C8u;
    SET_GPR_U32(ctx, 31, 0x1657D0u);
    ctx->pc = 0x1657CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1657C8u;
    // 0x1657cc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1659C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1659C0u, 0x1657C8u, 0x1657D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1657D0u;
label_1657d0:
    // 0x1657d0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1657D0u;
    {
        const bool branch_taken_0x1657d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1657D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1657D0u;
        // 0x1657d4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1657d0) {
            ctx->pc = 0x165800u;
            goto label_165800;
        }
    }
    ctx->pc = 0x1657D8u;
label_1657d8:
    // 0x1657d8: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x1657d8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x1657dc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1657dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1657e0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1657E0u;
    {
        const bool branch_taken_0x1657e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1657E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1657E0u;
        // 0x1657e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1657e0) {
            ctx->pc = 0x1657F4u;
            goto label_1657f4;
        }
    }
    ctx->pc = 0x1657E8u;
    // 0x1657e8: 0xc0f70d8  jal         func_3DC360
    ctx->pc = 0x1657E8u;
    SET_GPR_U32(ctx, 31, 0x1657F0u);
    ctx->pc = 0x1657ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1657E8u;
    // 0x1657ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC360u, 0x1657E8u, 0x1657F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1657F0u;
label_1657f0:
    // 0x1657f0: 0x2c450001  sltiu       $a1, $v0, 0x1
    ctx->pc = 0x1657f0u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1657f4:
    // 0x1657f4: 0xc059710  jal         func_165C40
    ctx->pc = 0x1657F4u;
    SET_GPR_U32(ctx, 31, 0x1657FCu);
    ctx->pc = 0x1657F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1657F4u;
    // 0x1657f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x165C40u, 0x1657F4u, 0x1657FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1657FCu;
label_1657fc:
    // 0x1657fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1657fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_165800:
    // 0x165800: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x165800u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x165804: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x165804u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x165808: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x165808u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16580c: 0x3e00008  jr          $ra
    ctx->pc = 0x16580Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x165810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16580Cu;
        // 0x165810: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16580Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x165814u;
    // 0x165814: 0x0  nop
    ctx->pc = 0x165814u;
    // NOP
    ctx->pc = 0x165818u;
}
