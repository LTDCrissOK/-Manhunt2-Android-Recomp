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

// Function: sub_001FA440
// Address: 0x1fa440 - 0x1fa5d8
void sub_001FA440_0x1fa440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FA440_0x1fa440");
#endif

    switch (ctx->pc) {
        case 0x1fa4a8u: goto label_1fa4a8;
        case 0x1fa524u: goto label_1fa524;
        case 0x1fa534u: goto label_1fa534;
        case 0x1fa5a4u: goto label_1fa5a4;
        default: break;
    }

    ctx->pc = 0x1fa440u;

    // 0x1fa440: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1fa440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1fa444: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1fa444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1fa448: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fa448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1fa44c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1fa44cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa450: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1fa450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1fa454: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1fa454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1fa458: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1fa458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1fa45c: 0x92430500  lbu         $v1, 0x500($s2)
    ctx->pc = 0x1fa45cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1280)));
    // 0x1fa460: 0x2c620014  sltiu       $v0, $v1, 0x14
    ctx->pc = 0x1fa460u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
    // 0x1fa464: 0x10400055  beqz        $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x1FA464u;
    {
        const bool branch_taken_0x1fa464 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA464u;
        // 0x1fa468: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa464) {
            ctx->pc = 0x1FA5BCu;
            goto label_1fa5bc;
        }
    }
    ctx->pc = 0x1FA46Cu;
    // 0x1fa46c: 0x92420501  lbu         $v0, 0x501($s2)
    ctx->pc = 0x1fa46cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1281)));
    // 0x1fa470: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1fa470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1fa474: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x1fa474u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1fa478: 0x2e030014  sltiu       $v1, $s0, 0x14
    ctx->pc = 0x1fa478u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
    // 0x1fa47c: 0x14600025  bnez        $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x1FA47Cu;
    {
        const bool branch_taken_0x1fa47c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FA480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA47Cu;
        // 0x1fa480: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa47c) {
            ctx->pc = 0x1FA514u;
            goto label_1fa514;
        }
    }
    ctx->pc = 0x1FA484u;
    // 0x1fa484: 0x92440500  lbu         $a0, 0x500($s2)
    ctx->pc = 0x1fa484u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1280)));
    // 0x1fa488: 0x3c014974  lui         $at, 0x4974
    ctx->pc = 0x1fa488u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18804 << 16));
    // 0x1fa48c: 0x342123fe  ori         $at, $at, 0x23FE
    ctx->pc = 0x1fa48cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)9214);
    // 0x1fa490: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1fa490u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1fa494: 0x2c820014  sltiu       $v0, $a0, 0x14
    ctx->pc = 0x1fa494u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
    // 0x1fa498: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1FA498u;
    {
        const bool branch_taken_0x1fa498 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA498u;
        // 0x1fa49c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa498) {
            ctx->pc = 0x1FA4DCu;
            goto label_1fa4dc;
        }
    }
    ctx->pc = 0x1FA4A0u;
    // 0x1fa4a0: 0x41180  sll         $v0, $a0, 6
    ctx->pc = 0x1fa4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x1fa4a4: 0x0  nop
    ctx->pc = 0x1fa4a4u;
    // NOP
label_1fa4a8:
    // 0x1fa4a8: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1fa4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1fa4ac: 0xc4400034  lwc1        $f0, 0x34($v0)
    ctx->pc = 0x1fa4acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fa4b0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1fa4b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1fa4b4: 0x0  nop
    ctx->pc = 0x1fa4b4u;
    // NOP
    // 0x1fa4b8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1FA4B8u;
    {
        const bool branch_taken_0x1fa4b8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1FA4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA4B8u;
        // 0x1fa4bc: 0x41600  sll         $v0, $a0, 24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa4b8) {
            ctx->pc = 0x1FA4C8u;
            goto label_1fa4c8;
        }
    }
    ctx->pc = 0x1FA4C0u;
    // 0x1fa4c0: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x1fa4c0u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x1fa4c4: 0x22e03  sra         $a1, $v0, 24
    ctx->pc = 0x1fa4c4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 24));
label_1fa4c8:
    // 0x1fa4c8: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x1fa4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1fa4cc: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x1fa4ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1fa4d0: 0x2c830014  sltiu       $v1, $a0, 0x14
    ctx->pc = 0x1fa4d0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
    // 0x1fa4d4: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x1FA4D4u;
    {
        const bool branch_taken_0x1fa4d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FA4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA4D4u;
        // 0x1fa4d8: 0x41180  sll         $v0, $a0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa4d4) {
            ctx->pc = 0x1FA4A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fa4a8;
        }
    }
    ctx->pc = 0x1FA4DCu;
label_1fa4dc:
    // 0x1fa4dc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1fa4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1fa4e0: 0x14a20003  bne         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FA4E0u;
    {
        const bool branch_taken_0x1fa4e0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1FA4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA4E0u;
        // 0x1fa4e4: 0x51180  sll         $v0, $a1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa4e0) {
            ctx->pc = 0x1FA4F0u;
            goto label_1fa4f0;
        }
    }
    ctx->pc = 0x1FA4E8u;
    // 0x1fa4e8: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x1FA4E8u;
    {
        const bool branch_taken_0x1fa4e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA4E8u;
        // 0x1fa4ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa4e8) {
            ctx->pc = 0x1FA5BCu;
            goto label_1fa5bc;
        }
    }
    ctx->pc = 0x1FA4F0u;
label_1fa4f0:
    // 0x1fa4f0: 0xc6410544  lwc1        $f1, 0x544($s2)
    ctx->pc = 0x1fa4f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fa4f4: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1fa4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1fa4f8: 0xc4400034  lwc1        $f0, 0x34($v0)
    ctx->pc = 0x1fa4f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fa4fc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1fa4fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1fa500: 0x0  nop
    ctx->pc = 0x1fa500u;
    // NOP
    // 0x1fa504: 0x4501002d  bc1t        . + 4 + (0x2D << 2)
    ctx->pc = 0x1FA504u;
    {
        const bool branch_taken_0x1fa504 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1FA508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA504u;
        // 0x1fa508: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa504) {
            ctx->pc = 0x1FA5BCu;
            goto label_1fa5bc;
        }
    }
    ctx->pc = 0x1FA50Cu;
    // 0x1fa50c: 0x30b000ff  andi        $s0, $a1, 0xFF
    ctx->pc = 0x1fa50cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1fa510: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1fa510u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fa514:
    // 0x1fa514: 0x26510510  addiu       $s1, $s2, 0x510
    ctx->pc = 0x1fa514u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 1296));
    // 0x1fa518: 0x108180  sll         $s0, $s0, 6
    ctx->pc = 0x1fa518u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x1fa51c: 0xc07e88a  jal         func_1FA228
    ctx->pc = 0x1FA51Cu;
    SET_GPR_U32(ctx, 31, 0x1FA524u);
    ctx->pc = 0x1FA520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA51Cu;
    // 0x1fa520: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA228u, 0x1FA51Cu, 0x1FA524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA524u;
label_1fa524:
    // 0x1fa524: 0x56600004  bnel        $s3, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FA524u;
    {
        const bool branch_taken_0x1fa524 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fa524) {
            ctx->pc = 0x1FA528u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FA524u;
            // 0x1fa528: 0x92430510  lbu         $v1, 0x510($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1296)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FA538u;
            goto label_1fa538;
        }
    }
    ctx->pc = 0x1FA52Cu;
    // 0x1fa52c: 0xc07e8ac  jal         func_1FA2B0
    ctx->pc = 0x1FA52Cu;
    SET_GPR_U32(ctx, 31, 0x1FA534u);
    ctx->pc = 0x1FA530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA52Cu;
    // 0x1fa530: 0x2502021  addu        $a0, $s2, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA2B0u, 0x1FA52Cu, 0x1FA534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA534u;
label_1fa534:
    // 0x1fa534: 0x92430510  lbu         $v1, 0x510($s2)
    ctx->pc = 0x1fa534u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1296)));
label_1fa538:
    // 0x1fa538: 0x2122821  addu        $a1, $s0, $s2
    ctx->pc = 0x1fa538u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x1fa53c: 0x26440530  addiu       $a0, $s2, 0x530
    ctx->pc = 0x1fa53cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1328));
    // 0x1fa540: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x1fa540u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1fa544: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1fa544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1fa548: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x1fa548u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x1fa54c: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1fa54cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1fa550: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1fa550u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x1fa554: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1fa554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1fa558: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x1fa558u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
    // 0x1fa55c: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x1fa55cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1fa560: 0xaca30010  sw          $v1, 0x10($a1)
    ctx->pc = 0x1fa560u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 3));
    // 0x1fa564: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x1fa564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1fa568: 0xaca20014  sw          $v0, 0x14($a1)
    ctx->pc = 0x1fa568u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 2));
    // 0x1fa56c: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x1fa56cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fa570: 0xf8a10020  sqc2        $vf1, 0x20($a1)
    ctx->pc = 0x1fa570u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1fa574: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x1fa574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x1fa578: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1fa578u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa57c: 0xaca20030  sw          $v0, 0x30($a1)
    ctx->pc = 0x1fa57cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 2));
    // 0x1fa580: 0xc6200034  lwc1        $f0, 0x34($s1)
    ctx->pc = 0x1fa580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fa584: 0xe4a00034  swc1        $f0, 0x34($a1)
    ctx->pc = 0x1fa584u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 52), bits); }
    // 0x1fa588: 0x92220038  lbu         $v0, 0x38($s1)
    ctx->pc = 0x1fa588u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x1fa58c: 0xa0a20038  sb          $v0, 0x38($a1)
    ctx->pc = 0x1fa58cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 56), (uint8_t)GPR_U32(ctx, 2));
    // 0x1fa590: 0x92230039  lbu         $v1, 0x39($s1)
    ctx->pc = 0x1fa590u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 57)));
    // 0x1fa594: 0xa0a30039  sb          $v1, 0x39($a1)
    ctx->pc = 0x1fa594u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 57), (uint8_t)GPR_U32(ctx, 3));
    // 0x1fa598: 0x9222003a  lbu         $v0, 0x3A($s1)
    ctx->pc = 0x1fa598u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 58)));
    // 0x1fa59c: 0xc07e890  jal         func_1FA240
    ctx->pc = 0x1FA59Cu;
    SET_GPR_U32(ctx, 31, 0x1FA5A4u);
    ctx->pc = 0x1FA5A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA59Cu;
    // 0x1fa5a0: 0xa0a2003a  sb          $v0, 0x3A($a1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 5), 58), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA240u, 0x1FA59Cu, 0x1FA5A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA5A4u;
label_1fa5a4:
    // 0x1fa5a4: 0x52600005  beql        $s3, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FA5A4u;
    {
        const bool branch_taken_0x1fa5a4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fa5a4) {
            ctx->pc = 0x1FA5A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FA5A4u;
            // 0x1fa5a8: 0x8e420524  lw          $v0, 0x524($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1316)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FA5BCu;
            goto label_1fa5bc;
        }
    }
    ctx->pc = 0x1FA5ACu;
    // 0x1fa5ac: 0x92420501  lbu         $v0, 0x501($s2)
    ctx->pc = 0x1fa5acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1281)));
    // 0x1fa5b0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1fa5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1fa5b4: 0xa2420501  sb          $v0, 0x501($s2)
    ctx->pc = 0x1fa5b4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1281), (uint8_t)GPR_U32(ctx, 2));
    // 0x1fa5b8: 0x8e420524  lw          $v0, 0x524($s2)
    ctx->pc = 0x1fa5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1316)));
label_1fa5bc:
    // 0x1fa5bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fa5bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fa5c0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1fa5c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fa5c4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1fa5c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fa5c8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1fa5c8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1fa5cc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1fa5ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fa5d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1FA5D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FA5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA5D0u;
        // 0x1fa5d4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FA5D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FA5D8u;
}
