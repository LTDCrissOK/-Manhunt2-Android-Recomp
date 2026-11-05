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

// Function: sub_0039A318
// Address: 0x39a318 - 0x39a610
void sub_0039A318_0x39a318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039A318_0x39a318");
#endif

    switch (ctx->pc) {
        case 0x39a380u: goto label_39a380;
        case 0x39a388u: goto label_39a388;
        case 0x39a394u: goto label_39a394;
        case 0x39a39cu: goto label_39a39c;
        case 0x39a3c4u: goto label_39a3c4;
        case 0x39a3e0u: goto label_39a3e0;
        case 0x39a3f8u: goto label_39a3f8;
        case 0x39a438u: goto label_39a438;
        case 0x39a46cu: goto label_39a46c;
        case 0x39a480u: goto label_39a480;
        case 0x39a4b4u: goto label_39a4b4;
        case 0x39a4bcu: goto label_39a4bc;
        case 0x39a4d8u: goto label_39a4d8;
        case 0x39a540u: goto label_39a540;
        case 0x39a54cu: goto label_39a54c;
        case 0x39a568u: goto label_39a568;
        case 0x39a57cu: goto label_39a57c;
        case 0x39a598u: goto label_39a598;
        default: break;
    }

    ctx->pc = 0x39a318u;

    // 0x39a318: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x39a318u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x39a31c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x39a31cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x39a320: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x39a320u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39a324: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x39a324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x39a328: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x39a328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x39a32c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x39a32cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x39a330: 0x82020002  lb          $v0, 0x2($s0)
    ctx->pc = 0x39a330u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x39a334: 0x5440009d  bnel        $v0, $zero, . + 4 + (0x9D << 2)
    ctx->pc = 0x39A334u;
    {
        const bool branch_taken_0x39a334 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x39a334) {
            ctx->pc = 0x39A338u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39A334u;
            // 0x39a338: 0x82030001  lb          $v1, 0x1($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39A5ACu;
            goto label_39a5ac;
        }
    }
    ctx->pc = 0x39A33Cu;
    // 0x39a33c: 0x8203004c  lb          $v1, 0x4C($s0)
    ctx->pc = 0x39a33cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x39a340: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x39a340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39a344: 0x54620007  bnel        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x39A344u;
    {
        const bool branch_taken_0x39a344 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x39a344) {
            ctx->pc = 0x39A348u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39A344u;
            // 0x39a348: 0x8203004a  lb          $v1, 0x4A($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 74)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39A364u;
            goto label_39a364;
        }
    }
    ctx->pc = 0x39A34Cu;
    // 0x39a34c: 0x8202004b  lb          $v0, 0x4B($s0)
    ctx->pc = 0x39a34cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 75)));
    // 0x39a350: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x39A350u;
    {
        const bool branch_taken_0x39a350 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39A354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A350u;
        // 0x39a354: 0xa200004c  sb          $zero, 0x4C($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 76), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a350) {
            ctx->pc = 0x39A35Cu;
            goto label_39a35c;
        }
    }
    ctx->pc = 0x39A358u;
    // 0x39a358: 0xa2030001  sb          $v1, 0x1($s0)
    ctx->pc = 0x39a358u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
label_39a35c:
    // 0x39a35c: 0x8203004a  lb          $v1, 0x4A($s0)
    ctx->pc = 0x39a35cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 74)));
    // 0x39a360: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x39a360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_39a364:
    // 0x39a364: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x39A364u;
    {
        const bool branch_taken_0x39a364 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x39a364) {
            ctx->pc = 0x39A394u;
            goto label_39a394;
        }
    }
    ctx->pc = 0x39A36Cu;
    // 0x39a36c: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x39a36cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x39a370: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x39A370u;
    {
        const bool branch_taken_0x39a370 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x39a370) {
            ctx->pc = 0x39A380u;
            goto label_39a380;
        }
    }
    ctx->pc = 0x39A378u;
    // 0x39a378: 0xc0e8882  jal         func_3A2208
    ctx->pc = 0x39A378u;
    SET_GPR_U32(ctx, 31, 0x39A380u);
    ctx->pc = 0x39A37Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39A378u;
    // 0x39a37c: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2208u, 0x39A378u, 0x39A380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39A380u;
label_39a380:
    // 0x39a380: 0xc0e6a60  jal         func_39A980
    ctx->pc = 0x39A380u;
    SET_GPR_U32(ctx, 31, 0x39A388u);
    ctx->pc = 0x39A980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A980u, 0x39A380u, 0x39A388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39A388u;
label_39a388:
    // 0x39a388: 0xa200004a  sb          $zero, 0x4A($s0)
    ctx->pc = 0x39a388u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 74), (uint8_t)GPR_U32(ctx, 0));
    // 0x39a38c: 0xc0e6a66  jal         func_39A998
    ctx->pc = 0x39A38Cu;
    SET_GPR_U32(ctx, 31, 0x39A394u);
    ctx->pc = 0x39A390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39A38Cu;
    // 0x39a390: 0xa200004d  sb          $zero, 0x4D($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 77), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A998u, 0x39A38Cu, 0x39A394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39A394u;
label_39a394:
    // 0x39a394: 0xc0e6a60  jal         func_39A980
    ctx->pc = 0x39A394u;
    SET_GPR_U32(ctx, 31, 0x39A39Cu);
    ctx->pc = 0x39A398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39A394u;
    // 0x39a398: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A980u, 0x39A394u, 0x39A39Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39A39Cu;
label_39a39c:
    // 0x39a39c: 0x82040049  lb          $a0, 0x49($s0)
    ctx->pc = 0x39a39cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 73)));
    // 0x39a3a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x39a3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39a3a4: 0x1482007a  bne         $a0, $v0, . + 4 + (0x7A << 2)
    ctx->pc = 0x39A3A4u;
    {
        const bool branch_taken_0x39a3a4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x39a3a4) {
            ctx->pc = 0x39A590u;
            goto label_39a590;
        }
    }
    ctx->pc = 0x39A3ACu;
    // 0x39a3ac: 0x8202004d  lb          $v0, 0x4D($s0)
    ctx->pc = 0x39a3acu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 77)));
    // 0x39a3b0: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x39A3B0u;
    {
        const bool branch_taken_0x39a3b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39A3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A3B0u;
        // 0x39a3b4: 0x9203004d  lbu         $v1, 0x4D($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 77)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a3b0) {
            ctx->pc = 0x39A414u;
            goto label_39a414;
        }
    }
    ctx->pc = 0x39A3B8u;
    // 0x39a3b8: 0xa204004d  sb          $a0, 0x4D($s0)
    ctx->pc = 0x39a3b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 77), (uint8_t)GPR_U32(ctx, 4));
    // 0x39a3bc: 0xc0e6a66  jal         func_39A998
    ctx->pc = 0x39A3BCu;
    SET_GPR_U32(ctx, 31, 0x39A3C4u);
    ctx->pc = 0x39A3C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39A3BCu;
    // 0x39a3c0: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A998u, 0x39A3BCu, 0x39A3C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39A3C4u;
label_39a3c4:
    // 0x39a3c4: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x39a3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x39a3c8: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x39A3C8u;
    {
        const bool branch_taken_0x39a3c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x39a3c8) {
            ctx->pc = 0x39A3CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39A3C8u;
            // 0x39a3cc: 0x9203004d  lbu         $v1, 0x4D($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 77)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39A414u;
            goto label_39a414;
        }
    }
    ctx->pc = 0x39A3D0u;
    // 0x39a3d0: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x39a3d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x39a3d4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x39a3d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39a3d8: 0xc0e87ae  jal         func_3A1EB8
    ctx->pc = 0x39A3D8u;
    SET_GPR_U32(ctx, 31, 0x39A3E0u);
    ctx->pc = 0x39A3DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39A3D8u;
    // 0x39a3dc: 0x8e050058  lw          $a1, 0x58($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1EB8u, 0x39A3D8u, 0x39A3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39A3E0u;
label_39a3e0:
    // 0x39a3e0: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x39A3E0u;
    {
        const bool branch_taken_0x39a3e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39A3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A3E0u;
        // 0x39a3e4: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a3e0) {
            ctx->pc = 0x39A410u;
            goto label_39a410;
        }
    }
    ctx->pc = 0x39A3E8u;
    // 0x39a3e8: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x39a3e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x39a3ec: 0x8e050054  lw          $a1, 0x54($s0)
    ctx->pc = 0x39a3ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x39a3f0: 0xc0ec11c  jal         func_3B0470
    ctx->pc = 0x39A3F0u;
    SET_GPR_U32(ctx, 31, 0x39A3F8u);
    ctx->pc = 0x39A3F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39A3F0u;
    // 0x39a3f4: 0x2484b170  addiu       $a0, $a0, -0x4E90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B0470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B0470u, 0x39A3F0u, 0x39A3F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39A3F8u;
label_39a3f8:
    // 0x39a3f8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x39a3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x39a3fc: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x39a3fcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x39a400: 0xa2000049  sb          $zero, 0x49($s0)
    ctx->pc = 0x39a400u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 73), (uint8_t)GPR_U32(ctx, 0));
    // 0x39a404: 0x1000007c  b           . + 4 + (0x7C << 2)
    ctx->pc = 0x39A404u;
    {
        const bool branch_taken_0x39a404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39A408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A404u;
        // 0x39a408: 0xa200004d  sb          $zero, 0x4D($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 77), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a404) {
            ctx->pc = 0x39A5F8u;
            goto label_39a5f8;
        }
    }
    ctx->pc = 0x39A40Cu;
    // 0x39a40c: 0x0  nop
    ctx->pc = 0x39a40cu;
    // NOP
label_39a410:
    // 0x39a410: 0x9203004d  lbu         $v1, 0x4D($s0)
    ctx->pc = 0x39a410u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 77)));
label_39a414:
    // 0x39a414: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x39a414u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x39a418: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x39a418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39a41c: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x39a41cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x39a420: 0x5443005e  bnel        $v0, $v1, . + 4 + (0x5E << 2)
    ctx->pc = 0x39A420u;
    {
        const bool branch_taken_0x39a420 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x39a420) {
            ctx->pc = 0x39A424u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39A420u;
            // 0x39a424: 0x8203004b  lb          $v1, 0x4B($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 75)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39A59Cu;
            goto label_39a59c;
        }
    }
    ctx->pc = 0x39A428u;
    // 0x39a428: 0x56200004  bnel        $s1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x39A428u;
    {
        const bool branch_taken_0x39a428 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x39a428) {
            ctx->pc = 0x39A42Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39A428u;
            // 0x39a42c: 0xde020048  ld          $v0, 0x48($s0) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 72)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39A43Cu;
            goto label_39a43c;
        }
    }
    ctx->pc = 0x39A430u;
    // 0x39a430: 0xc0e6a66  jal         func_39A998
    ctx->pc = 0x39A430u;
    SET_GPR_U32(ctx, 31, 0x39A438u);
    ctx->pc = 0x39A998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A998u, 0x39A430u, 0x39A438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39A438u;
label_39a438:
    // 0x39a438: 0xde020048  ld          $v0, 0x48($s0)
    ctx->pc = 0x39a438u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 72)));
label_39a43c:
    // 0x39a43c: 0x3c0300ff  lui         $v1, 0xFF
    ctx->pc = 0x39a43cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)255 << 16));
    // 0x39a440: 0x3463ff00  ori         $v1, $v1, 0xFF00
    ctx->pc = 0x39a440u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65280);
    // 0x39a444: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x39a444u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x39a448: 0x34840100  ori         $a0, $a0, 0x100
    ctx->pc = 0x39a448u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)256);
    // 0x39a44c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x39a44cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x39a450: 0x5044006a  beql        $v0, $a0, . + 4 + (0x6A << 2)
    ctx->pc = 0x39A450u;
    {
        const bool branch_taken_0x39a450 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x39a450) {
            ctx->pc = 0x39A454u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39A450u;
            // 0x39a454: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39A5FCu;
            goto label_39a5fc;
        }
    }
    ctx->pc = 0x39A458u;
    // 0x39a458: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x39a458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x39a45c: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x39A45Cu;
    {
        const bool branch_taken_0x39a45c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x39a45c) {
            ctx->pc = 0x39A460u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39A45Cu;
            // 0x39a460: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39A4A8u;
            goto label_39a4a8;
        }
    }
    ctx->pc = 0x39A464u;
    // 0x39a464: 0xc0e89ba  jal         func_3A26E8
    ctx->pc = 0x39A464u;
    SET_GPR_U32(ctx, 31, 0x39A46Cu);
    ctx->pc = 0x39A468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39A464u;
    // 0x39a468: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A26E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A26E8u, 0x39A464u, 0x39A46Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39A46Cu;
label_39a46c:
    // 0x39a46c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x39a46cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39a470: 0x6430005  bgezl       $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x39A470u;
    {
        const bool branch_taken_0x39a470 = (GPR_S32(ctx, 18) >= 0);
        if (branch_taken_0x39a470) {
            ctx->pc = 0x39A474u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39A470u;
            // 0x39a474: 0x664207ff  daddiu      $v0, $s2, 0x7FF (Delay Slot)
            SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 18) + (int64_t)(int32_t)2047);
            ctx->in_delay_slot = false;
            ctx->pc = 0x39A488u;
            goto label_39a488;
        }
    }
    ctx->pc = 0x39A478u;
    // 0x39a478: 0xc0e8924  jal         func_3A2490
    ctx->pc = 0x39A478u;
    SET_GPR_U32(ctx, 31, 0x39A480u);
    ctx->pc = 0x39A47Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39A478u;
    // 0x39a47c: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2490u, 0x39A478u, 0x39A480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39A480u;
label_39a480:
    // 0x39a480: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x39a480u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39a484: 0x664207ff  daddiu      $v0, $s2, 0x7FF
    ctx->pc = 0x39a484u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 18) + (int64_t)(int32_t)2047);
label_39a488:
    // 0x39a488: 0x66440ffe  daddiu      $a0, $s2, 0xFFE
    ctx->pc = 0x39a488u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 18) + (int64_t)(int32_t)4094);
    // 0x39a48c: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x39a48cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x39a490: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x39a490u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x39a494: 0x28d78  dsll        $s1, $v0, 21
    ctx->pc = 0x39a494u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << 21);
    // 0x39a498: 0x11883f  dsra32      $s1, $s1, 0
    ctx->pc = 0x39a498u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 0));
    // 0x39a49c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x39A49Cu;
    {
        const bool branch_taken_0x39a49c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39A4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A49Cu;
        // 0x39a4a0: 0xde030010  ld          $v1, 0x10($s0) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a49c) {
            ctx->pc = 0x39A4DCu;
            goto label_39a4dc;
        }
    }
    ctx->pc = 0x39A4A4u;
    // 0x39a4a4: 0x0  nop
    ctx->pc = 0x39a4a4u;
    // NOP
label_39a4a8:
    // 0x39a4a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x39a4a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39a4ac: 0xc0e88ba  jal         func_3A22E8
    ctx->pc = 0x39A4ACu;
    SET_GPR_U32(ctx, 31, 0x39A4B4u);
    ctx->pc = 0x39A4B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39A4ACu;
    // 0x39a4b0: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A22E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A22E8u, 0x39A4ACu, 0x39A4B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39A4B4u;
label_39a4b4:
    // 0x39a4b4: 0xc0e88a0  jal         func_3A2280
    ctx->pc = 0x39A4B4u;
    SET_GPR_U32(ctx, 31, 0x39A4BCu);
    ctx->pc = 0x39A4B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39A4B4u;
    // 0x39a4b8: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2280u, 0x39A4B4u, 0x39A4BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39A4BCu;
label_39a4bc:
    // 0x39a4bc: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x39a4bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x39a4c0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x39a4c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39a4c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x39a4c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39a4c8: 0x1112c0  sll         $v0, $s1, 11
    ctx->pc = 0x39a4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 11));
    // 0x39a4cc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x39a4ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39a4d0: 0xc0e88ba  jal         func_3A22E8
    ctx->pc = 0x39A4D0u;
    SET_GPR_U32(ctx, 31, 0x39A4D8u);
    ctx->pc = 0x39A4D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39A4D0u;
    // 0x39a4d4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A22E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A22E8u, 0x39A4D0u, 0x39A4D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39A4D8u;
label_39a4d8:
    // 0x39a4d8: 0xde030010  ld          $v1, 0x10($s0)
    ctx->pc = 0x39a4d8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 16)));
label_39a4dc:
    // 0x39a4dc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x39a4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x39a4e0: 0x2107c  dsll32      $v0, $v0, 1
    ctx->pc = 0x39a4e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 1));
    // 0x39a4e4: 0x215ba  dsrl        $v0, $v0, 22
    ctx->pc = 0x39a4e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 22);
    // 0x39a4e8: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x39A4E8u;
    {
        const bool branch_taken_0x39a4e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x39a4e8) {
            ctx->pc = 0x39A4ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39A4E8u;
            // 0x39a4ec: 0x8e03000c  lw          $v1, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39A4FCu;
            goto label_39a4fc;
        }
    }
    ctx->pc = 0x39A4F0u;
    // 0x39a4f0: 0xfe120010  sd          $s2, 0x10($s0)
    ctx->pc = 0x39a4f0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 18));
    // 0x39a4f4: 0xae110018  sw          $s1, 0x18($s0)
    ctx->pc = 0x39a4f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 17));
    // 0x39a4f8: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x39a4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_39a4fc:
    // 0x39a4fc: 0x223102a  slt         $v0, $s1, $v1
    ctx->pc = 0x39a4fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x39a500: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x39A500u;
    {
        const bool branch_taken_0x39a500 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39a500) {
            ctx->pc = 0x39A504u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39A500u;
            // 0x39a504: 0x8e020018  lw          $v0, 0x18($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39A514u;
            goto label_39a514;
        }
    }
    ctx->pc = 0x39A508u;
    // 0x39a508: 0xae11000c  sw          $s1, 0xC($s0)
    ctx->pc = 0x39a508u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 17));
    // 0x39a50c: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x39a50cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39a510: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x39a510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_39a514:
    // 0x39a514: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x39a514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x39a518: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x39a518u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x39a51c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x39A51Cu;
    {
        const bool branch_taken_0x39a51c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39A520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A51Cu;
        // 0x39a520: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a51c) {
            ctx->pc = 0x39A538u;
            goto label_39a538;
        }
    }
    ctx->pc = 0x39A524u;
    // 0x39a524: 0x2231823  subu        $v1, $s1, $v1
    ctx->pc = 0x39a524u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x39a528: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x39a528u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39a52c: 0xae030018  sw          $v1, 0x18($s0)
    ctx->pc = 0x39a52cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
    // 0x39a530: 0x212f8  dsll        $v0, $v0, 11
    ctx->pc = 0x39a530u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 11);
    // 0x39a534: 0xfe020010  sd          $v0, 0x10($s0)
    ctx->pc = 0x39a534u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 2));
label_39a538:
    // 0x39a538: 0xc0e66bc  jal         func_399AF0
    ctx->pc = 0x39A538u;
    SET_GPR_U32(ctx, 31, 0x39A540u);
    ctx->pc = 0x39A53Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39A538u;
    // 0x39a53c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399AF0u, 0x39A538u, 0x39A540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39A540u;
label_39a540:
    // 0x39a540: 0xa2000049  sb          $zero, 0x49($s0)
    ctx->pc = 0x39a540u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 73), (uint8_t)GPR_U32(ctx, 0));
    // 0x39a544: 0xc0e890a  jal         func_3A2428
    ctx->pc = 0x39A544u;
    SET_GPR_U32(ctx, 31, 0x39A54Cu);
    ctx->pc = 0x39A548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39A544u;
    // 0x39a548: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2428u, 0x39A544u, 0x39A54Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39A54Cu;
label_39a54c:
    // 0x39a54c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x39a54cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x39a550: 0x54430012  bnel        $v0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x39A550u;
    {
        const bool branch_taken_0x39a550 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x39a550) {
            ctx->pc = 0x39A554u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39A550u;
            // 0x39a554: 0x8203004b  lb          $v1, 0x4B($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 75)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39A59Cu;
            goto label_39a59c;
        }
    }
    ctx->pc = 0x39A558u;
    // 0x39a558: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x39a558u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x39a55c: 0x8e050054  lw          $a1, 0x54($s0)
    ctx->pc = 0x39a55cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x39a560: 0xc0ec11c  jal         func_3B0470
    ctx->pc = 0x39A560u;
    SET_GPR_U32(ctx, 31, 0x39A568u);
    ctx->pc = 0x39A564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39A560u;
    // 0x39a564: 0x2484b1a0  addiu       $a0, $a0, -0x4E60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B0470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B0470u, 0x39A560u, 0x39A568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39A568u;
label_39a568:
    // 0x39a568: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x39a568u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x39a56c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x39A56Cu;
    {
        const bool branch_taken_0x39a56c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x39A570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A56Cu;
        // 0x39a570: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a56c) {
            ctx->pc = 0x39A580u;
            goto label_39a580;
        }
    }
    ctx->pc = 0x39A574u;
    // 0x39a574: 0xc0e8882  jal         func_3A2208
    ctx->pc = 0x39A574u;
    SET_GPR_U32(ctx, 31, 0x39A57Cu);
    ctx->pc = 0x39A578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39A574u;
    // 0x39a578: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2208u, 0x39A574u, 0x39A57Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39A57Cu;
label_39a57c:
    // 0x39a57c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x39a57cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_39a580:
    // 0x39a580: 0xa2000049  sb          $zero, 0x49($s0)
    ctx->pc = 0x39a580u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 73), (uint8_t)GPR_U32(ctx, 0));
    // 0x39a584: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x39a584u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x39a588: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x39A588u;
    {
        const bool branch_taken_0x39a588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39A58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A588u;
        // 0x39a58c: 0xa200004d  sb          $zero, 0x4D($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 77), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a588) {
            ctx->pc = 0x39A5F8u;
            goto label_39a5f8;
        }
    }
    ctx->pc = 0x39A590u;
label_39a590:
    // 0x39a590: 0xc0e6a66  jal         func_39A998
    ctx->pc = 0x39A590u;
    SET_GPR_U32(ctx, 31, 0x39A598u);
    ctx->pc = 0x39A998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A998u, 0x39A590u, 0x39A598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39A598u;
label_39a598:
    // 0x39a598: 0x8203004b  lb          $v1, 0x4B($s0)
    ctx->pc = 0x39a598u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 75)));
label_39a59c:
    // 0x39a59c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x39a59cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39a5a0: 0x50620001  beql        $v1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x39A5A0u;
    {
        const bool branch_taken_0x39a5a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x39a5a0) {
            ctx->pc = 0x39A5A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39A5A0u;
            // 0x39a5a4: 0xa200004b  sb          $zero, 0x4B($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 75), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39A5A8u;
            goto label_39a5a8;
        }
    }
    ctx->pc = 0x39A5A8u;
label_39a5a8:
    // 0x39a5a8: 0x82030001  lb          $v1, 0x1($s0)
    ctx->pc = 0x39a5a8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_39a5ac:
    // 0x39a5ac: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x39a5acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x39a5b0: 0x54620012  bnel        $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x39A5B0u;
    {
        const bool branch_taken_0x39a5b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x39a5b0) {
            ctx->pc = 0x39A5B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39A5B0u;
            // 0x39a5b4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39A5FCu;
            goto label_39a5fc;
        }
    }
    ctx->pc = 0x39A5B8u;
    // 0x39a5b8: 0xde020048  ld          $v0, 0x48($s0)
    ctx->pc = 0x39a5b8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x39a5bc: 0x3403ff00  ori         $v1, $zero, 0xFF00
    ctx->pc = 0x39a5bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
    // 0x39a5c0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x39a5c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x39a5c4: 0x3463ff00  ori         $v1, $v1, 0xFF00
    ctx->pc = 0x39a5c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65280);
    // 0x39a5c8: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x39a5c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x39a5cc: 0x42678  dsll        $a0, $a0, 25
    ctx->pc = 0x39a5ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 25);
    // 0x39a5d0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x39a5d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x39a5d4: 0x54440009  bnel        $v0, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x39A5D4u;
    {
        const bool branch_taken_0x39a5d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x39a5d4) {
            ctx->pc = 0x39A5D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39A5D4u;
            // 0x39a5d8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39A5FCu;
            goto label_39a5fc;
        }
    }
    ctx->pc = 0x39A5DCu;
    // 0x39a5dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39a5dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39a5e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x39a5e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39a5e4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x39a5e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x39a5e8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x39a5e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39a5ec: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x39a5ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x39a5f0: 0x80e67b4  j           func_399ED0
    ctx->pc = 0x39A5F0u;
    ctx->pc = 0x39A5F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39A5F0u;
    // 0x39a5f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399ED0u, 0x39A5F0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x39A5F8u;
label_39a5f8:
    // 0x39a5f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x39a5f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_39a5fc:
    // 0x39a5fc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x39a5fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x39a600: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x39a600u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39a604: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x39a604u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x39a608: 0x3e00008  jr          $ra
    ctx->pc = 0x39A608u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39A60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A608u;
        // 0x39a60c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39A608u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39A610u;
}
