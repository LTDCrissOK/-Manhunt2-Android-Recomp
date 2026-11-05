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

// Function: sub_00383858
// Address: 0x383858 - 0x383958
void sub_00383858_0x383858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00383858_0x383858");
#endif

    switch (ctx->pc) {
        case 0x383858u: goto label_383858;
        case 0x38385cu: goto label_38385c;
        case 0x383860u: goto label_383860;
        case 0x383864u: goto label_383864;
        case 0x383868u: goto label_383868;
        case 0x38386cu: goto label_38386c;
        case 0x383870u: goto label_383870;
        case 0x383874u: goto label_383874;
        case 0x383878u: goto label_383878;
        case 0x38387cu: goto label_38387c;
        case 0x383880u: goto label_383880;
        case 0x383884u: goto label_383884;
        case 0x383888u: goto label_383888;
        case 0x38388cu: goto label_38388c;
        case 0x383890u: goto label_383890;
        case 0x383894u: goto label_383894;
        case 0x383898u: goto label_383898;
        case 0x38389cu: goto label_38389c;
        case 0x3838a0u: goto label_3838a0;
        case 0x3838a4u: goto label_3838a4;
        case 0x3838a8u: goto label_3838a8;
        case 0x3838acu: goto label_3838ac;
        case 0x3838b0u: goto label_3838b0;
        case 0x3838b4u: goto label_3838b4;
        case 0x3838b8u: goto label_3838b8;
        case 0x3838bcu: goto label_3838bc;
        case 0x3838c0u: goto label_3838c0;
        case 0x3838c4u: goto label_3838c4;
        case 0x3838c8u: goto label_3838c8;
        case 0x3838ccu: goto label_3838cc;
        case 0x3838d0u: goto label_3838d0;
        case 0x3838d4u: goto label_3838d4;
        case 0x3838d8u: goto label_3838d8;
        case 0x3838dcu: goto label_3838dc;
        case 0x3838e0u: goto label_3838e0;
        case 0x3838e4u: goto label_3838e4;
        case 0x3838e8u: goto label_3838e8;
        case 0x3838ecu: goto label_3838ec;
        case 0x3838f0u: goto label_3838f0;
        case 0x3838f4u: goto label_3838f4;
        case 0x3838f8u: goto label_3838f8;
        case 0x3838fcu: goto label_3838fc;
        case 0x383900u: goto label_383900;
        case 0x383904u: goto label_383904;
        case 0x383908u: goto label_383908;
        case 0x38390cu: goto label_38390c;
        case 0x383910u: goto label_383910;
        case 0x383914u: goto label_383914;
        case 0x383918u: goto label_383918;
        case 0x38391cu: goto label_38391c;
        case 0x383920u: goto label_383920;
        case 0x383924u: goto label_383924;
        case 0x383928u: goto label_383928;
        case 0x38392cu: goto label_38392c;
        case 0x383930u: goto label_383930;
        case 0x383934u: goto label_383934;
        case 0x383938u: goto label_383938;
        case 0x38393cu: goto label_38393c;
        case 0x383940u: goto label_383940;
        case 0x383944u: goto label_383944;
        case 0x383948u: goto label_383948;
        case 0x38394cu: goto label_38394c;
        case 0x383950u: goto label_383950;
        case 0x383954u: goto label_383954;
        default: break;
    }

    ctx->pc = 0x383858u;

label_383858:
    // 0x383858: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x383858u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_38385c:
    // 0x38385c: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x38385cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_383860:
    // 0x383860: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x383860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_383864:
    // 0x383864: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x383864u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_383868:
    // 0x383868: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x383868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_38386c:
    // 0x38386c: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x38386cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_383870:
    // 0x383870: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x383870u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_383874:
    // 0x383874: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x383874u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_383878:
    // 0x383878: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x383878u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_38387c:
    // 0x38387c: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x38387cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_383880:
    // 0x383880: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x383880u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_383884:
    // 0x383884: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x383884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_383888:
    // 0x383888: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x383888u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_38388c:
    // 0x38388c: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x38388cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_383890:
    // 0x383890: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x383890u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_383894:
    // 0x383894: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x383894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_383898:
    // 0x383898: 0x8e240030  lw          $a0, 0x30($s1)
    ctx->pc = 0x383898u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_38389c:
    // 0x38389c: 0x40f809  jalr        $v0
label_3838a0:
    if (ctx->pc == 0x3838A0u) {
        ctx->pc = 0x3838A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38389Cu;
        // 0x3838a0: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3838A4u;
        goto label_3838a4;
    }
    ctx->pc = 0x38389Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3838A4u);
        ctx->pc = 0x3838A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38389Cu;
        // 0x3838a0: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38389Cu, 0x3838A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3838A4u;
label_3838a4:
    // 0x3838a4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3838a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3838a8:
    // 0x3838a8: 0x12400022  beqz        $s2, . + 4 + (0x22 << 2)
label_3838ac:
    if (ctx->pc == 0x3838ACu) {
        ctx->pc = 0x3838ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3838A8u;
        // 0x3838ac: 0x2402fffc  addiu       $v0, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3838B0u;
        goto label_3838b0;
    }
    ctx->pc = 0x3838A8u;
    {
        const bool branch_taken_0x3838a8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3838ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3838A8u;
        // 0x3838ac: 0x2402fffc  addiu       $v0, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3838a8) {
            ctx->pc = 0x383934u;
            goto label_383934;
        }
    }
    ctx->pc = 0x3838B0u;
label_3838b0:
    // 0x3838b0: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x3838b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3838b4:
    // 0x3838b4: 0x200582d  daddu       $t3, $s0, $zero
    ctx->pc = 0x3838b4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3838b8:
    // 0x3838b8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3838b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3838bc:
    // 0x3838bc: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x3838bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_3838c0:
    // 0x3838c0: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x3838c0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3838c4:
    // 0x3838c4: 0xafb20008  sw          $s2, 0x8($sp)
    ctx->pc = 0x3838c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 18));
label_3838c8:
    // 0x3838c8: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x3838c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_3838cc:
    // 0x3838cc: 0x24060013  addiu       $a2, $zero, 0x13
    ctx->pc = 0x3838ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_3838d0:
    // 0x3838d0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3838d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3838d4:
    // 0x3838d4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3838d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3838d8:
    // 0x3838d8: 0xc0e0c98  jal         func_383260
label_3838dc:
    if (ctx->pc == 0x3838DCu) {
        ctx->pc = 0x3838DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3838D8u;
        // 0x3838dc: 0x2a0502d  daddu       $t2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3838E0u;
        goto label_3838e0;
    }
    ctx->pc = 0x3838D8u;
    SET_GPR_U32(ctx, 31, 0x3838E0u);
    ctx->pc = 0x3838DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3838D8u;
    // 0x3838dc: 0x2a0502d  daddu       $t2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x383260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x383260u, 0x3838D8u, 0x3838E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3838E0u;
label_3838e0:
    // 0x3838e0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3838e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3838e4:
    // 0x3838e4: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x3838e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_3838e8:
    // 0x3838e8: 0x56020004  bnel        $s0, $v0, . + 4 + (0x4 << 2)
label_3838ec:
    if (ctx->pc == 0x3838ECu) {
        ctx->pc = 0x3838ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3838E8u;
        // 0x3838ec: 0x2402fffb  addiu       $v0, $zero, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3838F0u;
        goto label_3838f0;
    }
    ctx->pc = 0x3838E8u;
    {
        const bool branch_taken_0x3838e8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x3838e8) {
            ctx->pc = 0x3838ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3838E8u;
            // 0x3838ec: 0x2402fffb  addiu       $v0, $zero, -0x5 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3838FCu;
            goto label_3838fc;
        }
    }
    ctx->pc = 0x3838F0u;
label_3838f0:
    // 0x3838f0: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x3838f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_3838f4:
    // 0x3838f4: 0x10000009  b           . + 4 + (0x9 << 2)
label_3838f8:
    if (ctx->pc == 0x3838F8u) {
        ctx->pc = 0x3838F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3838F4u;
        // 0x3838f8: 0x24428748  addiu       $v0, $v0, -0x78B8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936392));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3838FCu;
        goto label_3838fc;
    }
    ctx->pc = 0x3838F4u;
    {
        const bool branch_taken_0x3838f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3838F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3838F4u;
        // 0x3838f8: 0x24428748  addiu       $v0, $v0, -0x78B8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936392));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3838f4) {
            ctx->pc = 0x38391Cu;
            goto label_38391c;
        }
    }
    ctx->pc = 0x3838FCu;
label_3838fc:
    // 0x3838fc: 0x12020005  beq         $s0, $v0, . + 4 + (0x5 << 2)
label_383900:
    if (ctx->pc == 0x383900u) {
        ctx->pc = 0x383900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3838FCu;
        // 0x383900: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x383904u;
        goto label_383904;
    }
    ctx->pc = 0x3838FCu;
    {
        const bool branch_taken_0x3838fc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x383900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3838FCu;
        // 0x383900: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3838fc) {
            ctx->pc = 0x383914u;
            goto label_383914;
        }
    }
    ctx->pc = 0x383904u;
label_383904:
    // 0x383904: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x383904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_383908:
    // 0x383908: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_38390c:
    if (ctx->pc == 0x38390Cu) {
        ctx->pc = 0x38390Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383908u;
        // 0x38390c: 0x8e22002c  lw          $v0, 0x2C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x383910u;
        goto label_383910;
    }
    ctx->pc = 0x383908u;
    {
        const bool branch_taken_0x383908 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x383908) {
            ctx->pc = 0x38390Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x383908u;
            // 0x38390c: 0x8e22002c  lw          $v0, 0x2C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x383924u;
            goto label_383924;
        }
    }
    ctx->pc = 0x383910u;
label_383910:
    // 0x383910: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x383910u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_383914:
    // 0x383914: 0x2410fffd  addiu       $s0, $zero, -0x3
    ctx->pc = 0x383914u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_383918:
    // 0x383918: 0x24428770  addiu       $v0, $v0, -0x7890
    ctx->pc = 0x383918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936432));
label_38391c:
    // 0x38391c: 0xae220020  sw          $v0, 0x20($s1)
    ctx->pc = 0x38391cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
label_383920:
    // 0x383920: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x383920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_383924:
    // 0x383924: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x383924u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_383928:
    // 0x383928: 0x40f809  jalr        $v0
label_38392c:
    if (ctx->pc == 0x38392Cu) {
        ctx->pc = 0x38392Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383928u;
        // 0x38392c: 0x8e240030  lw          $a0, 0x30($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x383930u;
        goto label_383930;
    }
    ctx->pc = 0x383928u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x383930u);
        ctx->pc = 0x38392Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383928u;
        // 0x38392c: 0x8e240030  lw          $a0, 0x30($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x383928u, 0x383930u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x383930u;
label_383930:
    // 0x383930: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x383930u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_383934:
    // 0x383934: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x383934u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_383938:
    // 0x383938: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x383938u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_38393c:
    // 0x38393c: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x38393cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_383940:
    // 0x383940: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x383940u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_383944:
    // 0x383944: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x383944u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_383948:
    // 0x383948: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x383948u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_38394c:
    // 0x38394c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x38394cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_383950:
    // 0x383950: 0x3e00008  jr          $ra
label_383954:
    if (ctx->pc == 0x383954u) {
        ctx->pc = 0x383954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383950u;
        // 0x383954: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x383958u;
        goto label_fallthrough_0x383950;
    }
    ctx->pc = 0x383950u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x383954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383950u;
        // 0x383954: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x383950u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x383950:
    ctx->pc = 0x383958u;
}
