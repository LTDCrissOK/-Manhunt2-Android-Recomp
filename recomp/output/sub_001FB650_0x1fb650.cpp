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

// Function: sub_001FB650
// Address: 0x1fb650 - 0x1fb7f0
void sub_001FB650_0x1fb650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FB650_0x1fb650");
#endif

    switch (ctx->pc) {
        case 0x1fb6b8u: goto label_1fb6b8;
        case 0x1fb734u: goto label_1fb734;
        case 0x1fb744u: goto label_1fb744;
        case 0x1fb764u: goto label_1fb764;
        case 0x1fb7b8u: goto label_1fb7b8;
        default: break;
    }

    ctx->pc = 0x1fb650u;

    // 0x1fb650: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1fb650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1fb654: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1fb654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1fb658: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fb658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1fb65c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1fb65cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb660: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1fb660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1fb664: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1fb664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1fb668: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1fb668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1fb66c: 0x92430280  lbu         $v1, 0x280($s2)
    ctx->pc = 0x1fb66cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 640)));
    // 0x1fb670: 0x2c62000a  sltiu       $v0, $v1, 0xA
    ctx->pc = 0x1fb670u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x1fb674: 0x10400056  beqz        $v0, . + 4 + (0x56 << 2)
    ctx->pc = 0x1FB674u;
    {
        const bool branch_taken_0x1fb674 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB674u;
        // 0x1fb678: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb674) {
            ctx->pc = 0x1FB7D0u;
            goto label_1fb7d0;
        }
    }
    ctx->pc = 0x1FB67Cu;
    // 0x1fb67c: 0x92420281  lbu         $v0, 0x281($s2)
    ctx->pc = 0x1fb67cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 641)));
    // 0x1fb680: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1fb680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1fb684: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x1fb684u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1fb688: 0x2e03000a  sltiu       $v1, $s0, 0xA
    ctx->pc = 0x1fb688u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x1fb68c: 0x14600025  bnez        $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x1FB68Cu;
    {
        const bool branch_taken_0x1fb68c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FB690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB68Cu;
        // 0x1fb690: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb68c) {
            ctx->pc = 0x1FB724u;
            goto label_1fb724;
        }
    }
    ctx->pc = 0x1FB694u;
    // 0x1fb694: 0x92440280  lbu         $a0, 0x280($s2)
    ctx->pc = 0x1fb694u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 640)));
    // 0x1fb698: 0x3c014974  lui         $at, 0x4974
    ctx->pc = 0x1fb698u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18804 << 16));
    // 0x1fb69c: 0x342123fe  ori         $at, $at, 0x23FE
    ctx->pc = 0x1fb69cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)9214);
    // 0x1fb6a0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1fb6a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1fb6a4: 0x2c82000a  sltiu       $v0, $a0, 0xA
    ctx->pc = 0x1fb6a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x1fb6a8: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1FB6A8u;
    {
        const bool branch_taken_0x1fb6a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB6A8u;
        // 0x1fb6ac: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb6a8) {
            ctx->pc = 0x1FB6ECu;
            goto label_1fb6ec;
        }
    }
    ctx->pc = 0x1FB6B0u;
    // 0x1fb6b0: 0x41180  sll         $v0, $a0, 6
    ctx->pc = 0x1fb6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x1fb6b4: 0x0  nop
    ctx->pc = 0x1fb6b4u;
    // NOP
label_1fb6b8:
    // 0x1fb6b8: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1fb6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1fb6bc: 0xc4400034  lwc1        $f0, 0x34($v0)
    ctx->pc = 0x1fb6bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fb6c0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1fb6c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1fb6c4: 0x0  nop
    ctx->pc = 0x1fb6c4u;
    // NOP
    // 0x1fb6c8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1FB6C8u;
    {
        const bool branch_taken_0x1fb6c8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1FB6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB6C8u;
        // 0x1fb6cc: 0x41600  sll         $v0, $a0, 24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb6c8) {
            ctx->pc = 0x1FB6D8u;
            goto label_1fb6d8;
        }
    }
    ctx->pc = 0x1FB6D0u;
    // 0x1fb6d0: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x1fb6d0u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x1fb6d4: 0x22e03  sra         $a1, $v0, 24
    ctx->pc = 0x1fb6d4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 24));
label_1fb6d8:
    // 0x1fb6d8: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x1fb6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1fb6dc: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x1fb6dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1fb6e0: 0x2c83000a  sltiu       $v1, $a0, 0xA
    ctx->pc = 0x1fb6e0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x1fb6e4: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x1FB6E4u;
    {
        const bool branch_taken_0x1fb6e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FB6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB6E4u;
        // 0x1fb6e8: 0x41180  sll         $v0, $a0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb6e4) {
            ctx->pc = 0x1FB6B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fb6b8;
        }
    }
    ctx->pc = 0x1FB6ECu;
label_1fb6ec:
    // 0x1fb6ec: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1fb6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1fb6f0: 0x14a20003  bne         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FB6F0u;
    {
        const bool branch_taken_0x1fb6f0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1FB6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB6F0u;
        // 0x1fb6f4: 0x51180  sll         $v0, $a1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb6f0) {
            ctx->pc = 0x1FB700u;
            goto label_1fb700;
        }
    }
    ctx->pc = 0x1FB6F8u;
    // 0x1fb6f8: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x1FB6F8u;
    {
        const bool branch_taken_0x1fb6f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB6F8u;
        // 0x1fb6fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb6f8) {
            ctx->pc = 0x1FB7D0u;
            goto label_1fb7d0;
        }
    }
    ctx->pc = 0x1FB700u;
label_1fb700:
    // 0x1fb700: 0xc64102c4  lwc1        $f1, 0x2C4($s2)
    ctx->pc = 0x1fb700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fb704: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1fb704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1fb708: 0xc4400034  lwc1        $f0, 0x34($v0)
    ctx->pc = 0x1fb708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fb70c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1fb70cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1fb710: 0x0  nop
    ctx->pc = 0x1fb710u;
    // NOP
    // 0x1fb714: 0x4501002e  bc1t        . + 4 + (0x2E << 2)
    ctx->pc = 0x1FB714u;
    {
        const bool branch_taken_0x1fb714 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1FB718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB714u;
        // 0x1fb718: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb714) {
            ctx->pc = 0x1FB7D0u;
            goto label_1fb7d0;
        }
    }
    ctx->pc = 0x1FB71Cu;
    // 0x1fb71c: 0x30b000ff  andi        $s0, $a1, 0xFF
    ctx->pc = 0x1fb71cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1fb720: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1fb720u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fb724:
    // 0x1fb724: 0x26510290  addiu       $s1, $s2, 0x290
    ctx->pc = 0x1fb724u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 656));
    // 0x1fb728: 0x108180  sll         $s0, $s0, 6
    ctx->pc = 0x1fb728u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x1fb72c: 0xc07ece4  jal         func_1FB390
    ctx->pc = 0x1FB72Cu;
    SET_GPR_U32(ctx, 31, 0x1FB734u);
    ctx->pc = 0x1FB730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB72Cu;
    // 0x1fb730: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB390u, 0x1FB72Cu, 0x1FB734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB734u;
label_1fb734:
    // 0x1fb734: 0x56600004  bnel        $s3, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FB734u;
    {
        const bool branch_taken_0x1fb734 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fb734) {
            ctx->pc = 0x1FB738u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FB734u;
            // 0x1fb738: 0x92430290  lbu         $v1, 0x290($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 656)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FB748u;
            goto label_1fb748;
        }
    }
    ctx->pc = 0x1FB73Cu;
    // 0x1fb73c: 0xc07ed06  jal         func_1FB418
    ctx->pc = 0x1FB73Cu;
    SET_GPR_U32(ctx, 31, 0x1FB744u);
    ctx->pc = 0x1FB740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB73Cu;
    // 0x1fb740: 0x2502021  addu        $a0, $s2, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB418u, 0x1FB73Cu, 0x1FB744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB744u;
label_1fb744:
    // 0x1fb744: 0x92430290  lbu         $v1, 0x290($s2)
    ctx->pc = 0x1fb744u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 656)));
label_1fb748:
    // 0x1fb748: 0x2128021  addu        $s0, $s0, $s2
    ctx->pc = 0x1fb748u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x1fb74c: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x1fb74cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x1fb750: 0x26450298  addiu       $a1, $s2, 0x298
    ctx->pc = 0x1fb750u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 664));
    // 0x1fb754: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x1fb754u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1fb758: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1fb758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1fb75c: 0xc0d745c  jal         func_35D170
    ctx->pc = 0x1FB75Cu;
    SET_GPR_U32(ctx, 31, 0x1FB764u);
    ctx->pc = 0x1FB760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB75Cu;
    // 0x1fb760: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D170u, 0x1FB75Cu, 0x1FB764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB764u;
label_1fb764:
    // 0x1fb764: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x1fb764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1fb768: 0x264402b0  addiu       $a0, $s2, 0x2B0
    ctx->pc = 0x1fb768u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 688));
    // 0x1fb76c: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x1fb76cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x1fb770: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x1fb770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1fb774: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x1fb774u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x1fb778: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x1fb778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x1fb77c: 0xae030018  sw          $v1, 0x18($s0)
    ctx->pc = 0x1fb77cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
    // 0x1fb780: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x1fb780u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fb784: 0xfa010020  sqc2        $vf1, 0x20($s0)
    ctx->pc = 0x1fb784u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1fb788: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x1fb788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x1fb78c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fb78cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb790: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x1fb790u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
    // 0x1fb794: 0xc6200034  lwc1        $f0, 0x34($s1)
    ctx->pc = 0x1fb794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fb798: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x1fb798u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x1fb79c: 0x92220038  lbu         $v0, 0x38($s1)
    ctx->pc = 0x1fb79cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x1fb7a0: 0xa2020038  sb          $v0, 0x38($s0)
    ctx->pc = 0x1fb7a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 56), (uint8_t)GPR_U32(ctx, 2));
    // 0x1fb7a4: 0x9623003a  lhu         $v1, 0x3A($s1)
    ctx->pc = 0x1fb7a4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 58)));
    // 0x1fb7a8: 0xa603003a  sh          $v1, 0x3A($s0)
    ctx->pc = 0x1fb7a8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 58), (uint16_t)GPR_U32(ctx, 3));
    // 0x1fb7ac: 0x9222003c  lbu         $v0, 0x3C($s1)
    ctx->pc = 0x1fb7acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x1fb7b0: 0xc07ecea  jal         func_1FB3A8
    ctx->pc = 0x1FB7B0u;
    SET_GPR_U32(ctx, 31, 0x1FB7B8u);
    ctx->pc = 0x1FB7B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB7B0u;
    // 0x1fb7b4: 0xa202003c  sb          $v0, 0x3C($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 60), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB3A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB3A8u, 0x1FB7B0u, 0x1FB7B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB7B8u;
label_1fb7b8:
    // 0x1fb7b8: 0x52600005  beql        $s3, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FB7B8u;
    {
        const bool branch_taken_0x1fb7b8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fb7b8) {
            ctx->pc = 0x1FB7BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FB7B8u;
            // 0x1fb7bc: 0x8e4202a8  lw          $v0, 0x2A8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 680)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FB7D0u;
            goto label_1fb7d0;
        }
    }
    ctx->pc = 0x1FB7C0u;
    // 0x1fb7c0: 0x92420281  lbu         $v0, 0x281($s2)
    ctx->pc = 0x1fb7c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 641)));
    // 0x1fb7c4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1fb7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1fb7c8: 0xa2420281  sb          $v0, 0x281($s2)
    ctx->pc = 0x1fb7c8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 641), (uint8_t)GPR_U32(ctx, 2));
    // 0x1fb7cc: 0x8e4202a8  lw          $v0, 0x2A8($s2)
    ctx->pc = 0x1fb7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 680)));
label_1fb7d0:
    // 0x1fb7d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fb7d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fb7d4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1fb7d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fb7d8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1fb7d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fb7dc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1fb7dcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1fb7e0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1fb7e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fb7e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1FB7E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FB7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB7E4u;
        // 0x1fb7e8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FB7E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FB7ECu;
    // 0x1fb7ec: 0x0  nop
    ctx->pc = 0x1fb7ecu;
    // NOP
    ctx->pc = 0x1fb7f0u;
}
