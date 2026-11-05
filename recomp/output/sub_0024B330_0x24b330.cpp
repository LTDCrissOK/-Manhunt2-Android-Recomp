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

// Function: sub_0024B330
// Address: 0x24b330 - 0x24b448
void sub_0024B330_0x24b330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024B330_0x24b330");
#endif

    switch (ctx->pc) {
        case 0x24b350u: goto label_24b350;
        case 0x24b388u: goto label_24b388;
        case 0x24b3c8u: goto label_24b3c8;
        case 0x24b41cu: goto label_24b41c;
        case 0x24b428u: goto label_24b428;
        case 0x24b434u: goto label_24b434;
        default: break;
    }

    ctx->pc = 0x24b330u;

    // 0x24b330: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x24b330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x24b334: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x24b334u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24b338: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24b338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24b33c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x24b33cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24b340: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x24b340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x24b344: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x24b344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x24b348: 0xc06a4c2  jal         func_1A9308
    ctx->pc = 0x24B348u;
    SET_GPR_U32(ctx, 31, 0x24B350u);
    ctx->pc = 0x24B34Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B348u;
    // 0x24b34c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A9308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A9308u, 0x24B348u, 0x24B350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B350u;
label_24b350:
    // 0x24b350: 0x8e020150  lw          $v0, 0x150($s0)
    ctx->pc = 0x24b350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x24b354: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x24b354u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x24b358: 0x8c71bd50  lw          $s1, -0x42B0($v1)
    ctx->pc = 0x24b358u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x3FBD50u));
    // 0x24b35c: 0x240407e0  addiu       $a0, $zero, 0x7E0
    ctx->pc = 0x24b35cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2016));
    // 0x24b360: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x24b360u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x24b364: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x24b364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x24b368: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x24b368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24b36c: 0x54640032  bnel        $v1, $a0, . + 4 + (0x32 << 2)
    ctx->pc = 0x24B36Cu;
    {
        const bool branch_taken_0x24b36c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x24b36c) {
            ctx->pc = 0x24B370u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24B36Cu;
            // 0x24b370: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24B438u;
            goto label_24b438;
        }
    }
    ctx->pc = 0x24B374u;
    // 0x24b374: 0x8e0501e4  lw          $a1, 0x1E4($s0)
    ctx->pc = 0x24b374u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 484)));
    // 0x24b378: 0x14a0000b  bnez        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x24B378u;
    {
        const bool branch_taken_0x24b378 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x24B37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B378u;
        // 0x24b37c: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b378) {
            ctx->pc = 0x24B3A8u;
            goto label_24b3a8;
        }
    }
    ctx->pc = 0x24B380u;
    // 0x24b380: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x24b380u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b384: 0x260301ec  addiu       $v1, $s0, 0x1EC
    ctx->pc = 0x24b384u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 492));
label_24b388:
    // 0x24b388: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x24b388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24b38c: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x24B38Cu;
    {
        const bool branch_taken_0x24b38c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24b38c) {
            ctx->pc = 0x24B390u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24B38Cu;
            // 0x24b390: 0x8c42000c  lw          $v0, 0xC($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24B3ACu;
            goto label_24b3ac;
        }
    }
    ctx->pc = 0x24B394u;
    // 0x24b394: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x24b394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x24b398: 0x28820004  slti        $v0, $a0, 0x4
    ctx->pc = 0x24b398u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x24b39c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x24B39Cu;
    {
        const bool branch_taken_0x24b39c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24B3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B39Cu;
        // 0x24b3a0: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b39c) {
            ctx->pc = 0x24B388u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24b388;
        }
    }
    ctx->pc = 0x24B3A4u;
    // 0x24b3a4: 0x8e0201e8  lw          $v0, 0x1E8($s0)
    ctx->pc = 0x24b3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 488)));
label_24b3a8:
    // 0x24b3a8: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x24b3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_24b3ac:
    // 0x24b3ac: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x24B3ACu;
    {
        const bool branch_taken_0x24b3ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B3ACu;
        // 0x24b3b0: 0xc4420010  lwc1        $f2, 0x10($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b3ac) {
            ctx->pc = 0x24B3BCu;
            goto label_24b3bc;
        }
    }
    ctx->pc = 0x24B3B4u;
    // 0x24b3b4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x24B3B4u;
    {
        const bool branch_taken_0x24b3b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B3B4u;
        // 0x24b3b8: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b3b4) {
            ctx->pc = 0x24B3E8u;
            goto label_24b3e8;
        }
    }
    ctx->pc = 0x24B3BCu;
label_24b3bc:
    // 0x24b3bc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x24b3bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b3c0: 0x260301ec  addiu       $v1, $s0, 0x1EC
    ctx->pc = 0x24b3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 492));
    // 0x24b3c4: 0x0  nop
    ctx->pc = 0x24b3c4u;
    // NOP
label_24b3c8:
    // 0x24b3c8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x24b3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24b3cc: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x24B3CCu;
    {
        const bool branch_taken_0x24b3cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24b3cc) {
            ctx->pc = 0x24B3D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24B3CCu;
            // 0x24b3d0: 0xc440001c  lwc1        $f0, 0x1C($v0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x24B3ECu;
            goto label_24b3ec;
        }
    }
    ctx->pc = 0x24B3D4u;
    // 0x24b3d4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x24b3d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x24b3d8: 0x28820004  slti        $v0, $a0, 0x4
    ctx->pc = 0x24b3d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x24b3dc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x24B3DCu;
    {
        const bool branch_taken_0x24b3dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24B3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B3DCu;
        // 0x24b3e0: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b3dc) {
            ctx->pc = 0x24B3C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24b3c8;
        }
    }
    ctx->pc = 0x24B3E4u;
    // 0x24b3e4: 0x8e0201e8  lw          $v0, 0x1E8($s0)
    ctx->pc = 0x24b3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 488)));
label_24b3e8:
    // 0x24b3e8: 0xc440001c  lwc1        $f0, 0x1C($v0)
    ctx->pc = 0x24b3e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24b3ec:
    // 0x24b3ec: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x24b3ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x24b3f0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x24b3f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x24b3f4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x24b3f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24b3f8: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x24b3f8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x24b3fc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x24b3fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24b400: 0x0  nop
    ctx->pc = 0x24b400u;
    // NOP
    // 0x24b404: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x24B404u;
    {
        const bool branch_taken_0x24b404 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24B408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B404u;
        // 0x24b408: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b404) {
            ctx->pc = 0x24B434u;
            goto label_24b434;
        }
    }
    ctx->pc = 0x24B40Cu;
    // 0x24b40c: 0xae000190  sw          $zero, 0x190($s0)
    ctx->pc = 0x24b40cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 400), GPR_U32(ctx, 0));
    // 0x24b410: 0xae020160  sw          $v0, 0x160($s0)
    ctx->pc = 0x24b410u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 352), GPR_U32(ctx, 2));
    // 0x24b414: 0xc08bd98  jal         func_22F660
    ctx->pc = 0x24B414u;
    SET_GPR_U32(ctx, 31, 0x24B41Cu);
    ctx->pc = 0x24B418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B414u;
    // 0x24b418: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22F660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22F660u, 0x24B414u, 0x24B41Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B41Cu;
label_24b41c:
    // 0x24b41c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24b41cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b420: 0xc069832  jal         func_1A60C8
    ctx->pc = 0x24B420u;
    SET_GPR_U32(ctx, 31, 0x24B428u);
    ctx->pc = 0x24B424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B420u;
    // 0x24b424: 0x2405080d  addiu       $a1, $zero, 0x80D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2061));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A60C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A60C8u, 0x24B420u, 0x24B428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B428u;
label_24b428:
    // 0x24b428: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x24b428u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b42c: 0xc092c02  jal         func_24B008
    ctx->pc = 0x24B42Cu;
    SET_GPR_U32(ctx, 31, 0x24B434u);
    ctx->pc = 0x24B430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B42Cu;
    // 0x24b430: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B008u, 0x24B42Cu, 0x24B434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B434u;
label_24b434:
    // 0x24b434: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24b434u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_24b438:
    // 0x24b438: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x24b438u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24b43c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x24b43cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24b440: 0x3e00008  jr          $ra
    ctx->pc = 0x24B440u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24B444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B440u;
        // 0x24b444: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24B440u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24B448u;
}
