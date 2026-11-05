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

// Function: sub_00270400
// Address: 0x270400 - 0x2705f0
void sub_00270400_0x270400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00270400_0x270400");
#endif

    switch (ctx->pc) {
        case 0x27043cu: goto label_27043c;
        case 0x2704ccu: goto label_2704cc;
        case 0x2704f0u: goto label_2704f0;
        case 0x270550u: goto label_270550;
        case 0x270590u: goto label_270590;
        case 0x2705b8u: goto label_2705b8;
        default: break;
    }

    ctx->pc = 0x270400u;

    // 0x270400: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x270400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x270404: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x270404u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270408: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x270408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x27040c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x27040cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270410: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x270410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x270414: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x270414u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270418: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x270418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x27041c: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x27041cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270420: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x270420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x270424: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x270424u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x270428: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x270428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x27042c: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x27042cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x270430: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x270430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x270434: 0xc0b5dc4  jal         func_2D7710
    ctx->pc = 0x270434u;
    SET_GPR_U32(ctx, 31, 0x27043Cu);
    ctx->pc = 0x270438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270434u;
    // 0x270438: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7710u, 0x270434u, 0x27043Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27043Cu;
label_27043c:
    // 0x27043c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x27043cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x270440: 0x10600061  beqz        $v1, . + 4 + (0x61 << 2)
    ctx->pc = 0x270440u;
    {
        const bool branch_taken_0x270440 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x270444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270440u;
        // 0x270444: 0x3a0a02d  daddu       $s4, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270440) {
            ctx->pc = 0x2705C8u;
            goto label_2705c8;
        }
    }
    ctx->pc = 0x270448u;
    // 0x270448: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x270448u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x27044c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x27044cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x270450: 0xa3b00000  sb          $s0, 0x0($sp)
    ctx->pc = 0x270450u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 16));
    // 0x270454: 0x1082000b  beq         $a0, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x270454u;
    {
        const bool branch_taken_0x270454 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x270458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270454u;
        // 0x270458: 0xa3a30001  sb          $v1, 0x1($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270454) {
            ctx->pc = 0x270484u;
            goto label_270484;
        }
    }
    ctx->pc = 0x27045Cu;
    // 0x27045c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x27045Cu;
    {
        const bool branch_taken_0x27045c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x27045c) {
            ctx->pc = 0x270460u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27045Cu;
            // 0x270460: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x270478u;
            goto label_270478;
        }
    }
    ctx->pc = 0x270464u;
    // 0x270464: 0x83a20000  lb          $v0, 0x0($sp)
    ctx->pc = 0x270464u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x270468: 0x83a30001  lb          $v1, 0x1($sp)
    ctx->pc = 0x270468u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
    // 0x27046c: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x27046cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x270470: 0xa0830001  sb          $v1, 0x1($a0)
    ctx->pc = 0x270470u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x270474: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x270474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_270478:
    // 0x270478: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x270478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x27047c: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x27047Cu;
    {
        const bool branch_taken_0x27047c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x270480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27047Cu;
        // 0x270480: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27047c) {
            ctx->pc = 0x2705C8u;
            goto label_2705c8;
        }
    }
    ctx->pc = 0x270484u;
label_270484:
    // 0x270484: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x270484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x270488: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x270488u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27048c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27048cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x270490: 0x27a50014  addiu       $a1, $sp, 0x14
    ctx->pc = 0x270490u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x270494: 0x2431823  subu        $v1, $s2, $v1
    ctx->pc = 0x270494u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x270498: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x270498u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x27049c: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x27049cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x2704a0: 0x27a20018  addiu       $v0, $sp, 0x18
    ctx->pc = 0x2704a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x2704a4: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x2704a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x2704a8: 0xa3100b  movn        $v0, $a1, $v1
    ctx->pc = 0x2704a8u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x2704ac: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2704acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2704b0: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x2704b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2704b4: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2704B4u;
    {
        const bool branch_taken_0x2704b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2704b4) {
            ctx->pc = 0x2704B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2704B4u;
            // 0x2704b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2704D4u;
            goto label_2704d4;
        }
    }
    ctx->pc = 0x2704BCu;
    // 0x2704bc: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2704bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2704c0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2704c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2704c4: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x2704C4u;
    SET_GPR_U32(ctx, 31, 0x2704CCu);
    ctx->pc = 0x2704C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2704C4u;
    // 0x2704c8: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x2704C4u, 0x2704CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2704CCu;
label_2704cc:
    // 0x2704cc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2704CCu;
    {
        const bool branch_taken_0x2704cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2704D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2704CCu;
        // 0x2704d0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2704cc) {
            ctx->pc = 0x2704DCu;
            goto label_2704dc;
        }
    }
    ctx->pc = 0x2704D4u;
label_2704d4:
    // 0x2704d4: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2704d4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2704d8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2704d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2704dc:
    // 0x2704dc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2704dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2704e0: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x2704e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2704e4: 0x1072000b  beq         $v1, $s2, . + 4 + (0xB << 2)
    ctx->pc = 0x2704E4u;
    {
        const bool branch_taken_0x2704e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 18));
        ctx->pc = 0x2704E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2704E4u;
        // 0x2704e8: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2704e4) {
            ctx->pc = 0x270514u;
            goto label_270514;
        }
    }
    ctx->pc = 0x2704ECu;
    // 0x2704ec: 0x0  nop
    ctx->pc = 0x2704ecu;
    // NOP
label_2704f0:
    // 0x2704f0: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2704F0u;
    {
        const bool branch_taken_0x2704f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2704f0) {
            ctx->pc = 0x2704F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2704F0u;
            // 0x2704f4: 0x24630002  addiu       $v1, $v1, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27050Cu;
            goto label_27050c;
        }
    }
    ctx->pc = 0x2704F8u;
    // 0x2704f8: 0x80670000  lb          $a3, 0x0($v1)
    ctx->pc = 0x2704f8u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2704fc: 0x80640001  lb          $a0, 0x1($v1)
    ctx->pc = 0x2704fcu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x270500: 0xa0470000  sb          $a3, 0x0($v0)
    ctx->pc = 0x270500u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x270504: 0xa0440001  sb          $a0, 0x1($v0)
    ctx->pc = 0x270504u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x270508: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x270508u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
label_27050c:
    // 0x27050c: 0x1472fff8  bne         $v1, $s2, . + 4 + (-0x8 << 2)
    ctx->pc = 0x27050Cu;
    {
        const bool branch_taken_0x27050c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 18));
        ctx->pc = 0x270510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27050Cu;
        // 0x270510: 0x24420002  addiu       $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27050c) {
            ctx->pc = 0x2704F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2704f0;
        }
    }
    ctx->pc = 0x270514u;
label_270514:
    // 0x270514: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x270514u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270518: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x270518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x27051c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27051cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x270520: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x270520u;
    {
        const bool branch_taken_0x270520 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x270520) {
            ctx->pc = 0x270548u;
            goto label_270548;
        }
    }
    ctx->pc = 0x270528u;
    // 0x270528: 0x52000013  beql        $s0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x270528u;
    {
        const bool branch_taken_0x270528 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x270528) {
            ctx->pc = 0x27052Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x270528u;
            // 0x27052c: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x270578u;
            goto label_270578;
        }
    }
    ctx->pc = 0x270530u;
    // 0x270530: 0x82870000  lb          $a3, 0x0($s4)
    ctx->pc = 0x270530u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x270534: 0x82820001  lb          $v0, 0x1($s4)
    ctx->pc = 0x270534u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 1)));
    // 0x270538: 0xa2070000  sb          $a3, 0x0($s0)
    ctx->pc = 0x270538u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x27053c: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x27053cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x270540: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x270540u;
    {
        const bool branch_taken_0x270540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x270544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270540u;
        // 0x270544: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270540) {
            ctx->pc = 0x270578u;
            goto label_270578;
        }
    }
    ctx->pc = 0x270548u;
label_270548:
    // 0x270548: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x270548u;
    {
        const bool branch_taken_0x270548 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x27054Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270548u;
        // 0x27054c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270548) {
            ctx->pc = 0x270570u;
            goto label_270570;
        }
    }
    ctx->pc = 0x270550u;
label_270550:
    // 0x270550: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x270550u;
    {
        const bool branch_taken_0x270550 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x270554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270550u;
        // 0x270554: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270550) {
            ctx->pc = 0x270568u;
            goto label_270568;
        }
    }
    ctx->pc = 0x270558u;
    // 0x270558: 0x82850000  lb          $a1, 0x0($s4)
    ctx->pc = 0x270558u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x27055c: 0x82860001  lb          $a2, 0x1($s4)
    ctx->pc = 0x27055cu;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 1)));
    // 0x270560: 0xa0450000  sb          $a1, 0x0($v0)
    ctx->pc = 0x270560u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x270564: 0xa0460001  sb          $a2, 0x1($v0)
    ctx->pc = 0x270564u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 6));
label_270568:
    // 0x270568: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x270568u;
    {
        const bool branch_taken_0x270568 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x27056Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270568u;
        // 0x27056c: 0x24420002  addiu       $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270568) {
            ctx->pc = 0x270550u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_270550;
        }
    }
    ctx->pc = 0x270570u;
label_270570:
    // 0x270570: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x270570u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270574: 0x0  nop
    ctx->pc = 0x270574u;
    // NOP
label_270578:
    // 0x270578: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x270578u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x27057c: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x27057cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x270580: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x270580u;
    {
        const bool branch_taken_0x270580 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x270584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270580u;
        // 0x270584: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270580) {
            ctx->pc = 0x2705A8u;
            goto label_2705a8;
        }
    }
    ctx->pc = 0x270588u;
    // 0x270588: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x270588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x27058c: 0x0  nop
    ctx->pc = 0x27058cu;
    // NOP
label_270590:
    // 0x270590: 0x0  nop
    ctx->pc = 0x270590u;
    // NOP
    // 0x270594: 0x0  nop
    ctx->pc = 0x270594u;
    // NOP
    // 0x270598: 0x0  nop
    ctx->pc = 0x270598u;
    // NOP
    // 0x27059c: 0x0  nop
    ctx->pc = 0x27059cu;
    // NOP
    // 0x2705a0: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2705A0u;
    {
        const bool branch_taken_0x2705a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2705A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2705A0u;
        // 0x2705a4: 0x24420002  addiu       $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2705a0) {
            ctx->pc = 0x270590u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_270590;
        }
    }
    ctx->pc = 0x2705A8u;
label_2705a8:
    // 0x2705a8: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2705A8u;
    {
        const bool branch_taken_0x2705a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2705ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2705A8u;
        // 0x2705ac: 0x2b31021  addu        $v0, $s5, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2705a8) {
            ctx->pc = 0x2705BCu;
            goto label_2705bc;
        }
    }
    ctx->pc = 0x2705B0u;
    // 0x2705b0: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x2705B0u;
    SET_GPR_U32(ctx, 31, 0x2705B8u);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x2705B0u, 0x2705B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2705B8u;
label_2705b8:
    // 0x2705b8: 0x2b31021  addu        $v0, $s5, $s3
    ctx->pc = 0x2705b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
label_2705bc:
    // 0x2705bc: 0xae330000  sw          $s3, 0x0($s1)
    ctx->pc = 0x2705bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 19));
    // 0x2705c0: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x2705c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x2705c4: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x2705c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
label_2705c8:
    // 0x2705c8: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2705c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2705cc: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x2705ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2705d0: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2705d0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2705d4: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x2705d4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2705d8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2705d8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2705dc: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x2705dcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2705e0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2705e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2705e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2705E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2705E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2705E4u;
        // 0x2705e8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2705E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2705ECu;
    // 0x2705ec: 0x0  nop
    ctx->pc = 0x2705ecu;
    // NOP
    ctx->pc = 0x2705f0u;
}
