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

// Function: sub_0014E378
// Address: 0x14e378 - 0x14e580
void sub_0014E378_0x14e378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014E378_0x14e378");
#endif

    switch (ctx->pc) {
        case 0x14e390u: goto label_14e390;
        case 0x14e39cu: goto label_14e39c;
        case 0x14e3b0u: goto label_14e3b0;
        case 0x14e3dcu: goto label_14e3dc;
        case 0x14e3ecu: goto label_14e3ec;
        case 0x14e3fcu: goto label_14e3fc;
        case 0x14e410u: goto label_14e410;
        case 0x14e424u: goto label_14e424;
        case 0x14e434u: goto label_14e434;
        case 0x14e440u: goto label_14e440;
        case 0x14e450u: goto label_14e450;
        case 0x14e460u: goto label_14e460;
        case 0x14e46cu: goto label_14e46c;
        case 0x14e47cu: goto label_14e47c;
        case 0x14e48cu: goto label_14e48c;
        case 0x14e49cu: goto label_14e49c;
        case 0x14e4acu: goto label_14e4ac;
        case 0x14e4bcu: goto label_14e4bc;
        case 0x14e4ccu: goto label_14e4cc;
        case 0x14e4e0u: goto label_14e4e0;
        case 0x14e4f0u: goto label_14e4f0;
        case 0x14e508u: goto label_14e508;
        case 0x14e510u: goto label_14e510;
        case 0x14e520u: goto label_14e520;
        case 0x14e528u: goto label_14e528;
        case 0x14e538u: goto label_14e538;
        case 0x14e544u: goto label_14e544;
        case 0x14e558u: goto label_14e558;
        case 0x14e564u: goto label_14e564;
        default: break;
    }

    ctx->pc = 0x14e378u;

    // 0x14e378: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14e378u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14e37c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x14e37cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x14e380: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x14e380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x14e384: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x14e384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x14e388: 0xc053aaa  jal         func_14EAA8
    ctx->pc = 0x14E388u;
    SET_GPR_U32(ctx, 31, 0x14E390u);
    ctx->pc = 0x14E38Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E388u;
    // 0x14e38c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EAA8u, 0x14E388u, 0x14E390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E390u;
label_14e390:
    // 0x14e390: 0x9225046c  lbu         $a1, 0x46C($s1)
    ctx->pc = 0x14e390u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
    // 0x14e394: 0xc053b06  jal         func_14EC18
    ctx->pc = 0x14E394u;
    SET_GPR_U32(ctx, 31, 0x14E39Cu);
    ctx->pc = 0x14E398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E394u;
    // 0x14e398: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EC18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EC18u, 0x14E394u, 0x14E39Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E39Cu;
label_14e39c:
    // 0x14e39c: 0x9225046c  lbu         $a1, 0x46C($s1)
    ctx->pc = 0x14e39cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
    // 0x14e3a0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x14e3a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e3a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14e3a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e3a8: 0xc053b00  jal         func_14EC00
    ctx->pc = 0x14E3A8u;
    SET_GPR_U32(ctx, 31, 0x14E3B0u);
    ctx->pc = 0x14E3ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E3A8u;
    // 0x14e3ac: 0x24060012  addiu       $a2, $zero, 0x12 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EC00u, 0x14E3A8u, 0x14E3B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E3B0u;
label_14e3b0:
    // 0x14e3b0: 0x2e020011  sltiu       $v0, $s0, 0x11
    ctx->pc = 0x14e3b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
    // 0x14e3b4: 0x10400065  beqz        $v0, . + 4 + (0x65 << 2)
    ctx->pc = 0x14E3B4u;
    {
        const bool branch_taken_0x14e3b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E3B4u;
        // 0x14e3b8: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e3b4) {
            ctx->pc = 0x14E54Cu;
            goto label_14e54c;
        }
    }
    ctx->pc = 0x14E3BCu;
    // 0x14e3bc: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x14e3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x14e3c0: 0x2442ead0  addiu       $v0, $v0, -0x1530
    ctx->pc = 0x14e3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961872));
    // 0x14e3c4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x14e3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14e3c8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x14e3c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14e3cc: 0x800008  jr          $a0
    ctx->pc = 0x14E3CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14E3D4u: goto label_14e3d4;
            case 0x14E3E4u: goto label_14e3e4;
            case 0x14E418u: goto label_14e418;
            case 0x14E42Cu: goto label_14e42c;
            case 0x14E458u: goto label_14e458;
            case 0x14E4A4u: goto label_14e4a4;
            case 0x14E4D4u: goto label_14e4d4;
            case 0x14E518u: goto label_14e518;
            case 0x14E530u: goto label_14e530;
            case 0x14E54Cu: goto label_14e54c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14E3CCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x14E3D4u;
label_14e3d4:
    // 0x14e3d4: 0xc0540c2  jal         func_150308
    ctx->pc = 0x14E3D4u;
    SET_GPR_U32(ctx, 31, 0x14E3DCu);
    ctx->pc = 0x14E3D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E3D4u;
    // 0x14e3d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150308u, 0x14E3D4u, 0x14E3DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E3DCu;
label_14e3dc:
    // 0x14e3dc: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x14E3DCu;
    {
        const bool branch_taken_0x14e3dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E3DCu;
        // 0x14e3e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e3dc) {
            ctx->pc = 0x14E568u;
            goto label_14e568;
        }
    }
    ctx->pc = 0x14E3E4u;
label_14e3e4:
    // 0x14e3e4: 0xc04e3ec  jal         func_138FB0
    ctx->pc = 0x14E3E4u;
    SET_GPR_U32(ctx, 31, 0x14E3ECu);
    ctx->pc = 0x14E3E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E3E4u;
    // 0x14e3e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x138FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138FB0u, 0x14E3E4u, 0x14E3ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E3ECu;
label_14e3ec:
    // 0x14e3ec: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14E3ECu;
    {
        const bool branch_taken_0x14e3ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E3ECu;
        // 0x14e3f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e3ec) {
            ctx->pc = 0x14E400u;
            goto label_14e400;
        }
    }
    ctx->pc = 0x14E3F4u;
    // 0x14e3f4: 0xc054a0c  jal         func_152830
    ctx->pc = 0x14E3F4u;
    SET_GPR_U32(ctx, 31, 0x14E3FCu);
    ctx->pc = 0x14E3F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E3F4u;
    // 0x14e3f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x152830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152830u, 0x14E3F4u, 0x14E3FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E3FCu;
label_14e3fc:
    // 0x14e3fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14e3fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_14e400:
    // 0x14e400: 0x8e2604d8  lw          $a2, 0x4D8($s1)
    ctx->pc = 0x14e400u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1240)));
    // 0x14e404: 0x9085046c  lbu         $a1, 0x46C($a0)
    ctx->pc = 0x14e404u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1132)));
    // 0x14e408: 0xc0545a2  jal         func_151688
    ctx->pc = 0x14E408u;
    SET_GPR_U32(ctx, 31, 0x14E410u);
    ctx->pc = 0x14E40Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E408u;
    // 0x14e40c: 0x6302b  sltu        $a2, $zero, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x151688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151688u, 0x14E408u, 0x14E410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E410u;
label_14e410:
    // 0x14e410: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x14E410u;
    {
        const bool branch_taken_0x14e410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E410u;
        // 0x14e414: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e410) {
            ctx->pc = 0x14E568u;
            goto label_14e568;
        }
    }
    ctx->pc = 0x14E418u;
label_14e418:
    // 0x14e418: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14e418u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e41c: 0xc053ec0  jal         func_14FB00
    ctx->pc = 0x14E41Cu;
    SET_GPR_U32(ctx, 31, 0x14E424u);
    ctx->pc = 0x14E420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E41Cu;
    // 0x14e420: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FB00u, 0x14E41Cu, 0x14E424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E424u;
label_14e424:
    // 0x14e424: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x14E424u;
    {
        const bool branch_taken_0x14e424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E424u;
        // 0x14e428: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e424) {
            ctx->pc = 0x14E568u;
            goto label_14e568;
        }
    }
    ctx->pc = 0x14E42Cu;
label_14e42c:
    // 0x14e42c: 0xc054190  jal         func_150640
    ctx->pc = 0x14E42Cu;
    SET_GPR_U32(ctx, 31, 0x14E434u);
    ctx->pc = 0x14E430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E42Cu;
    // 0x14e430: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150640u, 0x14E42Cu, 0x14E434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E434u;
label_14e434:
    // 0x14e434: 0x9225046c  lbu         $a1, 0x46C($s1)
    ctx->pc = 0x14e434u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
    // 0x14e438: 0xc053c0a  jal         func_14F028
    ctx->pc = 0x14E438u;
    SET_GPR_U32(ctx, 31, 0x14E440u);
    ctx->pc = 0x14E43Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E438u;
    // 0x14e43c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F028u, 0x14E438u, 0x14E440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E440u;
label_14e440:
    // 0x14e440: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14e440u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e444: 0x9085046c  lbu         $a1, 0x46C($a0)
    ctx->pc = 0x14e444u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1132)));
    // 0x14e448: 0xc05490c  jal         func_152430
    ctx->pc = 0x14E448u;
    SET_GPR_U32(ctx, 31, 0x14E450u);
    ctx->pc = 0x14E44Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E448u;
    // 0x14e44c: 0x8c8608c0  lw          $a2, 0x8C0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2240)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x152430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152430u, 0x14E448u, 0x14E450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E450u;
label_14e450:
    // 0x14e450: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x14E450u;
    {
        const bool branch_taken_0x14e450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E450u;
        // 0x14e454: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e450) {
            ctx->pc = 0x14E568u;
            goto label_14e568;
        }
    }
    ctx->pc = 0x14E458u;
label_14e458:
    // 0x14e458: 0xc0541de  jal         func_150778
    ctx->pc = 0x14E458u;
    SET_GPR_U32(ctx, 31, 0x14E460u);
    ctx->pc = 0x14E45Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E458u;
    // 0x14e45c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150778u, 0x14E458u, 0x14E460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E460u;
label_14e460:
    // 0x14e460: 0x9225046c  lbu         $a1, 0x46C($s1)
    ctx->pc = 0x14e460u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
    // 0x14e464: 0xc053c0a  jal         func_14F028
    ctx->pc = 0x14E464u;
    SET_GPR_U32(ctx, 31, 0x14E46Cu);
    ctx->pc = 0x14E468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E464u;
    // 0x14e468: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F028u, 0x14E464u, 0x14E46Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E46Cu;
label_14e46c:
    // 0x14e46c: 0x9225046c  lbu         $a1, 0x46C($s1)
    ctx->pc = 0x14e46cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
    // 0x14e470: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x14e470u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14e474: 0xc053c70  jal         func_14F1C0
    ctx->pc = 0x14E474u;
    SET_GPR_U32(ctx, 31, 0x14E47Cu);
    ctx->pc = 0x14E478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E474u;
    // 0x14e478: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F1C0u, 0x14E474u, 0x14E47Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E47Cu;
label_14e47c:
    // 0x14e47c: 0x9230046c  lbu         $s0, 0x46C($s1)
    ctx->pc = 0x14e47cu;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
    // 0x14e480: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14e480u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e484: 0xc053c6a  jal         func_14F1A8
    ctx->pc = 0x14E484u;
    SET_GPR_U32(ctx, 31, 0x14E48Cu);
    ctx->pc = 0x14E488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E484u;
    // 0x14e488: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F1A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F1A8u, 0x14E484u, 0x14E48Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E48Cu;
label_14e48c:
    // 0x14e48c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x14e48cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e490: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14e490u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e494: 0xc05490c  jal         func_152430
    ctx->pc = 0x14E494u;
    SET_GPR_U32(ctx, 31, 0x14E49Cu);
    ctx->pc = 0x14E498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E494u;
    // 0x14e498: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x152430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152430u, 0x14E494u, 0x14E49Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E49Cu;
label_14e49c:
    // 0x14e49c: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x14E49Cu;
    {
        const bool branch_taken_0x14e49c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E49Cu;
        // 0x14e4a0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e49c) {
            ctx->pc = 0x14E568u;
            goto label_14e568;
        }
    }
    ctx->pc = 0x14E4A4u;
label_14e4a4:
    // 0x14e4a4: 0xc054190  jal         func_150640
    ctx->pc = 0x14E4A4u;
    SET_GPR_U32(ctx, 31, 0x14E4ACu);
    ctx->pc = 0x14E4A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E4A4u;
    // 0x14e4a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150640u, 0x14E4A4u, 0x14E4ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E4ACu;
label_14e4ac:
    // 0x14e4ac: 0x9230046c  lbu         $s0, 0x46C($s1)
    ctx->pc = 0x14e4acu;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
    // 0x14e4b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14e4b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e4b4: 0xc053c6a  jal         func_14F1A8
    ctx->pc = 0x14E4B4u;
    SET_GPR_U32(ctx, 31, 0x14E4BCu);
    ctx->pc = 0x14E4B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E4B4u;
    // 0x14e4b8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F1A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F1A8u, 0x14E4B4u, 0x14E4BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E4BCu;
label_14e4bc:
    // 0x14e4bc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x14e4bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e4c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14e4c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e4c4: 0xc05490c  jal         func_152430
    ctx->pc = 0x14E4C4u;
    SET_GPR_U32(ctx, 31, 0x14E4CCu);
    ctx->pc = 0x14E4C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E4C4u;
    // 0x14e4c8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x152430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152430u, 0x14E4C4u, 0x14E4CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E4CCu;
label_14e4cc:
    // 0x14e4cc: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x14E4CCu;
    {
        const bool branch_taken_0x14e4cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E4CCu;
        // 0x14e4d0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e4cc) {
            ctx->pc = 0x14E568u;
            goto label_14e568;
        }
    }
    ctx->pc = 0x14E4D4u;
label_14e4d4:
    // 0x14e4d4: 0x9225046c  lbu         $a1, 0x46C($s1)
    ctx->pc = 0x14e4d4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
    // 0x14e4d8: 0xc053c76  jal         func_14F1D8
    ctx->pc = 0x14E4D8u;
    SET_GPR_U32(ctx, 31, 0x14E4E0u);
    ctx->pc = 0x14E4DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E4D8u;
    // 0x14e4dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F1D8u, 0x14E4D8u, 0x14E4E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E4E0u;
label_14e4e0:
    // 0x14e4e0: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x14E4E0u;
    {
        const bool branch_taken_0x14e4e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E4E0u;
        // 0x14e4e4: 0x9225046c  lbu         $a1, 0x46C($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e4e0) {
            ctx->pc = 0x14E550u;
            goto label_14e550;
        }
    }
    ctx->pc = 0x14E4E8u;
    // 0x14e4e8: 0xc053c6a  jal         func_14F1A8
    ctx->pc = 0x14E4E8u;
    SET_GPR_U32(ctx, 31, 0x14E4F0u);
    ctx->pc = 0x14E4ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E4E8u;
    // 0x14e4ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F1A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F1A8u, 0x14E4E8u, 0x14E4F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E4F0u;
label_14e4f0:
    // 0x14e4f0: 0x8e2308c0  lw          $v1, 0x8C0($s1)
    ctx->pc = 0x14e4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2240)));
    // 0x14e4f4: 0x10430015  beq         $v0, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x14E4F4u;
    {
        const bool branch_taken_0x14e4f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x14E4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E4F4u;
        // 0x14e4f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e4f4) {
            ctx->pc = 0x14E54Cu;
            goto label_14e54c;
        }
    }
    ctx->pc = 0x14E4FCu;
    // 0x14e4fc: 0x9225046c  lbu         $a1, 0x46C($s1)
    ctx->pc = 0x14e4fcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
    // 0x14e500: 0xc053c70  jal         func_14F1C0
    ctx->pc = 0x14E500u;
    SET_GPR_U32(ctx, 31, 0x14E508u);
    ctx->pc = 0x14E504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E500u;
    // 0x14e504: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F1C0u, 0x14E500u, 0x14E508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E508u;
label_14e508:
    // 0x14e508: 0xc05410a  jal         func_150428
    ctx->pc = 0x14E508u;
    SET_GPR_U32(ctx, 31, 0x14E510u);
    ctx->pc = 0x14E50Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E508u;
    // 0x14e50c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150428u, 0x14E508u, 0x14E510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E510u;
label_14e510:
    // 0x14e510: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x14E510u;
    {
        const bool branch_taken_0x14e510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E510u;
        // 0x14e514: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e510) {
            ctx->pc = 0x14E568u;
            goto label_14e568;
        }
    }
    ctx->pc = 0x14E518u;
label_14e518:
    // 0x14e518: 0xc0542c2  jal         func_150B08
    ctx->pc = 0x14E518u;
    SET_GPR_U32(ctx, 31, 0x14E520u);
    ctx->pc = 0x14E51Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E518u;
    // 0x14e51c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150B08u, 0x14E518u, 0x14E520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E520u;
label_14e520:
    // 0x14e520: 0xc054816  jal         func_152058
    ctx->pc = 0x14E520u;
    SET_GPR_U32(ctx, 31, 0x14E528u);
    ctx->pc = 0x14E524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E520u;
    // 0x14e524: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x152058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152058u, 0x14E520u, 0x14E528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E528u;
label_14e528:
    // 0x14e528: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x14E528u;
    {
        const bool branch_taken_0x14e528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E528u;
        // 0x14e52c: 0x9225046c  lbu         $a1, 0x46C($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e528) {
            ctx->pc = 0x14E550u;
            goto label_14e550;
        }
    }
    ctx->pc = 0x14E530u;
label_14e530:
    // 0x14e530: 0xc054286  jal         func_150A18
    ctx->pc = 0x14E530u;
    SET_GPR_U32(ctx, 31, 0x14E538u);
    ctx->pc = 0x14E534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E530u;
    // 0x14e534: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150A18u, 0x14E530u, 0x14E538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E538u;
label_14e538:
    // 0x14e538: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14e538u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e53c: 0xc054942  jal         func_152508
    ctx->pc = 0x14E53Cu;
    SET_GPR_U32(ctx, 31, 0x14E544u);
    ctx->pc = 0x14E540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E53Cu;
    // 0x14e540: 0x9085046c  lbu         $a1, 0x46C($a0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x152508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152508u, 0x14E53Cu, 0x14E544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E544u;
label_14e544:
    // 0x14e544: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x14E544u;
    {
        const bool branch_taken_0x14e544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14E548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E544u;
        // 0x14e548: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14e544) {
            ctx->pc = 0x14E568u;
            goto label_14e568;
        }
    }
    ctx->pc = 0x14E54Cu;
label_14e54c:
    // 0x14e54c: 0x9225046c  lbu         $a1, 0x46C($s1)
    ctx->pc = 0x14e54cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
label_14e550:
    // 0x14e550: 0xc053b3e  jal         func_14ECF8
    ctx->pc = 0x14E550u;
    SET_GPR_U32(ctx, 31, 0x14E558u);
    ctx->pc = 0x14E554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E550u;
    // 0x14e554: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14ECF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14ECF8u, 0x14E550u, 0x14E558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E558u;
label_14e558:
    // 0x14e558: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14e558u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14e55c: 0xc04da5c  jal         func_136970
    ctx->pc = 0x14E55Cu;
    SET_GPR_U32(ctx, 31, 0x14E564u);
    ctx->pc = 0x14E560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14E55Cu;
    // 0x14e560: 0x9085046c  lbu         $a1, 0x46C($a0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136970u, 0x14E55Cu, 0x14E564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14E564u;
label_14e564:
    // 0x14e564: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14e564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14e568:
    // 0x14e568: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x14e568u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14e56c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x14e56cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x14e570: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x14e570u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14e574: 0x3e00008  jr          $ra
    ctx->pc = 0x14E574u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14E578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14E574u;
        // 0x14e578: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14E574u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14E57Cu;
    // 0x14e57c: 0x0  nop
    ctx->pc = 0x14e57cu;
    // NOP
    ctx->pc = 0x14e580u;
}
