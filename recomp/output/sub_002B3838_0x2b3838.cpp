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

// Function: sub_002B3838
// Address: 0x2b3838 - 0x2b3980
void sub_002B3838_0x2b3838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B3838_0x2b3838");
#endif

    switch (ctx->pc) {
        case 0x2b3838u: goto label_2b3838;
        case 0x2b383cu: goto label_2b383c;
        case 0x2b3840u: goto label_2b3840;
        case 0x2b3844u: goto label_2b3844;
        case 0x2b3848u: goto label_2b3848;
        case 0x2b384cu: goto label_2b384c;
        case 0x2b3850u: goto label_2b3850;
        case 0x2b3854u: goto label_2b3854;
        case 0x2b3858u: goto label_2b3858;
        case 0x2b385cu: goto label_2b385c;
        case 0x2b3860u: goto label_2b3860;
        case 0x2b3864u: goto label_2b3864;
        case 0x2b3868u: goto label_2b3868;
        case 0x2b386cu: goto label_2b386c;
        case 0x2b3870u: goto label_2b3870;
        case 0x2b3874u: goto label_2b3874;
        case 0x2b3878u: goto label_2b3878;
        case 0x2b387cu: goto label_2b387c;
        case 0x2b3880u: goto label_2b3880;
        case 0x2b3884u: goto label_2b3884;
        case 0x2b3888u: goto label_2b3888;
        case 0x2b388cu: goto label_2b388c;
        case 0x2b3890u: goto label_2b3890;
        case 0x2b3894u: goto label_2b3894;
        case 0x2b3898u: goto label_2b3898;
        case 0x2b389cu: goto label_2b389c;
        case 0x2b38a0u: goto label_2b38a0;
        case 0x2b38a4u: goto label_2b38a4;
        case 0x2b38a8u: goto label_2b38a8;
        case 0x2b38acu: goto label_2b38ac;
        case 0x2b38b0u: goto label_2b38b0;
        case 0x2b38b4u: goto label_2b38b4;
        case 0x2b38b8u: goto label_2b38b8;
        case 0x2b38bcu: goto label_2b38bc;
        case 0x2b38c0u: goto label_2b38c0;
        case 0x2b38c4u: goto label_2b38c4;
        case 0x2b38c8u: goto label_2b38c8;
        case 0x2b38ccu: goto label_2b38cc;
        case 0x2b38d0u: goto label_2b38d0;
        case 0x2b38d4u: goto label_2b38d4;
        case 0x2b38d8u: goto label_2b38d8;
        case 0x2b38dcu: goto label_2b38dc;
        case 0x2b38e0u: goto label_2b38e0;
        case 0x2b38e4u: goto label_2b38e4;
        case 0x2b38e8u: goto label_2b38e8;
        case 0x2b38ecu: goto label_2b38ec;
        case 0x2b38f0u: goto label_2b38f0;
        case 0x2b38f4u: goto label_2b38f4;
        case 0x2b38f8u: goto label_2b38f8;
        case 0x2b38fcu: goto label_2b38fc;
        case 0x2b3900u: goto label_2b3900;
        case 0x2b3904u: goto label_2b3904;
        case 0x2b3908u: goto label_2b3908;
        case 0x2b390cu: goto label_2b390c;
        case 0x2b3910u: goto label_2b3910;
        case 0x2b3914u: goto label_2b3914;
        case 0x2b3918u: goto label_2b3918;
        case 0x2b391cu: goto label_2b391c;
        case 0x2b3920u: goto label_2b3920;
        case 0x2b3924u: goto label_2b3924;
        case 0x2b3928u: goto label_2b3928;
        case 0x2b392cu: goto label_2b392c;
        case 0x2b3930u: goto label_2b3930;
        case 0x2b3934u: goto label_2b3934;
        case 0x2b3938u: goto label_2b3938;
        case 0x2b393cu: goto label_2b393c;
        case 0x2b3940u: goto label_2b3940;
        case 0x2b3944u: goto label_2b3944;
        case 0x2b3948u: goto label_2b3948;
        case 0x2b394cu: goto label_2b394c;
        case 0x2b3950u: goto label_2b3950;
        case 0x2b3954u: goto label_2b3954;
        case 0x2b3958u: goto label_2b3958;
        case 0x2b395cu: goto label_2b395c;
        case 0x2b3960u: goto label_2b3960;
        case 0x2b3964u: goto label_2b3964;
        case 0x2b3968u: goto label_2b3968;
        case 0x2b396cu: goto label_2b396c;
        case 0x2b3970u: goto label_2b3970;
        case 0x2b3974u: goto label_2b3974;
        case 0x2b3978u: goto label_2b3978;
        case 0x2b397cu: goto label_2b397c;
        default: break;
    }

    ctx->pc = 0x2b3838u;

label_2b3838:
    // 0x2b3838: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2b3838u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2b383c:
    // 0x2b383c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2b383cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_2b3840:
    // 0x2b3840: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2b3840u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_2b3844:
    // 0x2b3844: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2b3844u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2b3848:
    // 0x2b3848: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2b3848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_2b384c:
    // 0x2b384c: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x2b384cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
label_2b3850:
    // 0x2b3850: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x2b3850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_2b3854:
    // 0x2b3854: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2b3854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_2b3858:
    // 0x2b3858: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x2b3858u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b385c:
    // 0x2b385c: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x2b385cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_2b3860:
    // 0x2b3860: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x2b3860u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
label_2b3864:
    // 0x2b3864: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x2b3864u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
label_2b3868:
    // 0x2b3868: 0xafb30000  sw          $s3, 0x0($sp)
    ctx->pc = 0x2b3868u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 19));
label_2b386c:
    // 0x2b386c: 0x8e02cba8  lw          $v0, -0x3458($s0)
    ctx->pc = 0x2b386cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294953896)));
label_2b3870:
    // 0x2b3870: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x2b3870u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_2b3874:
    // 0x2b3874: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2b3874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2b3878:
    // 0x2b3878: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x2b3878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_2b387c:
    // 0x2b387c: 0x40f809  jalr        $v0
label_2b3880:
    if (ctx->pc == 0x2B3880u) {
        ctx->pc = 0x2B3884u;
        goto label_2b3884;
    }
    ctx->pc = 0x2B387Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2B3884u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B387Cu, 0x2B3884u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B3884u;
label_2b3884:
    // 0x2b3884: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2b3884u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2b3888:
    // 0x2b3888: 0x2627000c  addiu       $a3, $s1, 0xC
    ctx->pc = 0x2b3888u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
label_2b388c:
    // 0x2b388c: 0x26280010  addiu       $t0, $s1, 0x10
    ctx->pc = 0x2b388cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_2b3890:
    // 0x2b3890: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b3890u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b3894:
    // 0x2b3894: 0xc0ef0fa  jal         func_3BC3E8
label_2b3898:
    if (ctx->pc == 0x2B3898u) {
        ctx->pc = 0x2B3898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3894u;
        // 0x2b3898: 0x26260008  addiu       $a2, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B389Cu;
        goto label_2b389c;
    }
    ctx->pc = 0x2B3894u;
    SET_GPR_U32(ctx, 31, 0x2B389Cu);
    ctx->pc = 0x2B3898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3894u;
    // 0x2b3898: 0x26260008  addiu       $a2, $s1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BC3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BC3E8u, 0x2B3894u, 0x2B389Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B389Cu;
label_2b389c:
    // 0x2b389c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2b389cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2b38a0:
    // 0x2b38a0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2b38a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b38a4:
    // 0x2b38a4: 0xc0ef0b2  jal         func_3BC2C8
label_2b38a8:
    if (ctx->pc == 0x2B38A8u) {
        ctx->pc = 0x2B38A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B38A4u;
        // 0x2b38a8: 0x37a60004  ori         $a2, $sp, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B38ACu;
        goto label_2b38ac;
    }
    ctx->pc = 0x2B38A4u;
    SET_GPR_U32(ctx, 31, 0x2B38ACu);
    ctx->pc = 0x2B38A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B38A4u;
    // 0x2b38a8: 0x37a60004  ori         $a2, $sp, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BC2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BC2C8u, 0x2B38A4u, 0x2B38ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B38ACu;
label_2b38ac:
    // 0x2b38ac: 0x8e03cba8  lw          $v1, -0x3458($s0)
    ctx->pc = 0x2b38acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294953896)));
label_2b38b0:
    // 0x2b38b0: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x2b38b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_2b38b4:
    // 0x2b38b4: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x2b38b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2b38b8:
    // 0x2b38b8: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x2b38b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_2b38bc:
    // 0x2b38bc: 0x40f809  jalr        $v0
label_2b38c0:
    if (ctx->pc == 0x2B38C0u) {
        ctx->pc = 0x2B38C4u;
        goto label_2b38c4;
    }
    ctx->pc = 0x2B38BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2B38C4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B38BCu, 0x2B38C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B38C4u;
label_2b38c4:
    // 0x2b38c4: 0x8e320008  lw          $s2, 0x8($s1)
    ctx->pc = 0x2b38c4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2b38c8:
    // 0x2b38c8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2b38c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2b38cc:
    // 0x2b38cc: 0x1642001d  bne         $s2, $v0, . + 4 + (0x1D << 2)
label_2b38d0:
    if (ctx->pc == 0x2B38D0u) {
        ctx->pc = 0x2B38D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B38CCu;
        // 0x2b38d0: 0x8fb00004  lw          $s0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B38D4u;
        goto label_2b38d4;
    }
    ctx->pc = 0x2B38CCu;
    {
        const bool branch_taken_0x2b38cc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B38D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B38CCu;
        // 0x2b38d0: 0x8fb00004  lw          $s0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b38cc) {
            ctx->pc = 0x2B3944u;
            goto label_2b3944;
        }
    }
    ctx->pc = 0x2B38D4u;
label_2b38d4:
    // 0x2b38d4: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
label_2b38d8:
    if (ctx->pc == 0x2B38D8u) {
        ctx->pc = 0x2B38D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B38D4u;
        // 0x2b38d8: 0xae330004  sw          $s3, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B38DCu;
        goto label_2b38dc;
    }
    ctx->pc = 0x2B38D4u;
    {
        const bool branch_taken_0x2b38d4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B38D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B38D4u;
        // 0x2b38d8: 0xae330004  sw          $s3, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b38d4) {
            ctx->pc = 0x2B38E8u;
            goto label_2b38e8;
        }
    }
    ctx->pc = 0x2B38DCu;
label_2b38dc:
    // 0x2b38dc: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x2b38dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
label_2b38e0:
    // 0x2b38e0: 0x1000001d  b           . + 4 + (0x1D << 2)
label_2b38e4:
    if (ctx->pc == 0x2B38E4u) {
        ctx->pc = 0x2B38E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B38E0u;
        // 0x2b38e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B38E8u;
        goto label_2b38e8;
    }
    ctx->pc = 0x2B38E0u;
    {
        const bool branch_taken_0x2b38e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B38E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B38E0u;
        // 0x2b38e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b38e0) {
            ctx->pc = 0x2B3958u;
            goto label_2b3958;
        }
    }
    ctx->pc = 0x2B38E8u;
label_2b38e8:
    // 0x2b38e8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2b38e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2b38ec:
    // 0x2b38ec: 0x16020006  bne         $s0, $v0, . + 4 + (0x6 << 2)
label_2b38f0:
    if (ctx->pc == 0x2B38F0u) {
        ctx->pc = 0x2B38F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B38ECu;
        // 0x2b38f0: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B38F4u;
        goto label_2b38f4;
    }
    ctx->pc = 0x2B38ECu;
    {
        const bool branch_taken_0x2b38ec = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B38F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B38ECu;
        // 0x2b38f0: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b38ec) {
            ctx->pc = 0x2B3908u;
            goto label_2b3908;
        }
    }
    ctx->pc = 0x2B38F4u;
label_2b38f4:
    // 0x2b38f4: 0xc0ad336  jal         func_2B4CD8
label_2b38f8:
    if (ctx->pc == 0x2B38F8u) {
        ctx->pc = 0x2B38F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B38F4u;
        // 0x2b38f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B38FCu;
        goto label_2b38fc;
    }
    ctx->pc = 0x2B38F4u;
    SET_GPR_U32(ctx, 31, 0x2B38FCu);
    ctx->pc = 0x2B38F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B38F4u;
    // 0x2b38f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4CD8u, 0x2B38F4u, 0x2B38FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B38FCu;
label_2b38fc:
    // 0x2b38fc: 0xae300014  sw          $s0, 0x14($s1)
    ctx->pc = 0x2b38fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 16));
label_2b3900:
    // 0x2b3900: 0x10000015  b           . + 4 + (0x15 << 2)
label_2b3904:
    if (ctx->pc == 0x2B3904u) {
        ctx->pc = 0x2B3904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3900u;
        // 0x2b3904: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3908u;
        goto label_2b3908;
    }
    ctx->pc = 0x2B3900u;
    {
        const bool branch_taken_0x2b3900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3900u;
        // 0x2b3904: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3900) {
            ctx->pc = 0x2B3958u;
            goto label_2b3958;
        }
    }
    ctx->pc = 0x2B3908u;
label_2b3908:
    // 0x2b3908: 0x16020006  bne         $s0, $v0, . + 4 + (0x6 << 2)
label_2b390c:
    if (ctx->pc == 0x2B390Cu) {
        ctx->pc = 0x2B390Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3908u;
        // 0x2b390c: 0x2402fffb  addiu       $v0, $zero, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3910u;
        goto label_2b3910;
    }
    ctx->pc = 0x2B3908u;
    {
        const bool branch_taken_0x2b3908 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B390Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3908u;
        // 0x2b390c: 0x2402fffb  addiu       $v0, $zero, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3908) {
            ctx->pc = 0x2B3924u;
            goto label_2b3924;
        }
    }
    ctx->pc = 0x2B3910u;
label_2b3910:
    // 0x2b3910: 0xc0ad336  jal         func_2B4CD8
label_2b3914:
    if (ctx->pc == 0x2B3914u) {
        ctx->pc = 0x2B3914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3910u;
        // 0x2b3914: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3918u;
        goto label_2b3918;
    }
    ctx->pc = 0x2B3910u;
    SET_GPR_U32(ctx, 31, 0x2B3918u);
    ctx->pc = 0x2B3914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3910u;
    // 0x2b3914: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4CD8u, 0x2B3910u, 0x2B3918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3918u;
label_2b3918:
    // 0x2b3918: 0xae330014  sw          $s3, 0x14($s1)
    ctx->pc = 0x2b3918u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 19));
label_2b391c:
    // 0x2b391c: 0x1000000e  b           . + 4 + (0xE << 2)
label_2b3920:
    if (ctx->pc == 0x2B3920u) {
        ctx->pc = 0x2B3920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B391Cu;
        // 0x2b3920: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3924u;
        goto label_2b3924;
    }
    ctx->pc = 0x2B391Cu;
    {
        const bool branch_taken_0x2b391c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B391Cu;
        // 0x2b3920: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b391c) {
            ctx->pc = 0x2B3958u;
            goto label_2b3958;
        }
    }
    ctx->pc = 0x2B3924u;
label_2b3924:
    // 0x2b3924: 0x16020007  bne         $s0, $v0, . + 4 + (0x7 << 2)
label_2b3928:
    if (ctx->pc == 0x2B3928u) {
        ctx->pc = 0x2B392Cu;
        goto label_2b392c;
    }
    ctx->pc = 0x2B3924u;
    {
        const bool branch_taken_0x2b3924 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b3924) {
            ctx->pc = 0x2B3944u;
            goto label_2b3944;
        }
    }
    ctx->pc = 0x2B392Cu;
label_2b392c:
    // 0x2b392c: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x2b392cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_2b3930:
    // 0x2b3930: 0xc0ad336  jal         func_2B4CD8
label_2b3934:
    if (ctx->pc == 0x2B3934u) {
        ctx->pc = 0x2B3934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3930u;
        // 0x2b3934: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3938u;
        goto label_2b3938;
    }
    ctx->pc = 0x2B3930u;
    SET_GPR_U32(ctx, 31, 0x2B3938u);
    ctx->pc = 0x2B3934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3930u;
    // 0x2b3934: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4CD8u, 0x2B3930u, 0x2B3938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3938u;
label_2b3938:
    // 0x2b3938: 0xae320014  sw          $s2, 0x14($s1)
    ctx->pc = 0x2b3938u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 18));
label_2b393c:
    // 0x2b393c: 0x10000006  b           . + 4 + (0x6 << 2)
label_2b3940:
    if (ctx->pc == 0x2B3940u) {
        ctx->pc = 0x2B3940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B393Cu;
        // 0x2b3940: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3944u;
        goto label_2b3944;
    }
    ctx->pc = 0x2B393Cu;
    {
        const bool branch_taken_0x2b393c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B393Cu;
        // 0x2b3940: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b393c) {
            ctx->pc = 0x2B3958u;
            goto label_2b3958;
        }
    }
    ctx->pc = 0x2B3944u;
label_2b3944:
    // 0x2b3944: 0xc0ad336  jal         func_2B4CD8
label_2b3948:
    if (ctx->pc == 0x2B3948u) {
        ctx->pc = 0x2B3948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3944u;
        // 0x2b3948: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B394Cu;
        goto label_2b394c;
    }
    ctx->pc = 0x2B3944u;
    SET_GPR_U32(ctx, 31, 0x2B394Cu);
    ctx->pc = 0x2B3948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3944u;
    // 0x2b3948: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4CD8u, 0x2B3944u, 0x2B394Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B394Cu;
label_2b394c:
    // 0x2b394c: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x2b394cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_2b3950:
    // 0x2b3950: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x2b3950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_2b3954:
    // 0x2b3954: 0xae230014  sw          $v1, 0x14($s1)
    ctx->pc = 0x2b3954u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
label_2b3958:
    // 0x2b3958: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2b3958u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2b395c:
    // 0x2b395c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2b395cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2b3960:
    // 0x2b3960: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2b3960u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2b3964:
    // 0x2b3964: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x2b3964u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_2b3968:
    // 0x2b3968: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2b3968u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2b396c:
    // 0x2b396c: 0x3e00008  jr          $ra
label_2b3970:
    if (ctx->pc == 0x2B3970u) {
        ctx->pc = 0x2B3970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B396Cu;
        // 0x2b3970: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B3974u;
        goto label_2b3974;
    }
    ctx->pc = 0x2B396Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B3970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B396Cu;
        // 0x2b3970: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B396Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B3974u;
label_2b3974:
    // 0x2b3974: 0x0  nop
    ctx->pc = 0x2b3974u;
    // NOP
label_2b3978:
    // 0x2b3978: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2b3978u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2b397c:
    // 0x2b397c: 0x0  nop
    ctx->pc = 0x2b397cu;
    // NOP
    ctx->pc = 0x2b3980u;
}
