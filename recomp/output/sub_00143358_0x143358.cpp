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

// Function: sub_00143358
// Address: 0x143358 - 0x143498
void sub_00143358_0x143358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00143358_0x143358");
#endif

    switch (ctx->pc) {
        case 0x143378u: goto label_143378;
        case 0x143390u: goto label_143390;
        case 0x14339cu: goto label_14339c;
        case 0x1433acu: goto label_1433ac;
        case 0x1433b4u: goto label_1433b4;
        case 0x1433c4u: goto label_1433c4;
        case 0x1433e8u: goto label_1433e8;
        case 0x1433f4u: goto label_1433f4;
        case 0x14340cu: goto label_14340c;
        case 0x143418u: goto label_143418;
        case 0x143434u: goto label_143434;
        case 0x143448u: goto label_143448;
        case 0x14346cu: goto label_14346c;
        case 0x14347cu: goto label_14347c;
        default: break;
    }

    ctx->pc = 0x143358u;

    // 0x143358: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x143358u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14335c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x14335cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x143360: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x143360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x143364: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x143364u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143368: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x143368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x14336c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x14336cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x143370: 0xc04e866  jal         func_13A198
    ctx->pc = 0x143370u;
    SET_GPR_U32(ctx, 31, 0x143378u);
    ctx->pc = 0x143374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143370u;
    // 0x143374: 0x9225046c  lbu         $a1, 0x46C($s1) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13A198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A198u, 0x143370u, 0x143378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143378u;
label_143378:
    // 0x143378: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x143378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x14337c: 0x1043003f  beq         $v0, $v1, . + 4 + (0x3F << 2)
    ctx->pc = 0x14337Cu;
    {
        const bool branch_taken_0x14337c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x143380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14337Cu;
        // 0x143380: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14337c) {
            ctx->pc = 0x14347Cu;
            goto label_14347c;
        }
    }
    ctx->pc = 0x143384u;
    // 0x143384: 0x9225046c  lbu         $a1, 0x46C($s1)
    ctx->pc = 0x143384u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
    // 0x143388: 0xc04d8d6  jal         func_136358
    ctx->pc = 0x143388u;
    SET_GPR_U32(ctx, 31, 0x143390u);
    ctx->pc = 0x14338Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143388u;
    // 0x14338c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136358u, 0x143388u, 0x143390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143390u;
label_143390:
    // 0x143390: 0x9225046c  lbu         $a1, 0x46C($s1)
    ctx->pc = 0x143390u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
    // 0x143394: 0xc04d8e2  jal         func_136388
    ctx->pc = 0x143394u;
    SET_GPR_U32(ctx, 31, 0x14339Cu);
    ctx->pc = 0x143398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143394u;
    // 0x143398: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136388u, 0x143394u, 0x14339Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14339Cu;
label_14339c:
    // 0x14339c: 0x9225046c  lbu         $a1, 0x46C($s1)
    ctx->pc = 0x14339cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
    // 0x1433a0: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x1433a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1433a4: 0xc04e860  jal         func_13A180
    ctx->pc = 0x1433A4u;
    SET_GPR_U32(ctx, 31, 0x1433ACu);
    ctx->pc = 0x1433A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1433A4u;
    // 0x1433a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13A180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A180u, 0x1433A4u, 0x1433ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1433ACu;
label_1433ac:
    // 0x1433ac: 0xc04eb10  jal         func_13AC40
    ctx->pc = 0x1433ACu;
    SET_GPR_U32(ctx, 31, 0x1433B4u);
    ctx->pc = 0x1433B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1433ACu;
    // 0x1433b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13AC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13AC40u, 0x1433ACu, 0x1433B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1433B4u;
label_1433b4:
    // 0x1433b4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1433b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1433b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1433b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1433bc: 0xc04da9c  jal         func_136A70
    ctx->pc = 0x1433BCu;
    SET_GPR_U32(ctx, 31, 0x1433C4u);
    ctx->pc = 0x1433C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1433BCu;
    // 0x1433c0: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136A70u, 0x1433BCu, 0x1433C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1433C4u;
label_1433c4:
    // 0x1433c4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1433c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1433c8: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x1433c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1433cc: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1433ccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1433d0: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x1433d0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1433d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1433d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1433d8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1433d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1433dc: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x1433dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1433e0: 0xc04daca  jal         func_136B28
    ctx->pc = 0x1433E0u;
    SET_GPR_U32(ctx, 31, 0x1433E8u);
    ctx->pc = 0x1433E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1433E0u;
    // 0x1433e4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136B28u, 0x1433E0u, 0x1433E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1433E8u;
label_1433e8:
    // 0x1433e8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1433e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1433ec: 0xc046030  jal         func_1180C0
    ctx->pc = 0x1433ECu;
    SET_GPR_U32(ctx, 31, 0x1433F4u);
    ctx->pc = 0x1433F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1433ECu;
    // 0x1433f0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1180C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1180C0u, 0x1433ECu, 0x1433F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1433F4u;
label_1433f4:
    // 0x1433f4: 0x8e220b18  lw          $v0, 0xB18($s1)
    ctx->pc = 0x1433f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2840)));
    // 0x1433f8: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1433F8u;
    {
        const bool branch_taken_0x1433f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1433f8) {
            ctx->pc = 0x1433FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1433F8u;
            // 0x1433fc: 0x9225046c  lbu         $a1, 0x46C($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14341Cu;
            goto label_14341c;
        }
    }
    ctx->pc = 0x143400u;
    // 0x143400: 0x8e250b14  lw          $a1, 0xB14($s1)
    ctx->pc = 0x143400u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2836)));
    // 0x143404: 0xc045fea  jal         func_117FA8
    ctx->pc = 0x143404u;
    SET_GPR_U32(ctx, 31, 0x14340Cu);
    ctx->pc = 0x143408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143404u;
    // 0x143408: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117FA8u, 0x143404u, 0x14340Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14340Cu;
label_14340c:
    // 0x14340c: 0xc62c0b1c  lwc1        $f12, 0xB1C($s1)
    ctx->pc = 0x14340cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2844)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x143410: 0xc046290  jal         func_118A40
    ctx->pc = 0x143410u;
    SET_GPR_U32(ctx, 31, 0x143418u);
    ctx->pc = 0x143414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143410u;
    // 0x143414: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118A40u, 0x143410u, 0x143418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143418u;
label_143418:
    // 0x143418: 0x9225046c  lbu         $a1, 0x46C($s1)
    ctx->pc = 0x143418u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
label_14341c:
    // 0x14341c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14341cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143420: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x143420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x143424: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x143424u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x143428: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x143428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14342c: 0xc04d8f8  jal         func_1363E0
    ctx->pc = 0x14342Cu;
    SET_GPR_U32(ctx, 31, 0x143434u);
    ctx->pc = 0x143430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14342Cu;
    // 0x143430: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1363E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1363E0u, 0x14342Cu, 0x143434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143434u;
label_143434:
    // 0x143434: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x143434u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143438: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x143438u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14343c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14343cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143440: 0xc04dae2  jal         func_136B88
    ctx->pc = 0x143440u;
    SET_GPR_U32(ctx, 31, 0x143448u);
    ctx->pc = 0x143444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143440u;
    // 0x143444: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136B88u, 0x143440u, 0x143448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143448u;
label_143448:
    // 0x143448: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x143448u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x14344c: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x14344cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x143450: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x143450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x143454: 0x8e230b18  lw          $v1, 0xB18($s1)
    ctx->pc = 0x143454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2840)));
    // 0x143458: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x143458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x14345c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x14345Cu;
    {
        const bool branch_taken_0x14345c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x143460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14345Cu;
        // 0x143460: 0x8c44020c  lw          $a0, 0x20C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14345c) {
            ctx->pc = 0x143474u;
            goto label_143474;
        }
    }
    ctx->pc = 0x143464u;
    // 0x143464: 0xc043c56  jal         func_10F158
    ctx->pc = 0x143464u;
    SET_GPR_U32(ctx, 31, 0x14346Cu);
    ctx->pc = 0x143468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143464u;
    // 0x143468: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F158u, 0x143464u, 0x14346Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14346Cu;
label_14346c:
    // 0x14346c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x14346Cu;
    {
        const bool branch_taken_0x14346c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x143470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14346Cu;
        // 0x143470: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14346c) {
            ctx->pc = 0x143480u;
            goto label_143480;
        }
    }
    ctx->pc = 0x143474u;
label_143474:
    // 0x143474: 0xc043c56  jal         func_10F158
    ctx->pc = 0x143474u;
    SET_GPR_U32(ctx, 31, 0x14347Cu);
    ctx->pc = 0x143478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143474u;
    // 0x143478: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F158u, 0x143474u, 0x14347Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14347Cu;
label_14347c:
    // 0x14347c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x14347cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_143480:
    // 0x143480: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x143480u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x143484: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x143484u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x143488: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x143488u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14348c: 0x3e00008  jr          $ra
    ctx->pc = 0x14348Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x143490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14348Cu;
        // 0x143490: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14348Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x143494u;
    // 0x143494: 0x0  nop
    ctx->pc = 0x143494u;
    // NOP
    ctx->pc = 0x143498u;
}
