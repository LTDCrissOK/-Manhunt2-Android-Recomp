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

// Function: sub_0011B388
// Address: 0x11b388 - 0x11b4d8
void sub_0011B388_0x11b388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011B388_0x11b388");
#endif

    switch (ctx->pc) {
        case 0x11b3d4u: goto label_11b3d4;
        case 0x11b3f8u: goto label_11b3f8;
        case 0x11b438u: goto label_11b438;
        case 0x11b470u: goto label_11b470;
        default: break;
    }

    ctx->pc = 0x11b388u;

    // 0x11b388: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x11b388u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x11b38c: 0xffb20090  sd          $s2, 0x90($sp)
    ctx->pc = 0x11b38cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 18));
    // 0x11b390: 0xffb00080  sd          $s0, 0x80($sp)
    ctx->pc = 0x11b390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 16));
    // 0x11b394: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x11b394u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b398: 0xffb10088  sd          $s1, 0x88($sp)
    ctx->pc = 0x11b398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 17));
    // 0x11b39c: 0xffb30098  sd          $s3, 0x98($sp)
    ctx->pc = 0x11b39cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 19));
    // 0x11b3a0: 0xffb500a8  sd          $s5, 0xA8($sp)
    ctx->pc = 0x11b3a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 21));
    // 0x11b3a4: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x11b3a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x11b3a8: 0xffb400a0  sd          $s4, 0xA0($sp)
    ctx->pc = 0x11b3a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 20));
    // 0x11b3ac: 0x8cb400b0  lw          $s4, 0xB0($a1)
    ctx->pc = 0x11b3acu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 176)));
    // 0x11b3b0: 0x12800040  beqz        $s4, . + 4 + (0x40 << 2)
    ctx->pc = 0x11B3B0u;
    {
        const bool branch_taken_0x11b3b0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B3B0u;
        // 0x11b3b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b3b0) {
            ctx->pc = 0x11B4B4u;
            goto label_11b4b4;
        }
    }
    ctx->pc = 0x11B3B8u;
    // 0x11b3b8: 0x8e421214  lw          $v0, 0x1214($s2)
    ctx->pc = 0x11b3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4628)));
    // 0x11b3bc: 0x1282003c  beq         $s4, $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x11B3BCu;
    {
        const bool branch_taken_0x11b3bc = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x11B3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B3BCu;
        // 0x11b3c0: 0x3c040049  lui         $a0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b3bc) {
            ctx->pc = 0x11B4B0u;
            goto label_11b4b0;
        }
    }
    ctx->pc = 0x11B3C4u;
    // 0x11b3c4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x11b3c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b3c8: 0x2484b060  addiu       $a0, $a0, -0x4FA0
    ctx->pc = 0x11b3c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946912));
    // 0x11b3cc: 0xc04ae56  jal         func_12B958
    ctx->pc = 0x11B3CCu;
    SET_GPR_U32(ctx, 31, 0x11B3D4u);
    ctx->pc = 0x11B3D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B3CCu;
    // 0x11b3d0: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12B958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B958u, 0x11B3CCu, 0x11B3D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B3D4u;
label_11b3d4:
    // 0x11b3d4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x11b3d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b3d8: 0x12600036  beqz        $s3, . + 4 + (0x36 << 2)
    ctx->pc = 0x11B3D8u;
    {
        const bool branch_taken_0x11b3d8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B3D8u;
        // 0x11b3dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b3d8) {
            ctx->pc = 0x11B4B4u;
            goto label_11b4b4;
        }
    }
    ctx->pc = 0x11B3E0u;
    // 0x11b3e0: 0x92421212  lbu         $v0, 0x1212($s2)
    ctx->pc = 0x11b3e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4626)));
    // 0x11b3e4: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x11B3E4u;
    {
        const bool branch_taken_0x11b3e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B3E4u;
        // 0x11b3e8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b3e4) {
            ctx->pc = 0x11B4ACu;
            goto label_11b4ac;
        }
    }
    ctx->pc = 0x11B3ECu;
    // 0x11b3ec: 0x2415001e  addiu       $s5, $zero, 0x1E
    ctx->pc = 0x11b3ecu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x11b3f0: 0x92421210  lbu         $v0, 0x1210($s2)
    ctx->pc = 0x11b3f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4624)));
    // 0x11b3f4: 0x0  nop
    ctx->pc = 0x11b3f4u;
    // NOP
label_11b3f8:
    // 0x11b3f8: 0x102180  sll         $a0, $s0, 6
    ctx->pc = 0x11b3f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x11b3fc: 0x212c0  sll         $v0, $v0, 11
    ctx->pc = 0x11b3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
    // 0x11b400: 0x24420210  addiu       $v0, $v0, 0x210
    ctx->pc = 0x11b400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 528));
    // 0x11b404: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x11b404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x11b408: 0x448821  addu        $s1, $v0, $a0
    ctx->pc = 0x11b408u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x11b40c: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x11b40cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x11b410: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x11B410u;
    {
        const bool branch_taken_0x11b410 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B410u;
        // 0x11b414: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b410) {
            ctx->pc = 0x11B420u;
            goto label_11b420;
        }
    }
    ctx->pc = 0x11B418u;
    // 0x11b418: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x11B418u;
    {
        const bool branch_taken_0x11b418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B418u;
        // 0x11b41c: 0x26070001  addiu       $a3, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b418) {
            ctx->pc = 0x11B490u;
            goto label_11b490;
        }
    }
    ctx->pc = 0x11B420u;
label_11b420:
    // 0x11b420: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x11b420u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x11b424: 0x54c00007  bnel        $a2, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x11B424u;
    {
        const bool branch_taken_0x11b424 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x11b424) {
            ctx->pc = 0x11B428u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11B424u;
            // 0x11b428: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11B444u;
            goto label_11b444;
        }
    }
    ctx->pc = 0x11B42Cu;
    // 0x11b42c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x11b42cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x11b430: 0xc046d36  jal         func_11B4D8
    ctx->pc = 0x11B430u;
    SET_GPR_U32(ctx, 31, 0x11B438u);
    ctx->pc = 0x11B434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11B430u;
    // 0x11b434: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11B4D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11B4D8u, 0x11B430u, 0x11B438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11B438u;
label_11b438:
    // 0x11b438: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x11b438u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11b43c: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x11B43Cu;
    {
        const bool branch_taken_0x11b43c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B43Cu;
        // 0x11b440: 0x26070001  addiu       $a3, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b43c) {
            ctx->pc = 0x11B494u;
            goto label_11b494;
        }
    }
    ctx->pc = 0x11B444u;
label_11b444:
    // 0x11b444: 0x14550003  bne         $v0, $s5, . + 4 + (0x3 << 2)
    ctx->pc = 0x11B444u;
    {
        const bool branch_taken_0x11b444 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        ctx->pc = 0x11B448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B444u;
        // 0x11b448: 0x26070001  addiu       $a3, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b444) {
            ctx->pc = 0x11B454u;
            goto label_11b454;
        }
    }
    ctx->pc = 0x11B44Cu;
    // 0x11b44c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x11B44Cu;
    {
        const bool branch_taken_0x11b44c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B44Cu;
        // 0x11b450: 0xae280020  sw          $t0, 0x20($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b44c) {
            ctx->pc = 0x11B498u;
            goto label_11b498;
        }
    }
    ctx->pc = 0x11B454u;
label_11b454:
    // 0x11b454: 0x1260000f  beqz        $s3, . + 4 + (0xF << 2)
    ctx->pc = 0x11B454u;
    {
        const bool branch_taken_0x11b454 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B454u;
        // 0x11b458: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b454) {
            ctx->pc = 0x11B494u;
            goto label_11b494;
        }
    }
    ctx->pc = 0x11B45Cu;
    // 0x11b45c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x11b45cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11b460: 0x5046000c  beql        $v0, $a2, . + 4 + (0xC << 2)
    ctx->pc = 0x11B460u;
    {
        const bool branch_taken_0x11b460 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        if (branch_taken_0x11b460) {
            ctx->pc = 0x11B464u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11B460u;
            // 0x11b464: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11B494u;
            goto label_11b494;
        }
    }
    ctx->pc = 0x11B468u;
    // 0x11b468: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x11b468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x11b46c: 0x0  nop
    ctx->pc = 0x11b46cu;
    // NOP
label_11b470:
    // 0x11b470: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x11b470u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x11b474: 0xb3182b  sltu        $v1, $a1, $s3
    ctx->pc = 0x11b474u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x11b478: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x11B478u;
    {
        const bool branch_taken_0x11b478 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B478u;
        // 0x11b47c: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b478) {
            ctx->pc = 0x11B494u;
            goto label_11b494;
        }
    }
    ctx->pc = 0x11B480u;
    // 0x11b480: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x11b480u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x11b484: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x11b484u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11b488: 0x1486fff9  bne         $a0, $a2, . + 4 + (-0x7 << 2)
    ctx->pc = 0x11B488u;
    {
        const bool branch_taken_0x11b488 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        ctx->pc = 0x11B48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B488u;
        // 0x11b48c: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b488) {
            ctx->pc = 0x11B470u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11b470;
        }
    }
    ctx->pc = 0x11B490u;
label_11b490:
    // 0x11b490: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x11b490u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11b494:
    // 0x11b494: 0xae280020  sw          $t0, 0x20($s1)
    ctx->pc = 0x11b494u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 8));
label_11b498:
    // 0x11b498: 0x30f000ff  andi        $s0, $a3, 0xFF
    ctx->pc = 0x11b498u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x11b49c: 0x92421212  lbu         $v0, 0x1212($s2)
    ctx->pc = 0x11b49cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4626)));
    // 0x11b4a0: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x11b4a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x11b4a4: 0x5440ffd4  bnel        $v0, $zero, . + 4 + (-0x2C << 2)
    ctx->pc = 0x11B4A4u;
    {
        const bool branch_taken_0x11b4a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11b4a4) {
            ctx->pc = 0x11B4A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11B4A4u;
            // 0x11b4a8: 0x92421210  lbu         $v0, 0x1210($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4624)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11B3F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11b3f8;
        }
    }
    ctx->pc = 0x11B4ACu;
label_11b4ac:
    // 0x11b4ac: 0xae541214  sw          $s4, 0x1214($s2)
    ctx->pc = 0x11b4acu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4628), GPR_U32(ctx, 20));
label_11b4b0:
    // 0x11b4b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11b4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11b4b4:
    // 0x11b4b4: 0xdfb00080  ld          $s0, 0x80($sp)
    ctx->pc = 0x11b4b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x11b4b8: 0xdfb10088  ld          $s1, 0x88($sp)
    ctx->pc = 0x11b4b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x11b4bc: 0xdfb20090  ld          $s2, 0x90($sp)
    ctx->pc = 0x11b4bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x11b4c0: 0xdfb30098  ld          $s3, 0x98($sp)
    ctx->pc = 0x11b4c0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x11b4c4: 0xdfb400a0  ld          $s4, 0xA0($sp)
    ctx->pc = 0x11b4c4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x11b4c8: 0xdfb500a8  ld          $s5, 0xA8($sp)
    ctx->pc = 0x11b4c8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x11b4cc: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x11b4ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x11b4d0: 0x3e00008  jr          $ra
    ctx->pc = 0x11B4D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11B4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B4D0u;
        // 0x11b4d4: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11B4D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11B4D8u;
}
