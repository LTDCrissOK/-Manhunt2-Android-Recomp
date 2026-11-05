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

// Function: sub_0038E380
// Address: 0x38e380 - 0x38e630
void sub_0038E380_0x38e380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038E380_0x38e380");
#endif

    switch (ctx->pc) {
        case 0x38e3a4u: goto label_38e3a4;
        case 0x38e3d4u: goto label_38e3d4;
        case 0x38e3e0u: goto label_38e3e0;
        case 0x38e404u: goto label_38e404;
        case 0x38e414u: goto label_38e414;
        case 0x38e438u: goto label_38e438;
        case 0x38e45cu: goto label_38e45c;
        case 0x38e468u: goto label_38e468;
        case 0x38e47cu: goto label_38e47c;
        case 0x38e484u: goto label_38e484;
        case 0x38e4c8u: goto label_38e4c8;
        case 0x38e4e4u: goto label_38e4e4;
        case 0x38e4f8u: goto label_38e4f8;
        case 0x38e504u: goto label_38e504;
        case 0x38e514u: goto label_38e514;
        case 0x38e53cu: goto label_38e53c;
        case 0x38e560u: goto label_38e560;
        case 0x38e568u: goto label_38e568;
        case 0x38e57cu: goto label_38e57c;
        case 0x38e584u: goto label_38e584;
        case 0x38e5ccu: goto label_38e5cc;
        case 0x38e5f0u: goto label_38e5f0;
        case 0x38e604u: goto label_38e604;
        case 0x38e60cu: goto label_38e60c;
        case 0x38e614u: goto label_38e614;
        default: break;
    }

    ctx->pc = 0x38e380u;

    // 0x38e380: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x38e380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x38e384: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x38e384u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x38e388: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x38e388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x38e38c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x38e38cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38e390: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x38e390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x38e394: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x38e394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x38e398: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x38e398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x38e39c: 0xc0e32be  jal         func_38CAF8
    ctx->pc = 0x38E39Cu;
    SET_GPR_U32(ctx, 31, 0x38E3A4u);
    ctx->pc = 0x38E3A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38E39Cu;
    // 0x38e3a0: 0xae2000e8  sw          $zero, 0xE8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CAF8u, 0x38E39Cu, 0x38E3A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E3A4u;
label_38e3a4:
    // 0x38e3a4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x38e3a4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38e3a8: 0x31202  srl         $v0, $v1, 8
    ctx->pc = 0x38e3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x38e3ac: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x38e3acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x38e3b0: 0x31d02  srl         $v1, $v1, 20
    ctx->pc = 0x38e3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 20));
    // 0x38e3b4: 0xae230134  sw          $v1, 0x134($s1)
    ctx->pc = 0x38e3b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 308), GPR_U32(ctx, 3));
    // 0x38e3b8: 0x28440af1  slti        $a0, $v0, 0xAF1
    ctx->pc = 0x38e3b8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2801) ? 1 : 0);
    // 0x38e3bc: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x38E3BCu;
    {
        const bool branch_taken_0x38e3bc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x38E3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E3BCu;
        // 0x38e3c0: 0xae220138  sw          $v0, 0x138($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 312), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e3bc) {
            ctx->pc = 0x38E3D4u;
            goto label_38e3d4;
        }
    }
    ctx->pc = 0x38E3C4u;
    // 0x38e3c4: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x38e3c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x38e3c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x38e3c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38e3cc: 0xc0e28f8  jal         func_38A3E0
    ctx->pc = 0x38E3CCu;
    SET_GPR_U32(ctx, 31, 0x38E3D4u);
    ctx->pc = 0x38E3D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38E3CCu;
    // 0x38e3d0: 0x24a59608  addiu       $a1, $a1, -0x69F8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38A3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38A3E0u, 0x38E3CCu, 0x38E3D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E3D4u;
label_38e3d4:
    // 0x38e3d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x38e3d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38e3d8: 0xc0e32be  jal         func_38CAF8
    ctx->pc = 0x38E3D8u;
    SET_GPR_U32(ctx, 31, 0x38E3E0u);
    ctx->pc = 0x38E3DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38E3D8u;
    // 0x38e3dc: 0x2405001e  addiu       $a1, $zero, 0x1E (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CAF8u, 0x38E3D8u, 0x38E3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E3E0u;
label_38e3e0:
    // 0x38e3e0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x38e3e0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38e3e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x38e3e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38e3e8: 0x31042  srl         $v0, $v1, 1
    ctx->pc = 0x38e3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x38e3ec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x38e3ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38e3f0: 0x31b02  srl         $v1, $v1, 12
    ctx->pc = 0x38e3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 12));
    // 0x38e3f4: 0x304203ff  andi        $v0, $v0, 0x3FF
    ctx->pc = 0x38e3f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1023);
    // 0x38e3f8: 0xae230144  sw          $v1, 0x144($s1)
    ctx->pc = 0x38e3f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 324), GPR_U32(ctx, 3));
    // 0x38e3fc: 0xc0e32be  jal         func_38CAF8
    ctx->pc = 0x38E3FCu;
    SET_GPR_U32(ctx, 31, 0x38E404u);
    ctx->pc = 0x38E400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38E3FCu;
    // 0x38e400: 0xae220148  sw          $v0, 0x148($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 328), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CAF8u, 0x38E3FCu, 0x38E404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E404u;
label_38e404:
    // 0x38e404: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x38E404u;
    {
        const bool branch_taken_0x38e404 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38E408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E404u;
        // 0x38e408: 0xae220850  sw          $v0, 0x850($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e404) {
            ctx->pc = 0x38E440u;
            goto label_38e440;
        }
    }
    ctx->pc = 0x38E40Cu;
    // 0x38e40c: 0xc0e3b8e  jal         func_38EE38
    ctx->pc = 0x38E40Cu;
    SET_GPR_U32(ctx, 31, 0x38E414u);
    ctx->pc = 0x38E410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38E40Cu;
    // 0x38e410: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38EE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38EE38u, 0x38E40Cu, 0x38E414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E414u;
label_38e414:
    // 0x38e414: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x38e414u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x38e418: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x38e418u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x38e41c: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x38e41cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x38e420: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x38e420u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38e424: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x38e424u;
    runtime->Store32(rdram, ctx, 0x10002000u, GPR_U32(ctx, 3)); // MMIO: 0x10002000
    // 0x38e428: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x38e428u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38e42c: 0xae23082c  sw          $v1, 0x82C($s1)
    ctx->pc = 0x38e42cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2092), GPR_U32(ctx, 3));
    // 0x38e430: 0xc0e3b8e  jal         func_38EE38
    ctx->pc = 0x38E430u;
    SET_GPR_U32(ctx, 31, 0x38E438u);
    ctx->pc = 0x38E434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38E430u;
    // 0x38e434: 0xae250828  sw          $a1, 0x828($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 2088), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38EE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38EE38u, 0x38E430u, 0x38E438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E438u;
label_38e438:
    // 0x38e438: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x38E438u;
    {
        const bool branch_taken_0x38e438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38E43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E438u;
        // 0x38e43c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e438) {
            ctx->pc = 0x38E4FCu;
            goto label_38e4fc;
        }
    }
    ctx->pc = 0x38E440u;
label_38e440:
    // 0x38e440: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x38e440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x38e444: 0x8e240868  lw          $a0, 0x868($s1)
    ctx->pc = 0x38e444u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2152)));
    // 0x38e448: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x38e448u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x38e44c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x38e44cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x38e450: 0x2610e180  addiu       $s0, $s0, -0x1E80
    ctx->pc = 0x38e450u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294959488));
    // 0x38e454: 0xc0e180e  jal         func_386038
    ctx->pc = 0x38E454u;
    SET_GPR_U32(ctx, 31, 0x38E45Cu);
    ctx->pc = 0x38E458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38E454u;
    // 0x38e458: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x386038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x386038u, 0x38E454u, 0x38E45Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E45Cu;
label_38e45c:
    // 0x38e45c: 0x3c125000  lui         $s2, 0x5000
    ctx->pc = 0x38e45cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)20480 << 16));
    // 0x38e460: 0xc0e3b8e  jal         func_38EE38
    ctx->pc = 0x38E460u;
    SET_GPR_U32(ctx, 31, 0x38E468u);
    ctx->pc = 0x38E464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38E460u;
    // 0x38e464: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38EE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38EE38u, 0x38E460u, 0x38E468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E468u;
label_38e468:
    // 0x38e468: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x38e468u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x38e46c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x38e46cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38e470: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x38e470u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x38e474: 0xc0e3b8e  jal         func_38EE38
    ctx->pc = 0x38E474u;
    SET_GPR_U32(ctx, 31, 0x38E47Cu);
    ctx->pc = 0x38E478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38E474u;
    // 0x38e478: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38EE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38EE38u, 0x38E474u, 0x38E47Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E47Cu;
label_38e47c:
    // 0x38e47c: 0xc0f4006  jal         func_3D0018
    ctx->pc = 0x38E47Cu;
    SET_GPR_U32(ctx, 31, 0x38E484u);
    ctx->pc = 0x3D0018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D0018u, 0x38E47Cu, 0x38E484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E484u;
label_38e484:
    // 0x38e484: 0x3c030fff  lui         $v1, 0xFFF
    ctx->pc = 0x38e484u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
    // 0x38e488: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x38e488u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x38e48c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x38e48cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x38e490: 0x3484b410  ori         $a0, $a0, 0xB410
    ctx->pc = 0x38e490u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)46096);
    // 0x38e494: 0x2038024  and         $s0, $s0, $v1
    ctx->pc = 0x38e494u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x38e498: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x38e498u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x38e49c: 0xac900000  sw          $s0, 0x0($a0)
    ctx->pc = 0x38e49cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 16));
    // 0x38e4a0: 0x34a5b420  ori         $a1, $a1, 0xB420
    ctx->pc = 0x38e4a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)46112);
    // 0x38e4a4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x38e4a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x38e4a8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x38e4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x38e4ac: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x38e4acu;
    runtime->Store32(rdram, ctx, 0x1000B420u, GPR_U32(ctx, 4)); // MMIO: 0x1000b420
    // 0x38e4b0: 0x3463b400  ori         $v1, $v1, 0xB400
    ctx->pc = 0x38e4b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46080);
    // 0x38e4b4: 0x24040101  addiu       $a0, $zero, 0x101
    ctx->pc = 0x38e4b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x38e4b8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x38E4B8u;
    {
        const bool branch_taken_0x38e4b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38E4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E4B8u;
        // 0x38e4bc: 0xac640000  sw          $a0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e4b8) {
            ctx->pc = 0x38E4C8u;
            goto label_38e4c8;
        }
    }
    ctx->pc = 0x38E4C0u;
    // 0x38e4c0: 0xc0f401a  jal         func_3D0068
    ctx->pc = 0x38E4C0u;
    SET_GPR_U32(ctx, 31, 0x38E4C8u);
    ctx->pc = 0x3D0068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D0068u, 0x38E4C0u, 0x38E4C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E4C8u;
label_38e4c8:
    // 0x38e4c8: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x38e4c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
    // 0x38e4cc: 0xac322000  sw          $s2, 0x2000($at)
    ctx->pc = 0x38e4ccu;
    runtime->Store32(rdram, ctx, 0x10002000u, GPR_U32(ctx, 18)); // MMIO: 0x10002000
    // 0x38e4d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x38e4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38e4d4: 0xae32082c  sw          $s2, 0x82C($s1)
    ctx->pc = 0x38e4d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2092), GPR_U32(ctx, 18));
    // 0x38e4d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x38e4d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38e4dc: 0xc0e3b8e  jal         func_38EE38
    ctx->pc = 0x38E4DCu;
    SET_GPR_U32(ctx, 31, 0x38E4E4u);
    ctx->pc = 0x38E4E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38E4DCu;
    // 0x38e4e0: 0xae220828  sw          $v0, 0x828($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 2088), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38EE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38EE38u, 0x38E4DCu, 0x38E4E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E4E4u;
label_38e4e4:
    // 0x38e4e4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x38e4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x38e4e8: 0x8e240868  lw          $a0, 0x868($s1)
    ctx->pc = 0x38e4e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2152)));
    // 0x38e4ec: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x38e4ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x38e4f0: 0xc0e180e  jal         func_386038
    ctx->pc = 0x38E4F0u;
    SET_GPR_U32(ctx, 31, 0x38E4F8u);
    ctx->pc = 0x38E4F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38E4F0u;
    // 0x38e4f4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x386038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x386038u, 0x38E4F0u, 0x38E4F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E4F8u;
label_38e4f8:
    // 0x38e4f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x38e4f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_38e4fc:
    // 0x38e4fc: 0xc0e32be  jal         func_38CAF8
    ctx->pc = 0x38E4FCu;
    SET_GPR_U32(ctx, 31, 0x38E504u);
    ctx->pc = 0x38E500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38E4FCu;
    // 0x38e500: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CAF8u, 0x38E4FCu, 0x38E504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E504u;
label_38e504:
    // 0x38e504: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x38E504u;
    {
        const bool branch_taken_0x38e504 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38E508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E504u;
        // 0x38e508: 0xae220854  sw          $v0, 0x854($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2132), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e504) {
            ctx->pc = 0x38E544u;
            goto label_38e544;
        }
    }
    ctx->pc = 0x38E50Cu;
    // 0x38e50c: 0xc0e3b8e  jal         func_38EE38
    ctx->pc = 0x38E50Cu;
    SET_GPR_U32(ctx, 31, 0x38E514u);
    ctx->pc = 0x38E510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38E50Cu;
    // 0x38e510: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38EE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38EE38u, 0x38E50Cu, 0x38E514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E514u;
label_38e514:
    // 0x38e514: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x38e514u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x38e518: 0x3c035800  lui         $v1, 0x5800
    ctx->pc = 0x38e518u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)22528 << 16));
    // 0x38e51c: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x38e51cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x38e520: 0x3c045000  lui         $a0, 0x5000
    ctx->pc = 0x38e520u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20480 << 16));
    // 0x38e524: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x38e524u;
    runtime->Store32(rdram, ctx, 0x10002000u, GPR_U32(ctx, 3)); // MMIO: 0x10002000
    // 0x38e528: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x38e528u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38e52c: 0xae24082c  sw          $a0, 0x82C($s1)
    ctx->pc = 0x38e52cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2092), GPR_U32(ctx, 4));
    // 0x38e530: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x38e530u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38e534: 0xc0e3b8e  jal         func_38EE38
    ctx->pc = 0x38E534u;
    SET_GPR_U32(ctx, 31, 0x38E53Cu);
    ctx->pc = 0x38E538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38E534u;
    // 0x38e538: 0xae250828  sw          $a1, 0x828($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 2088), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38EE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38EE38u, 0x38E534u, 0x38E53Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E53Cu;
label_38e53c:
    // 0x38e53c: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x38E53Cu;
    {
        const bool branch_taken_0x38e53c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x38e53c) {
            ctx->pc = 0x38E604u;
            goto label_38e604;
        }
    }
    ctx->pc = 0x38E544u;
label_38e544:
    // 0x38e544: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x38e544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x38e548: 0x8e240868  lw          $a0, 0x868($s1)
    ctx->pc = 0x38e548u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2152)));
    // 0x38e54c: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x38e54cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x38e550: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x38e550u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x38e554: 0x2610e1c0  addiu       $s0, $s0, -0x1E40
    ctx->pc = 0x38e554u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294959552));
    // 0x38e558: 0xc0e180e  jal         func_386038
    ctx->pc = 0x38E558u;
    SET_GPR_U32(ctx, 31, 0x38E560u);
    ctx->pc = 0x38E55Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38E558u;
    // 0x38e55c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x386038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x386038u, 0x38E558u, 0x38E560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E560u;
label_38e560:
    // 0x38e560: 0xc0e3b8e  jal         func_38EE38
    ctx->pc = 0x38E560u;
    SET_GPR_U32(ctx, 31, 0x38E568u);
    ctx->pc = 0x38E564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38E560u;
    // 0x38e564: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38EE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38EE38u, 0x38E560u, 0x38E568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E568u;
label_38e568:
    // 0x38e568: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x38e568u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x38e56c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x38e56cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38e570: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x38e570u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x38e574: 0xc0e3b8e  jal         func_38EE38
    ctx->pc = 0x38E574u;
    SET_GPR_U32(ctx, 31, 0x38E57Cu);
    ctx->pc = 0x38E578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38E574u;
    // 0x38e578: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38EE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38EE38u, 0x38E574u, 0x38E57Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E57Cu;
label_38e57c:
    // 0x38e57c: 0xc0f4006  jal         func_3D0018
    ctx->pc = 0x38E57Cu;
    SET_GPR_U32(ctx, 31, 0x38E584u);
    ctx->pc = 0x3D0018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D0018u, 0x38E57Cu, 0x38E584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E584u;
label_38e584:
    // 0x38e584: 0x3c030fff  lui         $v1, 0xFFF
    ctx->pc = 0x38e584u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
    // 0x38e588: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x38e588u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x38e58c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x38e58cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x38e590: 0x3484b410  ori         $a0, $a0, 0xB410
    ctx->pc = 0x38e590u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)46096);
    // 0x38e594: 0x2038024  and         $s0, $s0, $v1
    ctx->pc = 0x38e594u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x38e598: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x38e598u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x38e59c: 0xac900000  sw          $s0, 0x0($a0)
    ctx->pc = 0x38e59cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 16));
    // 0x38e5a0: 0x34a5b420  ori         $a1, $a1, 0xB420
    ctx->pc = 0x38e5a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)46112);
    // 0x38e5a4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x38e5a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x38e5a8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x38e5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x38e5ac: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x38e5acu;
    runtime->Store32(rdram, ctx, 0x1000B420u, GPR_U32(ctx, 4)); // MMIO: 0x1000b420
    // 0x38e5b0: 0x3463b400  ori         $v1, $v1, 0xB400
    ctx->pc = 0x38e5b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46080);
    // 0x38e5b4: 0x24040101  addiu       $a0, $zero, 0x101
    ctx->pc = 0x38e5b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x38e5b8: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x38e5b8u;
    runtime->Store32(rdram, ctx, 0x1000B400u, GPR_U32(ctx, 4)); // MMIO: 0x1000b400
    // 0x38e5bc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x38E5BCu;
    {
        const bool branch_taken_0x38e5bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38E5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E5BCu;
        // 0x38e5c0: 0x3c025800  lui         $v0, 0x5800 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22528 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38e5bc) {
            ctx->pc = 0x38E5D0u;
            goto label_38e5d0;
        }
    }
    ctx->pc = 0x38E5C4u;
    // 0x38e5c4: 0xc0f401a  jal         func_3D0068
    ctx->pc = 0x38E5C4u;
    SET_GPR_U32(ctx, 31, 0x38E5CCu);
    ctx->pc = 0x3D0068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D0068u, 0x38E5C4u, 0x38E5CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E5CCu;
label_38e5cc:
    // 0x38e5cc: 0x3c025800  lui         $v0, 0x5800
    ctx->pc = 0x38e5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22528 << 16));
label_38e5d0:
    // 0x38e5d0: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x38e5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x38e5d4: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x38e5d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
    // 0x38e5d8: 0xac222000  sw          $v0, 0x2000($at)
    ctx->pc = 0x38e5d8u;
    runtime->Store32(rdram, ctx, 0x10002000u, GPR_U32(ctx, 2)); // MMIO: 0x10002000
    // 0x38e5dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x38e5dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38e5e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x38e5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38e5e4: 0xae23082c  sw          $v1, 0x82C($s1)
    ctx->pc = 0x38e5e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2092), GPR_U32(ctx, 3));
    // 0x38e5e8: 0xc0e3b8e  jal         func_38EE38
    ctx->pc = 0x38E5E8u;
    SET_GPR_U32(ctx, 31, 0x38E5F0u);
    ctx->pc = 0x38E5ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38E5E8u;
    // 0x38e5ec: 0xae220828  sw          $v0, 0x828($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 2088), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38EE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38EE38u, 0x38E5E8u, 0x38E5F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E5F0u;
label_38e5f0:
    // 0x38e5f0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x38e5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x38e5f4: 0x8e240868  lw          $a0, 0x868($s1)
    ctx->pc = 0x38e5f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2152)));
    // 0x38e5f8: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x38e5f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x38e5fc: 0xc0e180e  jal         func_386038
    ctx->pc = 0x38E5FCu;
    SET_GPR_U32(ctx, 31, 0x38E604u);
    ctx->pc = 0x38E600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38E5FCu;
    // 0x38e600: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x386038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x386038u, 0x38E5FCu, 0x38E604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E604u;
label_38e604:
    // 0x38e604: 0xc0e3b1a  jal         func_38EC68
    ctx->pc = 0x38E604u;
    SET_GPR_U32(ctx, 31, 0x38E60Cu);
    ctx->pc = 0x38E608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38E604u;
    // 0x38e608: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38EC68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38EC68u, 0x38E604u, 0x38E60Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E60Cu;
label_38e60c:
    // 0x38e60c: 0xc0e381a  jal         func_38E068
    ctx->pc = 0x38E60Cu;
    SET_GPR_U32(ctx, 31, 0x38E614u);
    ctx->pc = 0x38E610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38E60Cu;
    // 0x38e610: 0x8e240868  lw          $a0, 0x868($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2152)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38E068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38E068u, 0x38E60Cu, 0x38E614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38E614u;
label_38e614:
    // 0x38e614: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x38e614u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x38e618: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x38e618u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x38e61c: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x38e61cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x38e620: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x38e620u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x38e624: 0x3e00008  jr          $ra
    ctx->pc = 0x38E624u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38E628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38E624u;
        // 0x38e628: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38E624u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38E62Cu;
    // 0x38e62c: 0x0  nop
    ctx->pc = 0x38e62cu;
    // NOP
    ctx->pc = 0x38e630u;
}
