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

// Function: sub_001EA808
// Address: 0x1ea808 - 0x1ea9f0
void sub_001EA808_0x1ea808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EA808_0x1ea808");
#endif

    switch (ctx->pc) {
        case 0x1ea854u: goto label_1ea854;
        case 0x1ea8a0u: goto label_1ea8a0;
        case 0x1ea954u: goto label_1ea954;
        case 0x1ea96cu: goto label_1ea96c;
        default: break;
    }

    ctx->pc = 0x1ea808u;

    // 0x1ea808: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x1ea808u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x1ea80c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ea80cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea810: 0xffb100c8  sd          $s1, 0xC8($sp)
    ctx->pc = 0x1ea810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 17));
    // 0x1ea814: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x1ea814u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1ea818: 0xffb000c0  sd          $s0, 0xC0($sp)
    ctx->pc = 0x1ea818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 16));
    // 0x1ea81c: 0x3c110067  lui         $s1, 0x67
    ctx->pc = 0x1ea81cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)103 << 16));
    // 0x1ea820: 0xffb700f8  sd          $s7, 0xF8($sp)
    ctx->pc = 0x1ea820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 248), GPR_U64(ctx, 23));
    // 0x1ea824: 0x2630c758  addiu       $s0, $s1, -0x38A8
    ctx->pc = 0x1ea824u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294952792));
    // 0x1ea828: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x1ea828u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea82c: 0xffb200d0  sd          $s2, 0xD0($sp)
    ctx->pc = 0x1ea82cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 18));
    // 0x1ea830: 0xffb300d8  sd          $s3, 0xD8($sp)
    ctx->pc = 0x1ea830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 19));
    // 0x1ea834: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ea834u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea838: 0xffb400e0  sd          $s4, 0xE0($sp)
    ctx->pc = 0x1ea838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 20));
    // 0x1ea83c: 0xffb500e8  sd          $s5, 0xE8($sp)
    ctx->pc = 0x1ea83cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 232), GPR_U64(ctx, 21));
    // 0x1ea840: 0xffb600f0  sd          $s6, 0xF0($sp)
    ctx->pc = 0x1ea840u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 22));
    // 0x1ea844: 0xffbe0100  sd          $fp, 0x100($sp)
    ctx->pc = 0x1ea844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 30));
    // 0x1ea848: 0xffbf0108  sd          $ra, 0x108($sp)
    ctx->pc = 0x1ea848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 31));
    // 0x1ea84c: 0xc0efab3  jal         func_3BEACC
    ctx->pc = 0x1EA84Cu;
    SET_GPR_U32(ctx, 31, 0x1EA854u);
    ctx->pc = 0x1EA850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA84Cu;
    // 0x1ea850: 0xe7b40110  swc1        $f20, 0x110($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x1EA84Cu, 0x1EA854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA854u;
label_1ea854:
    // 0x1ea854: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1ea854u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1ea858: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x1ea858u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x1ea85c: 0x9043bd24  lbu         $v1, -0x42DC($v0)
    ctx->pc = 0x1ea85cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x3FBD24u));
    // 0x1ea860: 0x10600050  beqz        $v1, . + 4 + (0x50 << 2)
    ctx->pc = 0x1EA860u;
    {
        const bool branch_taken_0x1ea860 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA860u;
        // 0x1ea864: 0xaca091f4  sw          $zero, -0x6E0C($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4294939124), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea860) {
            ctx->pc = 0x1EA9A4u;
            goto label_1ea9a4;
        }
    }
    ctx->pc = 0x1EA868u;
    // 0x1ea868: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1ea868u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x1ea86c: 0x8c74bd20  lw          $s4, -0x42E0($v1)
    ctx->pc = 0x1ea86cu;
    SET_GPR_S32(ctx, 20, (int32_t)FAST_READ32(0x3FBD20u));
    // 0x1ea870: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x1ea870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1ea874: 0x18400050  blez        $v0, . + 4 + (0x50 << 2)
    ctx->pc = 0x1EA874u;
    {
        const bool branch_taken_0x1ea874 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1EA878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA874u;
        // 0x1ea878: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea874) {
            ctx->pc = 0x1EA9B8u;
            goto label_1ea9b8;
        }
    }
    ctx->pc = 0x1EA87Cu;
    // 0x1ea87c: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1ea87cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1ea880: 0x200f02d  daddu       $fp, $s0, $zero
    ctx->pc = 0x1ea880u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea884: 0xc454d9fc  lwc1        $f20, -0x2604($v0)
    ctx->pc = 0x1ea884u;
    { uint32_t bits = FAST_READ32(0x45D9FCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1ea888: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x1ea888u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea88c: 0x27b30010  addiu       $s3, $sp, 0x10
    ctx->pc = 0x1ea88cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1ea890: 0x27b20020  addiu       $s2, $sp, 0x20
    ctx->pc = 0x1ea890u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1ea894: 0x27b50050  addiu       $s5, $sp, 0x50
    ctx->pc = 0x1ea894u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1ea898: 0x240301c4  addiu       $v1, $zero, 0x1C4
    ctx->pc = 0x1ea898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 452));
    // 0x1ea89c: 0x0  nop
    ctx->pc = 0x1ea89cu;
    // NOP
label_1ea8a0:
    // 0x1ea8a0: 0x8e84002c  lw          $a0, 0x2C($s4)
    ctx->pc = 0x1ea8a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 44)));
    // 0x1ea8a4: 0x2231818  mult        $v1, $s1, $v1
    ctx->pc = 0x1ea8a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1ea8a8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1ea8a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ea8ac: 0x838021  addu        $s0, $a0, $v1
    ctx->pc = 0x1ea8acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1ea8b0: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x1ea8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1ea8b4: 0x14450002  bne         $v0, $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1EA8B4u;
    {
        const bool branch_taken_0x1ea8b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x1EA8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA8B4u;
        // 0x1ea8b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea8b4) {
            ctx->pc = 0x1EA8C0u;
            goto label_1ea8c0;
        }
    }
    ctx->pc = 0x1EA8BCu;
    // 0x1ea8bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ea8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ea8c0:
    // 0x1ea8c0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1ea8c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1ea8c4: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x1EA8C4u;
    {
        const bool branch_taken_0x1ea8c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA8C4u;
        // 0x1ea8c8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea8c4) {
            ctx->pc = 0x1EA988u;
            goto label_1ea988;
        }
    }
    ctx->pc = 0x1EA8CCu;
    // 0x1ea8cc: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x1ea8ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1ea8d0: 0xc4630010  lwc1        $f3, 0x10($v1)
    ctx->pc = 0x1ea8d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1ea8d4: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x1ea8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1ea8d8: 0x24650020  addiu       $a1, $v1, 0x20
    ctx->pc = 0x1ea8d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x1ea8dc: 0xe7a30030  swc1        $f3, 0x30($sp)
    ctx->pc = 0x1ea8dcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1ea8e0: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x1ea8e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ea8e4: 0xe7a20034  swc1        $f2, 0x34($sp)
    ctx->pc = 0x1ea8e4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x1ea8e8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1ea8e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ea8ec: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x1ea8ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x1ea8f0: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x1ea8f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ea8f4: 0xe7a1003c  swc1        $f1, 0x3C($sp)
    ctx->pc = 0x1ea8f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x1ea8f8: 0xc4600020  lwc1        $f0, 0x20($v1)
    ctx->pc = 0x1ea8f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ea8fc: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x1ea8fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1ea900: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x1ea900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ea904: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x1ea904u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x1ea908: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x1ea908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ea90c: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x1ea90cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1ea910: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x1ea910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ea914: 0xe7a30010  swc1        $f3, 0x10($sp)
    ctx->pc = 0x1ea914u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1ea918: 0xe7a1004c  swc1        $f1, 0x4C($sp)
    ctx->pc = 0x1ea918u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x1ea91c: 0xe6620004  swc1        $f2, 0x4($s3)
    ctx->pc = 0x1ea91cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
    // 0x1ea920: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x1ea920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ea924: 0xe6600008  swc1        $f0, 0x8($s3)
    ctx->pc = 0x1ea924u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
    // 0x1ea928: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x1ea928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ea92c: 0xe661000c  swc1        $f1, 0xC($s3)
    ctx->pc = 0x1ea92cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
    // 0x1ea930: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x1ea930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ea934: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x1ea934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ea938: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x1ea938u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1ea93c: 0xe6410004  swc1        $f1, 0x4($s2)
    ctx->pc = 0x1ea93cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x1ea940: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x1ea940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ea944: 0xe6400008  swc1        $f0, 0x8($s2)
    ctx->pc = 0x1ea944u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x1ea948: 0xc7a1004c  lwc1        $f1, 0x4C($sp)
    ctx->pc = 0x1ea948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ea94c: 0xc07a8b2  jal         func_1EA2C8
    ctx->pc = 0x1EA94Cu;
    SET_GPR_U32(ctx, 31, 0x1EA954u);
    ctx->pc = 0x1EA950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA94Cu;
    // 0x1ea950: 0xe641000c  swc1        $f1, 0xC($s2) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA2C8u, 0x1EA94Cu, 0x1EA954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA954u;
label_1ea954:
    // 0x1ea954: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x1ea954u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x1ea958: 0x26e40050  addiu       $a0, $s7, 0x50
    ctx->pc = 0x1ea958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 80));
    // 0x1ea95c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1ea95cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea960: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x1ea960u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea964: 0xc07801c  jal         func_1E0070
    ctx->pc = 0x1EA964u;
    SET_GPR_U32(ctx, 31, 0x1EA96Cu);
    ctx->pc = 0x1EA968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA964u;
    // 0x1ea968: 0x27a700b0  addiu       $a3, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E0070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E0070u, 0x1EA964u, 0x1EA96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA96Cu;
label_1ea96c:
    // 0x1ea96c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EA96Cu;
    {
        const bool branch_taken_0x1ea96c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA96Cu;
        // 0x1ea970: 0x8ec291f4  lw          $v0, -0x6E0C($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294939124)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea96c) {
            ctx->pc = 0x1EA988u;
            goto label_1ea988;
        }
    }
    ctx->pc = 0x1EA974u;
    // 0x1ea974: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1ea974u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ea978: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1ea978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1ea97c: 0x7e1821  addu        $v1, $v1, $fp
    ctx->pc = 0x1ea97cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
    // 0x1ea980: 0xaec291f4  sw          $v0, -0x6E0C($s6)
    ctx->pc = 0x1ea980u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4294939124), GPR_U32(ctx, 2));
    // 0x1ea984: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x1ea984u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
label_1ea988:
    // 0x1ea988: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x1ea988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1ea98c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1ea98cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1ea990: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x1ea990u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1ea994: 0x1440ffc2  bnez        $v0, . + 4 + (-0x3E << 2)
    ctx->pc = 0x1EA994u;
    {
        const bool branch_taken_0x1ea994 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EA998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA994u;
        // 0x1ea998: 0x240301c4  addiu       $v1, $zero, 0x1C4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 452));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea994) {
            ctx->pc = 0x1EA8A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ea8a0;
        }
    }
    ctx->pc = 0x1EA99Cu;
    // 0x1ea99c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1EA99Cu;
    {
        const bool branch_taken_0x1ea99c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA99Cu;
        // 0x1ea9a0: 0xdfb000c0  ld          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea99c) {
            ctx->pc = 0x1EA9BCu;
            goto label_1ea9bc;
        }
    }
    ctx->pc = 0x1EA9A4u;
label_1ea9a4:
    // 0x1ea9a4: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1ea9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1ea9a8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ea9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ea9ac: 0x8c44bd28  lw          $a0, -0x42D8($v0)
    ctx->pc = 0x1ea9acu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3FBD28u));
    // 0x1ea9b0: 0xaca391f4  sw          $v1, -0x6E0C($a1)
    ctx->pc = 0x1ea9b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294939124), GPR_U32(ctx, 3));
    // 0x1ea9b4: 0xae24c758  sw          $a0, -0x38A8($s1)
    ctx->pc = 0x1ea9b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294952792), GPR_U32(ctx, 4));
label_1ea9b8:
    // 0x1ea9b8: 0xdfb000c0  ld          $s0, 0xC0($sp)
    ctx->pc = 0x1ea9b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_1ea9bc:
    // 0x1ea9bc: 0xdfb100c8  ld          $s1, 0xC8($sp)
    ctx->pc = 0x1ea9bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1ea9c0: 0xdfb200d0  ld          $s2, 0xD0($sp)
    ctx->pc = 0x1ea9c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1ea9c4: 0xdfb300d8  ld          $s3, 0xD8($sp)
    ctx->pc = 0x1ea9c4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x1ea9c8: 0xdfb400e0  ld          $s4, 0xE0($sp)
    ctx->pc = 0x1ea9c8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1ea9cc: 0xdfb500e8  ld          $s5, 0xE8($sp)
    ctx->pc = 0x1ea9ccu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x1ea9d0: 0xdfb600f0  ld          $s6, 0xF0($sp)
    ctx->pc = 0x1ea9d0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1ea9d4: 0xdfb700f8  ld          $s7, 0xF8($sp)
    ctx->pc = 0x1ea9d4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1ea9d8: 0xdfbe0100  ld          $fp, 0x100($sp)
    ctx->pc = 0x1ea9d8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1ea9dc: 0xdfbf0108  ld          $ra, 0x108($sp)
    ctx->pc = 0x1ea9dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x1ea9e0: 0xc7b40110  lwc1        $f20, 0x110($sp)
    ctx->pc = 0x1ea9e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1ea9e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1EA9E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EA9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA9E4u;
        // 0x1ea9e8: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EA9E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EA9ECu;
    // 0x1ea9ec: 0x0  nop
    ctx->pc = 0x1ea9ecu;
    // NOP
    ctx->pc = 0x1ea9f0u;
}
