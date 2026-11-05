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

// Function: sub_001CE310
// Address: 0x1ce310 - 0x1ce5e8
void sub_001CE310_0x1ce310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CE310_0x1ce310");
#endif

    switch (ctx->pc) {
        case 0x1ce3e4u: goto label_1ce3e4;
        case 0x1ce420u: goto label_1ce420;
        case 0x1ce468u: goto label_1ce468;
        case 0x1ce5b4u: goto label_1ce5b4;
        default: break;
    }

    ctx->pc = 0x1ce310u;

    // 0x1ce310: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1ce310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1ce314: 0x5102b  sltu        $v0, $zero, $a1
    ctx->pc = 0x1ce314u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1ce318: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ce318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ce31c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1ce31cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x1ce320: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1ce320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1ce324: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ce324u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce328: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1ce328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1ce32c: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x1ce32cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x1ce330: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1ce330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x1ce334: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x1ce334u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x1ce338: 0xe7b50048  swc1        $f21, 0x48($sp)
    ctx->pc = 0x1ce338u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1ce33c: 0x60a02d  daddu       $s4, $v1, $zero
    ctx->pc = 0x1ce33cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce340: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x1ce340u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1ce344: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x1ce344u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x1ce348: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ce348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ce34c: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x1ce34cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x1ce350: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1ce350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1ce354: 0x46007506  mov.s       $f20, $f14
    ctx->pc = 0x1ce354u;
    ctx->f[20] = FPU_MOV_S(ctx->f[14]);
    // 0x1ce358: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1ce358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1ce35c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1ce35cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce360: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x1ce360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x1ce364: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x1ce364u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce368: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x1ce368u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x1ce36c: 0x8c6289ec  lw          $v0, -0x7614($v1)
    ctx->pc = 0x1ce36cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3F89ECu));
    // 0x1ce370: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1ce370u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1ce374: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x1ce374u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1ce378: 0x8c828a04  lw          $v0, -0x75FC($a0)
    ctx->pc = 0x1ce378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294937092)));
    // 0x1ce37c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1ce37cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1ce380: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x1ce380u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x1ce384: 0x8cc389d4  lw          $v1, -0x762C($a2)
    ctx->pc = 0x1ce384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294937044)));
    // 0x1ce388: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x1ce388u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1ce38c: 0xa2030004  sb          $v1, 0x4($s0)
    ctx->pc = 0x1ce38cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ce390: 0x8ce28a1c  lw          $v0, -0x75E4($a3)
    ctx->pc = 0x1ce390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294937116)));
    // 0x1ce394: 0xe6150008  swc1        $f21, 0x8($s0)
    ctx->pc = 0x1ce394u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x1ce398: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1ce398u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1ce39c: 0xe60c000c  swc1        $f12, 0xC($s0)
    ctx->pc = 0x1ce39cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x1ce3a0: 0xa2020003  sb          $v0, 0x3($s0)
    ctx->pc = 0x1ce3a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x1ce3a4: 0x10a00011  beqz        $a1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1CE3A4u;
    {
        const bool branch_taken_0x1ce3a4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE3A4u;
        // 0x1ce3a8: 0xe6140014  swc1        $f20, 0x14($s0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce3a4) {
            ctx->pc = 0x1CE3ECu;
            goto label_1ce3ec;
        }
    }
    ctx->pc = 0x1CE3ACu;
    // 0x1ce3ac: 0x8ce28a1c  lw          $v0, -0x75E4($a3)
    ctx->pc = 0x1ce3acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294937116)));
    // 0x1ce3b0: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1CE3B0u;
    {
        const bool branch_taken_0x1ce3b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE3B0u;
        // 0x1ce3b4: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce3b0) {
            ctx->pc = 0x1CE3ECu;
            goto label_1ce3ec;
        }
    }
    ctx->pc = 0x1CE3B8u;
    // 0x1ce3b8: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1ce3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x1ce3bc: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x1ce3bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x1ce3c0: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x1ce3c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x1ce3c4: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x1ce3c4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x1ce3c8: 0xc44d8a20  lwc1        $f13, -0x75E0($v0)
    ctx->pc = 0x1ce3c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294937120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1ce3cc: 0xc46e8a24  lwc1        $f14, -0x75DC($v1)
    ctx->pc = 0x1ce3ccu;
    { uint32_t bits = FAST_READ32(0x3F8A24u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1ce3d0: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x1ce3d0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x1ce3d4: 0xc48f8a28  lwc1        $f15, -0x75D8($a0)
    ctx->pc = 0x1ce3d4u;
    { uint32_t bits = FAST_READ32(0x3F8A28u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x1ce3d8: 0xc4b08a2c  lwc1        $f16, -0x75D4($a1)
    ctx->pc = 0x1ce3d8u;
    { uint32_t bits = FAST_READ32(0x3F8A2Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x1ce3dc: 0xc0738ac  jal         func_1CE2B0
    ctx->pc = 0x1CE3DCu;
    SET_GPR_U32(ctx, 31, 0x1CE3E4u);
    ctx->pc = 0x1CE3E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE3DCu;
    // 0x1ce3e0: 0xc4d18a30  lwc1        $f17, -0x75D0($a2) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4294937136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CE2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE2B0u, 0x1CE3DCu, 0x1CE3E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE3E4u;
label_1ce3e4:
    // 0x1ce3e4: 0x10000073  b           . + 4 + (0x73 << 2)
    ctx->pc = 0x1CE3E4u;
    {
        const bool branch_taken_0x1ce3e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE3E4u;
        // 0x1ce3e8: 0xae020018  sw          $v0, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce3e4) {
            ctx->pc = 0x1CE5B4u;
            goto label_1ce5b4;
        }
    }
    ctx->pc = 0x1CE3ECu;
label_1ce3ec:
    // 0x1ce3ec: 0x8e8289ec  lw          $v0, -0x7614($s4)
    ctx->pc = 0x1ce3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294937068)));
    // 0x1ce3f0: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1CE3F0u;
    {
        const bool branch_taken_0x1ce3f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE3F0u;
        // 0x1ce3f4: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce3f0) {
            ctx->pc = 0x1CE430u;
            goto label_1ce430;
        }
    }
    ctx->pc = 0x1CE3F8u;
    // 0x1ce3f8: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1ce3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x1ce3fc: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x1ce3fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x1ce400: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x1ce400u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x1ce404: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x1ce404u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x1ce408: 0xc44d89f0  lwc1        $f13, -0x7610($v0)
    ctx->pc = 0x1ce408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294937072)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1ce40c: 0xc46e89f4  lwc1        $f14, -0x760C($v1)
    ctx->pc = 0x1ce40cu;
    { uint32_t bits = FAST_READ32(0x3F89F4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1ce410: 0xc48f89f8  lwc1        $f15, -0x7608($a0)
    ctx->pc = 0x1ce410u;
    { uint32_t bits = FAST_READ32(0x3F89F8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x1ce414: 0xc4b089fc  lwc1        $f16, -0x7604($a1)
    ctx->pc = 0x1ce414u;
    { uint32_t bits = FAST_READ32(0x3F89FCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x1ce418: 0xc0738ac  jal         func_1CE2B0
    ctx->pc = 0x1CE418u;
    SET_GPR_U32(ctx, 31, 0x1CE420u);
    ctx->pc = 0x1CE41Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE418u;
    // 0x1ce41c: 0xc4d18a00  lwc1        $f17, -0x7600($a2) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4294937088)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CE2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE2B0u, 0x1CE418u, 0x1CE420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE420u;
label_1ce420:
    // 0x1ce420: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1ce420u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce424: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1ce424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1ce428: 0x12220062  beq         $s1, $v0, . + 4 + (0x62 << 2)
    ctx->pc = 0x1CE428u;
    {
        const bool branch_taken_0x1ce428 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CE42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE428u;
        // 0x1ce42c: 0xae11001c  sw          $s1, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce428) {
            ctx->pc = 0x1CE5B4u;
            goto label_1ce5b4;
        }
    }
    ctx->pc = 0x1CE430u;
label_1ce430:
    // 0x1ce430: 0x8ea28a04  lw          $v0, -0x75FC($s5)
    ctx->pc = 0x1ce430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294937092)));
    // 0x1ce434: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1CE434u;
    {
        const bool branch_taken_0x1ce434 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE434u;
        // 0x1ce438: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce434) {
            ctx->pc = 0x1CE478u;
            goto label_1ce478;
        }
    }
    ctx->pc = 0x1CE43Cu;
    // 0x1ce43c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1ce43cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x1ce440: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x1ce440u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x1ce444: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x1ce444u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x1ce448: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x1ce448u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x1ce44c: 0xc44d8a08  lwc1        $f13, -0x75F8($v0)
    ctx->pc = 0x1ce44cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294937096)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1ce450: 0xc46e8a0c  lwc1        $f14, -0x75F4($v1)
    ctx->pc = 0x1ce450u;
    { uint32_t bits = FAST_READ32(0x3F8A0Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1ce454: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x1ce454u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x1ce458: 0xc48f8a10  lwc1        $f15, -0x75F0($a0)
    ctx->pc = 0x1ce458u;
    { uint32_t bits = FAST_READ32(0x3F8A10u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x1ce45c: 0xc4b08a14  lwc1        $f16, -0x75EC($a1)
    ctx->pc = 0x1ce45cu;
    { uint32_t bits = FAST_READ32(0x3F8A14u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x1ce460: 0xc0738ac  jal         func_1CE2B0
    ctx->pc = 0x1CE460u;
    SET_GPR_U32(ctx, 31, 0x1CE468u);
    ctx->pc = 0x1CE464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CE460u;
    // 0x1ce464: 0xc4d18a18  lwc1        $f17, -0x75E8($a2) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4294937112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CE2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CE2B0u, 0x1CE460u, 0x1CE468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE468u;
label_1ce468:
    // 0x1ce468: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1ce468u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ce46c: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1ce46cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1ce470: 0x12420050  beq         $s2, $v0, . + 4 + (0x50 << 2)
    ctx->pc = 0x1CE470u;
    {
        const bool branch_taken_0x1ce470 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CE474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE470u;
        // 0x1ce474: 0xae120020  sw          $s2, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce470) {
            ctx->pc = 0x1CE5B4u;
            goto label_1ce5b4;
        }
    }
    ctx->pc = 0x1CE478u;
label_1ce478:
    // 0x1ce478: 0x8ec289d4  lw          $v0, -0x762C($s6)
    ctx->pc = 0x1ce478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294937044)));
    // 0x1ce47c: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x1CE47Cu;
    {
        const bool branch_taken_0x1ce47c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE47Cu;
        // 0x1ce480: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce47c) {
            ctx->pc = 0x1CE50Cu;
            goto label_1ce50c;
        }
    }
    ctx->pc = 0x1CE484u;
    // 0x1ce484: 0xc44089d8  lwc1        $f0, -0x7628($v0)
    ctx->pc = 0x1ce484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294937048)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ce488: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1ce488u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ce48c: 0x0  nop
    ctx->pc = 0x1ce48cu;
    // NOP
    // 0x1ce490: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1CE490u;
    {
        const bool branch_taken_0x1ce490 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CE494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE490u;
        // 0x1ce494: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce490) {
            ctx->pc = 0x1CE4A0u;
            goto label_1ce4a0;
        }
    }
    ctx->pc = 0x1CE498u;
    // 0x1ce498: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1CE498u;
    {
        const bool branch_taken_0x1ce498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE498u;
        // 0x1ce49c: 0x24130004  addiu       $s3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce498) {
            ctx->pc = 0x1CE508u;
            goto label_1ce508;
        }
    }
    ctx->pc = 0x1CE4A0u;
label_1ce4a0:
    // 0x1ce4a0: 0xc44089dc  lwc1        $f0, -0x7624($v0)
    ctx->pc = 0x1ce4a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294937052)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ce4a4: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1ce4a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ce4a8: 0x0  nop
    ctx->pc = 0x1ce4a8u;
    // NOP
    // 0x1ce4ac: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1CE4ACu;
    {
        const bool branch_taken_0x1ce4ac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CE4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE4ACu;
        // 0x1ce4b0: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce4ac) {
            ctx->pc = 0x1CE4BCu;
            goto label_1ce4bc;
        }
    }
    ctx->pc = 0x1CE4B4u;
    // 0x1ce4b4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1CE4B4u;
    {
        const bool branch_taken_0x1ce4b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE4B4u;
        // 0x1ce4b8: 0x24130003  addiu       $s3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce4b4) {
            ctx->pc = 0x1CE508u;
            goto label_1ce508;
        }
    }
    ctx->pc = 0x1CE4BCu;
label_1ce4bc:
    // 0x1ce4bc: 0xc44089e0  lwc1        $f0, -0x7620($v0)
    ctx->pc = 0x1ce4bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294937056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ce4c0: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1ce4c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ce4c4: 0x0  nop
    ctx->pc = 0x1ce4c4u;
    // NOP
    // 0x1ce4c8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1CE4C8u;
    {
        const bool branch_taken_0x1ce4c8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CE4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE4C8u;
        // 0x1ce4cc: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce4c8) {
            ctx->pc = 0x1CE4D8u;
            goto label_1ce4d8;
        }
    }
    ctx->pc = 0x1CE4D0u;
    // 0x1ce4d0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1CE4D0u;
    {
        const bool branch_taken_0x1ce4d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE4D0u;
        // 0x1ce4d4: 0x24130002  addiu       $s3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce4d0) {
            ctx->pc = 0x1CE508u;
            goto label_1ce508;
        }
    }
    ctx->pc = 0x1CE4D8u;
label_1ce4d8:
    // 0x1ce4d8: 0xc44089e4  lwc1        $f0, -0x761C($v0)
    ctx->pc = 0x1ce4d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294937060)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ce4dc: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1ce4dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ce4e0: 0x0  nop
    ctx->pc = 0x1ce4e0u;
    // NOP
    // 0x1ce4e4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1CE4E4u;
    {
        const bool branch_taken_0x1ce4e4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CE4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE4E4u;
        // 0x1ce4e8: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce4e4) {
            ctx->pc = 0x1CE4F4u;
            goto label_1ce4f4;
        }
    }
    ctx->pc = 0x1CE4ECu;
    // 0x1ce4ec: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1CE4ECu;
    {
        const bool branch_taken_0x1ce4ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE4ECu;
        // 0x1ce4f0: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce4ec) {
            ctx->pc = 0x1CE508u;
            goto label_1ce508;
        }
    }
    ctx->pc = 0x1CE4F4u;
label_1ce4f4:
    // 0x1ce4f4: 0xc44089e8  lwc1        $f0, -0x7618($v0)
    ctx->pc = 0x1ce4f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294937064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ce4f8: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x1ce4f8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ce4fc: 0x0  nop
    ctx->pc = 0x1ce4fcu;
    // NOP
    // 0x1ce500: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1CE500u;
    {
        const bool branch_taken_0x1ce500 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ce500) {
            ctx->pc = 0x1CE504u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CE500u;
            // 0x1ce504: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CE508u;
            goto label_1ce508;
        }
    }
    ctx->pc = 0x1CE508u;
label_1ce508:
    // 0x1ce508: 0xae130024  sw          $s3, 0x24($s0)
    ctx->pc = 0x1ce508u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 19));
label_1ce50c:
    // 0x1ce50c: 0x8e8289ec  lw          $v0, -0x7614($s4)
    ctx->pc = 0x1ce50cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294937068)));
    // 0x1ce510: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CE510u;
    {
        const bool branch_taken_0x1ce510 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CE514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE510u;
        // 0x1ce514: 0x8ea28a04  lw          $v0, -0x75FC($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294937092)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce510) {
            ctx->pc = 0x1CE528u;
            goto label_1ce528;
        }
    }
    ctx->pc = 0x1CE518u;
    // 0x1ce518: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CE518u;
    {
        const bool branch_taken_0x1ce518 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CE51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE518u;
        // 0x1ce51c: 0x8ec289d4  lw          $v0, -0x762C($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294937044)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce518) {
            ctx->pc = 0x1CE528u;
            goto label_1ce528;
        }
    }
    ctx->pc = 0x1CE520u;
    // 0x1ce520: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x1CE520u;
    {
        const bool branch_taken_0x1ce520 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE520u;
        // 0x1ce524: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce520) {
            ctx->pc = 0x1CE5B4u;
            goto label_1ce5b4;
        }
    }
    ctx->pc = 0x1CE528u;
label_1ce528:
    // 0x1ce528: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1ce528u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1ce52c: 0x8e8289ec  lw          $v0, -0x7614($s4)
    ctx->pc = 0x1ce52cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294937068)));
    // 0x1ce530: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CE530u;
    {
        const bool branch_taken_0x1ce530 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE530u;
        // 0x1ce534: 0x46001306  mov.s       $f12, $f2 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce530) {
            ctx->pc = 0x1CE54Cu;
            goto label_1ce54c;
        }
    }
    ctx->pc = 0x1CE538u;
    // 0x1ce538: 0x44916000  mtc1        $s1, $f12
    ctx->pc = 0x1ce538u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1ce53c: 0x0  nop
    ctx->pc = 0x1ce53cu;
    // NOP
    // 0x1ce540: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x1ce540u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1ce544: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ce544u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1ce548: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1ce548u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1ce54c:
    // 0x1ce54c: 0x8ea28a04  lw          $v0, -0x75FC($s5)
    ctx->pc = 0x1ce54cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294937092)));
    // 0x1ce550: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1CE550u;
    {
        const bool branch_taken_0x1ce550 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CE554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE550u;
        // 0x1ce554: 0x8ec289d4  lw          $v0, -0x762C($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294937044)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce550) {
            ctx->pc = 0x1CE578u;
            goto label_1ce578;
        }
    }
    ctx->pc = 0x1CE558u;
    // 0x1ce558: 0x44920800  mtc1        $s2, $f1
    ctx->pc = 0x1ce558u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ce55c: 0x0  nop
    ctx->pc = 0x1ce55cu;
    // NOP
    // 0x1ce560: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1ce560u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1ce564: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ce564u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1ce568: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ce568u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ce56c: 0x0  nop
    ctx->pc = 0x1ce56cu;
    // NOP
    // 0x1ce570: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x1ce570u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1ce574: 0x46016300  add.s       $f12, $f12, $f1
    ctx->pc = 0x1ce574u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
label_1ce578:
    // 0x1ce578: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1CE578u;
    {
        const bool branch_taken_0x1ce578 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ce578) {
            ctx->pc = 0x1CE5A0u;
            goto label_1ce5a0;
        }
    }
    ctx->pc = 0x1CE580u;
    // 0x1ce580: 0x44930800  mtc1        $s3, $f1
    ctx->pc = 0x1ce580u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ce584: 0x0  nop
    ctx->pc = 0x1ce584u;
    // NOP
    // 0x1ce588: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1ce588u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1ce58c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ce58cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1ce590: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ce590u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ce594: 0x0  nop
    ctx->pc = 0x1ce594u;
    // NOP
    // 0x1ce598: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x1ce598u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1ce59c: 0x46016300  add.s       $f12, $f12, $f1
    ctx->pc = 0x1ce59cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
label_1ce5a0:
    // 0x1ce5a0: 0x0  nop
    ctx->pc = 0x1ce5a0u;
    // NOP
    // 0x1ce5a4: 0x0  nop
    ctx->pc = 0x1ce5a4u;
    // NOP
    // 0x1ce5a8: 0x46026303  div.s       $f12, $f12, $f2
    ctx->pc = 0x1ce5a8u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[12], ctx->f[2]); }
    // 0x1ce5ac: 0xc0dde53  jal         func_37794C
    ctx->pc = 0x1CE5ACu;
    SET_GPR_U32(ctx, 31, 0x1CE5B4u);
    ctx->pc = 0x37794Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37794Cu, 0x1CE5ACu, 0x1CE5B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CE5B4u;
label_1ce5b4:
    // 0x1ce5b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ce5b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ce5b8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ce5b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ce5bc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1ce5bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ce5c0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1ce5c0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ce5c4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1ce5c4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ce5c8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1ce5c8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ce5cc: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1ce5ccu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ce5d0: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1ce5d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ce5d4: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x1ce5d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1ce5d8: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x1ce5d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1ce5dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1CE5DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CE5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE5DCu;
        // 0x1ce5e0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CE5DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CE5E4u;
    // 0x1ce5e4: 0x0  nop
    ctx->pc = 0x1ce5e4u;
    // NOP
    ctx->pc = 0x1ce5e8u;
}
