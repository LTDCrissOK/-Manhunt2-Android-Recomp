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

// Function: sub_0019C728
// Address: 0x19c728 - 0x19c938
void sub_0019C728_0x19c728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019C728_0x19c728");
#endif

    switch (ctx->pc) {
        case 0x19c728u: goto label_19c728;
        case 0x19c72cu: goto label_19c72c;
        case 0x19c730u: goto label_19c730;
        case 0x19c734u: goto label_19c734;
        case 0x19c738u: goto label_19c738;
        case 0x19c73cu: goto label_19c73c;
        case 0x19c740u: goto label_19c740;
        case 0x19c744u: goto label_19c744;
        case 0x19c748u: goto label_19c748;
        case 0x19c74cu: goto label_19c74c;
        case 0x19c750u: goto label_19c750;
        case 0x19c754u: goto label_19c754;
        case 0x19c758u: goto label_19c758;
        case 0x19c75cu: goto label_19c75c;
        case 0x19c760u: goto label_19c760;
        case 0x19c764u: goto label_19c764;
        case 0x19c768u: goto label_19c768;
        case 0x19c76cu: goto label_19c76c;
        case 0x19c770u: goto label_19c770;
        case 0x19c774u: goto label_19c774;
        case 0x19c778u: goto label_19c778;
        case 0x19c77cu: goto label_19c77c;
        case 0x19c780u: goto label_19c780;
        case 0x19c784u: goto label_19c784;
        case 0x19c788u: goto label_19c788;
        case 0x19c78cu: goto label_19c78c;
        case 0x19c790u: goto label_19c790;
        case 0x19c794u: goto label_19c794;
        case 0x19c798u: goto label_19c798;
        case 0x19c79cu: goto label_19c79c;
        case 0x19c7a0u: goto label_19c7a0;
        case 0x19c7a4u: goto label_19c7a4;
        case 0x19c7a8u: goto label_19c7a8;
        case 0x19c7acu: goto label_19c7ac;
        case 0x19c7b0u: goto label_19c7b0;
        case 0x19c7b4u: goto label_19c7b4;
        case 0x19c7b8u: goto label_19c7b8;
        case 0x19c7bcu: goto label_19c7bc;
        case 0x19c7c0u: goto label_19c7c0;
        case 0x19c7c4u: goto label_19c7c4;
        case 0x19c7c8u: goto label_19c7c8;
        case 0x19c7ccu: goto label_19c7cc;
        case 0x19c7d0u: goto label_19c7d0;
        case 0x19c7d4u: goto label_19c7d4;
        case 0x19c7d8u: goto label_19c7d8;
        case 0x19c7dcu: goto label_19c7dc;
        case 0x19c7e0u: goto label_19c7e0;
        case 0x19c7e4u: goto label_19c7e4;
        case 0x19c7e8u: goto label_19c7e8;
        case 0x19c7ecu: goto label_19c7ec;
        case 0x19c7f0u: goto label_19c7f0;
        case 0x19c7f4u: goto label_19c7f4;
        case 0x19c7f8u: goto label_19c7f8;
        case 0x19c7fcu: goto label_19c7fc;
        case 0x19c800u: goto label_19c800;
        case 0x19c804u: goto label_19c804;
        case 0x19c808u: goto label_19c808;
        case 0x19c80cu: goto label_19c80c;
        case 0x19c810u: goto label_19c810;
        case 0x19c814u: goto label_19c814;
        case 0x19c818u: goto label_19c818;
        case 0x19c81cu: goto label_19c81c;
        case 0x19c820u: goto label_19c820;
        case 0x19c824u: goto label_19c824;
        case 0x19c828u: goto label_19c828;
        case 0x19c82cu: goto label_19c82c;
        case 0x19c830u: goto label_19c830;
        case 0x19c834u: goto label_19c834;
        case 0x19c838u: goto label_19c838;
        case 0x19c83cu: goto label_19c83c;
        case 0x19c840u: goto label_19c840;
        case 0x19c844u: goto label_19c844;
        case 0x19c848u: goto label_19c848;
        case 0x19c84cu: goto label_19c84c;
        case 0x19c850u: goto label_19c850;
        case 0x19c854u: goto label_19c854;
        case 0x19c858u: goto label_19c858;
        case 0x19c85cu: goto label_19c85c;
        case 0x19c860u: goto label_19c860;
        case 0x19c864u: goto label_19c864;
        case 0x19c868u: goto label_19c868;
        case 0x19c86cu: goto label_19c86c;
        case 0x19c870u: goto label_19c870;
        case 0x19c874u: goto label_19c874;
        case 0x19c878u: goto label_19c878;
        case 0x19c87cu: goto label_19c87c;
        case 0x19c880u: goto label_19c880;
        case 0x19c884u: goto label_19c884;
        case 0x19c888u: goto label_19c888;
        case 0x19c88cu: goto label_19c88c;
        case 0x19c890u: goto label_19c890;
        case 0x19c894u: goto label_19c894;
        case 0x19c898u: goto label_19c898;
        case 0x19c89cu: goto label_19c89c;
        case 0x19c8a0u: goto label_19c8a0;
        case 0x19c8a4u: goto label_19c8a4;
        case 0x19c8a8u: goto label_19c8a8;
        case 0x19c8acu: goto label_19c8ac;
        case 0x19c8b0u: goto label_19c8b0;
        case 0x19c8b4u: goto label_19c8b4;
        case 0x19c8b8u: goto label_19c8b8;
        case 0x19c8bcu: goto label_19c8bc;
        case 0x19c8c0u: goto label_19c8c0;
        case 0x19c8c4u: goto label_19c8c4;
        case 0x19c8c8u: goto label_19c8c8;
        case 0x19c8ccu: goto label_19c8cc;
        case 0x19c8d0u: goto label_19c8d0;
        case 0x19c8d4u: goto label_19c8d4;
        case 0x19c8d8u: goto label_19c8d8;
        case 0x19c8dcu: goto label_19c8dc;
        case 0x19c8e0u: goto label_19c8e0;
        case 0x19c8e4u: goto label_19c8e4;
        case 0x19c8e8u: goto label_19c8e8;
        case 0x19c8ecu: goto label_19c8ec;
        case 0x19c8f0u: goto label_19c8f0;
        case 0x19c8f4u: goto label_19c8f4;
        case 0x19c8f8u: goto label_19c8f8;
        case 0x19c8fcu: goto label_19c8fc;
        case 0x19c900u: goto label_19c900;
        case 0x19c904u: goto label_19c904;
        case 0x19c908u: goto label_19c908;
        case 0x19c90cu: goto label_19c90c;
        case 0x19c910u: goto label_19c910;
        case 0x19c914u: goto label_19c914;
        case 0x19c918u: goto label_19c918;
        case 0x19c91cu: goto label_19c91c;
        case 0x19c920u: goto label_19c920;
        case 0x19c924u: goto label_19c924;
        case 0x19c928u: goto label_19c928;
        case 0x19c92cu: goto label_19c92c;
        case 0x19c930u: goto label_19c930;
        case 0x19c934u: goto label_19c934;
        default: break;
    }

    ctx->pc = 0x19c728u;

label_19c728:
    // 0x19c728: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x19c728u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_19c72c:
    // 0x19c72c: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x19c72cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_19c730:
    // 0x19c730: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x19c730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_19c734:
    // 0x19c734: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x19c734u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19c738:
    // 0x19c738: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x19c738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
label_19c73c:
    // 0x19c73c: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x19c73cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_19c740:
    // 0x19c740: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x19c740u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_19c744:
    // 0x19c744: 0x24870898  addiu       $a3, $a0, 0x898
    ctx->pc = 0x19c744u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 2200));
label_19c748:
    // 0x19c748: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x19c748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_19c74c:
    // 0x19c74c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x19c74cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_19c750:
    // 0x19c750: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x19c750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_19c754:
    // 0x19c754: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x19c754u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_19c758:
    // 0x19c758: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x19c758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
label_19c75c:
    // 0x19c75c: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x19c75cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_19c760:
    // 0x19c760: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x19c760u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_19c764:
    // 0x19c764: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x19c764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_19c768:
    // 0x19c768: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x19c768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_19c76c:
    // 0x19c76c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x19c76cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_19c770:
    // 0x19c770: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x19c770u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_19c774:
    // 0x19c774: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x19c774u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
label_19c778:
    // 0x19c778: 0x8c820898  lw          $v0, 0x898($a0)
    ctx->pc = 0x19c778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2200)));
label_19c77c:
    // 0x19c77c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x19c77cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_19c780:
    // 0x19c780: 0xac820898  sw          $v0, 0x898($a0)
    ctx->pc = 0x19c780u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2200), GPR_U32(ctx, 2));
label_19c784:
    // 0x19c784: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x19c784u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_19c788:
    // 0x19c788: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_19c78c:
    if (ctx->pc == 0x19C78Cu) {
        ctx->pc = 0x19C78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C788u;
        // 0x19c78c: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C790u;
        goto label_19c790;
    }
    ctx->pc = 0x19C788u;
    {
        const bool branch_taken_0x19c788 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C788u;
        // 0x19c78c: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c788) {
            ctx->pc = 0x19C7A0u;
            goto label_19c7a0;
        }
    }
    ctx->pc = 0x19C790u;
label_19c790:
    // 0x19c790: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x19c790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_19c794:
    // 0x19c794: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x19c794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_19c798:
    // 0x19c798: 0x40f809  jalr        $v0
label_19c79c:
    if (ctx->pc == 0x19C79Cu) {
        ctx->pc = 0x19C7A0u;
        goto label_19c7a0;
    }
    ctx->pc = 0x19C798u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19C7A0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C798u, 0x19C7A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19C7A0u;
label_19c7a0:
    // 0x19c7a0: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x19c7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_19c7a4:
    // 0x19c7a4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x19c7a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_19c7a8:
    // 0x19c7a8: 0x3c100043  lui         $s0, 0x43
    ctx->pc = 0x19c7a8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)67 << 16));
label_19c7ac:
    // 0x19c7ac: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x19c7acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_19c7b0:
    // 0x19c7b0: 0xc0f6a96  jal         func_3DAA58
label_19c7b4:
    if (ctx->pc == 0x19C7B4u) {
        ctx->pc = 0x19C7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C7B0u;
        // 0x19c7b4: 0x200a02d  daddu       $s4, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C7B8u;
        goto label_19c7b8;
    }
    ctx->pc = 0x19C7B0u;
    SET_GPR_U32(ctx, 31, 0x19C7B8u);
    ctx->pc = 0x19C7B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C7B0u;
    // 0x19c7b4: 0x200a02d  daddu       $s4, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x19C7B0u, 0x19C7B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C7B8u;
label_19c7b8:
    // 0x19c7b8: 0x26100f90  addiu       $s0, $s0, 0xF90
    ctx->pc = 0x19c7b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3984));
label_19c7bc:
    // 0x19c7bc: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x19c7bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_19c7c0:
    // 0x19c7c0: 0xafb00018  sw          $s0, 0x18($sp)
    ctx->pc = 0x19c7c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 16));
label_19c7c4:
    // 0x19c7c4: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x19c7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_19c7c8:
    // 0x19c7c8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x19c7c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_19c7cc:
    // 0x19c7cc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x19c7ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_19c7d0:
    // 0x19c7d0: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x19c7d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_19c7d4:
    // 0x19c7d4: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x19c7d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_19c7d8:
    // 0x19c7d8: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x19c7d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_19c7dc:
    // 0x19c7dc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x19c7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_19c7e0:
    // 0x19c7e0: 0xc06fb64  jal         func_1BED90
label_19c7e4:
    if (ctx->pc == 0x19C7E4u) {
        ctx->pc = 0x19C7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C7E0u;
        // 0x19c7e4: 0x8c451004  lw          $a1, 0x1004($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4100)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C7E8u;
        goto label_19c7e8;
    }
    ctx->pc = 0x19C7E0u;
    SET_GPR_U32(ctx, 31, 0x19C7E8u);
    ctx->pc = 0x19C7E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C7E0u;
    // 0x19c7e4: 0x8c451004  lw          $a1, 0x1004($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4100)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BED90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BED90u, 0x19C7E0u, 0x19C7E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C7E8u;
label_19c7e8:
    // 0x19c7e8: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x19c7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_19c7ec:
    // 0x19c7ec: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x19c7ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_19c7f0:
    // 0x19c7f0: 0xc62000ac  lwc1        $f0, 0xAC($s1)
    ctx->pc = 0x19c7f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19c7f4:
    // 0x19c7f4: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x19c7f4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_19c7f8:
    // 0x19c7f8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x19c7f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_19c7fc:
    // 0x19c7fc: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x19c7fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_19c800:
    // 0x19c800: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19c800u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19c804:
    // 0x19c804: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x19c804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_19c808:
    // 0x19c808: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x19c808u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_19c80c:
    // 0x19c80c: 0x460e0381  sub.s       $f14, $f0, $f14
    ctx->pc = 0x19c80cu;
    ctx->f[14] = FPU_SUB_S(ctx->f[0], ctx->f[14]);
label_19c810:
    // 0x19c810: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x19c810u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_19c814:
    // 0x19c814: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x19c814u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_19c818:
    // 0x19c818: 0x8c6a002c  lw          $t2, 0x2C($v1)
    ctx->pc = 0x19c818u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_19c81c:
    // 0x19c81c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x19c81cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_19c820:
    // 0x19c820: 0x26260020  addiu       $a2, $s1, 0x20
    ctx->pc = 0x19c820u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_19c824:
    // 0x19c824: 0x140f809  jalr        $t2
label_19c828:
    if (ctx->pc == 0x19C828u) {
        ctx->pc = 0x19C828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C824u;
        // 0x19c828: 0x24090004  addiu       $t1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C82Cu;
        goto label_19c82c;
    }
    ctx->pc = 0x19C824u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 10);
        SET_GPR_U32(ctx, 31, 0x19C82Cu);
        ctx->pc = 0x19C828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C824u;
        // 0x19c828: 0x24090004  addiu       $t1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C824u, 0x19C82Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19C82Cu;
label_19c82c:
    // 0x19c82c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x19c82cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_19c830:
    // 0x19c830: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19c830u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19c834:
    // 0x19c834: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x19c834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11008)));
label_19c838:
    // 0x19c838: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_19c83c:
    if (ctx->pc == 0x19C83Cu) {
        ctx->pc = 0x19C83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C838u;
        // 0x19c83c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C840u;
        goto label_19c840;
    }
    ctx->pc = 0x19C838u;
    {
        const bool branch_taken_0x19c838 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x19C83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C838u;
        // 0x19c83c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c838) {
            ctx->pc = 0x19C854u;
            goto label_19c854;
        }
    }
    ctx->pc = 0x19C840u;
label_19c840:
    // 0x19c840: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x19c840u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_19c844:
    // 0x19c844: 0x0  nop
    ctx->pc = 0x19c844u;
    // NOP
label_19c848:
    // 0x19c848: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x19c848u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_19c84c:
    // 0x19c84c: 0x10000007  b           . + 4 + (0x7 << 2)
label_19c850:
    if (ctx->pc == 0x19C850u) {
        ctx->pc = 0x19C854u;
        goto label_19c854;
    }
    ctx->pc = 0x19C84Cu;
    {
        const bool branch_taken_0x19c84c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c84c) {
            ctx->pc = 0x19C86Cu;
            goto label_19c86c;
        }
    }
    ctx->pc = 0x19C854u;
label_19c854:
    // 0x19c854: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19c854u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_19c858:
    // 0x19c858: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x19c858u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_19c85c:
    // 0x19c85c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x19c85cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_19c860:
    // 0x19c860: 0x0  nop
    ctx->pc = 0x19c860u;
    // NOP
label_19c864:
    // 0x19c864: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x19c864u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_19c868:
    // 0x19c868: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x19c868u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_19c86c:
    // 0x19c86c: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x19c86cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
label_19c870:
    // 0x19c870: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x19c870u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_19c874:
    // 0x19c874: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19c874u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19c878:
    // 0x19c878: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x19c878u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_19c87c:
    // 0x19c87c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x19c87cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_19c880:
    // 0x19c880: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x19c880u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_19c884:
    // 0x19c884: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x19c884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_19c888:
    // 0x19c888: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x19c888u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_19c88c:
    // 0x19c88c: 0xe62000b0  swc1        $f0, 0xB0($s1)
    ctx->pc = 0x19c88cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 176), bits); }
label_19c890:
    // 0x19c890: 0xc4401074  lwc1        $f0, 0x1074($v0)
    ctx->pc = 0x19c890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19c894:
    // 0x19c894: 0x8c842b00  lw          $a0, 0x2B00($a0)
    ctx->pc = 0x19c894u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11008)));
label_19c898:
    // 0x19c898: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
label_19c89c:
    if (ctx->pc == 0x19C89Cu) {
        ctx->pc = 0x19C89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C898u;
        // 0x19c89c: 0x46010080  add.s       $f2, $f0, $f1 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C8A0u;
        goto label_19c8a0;
    }
    ctx->pc = 0x19C898u;
    {
        const bool branch_taken_0x19c898 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x19C89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C898u;
        // 0x19c89c: 0x46010080  add.s       $f2, $f0, $f1 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c898) {
            ctx->pc = 0x19C8B4u;
            goto label_19c8b4;
        }
    }
    ctx->pc = 0x19C8A0u;
label_19c8a0:
    // 0x19c8a0: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x19c8a0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_19c8a4:
    // 0x19c8a4: 0x0  nop
    ctx->pc = 0x19c8a4u;
    // NOP
label_19c8a8:
    // 0x19c8a8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x19c8a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_19c8ac:
    // 0x19c8ac: 0x10000008  b           . + 4 + (0x8 << 2)
label_19c8b0:
    if (ctx->pc == 0x19C8B0u) {
        ctx->pc = 0x19C8B4u;
        goto label_19c8b4;
    }
    ctx->pc = 0x19C8ACu;
    {
        const bool branch_taken_0x19c8ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c8ac) {
            ctx->pc = 0x19C8D0u;
            goto label_19c8d0;
        }
    }
    ctx->pc = 0x19C8B4u;
label_19c8b4:
    // 0x19c8b4: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x19c8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
label_19c8b8:
    // 0x19c8b8: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x19c8b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_19c8bc:
    // 0x19c8bc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x19c8bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_19c8c0:
    // 0x19c8c0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19c8c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_19c8c4:
    // 0x19c8c4: 0x0  nop
    ctx->pc = 0x19c8c4u;
    // NOP
label_19c8c8:
    // 0x19c8c8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x19c8c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_19c8cc:
    // 0x19c8cc: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x19c8ccu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_19c8d0:
    // 0x19c8d0: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x19c8d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
label_19c8d4:
    // 0x19c8d4: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x19c8d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_19c8d8:
    // 0x19c8d8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19c8d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19c8dc:
    // 0x19c8dc: 0x0  nop
    ctx->pc = 0x19c8dcu;
    // NOP
label_19c8e0:
    // 0x19c8e0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x19c8e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_19c8e4:
    // 0x19c8e4: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x19c8e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_19c8e8:
    // 0x19c8e8: 0x0  nop
    ctx->pc = 0x19c8e8u;
    // NOP
label_19c8ec:
    // 0x19c8ec: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_19c8f0:
    if (ctx->pc == 0x19C8F0u) {
        ctx->pc = 0x19C8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C8ECu;
        // 0x19c8f0: 0x26820f90  addiu       $v0, $s4, 0xF90 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 3984));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C8F4u;
        goto label_19c8f4;
    }
    ctx->pc = 0x19C8ECu;
    {
        const bool branch_taken_0x19c8ec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x19C8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C8ECu;
        // 0x19c8f0: 0x26820f90  addiu       $v0, $s4, 0xF90 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 3984));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c8ec) {
            ctx->pc = 0x19C90Cu;
            goto label_19c90c;
        }
    }
    ctx->pc = 0x19C8F4u;
label_19c8f4:
    // 0x19c8f4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x19c8f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19c8f8:
    // 0x19c8f8: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x19c8f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
label_19c8fc:
    // 0x19c8fc: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x19c8fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_19c900:
    // 0x19c900: 0xc0673ca  jal         func_19CF28
label_19c904:
    if (ctx->pc == 0x19C904u) {
        ctx->pc = 0x19C904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C900u;
        // 0x19c904: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C908u;
        goto label_19c908;
    }
    ctx->pc = 0x19C900u;
    SET_GPR_U32(ctx, 31, 0x19C908u);
    ctx->pc = 0x19C904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C900u;
    // 0x19c904: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19CF28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19CF28u, 0x19C900u, 0x19C908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C908u;
label_19c908:
    // 0x19c908: 0x26820f90  addiu       $v0, $s4, 0xF90
    ctx->pc = 0x19c908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 3984));
label_19c90c:
    // 0x19c90c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x19c90cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_19c910:
    // 0x19c910: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x19c910u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_19c914:
    // 0x19c914: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x19c914u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_19c918:
    // 0x19c918: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x19c918u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_19c91c:
    // 0x19c91c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x19c91cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_19c920:
    // 0x19c920: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x19c920u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_19c924:
    // 0x19c924: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x19c924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_19c928:
    // 0x19c928: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x19c928u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
label_19c92c:
    // 0x19c92c: 0x3e00008  jr          $ra
label_19c930:
    if (ctx->pc == 0x19C930u) {
        ctx->pc = 0x19C930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C92Cu;
        // 0x19c930: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C934u;
        goto label_19c934;
    }
    ctx->pc = 0x19C92Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C92Cu;
        // 0x19c930: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C92Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19C934u;
label_19c934:
    // 0x19c934: 0x0  nop
    ctx->pc = 0x19c934u;
    // NOP
    ctx->pc = 0x19c938u;
}
