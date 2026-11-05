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

// Function: sub_0017A2C0
// Address: 0x17a2c0 - 0x17a4f0
void sub_0017A2C0_0x17a2c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017A2C0_0x17a2c0");
#endif

    switch (ctx->pc) {
        case 0x17a330u: goto label_17a330;
        case 0x17a34cu: goto label_17a34c;
        case 0x17a3a8u: goto label_17a3a8;
        case 0x17a3d8u: goto label_17a3d8;
        case 0x17a3fcu: goto label_17a3fc;
        case 0x17a418u: goto label_17a418;
        case 0x17a430u: goto label_17a430;
        case 0x17a43cu: goto label_17a43c;
        case 0x17a478u: goto label_17a478;
        case 0x17a4a0u: goto label_17a4a0;
        default: break;
    }

    ctx->pc = 0x17a2c0u;

    // 0x17a2c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x17a2c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x17a2c4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17a2c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17a2c8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17a2c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17a2cc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x17a2ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a2d0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x17a2d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x17a2d4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x17a2d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x17a2d8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x17a2d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x17a2dc: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x17a2dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x17a2e0: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x17a2e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x17a2e4: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x17a2e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x17a2e8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x17a2e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x17a2ec: 0x92220009  lbu         $v0, 0x9($s1)
    ctx->pc = 0x17a2ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 9)));
    // 0x17a2f0: 0x10400074  beqz        $v0, . + 4 + (0x74 << 2)
    ctx->pc = 0x17A2F0u;
    {
        const bool branch_taken_0x17a2f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A2F0u;
        // 0x17a2f4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a2f0) {
            ctx->pc = 0x17A4C4u;
            goto label_17a4c4;
        }
    }
    ctx->pc = 0x17A2F8u;
    // 0x17a2f8: 0x92220584  lbu         $v0, 0x584($s1)
    ctx->pc = 0x17a2f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1412)));
    // 0x17a2fc: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x17a2fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x17a300: 0x10600070  beqz        $v1, . + 4 + (0x70 << 2)
    ctx->pc = 0x17A300u;
    {
        const bool branch_taken_0x17a300 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A300u;
        // 0x17a304: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a300) {
            ctx->pc = 0x17A4C4u;
            goto label_17a4c4;
        }
    }
    ctx->pc = 0x17A308u;
    // 0x17a308: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x17a308u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a30c: 0x10600020  beqz        $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x17A30Cu;
    {
        const bool branch_taken_0x17a30c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A30Cu;
        // 0x17a310: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a30c) {
            ctx->pc = 0x17A390u;
            goto label_17a390;
        }
    }
    ctx->pc = 0x17A314u;
    // 0x17a314: 0x8e300534  lw          $s0, 0x534($s1)
    ctx->pc = 0x17a314u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1332)));
    // 0x17a318: 0x9202001d  lbu         $v0, 0x1D($s0)
    ctx->pc = 0x17a318u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 29)));
    // 0x17a31c: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x17A31Cu;
    {
        const bool branch_taken_0x17a31c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A31Cu;
        // 0x17a320: 0x26720001  addiu       $s2, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a31c) {
            ctx->pc = 0x17A390u;
            goto label_17a390;
        }
    }
    ctx->pc = 0x17A324u;
    // 0x17a324: 0x26350534  addiu       $s5, $s1, 0x534
    ctx->pc = 0x17a324u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 1332));
    // 0x17a328: 0x9203001d  lbu         $v1, 0x1D($s0)
    ctx->pc = 0x17a328u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 29)));
    // 0x17a32c: 0x0  nop
    ctx->pc = 0x17a32cu;
    // NOP
label_17a330:
    // 0x17a330: 0x9202001c  lbu         $v0, 0x1C($s0)
    ctx->pc = 0x17a330u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x17a334: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x17a334u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x17a338: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x17A338u;
    {
        const bool branch_taken_0x17a338 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A338u;
        // 0x17a33c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a338) {
            ctx->pc = 0x17A364u;
            goto label_17a364;
        }
    }
    ctx->pc = 0x17A340u;
    // 0x17a340: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17a340u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a344: 0xc05e93c  jal         func_17A4F0
    ctx->pc = 0x17A344u;
    SET_GPR_U32(ctx, 31, 0x17A34Cu);
    ctx->pc = 0x17A348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A344u;
    // 0x17a348: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A4F0u, 0x17A344u, 0x17A34Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A34Cu;
label_17a34c:
    // 0x17a34c: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x17A34Cu;
    {
        const bool branch_taken_0x17a34c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17a34c) {
            ctx->pc = 0x17A350u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17A34Cu;
            // 0x17a350: 0x9203001d  lbu         $v1, 0x1D($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 29)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17A330u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17a330;
        }
    }
    ctx->pc = 0x17A354u;
    // 0x17a354: 0x9203001c  lbu         $v1, 0x1C($s0)
    ctx->pc = 0x17a354u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x17a358: 0x9202001d  lbu         $v0, 0x1D($s0)
    ctx->pc = 0x17a358u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 29)));
    // 0x17a35c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x17a35cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17a360: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x17a360u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_17a364:
    // 0x17a364: 0x92220584  lbu         $v0, 0x584($s1)
    ctx->pc = 0x17a364u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1412)));
    // 0x17a368: 0x325300ff  andi        $s3, $s2, 0xFF
    ctx->pc = 0x17a368u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x17a36c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x17a36cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a370: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x17a370u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x17a374: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x17A374u;
    {
        const bool branch_taken_0x17a374 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A374u;
        // 0x17a378: 0x131080  sll         $v0, $s3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a374) {
            ctx->pc = 0x17A390u;
            goto label_17a390;
        }
    }
    ctx->pc = 0x17A37Cu;
    // 0x17a37c: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x17a37cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x17a380: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x17a380u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17a384: 0x9203001d  lbu         $v1, 0x1D($s0)
    ctx->pc = 0x17a384u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 29)));
    // 0x17a388: 0x1460ffe9  bnez        $v1, . + 4 + (-0x17 << 2)
    ctx->pc = 0x17A388u;
    {
        const bool branch_taken_0x17a388 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x17A38Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A388u;
        // 0x17a38c: 0x26720001  addiu       $s2, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a388) {
            ctx->pc = 0x17A330u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17a330;
        }
    }
    ctx->pc = 0x17A390u;
label_17a390:
    // 0x17a390: 0x1280004b  beqz        $s4, . + 4 + (0x4B << 2)
    ctx->pc = 0x17A390u;
    {
        const bool branch_taken_0x17a390 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A390u;
        // 0x17a394: 0x308200ff  andi        $v0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a390) {
            ctx->pc = 0x17A4C0u;
            goto label_17a4c0;
        }
    }
    ctx->pc = 0x17A398u;
    // 0x17a398: 0x10400049  beqz        $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x17A398u;
    {
        const bool branch_taken_0x17a398 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A398u;
        // 0x17a39c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a398) {
            ctx->pc = 0x17A4C0u;
            goto label_17a4c0;
        }
    }
    ctx->pc = 0x17A3A0u;
    // 0x17a3a0: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x17a3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x17a3a4: 0x0  nop
    ctx->pc = 0x17a3a4u;
    // NOP
label_17a3a8:
    // 0x17a3a8: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x17a3a8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a3ac: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x17a3acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x17a3b0: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x17a3b0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a3b4: 0x8c500534  lw          $s0, 0x534($v0)
    ctx->pc = 0x17a3b4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1332)));
    // 0x17a3b8: 0x9217001c  lbu         $s7, 0x1C($s0)
    ctx->pc = 0x17a3b8u;
    SET_GPR_ZE32(ctx, 23, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x17a3bc: 0x12e00030  beqz        $s7, . + 4 + (0x30 << 2)
    ctx->pc = 0x17A3BCu;
    {
        const bool branch_taken_0x17a3bc = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A3BCu;
        // 0x17a3c0: 0x2a0902d  daddu       $s2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a3bc) {
            ctx->pc = 0x17A480u;
            goto label_17a480;
        }
    }
    ctx->pc = 0x17A3C4u;
    // 0x17a3c4: 0x92220009  lbu         $v0, 0x9($s1)
    ctx->pc = 0x17a3c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 9)));
    // 0x17a3c8: 0x5040002e  beql        $v0, $zero, . + 4 + (0x2E << 2)
    ctx->pc = 0x17A3C8u;
    {
        const bool branch_taken_0x17a3c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17a3c8) {
            ctx->pc = 0x17A3CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17A3C8u;
            // 0x17a3cc: 0x9202001c  lbu         $v0, 0x1C($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17A484u;
            goto label_17a484;
        }
    }
    ctx->pc = 0x17A3D0u;
    // 0x17a3d0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x17a3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x17a3d4: 0x0  nop
    ctx->pc = 0x17a3d4u;
    // NOP
label_17a3d8:
    // 0x17a3d8: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x17a3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x17a3dc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x17a3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x17a3e0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x17a3e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17a3e4: 0x10800017  beqz        $a0, . + 4 + (0x17 << 2)
    ctx->pc = 0x17A3E4u;
    {
        const bool branch_taken_0x17a3e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A3E4u;
        // 0x17a3e8: 0x26a20001  addiu       $v0, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a3e4) {
            ctx->pc = 0x17A444u;
            goto label_17a444;
        }
    }
    ctx->pc = 0x17A3ECu;
    // 0x17a3ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17a3ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a3f0: 0x305500ff  andi        $s5, $v0, 0xFF
    ctx->pc = 0x17a3f0u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x17a3f4: 0xc05eb06  jal         func_17AC18
    ctx->pc = 0x17A3F4u;
    SET_GPR_U32(ctx, 31, 0x17A3FCu);
    ctx->pc = 0x17A3F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A3F4u;
    // 0x17a3f8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17AC18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17AC18u, 0x17A3F4u, 0x17A3FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A3FCu;
label_17a3fc:
    // 0x17a3fc: 0x14500012  bne         $v0, $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x17A3FCu;
    {
        const bool branch_taken_0x17a3fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x17A400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A3FCu;
        // 0x17a400: 0x26420001  addiu       $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a3fc) {
            ctx->pc = 0x17A448u;
            goto label_17a448;
        }
    }
    ctx->pc = 0x17A404u;
    // 0x17a404: 0x26c20001  addiu       $v0, $s6, 0x1
    ctx->pc = 0x17a404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x17a408: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17a408u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a40c: 0x305600ff  andi        $s6, $v0, 0xFF
    ctx->pc = 0x17a40cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x17a410: 0xc05eb12  jal         func_17AC48
    ctx->pc = 0x17A410u;
    SET_GPR_U32(ctx, 31, 0x17A418u);
    ctx->pc = 0x17A414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A410u;
    // 0x17a414: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17AC48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17AC48u, 0x17A410u, 0x17A418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A418u;
label_17a418:
    // 0x17a418: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x17A418u;
    {
        const bool branch_taken_0x17a418 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A418u;
        // 0x17a41c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a418) {
            ctx->pc = 0x17A444u;
            goto label_17a444;
        }
    }
    ctx->pc = 0x17A420u;
    // 0x17a420: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x17a420u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a424: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17a424u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a428: 0xc05eb0c  jal         func_17AC30
    ctx->pc = 0x17A428u;
    SET_GPR_U32(ctx, 31, 0x17A430u);
    ctx->pc = 0x17A42Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A428u;
    // 0x17a42c: 0x2694ffff  addiu       $s4, $s4, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17AC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17AC30u, 0x17A428u, 0x17A430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A430u;
label_17a430:
    // 0x17a430: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17a430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a434: 0xc05eef4  jal         func_17BBD0
    ctx->pc = 0x17A434u;
    SET_GPR_U32(ctx, 31, 0x17A43Cu);
    ctx->pc = 0x17A438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A434u;
    // 0x17a438: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17BBD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17BBD0u, 0x17A434u, 0x17A43Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A43Cu;
label_17a43c:
    // 0x17a43c: 0x52800021  beql        $s4, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x17A43Cu;
    {
        const bool branch_taken_0x17a43c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x17a43c) {
            ctx->pc = 0x17A440u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17A43Cu;
            // 0x17a440: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17A4C4u;
            goto label_17a4c4;
        }
    }
    ctx->pc = 0x17A444u;
label_17a444:
    // 0x17a444: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x17a444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_17a448:
    // 0x17a448: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x17a448u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x17a44c: 0x2e430010  sltiu       $v1, $s2, 0x10
    ctx->pc = 0x17a44cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x17a450: 0x5060000c  beql        $v1, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x17A450u;
    {
        const bool branch_taken_0x17a450 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17a450) {
            ctx->pc = 0x17A454u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17A450u;
            // 0x17a454: 0x9202001c  lbu         $v0, 0x1C($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17A484u;
            goto label_17a484;
        }
    }
    ctx->pc = 0x17A458u;
    // 0x17a458: 0x52d7000a  beql        $s6, $s7, . + 4 + (0xA << 2)
    ctx->pc = 0x17A458u;
    {
        const bool branch_taken_0x17a458 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 23));
        if (branch_taken_0x17a458) {
            ctx->pc = 0x17A45Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17A458u;
            // 0x17a45c: 0x9202001c  lbu         $v0, 0x1C($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17A484u;
            goto label_17a484;
        }
    }
    ctx->pc = 0x17A460u;
    // 0x17a460: 0x92220009  lbu         $v0, 0x9($s1)
    ctx->pc = 0x17a460u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 9)));
    // 0x17a464: 0x56a2ffdc  bnel        $s5, $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x17A464u;
    {
        const bool branch_taken_0x17a464 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        if (branch_taken_0x17a464) {
            ctx->pc = 0x17A468u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17A464u;
            // 0x17a468: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17A3D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17a3d8;
        }
    }
    ctx->pc = 0x17A46Cu;
    // 0x17a46c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x17A46Cu;
    {
        const bool branch_taken_0x17a46c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A46Cu;
        // 0x17a470: 0x9202001c  lbu         $v0, 0x1C($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a46c) {
            ctx->pc = 0x17A484u;
            goto label_17a484;
        }
    }
    ctx->pc = 0x17A474u;
    // 0x17a474: 0x0  nop
    ctx->pc = 0x17a474u;
    // NOP
label_17a478:
    // 0x17a478: 0x52800012  beql        $s4, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x17A478u;
    {
        const bool branch_taken_0x17a478 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x17a478) {
            ctx->pc = 0x17A47Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17A478u;
            // 0x17a47c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17A4C4u;
            goto label_17a4c4;
        }
    }
    ctx->pc = 0x17A480u;
label_17a480:
    // 0x17a480: 0x9202001c  lbu         $v0, 0x1C($s0)
    ctx->pc = 0x17a480u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 28)));
label_17a484:
    // 0x17a484: 0x9203001f  lbu         $v1, 0x1F($s0)
    ctx->pc = 0x17a484u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 31)));
    // 0x17a488: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x17a488u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x17a48c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x17A48Cu;
    {
        const bool branch_taken_0x17a48c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A48Cu;
        // 0x17a490: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a48c) {
            ctx->pc = 0x17A4A8u;
            goto label_17a4a8;
        }
    }
    ctx->pc = 0x17A494u;
    // 0x17a494: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17a494u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a498: 0xc05e93c  jal         func_17A4F0
    ctx->pc = 0x17A498u;
    SET_GPR_U32(ctx, 31, 0x17A4A0u);
    ctx->pc = 0x17A49Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A498u;
    // 0x17a49c: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A4F0u, 0x17A498u, 0x17A4A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A4A0u;
label_17a4a0:
    // 0x17a4a0: 0x5440fff5  bnel        $v0, $zero, . + 4 + (-0xB << 2)
    ctx->pc = 0x17A4A0u;
    {
        const bool branch_taken_0x17a4a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17a4a0) {
            ctx->pc = 0x17A4A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17A4A0u;
            // 0x17a4a4: 0x2694ffff  addiu       $s4, $s4, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17A478u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17a478;
        }
    }
    ctx->pc = 0x17A4A8u;
label_17a4a8:
    // 0x17a4a8: 0x26630001  addiu       $v1, $s3, 0x1
    ctx->pc = 0x17a4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x17a4ac: 0x92220584  lbu         $v0, 0x584($s1)
    ctx->pc = 0x17a4acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1412)));
    // 0x17a4b0: 0x307300ff  andi        $s3, $v1, 0xFF
    ctx->pc = 0x17a4b0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x17a4b4: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x17a4b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x17a4b8: 0x1440ffbb  bnez        $v0, . + 4 + (-0x45 << 2)
    ctx->pc = 0x17A4B8u;
    {
        const bool branch_taken_0x17a4b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17A4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A4B8u;
        // 0x17a4bc: 0x131080  sll         $v0, $s3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a4b8) {
            ctx->pc = 0x17A3A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17a3a8;
        }
    }
    ctx->pc = 0x17A4C0u;
label_17a4c0:
    // 0x17a4c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17a4c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17a4c4:
    // 0x17a4c4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17a4c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17a4c8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x17a4c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17a4cc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x17a4ccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17a4d0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x17a4d0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17a4d4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x17a4d4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17a4d8: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x17a4d8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17a4dc: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x17a4dcu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x17a4e0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x17a4e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17a4e4: 0x3e00008  jr          $ra
    ctx->pc = 0x17A4E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A4E4u;
        // 0x17a4e8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17A4E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17A4ECu;
    // 0x17a4ec: 0x0  nop
    ctx->pc = 0x17a4ecu;
    // NOP
    ctx->pc = 0x17a4f0u;
}
