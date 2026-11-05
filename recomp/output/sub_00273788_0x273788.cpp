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

// Function: sub_00273788
// Address: 0x273788 - 0x273948
void sub_00273788_0x273788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00273788_0x273788");
#endif

    switch (ctx->pc) {
        case 0x2737b0u: goto label_2737b0;
        case 0x2737c8u: goto label_2737c8;
        case 0x2737d0u: goto label_2737d0;
        case 0x2737d8u: goto label_2737d8;
        case 0x2737e0u: goto label_2737e0;
        case 0x27382cu: goto label_27382c;
        case 0x273898u: goto label_273898;
        case 0x2738a4u: goto label_2738a4;
        case 0x273914u: goto label_273914;
        case 0x27391cu: goto label_27391c;
        case 0x273924u: goto label_273924;
        default: break;
    }

    ctx->pc = 0x273788u;

    // 0x273788: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x273788u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x27378c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x27378cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x273790: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x273790u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273794: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x273794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x273798: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x273798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x27379c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x27379cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2737a0: 0x261103b0  addiu       $s1, $s0, 0x3B0
    ctx->pc = 0x2737a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 944));
    // 0x2737a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2737a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2737a8: 0xc0835aa  jal         func_20D6A8
    ctx->pc = 0x2737A8u;
    SET_GPR_U32(ctx, 31, 0x2737B0u);
    ctx->pc = 0x2737ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2737A8u;
    // 0x2737ac: 0x24120027  addiu       $s2, $zero, 0x27 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20D6A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20D6A8u, 0x2737A8u, 0x2737B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2737B0u;
label_2737b0:
    // 0x2737b0: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x2737b0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2737b4: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x2737b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x2737b8: 0x26040220  addiu       $a0, $s0, 0x220
    ctx->pc = 0x2737b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 544));
    // 0x2737bc: 0x24422b00  addiu       $v0, $v0, 0x2B00
    ctx->pc = 0x2737bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11008));
    // 0x2737c0: 0xc09cdcc  jal         func_273730
    ctx->pc = 0x2737C0u;
    SET_GPR_U32(ctx, 31, 0x2737C8u);
    ctx->pc = 0x2737C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2737C0u;
    // 0x2737c4: 0xae020218  sw          $v0, 0x218($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 536), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x273730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x273730u, 0x2737C0u, 0x2737C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2737C8u;
label_2737c8:
    // 0x2737c8: 0xc09ca1e  jal         func_272878
    ctx->pc = 0x2737C8u;
    SET_GPR_U32(ctx, 31, 0x2737D0u);
    ctx->pc = 0x2737CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2737C8u;
    // 0x2737cc: 0x26040230  addiu       $a0, $s0, 0x230 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x272878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x272878u, 0x2737C8u, 0x2737D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2737D0u;
label_2737d0:
    // 0x2737d0: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2737D0u;
    SET_GPR_U32(ctx, 31, 0x2737D8u);
    ctx->pc = 0x2737D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2737D0u;
    // 0x2737d4: 0x26040300  addiu       $a0, $s0, 0x300 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2737D0u, 0x2737D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2737D8u;
label_2737d8:
    // 0x2737d8: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2737D8u;
    SET_GPR_U32(ctx, 31, 0x2737E0u);
    ctx->pc = 0x2737DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2737D8u;
    // 0x2737dc: 0x26040310  addiu       $a0, $s0, 0x310 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2737D8u, 0x2737E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2737E0u;
label_2737e0:
    // 0x2737e0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2737e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2737e4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2737e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2737e8: 0x26020340  addiu       $v0, $s0, 0x340
    ctx->pc = 0x2737e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 832));
    // 0x2737ec: 0xae000320  sw          $zero, 0x320($s0)
    ctx->pc = 0x2737ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 800), GPR_U32(ctx, 0));
    // 0x2737f0: 0x26030350  addiu       $v1, $s0, 0x350
    ctx->pc = 0x2737f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 848));
    // 0x2737f4: 0xe6000330  swc1        $f0, 0x330($s0)
    ctx->pc = 0x2737f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 816), bits); }
    // 0x2737f8: 0x26040360  addiu       $a0, $s0, 0x360
    ctx->pc = 0x2737f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 864));
    // 0x2737fc: 0xae000324  sw          $zero, 0x324($s0)
    ctx->pc = 0x2737fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 804), GPR_U32(ctx, 0));
    // 0x273800: 0xae000328  sw          $zero, 0x328($s0)
    ctx->pc = 0x273800u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 808), GPR_U32(ctx, 0));
    // 0x273804: 0xae00032c  sw          $zero, 0x32C($s0)
    ctx->pc = 0x273804u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 812), GPR_U32(ctx, 0));
    // 0x273808: 0xae000340  sw          $zero, 0x340($s0)
    ctx->pc = 0x273808u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 832), GPR_U32(ctx, 0));
    // 0x27380c: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x27380cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x273810: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x273810u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x273814: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x273814u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x273818: 0xae000350  sw          $zero, 0x350($s0)
    ctx->pc = 0x273818u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 848), GPR_U32(ctx, 0));
    // 0x27381c: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x27381cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x273820: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x273820u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x273824: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x273824u;
    SET_GPR_U32(ctx, 31, 0x27382Cu);
    ctx->pc = 0x273828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273824u;
    // 0x273828: 0xac600008  sw          $zero, 0x8($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x273824u, 0x27382Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27382Cu;
label_27382c:
    // 0x27382c: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x27382cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x273830: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x273830u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x273834: 0x26020390  addiu       $v0, $s0, 0x390
    ctx->pc = 0x273834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 912));
    // 0x273838: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x273838u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x27383c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x27383cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x273840: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x273840u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x273844: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x273844u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x273848: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x273848u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27384c: 0xe6000388  swc1        $f0, 0x388($s0)
    ctx->pc = 0x27384cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 904), bits); }
    // 0x273850: 0xe602037c  swc1        $f2, 0x37C($s0)
    ctx->pc = 0x273850u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 892), bits); }
    // 0x273854: 0xe6010384  swc1        $f1, 0x384($s0)
    ctx->pc = 0x273854u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 900), bits); }
    // 0x273858: 0xa2000370  sb          $zero, 0x370($s0)
    ctx->pc = 0x273858u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 880), (uint8_t)GPR_U32(ctx, 0));
    // 0x27385c: 0xa2000371  sb          $zero, 0x371($s0)
    ctx->pc = 0x27385cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 881), (uint8_t)GPR_U32(ctx, 0));
    // 0x273860: 0xa2000373  sb          $zero, 0x373($s0)
    ctx->pc = 0x273860u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 883), (uint8_t)GPR_U32(ctx, 0));
    // 0x273864: 0xa2000374  sb          $zero, 0x374($s0)
    ctx->pc = 0x273864u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 884), (uint8_t)GPR_U32(ctx, 0));
    // 0x273868: 0xa2000375  sb          $zero, 0x375($s0)
    ctx->pc = 0x273868u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 885), (uint8_t)GPR_U32(ctx, 0));
    // 0x27386c: 0xe6020378  swc1        $f2, 0x378($s0)
    ctx->pc = 0x27386cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 888), bits); }
    // 0x273870: 0xe6010380  swc1        $f1, 0x380($s0)
    ctx->pc = 0x273870u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 896), bits); }
    // 0x273874: 0xae000390  sw          $zero, 0x390($s0)
    ctx->pc = 0x273874u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 912), GPR_U32(ctx, 0));
    // 0x273878: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x273878u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x27387c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x27387cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x273880: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x273880u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x273884: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x273884u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x273888: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x273888u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x27388c: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x27388cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x273890: 0xe60003a4  swc1        $f0, 0x3A4($s0)
    ctx->pc = 0x273890u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 932), bits); }
    // 0x273894: 0xa20003a0  sb          $zero, 0x3A0($s0)
    ctx->pc = 0x273894u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 928), (uint8_t)GPR_U32(ctx, 0));
label_273898:
    // 0x273898: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x273898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27389c: 0xc09d574  jal         func_2755D0
    ctx->pc = 0x27389Cu;
    SET_GPR_U32(ctx, 31, 0x2738A4u);
    ctx->pc = 0x2738A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27389Cu;
    // 0x2738a0: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2755D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2755D0u, 0x27389Cu, 0x2738A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2738A4u;
label_2738a4:
    // 0x2738a4: 0x0  nop
    ctx->pc = 0x2738a4u;
    // NOP
    // 0x2738a8: 0x1653fffb  bne         $s2, $s3, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2738A8u;
    {
        const bool branch_taken_0x2738a8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        ctx->pc = 0x2738ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2738A8u;
        // 0x2738ac: 0x26310090  addiu       $s1, $s1, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2738a8) {
            ctx->pc = 0x273898u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_273898;
        }
    }
    ctx->pc = 0x2738B0u;
    // 0x2738b0: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x2738b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
    // 0x2738b4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2738b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2738b8: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x2738b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2738bc: 0x26041e80  addiu       $a0, $s0, 0x1E80
    ctx->pc = 0x2738bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 7808));
    // 0x2738c0: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x2738c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x2738c4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2738c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2738c8: 0x3c0141c8  lui         $at, 0x41C8
    ctx->pc = 0x2738c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16840 << 16));
    // 0x2738cc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2738ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2738d0: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x2738d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x2738d4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2738d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2738d8: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x2738d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
    // 0x2738dc: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x2738dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x2738e0: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2738e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2738e4: 0xae001e68  sw          $zero, 0x1E68($s0)
    ctx->pc = 0x2738e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7784), GPR_U32(ctx, 0));
    // 0x2738e8: 0xae001e6c  sw          $zero, 0x1E6C($s0)
    ctx->pc = 0x2738e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7788), GPR_U32(ctx, 0));
    // 0x2738ec: 0xae001e70  sw          $zero, 0x1E70($s0)
    ctx->pc = 0x2738ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7792), GPR_U32(ctx, 0));
    // 0x2738f0: 0xae001e74  sw          $zero, 0x1E74($s0)
    ctx->pc = 0x2738f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7796), GPR_U32(ctx, 0));
    // 0x2738f4: 0xae001e78  sw          $zero, 0x1E78($s0)
    ctx->pc = 0x2738f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 7800), GPR_U32(ctx, 0));
    // 0x2738f8: 0xe6001a30  swc1        $f0, 0x1A30($s0)
    ctx->pc = 0x2738f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 6704), bits); }
    // 0x2738fc: 0xe6011a34  swc1        $f1, 0x1A34($s0)
    ctx->pc = 0x2738fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 6708), bits); }
    // 0x273900: 0xe6021a38  swc1        $f2, 0x1A38($s0)
    ctx->pc = 0x273900u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 6712), bits); }
    // 0x273904: 0xe6031a3c  swc1        $f3, 0x1A3C($s0)
    ctx->pc = 0x273904u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 6716), bits); }
    // 0x273908: 0xe6041a44  swc1        $f4, 0x1A44($s0)
    ctx->pc = 0x273908u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 6724), bits); }
    // 0x27390c: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x27390Cu;
    SET_GPR_U32(ctx, 31, 0x273914u);
    ctx->pc = 0x273910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27390Cu;
    // 0x273910: 0xe6041a40  swc1        $f4, 0x1A40($s0) (Delay Slot)
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 6720), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x27390Cu, 0x273914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273914u;
label_273914:
    // 0x273914: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x273914u;
    SET_GPR_U32(ctx, 31, 0x27391Cu);
    ctx->pc = 0x273918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x273914u;
    // 0x273918: 0x26041e88  addiu       $a0, $s0, 0x1E88 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 7816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x273914u, 0x27391Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27391Cu;
label_27391c:
    // 0x27391c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x27391Cu;
    SET_GPR_U32(ctx, 31, 0x273924u);
    ctx->pc = 0x273920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27391Cu;
    // 0x273920: 0x26041ea0  addiu       $a0, $s0, 0x1EA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 7840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x27391Cu, 0x273924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273924u;
label_273924:
    // 0x273924: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x273924u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273928: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x273928u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x27392c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x27392cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x273930: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x273930u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x273934: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x273934u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x273938: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x273938u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27393c: 0x3e00008  jr          $ra
    ctx->pc = 0x27393Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x273940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27393Cu;
        // 0x273940: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27393Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x273944u;
    // 0x273944: 0x0  nop
    ctx->pc = 0x273944u;
    // NOP
    ctx->pc = 0x273948u;
}
