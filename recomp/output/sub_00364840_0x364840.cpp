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

// Function: sub_00364840
// Address: 0x364840 - 0x364b20
void sub_00364840_0x364840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00364840_0x364840");
#endif

    switch (ctx->pc) {
        case 0x364874u: goto label_364874;
        case 0x3648d8u: goto label_3648d8;
        case 0x3648e0u: goto label_3648e0;
        case 0x364a60u: goto label_364a60;
        case 0x364a74u: goto label_364a74;
        case 0x364a80u: goto label_364a80;
        case 0x364a90u: goto label_364a90;
        case 0x364b00u: goto label_364b00;
        default: break;
    }

    ctx->pc = 0x364840u;

    // 0x364840: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x364840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x364844: 0xffb10078  sd          $s1, 0x78($sp)
    ctx->pc = 0x364844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 17));
    // 0x364848: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x364848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
    // 0x36484c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x36484cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364850: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x364850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x364854: 0xffbf0088  sd          $ra, 0x88($sp)
    ctx->pc = 0x364854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 31));
    // 0x364858: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x364858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x36485c: 0x104000a5  beqz        $v0, . + 4 + (0xA5 << 2)
    ctx->pc = 0x36485Cu;
    {
        const bool branch_taken_0x36485c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x364860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36485Cu;
        // 0x364860: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36485c) {
            ctx->pc = 0x364AF4u;
            goto label_364af4;
        }
    }
    ctx->pc = 0x364864u;
    // 0x364864: 0x14c000a4  bnez        $a2, . + 4 + (0xA4 << 2)
    ctx->pc = 0x364864u;
    {
        const bool branch_taken_0x364864 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x364868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364864u;
        // 0x364868: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x364864) {
            ctx->pc = 0x364AF8u;
            goto label_364af8;
        }
    }
    ctx->pc = 0x36486Cu;
    // 0x36486c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x36486Cu;
    SET_GPR_U32(ctx, 31, 0x364874u);
    ctx->pc = 0x364870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36486Cu;
    // 0x364870: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x36486Cu, 0x364874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364874u;
label_364874:
    // 0x364874: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x364874u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x364878: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x364878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x36487c: 0x3042020f  andi        $v0, $v0, 0x20F
    ctx->pc = 0x36487cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)527);
    // 0x364880: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x364880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
    // 0x364884: 0x5440008f  bnel        $v0, $zero, . + 4 + (0x8F << 2)
    ctx->pc = 0x364884u;
    {
        const bool branch_taken_0x364884 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x364884) {
            ctx->pc = 0x364888u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x364884u;
            // 0x364888: 0x8e020ff0  lw          $v0, 0xFF0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4080)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x364AC4u;
            goto label_364ac4;
        }
    }
    ctx->pc = 0x36488Cu;
    // 0x36488c: 0x8e02036c  lw          $v0, 0x36C($s0)
    ctx->pc = 0x36488cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 876)));
    // 0x364890: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x364890u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x364894: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x364894u;
    {
        const bool branch_taken_0x364894 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x364898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364894u;
        // 0x364898: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x364894) {
            ctx->pc = 0x3648C4u;
            goto label_3648c4;
        }
    }
    ctx->pc = 0x36489Cu;
    // 0x36489c: 0x8e0211d8  lw          $v0, 0x11D8($s0)
    ctx->pc = 0x36489cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4568)));
    // 0x3648a0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3648A0u;
    {
        const bool branch_taken_0x3648a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3648A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3648A0u;
        // 0x3648a4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3648a0) {
            ctx->pc = 0x3648B8u;
            goto label_3648b8;
        }
    }
    ctx->pc = 0x3648A8u;
    // 0x3648a8: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x3648a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x3648ac: 0x8c62b958  lw          $v0, -0x46A8($v1)
    ctx->pc = 0x3648acu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FB958u));
    // 0x3648b0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x3648b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x3648b4: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x3648b4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3648b8:
    // 0x3648b8: 0x54600065  bnel        $v1, $zero, . + 4 + (0x65 << 2)
    ctx->pc = 0x3648B8u;
    {
        const bool branch_taken_0x3648b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3648b8) {
            ctx->pc = 0x3648BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3648B8u;
            // 0x3648bc: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x364A50u;
            goto label_364a50;
        }
    }
    ctx->pc = 0x3648C0u;
    // 0x3648c0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x3648c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_3648c4:
    // 0x3648c4: 0x8c43bd64  lw          $v1, -0x429C($v0)
    ctx->pc = 0x3648c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950244)));
    // 0x3648c8: 0x54600061  bnel        $v1, $zero, . + 4 + (0x61 << 2)
    ctx->pc = 0x3648C8u;
    {
        const bool branch_taken_0x3648c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3648c8) {
            ctx->pc = 0x3648CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3648C8u;
            // 0x3648cc: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x364A50u;
            goto label_364a50;
        }
    }
    ctx->pc = 0x3648D0u;
    // 0x3648d0: 0xc0899bc  jal         func_2266F0
    ctx->pc = 0x3648D0u;
    SET_GPR_U32(ctx, 31, 0x3648D8u);
    ctx->pc = 0x3648D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3648D0u;
    // 0x3648d4: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x3648D0u, 0x3648D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3648D8u;
label_3648d8:
    // 0x3648d8: 0xc097f26  jal         func_25FC98
    ctx->pc = 0x3648D8u;
    SET_GPR_U32(ctx, 31, 0x3648E0u);
    ctx->pc = 0x3648DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3648D8u;
    // 0x3648dc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FC98u, 0x3648D8u, 0x3648E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3648E0u;
label_3648e0:
    // 0x3648e0: 0x2403006e  addiu       $v1, $zero, 0x6E
    ctx->pc = 0x3648e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x3648e4: 0x10430059  beq         $v0, $v1, . + 4 + (0x59 << 2)
    ctx->pc = 0x3648E4u;
    {
        const bool branch_taken_0x3648e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x3648E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3648E4u;
        // 0x3648e8: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3648e4) {
            ctx->pc = 0x364A4Cu;
            goto label_364a4c;
        }
    }
    ctx->pc = 0x3648ECu;
    // 0x3648ec: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x3648ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3648f0: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x3648f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3648f4: 0x8c8211d0  lw          $v0, 0x11D0($a0)
    ctx->pc = 0x3648f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4560)));
    // 0x3648f8: 0x8c430100  lw          $v1, 0x100($v0)
    ctx->pc = 0x3648f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 256)));
    // 0x3648fc: 0xc4610070  lwc1        $f1, 0x70($v1)
    ctx->pc = 0x3648fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x364900: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x364900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
    // 0x364904: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x364904u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x364908: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x364908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36490c: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x36490cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x364910: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x364910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x364914: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x364914u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x364918: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x364918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36491c: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x36491cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x364920: 0x8c8211d0  lw          $v0, 0x11D0($a0)
    ctx->pc = 0x364920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4560)));
    // 0x364924: 0x8c430100  lw          $v1, 0x100($v0)
    ctx->pc = 0x364924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 256)));
    // 0x364928: 0xc4610060  lwc1        $f1, 0x60($v1)
    ctx->pc = 0x364928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36492c: 0x24630060  addiu       $v1, $v1, 0x60
    ctx->pc = 0x36492cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x364930: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x364930u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x364934: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x364934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x364938: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x364938u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x36493c: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x36493cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x364940: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x364940u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x364944: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x364944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x364948: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x364948u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x36494c: 0x8e030104  lw          $v1, 0x104($s0)
    ctx->pc = 0x36494cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x364950: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x364950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x364954: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x364954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x364958: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x364958u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x36495c: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x36495cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x364960: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x364960u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x364964: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x364964u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x364968: 0xc7a30040  lwc1        $f3, 0x40($sp)
    ctx->pc = 0x364968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x36496c: 0x27a30030  addiu       $v1, $sp, 0x30
    ctx->pc = 0x36496cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x364970: 0xc7a20044  lwc1        $f2, 0x44($sp)
    ctx->pc = 0x364970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x364974: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x364974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x364978: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x364978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36497c: 0xc7a1004c  lwc1        $f1, 0x4C($sp)
    ctx->pc = 0x36497cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x364980: 0xe7a30030  swc1        $f3, 0x30($sp)
    ctx->pc = 0x364980u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x364984: 0xe7a20034  swc1        $f2, 0x34($sp)
    ctx->pc = 0x364984u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x364988: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x364988u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x36498c: 0xe7a1003c  swc1        $f1, 0x3C($sp)
    ctx->pc = 0x36498cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x364990: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x364990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x364994: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x364994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x364998: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x364998u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x36499c: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x36499cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3649a0: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x3649a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3649a4: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x3649a4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x3649a8: 0xc4620008  lwc1        $f2, 0x8($v1)
    ctx->pc = 0x3649a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3649ac: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x3649acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3649b0: 0x4603115c  madd.s      $f5, $f2, $f3
    ctx->pc = 0x3649b0u;
    ctx->f[5] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x3649b4: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x3649b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x3649b8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3649b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x3649bc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3649bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3649c0: 0x0  nop
    ctx->pc = 0x3649c0u;
    // NOP
    // 0x3649c4: 0x46050034  c.lt.s      $f0, $f5
    ctx->pc = 0x3649c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3649c8: 0x0  nop
    ctx->pc = 0x3649c8u;
    // NOP
    // 0x3649cc: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x3649CCu;
    {
        const bool branch_taken_0x3649cc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3649D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3649CCu;
        // 0x3649d0: 0x46000106  mov.s       $f4, $f0 (Delay Slot)
        ctx->f[4] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3649cc) {
            ctx->pc = 0x3649D8u;
            goto label_3649d8;
        }
    }
    ctx->pc = 0x3649D4u;
    // 0x3649d4: 0x46002906  mov.s       $f4, $f5
    ctx->pc = 0x3649d4u;
    ctx->f[4] = FPU_MOV_S(ctx->f[5]);
label_3649d8:
    // 0x3649d8: 0xc7a30020  lwc1        $f3, 0x20($sp)
    ctx->pc = 0x3649d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3649dc: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x3649dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3649e0: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x3649e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3649e4: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x3649e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3649e8: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x3649e8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x3649ec: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x3649ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3649f0: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x3649f0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x3649f4: 0x46022082  mul.s       $f2, $f4, $f2
    ctx->pc = 0x3649f4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x3649f8: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x3649f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x3649fc: 0xe7a30050  swc1        $f3, 0x50($sp)
    ctx->pc = 0x3649fcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x364a00: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x364a00u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x364a04: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x364a04u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x364a08: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x364a08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x364a0c: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x364a0cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x364a10: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x364a10u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x364a14: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x364a14u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x364a18: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x364a18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x364a1c: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x364a1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x364a20: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x364a20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x364a24: 0xc7a20068  lwc1        $f2, 0x68($sp)
    ctx->pc = 0x364a24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x364a28: 0xc7a3006c  lwc1        $f3, 0x6C($sp)
    ctx->pc = 0x364a28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x364a2c: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x364a2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x364a30: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x364a30u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x364a34: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x364a34u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x364a38: 0xe7a3004c  swc1        $f3, 0x4C($sp)
    ctx->pc = 0x364a38u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x364a3c: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x364a3cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x364a40: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x364a40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x364a44: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x364A44u;
    {
        const bool branch_taken_0x364a44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x364A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364A44u;
        // 0x364a48: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x364a44) {
            ctx->pc = 0x364AD4u;
            goto label_364ad4;
        }
    }
    ctx->pc = 0x364A4Cu;
label_364a4c:
    // 0x364a4c: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x364a4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_364a50:
    // 0x364a50: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x364a50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364a54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x364a54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364a58: 0xc0d8e14  jal         func_363850
    ctx->pc = 0x364A58u;
    SET_GPR_U32(ctx, 31, 0x364A60u);
    ctx->pc = 0x364A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364A58u;
    // 0x364a5c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363850u, 0x364A58u, 0x364A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364A60u;
label_364a60:
    // 0x364a60: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x364a60u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x364a64: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x364a64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x364a68: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x364a68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x364a6c: 0xc08a1f2  jal         func_2287C8
    ctx->pc = 0x364A6Cu;
    SET_GPR_U32(ctx, 31, 0x364A74u);
    ctx->pc = 0x364A70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364A6Cu;
    // 0x364a70: 0x24050432  addiu       $a1, $zero, 0x432 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1074));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2287C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2287C8u, 0x364A6Cu, 0x364A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364A74u;
label_364a74:
    // 0x364a74: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x364a74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364a78: 0xc0f70ce  jal         func_3DC338
    ctx->pc = 0x364A78u;
    SET_GPR_U32(ctx, 31, 0x364A80u);
    ctx->pc = 0x364A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364A78u;
    // 0x364a7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x364A78u, 0x364A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364A80u;
label_364a80:
    // 0x364a80: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x364A80u;
    {
        const bool branch_taken_0x364a80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x364a80) {
            ctx->pc = 0x364A84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x364A80u;
            // 0x364a84: 0xc60300b0  lwc1        $f3, 0xB0($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x364A94u;
            goto label_364a94;
        }
    }
    ctx->pc = 0x364A88u;
    // 0x364a88: 0xc0c4900  jal         func_312400
    ctx->pc = 0x364A88u;
    SET_GPR_U32(ctx, 31, 0x364A90u);
    ctx->pc = 0x364A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364A88u;
    // 0x364a8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x364A88u, 0x364A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364A90u;
label_364a90:
    // 0x364a90: 0xc60300b0  lwc1        $f3, 0xB0($s0)
    ctx->pc = 0x364a90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_364a94:
    // 0x364a94: 0x260200b0  addiu       $v0, $s0, 0xB0
    ctx->pc = 0x364a94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x364a98: 0xe7a30010  swc1        $f3, 0x10($sp)
    ctx->pc = 0x364a98u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x364a9c: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x364a9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x364aa0: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x364aa0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x364aa4: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x364aa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x364aa8: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x364aa8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x364aac: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x364aacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x364ab0: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x364ab0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x364ab4: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x364ab4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x364ab8: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x364ab8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x364abc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x364ABCu;
    {
        const bool branch_taken_0x364abc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x364AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364ABCu;
        // 0x364ac0: 0xe7a10008  swc1        $f1, 0x8($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x364abc) {
            ctx->pc = 0x364AD0u;
            goto label_364ad0;
        }
    }
    ctx->pc = 0x364AC4u;
label_364ac4:
    // 0x364ac4: 0x24420090  addiu       $v0, $v0, 0x90
    ctx->pc = 0x364ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    // 0x364ac8: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x364ac8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x364acc: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x364accu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_364ad0:
    // 0x364ad0: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x364ad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_364ad4:
    // 0x364ad4: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x364ad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x364ad8: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x364ad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x364adc: 0xc7a3000c  lwc1        $f3, 0xC($sp)
    ctx->pc = 0x364adcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x364ae0: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x364ae0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x364ae4: 0xe6410004  swc1        $f1, 0x4($s2)
    ctx->pc = 0x364ae4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x364ae8: 0xe6420008  swc1        $f2, 0x8($s2)
    ctx->pc = 0x364ae8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x364aec: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x364AECu;
    {
        const bool branch_taken_0x364aec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x364AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364AECu;
        // 0x364af0: 0xe643000c  swc1        $f3, 0xC($s2) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x364aec) {
            ctx->pc = 0x364B00u;
            goto label_364b00;
        }
    }
    ctx->pc = 0x364AF4u;
label_364af4:
    // 0x364af4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x364af4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_364af8:
    // 0x364af8: 0xc0d8e14  jal         func_363850
    ctx->pc = 0x364AF8u;
    SET_GPR_U32(ctx, 31, 0x364B00u);
    ctx->pc = 0x364AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364AF8u;
    // 0x364afc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363850u, 0x364AF8u, 0x364B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364B00u;
label_364b00:
    // 0x364b00: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x364b00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364b04: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x364b04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x364b08: 0xdfb10078  ld          $s1, 0x78($sp)
    ctx->pc = 0x364b08u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x364b0c: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x364b0cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x364b10: 0xdfbf0088  ld          $ra, 0x88($sp)
    ctx->pc = 0x364b10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x364b14: 0x3e00008  jr          $ra
    ctx->pc = 0x364B14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x364B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364B14u;
        // 0x364b18: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x364B14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x364B1Cu;
    // 0x364b1c: 0x0  nop
    ctx->pc = 0x364b1cu;
    // NOP
    ctx->pc = 0x364b20u;
}
