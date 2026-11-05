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

// Function: sub_003E3768
// Address: 0x3e3768 - 0x3e3958
void sub_003E3768_0x3e3768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E3768_0x3e3768");
#endif

    switch (ctx->pc) {
        case 0x3e3798u: goto label_3e3798;
        case 0x3e37bcu: goto label_3e37bc;
        case 0x3e37d0u: goto label_3e37d0;
        case 0x3e37dcu: goto label_3e37dc;
        case 0x3e3848u: goto label_3e3848;
        case 0x3e3864u: goto label_3e3864;
        case 0x3e3870u: goto label_3e3870;
        case 0x3e3888u: goto label_3e3888;
        case 0x3e3910u: goto label_3e3910;
        case 0x3e392cu: goto label_3e392c;
        case 0x3e3934u: goto label_3e3934;
        default: break;
    }

    ctx->pc = 0x3e3768u;

    // 0x3e3768: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x3e3768u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x3e376c: 0xffb50128  sd          $s5, 0x128($sp)
    ctx->pc = 0x3e376cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 296), GPR_U64(ctx, 21));
    // 0x3e3770: 0xffb30118  sd          $s3, 0x118($sp)
    ctx->pc = 0x3e3770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 19));
    // 0x3e3774: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x3e3774u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e3778: 0x30b3ffff  andi        $s3, $a1, 0xFFFF
    ctx->pc = 0x3e3778u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x3e377c: 0xffb00100  sd          $s0, 0x100($sp)
    ctx->pc = 0x3e377cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 16));
    // 0x3e3780: 0xffb10108  sd          $s1, 0x108($sp)
    ctx->pc = 0x3e3780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 17));
    // 0x3e3784: 0xffb20110  sd          $s2, 0x110($sp)
    ctx->pc = 0x3e3784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 18));
    // 0x3e3788: 0xffb40120  sd          $s4, 0x120($sp)
    ctx->pc = 0x3e3788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 20));
    // 0x3e378c: 0xffbf0130  sd          $ra, 0x130($sp)
    ctx->pc = 0x3e378cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 31));
    // 0x3e3790: 0xc0f8d90  jal         func_3E3640
    ctx->pc = 0x3E3790u;
    SET_GPR_U32(ctx, 31, 0x3E3798u);
    ctx->pc = 0x3E3794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3790u;
    // 0x3e3794: 0x2672ffff  addiu       $s2, $s3, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E3640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E3640u, 0x3E3790u, 0x3E3798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3798u;
label_3e3798:
    // 0x3e3798: 0x24040050  addiu       $a0, $zero, 0x50
    ctx->pc = 0x3e3798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x3e379c: 0x26a30008  addiu       $v1, $s5, 0x8
    ctx->pc = 0x3e379cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    // 0x3e37a0: 0x2642018  mult        $a0, $s3, $a0
    ctx->pc = 0x3e37a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x3e37a4: 0xa4730004  sh          $s3, 0x4($v1)
    ctx->pc = 0x3e37a4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 19));
    // 0x3e37a8: 0xa4600006  sh          $zero, 0x6($v1)
    ctx->pc = 0x3e37a8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 6), (uint16_t)GPR_U32(ctx, 0));
    // 0x3e37ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3e37acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3e37b0: 0xaea20008  sw          $v0, 0x8($s5)
    ctx->pc = 0x3e37b0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 2));
    // 0x3e37b4: 0xc0f52a8  jal         func_3D4AA0
    ctx->pc = 0x3E37B4u;
    SET_GPR_U32(ctx, 31, 0x3E37BCu);
    ctx->pc = 0x3E37B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E37B4u;
    // 0x3e37b8: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x3E37B4u, 0x3E37BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E37BCu;
label_3e37bc:
    // 0x3e37bc: 0x24510010  addiu       $s1, $v0, 0x10
    ctx->pc = 0x3e37bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x3e37c0: 0xac530000  sw          $s3, 0x0($v0)
    ctx->pc = 0x3e37c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 19));
    // 0x3e37c4: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x3E37C4u;
    {
        const bool branch_taken_0x3e37c4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E37C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E37C4u;
        // 0x3e37c8: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e37c4) {
            ctx->pc = 0x3E37E8u;
            goto label_3e37e8;
        }
    }
    ctx->pc = 0x3E37CCu;
    // 0x3e37cc: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x3e37ccu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3e37d0:
    // 0x3e37d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e37d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e37d4: 0xc0aadce  jal         func_2AB738
    ctx->pc = 0x3E37D4u;
    SET_GPR_U32(ctx, 31, 0x3E37DCu);
    ctx->pc = 0x3E37D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E37D4u;
    // 0x3e37d8: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AB738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AB738u, 0x3E37D4u, 0x3E37DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E37DCu;
label_3e37dc:
    // 0x3e37dc: 0x0  nop
    ctx->pc = 0x3e37dcu;
    // NOP
    // 0x3e37e0: 0x1654fffb  bne         $s2, $s4, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3E37E0u;
    {
        const bool branch_taken_0x3e37e0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 20));
        ctx->pc = 0x3E37E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E37E0u;
        // 0x3e37e4: 0x26100050  addiu       $s0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e37e0) {
            ctx->pc = 0x3E37D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e37d0;
        }
    }
    ctx->pc = 0x3E37E8u;
label_3e37e8:
    // 0x3e37e8: 0x1620001e  bnez        $s1, . + 4 + (0x1E << 2)
    ctx->pc = 0x3E37E8u;
    {
        const bool branch_taken_0x3e37e8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E37ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E37E8u;
        // 0x3e37ec: 0xaeb10000  sw          $s1, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e37e8) {
            ctx->pc = 0x3E3864u;
            goto label_3e3864;
        }
    }
    ctx->pc = 0x3E37F0u;
    // 0x3e37f0: 0x3c030047  lui         $v1, 0x47
    ctx->pc = 0x3e37f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
    // 0x3e37f4: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x3e37f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x3e37f8: 0x2462dbd8  addiu       $v0, $v1, -0x2428
    ctx->pc = 0x3e37f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958040));
    // 0x3e37fc: 0xdc6bdbd8  ld          $t3, -0x2428($v1)
    ctx->pc = 0x3e37fcu;
    SET_GPR_U64(ctx, 11, FAST_READ64(0x46DBD8u));
    // 0x3e3800: 0xdc460018  ld          $a2, 0x18($v0)
    ctx->pc = 0x3e3800u;
    SET_GPR_U64(ctx, 6, FAST_READ64(0x46DBF0u));
    // 0x3e3804: 0x24a5dba8  addiu       $a1, $a1, -0x2458
    ctx->pc = 0x3e3804u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957992));
    // 0x3e3808: 0xdc470020  ld          $a3, 0x20($v0)
    ctx->pc = 0x3e3808u;
    SET_GPR_U64(ctx, 7, FAST_READ64(0x46DBF8u));
    // 0x3e380c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3e380cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e3810: 0x904c0038  lbu         $t4, 0x38($v0)
    ctx->pc = 0x3e3810u;
    SET_GPR_ZE32(ctx, 12, (uint8_t)FAST_READ8(0x46DC10u));
    // 0x3e3814: 0xdc4a0008  ld          $t2, 0x8($v0)
    ctx->pc = 0x3e3814u;
    SET_GPR_U64(ctx, 10, FAST_READ64(0x46DBE0u));
    // 0x3e3818: 0xdc430010  ld          $v1, 0x10($v0)
    ctx->pc = 0x3e3818u;
    SET_GPR_U64(ctx, 3, FAST_READ64(0x46DBE8u));
    // 0x3e381c: 0xdc480028  ld          $t0, 0x28($v0)
    ctx->pc = 0x3e381cu;
    SET_GPR_U64(ctx, 8, FAST_READ64(0x46DC00u));
    // 0x3e3820: 0xdc490030  ld          $t1, 0x30($v0)
    ctx->pc = 0x3e3820u;
    SET_GPR_U64(ctx, 9, FAST_READ64(0x46DC08u));
    // 0x3e3824: 0xffa60018  sd          $a2, 0x18($sp)
    ctx->pc = 0x3e3824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 6));
    // 0x3e3828: 0xffa70020  sd          $a3, 0x20($sp)
    ctx->pc = 0x3e3828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 7));
    // 0x3e382c: 0xffab0000  sd          $t3, 0x0($sp)
    ctx->pc = 0x3e382cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 11));
    // 0x3e3830: 0xffaa0008  sd          $t2, 0x8($sp)
    ctx->pc = 0x3e3830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 10));
    // 0x3e3834: 0xffa30010  sd          $v1, 0x10($sp)
    ctx->pc = 0x3e3834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 3));
    // 0x3e3838: 0xffa80028  sd          $t0, 0x28($sp)
    ctx->pc = 0x3e3838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 8));
    // 0x3e383c: 0xffa90030  sd          $t1, 0x30($sp)
    ctx->pc = 0x3e383cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 9));
    // 0x3e3840: 0xc0efae1  jal         func_3BEB84
    ctx->pc = 0x3E3840u;
    SET_GPR_U32(ctx, 31, 0x3E3848u);
    ctx->pc = 0x3E3844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3840u;
    // 0x3e3844: 0xa3ac0038  sb          $t4, 0x38($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 56), (uint8_t)GPR_U32(ctx, 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEB84u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEB84u, 0x3E3840u, 0x3E3848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3848u;
label_3e3848:
    // 0x3e3848: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x3e3848u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x3e384c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x3e384cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x3e3850: 0x24842440  addiu       $a0, $a0, 0x2440
    ctx->pc = 0x3e3850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9280));
    // 0x3e3854: 0x24a5dbb0  addiu       $a1, $a1, -0x2450
    ctx->pc = 0x3e3854u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958000));
    // 0x3e3858: 0x2406013e  addiu       $a2, $zero, 0x13E
    ctx->pc = 0x3e3858u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 318));
    // 0x3e385c: 0xc0ab402  jal         func_2AD008
    ctx->pc = 0x3E385Cu;
    SET_GPR_U32(ctx, 31, 0x3E3864u);
    ctx->pc = 0x3E3860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E385Cu;
    // 0x3e3860: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AD008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AD008u, 0x3E385Cu, 0x3E3864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3864u;
label_3e3864:
    // 0x3e3864: 0x132080  sll         $a0, $s3, 2
    ctx->pc = 0x3e3864u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x3e3868: 0xc0f52a8  jal         func_3D4AA0
    ctx->pc = 0x3E3868u;
    SET_GPR_U32(ctx, 31, 0x3E3870u);
    ctx->pc = 0x3E386Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3868u;
    // 0x3e386c: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x3E3868u, 0x3E3870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3870u;
label_3e3870:
    // 0x3e3870: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x3e3870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x3e3874: 0xac530000  sw          $s3, 0x0($v0)
    ctx->pc = 0x3e3874u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 19));
    // 0x3e3878: 0x2663ffff  addiu       $v1, $s3, -0x1
    ctx->pc = 0x3e3878u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x3e387c: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x3E387Cu;
    {
        const bool branch_taken_0x3e387c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E3880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E387Cu;
        // 0x3e3880: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e387c) {
            ctx->pc = 0x3E38A0u;
            goto label_3e38a0;
        }
    }
    ctx->pc = 0x3E3884u;
    // 0x3e3884: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x3e3884u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3e3888:
    // 0x3e3888: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x3e3888u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x3e388c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3e388cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3e3890: 0x0  nop
    ctx->pc = 0x3e3890u;
    // NOP
    // 0x3e3894: 0x0  nop
    ctx->pc = 0x3e3894u;
    // NOP
    // 0x3e3898: 0x1465fffb  bne         $v1, $a1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3E3898u;
    {
        const bool branch_taken_0x3e3898 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x3E389Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3898u;
        // 0x3e389c: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e3898) {
            ctx->pc = 0x3E3888u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e3888;
        }
    }
    ctx->pc = 0x3E38A0u;
label_3e38a0:
    // 0x3e38a0: 0x14800022  bnez        $a0, . + 4 + (0x22 << 2)
    ctx->pc = 0x3E38A0u;
    {
        const bool branch_taken_0x3e38a0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E38A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E38A0u;
        // 0x3e38a4: 0xaea40004  sw          $a0, 0x4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e38a0) {
            ctx->pc = 0x3E392Cu;
            goto label_3e392c;
        }
    }
    ctx->pc = 0x3E38A8u;
    // 0x3e38a8: 0x3c030047  lui         $v1, 0x47
    ctx->pc = 0x3e38a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
    // 0x3e38ac: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x3e38acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x3e38b0: 0x2462dc18  addiu       $v0, $v1, -0x23E8
    ctx->pc = 0x3e38b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958104));
    // 0x3e38b4: 0xdc6ddc18  ld          $t5, -0x23E8($v1)
    ctx->pc = 0x3e38b4u;
    SET_GPR_U64(ctx, 13, FAST_READ64(0x46DC18u));
    // 0x3e38b8: 0xdc460018  ld          $a2, 0x18($v0)
    ctx->pc = 0x3e38b8u;
    SET_GPR_U64(ctx, 6, FAST_READ64(0x46DC30u));
    // 0x3e38bc: 0x24a5dba8  addiu       $a1, $a1, -0x2458
    ctx->pc = 0x3e38bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957992));
    // 0x3e38c0: 0xdc470020  ld          $a3, 0x20($v0)
    ctx->pc = 0x3e38c0u;
    SET_GPR_U64(ctx, 7, FAST_READ64(0x46DC38u));
    // 0x3e38c4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3e38c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e38c8: 0x904e003e  lbu         $t6, 0x3E($v0)
    ctx->pc = 0x3e38c8u;
    SET_GPR_ZE32(ctx, 14, (uint8_t)FAST_READ8(0x46DC56u));
    // 0x3e38cc: 0xdc4c0008  ld          $t4, 0x8($v0)
    ctx->pc = 0x3e38ccu;
    SET_GPR_U64(ctx, 12, FAST_READ64(0x46DC20u));
    // 0x3e38d0: 0xdc430010  ld          $v1, 0x10($v0)
    ctx->pc = 0x3e38d0u;
    SET_GPR_U64(ctx, 3, FAST_READ64(0x46DC28u));
    // 0x3e38d4: 0xdc480028  ld          $t0, 0x28($v0)
    ctx->pc = 0x3e38d4u;
    SET_GPR_U64(ctx, 8, FAST_READ64(0x46DC40u));
    // 0x3e38d8: 0xdc490030  ld          $t1, 0x30($v0)
    ctx->pc = 0x3e38d8u;
    SET_GPR_U64(ctx, 9, FAST_READ64(0x46DC48u));
    // 0x3e38dc: 0x8c4a0038  lw          $t2, 0x38($v0)
    ctx->pc = 0x3e38dcu;
    SET_GPR_S32(ctx, 10, (int32_t)FAST_READ32(0x46DC50u));
    // 0x3e38e0: 0x944b003c  lhu         $t3, 0x3C($v0)
    ctx->pc = 0x3e38e0u;
    SET_GPR_ZE32(ctx, 11, (uint16_t)FAST_READ16(0x46DC54u));
    // 0x3e38e4: 0xffa60018  sd          $a2, 0x18($sp)
    ctx->pc = 0x3e38e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 6));
    // 0x3e38e8: 0xffa70020  sd          $a3, 0x20($sp)
    ctx->pc = 0x3e38e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 7));
    // 0x3e38ec: 0xffad0000  sd          $t5, 0x0($sp)
    ctx->pc = 0x3e38ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 13));
    // 0x3e38f0: 0xffac0008  sd          $t4, 0x8($sp)
    ctx->pc = 0x3e38f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 12));
    // 0x3e38f4: 0xffa30010  sd          $v1, 0x10($sp)
    ctx->pc = 0x3e38f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 3));
    // 0x3e38f8: 0xffa80028  sd          $t0, 0x28($sp)
    ctx->pc = 0x3e38f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 8));
    // 0x3e38fc: 0xffa90030  sd          $t1, 0x30($sp)
    ctx->pc = 0x3e38fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 9));
    // 0x3e3900: 0xafaa0038  sw          $t2, 0x38($sp)
    ctx->pc = 0x3e3900u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 10));
    // 0x3e3904: 0xa7ab003c  sh          $t3, 0x3C($sp)
    ctx->pc = 0x3e3904u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 60), (uint16_t)GPR_U32(ctx, 11));
    // 0x3e3908: 0xc0efae1  jal         func_3BEB84
    ctx->pc = 0x3E3908u;
    SET_GPR_U32(ctx, 31, 0x3E3910u);
    ctx->pc = 0x3E390Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3908u;
    // 0x3e390c: 0xa3ae003e  sb          $t6, 0x3E($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 62), (uint8_t)GPR_U32(ctx, 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEB84u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEB84u, 0x3E3908u, 0x3E3910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3910u;
label_3e3910:
    // 0x3e3910: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x3e3910u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x3e3914: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x3e3914u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x3e3918: 0x24842440  addiu       $a0, $a0, 0x2440
    ctx->pc = 0x3e3918u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9280));
    // 0x3e391c: 0x24a5dbb0  addiu       $a1, $a1, -0x2450
    ctx->pc = 0x3e391cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958000));
    // 0x3e3920: 0x24060151  addiu       $a2, $zero, 0x151
    ctx->pc = 0x3e3920u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 337));
    // 0x3e3924: 0xc0ab402  jal         func_2AD008
    ctx->pc = 0x3E3924u;
    SET_GPR_U32(ctx, 31, 0x3E392Cu);
    ctx->pc = 0x3E3928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E3924u;
    // 0x3e3928: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AD008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AD008u, 0x3E3924u, 0x3E392Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E392Cu;
label_3e392c:
    // 0x3e392c: 0xc0f8dcc  jal         func_3E3730
    ctx->pc = 0x3E392Cu;
    SET_GPR_U32(ctx, 31, 0x3E3934u);
    ctx->pc = 0x3E3930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E392Cu;
    // 0x3e3930: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E3730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E3730u, 0x3E392Cu, 0x3E3934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E3934u;
label_3e3934:
    // 0x3e3934: 0xdfb00100  ld          $s0, 0x100($sp)
    ctx->pc = 0x3e3934u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x3e3938: 0xdfb10108  ld          $s1, 0x108($sp)
    ctx->pc = 0x3e3938u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x3e393c: 0xdfb20110  ld          $s2, 0x110($sp)
    ctx->pc = 0x3e393cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x3e3940: 0xdfb30118  ld          $s3, 0x118($sp)
    ctx->pc = 0x3e3940u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x3e3944: 0xdfb40120  ld          $s4, 0x120($sp)
    ctx->pc = 0x3e3944u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x3e3948: 0xdfb50128  ld          $s5, 0x128($sp)
    ctx->pc = 0x3e3948u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x3e394c: 0xdfbf0130  ld          $ra, 0x130($sp)
    ctx->pc = 0x3e394cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x3e3950: 0x3e00008  jr          $ra
    ctx->pc = 0x3E3950u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E3954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E3950u;
        // 0x3e3954: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E3950u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E3958u;
}
