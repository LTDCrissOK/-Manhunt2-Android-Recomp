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

// Function: sub_00349888
// Address: 0x349888 - 0x349da8
void sub_00349888_0x349888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00349888_0x349888");
#endif

    switch (ctx->pc) {
        case 0x3498e4u: goto label_3498e4;
        case 0x3498f8u: goto label_3498f8;
        case 0x349928u: goto label_349928;
        case 0x34994cu: goto label_34994c;
        case 0x3499bcu: goto label_3499bc;
        case 0x3499d0u: goto label_3499d0;
        case 0x3499d8u: goto label_3499d8;
        case 0x3499e0u: goto label_3499e0;
        case 0x3499ecu: goto label_3499ec;
        case 0x3499fcu: goto label_3499fc;
        case 0x349cb4u: goto label_349cb4;
        case 0x349cc4u: goto label_349cc4;
        case 0x349d10u: goto label_349d10;
        case 0x349d58u: goto label_349d58;
        default: break;
    }

    ctx->pc = 0x349888u;

    // 0x349888: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x349888u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
    // 0x34988c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x34988cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x349890: 0xffbe0120  sd          $fp, 0x120($sp)
    ctx->pc = 0x349890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 30));
    // 0x349894: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x349894u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349898: 0xffb40100  sd          $s4, 0x100($sp)
    ctx->pc = 0x349898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 20));
    // 0x34989c: 0xffb50108  sd          $s5, 0x108($sp)
    ctx->pc = 0x34989cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 21));
    // 0x3498a0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x3498a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3498a4: 0xffb60110  sd          $s6, 0x110($sp)
    ctx->pc = 0x3498a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 22));
    // 0x3498a8: 0xffb70118  sd          $s7, 0x118($sp)
    ctx->pc = 0x3498a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 23));
    // 0x3498ac: 0xe7ba0160  swc1        $f26, 0x160($sp)
    ctx->pc = 0x3498acu;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
    // 0x3498b0: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x3498b0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3498b4: 0xe7b90158  swc1        $f25, 0x158($sp)
    ctx->pc = 0x3498b4u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
    // 0x3498b8: 0xffb000e0  sd          $s0, 0xE0($sp)
    ctx->pc = 0x3498b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 16));
    // 0x3498bc: 0xffb100e8  sd          $s1, 0xE8($sp)
    ctx->pc = 0x3498bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 232), GPR_U64(ctx, 17));
    // 0x3498c0: 0xffb200f0  sd          $s2, 0xF0($sp)
    ctx->pc = 0x3498c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 18));
    // 0x3498c4: 0xffb300f8  sd          $s3, 0xF8($sp)
    ctx->pc = 0x3498c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 248), GPR_U64(ctx, 19));
    // 0x3498c8: 0xffbf0128  sd          $ra, 0x128($sp)
    ctx->pc = 0x3498c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 296), GPR_U64(ctx, 31));
    // 0x3498cc: 0xe7b80150  swc1        $f24, 0x150($sp)
    ctx->pc = 0x3498ccu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x3498d0: 0xe7b70148  swc1        $f23, 0x148($sp)
    ctx->pc = 0x3498d0u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
    // 0x3498d4: 0xe7b60140  swc1        $f22, 0x140($sp)
    ctx->pc = 0x3498d4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x3498d8: 0xe7b50138  swc1        $f21, 0x138($sp)
    ctx->pc = 0x3498d8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
    // 0x3498dc: 0xc0db170  jal         func_36C5C0
    ctx->pc = 0x3498DCu;
    SET_GPR_U32(ctx, 31, 0x3498E4u);
    ctx->pc = 0x3498E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3498DCu;
    // 0x3498e0: 0xe7b40130  swc1        $f20, 0x130($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C5C0u, 0x3498DCu, 0x3498E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3498E4u;
label_3498e4:
    // 0x3498e4: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x3498e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x3498e8: 0x4481c800  mtc1        $at, $f25
    ctx->pc = 0x3498e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
    // 0x3498ec: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x3498ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3498f0: 0xc0db168  jal         func_36C5A0
    ctx->pc = 0x3498F0u;
    SET_GPR_U32(ctx, 31, 0x3498F8u);
    ctx->pc = 0x3498F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3498F0u;
    // 0x3498f4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C5A0u, 0x3498F0u, 0x3498F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3498F8u;
label_3498f8:
    // 0x3498f8: 0x4480d000  mtc1        $zero, $f26
    ctx->pc = 0x3498f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[26], &bits, sizeof(bits)); }
    // 0x3498fc: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x3498fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x349900: 0x27a300b0  addiu       $v1, $sp, 0xB0
    ctx->pc = 0x349900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x349904: 0xafa200d4  sw          $v0, 0xD4($sp)
    ctx->pc = 0x349904u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 2));
    // 0x349908: 0x27b50070  addiu       $s5, $sp, 0x70
    ctx->pc = 0x349908u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x34990c: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x34990cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x349910: 0xafa300d8  sw          $v1, 0xD8($sp)
    ctx->pc = 0x349910u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 3));
    // 0x349914: 0x8c42f408  lw          $v0, -0xBF8($v0)
    ctx->pc = 0x349914u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4BF408u));
    // 0x349918: 0x27b40080  addiu       $s4, $sp, 0x80
    ctx->pc = 0x349918u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x34991c: 0x27b60090  addiu       $s6, $sp, 0x90
    ctx->pc = 0x34991cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x349920: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x349920u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
    // 0x349924: 0x8fc200f4  lw          $v0, 0xF4($fp)
    ctx->pc = 0x349924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 244)));
label_349928:
    // 0x349928: 0x171940  sll         $v1, $s7, 5
    ctx->pc = 0x349928u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 23), 5));
    // 0x34992c: 0x439021  addu        $s2, $v0, $v1
    ctx->pc = 0x34992cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x349930: 0x9244001c  lbu         $a0, 0x1C($s2)
    ctx->pc = 0x349930u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x349934: 0x50800102  beql        $a0, $zero, . + 4 + (0x102 << 2)
    ctx->pc = 0x349934u;
    {
        const bool branch_taken_0x349934 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x349934) {
            ctx->pc = 0x349938u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x349934u;
            // 0x349938: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x349D40u;
            goto label_349d40;
        }
    }
    ctx->pc = 0x34993Cu;
    // 0x34993c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x34993cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x349940: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x349940u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x349944: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x349944u;
    SET_GPR_U32(ctx, 31, 0x34994Cu);
    ctx->pc = 0x349948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349944u;
    // 0x349948: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x349944u, 0x34994Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34994Cu;
label_34994c:
    // 0x34994c: 0xc7c00084  lwc1        $f0, 0x84($fp)
    ctx->pc = 0x34994cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x349950: 0xc7c20088  lwc1        $f2, 0x88($fp)
    ctx->pc = 0x349950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x349954: 0xc6410018  lwc1        $f1, 0x18($s2)
    ctx->pc = 0x349954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x349958: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x349958u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x34995c: 0x0  nop
    ctx->pc = 0x34995cu;
    // NOP
    // 0x349960: 0x0  nop
    ctx->pc = 0x349960u;
    // NOP
    // 0x349964: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x349964u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x349968: 0x4601a041  sub.s       $f1, $f20, $f1
    ctx->pc = 0x349968u;
    ctx->f[1] = FPU_SUB_S(ctx->f[20], ctx->f[1]);
    // 0x34996c: 0x461a0834  c.lt.s      $f1, $f26
    ctx->pc = 0x34996cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[26])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x349970: 0x0  nop
    ctx->pc = 0x349970u;
    // NOP
    // 0x349974: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x349974u;
    {
        const bool branch_taken_0x349974 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x349974) {
            ctx->pc = 0x349980u;
            goto label_349980;
        }
    }
    ctx->pc = 0x34997Cu;
    // 0x34997c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x34997cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_349980:
    // 0x349980: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x349980u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x349984: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x349984u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x349988: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x349988u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x34998c: 0x3c0138d1  lui         $at, 0x38D1
    ctx->pc = 0x34998cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14545 << 16));
    // 0x349990: 0x3421b717  ori         $at, $at, 0xB717
    ctx->pc = 0x349990u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)46871);
    // 0x349994: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x349994u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x349998: 0x46180dc2  mul.s       $f23, $f1, $f24
    ctx->pc = 0x349998u;
    ctx->f[23] = FPU_MUL_S(ctx->f[1], ctx->f[24]);
    // 0x34999c: 0x4600b834  c.lt.s      $f23, $f0
    ctx->pc = 0x34999cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3499a0: 0x0  nop
    ctx->pc = 0x3499a0u;
    // NOP
    // 0x3499a4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x3499A4u;
    {
        const bool branch_taken_0x3499a4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3499a4) {
            ctx->pc = 0x3499B4u;
            goto label_3499b4;
        }
    }
    ctx->pc = 0x3499ACu;
    // 0x3499ac: 0x100000e3  b           . + 4 + (0xE3 << 2)
    ctx->pc = 0x3499ACu;
    {
        const bool branch_taken_0x3499ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3499B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3499ACu;
        // 0x3499b0: 0xa240001c  sb          $zero, 0x1C($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 28), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3499ac) {
            ctx->pc = 0x349D3Cu;
            goto label_349d3c;
        }
    }
    ctx->pc = 0x3499B4u;
label_3499b4:
    // 0x3499b4: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x3499B4u;
    SET_GPR_U32(ctx, 31, 0x3499BCu);
    ctx->pc = 0x3499B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3499B4u;
    // 0x3499b8: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x3499B4u, 0x3499BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3499BCu;
label_3499bc:
    // 0x3499bc: 0x27b10050  addiu       $s1, $sp, 0x50
    ctx->pc = 0x3499bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3499c0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x3499c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x3499c4: 0x8c53bd48  lw          $s3, -0x42B8($v0)
    ctx->pc = 0x3499c4u;
    SET_GPR_S32(ctx, 19, (int32_t)FAST_READ32(0x3FBD48u));
    // 0x3499c8: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x3499C8u;
    SET_GPR_U32(ctx, 31, 0x3499D0u);
    ctx->pc = 0x3499CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3499C8u;
    // 0x3499cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x3499C8u, 0x3499D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3499D0u;
label_3499d0:
    // 0x3499d0: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x3499D0u;
    SET_GPR_U32(ctx, 31, 0x3499D8u);
    ctx->pc = 0x3499D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3499D0u;
    // 0x3499d4: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x3499D0u, 0x3499D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3499D8u;
label_3499d8:
    // 0x3499d8: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x3499D8u;
    SET_GPR_U32(ctx, 31, 0x3499E0u);
    ctx->pc = 0x3499DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3499D8u;
    // 0x3499dc: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x3499D8u, 0x3499E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3499E0u;
label_3499e0:
    // 0x3499e0: 0x8e700100  lw          $s0, 0x100($s3)
    ctx->pc = 0x3499e0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 256)));
    // 0x3499e4: 0xc0f70ce  jal         func_3DC338
    ctx->pc = 0x3499E4u;
    SET_GPR_U32(ctx, 31, 0x3499ECu);
    ctx->pc = 0x3499E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3499E4u;
    // 0x3499e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x3499E4u, 0x3499ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3499ECu;
label_3499ec:
    // 0x3499ec: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3499ECu;
    {
        const bool branch_taken_0x3499ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3499F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3499ECu;
        // 0x3499f0: 0x26020080  addiu       $v0, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3499ec) {
            ctx->pc = 0x349A00u;
            goto label_349a00;
        }
    }
    ctx->pc = 0x3499F4u;
    // 0x3499f4: 0xc0c4900  jal         func_312400
    ctx->pc = 0x3499F4u;
    SET_GPR_U32(ctx, 31, 0x3499FCu);
    ctx->pc = 0x3499F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3499F4u;
    // 0x3499f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x3499F4u, 0x3499FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3499FCu;
label_3499fc:
    // 0x3499fc: 0x26020080  addiu       $v0, $s0, 0x80
    ctx->pc = 0x3499fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
label_349a00:
    // 0x349a00: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x349a00u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x349a04: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x349a04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x349a08: 0x26030090  addiu       $v1, $s0, 0x90
    ctx->pc = 0x349a08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x349a0c: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x349a0cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x349a10: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x349a10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x349a14: 0x260200a0  addiu       $v0, $s0, 0xA0
    ctx->pc = 0x349a14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x349a18: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x349a18u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x349a1c: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x349a1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x349a20: 0x260300b0  addiu       $v1, $s0, 0xB0
    ctx->pc = 0x349a20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x349a24: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x349a24u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x349a28: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x349a28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x349a2c: 0xc66000e0  lwc1        $f0, 0xE0($s3)
    ctx->pc = 0x349a2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x349a30: 0x0  nop
    ctx->pc = 0x349a30u;
    // NOP
    // 0x349a34: 0x4600c943  div.s       $f5, $f25, $f0
    ctx->pc = 0x349a34u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[5] = FPU_DIV_S(ctx->f[25], ctx->f[0]); }
    // 0x349a38: 0x44032800  mfc1        $v1, $f5
    ctx->pc = 0x349a38u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x349a3c: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x349a3cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x349a40: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x349a40u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x349a44: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x349a44u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x349a48: 0xfa210040  sqc2        $vf1, 0x40($s1)
    ctx->pc = 0x349a48u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x349a4c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x349a4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x349a50: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x349a50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x349a54: 0x0  nop
    ctx->pc = 0x349a54u;
    // NOP
    // 0x349a58: 0x44022800  mfc1        $v0, $f5
    ctx->pc = 0x349a58u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x349a5c: 0xdaa10000  lqc2        $vf1, 0x0($s5)
    ctx->pc = 0x349a5cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x349a60: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x349a60u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x349a64: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x349a64u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x349a68: 0xfba100a0  sqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x349a68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x349a6c: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x349a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x349a70: 0xdac10000  lqc2        $vf1, 0x0($s6)
    ctx->pc = 0x349a70u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x349a74: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x349a74u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x349a78: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x349a78u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x349a7c: 0xfba100c0  sqc2        $vf1, 0xC0($sp)
    ctx->pc = 0x349a7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x349a80: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x349a80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x349a84: 0xc7a100c4  lwc1        $f1, 0xC4($sp)
    ctx->pc = 0x349a84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x349a88: 0xc7a200c8  lwc1        $f2, 0xC8($sp)
    ctx->pc = 0x349a88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x349a8c: 0xc7a300cc  lwc1        $f3, 0xCC($sp)
    ctx->pc = 0x349a8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x349a90: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x349a90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x349a94: 0xe7a100b4  swc1        $f1, 0xB4($sp)
    ctx->pc = 0x349a94u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x349a98: 0xe7a200b8  swc1        $f2, 0xB8($sp)
    ctx->pc = 0x349a98u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x349a9c: 0xe7a300bc  swc1        $f3, 0xBC($sp)
    ctx->pc = 0x349a9cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x349aa0: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x349aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x349aa4: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x349aa4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x349aa8: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x349aa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x349aac: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x349aacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x349ab0: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x349ab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x349ab4: 0xc7a40098  lwc1        $f4, 0x98($sp)
    ctx->pc = 0x349ab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x349ab8: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x349ab8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x349abc: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x349abcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x349ac0: 0xe7a40030  swc1        $f4, 0x30($sp)
    ctx->pc = 0x349ac0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x349ac4: 0xc6820000  lwc1        $f2, 0x0($s4)
    ctx->pc = 0x349ac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x349ac8: 0xc6c30000  lwc1        $f3, 0x0($s6)
    ctx->pc = 0x349ac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x349acc: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x349accu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x349ad0: 0xc6820004  lwc1        $f2, 0x4($s4)
    ctx->pc = 0x349ad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x349ad4: 0xc6c30004  lwc1        $f3, 0x4($s6)
    ctx->pc = 0x349ad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x349ad8: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x349ad8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x349adc: 0xc6820008  lwc1        $f2, 0x8($s4)
    ctx->pc = 0x349adcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x349ae0: 0xc6c30008  lwc1        $f3, 0x8($s6)
    ctx->pc = 0x349ae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x349ae4: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x349ae4u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x349ae8: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x349ae8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x349aec: 0x46002d86  mov.s       $f22, $f5
    ctx->pc = 0x349aecu;
    ctx->f[22] = FPU_MOV_S(ctx->f[5]);
    // 0x349af0: 0x8fa300d4  lw          $v1, 0xD4($sp)
    ctx->pc = 0x349af0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x349af4: 0x4600b001  sub.s       $f0, $f22, $f0
    ctx->pc = 0x349af4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[22], ctx->f[0]);
    // 0x349af8: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x349af8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x349afc: 0xc66100e4  lwc1        $f1, 0xE4($s3)
    ctx->pc = 0x349afcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x349b00: 0x0  nop
    ctx->pc = 0x349b00u;
    // NOP
    // 0x349b04: 0x4601c943  div.s       $f5, $f25, $f1
    ctx->pc = 0x349b04u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[5] = FPU_DIV_S(ctx->f[25], ctx->f[1]); }
    // 0x349b08: 0x44022800  mfc1        $v0, $f5
    ctx->pc = 0x349b08u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x349b0c: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x349b0cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x349b10: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x349b10u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x349b14: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x349b14u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x349b18: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x349b18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x349b1c: 0x4403b000  mfc1        $v1, $f22
    ctx->pc = 0x349b1cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[22], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x349b20: 0xdaa10000  lqc2        $vf1, 0x0($s5)
    ctx->pc = 0x349b20u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x349b24: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x349b24u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x349b28: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x349b28u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x349b2c: 0xfba100a0  sqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x349b2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x349b30: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x349b30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x349b34: 0xdac10000  lqc2        $vf1, 0x0($s6)
    ctx->pc = 0x349b34u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x349b38: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x349b38u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x349b3c: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x349b3cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x349b40: 0xfba100c0  sqc2        $vf1, 0xC0($sp)
    ctx->pc = 0x349b40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x349b44: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x349b44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x349b48: 0xc7a100c4  lwc1        $f1, 0xC4($sp)
    ctx->pc = 0x349b48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x349b4c: 0xc7a200c8  lwc1        $f2, 0xC8($sp)
    ctx->pc = 0x349b4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x349b50: 0xc7a300cc  lwc1        $f3, 0xCC($sp)
    ctx->pc = 0x349b50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x349b54: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x349b54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x349b58: 0xe7a100b4  swc1        $f1, 0xB4($sp)
    ctx->pc = 0x349b58u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x349b5c: 0xe7a200b8  swc1        $f2, 0xB8($sp)
    ctx->pc = 0x349b5cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x349b60: 0xe7a300bc  swc1        $f3, 0xBC($sp)
    ctx->pc = 0x349b60u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x349b64: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x349b64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x349b68: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x349b68u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x349b6c: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x349b6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x349b70: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x349b70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x349b74: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x349b74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x349b78: 0xc7a40098  lwc1        $f4, 0x98($sp)
    ctx->pc = 0x349b78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x349b7c: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x349b7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x349b80: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x349b80u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x349b84: 0xe7a40034  swc1        $f4, 0x34($sp)
    ctx->pc = 0x349b84u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x349b88: 0xc6820000  lwc1        $f2, 0x0($s4)
    ctx->pc = 0x349b88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x349b8c: 0xc6c30000  lwc1        $f3, 0x0($s6)
    ctx->pc = 0x349b8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x349b90: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x349b90u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x349b94: 0xc6820004  lwc1        $f2, 0x4($s4)
    ctx->pc = 0x349b94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x349b98: 0xc6c30004  lwc1        $f3, 0x4($s6)
    ctx->pc = 0x349b98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x349b9c: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x349b9cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x349ba0: 0xc6820008  lwc1        $f2, 0x8($s4)
    ctx->pc = 0x349ba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x349ba4: 0xc6c30008  lwc1        $f3, 0x8($s6)
    ctx->pc = 0x349ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x349ba8: 0x4603105c  madd.s      $f1, $f2, $f3
    ctx->pc = 0x349ba8u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x349bac: 0x46160840  add.s       $f1, $f1, $f22
    ctx->pc = 0x349bacu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[22]);
    // 0x349bb0: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x349bb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x349bb4: 0xc7a20074  lwc1        $f2, 0x74($sp)
    ctx->pc = 0x349bb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x349bb8: 0xc7a30078  lwc1        $f3, 0x78($sp)
    ctx->pc = 0x349bb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x349bbc: 0x4601b041  sub.s       $f1, $f22, $f1
    ctx->pc = 0x349bbcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[22], ctx->f[1]);
    // 0x349bc0: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x349bc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x349bc4: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x349bc4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x349bc8: 0xe7a30038  swc1        $f3, 0x38($sp)
    ctx->pc = 0x349bc8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x349bcc: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x349bccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x349bd0: 0xc6820000  lwc1        $f2, 0x0($s4)
    ctx->pc = 0x349bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x349bd4: 0xc6a30000  lwc1        $f3, 0x0($s5)
    ctx->pc = 0x349bd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x349bd8: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x349bd8u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x349bdc: 0xc6820004  lwc1        $f2, 0x4($s4)
    ctx->pc = 0x349bdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x349be0: 0xc6a30004  lwc1        $f3, 0x4($s5)
    ctx->pc = 0x349be0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x349be4: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x349be4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x349be8: 0xc6820008  lwc1        $f2, 0x8($s4)
    ctx->pc = 0x349be8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x349bec: 0xc6a30008  lwc1        $f3, 0x8($s5)
    ctx->pc = 0x349becu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x349bf0: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x349bf0u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x349bf4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x349bf4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x349bf8: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x349bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x349bfc: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x349bfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x349c00: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x349c00u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x349c04: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x349c04u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x349c08: 0xd8430010  lqc2        $vf3, 0x10($v0)
    ctx->pc = 0x349c08u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x349c0c: 0xd8440020  lqc2        $vf4, 0x20($v0)
    ctx->pc = 0x349c0cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x349c10: 0xd8450030  lqc2        $vf5, 0x30($v0)
    ctx->pc = 0x349c10u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x349c14: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x349c14u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x349c18: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x349c18u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x349c1c: 0x4bc120be  vmaddaz.xyz $ACC, $vf4, $vf1z
    ctx->pc = 0x349c1cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x349c20: 0x4bc0284b  vmaddw.xyz  $vf1, $vf5, $vf0w
    ctx->pc = 0x349c20u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x349c24: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x349c24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x349c28: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x349c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x349c2c: 0x4604a034  c.lt.s      $f20, $f4
    ctx->pc = 0x349c2cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x349c30: 0x0  nop
    ctx->pc = 0x349c30u;
    // NOP
    // 0x349c34: 0x45000036  bc1f        . + 4 + (0x36 << 2)
    ctx->pc = 0x349C34u;
    {
        const bool branch_taken_0x349c34 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x349C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349C34u;
        // 0x349c38: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x349c34) {
            ctx->pc = 0x349D10u;
            goto label_349d10;
        }
    }
    ctx->pc = 0x349C3Cu;
    // 0x349c3c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x349c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x349c40: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x349c40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x349c44: 0x2463ac50  addiu       $v1, $v1, -0x53B0
    ctx->pc = 0x349c44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945872));
    // 0x349c48: 0x0  nop
    ctx->pc = 0x349c48u;
    // NOP
    // 0x349c4c: 0x0  nop
    ctx->pc = 0x349c4cu;
    // NOP
    // 0x349c50: 0x46040003  div.s       $f0, $f0, $f4
    ctx->pc = 0x349c50u;
    { if (ctx->f[4] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[4]); }
    // 0x349c54: 0xc475001c  lwc1        $f21, 0x1C($v1)
    ctx->pc = 0x349c54u;
    { uint32_t bits = FAST_READ32(0x6BAC6Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x349c58: 0x0  nop
    ctx->pc = 0x349c58u;
    // NOP
    // 0x349c5c: 0x0  nop
    ctx->pc = 0x349c5cu;
    // NOP
    // 0x349c60: 0x46040843  div.s       $f1, $f1, $f4
    ctx->pc = 0x349c60u;
    { if (ctx->f[4] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[4]); }
    // 0x349c64: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x349c64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x349c68: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x349c68u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x349c6c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x349c6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x349c70: 0x3c013da3  lui         $at, 0x3DA3
    ctx->pc = 0x349c70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15779 << 16));
    // 0x349c74: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x349c74u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x349c78: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x349c78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x349c7c: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x349c7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x349c80: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x349c80u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x349c84: 0xc6540014  lwc1        $f20, 0x14($s2)
    ctx->pc = 0x349c84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x349c88: 0xc6400018  lwc1        $f0, 0x18($s2)
    ctx->pc = 0x349c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x349c8c: 0x4602a502  mul.s       $f20, $f20, $f2
    ctx->pc = 0x349c8cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
    // 0x349c90: 0xc64c0010  lwc1        $f12, 0x10($s2)
    ctx->pc = 0x349c90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x349c94: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x349c94u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x349c98: 0x4618a500  add.s       $f20, $f20, $f24
    ctx->pc = 0x349c98u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[24]);
    // 0x349c9c: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x349c9cu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x349ca0: 0x0  nop
    ctx->pc = 0x349ca0u;
    // NOP
    // 0x349ca4: 0x0  nop
    ctx->pc = 0x349ca4u;
    // NOP
    // 0x349ca8: 0x4604a503  div.s       $f20, $f20, $f4
    ctx->pc = 0x349ca8u;
    { if (ctx->f[4] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[20], ctx->f[4]); }
    // 0x349cac: 0xc0da658  jal         func_369960
    ctx->pc = 0x349CACu;
    SET_GPR_U32(ctx, 31, 0x349CB4u);
    ctx->pc = 0x349CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349CACu;
    // 0x349cb0: 0x4615a542  mul.s       $f21, $f20, $f21 (Delay Slot)
    ctx->f[21] = FPU_MUL_S(ctx->f[20], ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x369960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x369960u, 0x349CACu, 0x349CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349CB4u;
label_349cb4:
    // 0x349cb4: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x349cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x349cb8: 0xc7ac0008  lwc1        $f12, 0x8($sp)
    ctx->pc = 0x349cb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x349cbc: 0xc0da65c  jal         func_369970
    ctx->pc = 0x349CBCu;
    SET_GPR_U32(ctx, 31, 0x349CC4u);
    ctx->pc = 0x349CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349CBCu;
    // 0x349cc0: 0x8c44bd48  lw          $a0, -0x42B8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x369970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x369970u, 0x349CBCu, 0x349CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349CC4u;
label_349cc4:
    // 0x349cc4: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x349cc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x349cc8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x349cc8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x349ccc: 0x4616a842  mul.s       $f1, $f21, $f22
    ctx->pc = 0x349cccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[21], ctx->f[22]);
    // 0x349cd0: 0xc7ac0050  lwc1        $f12, 0x50($sp)
    ctx->pc = 0x349cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x349cd4: 0x4616a082  mul.s       $f2, $f20, $f22
    ctx->pc = 0x349cd4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[20], ctx->f[22]);
    // 0x349cd8: 0x4600b802  mul.s       $f0, $f23, $f0
    ctx->pc = 0x349cd8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[23], ctx->f[0]);
    // 0x349cdc: 0xc7ad0054  lwc1        $f13, 0x54($sp)
    ctx->pc = 0x349cdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x349ce0: 0x46016301  sub.s       $f12, $f12, $f1
    ctx->pc = 0x349ce0u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[1]);
    // 0x349ce4: 0x8fa800d0  lw          $t0, 0xD0($sp)
    ctx->pc = 0x349ce4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x349ce8: 0x46026b41  sub.s       $f13, $f13, $f2
    ctx->pc = 0x349ce8u;
    ctx->f[13] = FPU_SUB_S(ctx->f[13], ctx->f[2]);
    // 0x349cec: 0x4600ab86  mov.s       $f14, $f21
    ctx->pc = 0x349cecu;
    ctx->f[14] = FPU_MOV_S(ctx->f[21]);
    // 0x349cf0: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x349cf0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x349cf4: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x349cf4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x349cf8: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x349cf8u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x349cfc: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x349cfcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x349d00: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x349d00u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349d04: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x349d04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349d08: 0xc0da874  jal         func_36A1D0
    ctx->pc = 0x349D08u;
    SET_GPR_U32(ctx, 31, 0x349D10u);
    ctx->pc = 0x349D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349D08u;
    // 0x349d0c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A1D0u, 0x349D08u, 0x349D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349D10u;
label_349d10:
    // 0x349d10: 0xc6410010  lwc1        $f1, 0x10($s2)
    ctx->pc = 0x349d10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x349d14: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x349d14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x349d18: 0x3c013fa6  lui         $at, 0x3FA6
    ctx->pc = 0x349d18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16294 << 16));
    // 0x349d1c: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x349d1cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x349d20: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x349d20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x349d24: 0xc6420018  lwc1        $f2, 0x18($s2)
    ctx->pc = 0x349d24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x349d28: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x349d28u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x349d2c: 0xe6410010  swc1        $f1, 0x10($s2)
    ctx->pc = 0x349d2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
    // 0x349d30: 0xc4402b30  lwc1        $f0, 0x2B30($v0)
    ctx->pc = 0x349d30u;
    { uint32_t bits = FAST_READ32(0x482B30u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x349d34: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x349d34u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x349d38: 0xe6420018  swc1        $f2, 0x18($s2)
    ctx->pc = 0x349d38u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 24), bits); }
label_349d3c:
    // 0x349d3c: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x349d3cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_349d40:
    // 0x349d40: 0x2ae20100  slti        $v0, $s7, 0x100
    ctx->pc = 0x349d40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x349d44: 0x5440fef8  bnel        $v0, $zero, . + 4 + (-0x108 << 2)
    ctx->pc = 0x349D44u;
    {
        const bool branch_taken_0x349d44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x349d44) {
            ctx->pc = 0x349D48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x349D44u;
            // 0x349d48: 0x8fc200f4  lw          $v0, 0xF4($fp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 244)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x349928u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_349928;
        }
    }
    ctx->pc = 0x349D4Cu;
    // 0x349d4c: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x349d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x349d50: 0xc0db170  jal         func_36C5C0
    ctx->pc = 0x349D50u;
    SET_GPR_U32(ctx, 31, 0x349D58u);
    ctx->pc = 0x349D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349D50u;
    // 0x349d54: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C5C0u, 0x349D50u, 0x349D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349D58u;
label_349d58:
    // 0x349d58: 0xdfb000e0  ld          $s0, 0xE0($sp)
    ctx->pc = 0x349d58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x349d5c: 0xdfb100e8  ld          $s1, 0xE8($sp)
    ctx->pc = 0x349d5cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x349d60: 0xdfb200f0  ld          $s2, 0xF0($sp)
    ctx->pc = 0x349d60u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x349d64: 0xdfb300f8  ld          $s3, 0xF8($sp)
    ctx->pc = 0x349d64u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x349d68: 0xdfb40100  ld          $s4, 0x100($sp)
    ctx->pc = 0x349d68u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x349d6c: 0xdfb50108  ld          $s5, 0x108($sp)
    ctx->pc = 0x349d6cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x349d70: 0xdfb60110  ld          $s6, 0x110($sp)
    ctx->pc = 0x349d70u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x349d74: 0xdfb70118  ld          $s7, 0x118($sp)
    ctx->pc = 0x349d74u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x349d78: 0xdfbe0120  ld          $fp, 0x120($sp)
    ctx->pc = 0x349d78u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x349d7c: 0xdfbf0128  ld          $ra, 0x128($sp)
    ctx->pc = 0x349d7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x349d80: 0xc7ba0160  lwc1        $f26, 0x160($sp)
    ctx->pc = 0x349d80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x349d84: 0xc7b90158  lwc1        $f25, 0x158($sp)
    ctx->pc = 0x349d84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x349d88: 0xc7b80150  lwc1        $f24, 0x150($sp)
    ctx->pc = 0x349d88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x349d8c: 0xc7b70148  lwc1        $f23, 0x148($sp)
    ctx->pc = 0x349d8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x349d90: 0xc7b60140  lwc1        $f22, 0x140($sp)
    ctx->pc = 0x349d90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x349d94: 0xc7b50138  lwc1        $f21, 0x138($sp)
    ctx->pc = 0x349d94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x349d98: 0xc7b40130  lwc1        $f20, 0x130($sp)
    ctx->pc = 0x349d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x349d9c: 0x3e00008  jr          $ra
    ctx->pc = 0x349D9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x349DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349D9Cu;
        // 0x349da0: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x349D9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x349DA4u;
    // 0x349da4: 0x0  nop
    ctx->pc = 0x349da4u;
    // NOP
    ctx->pc = 0x349da8u;
}
