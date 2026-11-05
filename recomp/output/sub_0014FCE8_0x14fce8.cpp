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

// Function: sub_0014FCE8
// Address: 0x14fce8 - 0x14ff38
void sub_0014FCE8_0x14fce8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014FCE8_0x14fce8");
#endif

    switch (ctx->pc) {
        case 0x14fd44u: goto label_14fd44;
        case 0x14fd58u: goto label_14fd58;
        case 0x14fd78u: goto label_14fd78;
        case 0x14fd8cu: goto label_14fd8c;
        case 0x14fdacu: goto label_14fdac;
        case 0x14fdc0u: goto label_14fdc0;
        case 0x14fdccu: goto label_14fdcc;
        case 0x14fddcu: goto label_14fddc;
        case 0x14fdecu: goto label_14fdec;
        case 0x14fe00u: goto label_14fe00;
        case 0x14fe0cu: goto label_14fe0c;
        case 0x14fe1cu: goto label_14fe1c;
        case 0x14fe28u: goto label_14fe28;
        case 0x14fe4cu: goto label_14fe4c;
        case 0x14fe58u: goto label_14fe58;
        case 0x14fe64u: goto label_14fe64;
        case 0x14fe70u: goto label_14fe70;
        case 0x14fe7cu: goto label_14fe7c;
        case 0x14fe90u: goto label_14fe90;
        case 0x14fe9cu: goto label_14fe9c;
        case 0x14feacu: goto label_14feac;
        case 0x14feb8u: goto label_14feb8;
        case 0x14fec4u: goto label_14fec4;
        case 0x14fed0u: goto label_14fed0;
        case 0x14fee0u: goto label_14fee0;
        case 0x14feecu: goto label_14feec;
        case 0x14ff00u: goto label_14ff00;
        case 0x14ff0cu: goto label_14ff0c;
        default: break;
    }

    ctx->pc = 0x14fce8u;

    // 0x14fce8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x14fce8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x14fcec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x14fcecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x14fcf0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x14fcf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x14fcf4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x14fcf4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fcf8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x14fcf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x14fcfc: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x14fcfcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x14fd00: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x14fd00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x14fd04: 0x24849a08  addiu       $a0, $a0, -0x65F8
    ctx->pc = 0x14fd04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941192));
    // 0x14fd08: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x14fd08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x14fd0c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x14fd0cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fd10: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x14fd10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x14fd14: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x14fd14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x14fd18: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x14fd18u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x14fd1c: 0x9223046c  lbu         $v1, 0x46C($s1)
    ctx->pc = 0x14fd1cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
    // 0x14fd20: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x14fd20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x14fd24: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x14fd24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14fd28: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x14fd28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14fd2c: 0x8c750000  lw          $s5, 0x0($v1)
    ctx->pc = 0x14fd2cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14fd30: 0x151080  sll         $v0, $s5, 2
    ctx->pc = 0x14fd30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x14fd34: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x14fd34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x14fd38: 0x8c94020c  lw          $s4, 0x20C($a0)
    ctx->pc = 0x14fd38u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 524)));
    // 0x14fd3c: 0xc044388  jal         func_110E20
    ctx->pc = 0x14FD3Cu;
    SET_GPR_U32(ctx, 31, 0x14FD44u);
    ctx->pc = 0x14FD40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FD3Cu;
    // 0x14fd40: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110E20u, 0x14FD3Cu, 0x14FD44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FD44u;
label_14fd44:
    // 0x14fd44: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x14FD44u;
    {
        const bool branch_taken_0x14fd44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FD44u;
        // 0x14fd48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fd44) {
            ctx->pc = 0x14FDB8u;
            goto label_14fdb8;
        }
    }
    ctx->pc = 0x14FD4Cu;
    // 0x14fd4c: 0x9230046c  lbu         $s0, 0x46C($s1)
    ctx->pc = 0x14fd4cu;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
    // 0x14fd50: 0xc04393c  jal         func_10E4F0
    ctx->pc = 0x14FD50u;
    SET_GPR_U32(ctx, 31, 0x14FD58u);
    ctx->pc = 0x14FD54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FD50u;
    // 0x14fd54: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E4F0u, 0x14FD50u, 0x14FD58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FD58u;
label_14fd58:
    // 0x14fd58: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x14fd58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
    // 0x14fd5c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x14fd5cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x14fd60: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x14fd60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x14fd64: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14fd64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fd68: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x14fd68u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fd6c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14fd6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fd70: 0xc04dda6  jal         func_137698
    ctx->pc = 0x14FD70u;
    SET_GPR_U32(ctx, 31, 0x14FD78u);
    ctx->pc = 0x14FD74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FD70u;
    // 0x14fd74: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x137698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x137698u, 0x14FD70u, 0x14FD78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FD78u;
label_14fd78:
    // 0x14fd78: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x14fd78u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fd7c: 0x56720007  bnel        $s3, $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x14FD7Cu;
    {
        const bool branch_taken_0x14fd7c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 18));
        if (branch_taken_0x14fd7c) {
            ctx->pc = 0x14FD80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14FD7Cu;
            // 0x14fd80: 0x9225046c  lbu         $a1, 0x46C($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14FD9Cu;
            goto label_14fd9c;
        }
    }
    ctx->pc = 0x14FD84u;
    // 0x14fd84: 0xc0414a2  jal         func_105288
    ctx->pc = 0x14FD84u;
    SET_GPR_U32(ctx, 31, 0x14FD8Cu);
    ctx->pc = 0x14FD88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FD84u;
    // 0x14fd88: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105288u, 0x14FD84u, 0x14FD8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FD8Cu;
label_14fd8c:
    // 0x14fd8c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14FD8Cu;
    {
        const bool branch_taken_0x14fd8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FD8Cu;
        // 0x14fd90: 0x9225046c  lbu         $a1, 0x46C($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fd8c) {
            ctx->pc = 0x14FD9Cu;
            goto label_14fd9c;
        }
    }
    ctx->pc = 0x14FD94u;
    // 0x14fd94: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x14fd94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
    // 0x14fd98: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x14fd98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_14fd9c:
    // 0x14fd9c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14fd9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fda0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x14fda0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fda4: 0xc04e16a  jal         func_1385A8
    ctx->pc = 0x14FDA4u;
    SET_GPR_U32(ctx, 31, 0x14FDACu);
    ctx->pc = 0x14FDA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FDA4u;
    // 0x14fda8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1385A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1385A8u, 0x14FDA4u, 0x14FDACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FDACu;
label_14fdac:
    // 0x14fdac: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x14FDACu;
    {
        const bool branch_taken_0x14fdac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14fdac) {
            ctx->pc = 0x14FDB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14FDACu;
            // 0x14fdb0: 0x9225046c  lbu         $a1, 0x46C($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14FDF4u;
            goto label_14fdf4;
        }
    }
    ctx->pc = 0x14FDB4u;
    // 0x14fdb4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14fdb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_14fdb8:
    // 0x14fdb8: 0xc054474  jal         func_1511D0
    ctx->pc = 0x14FDB8u;
    SET_GPR_U32(ctx, 31, 0x14FDC0u);
    ctx->pc = 0x14FDBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FDB8u;
    // 0x14fdbc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1511D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1511D0u, 0x14FDB8u, 0x14FDC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FDC0u;
label_14fdc0:
    // 0x14fdc0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x14fdc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fdc4: 0xc054802  jal         func_152008
    ctx->pc = 0x14FDC4u;
    SET_GPR_U32(ctx, 31, 0x14FDCCu);
    ctx->pc = 0x14FDC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FDC4u;
    // 0x14fdc8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x152008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152008u, 0x14FDC4u, 0x14FDCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FDCCu;
label_14fdcc:
    // 0x14fdcc: 0x9225046c  lbu         $a1, 0x46C($s1)
    ctx->pc = 0x14fdccu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
    // 0x14fdd0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14fdd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fdd4: 0xc04d8d6  jal         func_136358
    ctx->pc = 0x14FDD4u;
    SET_GPR_U32(ctx, 31, 0x14FDDCu);
    ctx->pc = 0x14FDD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FDD4u;
    // 0x14fdd8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136358u, 0x14FDD4u, 0x14FDDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FDDCu;
label_14fddc:
    // 0x14fddc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14fddcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fde0: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x14fde0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x14fde4: 0xc053b00  jal         func_14EC00
    ctx->pc = 0x14FDE4u;
    SET_GPR_U32(ctx, 31, 0x14FDECu);
    ctx->pc = 0x14FDE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FDE4u;
    // 0x14fde8: 0x9085046c  lbu         $a1, 0x46C($a0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EC00u, 0x14FDE4u, 0x14FDECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FDECu;
label_14fdec:
    // 0x14fdec: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x14FDECu;
    {
        const bool branch_taken_0x14fdec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FDECu;
        // 0x14fdf0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fdec) {
            ctx->pc = 0x14FF10u;
            goto label_14ff10;
        }
    }
    ctx->pc = 0x14FDF4u;
label_14fdf4:
    // 0x14fdf4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x14fdf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14fdf8: 0xc04d8d6  jal         func_136358
    ctx->pc = 0x14FDF8u;
    SET_GPR_U32(ctx, 31, 0x14FE00u);
    ctx->pc = 0x14FDFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FDF8u;
    // 0x14fdfc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136358u, 0x14FDF8u, 0x14FE00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FE00u;
label_14fe00:
    // 0x14fe00: 0x9225046c  lbu         $a1, 0x46C($s1)
    ctx->pc = 0x14fe00u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
    // 0x14fe04: 0xc04d8e2  jal         func_136388
    ctx->pc = 0x14FE04u;
    SET_GPR_U32(ctx, 31, 0x14FE0Cu);
    ctx->pc = 0x14FE08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FE04u;
    // 0x14fe08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136388u, 0x14FE04u, 0x14FE0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FE0Cu;
label_14fe0c:
    // 0x14fe0c: 0x9225046c  lbu         $a1, 0x46C($s1)
    ctx->pc = 0x14fe0cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
    // 0x14fe10: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x14fe10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x14fe14: 0xc053b00  jal         func_14EC00
    ctx->pc = 0x14FE14u;
    SET_GPR_U32(ctx, 31, 0x14FE1Cu);
    ctx->pc = 0x14FE18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FE14u;
    // 0x14fe18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EC00u, 0x14FE14u, 0x14FE1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FE1Cu;
label_14fe1c:
    // 0x14fe1c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14fe1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fe20: 0xc04da9c  jal         func_136A70
    ctx->pc = 0x14FE20u;
    SET_GPR_U32(ctx, 31, 0x14FE28u);
    ctx->pc = 0x14FE24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FE20u;
    // 0x14fe24: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136A70u, 0x14FE20u, 0x14FE28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FE28u;
label_14fe28:
    // 0x14fe28: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x14fe28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fe2c: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x14fe2cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14fe30: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x14fe30u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fe34: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x14fe34u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fe38: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x14fe38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x14fe3c: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x14fe3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14fe40: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14fe40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fe44: 0xc04daca  jal         func_136B28
    ctx->pc = 0x14FE44u;
    SET_GPR_U32(ctx, 31, 0x14FE4Cu);
    ctx->pc = 0x14FE48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FE44u;
    // 0x14fe48: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136B28u, 0x14FE44u, 0x14FE4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FE4Cu;
label_14fe4c:
    // 0x14fe4c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x14fe4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fe50: 0xc045fea  jal         func_117FA8
    ctx->pc = 0x14FE50u;
    SET_GPR_U32(ctx, 31, 0x14FE58u);
    ctx->pc = 0x14FE54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FE50u;
    // 0x14fe54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117FA8u, 0x14FE50u, 0x14FE58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FE58u;
label_14fe58:
    // 0x14fe58: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x14fe58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14fe5c: 0xc046104  jal         func_118410
    ctx->pc = 0x14FE5Cu;
    SET_GPR_U32(ctx, 31, 0x14FE64u);
    ctx->pc = 0x14FE60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FE5Cu;
    // 0x14fe60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118410u, 0x14FE5Cu, 0x14FE64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FE64u;
label_14fe64:
    // 0x14fe64: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x14fe64u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x14fe68: 0xc046290  jal         func_118A40
    ctx->pc = 0x14FE68u;
    SET_GPR_U32(ctx, 31, 0x14FE70u);
    ctx->pc = 0x14FE6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FE68u;
    // 0x14fe6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118A40u, 0x14FE68u, 0x14FE70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FE70u;
label_14fe70:
    // 0x14fe70: 0x9225046c  lbu         $a1, 0x46C($s1)
    ctx->pc = 0x14fe70u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
    // 0x14fe74: 0xc04d8f8  jal         func_1363E0
    ctx->pc = 0x14FE74u;
    SET_GPR_U32(ctx, 31, 0x14FE7Cu);
    ctx->pc = 0x14FE78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FE74u;
    // 0x14fe78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1363E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1363E0u, 0x14FE74u, 0x14FE7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FE7Cu;
label_14fe7c:
    // 0x14fe7c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x14fe7cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fe80: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x14fe80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fe84: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x14fe84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fe88: 0xc04dae2  jal         func_136B88
    ctx->pc = 0x14FE88u;
    SET_GPR_U32(ctx, 31, 0x14FE90u);
    ctx->pc = 0x14FE8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FE88u;
    // 0x14fe8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136B88u, 0x14FE88u, 0x14FE90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FE90u;
label_14fe90:
    // 0x14fe90: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x14fe90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fe94: 0xc043c56  jal         func_10F158
    ctx->pc = 0x14FE94u;
    SET_GPR_U32(ctx, 31, 0x14FE9Cu);
    ctx->pc = 0x14FE98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FE94u;
    // 0x14fe98: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F158u, 0x14FE94u, 0x14FE9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FE9Cu;
label_14fe9c:
    // 0x14fe9c: 0x9225046c  lbu         $a1, 0x46C($s1)
    ctx->pc = 0x14fe9cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
    // 0x14fea0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x14fea0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fea4: 0xc053c48  jal         func_14F120
    ctx->pc = 0x14FEA4u;
    SET_GPR_U32(ctx, 31, 0x14FEACu);
    ctx->pc = 0x14FEA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FEA4u;
    // 0x14fea8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F120u, 0x14FEA4u, 0x14FEACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FEACu;
label_14feac:
    // 0x14feac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14feacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14feb0: 0xc054474  jal         func_1511D0
    ctx->pc = 0x14FEB0u;
    SET_GPR_U32(ctx, 31, 0x14FEB8u);
    ctx->pc = 0x14FEB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FEB0u;
    // 0x14feb4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1511D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1511D0u, 0x14FEB0u, 0x14FEB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FEB8u;
label_14feb8:
    // 0x14feb8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x14feb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14febc: 0xc054802  jal         func_152008
    ctx->pc = 0x14FEBCu;
    SET_GPR_U32(ctx, 31, 0x14FEC4u);
    ctx->pc = 0x14FEC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FEBCu;
    // 0x14fec0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x152008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152008u, 0x14FEBCu, 0x14FEC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FEC4u;
label_14fec4:
    // 0x14fec4: 0x9225046c  lbu         $a1, 0x46C($s1)
    ctx->pc = 0x14fec4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
    // 0x14fec8: 0xc04d9a2  jal         func_136688
    ctx->pc = 0x14FEC8u;
    SET_GPR_U32(ctx, 31, 0x14FED0u);
    ctx->pc = 0x14FECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FEC8u;
    // 0x14fecc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136688u, 0x14FEC8u, 0x14FED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FED0u;
label_14fed0:
    // 0x14fed0: 0x9225046c  lbu         $a1, 0x46C($s1)
    ctx->pc = 0x14fed0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
    // 0x14fed4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x14fed4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fed8: 0xc04d9e4  jal         func_136790
    ctx->pc = 0x14FED8u;
    SET_GPR_U32(ctx, 31, 0x14FEE0u);
    ctx->pc = 0x14FEDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FED8u;
    // 0x14fedc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136790u, 0x14FED8u, 0x14FEE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FEE0u;
label_14fee0:
    // 0x14fee0: 0x9225046c  lbu         $a1, 0x46C($s1)
    ctx->pc = 0x14fee0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
    // 0x14fee4: 0xc04e0c0  jal         func_138300
    ctx->pc = 0x14FEE4u;
    SET_GPR_U32(ctx, 31, 0x14FEECu);
    ctx->pc = 0x14FEE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FEE4u;
    // 0x14fee8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x138300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138300u, 0x14FEE4u, 0x14FEECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FEECu;
label_14feec:
    // 0x14feec: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x14feecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x14fef0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14fef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fef4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x14fef4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x14fef8: 0xc04d7dc  jal         func_135F70
    ctx->pc = 0x14FEF8u;
    SET_GPR_U32(ctx, 31, 0x14FF00u);
    ctx->pc = 0x14FEFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FEF8u;
    // 0x14fefc: 0xae2204c8  sw          $v0, 0x4C8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1224), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135F70u, 0x14FEF8u, 0x14FF00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FF00u;
label_14ff00:
    // 0x14ff00: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14ff00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ff04: 0xc04e046  jal         func_138118
    ctx->pc = 0x14FF04u;
    SET_GPR_U32(ctx, 31, 0x14FF0Cu);
    ctx->pc = 0x14FF08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FF04u;
    // 0x14ff08: 0x9085046c  lbu         $a1, 0x46C($a0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x138118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138118u, 0x14FF04u, 0x14FF0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FF0Cu;
label_14ff0c:
    // 0x14ff0c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x14ff0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_14ff10:
    // 0x14ff10: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x14ff10u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x14ff14: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x14ff14u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14ff18: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x14ff18u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14ff1c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x14ff1cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14ff20: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x14ff20u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14ff24: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x14ff24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14ff28: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x14ff28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x14ff2c: 0x3e00008  jr          $ra
    ctx->pc = 0x14FF2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14FF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FF2Cu;
        // 0x14ff30: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14FF2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14FF34u;
    // 0x14ff34: 0x0  nop
    ctx->pc = 0x14ff34u;
    // NOP
    ctx->pc = 0x14ff38u;
}
