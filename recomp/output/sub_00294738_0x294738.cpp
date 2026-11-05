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

// Function: sub_00294738
// Address: 0x294738 - 0x2948f8
void sub_00294738_0x294738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00294738_0x294738");
#endif

    switch (ctx->pc) {
        case 0x294758u: goto label_294758;
        case 0x294784u: goto label_294784;
        case 0x2947a4u: goto label_2947a4;
        case 0x2947c4u: goto label_2947c4;
        case 0x2947fcu: goto label_2947fc;
        case 0x294818u: goto label_294818;
        case 0x294830u: goto label_294830;
        case 0x294844u: goto label_294844;
        case 0x294864u: goto label_294864;
        case 0x294884u: goto label_294884;
        case 0x2948a4u: goto label_2948a4;
        case 0x2948ccu: goto label_2948cc;
        case 0x2948dcu: goto label_2948dc;
        default: break;
    }

    ctx->pc = 0x294738u;

    // 0x294738: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x294738u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x29473c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29473cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x294740: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x294740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x294744: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x294744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x294748: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x294748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x29474c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x29474cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x294750: 0xc0a51b8  jal         func_2946E0
    ctx->pc = 0x294750u;
    SET_GPR_U32(ctx, 31, 0x294758u);
    ctx->pc = 0x294754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294750u;
    // 0x294754: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2946E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2946E0u, 0x294750u, 0x294758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294758u;
label_294758:
    // 0x294758: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x294758u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x29475c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x29475cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x294760: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x294760u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x294764: 0x2451cac0  addiu       $s1, $v0, -0x3540
    ctx->pc = 0x294764u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953664));
    // 0x294768: 0xae04003c  sw          $a0, 0x3C($s0)
    ctx->pc = 0x294768u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 4));
    // 0x29476c: 0x26330030  addiu       $s3, $s1, 0x30
    ctx->pc = 0x29476cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x294770: 0xc44ccac0  lwc1        $f12, -0x3540($v0)
    ctx->pc = 0x294770u;
    { uint32_t bits = FAST_READ32(0x6BCAC0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x294774: 0xc62d0004  lwc1        $f13, 0x4($s1)
    ctx->pc = 0x294774u;
    { uint32_t bits = FAST_READ32(0x6BCAC4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x294778: 0xc62e0008  lwc1        $f14, 0x8($s1)
    ctx->pc = 0x294778u;
    { uint32_t bits = FAST_READ32(0x6BCAC8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x29477c: 0xc0a5298  jal         func_294A60
    ctx->pc = 0x29477Cu;
    SET_GPR_U32(ctx, 31, 0x294784u);
    ctx->pc = 0x294780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29477Cu;
    // 0x294780: 0xc62f000c  lwc1        $f15, 0xC($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x294A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294A60u, 0x29477Cu, 0x294784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294784u;
label_294784:
    // 0x294784: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x294784u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x294788: 0x2622fff0  addiu       $v0, $s1, -0x10
    ctx->pc = 0x294788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967280));
    // 0x29478c: 0xae040038  sw          $a0, 0x38($s0)
    ctx->pc = 0x29478cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 4));
    // 0x294790: 0xc44f000c  lwc1        $f15, 0xC($v0)
    ctx->pc = 0x294790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x294794: 0xc62cfff0  lwc1        $f12, -0x10($s1)
    ctx->pc = 0x294794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294967280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x294798: 0xc44d0004  lwc1        $f13, 0x4($v0)
    ctx->pc = 0x294798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x29479c: 0xc0a5298  jal         func_294A60
    ctx->pc = 0x29479Cu;
    SET_GPR_U32(ctx, 31, 0x2947A4u);
    ctx->pc = 0x2947A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29479Cu;
    // 0x2947a0: 0xc44e0008  lwc1        $f14, 0x8($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x294A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294A60u, 0x29479Cu, 0x2947A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2947A4u;
label_2947a4:
    // 0x2947a4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2947a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2947a8: 0x2622ffe0  addiu       $v0, $s1, -0x20
    ctx->pc = 0x2947a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967264));
    // 0x2947ac: 0xae040034  sw          $a0, 0x34($s0)
    ctx->pc = 0x2947acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 4));
    // 0x2947b0: 0xc44f000c  lwc1        $f15, 0xC($v0)
    ctx->pc = 0x2947b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x2947b4: 0xc62cffe0  lwc1        $f12, -0x20($s1)
    ctx->pc = 0x2947b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294967264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2947b8: 0xc44d0004  lwc1        $f13, 0x4($v0)
    ctx->pc = 0x2947b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2947bc: 0xc0a5298  jal         func_294A60
    ctx->pc = 0x2947BCu;
    SET_GPR_U32(ctx, 31, 0x2947C4u);
    ctx->pc = 0x2947C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2947BCu;
    // 0x2947c0: 0xc44e0008  lwc1        $f14, 0x8($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x294A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294A60u, 0x2947BCu, 0x2947C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2947C4u;
label_2947c4:
    // 0x2947c4: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2947c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2947c8: 0x8e040034  lw          $a0, 0x34($s0)
    ctx->pc = 0x2947c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x2947cc: 0x8c43a8a8  lw          $v1, -0x5758($v0)
    ctx->pc = 0x2947ccu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FA8A8u));
    // 0x2947d0: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x2947d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x2947d4: 0xac8300e4  sw          $v1, 0xE4($a0)
    ctx->pc = 0x2947d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 228), GPR_U32(ctx, 3));
    // 0x2947d8: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x2947d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2947dc: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x2947dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2947e0: 0xae040044  sw          $a0, 0x44($s0)
    ctx->pc = 0x2947e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 4));
    // 0x2947e4: 0xae020048  sw          $v0, 0x48($s0)
    ctx->pc = 0x2947e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
    // 0x2947e8: 0xc4af000c  lwc1        $f15, 0xC($a1)
    ctx->pc = 0x2947e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x2947ec: 0xc4ae0008  lwc1        $f14, 0x8($a1)
    ctx->pc = 0x2947ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2947f0: 0xc62c0020  lwc1        $f12, 0x20($s1)
    ctx->pc = 0x2947f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2947f4: 0xc0a5298  jal         func_294A60
    ctx->pc = 0x2947F4u;
    SET_GPR_U32(ctx, 31, 0x2947FCu);
    ctx->pc = 0x2947F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2947F4u;
    // 0x2947f8: 0xc4ad0004  lwc1        $f13, 0x4($a1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x294A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294A60u, 0x2947F4u, 0x2947FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2947FCu;
label_2947fc:
    // 0x2947fc: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x2947fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x294800: 0x8e040044  lw          $a0, 0x44($s0)
    ctx->pc = 0x294800u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x294804: 0x2452cb50  addiu       $s2, $v0, -0x34B0
    ctx->pc = 0x294804u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953808));
    // 0x294808: 0xc44ccb50  lwc1        $f12, -0x34B0($v0)
    ctx->pc = 0x294808u;
    { uint32_t bits = FAST_READ32(0x6BCB50u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x29480c: 0xc64d0004  lwc1        $f13, 0x4($s2)
    ctx->pc = 0x29480cu;
    { uint32_t bits = FAST_READ32(0x6BCB54u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x294810: 0xc0a52bc  jal         func_294AF0
    ctx->pc = 0x294810u;
    SET_GPR_U32(ctx, 31, 0x294818u);
    ctx->pc = 0x294814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294810u;
    // 0x294814: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294AF0u, 0x294810u, 0x294818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294818u;
label_294818:
    // 0x294818: 0xc66f000c  lwc1        $f15, 0xC($s3)
    ctx->pc = 0x294818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x29481c: 0xc66e0008  lwc1        $f14, 0x8($s3)
    ctx->pc = 0x29481cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x294820: 0x8e040048  lw          $a0, 0x48($s0)
    ctx->pc = 0x294820u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x294824: 0xc62c0030  lwc1        $f12, 0x30($s1)
    ctx->pc = 0x294824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x294828: 0xc0a5298  jal         func_294A60
    ctx->pc = 0x294828u;
    SET_GPR_U32(ctx, 31, 0x294830u);
    ctx->pc = 0x29482Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x294828u;
    // 0x29482c: 0xc66d0004  lwc1        $f13, 0x4($s3) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x294A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294A60u, 0x294828u, 0x294830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294830u;
label_294830:
    // 0x294830: 0xc64d000c  lwc1        $f13, 0xC($s2)
    ctx->pc = 0x294830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x294834: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x294834u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x294838: 0x8e040048  lw          $a0, 0x48($s0)
    ctx->pc = 0x294838u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x29483c: 0xc0a52bc  jal         func_294AF0
    ctx->pc = 0x29483Cu;
    SET_GPR_U32(ctx, 31, 0x294844u);
    ctx->pc = 0x294840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29483Cu;
    // 0x294840: 0xc64c0008  lwc1        $f12, 0x8($s2) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x294AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294AF0u, 0x29483Cu, 0x294844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294844u;
label_294844:
    // 0x294844: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x294844u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x294848: 0x26220050  addiu       $v0, $s1, 0x50
    ctx->pc = 0x294848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x29484c: 0xae040050  sw          $a0, 0x50($s0)
    ctx->pc = 0x29484cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 4));
    // 0x294850: 0xc44f000c  lwc1        $f15, 0xC($v0)
    ctx->pc = 0x294850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x294854: 0xc62c0050  lwc1        $f12, 0x50($s1)
    ctx->pc = 0x294854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x294858: 0xc44d0004  lwc1        $f13, 0x4($v0)
    ctx->pc = 0x294858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x29485c: 0xc0a5298  jal         func_294A60
    ctx->pc = 0x29485Cu;
    SET_GPR_U32(ctx, 31, 0x294864u);
    ctx->pc = 0x294860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29485Cu;
    // 0x294860: 0xc44e0008  lwc1        $f14, 0x8($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x294A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294A60u, 0x29485Cu, 0x294864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294864u;
label_294864:
    // 0x294864: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x294864u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x294868: 0x26220060  addiu       $v0, $s1, 0x60
    ctx->pc = 0x294868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    // 0x29486c: 0xae040054  sw          $a0, 0x54($s0)
    ctx->pc = 0x29486cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 4));
    // 0x294870: 0xc44f000c  lwc1        $f15, 0xC($v0)
    ctx->pc = 0x294870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x294874: 0xc62c0060  lwc1        $f12, 0x60($s1)
    ctx->pc = 0x294874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x294878: 0xc44d0004  lwc1        $f13, 0x4($v0)
    ctx->pc = 0x294878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x29487c: 0xc0a5298  jal         func_294A60
    ctx->pc = 0x29487Cu;
    SET_GPR_U32(ctx, 31, 0x294884u);
    ctx->pc = 0x294880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29487Cu;
    // 0x294880: 0xc44e0008  lwc1        $f14, 0x8($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x294A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294A60u, 0x29487Cu, 0x294884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x294884u;
label_294884:
    // 0x294884: 0x8e040028  lw          $a0, 0x28($s0)
    ctx->pc = 0x294884u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x294888: 0x26220070  addiu       $v0, $s1, 0x70
    ctx->pc = 0x294888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
    // 0x29488c: 0xae040058  sw          $a0, 0x58($s0)
    ctx->pc = 0x29488cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 4));
    // 0x294890: 0xc44f000c  lwc1        $f15, 0xC($v0)
    ctx->pc = 0x294890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x294894: 0xc62c0070  lwc1        $f12, 0x70($s1)
    ctx->pc = 0x294894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x294898: 0xc44d0004  lwc1        $f13, 0x4($v0)
    ctx->pc = 0x294898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x29489c: 0xc0a5298  jal         func_294A60
    ctx->pc = 0x29489Cu;
    SET_GPR_U32(ctx, 31, 0x2948A4u);
    ctx->pc = 0x2948A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29489Cu;
    // 0x2948a0: 0xc44e0008  lwc1        $f14, 0x8($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x294A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294A60u, 0x29489Cu, 0x2948A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2948A4u;
label_2948a4:
    // 0x2948a4: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x2948a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x2948a8: 0x26230080  addiu       $v1, $s1, 0x80
    ctx->pc = 0x2948a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x2948ac: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x2948acu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2948b0: 0x8e04002c  lw          $a0, 0x2C($s0)
    ctx->pc = 0x2948b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x2948b4: 0xae04005c  sw          $a0, 0x5C($s0)
    ctx->pc = 0x2948b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 4));
    // 0x2948b8: 0xc62c0080  lwc1        $f12, 0x80($s1)
    ctx->pc = 0x2948b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2948bc: 0xc46f000c  lwc1        $f15, 0xC($v1)
    ctx->pc = 0x2948bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x2948c0: 0xc46d0004  lwc1        $f13, 0x4($v1)
    ctx->pc = 0x2948c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2948c4: 0xc0a5298  jal         func_294A60
    ctx->pc = 0x2948C4u;
    SET_GPR_U32(ctx, 31, 0x2948CCu);
    ctx->pc = 0x2948C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2948C4u;
    // 0x2948c8: 0xc46e0008  lwc1        $f14, 0x8($v1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x294A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294A60u, 0x2948C4u, 0x2948CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2948CCu;
label_2948cc:
    // 0x2948cc: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2948ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2948d0: 0x8e04005c  lw          $a0, 0x5C($s0)
    ctx->pc = 0x2948d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x2948d4: 0xc0aa43c  jal         func_2A90F0
    ctx->pc = 0x2948D4u;
    SET_GPR_U32(ctx, 31, 0x2948DCu);
    ctx->pc = 0x2948D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2948D4u;
    // 0x2948d8: 0x8c45a8ac  lw          $a1, -0x5754($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294944940)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A90F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A90F0u, 0x2948D4u, 0x2948DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2948DCu;
label_2948dc:
    // 0x2948dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2948dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2948e0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2948e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2948e4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2948e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2948e8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2948e8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2948ec: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2948ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2948f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2948F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2948F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2948F0u;
        // 0x2948f4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2948F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2948F8u;
}
