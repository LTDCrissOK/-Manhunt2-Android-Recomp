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

// Function: sub_002986B8
// Address: 0x2986b8 - 0x298898
void sub_002986B8_0x2986b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002986B8_0x2986b8");
#endif

    switch (ctx->pc) {
        case 0x2986fcu: goto label_2986fc;
        case 0x298710u: goto label_298710;
        case 0x298778u: goto label_298778;
        case 0x298780u: goto label_298780;
        case 0x298794u: goto label_298794;
        case 0x2987a8u: goto label_2987a8;
        case 0x2987b8u: goto label_2987b8;
        case 0x2987c4u: goto label_2987c4;
        case 0x2987d8u: goto label_2987d8;
        case 0x2987ecu: goto label_2987ec;
        case 0x298800u: goto label_298800;
        case 0x29880cu: goto label_29880c;
        case 0x298824u: goto label_298824;
        case 0x298848u: goto label_298848;
        default: break;
    }

    ctx->pc = 0x2986b8u;

    // 0x2986b8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2986b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2986bc: 0x3c020052  lui         $v0, 0x52
    ctx->pc = 0x2986bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)82 << 16));
    // 0x2986c0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2986c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2986c4: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x2986c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x2986c8: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x2986c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x2986cc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2986ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2986d0: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x2986d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x2986d4: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x2986d4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2986d8: 0x8c51ac80  lw          $s1, -0x5380($v0)
    ctx->pc = 0x2986d8u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x51AC80u));
    // 0x2986dc: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x2986dcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2986e0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2986e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2986e4: 0x24020039  addiu       $v0, $zero, 0x39
    ctx->pc = 0x2986e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x2986e8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2986e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2986ec: 0x1622000c  bne         $s1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2986ECu;
    {
        const bool branch_taken_0x2986ec = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x2986F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2986ECu;
        // 0x2986f0: 0xffbf0040  sd          $ra, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2986ec) {
            ctx->pc = 0x298720u;
            goto label_298720;
        }
    }
    ctx->pc = 0x2986F4u;
    // 0x2986f4: 0xc0a71e0  jal         func_29C780
    ctx->pc = 0x2986F4u;
    SET_GPR_U32(ctx, 31, 0x2986FCu);
    ctx->pc = 0x29C780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C780u, 0x2986F4u, 0x2986FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2986FCu;
label_2986fc:
    // 0x2986fc: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2986fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x298700: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x298700u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298704: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x298704u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298708: 0xc0d7424  jal         func_35D090
    ctx->pc = 0x298708u;
    SET_GPR_U32(ctx, 31, 0x298710u);
    ctx->pc = 0x29870Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298708u;
    // 0x29870c: 0x24a5bd60  addiu       $a1, $a1, -0x42A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D090u, 0x298708u, 0x298710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298710u;
label_298710:
    // 0x298710: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x298710u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298714: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x298714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298718: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x298718u;
    {
        const bool branch_taken_0x298718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29871Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298718u;
        // 0x29871c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298718) {
            ctx->pc = 0x2987F8u;
            goto label_2987f8;
        }
    }
    ctx->pc = 0x298720u;
label_298720:
    // 0x298720: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x298720u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x298724: 0x9062a930  lbu         $v0, -0x56D0($v1)
    ctx->pc = 0x298724u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x3FA930u));
    // 0x298728: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x298728u;
    {
        const bool branch_taken_0x298728 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29872Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298728u;
        // 0x29872c: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298728) {
            ctx->pc = 0x2987C4u;
            goto label_2987c4;
        }
    }
    ctx->pc = 0x298730u;
    // 0x298730: 0x2623ffdd  addiu       $v1, $s1, -0x23
    ctx->pc = 0x298730u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967261));
    // 0x298734: 0x2c620017  sltiu       $v0, $v1, 0x17
    ctx->pc = 0x298734u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)23) ? 1 : 0);
    // 0x298738: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x298738u;
    {
        const bool branch_taken_0x298738 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29873Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298738u;
        // 0x29873c: 0x3c020047  lui         $v0, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298738) {
            ctx->pc = 0x2987C4u;
            goto label_2987c4;
        }
    }
    ctx->pc = 0x298740u;
    // 0x298740: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x298740u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x298744: 0x2442bd80  addiu       $v0, $v0, -0x4280
    ctx->pc = 0x298744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950272));
    // 0x298748: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x298748u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x29874c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x29874cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x298750: 0x800008  jr          $a0
    ctx->pc = 0x298750u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x298758u: goto label_298758;
            case 0x298764u: goto label_298764;
            case 0x298788u: goto label_298788;
            case 0x2987C4u: goto label_2987c4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x298750u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x298758u;
label_298758:
    // 0x298758: 0xa0a0a930  sb          $zero, -0x56D0($a1)
    ctx->pc = 0x298758u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4294945072), (uint8_t)GPR_U32(ctx, 0));
    // 0x29875c: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x29875Cu;
    {
        const bool branch_taken_0x29875c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x298760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29875Cu;
        // 0x298760: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29875c) {
            ctx->pc = 0x2987C4u;
            goto label_2987c4;
        }
    }
    ctx->pc = 0x298764u;
label_298764:
    // 0x298764: 0xa0a0a930  sb          $zero, -0x56D0($a1)
    ctx->pc = 0x298764u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4294945072), (uint8_t)GPR_U32(ctx, 0));
    // 0x298768: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x298768u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29876c: 0xae60ac80  sw          $zero, -0x5380($s3)
    ctx->pc = 0x29876cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294945920), GPR_U32(ctx, 0));
    // 0x298770: 0xc0a71e0  jal         func_29C780
    ctx->pc = 0x298770u;
    SET_GPR_U32(ctx, 31, 0x298778u);
    ctx->pc = 0x298774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298770u;
    // 0x298774: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C780u, 0x298770u, 0x298778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298778u;
label_298778:
    // 0x298778: 0xc0a7142  jal         func_29C508
    ctx->pc = 0x298778u;
    SET_GPR_U32(ctx, 31, 0x298780u);
    ctx->pc = 0x29877Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298778u;
    // 0x29877c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C508u, 0x298778u, 0x298780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298780u;
label_298780:
    // 0x298780: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x298780u;
    {
        const bool branch_taken_0x298780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x298784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298780u;
        // 0x298784: 0x8e71ac80  lw          $s1, -0x5380($s3) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294945920)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298780) {
            ctx->pc = 0x2987C4u;
            goto label_2987c4;
        }
    }
    ctx->pc = 0x298788u;
label_298788:
    // 0x298788: 0xa0a0a930  sb          $zero, -0x56D0($a1)
    ctx->pc = 0x298788u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4294945072), (uint8_t)GPR_U32(ctx, 0));
    // 0x29878c: 0xc0a71e0  jal         func_29C780
    ctx->pc = 0x29878Cu;
    SET_GPR_U32(ctx, 31, 0x298794u);
    ctx->pc = 0x298790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29878Cu;
    // 0x298790: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C780u, 0x29878Cu, 0x298794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298794u;
label_298794:
    // 0x298794: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x298794u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x298798: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x298798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29879c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x29879cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2987a0: 0xc0d7424  jal         func_35D090
    ctx->pc = 0x2987A0u;
    SET_GPR_U32(ctx, 31, 0x2987A8u);
    ctx->pc = 0x2987A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2987A0u;
    // 0x2987a4: 0x24a5bd70  addiu       $a1, $a1, -0x4290 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D090u, 0x2987A0u, 0x2987A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2987A8u;
label_2987a8:
    // 0x2987a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2987a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2987ac: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2987acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2987b0: 0xc0a7096  jal         func_29C258
    ctx->pc = 0x2987B0u;
    SET_GPR_U32(ctx, 31, 0x2987B8u);
    ctx->pc = 0x2987B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2987B0u;
    // 0x2987b4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C258u, 0x2987B0u, 0x2987B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2987B8u;
label_2987b8:
    // 0x2987b8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2987b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2987bc: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x2987BCu;
    SET_GPR_U32(ctx, 31, 0x2987C4u);
    ctx->pc = 0x2987C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2987BCu;
    // 0x2987c0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x2987BCu, 0x2987C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2987C4u;
label_2987c4:
    // 0x2987c4: 0x2412002c  addiu       $s2, $zero, 0x2C
    ctx->pc = 0x2987c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x2987c8: 0x16320012  bne         $s1, $s2, . + 4 + (0x12 << 2)
    ctx->pc = 0x2987C8u;
    {
        const bool branch_taken_0x2987c8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 18));
        if (branch_taken_0x2987c8) {
            ctx->pc = 0x298814u;
            goto label_298814;
        }
    }
    ctx->pc = 0x2987D0u;
    // 0x2987d0: 0xc0a71e0  jal         func_29C780
    ctx->pc = 0x2987D0u;
    SET_GPR_U32(ctx, 31, 0x2987D8u);
    ctx->pc = 0x29C780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C780u, 0x2987D0u, 0x2987D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2987D8u;
label_2987d8:
    // 0x2987d8: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2987d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2987dc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2987dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2987e0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2987e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2987e4: 0xc0d7424  jal         func_35D090
    ctx->pc = 0x2987E4u;
    SET_GPR_U32(ctx, 31, 0x2987ECu);
    ctx->pc = 0x2987E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2987E4u;
    // 0x2987e8: 0x24a5bd60  addiu       $a1, $a1, -0x42A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D090u, 0x2987E4u, 0x2987ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2987ECu;
label_2987ec:
    // 0x2987ec: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2987ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2987f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2987f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2987f4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2987f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2987f8:
    // 0x2987f8: 0xc0a7096  jal         func_29C258
    ctx->pc = 0x2987F8u;
    SET_GPR_U32(ctx, 31, 0x298800u);
    ctx->pc = 0x29C258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C258u, 0x2987F8u, 0x298800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298800u;
label_298800:
    // 0x298800: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x298800u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298804: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x298804u;
    SET_GPR_U32(ctx, 31, 0x29880Cu);
    ctx->pc = 0x298808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298804u;
    // 0x298808: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x298804u, 0x29880Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29880Cu;
label_29880c:
    // 0x29880c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x29880Cu;
    {
        const bool branch_taken_0x29880c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x298810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29880Cu;
        // 0x298810: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29880c) {
            ctx->pc = 0x298870u;
            goto label_298870;
        }
    }
    ctx->pc = 0x298814u;
label_298814:
    // 0x298814: 0x12a00015  beqz        $s5, . + 4 + (0x15 << 2)
    ctx->pc = 0x298814u;
    {
        const bool branch_taken_0x298814 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x298818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298814u;
        // 0x298818: 0x2670ac80  addiu       $s0, $s3, -0x5380 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4294945920));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298814) {
            ctx->pc = 0x29886Cu;
            goto label_29886c;
        }
    }
    ctx->pc = 0x29881Cu;
    // 0x29881c: 0xc0addd2  jal         func_2B7748
    ctx->pc = 0x29881Cu;
    SET_GPR_U32(ctx, 31, 0x298824u);
    ctx->pc = 0x298820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29881Cu;
    // 0x298820: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7748u, 0x29881Cu, 0x298824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298824u;
label_298824:
    // 0x298824: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x298824u;
    {
        const bool branch_taken_0x298824 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x298828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298824u;
        // 0x298828: 0x24030006  addiu       $v1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298824) {
            ctx->pc = 0x298840u;
            goto label_298840;
        }
    }
    ctx->pc = 0x29882Cu;
    // 0x29882c: 0xae72ac80  sw          $s2, -0x5380($s3)
    ctx->pc = 0x29882cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294945920), GPR_U32(ctx, 18));
    // 0x298830: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x298830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x298834: 0xae0358f8  sw          $v1, 0x58F8($s0)
    ctx->pc = 0x298834u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 22776), GPR_U32(ctx, 3));
    // 0x298838: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x298838u;
    {
        const bool branch_taken_0x298838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29883Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298838u;
        // 0x29883c: 0xae02591c  sw          $v0, 0x591C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 22812), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298838) {
            ctx->pc = 0x29886Cu;
            goto label_29886c;
        }
    }
    ctx->pc = 0x298840u;
label_298840:
    // 0x298840: 0xc0ade76  jal         func_2B79D8
    ctx->pc = 0x298840u;
    SET_GPR_U32(ctx, 31, 0x298848u);
    ctx->pc = 0x298844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298840u;
    // 0x298844: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B79D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B79D8u, 0x298840u, 0x298848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298848u;
label_298848:
    // 0x298848: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x298848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x29884c: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x29884Cu;
    {
        const bool branch_taken_0x29884c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x298850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29884Cu;
        // 0x298850: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29884c) {
            ctx->pc = 0x298870u;
            goto label_298870;
        }
    }
    ctx->pc = 0x298854u;
    // 0x298854: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x298854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x298858: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x298858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x29885c: 0xae62ac80  sw          $v0, -0x5380($s3)
    ctx->pc = 0x29885cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294945920), GPR_U32(ctx, 2));
    // 0x298860: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x298860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x298864: 0xae03591c  sw          $v1, 0x591C($s0)
    ctx->pc = 0x298864u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 22812), GPR_U32(ctx, 3));
    // 0x298868: 0xae0458f8  sw          $a0, 0x58F8($s0)
    ctx->pc = 0x298868u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 22776), GPR_U32(ctx, 4));
label_29886c:
    // 0x29886c: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x29886cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_298870:
    // 0x298870: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x298870u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x298874: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x298874u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x298878: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x298878u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29887c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x29887cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x298880: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x298880u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x298884: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x298884u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x298888: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x298888u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29888c: 0x3e00008  jr          $ra
    ctx->pc = 0x29888Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x298890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29888Cu;
        // 0x298890: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29888Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x298894u;
    // 0x298894: 0x0  nop
    ctx->pc = 0x298894u;
    // NOP
    ctx->pc = 0x298898u;
}
