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

// Function: sub_00159338
// Address: 0x159338 - 0x1594b0
void sub_00159338_0x159338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00159338_0x159338");
#endif

    switch (ctx->pc) {
        case 0x159378u: goto label_159378;
        case 0x159398u: goto label_159398;
        case 0x1593a8u: goto label_1593a8;
        case 0x1593b4u: goto label_1593b4;
        case 0x1593d0u: goto label_1593d0;
        case 0x159418u: goto label_159418;
        case 0x159428u: goto label_159428;
        case 0x159438u: goto label_159438;
        case 0x159448u: goto label_159448;
        default: break;
    }

    ctx->pc = 0x159338u;

    // 0x159338: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x159338u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x15933c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x15933cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x159340: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x159340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x159344: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x159344u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159348: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x159348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x15934c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x15934cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x159350: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x159350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x159354: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x159354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x159358: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x159358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x15935c: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x15935cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x159360: 0x92420009  lbu         $v0, 0x9($s2)
    ctx->pc = 0x159360u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 9)));
    // 0x159364: 0x10400047  beqz        $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x159364u;
    {
        const bool branch_taken_0x159364 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x159368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159364u;
        // 0x159368: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159364) {
            ctx->pc = 0x159484u;
            goto label_159484;
        }
    }
    ctx->pc = 0x15936Cu;
    // 0x15936c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x15936cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159370: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x159370u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x159374: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x159374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_159378:
    // 0x159378: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x159378u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x15937c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15937cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x159380: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x159380u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x159384: 0x1280003b  beqz        $s4, . + 4 + (0x3B << 2)
    ctx->pc = 0x159384u;
    {
        const bool branch_taken_0x159384 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x159388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159384u;
        // 0x159388: 0x26620001  addiu       $v0, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159384) {
            ctx->pc = 0x159474u;
            goto label_159474;
        }
    }
    ctx->pc = 0x15938Cu;
    // 0x15938c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15938cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159390: 0xc04f1ae  jal         func_13C6B8
    ctx->pc = 0x159390u;
    SET_GPR_U32(ctx, 31, 0x159398u);
    ctx->pc = 0x159394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159390u;
    // 0x159394: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C6B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C6B8u, 0x159390u, 0x159398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159398u;
label_159398:
    // 0x159398: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x159398u;
    {
        const bool branch_taken_0x159398 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15939Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159398u;
        // 0x15939c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159398) {
            ctx->pc = 0x1593A8u;
            goto label_1593a8;
        }
    }
    ctx->pc = 0x1593A0u;
    // 0x1593a0: 0xc04f452  jal         func_13D148
    ctx->pc = 0x1593A0u;
    SET_GPR_U32(ctx, 31, 0x1593A8u);
    ctx->pc = 0x1593A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1593A0u;
    // 0x1593a4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13D148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13D148u, 0x1593A0u, 0x1593A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1593A8u;
label_1593a8:
    // 0x1593a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1593a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1593ac: 0xc04f112  jal         func_13C448
    ctx->pc = 0x1593ACu;
    SET_GPR_U32(ctx, 31, 0x1593B4u);
    ctx->pc = 0x1593B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1593ACu;
    // 0x1593b0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C448u, 0x1593ACu, 0x1593B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1593B4u;
label_1593b4:
    // 0x1593b4: 0x1456002b  bne         $v0, $s6, . + 4 + (0x2B << 2)
    ctx->pc = 0x1593B4u;
    {
        const bool branch_taken_0x1593b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        ctx->pc = 0x1593B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1593B4u;
        // 0x1593b8: 0x26150001  addiu       $s5, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1593b4) {
            ctx->pc = 0x159464u;
            goto label_159464;
        }
    }
    ctx->pc = 0x1593BCu;
    // 0x1593bc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1593bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1593c0: 0x26460228  addiu       $a2, $s2, 0x228
    ctx->pc = 0x1593c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 552));
    // 0x1593c4: 0x2645022c  addiu       $a1, $s2, 0x22C
    ctx->pc = 0x1593c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 556));
    // 0x1593c8: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1593c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1593cc: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x1593ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_1593d0:
    // 0x1593d0: 0xc31021  addu        $v0, $a2, $v1
    ctx->pc = 0x1593d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1593d4: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x1593d4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1593d8: 0x1220001d  beqz        $s1, . + 4 + (0x1D << 2)
    ctx->pc = 0x1593D8u;
    {
        const bool branch_taken_0x1593d8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1593DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1593D8u;
        // 0x1593dc: 0xa31021  addu        $v0, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1593d8) {
            ctx->pc = 0x159450u;
            goto label_159450;
        }
    }
    ctx->pc = 0x1593E0u;
    // 0x1593e0: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1593e0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1593e4: 0x12070008  beq         $s0, $a3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1593E4u;
    {
        const bool branch_taken_0x1593e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 7));
        ctx->pc = 0x1593E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1593E4u;
        // 0x1593e8: 0x2a020002  slti        $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1593e4) {
            ctx->pc = 0x159408u;
            goto label_159408;
        }
    }
    ctx->pc = 0x1593ECu;
    // 0x1593ec: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1593ECu;
    {
        const bool branch_taken_0x1593ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1593F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1593ECu;
        // 0x1593f0: 0x24820001  addiu       $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1593ec) {
            ctx->pc = 0x159454u;
            goto label_159454;
        }
    }
    ctx->pc = 0x1593F4u;
    // 0x1593f4: 0x2a020006  slti        $v0, $s0, 0x6
    ctx->pc = 0x1593f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x1593f8: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1593F8u;
    {
        const bool branch_taken_0x1593f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1593FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1593F8u;
        // 0x1593fc: 0x2a020004  slti        $v0, $s0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1593f8) {
            ctx->pc = 0x159450u;
            goto label_159450;
        }
    }
    ctx->pc = 0x159400u;
    // 0x159400: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x159400u;
    {
        const bool branch_taken_0x159400 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x159404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159400u;
        // 0x159404: 0x24820001  addiu       $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159400) {
            ctx->pc = 0x159454u;
            goto label_159454;
        }
    }
    ctx->pc = 0x159408u;
label_159408:
    // 0x159408: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x159408u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15940c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15940cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159410: 0xc04d6fe  jal         func_135BF8
    ctx->pc = 0x159410u;
    SET_GPR_U32(ctx, 31, 0x159418u);
    ctx->pc = 0x159414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159410u;
    // 0x159414: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135BF8u, 0x159410u, 0x159418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159418u;
label_159418:
    // 0x159418: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x159418u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15941c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x15941cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159420: 0xc04f10c  jal         func_13C430
    ctx->pc = 0x159420u;
    SET_GPR_U32(ctx, 31, 0x159428u);
    ctx->pc = 0x159424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159420u;
    // 0x159424: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C430u, 0x159420u, 0x159428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159428u;
label_159428:
    // 0x159428: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x159428u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15942c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15942cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159430: 0xc04f124  jal         func_13C490
    ctx->pc = 0x159430u;
    SET_GPR_U32(ctx, 31, 0x159438u);
    ctx->pc = 0x159434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159430u;
    // 0x159434: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C490u, 0x159430u, 0x159438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159438u;
label_159438:
    // 0x159438: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x159438u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15943c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15943cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159440: 0xc04f118  jal         func_13C460
    ctx->pc = 0x159440u;
    SET_GPR_U32(ctx, 31, 0x159448u);
    ctx->pc = 0x159444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159440u;
    // 0x159444: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C460u, 0x159440u, 0x159448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159448u;
label_159448:
    // 0x159448: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x159448u;
    {
        const bool branch_taken_0x159448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15944Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159448u;
        // 0x15944c: 0x92420009  lbu         $v0, 0x9($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x159448) {
            ctx->pc = 0x159468u;
            goto label_159468;
        }
    }
    ctx->pc = 0x159450u;
label_159450:
    // 0x159450: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x159450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_159454:
    // 0x159454: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x159454u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x159458: 0x2c830010  sltiu       $v1, $a0, 0x10
    ctx->pc = 0x159458u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x15945c: 0x1460ffdc  bnez        $v1, . + 4 + (-0x24 << 2)
    ctx->pc = 0x15945Cu;
    {
        const bool branch_taken_0x15945c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x159460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15945Cu;
        // 0x159460: 0x418c0  sll         $v1, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15945c) {
            ctx->pc = 0x1593D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1593d0;
        }
    }
    ctx->pc = 0x159464u;
label_159464:
    // 0x159464: 0x92420009  lbu         $v0, 0x9($s2)
    ctx->pc = 0x159464u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 9)));
label_159468:
    // 0x159468: 0x32b000ff  andi        $s0, $s5, 0xFF
    ctx->pc = 0x159468u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
    // 0x15946c: 0x12020005  beq         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x15946Cu;
    {
        const bool branch_taken_0x15946c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x159470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15946Cu;
        // 0x159470: 0x26620001  addiu       $v0, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15946c) {
            ctx->pc = 0x159484u;
            goto label_159484;
        }
    }
    ctx->pc = 0x159474u;
label_159474:
    // 0x159474: 0x305300ff  andi        $s3, $v0, 0xFF
    ctx->pc = 0x159474u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x159478: 0x2e630010  sltiu       $v1, $s3, 0x10
    ctx->pc = 0x159478u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x15947c: 0x5460ffbe  bnel        $v1, $zero, . + 4 + (-0x42 << 2)
    ctx->pc = 0x15947Cu;
    {
        const bool branch_taken_0x15947c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15947c) {
            ctx->pc = 0x159480u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15947Cu;
            // 0x159480: 0x8e430004  lw          $v1, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x159378u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_159378;
        }
    }
    ctx->pc = 0x159484u;
label_159484:
    // 0x159484: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x159484u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x159488: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x159488u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x15948c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x15948cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x159490: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x159490u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x159494: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x159494u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x159498: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x159498u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x15949c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x15949cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1594a0: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1594a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1594a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1594A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1594A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1594A4u;
        // 0x1594a8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1594A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1594ACu;
    // 0x1594ac: 0x0  nop
    ctx->pc = 0x1594acu;
    // NOP
    ctx->pc = 0x1594b0u;
}
