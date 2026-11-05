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

// Function: sub_0015C718
// Address: 0x15c718 - 0x15c9f8
void sub_0015C718_0x15c718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015C718_0x15c718");
#endif

    switch (ctx->pc) {
        case 0x15c718u: goto label_15c718;
        case 0x15c71cu: goto label_15c71c;
        case 0x15c720u: goto label_15c720;
        case 0x15c724u: goto label_15c724;
        case 0x15c728u: goto label_15c728;
        case 0x15c72cu: goto label_15c72c;
        case 0x15c730u: goto label_15c730;
        case 0x15c734u: goto label_15c734;
        case 0x15c738u: goto label_15c738;
        case 0x15c73cu: goto label_15c73c;
        case 0x15c740u: goto label_15c740;
        case 0x15c744u: goto label_15c744;
        case 0x15c748u: goto label_15c748;
        case 0x15c74cu: goto label_15c74c;
        case 0x15c750u: goto label_15c750;
        case 0x15c754u: goto label_15c754;
        case 0x15c758u: goto label_15c758;
        case 0x15c75cu: goto label_15c75c;
        case 0x15c760u: goto label_15c760;
        case 0x15c764u: goto label_15c764;
        case 0x15c768u: goto label_15c768;
        case 0x15c76cu: goto label_15c76c;
        case 0x15c770u: goto label_15c770;
        case 0x15c774u: goto label_15c774;
        case 0x15c778u: goto label_15c778;
        case 0x15c77cu: goto label_15c77c;
        case 0x15c780u: goto label_15c780;
        case 0x15c784u: goto label_15c784;
        case 0x15c788u: goto label_15c788;
        case 0x15c78cu: goto label_15c78c;
        case 0x15c790u: goto label_15c790;
        case 0x15c794u: goto label_15c794;
        case 0x15c798u: goto label_15c798;
        case 0x15c79cu: goto label_15c79c;
        case 0x15c7a0u: goto label_15c7a0;
        case 0x15c7a4u: goto label_15c7a4;
        case 0x15c7a8u: goto label_15c7a8;
        case 0x15c7acu: goto label_15c7ac;
        case 0x15c7b0u: goto label_15c7b0;
        case 0x15c7b4u: goto label_15c7b4;
        case 0x15c7b8u: goto label_15c7b8;
        case 0x15c7bcu: goto label_15c7bc;
        case 0x15c7c0u: goto label_15c7c0;
        case 0x15c7c4u: goto label_15c7c4;
        case 0x15c7c8u: goto label_15c7c8;
        case 0x15c7ccu: goto label_15c7cc;
        case 0x15c7d0u: goto label_15c7d0;
        case 0x15c7d4u: goto label_15c7d4;
        case 0x15c7d8u: goto label_15c7d8;
        case 0x15c7dcu: goto label_15c7dc;
        case 0x15c7e0u: goto label_15c7e0;
        case 0x15c7e4u: goto label_15c7e4;
        case 0x15c7e8u: goto label_15c7e8;
        case 0x15c7ecu: goto label_15c7ec;
        case 0x15c7f0u: goto label_15c7f0;
        case 0x15c7f4u: goto label_15c7f4;
        case 0x15c7f8u: goto label_15c7f8;
        case 0x15c7fcu: goto label_15c7fc;
        case 0x15c800u: goto label_15c800;
        case 0x15c804u: goto label_15c804;
        case 0x15c808u: goto label_15c808;
        case 0x15c80cu: goto label_15c80c;
        case 0x15c810u: goto label_15c810;
        case 0x15c814u: goto label_15c814;
        case 0x15c818u: goto label_15c818;
        case 0x15c81cu: goto label_15c81c;
        case 0x15c820u: goto label_15c820;
        case 0x15c824u: goto label_15c824;
        case 0x15c828u: goto label_15c828;
        case 0x15c82cu: goto label_15c82c;
        case 0x15c830u: goto label_15c830;
        case 0x15c834u: goto label_15c834;
        case 0x15c838u: goto label_15c838;
        case 0x15c83cu: goto label_15c83c;
        case 0x15c840u: goto label_15c840;
        case 0x15c844u: goto label_15c844;
        case 0x15c848u: goto label_15c848;
        case 0x15c84cu: goto label_15c84c;
        case 0x15c850u: goto label_15c850;
        case 0x15c854u: goto label_15c854;
        case 0x15c858u: goto label_15c858;
        case 0x15c85cu: goto label_15c85c;
        case 0x15c860u: goto label_15c860;
        case 0x15c864u: goto label_15c864;
        case 0x15c868u: goto label_15c868;
        case 0x15c86cu: goto label_15c86c;
        case 0x15c870u: goto label_15c870;
        case 0x15c874u: goto label_15c874;
        case 0x15c878u: goto label_15c878;
        case 0x15c87cu: goto label_15c87c;
        case 0x15c880u: goto label_15c880;
        case 0x15c884u: goto label_15c884;
        case 0x15c888u: goto label_15c888;
        case 0x15c88cu: goto label_15c88c;
        case 0x15c890u: goto label_15c890;
        case 0x15c894u: goto label_15c894;
        case 0x15c898u: goto label_15c898;
        case 0x15c89cu: goto label_15c89c;
        case 0x15c8a0u: goto label_15c8a0;
        case 0x15c8a4u: goto label_15c8a4;
        case 0x15c8a8u: goto label_15c8a8;
        case 0x15c8acu: goto label_15c8ac;
        case 0x15c8b0u: goto label_15c8b0;
        case 0x15c8b4u: goto label_15c8b4;
        case 0x15c8b8u: goto label_15c8b8;
        case 0x15c8bcu: goto label_15c8bc;
        case 0x15c8c0u: goto label_15c8c0;
        case 0x15c8c4u: goto label_15c8c4;
        case 0x15c8c8u: goto label_15c8c8;
        case 0x15c8ccu: goto label_15c8cc;
        case 0x15c8d0u: goto label_15c8d0;
        case 0x15c8d4u: goto label_15c8d4;
        case 0x15c8d8u: goto label_15c8d8;
        case 0x15c8dcu: goto label_15c8dc;
        case 0x15c8e0u: goto label_15c8e0;
        case 0x15c8e4u: goto label_15c8e4;
        case 0x15c8e8u: goto label_15c8e8;
        case 0x15c8ecu: goto label_15c8ec;
        case 0x15c8f0u: goto label_15c8f0;
        case 0x15c8f4u: goto label_15c8f4;
        case 0x15c8f8u: goto label_15c8f8;
        case 0x15c8fcu: goto label_15c8fc;
        case 0x15c900u: goto label_15c900;
        case 0x15c904u: goto label_15c904;
        case 0x15c908u: goto label_15c908;
        case 0x15c90cu: goto label_15c90c;
        case 0x15c910u: goto label_15c910;
        case 0x15c914u: goto label_15c914;
        case 0x15c918u: goto label_15c918;
        case 0x15c91cu: goto label_15c91c;
        case 0x15c920u: goto label_15c920;
        case 0x15c924u: goto label_15c924;
        case 0x15c928u: goto label_15c928;
        case 0x15c92cu: goto label_15c92c;
        case 0x15c930u: goto label_15c930;
        case 0x15c934u: goto label_15c934;
        case 0x15c938u: goto label_15c938;
        case 0x15c93cu: goto label_15c93c;
        case 0x15c940u: goto label_15c940;
        case 0x15c944u: goto label_15c944;
        case 0x15c948u: goto label_15c948;
        case 0x15c94cu: goto label_15c94c;
        case 0x15c950u: goto label_15c950;
        case 0x15c954u: goto label_15c954;
        case 0x15c958u: goto label_15c958;
        case 0x15c95cu: goto label_15c95c;
        case 0x15c960u: goto label_15c960;
        case 0x15c964u: goto label_15c964;
        case 0x15c968u: goto label_15c968;
        case 0x15c96cu: goto label_15c96c;
        case 0x15c970u: goto label_15c970;
        case 0x15c974u: goto label_15c974;
        case 0x15c978u: goto label_15c978;
        case 0x15c97cu: goto label_15c97c;
        case 0x15c980u: goto label_15c980;
        case 0x15c984u: goto label_15c984;
        case 0x15c988u: goto label_15c988;
        case 0x15c98cu: goto label_15c98c;
        case 0x15c990u: goto label_15c990;
        case 0x15c994u: goto label_15c994;
        case 0x15c998u: goto label_15c998;
        case 0x15c99cu: goto label_15c99c;
        case 0x15c9a0u: goto label_15c9a0;
        case 0x15c9a4u: goto label_15c9a4;
        case 0x15c9a8u: goto label_15c9a8;
        case 0x15c9acu: goto label_15c9ac;
        case 0x15c9b0u: goto label_15c9b0;
        case 0x15c9b4u: goto label_15c9b4;
        case 0x15c9b8u: goto label_15c9b8;
        case 0x15c9bcu: goto label_15c9bc;
        case 0x15c9c0u: goto label_15c9c0;
        case 0x15c9c4u: goto label_15c9c4;
        case 0x15c9c8u: goto label_15c9c8;
        case 0x15c9ccu: goto label_15c9cc;
        case 0x15c9d0u: goto label_15c9d0;
        case 0x15c9d4u: goto label_15c9d4;
        case 0x15c9d8u: goto label_15c9d8;
        case 0x15c9dcu: goto label_15c9dc;
        case 0x15c9e0u: goto label_15c9e0;
        case 0x15c9e4u: goto label_15c9e4;
        case 0x15c9e8u: goto label_15c9e8;
        case 0x15c9ecu: goto label_15c9ec;
        case 0x15c9f0u: goto label_15c9f0;
        case 0x15c9f4u: goto label_15c9f4;
        default: break;
    }

    ctx->pc = 0x15c718u;

label_15c718:
    // 0x15c718: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x15c718u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_15c71c:
    // 0x15c71c: 0x24020070  addiu       $v0, $zero, 0x70
    ctx->pc = 0x15c71cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_15c720:
    // 0x15c720: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x15c720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
label_15c724:
    // 0x15c724: 0x3c070049  lui         $a3, 0x49
    ctx->pc = 0x15c724u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)73 << 16));
label_15c728:
    // 0x15c728: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x15c728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
label_15c72c:
    // 0x15c72c: 0x30b600ff  andi        $s6, $a1, 0xFF
    ctx->pc = 0x15c72cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_15c730:
    // 0x15c730: 0x2c2a818  mult        $s5, $s6, $v0
    ctx->pc = 0x15c730u;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 21, (int32_t)result); }
label_15c734:
    // 0x15c734: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x15c734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_15c738:
    // 0x15c738: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x15c738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_15c73c:
    // 0x15c73c: 0x24e78738  addiu       $a3, $a3, -0x78C8
    ctx->pc = 0x15c73cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294936376));
label_15c740:
    // 0x15c740: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x15c740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_15c744:
    // 0x15c744: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x15c744u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_15c748:
    // 0x15c748: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x15c748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_15c74c:
    // 0x15c74c: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x15c74cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_15c750:
    // 0x15c750: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x15c750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
label_15c754:
    // 0x15c754: 0x255a021  addu        $s4, $s2, $s5
    ctx->pc = 0x15c754u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
label_15c758:
    // 0x15c758: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x15c758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
label_15c75c:
    // 0x15c75c: 0x2484b060  addiu       $a0, $a0, -0x4FA0
    ctx->pc = 0x15c75cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946912));
label_15c760:
    // 0x15c760: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x15c760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_15c764:
    // 0x15c764: 0x8e420214  lw          $v0, 0x214($s2)
    ctx->pc = 0x15c764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 532)));
label_15c768:
    // 0x15c768: 0x8e860320  lw          $a2, 0x320($s4)
    ctx->pc = 0x15c768u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 800)));
label_15c76c:
    // 0x15c76c: 0xc04ae84  jal         func_12BA10
label_15c770:
    if (ctx->pc == 0x15C770u) {
        ctx->pc = 0x15C770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C76Cu;
        // 0x15c770: 0x8c450010  lw          $a1, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C774u;
        goto label_15c774;
    }
    ctx->pc = 0x15C76Cu;
    SET_GPR_U32(ctx, 31, 0x15C774u);
    ctx->pc = 0x15C770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C76Cu;
    // 0x15c770: 0x8c450010  lw          $a1, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12BA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12BA10u, 0x15C76Cu, 0x15C774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C774u;
label_15c774:
    // 0x15c774: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x15c774u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15c778:
    // 0x15c778: 0x12000093  beqz        $s0, . + 4 + (0x93 << 2)
label_15c77c:
    if (ctx->pc == 0x15C77Cu) {
        ctx->pc = 0x15C77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C778u;
        // 0x15c77c: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C780u;
        goto label_15c780;
    }
    ctx->pc = 0x15C778u;
    {
        const bool branch_taken_0x15c778 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C778u;
        // 0x15c77c: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c778) {
            ctx->pc = 0x15C9C8u;
            goto label_15c9c8;
        }
    }
    ctx->pc = 0x15C780u;
label_15c780:
    // 0x15c780: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x15c780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_15c784:
    // 0x15c784: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x15c784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_15c788:
    // 0x15c788: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_15c78c:
    if (ctx->pc == 0x15C78Cu) {
        ctx->pc = 0x15C78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C788u;
        // 0x15c78c: 0x8e110010  lw          $s1, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C790u;
        goto label_15c790;
    }
    ctx->pc = 0x15C788u;
    {
        const bool branch_taken_0x15c788 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x15C78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C788u;
        // 0x15c78c: 0x8e110010  lw          $s1, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c788) {
            ctx->pc = 0x15C798u;
            goto label_15c798;
        }
    }
    ctx->pc = 0x15C790u;
label_15c790:
    // 0x15c790: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x15c790u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_15c794:
    // 0x15c794: 0x38570001  xori        $s7, $v0, 0x1
    ctx->pc = 0x15c794u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_15c798:
    // 0x15c798: 0xc045e9c  jal         func_117A70
label_15c79c:
    if (ctx->pc == 0x15C79Cu) {
        ctx->pc = 0x15C79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C798u;
        // 0x15c79c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C7A0u;
        goto label_15c7a0;
    }
    ctx->pc = 0x15C798u;
    SET_GPR_U32(ctx, 31, 0x15C7A0u);
    ctx->pc = 0x15C79Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C798u;
    // 0x15c79c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117A70u, 0x15C798u, 0x15C7A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C7A0u;
label_15c7a0:
    // 0x15c7a0: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x15c7a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_15c7a4:
    // 0x15c7a4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15c7a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15c7a8:
    // 0x15c7a8: 0xc042128  jal         func_1084A0
label_15c7ac:
    if (ctx->pc == 0x15C7ACu) {
        ctx->pc = 0x15C7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C7A8u;
        // 0x15c7ac: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C7B0u;
        goto label_15c7b0;
    }
    ctx->pc = 0x15C7A8u;
    SET_GPR_U32(ctx, 31, 0x15C7B0u);
    ctx->pc = 0x15C7ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C7A8u;
    // 0x15c7ac: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1084A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1084A0u, 0x15C7A8u, 0x15C7B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C7B0u;
label_15c7b0:
    // 0x15c7b0: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x15c7b0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_15c7b4:
    // 0x15c7b4: 0xfa810350  sqc2        $vf1, 0x350($s4)
    ctx->pc = 0x15c7b4u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 848), _mm_castps_si128(ctx->vu0_vf[1]));
label_15c7b8:
    // 0x15c7b8: 0x8e4202f8  lw          $v0, 0x2F8($s2)
    ctx->pc = 0x15c7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 760)));
label_15c7bc:
    // 0x15c7bc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_15c7c0:
    if (ctx->pc == 0x15C7C0u) {
        ctx->pc = 0x15C7C4u;
        goto label_15c7c4;
    }
    ctx->pc = 0x15C7BCu;
    {
        const bool branch_taken_0x15c7bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15c7bc) {
            ctx->pc = 0x15C7D4u;
            goto label_15c7d4;
        }
    }
    ctx->pc = 0x15C7C4u;
label_15c7c4:
    // 0x15c7c4: 0xc057e6c  jal         func_15F9B0
label_15c7c8:
    if (ctx->pc == 0x15C7C8u) {
        ctx->pc = 0x15C7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C7C4u;
        // 0x15c7c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C7CCu;
        goto label_15c7cc;
    }
    ctx->pc = 0x15C7C4u;
    SET_GPR_U32(ctx, 31, 0x15C7CCu);
    ctx->pc = 0x15C7C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C7C4u;
    // 0x15c7c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15F9B0u, 0x15C7C4u, 0x15C7CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C7CCu;
label_15c7cc:
    // 0x15c7cc: 0x14400052  bnez        $v0, . + 4 + (0x52 << 2)
label_15c7d0:
    if (ctx->pc == 0x15C7D0u) {
        ctx->pc = 0x15C7D4u;
        goto label_15c7d4;
    }
    ctx->pc = 0x15C7CCu;
    {
        const bool branch_taken_0x15c7cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15c7cc) {
            ctx->pc = 0x15C918u;
            goto label_15c918;
        }
    }
    ctx->pc = 0x15C7D4u;
label_15c7d4:
    // 0x15c7d4: 0xc04f1f4  jal         func_13C7D0
label_15c7d8:
    if (ctx->pc == 0x15C7D8u) {
        ctx->pc = 0x15C7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C7D4u;
        // 0x15c7d8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C7DCu;
        goto label_15c7dc;
    }
    ctx->pc = 0x15C7D4u;
    SET_GPR_U32(ctx, 31, 0x15C7DCu);
    ctx->pc = 0x15C7D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C7D4u;
    // 0x15c7d8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C7D0u, 0x15C7D4u, 0x15C7DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C7DCu;
label_15c7dc:
    // 0x15c7dc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x15c7dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15c7e0:
    // 0x15c7e0: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x15c7e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_15c7e4:
    // 0x15c7e4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15c7e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15c7e8:
    // 0x15c7e8: 0xc04f33e  jal         func_13CCF8
label_15c7ec:
    if (ctx->pc == 0x15C7ECu) {
        ctx->pc = 0x15C7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C7E8u;
        // 0x15c7ec: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C7F0u;
        goto label_15c7f0;
    }
    ctx->pc = 0x15C7E8u;
    SET_GPR_U32(ctx, 31, 0x15C7F0u);
    ctx->pc = 0x15C7ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C7E8u;
    // 0x15c7ec: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13CCF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13CCF8u, 0x15C7E8u, 0x15C7F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C7F0u;
label_15c7f0:
    // 0x15c7f0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15c7f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15c7f4:
    // 0x15c7f4: 0xc04f0b6  jal         func_13C2D8
label_15c7f8:
    if (ctx->pc == 0x15C7F8u) {
        ctx->pc = 0x15C7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C7F4u;
        // 0x15c7f8: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C7FCu;
        goto label_15c7fc;
    }
    ctx->pc = 0x15C7F4u;
    SET_GPR_U32(ctx, 31, 0x15C7FCu);
    ctx->pc = 0x15C7F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C7F4u;
    // 0x15c7f8: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C2D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C2D8u, 0x15C7F4u, 0x15C7FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C7FCu;
label_15c7fc:
    // 0x15c7fc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x15c7fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15c800:
    // 0x15c800: 0xc0f6a96  jal         func_3DAA58
label_15c804:
    if (ctx->pc == 0x15C804u) {
        ctx->pc = 0x15C804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C800u;
        // 0x15c804: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C808u;
        goto label_15c808;
    }
    ctx->pc = 0x15C800u;
    SET_GPR_U32(ctx, 31, 0x15C808u);
    ctx->pc = 0x15C804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C800u;
    // 0x15c804: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x15C800u, 0x15C808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C808u;
label_15c808:
    // 0x15c808: 0x2b21021  addu        $v0, $s5, $s2
    ctx->pc = 0x15c808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
label_15c80c:
    // 0x15c80c: 0x8e4302f8  lw          $v1, 0x2F8($s2)
    ctx->pc = 0x15c80cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 760)));
label_15c810:
    // 0x15c810: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_15c814:
    if (ctx->pc == 0x15C814u) {
        ctx->pc = 0x15C814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C810u;
        // 0x15c814: 0x24550350  addiu       $s5, $v0, 0x350 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 848));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C818u;
        goto label_15c818;
    }
    ctx->pc = 0x15C810u;
    {
        const bool branch_taken_0x15c810 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C810u;
        // 0x15c814: 0x24550350  addiu       $s5, $v0, 0x350 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 848));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c810) {
            ctx->pc = 0x15C834u;
            goto label_15c834;
        }
    }
    ctx->pc = 0x15C818u;
label_15c818:
    // 0x15c818: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15c818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15c81c:
    // 0x15c81c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x15c81cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_15c820:
    // 0x15c820: 0xc0579c8  jal         func_15E720
label_15c824:
    if (ctx->pc == 0x15C824u) {
        ctx->pc = 0x15C824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C820u;
        // 0x15c824: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C828u;
        goto label_15c828;
    }
    ctx->pc = 0x15C820u;
    SET_GPR_U32(ctx, 31, 0x15C828u);
    ctx->pc = 0x15C824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C820u;
    // 0x15c824: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15E720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15E720u, 0x15C820u, 0x15C828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C828u;
label_15c828:
    // 0x15c828: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x15c828u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15c82c:
    // 0x15c82c: 0x10000005  b           . + 4 + (0x5 << 2)
label_15c830:
    if (ctx->pc == 0x15C830u) {
        ctx->pc = 0x15C830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C82Cu;
        // 0x15c830: 0xae900360  sw          $s0, 0x360($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 864), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C834u;
        goto label_15c834;
    }
    ctx->pc = 0x15C82Cu;
    {
        const bool branch_taken_0x15c82c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C82Cu;
        // 0x15c830: 0xae900360  sw          $s0, 0x360($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 864), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c82c) {
            ctx->pc = 0x15C844u;
            goto label_15c844;
        }
    }
    ctx->pc = 0x15C834u;
label_15c834:
    // 0x15c834: 0x8e5002e0  lw          $s0, 0x2E0($s2)
    ctx->pc = 0x15c834u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 736)));
label_15c838:
    // 0x15c838: 0x8e4202e4  lw          $v0, 0x2E4($s2)
    ctx->pc = 0x15c838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 740)));
label_15c83c:
    // 0x15c83c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x15c83cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_15c840:
    // 0x15c840: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x15c840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_15c844:
    // 0x15c844: 0xc06fb8e  jal         func_1BEE38
label_15c848:
    if (ctx->pc == 0x15C848u) {
        ctx->pc = 0x15C848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C844u;
        // 0x15c848: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C84Cu;
        goto label_15c84c;
    }
    ctx->pc = 0x15C844u;
    SET_GPR_U32(ctx, 31, 0x15C84Cu);
    ctx->pc = 0x15C848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C844u;
    // 0x15c848: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BEE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BEE38u, 0x15C844u, 0x15C84Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C84Cu;
label_15c84c:
    // 0x15c84c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15c84cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15c850:
    // 0x15c850: 0xc045fea  jal         func_117FA8
label_15c854:
    if (ctx->pc == 0x15C854u) {
        ctx->pc = 0x15C854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C850u;
        // 0x15c854: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C858u;
        goto label_15c858;
    }
    ctx->pc = 0x15C850u;
    SET_GPR_U32(ctx, 31, 0x15C858u);
    ctx->pc = 0x15C854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C850u;
    // 0x15c854: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117FA8u, 0x15C850u, 0x15C858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C858u;
label_15c858:
    // 0x15c858: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x15c858u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_15c85c:
    // 0x15c85c: 0xc046058  jal         func_118160
label_15c860:
    if (ctx->pc == 0x15C860u) {
        ctx->pc = 0x15C860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C85Cu;
        // 0x15c860: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C864u;
        goto label_15c864;
    }
    ctx->pc = 0x15C85Cu;
    SET_GPR_U32(ctx, 31, 0x15C864u);
    ctx->pc = 0x15C860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C85Cu;
    // 0x15c860: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118160u, 0x15C85Cu, 0x15C864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C864u;
label_15c864:
    // 0x15c864: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15c864u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15c868:
    // 0x15c868: 0xc046104  jal         func_118410
label_15c86c:
    if (ctx->pc == 0x15C86Cu) {
        ctx->pc = 0x15C86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C868u;
        // 0x15c86c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C870u;
        goto label_15c870;
    }
    ctx->pc = 0x15C868u;
    SET_GPR_U32(ctx, 31, 0x15C870u);
    ctx->pc = 0x15C86Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C868u;
    // 0x15c86c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118410u, 0x15C868u, 0x15C870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C870u;
label_15c870:
    // 0x15c870: 0x8e63000c  lw          $v1, 0xC($s3)
    ctx->pc = 0x15c870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_15c874:
    // 0x15c874: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x15c874u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15c878:
    // 0x15c878: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x15c878u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_15c87c:
    // 0x15c87c: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x15c87cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_15c880:
    // 0x15c880: 0x40f809  jalr        $v0
label_15c884:
    if (ctx->pc == 0x15C884u) {
        ctx->pc = 0x15C884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C880u;
        // 0x15c884: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C888u;
        goto label_15c888;
    }
    ctx->pc = 0x15C880u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15C888u);
        ctx->pc = 0x15C884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C880u;
        // 0x15c884: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15C880u, 0x15C888u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15C888u;
label_15c888:
    // 0x15c888: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x15c888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_15c88c:
    // 0x15c88c: 0xc04d7da  jal         func_135F68
label_15c890:
    if (ctx->pc == 0x15C890u) {
        ctx->pc = 0x15C890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C88Cu;
        // 0x15c890: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C894u;
        goto label_15c894;
    }
    ctx->pc = 0x15C88Cu;
    SET_GPR_U32(ctx, 31, 0x15C894u);
    ctx->pc = 0x15C890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C88Cu;
    // 0x15c890: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135F68u, 0x15C88Cu, 0x15C894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C894u;
label_15c894:
    // 0x15c894: 0x56e00007  bnel        $s7, $zero, . + 4 + (0x7 << 2)
label_15c898:
    if (ctx->pc == 0x15C898u) {
        ctx->pc = 0x15C898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C894u;
        // 0x15c898: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C89Cu;
        goto label_15c89c;
    }
    ctx->pc = 0x15C894u;
    {
        const bool branch_taken_0x15c894 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        if (branch_taken_0x15c894) {
            ctx->pc = 0x15C898u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15C894u;
            // 0x15c898: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15C8B4u;
            goto label_15c8b4;
        }
    }
    ctx->pc = 0x15C89Cu;
label_15c89c:
    // 0x15c89c: 0x8e4202f8  lw          $v0, 0x2F8($s2)
    ctx->pc = 0x15c89cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 760)));
label_15c8a0:
    // 0x15c8a0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_15c8a4:
    if (ctx->pc == 0x15C8A4u) {
        ctx->pc = 0x15C8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C8A0u;
        // 0x15c8a4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C8A8u;
        goto label_15c8a8;
    }
    ctx->pc = 0x15C8A0u;
    {
        const bool branch_taken_0x15c8a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C8A0u;
        // 0x15c8a4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c8a0) {
            ctx->pc = 0x15C8B0u;
            goto label_15c8b0;
        }
    }
    ctx->pc = 0x15C8A8u;
label_15c8a8:
    // 0x15c8a8: 0xc04d7dc  jal         func_135F70
label_15c8ac:
    if (ctx->pc == 0x15C8ACu) {
        ctx->pc = 0x15C8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C8A8u;
        // 0x15c8ac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C8B0u;
        goto label_15c8b0;
    }
    ctx->pc = 0x15C8A8u;
    SET_GPR_U32(ctx, 31, 0x15C8B0u);
    ctx->pc = 0x15C8ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C8A8u;
    // 0x15c8ac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135F70u, 0x15C8A8u, 0x15C8B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C8B0u;
label_15c8b0:
    // 0x15c8b0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x15c8b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_15c8b4:
    // 0x15c8b4: 0xc052002  jal         func_148008
label_15c8b8:
    if (ctx->pc == 0x15C8B8u) {
        ctx->pc = 0x15C8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C8B4u;
        // 0x15c8b8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C8BCu;
        goto label_15c8bc;
    }
    ctx->pc = 0x15C8B4u;
    SET_GPR_U32(ctx, 31, 0x15C8BCu);
    ctx->pc = 0x15C8B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C8B4u;
    // 0x15c8b8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148008u, 0x15C8B4u, 0x15C8BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C8BCu;
label_15c8bc:
    // 0x15c8bc: 0x24100070  addiu       $s0, $zero, 0x70
    ctx->pc = 0x15c8bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_15c8c0:
    // 0x15c8c0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x15c8c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_15c8c4:
    // 0x15c8c4: 0xc052000  jal         func_148000
label_15c8c8:
    if (ctx->pc == 0x15C8C8u) {
        ctx->pc = 0x15C8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C8C4u;
        // 0x15c8c8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C8CCu;
        goto label_15c8cc;
    }
    ctx->pc = 0x15C8C4u;
    SET_GPR_U32(ctx, 31, 0x15C8CCu);
    ctx->pc = 0x15C8C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C8C4u;
    // 0x15c8c8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148000u, 0x15C8C4u, 0x15C8CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C8CCu;
label_15c8cc:
    // 0x15c8cc: 0x2d01818  mult        $v1, $s6, $s0
    ctx->pc = 0x15c8ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_15c8d0:
    // 0x15c8d0: 0x721021  addu        $v0, $v1, $s2
    ctx->pc = 0x15c8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_15c8d4:
    // 0x15c8d4: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x15c8d4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_15c8d8:
    // 0x15c8d8: 0xf8410370  sqc2        $vf1, 0x370($v0)
    ctx->pc = 0x15c8d8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 880), _mm_castps_si128(ctx->vu0_vf[1]));
label_15c8dc:
    // 0x15c8dc: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x15c8dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_15c8e0:
    // 0x15c8e0: 0xc0aafa6  jal         func_2ABE98
label_15c8e4:
    if (ctx->pc == 0x15C8E4u) {
        ctx->pc = 0x15C8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C8E0u;
        // 0x15c8e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C8E8u;
        goto label_15c8e8;
    }
    ctx->pc = 0x15C8E0u;
    SET_GPR_U32(ctx, 31, 0x15C8E8u);
    ctx->pc = 0x15C8E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C8E0u;
    // 0x15c8e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x15C8E0u, 0x15C8E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C8E8u;
label_15c8e8:
    // 0x15c8e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15c8e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15c8ec:
    // 0x15c8ec: 0xc0aafc8  jal         func_2ABF20
label_15c8f0:
    if (ctx->pc == 0x15C8F0u) {
        ctx->pc = 0x15C8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C8ECu;
        // 0x15c8f0: 0x24050078  addiu       $a1, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C8F4u;
        goto label_15c8f4;
    }
    ctx->pc = 0x15C8ECu;
    SET_GPR_U32(ctx, 31, 0x15C8F4u);
    ctx->pc = 0x15C8F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C8ECu;
    // 0x15c8f0: 0x24050078  addiu       $a1, $zero, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF20u, 0x15C8ECu, 0x15C8F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C8F4u;
label_15c8f4:
    // 0x15c8f4: 0x2d01818  mult        $v1, $s6, $s0
    ctx->pc = 0x15c8f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_15c8f8:
    // 0x15c8f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15c8f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15c8fc:
    // 0x15c8fc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x15c8fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_15c900:
    // 0x15c900: 0x728021  addu        $s0, $v1, $s2
    ctx->pc = 0x15c900u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_15c904:
    // 0x15c904: 0xae02033c  sw          $v0, 0x33C($s0)
    ctx->pc = 0x15c904u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 828), GPR_U32(ctx, 2));
label_15c908:
    // 0x15c908: 0xc0aafac  jal         func_2ABEB0
label_15c90c:
    if (ctx->pc == 0x15C90Cu) {
        ctx->pc = 0x15C90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C908u;
        // 0x15c90c: 0xae000340  sw          $zero, 0x340($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 832), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C910u;
        goto label_15c910;
    }
    ctx->pc = 0x15C908u;
    SET_GPR_U32(ctx, 31, 0x15C910u);
    ctx->pc = 0x15C90Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C908u;
    // 0x15c90c: 0xae000340  sw          $zero, 0x340($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 832), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x15C908u, 0x15C910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C910u;
label_15c910:
    // 0x15c910: 0x10000024  b           . + 4 + (0x24 << 2)
label_15c914:
    if (ctx->pc == 0x15C914u) {
        ctx->pc = 0x15C914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C910u;
        // 0x15c914: 0x24030070  addiu       $v1, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C918u;
        goto label_15c918;
    }
    ctx->pc = 0x15C910u;
    {
        const bool branch_taken_0x15c910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C910u;
        // 0x15c914: 0x24030070  addiu       $v1, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c910) {
            ctx->pc = 0x15C9A4u;
            goto label_15c9a4;
        }
    }
    ctx->pc = 0x15C918u;
label_15c918:
    // 0x15c918: 0xc04f26c  jal         func_13C9B0
label_15c91c:
    if (ctx->pc == 0x15C91Cu) {
        ctx->pc = 0x15C91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C918u;
        // 0x15c91c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C920u;
        goto label_15c920;
    }
    ctx->pc = 0x15C918u;
    SET_GPR_U32(ctx, 31, 0x15C920u);
    ctx->pc = 0x15C91Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C918u;
    // 0x15c91c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C9B0u, 0x15C918u, 0x15C920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C920u;
label_15c920:
    // 0x15c920: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x15c920u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15c924:
    // 0x15c924: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x15c924u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_15c928:
    // 0x15c928: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15c928u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15c92c:
    // 0x15c92c: 0xc04f33e  jal         func_13CCF8
label_15c930:
    if (ctx->pc == 0x15C930u) {
        ctx->pc = 0x15C930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C92Cu;
        // 0x15c930: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C934u;
        goto label_15c934;
    }
    ctx->pc = 0x15C92Cu;
    SET_GPR_U32(ctx, 31, 0x15C934u);
    ctx->pc = 0x15C930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C92Cu;
    // 0x15c930: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13CCF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13CCF8u, 0x15C92Cu, 0x15C934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C934u;
label_15c934:
    // 0x15c934: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15c934u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15c938:
    // 0x15c938: 0xc04f0b6  jal         func_13C2D8
label_15c93c:
    if (ctx->pc == 0x15C93Cu) {
        ctx->pc = 0x15C93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C938u;
        // 0x15c93c: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C940u;
        goto label_15c940;
    }
    ctx->pc = 0x15C938u;
    SET_GPR_U32(ctx, 31, 0x15C940u);
    ctx->pc = 0x15C93Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C938u;
    // 0x15c93c: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C2D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C2D8u, 0x15C938u, 0x15C940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C940u;
label_15c940:
    // 0x15c940: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x15c940u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_15c944:
    // 0x15c944: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x15c944u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_15c948:
    // 0x15c948: 0xc046330  jal         func_118CC0
label_15c94c:
    if (ctx->pc == 0x15C94Cu) {
        ctx->pc = 0x15C94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C948u;
        // 0x15c94c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C950u;
        goto label_15c950;
    }
    ctx->pc = 0x15C948u;
    SET_GPR_U32(ctx, 31, 0x15C950u);
    ctx->pc = 0x15C94Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C948u;
    // 0x15c94c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118CC0u, 0x15C948u, 0x15C950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C950u;
label_15c950:
    // 0x15c950: 0x2b22821  addu        $a1, $s5, $s2
    ctx->pc = 0x15c950u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
label_15c954:
    // 0x15c954: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15c954u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15c958:
    // 0x15c958: 0xc046058  jal         func_118160
label_15c95c:
    if (ctx->pc == 0x15C95Cu) {
        ctx->pc = 0x15C95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C958u;
        // 0x15c95c: 0x24a50350  addiu       $a1, $a1, 0x350 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 848));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C960u;
        goto label_15c960;
    }
    ctx->pc = 0x15C958u;
    SET_GPR_U32(ctx, 31, 0x15C960u);
    ctx->pc = 0x15C95Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C958u;
    // 0x15c95c: 0x24a50350  addiu       $a1, $a1, 0x350 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118160u, 0x15C958u, 0x15C960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C960u;
label_15c960:
    // 0x15c960: 0x8e63000c  lw          $v1, 0xC($s3)
    ctx->pc = 0x15c960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_15c964:
    // 0x15c964: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x15c964u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15c968:
    // 0x15c968: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x15c968u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15c96c:
    // 0x15c96c: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x15c96cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_15c970:
    // 0x15c970: 0x40f809  jalr        $v0
label_15c974:
    if (ctx->pc == 0x15C974u) {
        ctx->pc = 0x15C974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C970u;
        // 0x15c974: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C978u;
        goto label_15c978;
    }
    ctx->pc = 0x15C970u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15C978u);
        ctx->pc = 0x15C974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C970u;
        // 0x15c974: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15C970u, 0x15C978u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x15C978u;
label_15c978:
    // 0x15c978: 0xc0aafa6  jal         func_2ABE98
label_15c97c:
    if (ctx->pc == 0x15C97Cu) {
        ctx->pc = 0x15C97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C978u;
        // 0x15c97c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C980u;
        goto label_15c980;
    }
    ctx->pc = 0x15C978u;
    SET_GPR_U32(ctx, 31, 0x15C980u);
    ctx->pc = 0x15C97Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C978u;
    // 0x15c97c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x15C978u, 0x15C980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C980u;
label_15c980:
    // 0x15c980: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x15c980u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_15c984:
    // 0x15c984: 0xc0aafc8  jal         func_2ABF20
label_15c988:
    if (ctx->pc == 0x15C988u) {
        ctx->pc = 0x15C988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C984u;
        // 0x15c988: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C98Cu;
        goto label_15c98c;
    }
    ctx->pc = 0x15C984u;
    SET_GPR_U32(ctx, 31, 0x15C98Cu);
    ctx->pc = 0x15C988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C984u;
    // 0x15c988: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF20u, 0x15C984u, 0x15C98Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C98Cu;
label_15c98c:
    // 0x15c98c: 0xae800340  sw          $zero, 0x340($s4)
    ctx->pc = 0x15c98cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 832), GPR_U32(ctx, 0));
label_15c990:
    // 0x15c990: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x15c990u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_15c994:
    // 0x15c994: 0xae82033c  sw          $v0, 0x33C($s4)
    ctx->pc = 0x15c994u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 828), GPR_U32(ctx, 2));
label_15c998:
    // 0x15c998: 0xc0aafac  jal         func_2ABEB0
label_15c99c:
    if (ctx->pc == 0x15C99Cu) {
        ctx->pc = 0x15C99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C998u;
        // 0x15c99c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C9A0u;
        goto label_15c9a0;
    }
    ctx->pc = 0x15C998u;
    SET_GPR_U32(ctx, 31, 0x15C9A0u);
    ctx->pc = 0x15C99Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15C998u;
    // 0x15c99c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x15C998u, 0x15C9A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15C9A0u;
label_15c9a0:
    // 0x15c9a0: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x15c9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_15c9a4:
    // 0x15c9a4: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x15c9a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_15c9a8:
    // 0x15c9a8: 0x2c31018  mult        $v0, $s6, $v1
    ctx->pc = 0x15c9a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_15c9ac:
    // 0x15c9ac: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x15c9acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_15c9b0:
    // 0x15c9b0: 0x521821  addu        $v1, $v0, $s2
    ctx->pc = 0x15c9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_15c9b4:
    // 0x15c9b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15c9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15c9b8:
    // 0x15c9b8: 0xac73032c  sw          $s3, 0x32C($v1)
    ctx->pc = 0x15c9b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 812), GPR_U32(ctx, 19));
label_15c9bc:
    // 0x15c9bc: 0xac620330  sw          $v0, 0x330($v1)
    ctx->pc = 0x15c9bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 816), GPR_U32(ctx, 2));
label_15c9c0:
    // 0x15c9c0: 0xac650324  sw          $a1, 0x324($v1)
    ctx->pc = 0x15c9c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 804), GPR_U32(ctx, 5));
label_15c9c4:
    // 0x15c9c4: 0xac640328  sw          $a0, 0x328($v1)
    ctx->pc = 0x15c9c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 808), GPR_U32(ctx, 4));
label_15c9c8:
    // 0x15c9c8: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x15c9c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_15c9cc:
    // 0x15c9cc: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x15c9ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_15c9d0:
    // 0x15c9d0: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x15c9d0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_15c9d4:
    // 0x15c9d4: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x15c9d4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_15c9d8:
    // 0x15c9d8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x15c9d8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_15c9dc:
    // 0x15c9dc: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x15c9dcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_15c9e0:
    // 0x15c9e0: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x15c9e0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_15c9e4:
    // 0x15c9e4: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x15c9e4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_15c9e8:
    // 0x15c9e8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x15c9e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_15c9ec:
    // 0x15c9ec: 0x3e00008  jr          $ra
label_15c9f0:
    if (ctx->pc == 0x15C9F0u) {
        ctx->pc = 0x15C9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C9ECu;
        // 0x15c9f0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15C9F4u;
        goto label_15c9f4;
    }
    ctx->pc = 0x15C9ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15C9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C9ECu;
        // 0x15c9f0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15C9ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15C9F4u;
label_15c9f4:
    // 0x15c9f4: 0x0  nop
    ctx->pc = 0x15c9f4u;
    // NOP
    ctx->pc = 0x15c9f8u;
}
