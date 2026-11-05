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

// Function: sub_003BD2E0
// Address: 0x3bd2e0 - 0x3bd440
void sub_003BD2E0_0x3bd2e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BD2E0_0x3bd2e0");
#endif

    switch (ctx->pc) {
        case 0x3bd33cu: goto label_3bd33c;
        case 0x3bd350u: goto label_3bd350;
        case 0x3bd378u: goto label_3bd378;
        case 0x3bd390u: goto label_3bd390;
        case 0x3bd3b0u: goto label_3bd3b0;
        case 0x3bd40cu: goto label_3bd40c;
        default: break;
    }

    ctx->pc = 0x3bd2e0u;

    // 0x3bd2e0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3bd2e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3bd2e4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x3bd2e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x3bd2e8: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x3bd2e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x3bd2ec: 0x3c120043  lui         $s2, 0x43
    ctx->pc = 0x3bd2ecu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)67 << 16));
    // 0x3bd2f0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x3bd2f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x3bd2f4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3bd2f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x3bd2f8: 0x2651ca48  addiu       $s1, $s2, -0x35B8
    ctx->pc = 0x3bd2f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 4294953544));
    // 0x3bd2fc: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x3bd2fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x3bd300: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3bd300u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3bd304: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3bd304u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x42CA50u));
    // 0x3bd308: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3BD308u;
    {
        const bool branch_taken_0x3bd308 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3BD30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BD308u;
        // 0x3bd30c: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bd308) {
            ctx->pc = 0x3BD31Cu;
            goto label_3bd31c;
        }
    }
    ctx->pc = 0x3BD310u;
    // 0x3bd310: 0x3c028106  lui         $v0, 0x8106
    ctx->pc = 0x3bd310u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33030 << 16));
    // 0x3bd314: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x3BD314u;
    {
        const bool branch_taken_0x3bd314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BD318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BD314u;
        // 0x3bd318: 0x34428001  ori         $v0, $v0, 0x8001 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32769);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bd314) {
            ctx->pc = 0x3BD420u;
            goto label_3bd420;
        }
    }
    ctx->pc = 0x3BD31Cu;
label_3bd31c:
    // 0x3bd31c: 0x3c130066  lui         $s3, 0x66
    ctx->pc = 0x3bd31cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)102 << 16));
    // 0x3bd320: 0xfe40ca48  sd          $zero, -0x35B8($s2)
    ctx->pc = 0x3bd320u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 4294953544), GPR_U64(ctx, 0));
    // 0x3bd324: 0x2670eb80  addiu       $s0, $s3, -0x1480
    ctx->pc = 0x3bd324u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4294962048));
    // 0x3bd328: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x3bd328u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x3bd32c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3bd32cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bd330: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3bd330u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bd334: 0xc0efab3  jal         func_3BEACC
    ctx->pc = 0x3BD334u;
    SET_GPR_U32(ctx, 31, 0x3BD33Cu);
    ctx->pc = 0x3BD338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BD334u;
    // 0x3bd338: 0x24062000  addiu       $a2, $zero, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x3BD334u, 0x3BD33Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BD33Cu;
label_3bd33c:
    // 0x3bd33c: 0xae300014  sw          $s0, 0x14($s1)
    ctx->pc = 0x3bd33cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 16));
    // 0x3bd340: 0x26032000  addiu       $v1, $s0, 0x2000
    ctx->pc = 0x3bd340u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 8192));
    // 0x3bd344: 0x2402007f  addiu       $v0, $zero, 0x7F
    ctx->pc = 0x3bd344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x3bd348: 0x26101fc0  addiu       $s0, $s0, 0x1FC0
    ctx->pc = 0x3bd348u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8128));
    // 0x3bd34c: 0x0  nop
    ctx->pc = 0x3bd34cu;
    // NOP
label_3bd350:
    // 0x3bd350: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3bd350u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x3bd354: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3bd354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3bd358: 0x2610ffc0  addiu       $s0, $s0, -0x40
    ctx->pc = 0x3bd358u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967232));
    // 0x3bd35c: 0x2463ffc0  addiu       $v1, $v1, -0x40
    ctx->pc = 0x3bd35cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967232));
    // 0x3bd360: 0x0  nop
    ctx->pc = 0x3bd360u;
    // NOP
    // 0x3bd364: 0x441fffa  bgez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3BD364u;
    {
        const bool branch_taken_0x3bd364 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x3bd364) {
            ctx->pc = 0x3BD350u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3bd350;
        }
    }
    ctx->pc = 0x3BD36Cu;
    // 0x3bd36c: 0x2662eb80  addiu       $v0, $s3, -0x1480
    ctx->pc = 0x3bd36cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294962048));
    // 0x3bd370: 0xc0ef834  jal         func_3BE0D0
    ctx->pc = 0x3BD370u;
    SET_GPR_U32(ctx, 31, 0x3BD378u);
    ctx->pc = 0x3BD374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BD370u;
    // 0x3bd374: 0xac401fc0  sw          $zero, 0x1FC0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 8128), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE0D0u, 0x3BD370u, 0x3BD378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BD378u;
label_3bd378:
    // 0x3bd378: 0x3c05003c  lui         $a1, 0x3C
    ctx->pc = 0x3bd378u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
    // 0x3bd37c: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x3bd37cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x3bd380: 0x24a5d440  addiu       $a1, $a1, -0x2BC0
    ctx->pc = 0x3bd380u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956096));
    // 0x3bd384: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3bd384u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bd388: 0xc0f25a4  jal         func_3C9690
    ctx->pc = 0x3BD388u;
    SET_GPR_U32(ctx, 31, 0x3BD390u);
    ctx->pc = 0x3BD38Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BD388u;
    // 0x3bd38c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C9690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C9690u, 0x3BD388u, 0x3BD390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BD390u;
label_3bd390:
    // 0x3bd390: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3bd390u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bd394: 0x4630004  bgezl       $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3BD394u;
    {
        const bool branch_taken_0x3bd394 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x3bd394) {
            ctx->pc = 0x3BD398u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BD394u;
            // 0x3bd398: 0x2642ca48  addiu       $v0, $s2, -0x35B8 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294953544));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BD3A8u;
            goto label_3bd3a8;
        }
    }
    ctx->pc = 0x3BD39Cu;
    // 0x3bd39c: 0x3c028106  lui         $v0, 0x8106
    ctx->pc = 0x3bd39cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33030 << 16));
    // 0x3bd3a0: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x3BD3A0u;
    {
        const bool branch_taken_0x3bd3a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BD3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BD3A0u;
        // 0x3bd3a4: 0x34429021  ori         $v0, $v0, 0x9021 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36897);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bd3a0) {
            ctx->pc = 0x3BD420u;
            goto label_3bd420;
        }
    }
    ctx->pc = 0x3BD3A8u;
label_3bd3a8:
    // 0x3bd3a8: 0xc0f4006  jal         func_3D0018
    ctx->pc = 0x3BD3A8u;
    SET_GPR_U32(ctx, 31, 0x3BD3B0u);
    ctx->pc = 0x3BD3ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BD3A8u;
    // 0x3bd3ac: 0xac430008  sw          $v1, 0x8($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D0018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D0018u, 0x3BD3A8u, 0x3BD3B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BD3B0u;
label_3bd3b0:
    // 0x3bd3b0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x3bd3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x3bd3b4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3bd3b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bd3b8: 0x34630810  ori         $v1, $v1, 0x810
    ctx->pc = 0x3bd3b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2064);
    // 0x3bd3bc: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3bd3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x3bd3c0: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x3bd3c0u;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, 0x10000810u)); // MMIO: 0x10000810
    // 0x3bd3c4: 0x3442fffc  ori         $v0, $v0, 0xFFFC
    ctx->pc = 0x3bd3c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
    // 0x3bd3c8: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x3bd3c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x3bd3cc: 0x542825  or          $a1, $v0, $s4
    ctx->pc = 0x3bd3ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x3bd3d0: 0x34a50300  ori         $a1, $a1, 0x300
    ctx->pc = 0x3bd3d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)768);
    // 0x3bd3d4: 0x30a20080  andi        $v0, $a1, 0x80
    ctx->pc = 0x3bd3d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)128);
    // 0x3bd3d8: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3BD3D8u;
    {
        const bool branch_taken_0x3bd3d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BD3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BD3D8u;
        // 0x3bd3dc: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bd3d8) {
            ctx->pc = 0x3BD3FCu;
            goto label_3bd3fc;
        }
    }
    ctx->pc = 0x3BD3E0u;
    // 0x3bd3e0: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x3bd3e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x3bd3e4: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x3bd3e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x3bd3e8: 0x34840820  ori         $a0, $a0, 0x820
    ctx->pc = 0x3bd3e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2080);
    // 0x3bd3ec: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x3bd3ecu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0)); // MMIO: 0x10000800
    // 0x3bd3f0: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x3bd3f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3bd3f4: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x3bd3f4u;
    runtime->Store32(rdram, ctx, 0x10000820u, GPR_U32(ctx, 3)); // MMIO: 0x10000820
    // 0x3bd3f8: 0x34a50c80  ori         $a1, $a1, 0xC80
    ctx->pc = 0x3bd3f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3200);
label_3bd3fc:
    // 0x3bd3fc: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x3bd3fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
    // 0x3bd400: 0xac250810  sw          $a1, 0x810($at)
    ctx->pc = 0x3bd400u;
    runtime->Store32(rdram, ctx, 0x10000810u, GPR_U32(ctx, 5)); // MMIO: 0x10000810
    // 0x3bd404: 0xc0f2904  jal         func_3CA410
    ctx->pc = 0x3BD404u;
    SET_GPR_U32(ctx, 31, 0x3BD40Cu);
    ctx->pc = 0x3BD408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BD404u;
    // 0x3bd408: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CA410u, 0x3BD404u, 0x3BD40Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BD40Cu;
label_3bd40c:
    // 0x3bd40c: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3BD40Cu;
    {
        const bool branch_taken_0x3bd40c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BD410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BD40Cu;
        // 0x3bd410: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bd40c) {
            ctx->pc = 0x3BD420u;
            goto label_3bd420;
        }
    }
    ctx->pc = 0x3BD414u;
    // 0x3bd414: 0xf  sync
    ctx->pc = 0x3bd414u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x3bd418: 0x42000038  ei
    ctx->pc = 0x3bd418u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x3bd41c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3bd41cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3bd420:
    // 0x3bd420: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3bd420u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3bd424: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x3bd424u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3bd428: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x3bd428u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3bd42c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3bd42cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3bd430: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3bd430u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3bd434: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3bd434u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3bd438: 0x3e00008  jr          $ra
    ctx->pc = 0x3BD438u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BD43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BD438u;
        // 0x3bd43c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BD438u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BD440u;
}
