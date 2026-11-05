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

// Function: sub_0025A368
// Address: 0x25a368 - 0x25a530
void sub_0025A368_0x25a368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025A368_0x25a368");
#endif

    switch (ctx->pc) {
        case 0x25a40cu: goto label_25a40c;
        case 0x25a430u: goto label_25a430;
        case 0x25a490u: goto label_25a490;
        case 0x25a4d0u: goto label_25a4d0;
        case 0x25a4f8u: goto label_25a4f8;
        default: break;
    }

    ctx->pc = 0x25a368u;

    // 0x25a368: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x25a368u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x25a36c: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x25a36cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x25a370: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x25a370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x25a374: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x25a374u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a378: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x25a378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x25a37c: 0x3a0982d  daddu       $s3, $sp, $zero
    ctx->pc = 0x25a37cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a380: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x25a380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x25a384: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x25a384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x25a388: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x25a388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x25a38c: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x25a38cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x25a390: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x25a390u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x25a394: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x25a394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x25a398: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x25a398u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x25a39c: 0x1082000a  beq         $a0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x25A39Cu;
    {
        const bool branch_taken_0x25a39c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x25A3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A39Cu;
        // 0x25a3a0: 0xafa60000  sw          $a2, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a39c) {
            ctx->pc = 0x25A3C8u;
            goto label_25a3c8;
        }
    }
    ctx->pc = 0x25A3A4u;
    // 0x25a3a4: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x25A3A4u;
    {
        const bool branch_taken_0x25a3a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x25a3a4) {
            ctx->pc = 0x25A3A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25A3A4u;
            // 0x25a3a8: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25A3BCu;
            goto label_25a3bc;
        }
    }
    ctx->pc = 0x25A3ACu;
    // 0x25a3ac: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x25a3acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x25a3b0: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x25a3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x25a3b4: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x25a3b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x25a3b8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x25a3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_25a3bc:
    // 0x25a3bc: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x25a3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x25a3c0: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x25A3C0u;
    {
        const bool branch_taken_0x25a3c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A3C0u;
        // 0x25a3c4: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a3c0) {
            ctx->pc = 0x25A508u;
            goto label_25a508;
        }
    }
    ctx->pc = 0x25A3C8u;
label_25a3c8:
    // 0x25a3c8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x25a3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x25a3cc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x25a3ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a3d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25a3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25a3d4: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x25a3d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x25a3d8: 0x2431823  subu        $v1, $s2, $v1
    ctx->pc = 0x25a3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x25a3dc: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x25a3dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x25a3e0: 0x318c3  sra         $v1, $v1, 3
    ctx->pc = 0x25a3e0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
    // 0x25a3e4: 0x27a20014  addiu       $v0, $sp, 0x14
    ctx->pc = 0x25a3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x25a3e8: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x25a3e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x25a3ec: 0xa3100b  movn        $v0, $a1, $v1
    ctx->pc = 0x25a3ecu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x25a3f0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x25a3f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25a3f4: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x25a3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x25a3f8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x25A3F8u;
    {
        const bool branch_taken_0x25a3f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A3F8u;
        // 0x25a3fc: 0x210c0  sll         $v0, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a3f8) {
            ctx->pc = 0x25A414u;
            goto label_25a414;
        }
    }
    ctx->pc = 0x25A400u;
    // 0x25a400: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x25a400u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a404: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x25A404u;
    SET_GPR_U32(ctx, 31, 0x25A40Cu);
    ctx->pc = 0x25A408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A404u;
    // 0x25a408: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x25A404u, 0x25A40Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A40Cu;
label_25a40c:
    // 0x25a40c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x25A40Cu;
    {
        const bool branch_taken_0x25a40c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A40Cu;
        // 0x25a410: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a40c) {
            ctx->pc = 0x25A420u;
            goto label_25a420;
        }
    }
    ctx->pc = 0x25A414u;
label_25a414:
    // 0x25a414: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x25a414u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a418: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x25a418u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a41c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x25a41cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_25a420:
    // 0x25a420: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x25a420u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x25a424: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x25a424u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a428: 0x1092000a  beq         $a0, $s2, . + 4 + (0xA << 2)
    ctx->pc = 0x25A428u;
    {
        const bool branch_taken_0x25a428 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 18));
        ctx->pc = 0x25A42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A428u;
        // 0x25a42c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a428) {
            ctx->pc = 0x25A454u;
            goto label_25a454;
        }
    }
    ctx->pc = 0x25A430u;
label_25a430:
    // 0x25a430: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x25A430u;
    {
        const bool branch_taken_0x25a430 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x25a430) {
            ctx->pc = 0x25A434u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25A430u;
            // 0x25a434: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25A44Cu;
            goto label_25a44c;
        }
    }
    ctx->pc = 0x25A438u;
    // 0x25a438: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x25a438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x25a43c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x25a43cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x25a440: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x25a440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x25a444: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x25a444u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x25a448: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x25a448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_25a44c:
    // 0x25a44c: 0x1492fff8  bne         $a0, $s2, . + 4 + (-0x8 << 2)
    ctx->pc = 0x25A44Cu;
    {
        const bool branch_taken_0x25a44c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 18));
        ctx->pc = 0x25A450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A44Cu;
        // 0x25a450: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a44c) {
            ctx->pc = 0x25A430u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25a430;
        }
    }
    ctx->pc = 0x25A454u;
label_25a454:
    // 0x25a454: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x25a454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x25a458: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25a458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25a45c: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x25A45Cu;
    {
        const bool branch_taken_0x25a45c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x25A460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A45Cu;
        // 0x25a460: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a45c) {
            ctx->pc = 0x25A484u;
            goto label_25a484;
        }
    }
    ctx->pc = 0x25A464u;
    // 0x25a464: 0x52000014  beql        $s0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x25A464u;
    {
        const bool branch_taken_0x25a464 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x25a464) {
            ctx->pc = 0x25A468u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25A464u;
            // 0x25a468: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25A4B8u;
            goto label_25a4b8;
        }
    }
    ctx->pc = 0x25A46Cu;
    // 0x25a46c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x25a46cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x25a470: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x25a470u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x25a474: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x25a474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x25a478: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x25a478u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x25a47c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x25A47Cu;
    {
        const bool branch_taken_0x25a47c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A47Cu;
        // 0x25a480: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a47c) {
            ctx->pc = 0x25A4B8u;
            goto label_25a4b8;
        }
    }
    ctx->pc = 0x25A484u;
label_25a484:
    // 0x25a484: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x25a484u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a488: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x25A488u;
    {
        const bool branch_taken_0x25a488 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A488u;
        // 0x25a48c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a488) {
            ctx->pc = 0x25A4B0u;
            goto label_25a4b0;
        }
    }
    ctx->pc = 0x25A490u;
label_25a490:
    // 0x25a490: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x25A490u;
    {
        const bool branch_taken_0x25a490 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A490u;
        // 0x25a494: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a490) {
            ctx->pc = 0x25A4A8u;
            goto label_25a4a8;
        }
    }
    ctx->pc = 0x25A498u;
    // 0x25a498: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x25a498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x25a49c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x25a49cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x25a4a0: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x25a4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x25a4a4: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x25a4a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_25a4a8:
    // 0x25a4a8: 0x14a0fff9  bnez        $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x25A4A8u;
    {
        const bool branch_taken_0x25a4a8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x25A4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A4A8u;
        // 0x25a4ac: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a4a8) {
            ctx->pc = 0x25A490u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25a490;
        }
    }
    ctx->pc = 0x25A4B0u;
label_25a4b0:
    // 0x25a4b0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x25a4b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a4b4: 0x0  nop
    ctx->pc = 0x25a4b4u;
    // NOP
label_25a4b8:
    // 0x25a4b8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x25a4b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x25a4bc: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x25a4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x25a4c0: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x25A4C0u;
    {
        const bool branch_taken_0x25a4c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x25A4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A4C0u;
        // 0x25a4c4: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a4c0) {
            ctx->pc = 0x25A4E8u;
            goto label_25a4e8;
        }
    }
    ctx->pc = 0x25A4C8u;
    // 0x25a4c8: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x25a4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x25a4cc: 0x0  nop
    ctx->pc = 0x25a4ccu;
    // NOP
label_25a4d0:
    // 0x25a4d0: 0x0  nop
    ctx->pc = 0x25a4d0u;
    // NOP
    // 0x25a4d4: 0x0  nop
    ctx->pc = 0x25a4d4u;
    // NOP
    // 0x25a4d8: 0x0  nop
    ctx->pc = 0x25a4d8u;
    // NOP
    // 0x25a4dc: 0x0  nop
    ctx->pc = 0x25a4dcu;
    // NOP
    // 0x25a4e0: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x25A4E0u;
    {
        const bool branch_taken_0x25a4e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x25A4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A4E0u;
        // 0x25a4e4: 0x24420008  addiu       $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a4e0) {
            ctx->pc = 0x25A4D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25a4d0;
        }
    }
    ctx->pc = 0x25A4E8u;
label_25a4e8:
    // 0x25a4e8: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25A4E8u;
    {
        const bool branch_taken_0x25a4e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A4E8u;
        // 0x25a4ec: 0x2b41021  addu        $v0, $s5, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a4e8) {
            ctx->pc = 0x25A4FCu;
            goto label_25a4fc;
        }
    }
    ctx->pc = 0x25A4F0u;
    // 0x25a4f0: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x25A4F0u;
    SET_GPR_U32(ctx, 31, 0x25A4F8u);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x25A4F0u, 0x25A4F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A4F8u;
label_25a4f8:
    // 0x25a4f8: 0x2b41021  addu        $v0, $s5, $s4
    ctx->pc = 0x25a4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 20)));
label_25a4fc:
    // 0x25a4fc: 0xae340000  sw          $s4, 0x0($s1)
    ctx->pc = 0x25a4fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 20));
    // 0x25a500: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x25a500u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x25a504: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x25a504u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
label_25a508:
    // 0x25a508: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x25a508u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25a50c: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x25a50cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x25a510: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x25a510u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25a514: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x25a514u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x25a518: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x25a518u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25a51c: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x25a51cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x25a520: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x25a520u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25a524: 0x3e00008  jr          $ra
    ctx->pc = 0x25A524u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25A528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A524u;
        // 0x25a528: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25A524u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25A52Cu;
    // 0x25a52c: 0x0  nop
    ctx->pc = 0x25a52cu;
    // NOP
    ctx->pc = 0x25a530u;
}
