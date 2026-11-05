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

// Function: sub_0033D0C0
// Address: 0x33d0c0 - 0x33d7b0
void sub_0033D0C0_0x33d0c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033D0C0_0x33d0c0");
#endif

    switch (ctx->pc) {
        case 0x33d174u: goto label_33d174;
        case 0x33d1acu: goto label_33d1ac;
        case 0x33d1c8u: goto label_33d1c8;
        case 0x33d1d4u: goto label_33d1d4;
        case 0x33d224u: goto label_33d224;
        case 0x33d26cu: goto label_33d26c;
        case 0x33d2acu: goto label_33d2ac;
        case 0x33d330u: goto label_33d330;
        case 0x33d364u: goto label_33d364;
        case 0x33d380u: goto label_33d380;
        case 0x33d3a0u: goto label_33d3a0;
        case 0x33d3e0u: goto label_33d3e0;
        case 0x33d428u: goto label_33d428;
        case 0x33d554u: goto label_33d554;
        case 0x33d594u: goto label_33d594;
        case 0x33d6a8u: goto label_33d6a8;
        case 0x33d6dcu: goto label_33d6dc;
        case 0x33d6f8u: goto label_33d6f8;
        case 0x33d71cu: goto label_33d71c;
        default: break;
    }

    ctx->pc = 0x33d0c0u;

    // 0x33d0c0: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x33d0c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
    // 0x33d0c4: 0xe7b50138  swc1        $f21, 0x138($sp)
    ctx->pc = 0x33d0c4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
    // 0x33d0c8: 0xe7b40130  swc1        $f20, 0x130($sp)
    ctx->pc = 0x33d0c8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x33d0cc: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x33d0ccu;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x33d0d0: 0x46006d06  mov.s       $f20, $f13
    ctx->pc = 0x33d0d0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
    // 0x33d0d4: 0x93a20170  lbu         $v0, 0x170($sp)
    ctx->pc = 0x33d0d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x33d0d8: 0x4614a832  c.eq.s      $f21, $f20
    ctx->pc = 0x33d0d8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[21], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x33d0dc: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x33d0dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x33d0e0: 0x7fb400d0  sq          $s4, 0xD0($sp)
    ctx->pc = 0x33d0e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 20));
    // 0x33d0e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x33d0e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33d0e8: 0x7fb600f0  sq          $s6, 0xF0($sp)
    ctx->pc = 0x33d0e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 22));
    // 0x33d0ec: 0x160a02d  daddu       $s4, $t3, $zero
    ctx->pc = 0x33d0ecu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33d0f0: 0x7fb70100  sq          $s7, 0x100($sp)
    ctx->pc = 0x33d0f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 23));
    // 0x33d0f4: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x33d0f4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33d0f8: 0x7fbe0110  sq          $fp, 0x110($sp)
    ctx->pc = 0x33d0f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 30));
    // 0x33d0fc: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x33d0fcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33d100: 0xe7ba0160  swc1        $f26, 0x160($sp)
    ctx->pc = 0x33d100u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
    // 0x33d104: 0x120f02d  daddu       $fp, $t1, $zero
    ctx->pc = 0x33d104u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33d108: 0xe7b90158  swc1        $f25, 0x158($sp)
    ctx->pc = 0x33d108u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
    // 0x33d10c: 0x46007686  mov.s       $f26, $f14
    ctx->pc = 0x33d10cu;
    ctx->f[26] = FPU_MOV_S(ctx->f[14]);
    // 0x33d110: 0xe7b80150  swc1        $f24, 0x150($sp)
    ctx->pc = 0x33d110u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x33d114: 0x46007e46  mov.s       $f25, $f15
    ctx->pc = 0x33d114u;
    ctx->f[25] = FPU_MOV_S(ctx->f[15]);
    // 0x33d118: 0xe7b70148  swc1        $f23, 0x148($sp)
    ctx->pc = 0x33d118u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
    // 0x33d11c: 0x46008606  mov.s       $f24, $f16
    ctx->pc = 0x33d11cu;
    ctx->f[24] = FPU_MOV_S(ctx->f[16]);
    // 0x33d120: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x33d120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x33d124: 0x46008dc6  mov.s       $f23, $f17
    ctx->pc = 0x33d124u;
    ctx->f[23] = FPU_MOV_S(ctx->f[17]);
    // 0x33d128: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x33d128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
    // 0x33d12c: 0x7fb300c0  sq          $s3, 0xC0($sp)
    ctx->pc = 0x33d12cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 19));
    // 0x33d130: 0x7fb500e0  sq          $s5, 0xE0($sp)
    ctx->pc = 0x33d130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 21));
    // 0x33d134: 0xffbf0120  sd          $ra, 0x120($sp)
    ctx->pc = 0x33d134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 31));
    // 0x33d138: 0xe7b60140  swc1        $f22, 0x140($sp)
    ctx->pc = 0x33d138u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x33d13c: 0xafa50074  sw          $a1, 0x74($sp)
    ctx->pc = 0x33d13cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 5));
    // 0x33d140: 0xafa60078  sw          $a2, 0x78($sp)
    ctx->pc = 0x33d140u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 6));
    // 0x33d144: 0xafaa007c  sw          $t2, 0x7C($sp)
    ctx->pc = 0x33d144u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 10));
    // 0x33d148: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x33D148u;
    {
        const bool branch_taken_0x33d148 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x33D14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D148u;
        // 0x33d14c: 0xafa20080  sw          $v0, 0x80($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d148) {
            ctx->pc = 0x33D188u;
            goto label_33d188;
        }
    }
    ctx->pc = 0x33D150u;
    // 0x33d150: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x33d150u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x33d154: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x33d154u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33d158: 0x0  nop
    ctx->pc = 0x33d158u;
    // NOP
    // 0x33d15c: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x33d15cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x33d160: 0x0  nop
    ctx->pc = 0x33d160u;
    // NOP
    // 0x33d164: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x33D164u;
    {
        const bool branch_taken_0x33d164 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x33D168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D164u;
        // 0x33d168: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d164) {
            ctx->pc = 0x33D17Cu;
            goto label_33d17c;
        }
    }
    ctx->pc = 0x33D16Cu;
    // 0x33d16c: 0xc0cfb96  jal         func_33EE58
    ctx->pc = 0x33D16Cu;
    SET_GPR_U32(ctx, 31, 0x33D174u);
    ctx->pc = 0x33D170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33D16Cu;
    // 0x33d170: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33EE58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33EE58u, 0x33D16Cu, 0x33D174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33D174u;
label_33d174:
    // 0x33d174: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x33d174u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x33d178: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x33d178u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_33d17c:
    // 0x33d17c: 0xe4542cb8  swc1        $f20, 0x2CB8($v0)
    ctx->pc = 0x33d17cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 11448), bits); }
    // 0x33d180: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x33D180u;
    {
        const bool branch_taken_0x33d180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33D184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D180u;
        // 0x33d184: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d180) {
            ctx->pc = 0x33D1ECu;
            goto label_33d1ec;
        }
    }
    ctx->pc = 0x33D188u;
label_33d188:
    // 0x33d188: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x33d188u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x33d18c: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x33d18cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x33d190: 0x0  nop
    ctx->pc = 0x33d190u;
    // NOP
    // 0x33d194: 0x4616a832  c.eq.s      $f21, $f22
    ctx->pc = 0x33d194u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[21], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x33d198: 0x0  nop
    ctx->pc = 0x33d198u;
    // NOP
    // 0x33d19c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x33D19Cu;
    {
        const bool branch_taken_0x33d19c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x33d19c) {
            ctx->pc = 0x33D1B0u;
            goto label_33d1b0;
        }
    }
    ctx->pc = 0x33D1A4u;
    // 0x33d1a4: 0xc0cfb8e  jal         func_33EE38
    ctx->pc = 0x33D1A4u;
    SET_GPR_U32(ctx, 31, 0x33D1ACu);
    ctx->pc = 0x33D1A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33D1A4u;
    // 0x33d1a8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33EE38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33EE38u, 0x33D1A4u, 0x33D1ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33D1ACu;
label_33d1ac:
    // 0x33d1ac: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x33d1acu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_33d1b0:
    // 0x33d1b0: 0x4616a032  c.eq.s      $f20, $f22
    ctx->pc = 0x33d1b0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x33d1b4: 0x0  nop
    ctx->pc = 0x33d1b4u;
    // NOP
    // 0x33d1b8: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x33D1B8u;
    {
        const bool branch_taken_0x33d1b8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x33d1b8) {
            ctx->pc = 0x33D1CCu;
            goto label_33d1cc;
        }
    }
    ctx->pc = 0x33D1C0u;
    // 0x33d1c0: 0xc0cfb96  jal         func_33EE58
    ctx->pc = 0x33D1C0u;
    SET_GPR_U32(ctx, 31, 0x33D1C8u);
    ctx->pc = 0x33D1C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33D1C0u;
    // 0x33d1c4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33EE58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33EE58u, 0x33D1C0u, 0x33D1C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33D1C8u;
label_33d1c8:
    // 0x33d1c8: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x33d1c8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_33d1cc:
    // 0x33d1cc: 0xc0dc10e  jal         func_370438
    ctx->pc = 0x33D1CCu;
    SET_GPR_U32(ctx, 31, 0x33D1D4u);
    ctx->pc = 0x370438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x370438u, 0x33D1CCu, 0x33D1D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33D1D4u;
label_33d1d4:
    // 0x33d1d4: 0x4615a041  sub.s       $f1, $f20, $f21
    ctx->pc = 0x33d1d4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[20], ctx->f[21]);
    // 0x33d1d8: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x33d1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x33d1dc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x33d1dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33d1e0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x33d1e0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x33d1e4: 0x46150840  add.s       $f1, $f1, $f21
    ctx->pc = 0x33d1e4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[21]);
    // 0x33d1e8: 0xe4412cb8  swc1        $f1, 0x2CB8($v0)
    ctx->pc = 0x33d1e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x482CB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x482CB8u, _value); } while (0); }
label_33d1ec:
    // 0x33d1ec: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x33d1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x33d1f0: 0x3c03005b  lui         $v1, 0x5B
    ctx->pc = 0x33d1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)91 << 16));
    // 0x33d1f4: 0xe4572cbc  swc1        $f23, 0x2CBC($v0)
    ctx->pc = 0x33d1f4u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x482CBCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x482CBCu, _value); } while (0); }
    // 0x33d1f8: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x33d1f8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x33d1fc: 0xf8616fd0  sqc2        $vf1, 0x6FD0($v1)
    ctx->pc = 0x33d1fcu;
    do { __m128i _value = (_mm_castps_si128(ctx->vu0_vf[1])); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x5B6FD0u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x5B6FD0u, _value); } while (0);
    // 0x33d200: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x33d200u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x33d204: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x33d204u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33d208: 0x0  nop
    ctx->pc = 0x33d208u;
    // NOP
    // 0x33d20c: 0x4600c032  c.eq.s      $f24, $f0
    ctx->pc = 0x33d20cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[24], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x33d210: 0x0  nop
    ctx->pc = 0x33d210u;
    // NOP
    // 0x33d214: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x33D214u;
    {
        const bool branch_taken_0x33d214 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x33D218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D214u;
        // 0x33d218: 0x60802d  daddu       $s0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d214) {
            ctx->pc = 0x33D230u;
            goto label_33d230;
        }
    }
    ctx->pc = 0x33D21Cu;
    // 0x33d21c: 0xc0cfb9e  jal         func_33EE78
    ctx->pc = 0x33D21Cu;
    SET_GPR_U32(ctx, 31, 0x33D224u);
    ctx->pc = 0x33D220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33D21Cu;
    // 0x33d220: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33EE78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33EE78u, 0x33D21Cu, 0x33D224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33D224u;
label_33d224:
    // 0x33d224: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x33d224u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x33d228: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x33D228u;
    {
        const bool branch_taken_0x33d228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33D22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D228u;
        // 0x33d22c: 0xe440c348  swc1        $f0, -0x3CB8($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294951752), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d228) {
            ctx->pc = 0x33D238u;
            goto label_33d238;
        }
    }
    ctx->pc = 0x33D230u;
label_33d230:
    // 0x33d230: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x33d230u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x33d234: 0xe458c348  swc1        $f24, -0x3CB8($v0)
    ctx->pc = 0x33d234u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3FC348u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FC348u, _value); } while (0); }
label_33d238:
    // 0x33d238: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x33d238u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x33d23c: 0x1e1027  nor         $v0, $zero, $fp
    ctx->pc = 0x33d23cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 30)));
    // 0x33d240: 0x162027  nor         $a0, $zero, $s6
    ctx->pc = 0x33d240u;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 22)));
    // 0x33d244: 0x172827  nor         $a1, $zero, $s7
    ctx->pc = 0x33d244u;
    SET_GPR_U64(ctx, 5, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 23)));
    // 0x33d248: 0x62f00a  movz        $fp, $v1, $v0
    ctx->pc = 0x33d248u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 30, GPR_VEC(ctx, 3));
    // 0x33d24c: 0x64b00a  movz        $s6, $v1, $a0
    ctx->pc = 0x33d24cu;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 22, GPR_VEC(ctx, 3));
    // 0x33d250: 0x65b80a  movz        $s7, $v1, $a1
    ctx->pc = 0x33d250u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 3));
    // 0x33d254: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x33d254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x33d258: 0x8fa3007c  lw          $v1, 0x7C($sp)
    ctx->pc = 0x33d258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x33d25c: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x33D25Cu;
    {
        const bool branch_taken_0x33d25c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x33D260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D25Cu;
        // 0x33d260: 0xc6342cb8  lwc1        $f20, 0x2CB8($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 11448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d25c) {
            ctx->pc = 0x33D274u;
            goto label_33d274;
        }
    }
    ctx->pc = 0x33D264u;
    // 0x33d264: 0xc0cfba6  jal         func_33EE98
    ctx->pc = 0x33D264u;
    SET_GPR_U32(ctx, 31, 0x33D26Cu);
    ctx->pc = 0x33D268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33D264u;
    // 0x33d268: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33EE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33EE98u, 0x33D264u, 0x33D26Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33D26Cu;
label_33d26c:
    // 0x33d26c: 0xafa2007c  sw          $v0, 0x7C($sp)
    ctx->pc = 0x33d26cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
    // 0x33d270: 0xc6342cb8  lwc1        $f20, 0x2CB8($s1)
    ctx->pc = 0x33d270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 11448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_33d274:
    // 0x33d274: 0x26026fd0  addiu       $v0, $s0, 0x6FD0
    ctx->pc = 0x33d274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 28624));
    // 0x33d278: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x33d278u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x33d27c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x33d27cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33d280: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x33d280u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x33d284: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x33d284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33d288: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x33d288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33d28c: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x33d28cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x33d290: 0xc444000c  lwc1        $f4, 0xC($v0)
    ctx->pc = 0x33d290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x33d294: 0xc6036fd0  lwc1        $f3, 0x6FD0($s0)
    ctx->pc = 0x33d294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x33d298: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x33d298u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x33d29c: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x33d29cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x33d2a0: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x33d2a0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x33d2a4: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x33D2A4u;
    SET_GPR_U32(ctx, 31, 0x33D2ACu);
    ctx->pc = 0x33D2A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33D2A4u;
    // 0x33d2a8: 0xe7a4000c  swc1        $f4, 0xC($sp) (Delay Slot)
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x33D2A4u, 0x33D2ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33D2ACu;
label_33d2ac:
    // 0x33d2ac: 0x4614a002  mul.s       $f0, $f20, $f20
    ctx->pc = 0x33d2acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x33d2b0: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x33d2b0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33d2b4: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x33d2b4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x33d2b8: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x33d2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x33d2bc: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x33d2bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x33d2c0: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x33d2c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x33d2c4: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x33d2c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33d2c8: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x33d2c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33d2cc: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x33d2ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33d2d0: 0xc7a3002c  lwc1        $f3, 0x2C($sp)
    ctx->pc = 0x33d2d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x33d2d4: 0xe7a10060  swc1        $f1, 0x60($sp)
    ctx->pc = 0x33d2d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x33d2d8: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x33d2d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x33d2dc: 0xe7a20068  swc1        $f2, 0x68($sp)
    ctx->pc = 0x33d2dcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x33d2e0: 0xe7a3006c  swc1        $f3, 0x6C($sp)
    ctx->pc = 0x33d2e0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x33d2e4: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x33d2e4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x33d2e8: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x33d2e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x33d2ec: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x33d2ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x33d2f0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x33d2f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33d2f4: 0x0  nop
    ctx->pc = 0x33d2f4u;
    // NOP
    // 0x33d2f8: 0x46170034  c.lt.s      $f0, $f23
    ctx->pc = 0x33d2f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x33d2fc: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x33d2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x33d300: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x33d300u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x33d304: 0x9043bd24  lbu         $v1, -0x42DC($v0)
    ctx->pc = 0x33d304u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x3FBD24u));
    // 0x33d308: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x33D308u;
    {
        const bool branch_taken_0x33d308 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x33D30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D308u;
        // 0x33d30c: 0xac802cc0  sw          $zero, 0x2CC0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 11456), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d308) {
            ctx->pc = 0x33D378u;
            goto label_33d378;
        }
    }
    ctx->pc = 0x33D310u;
    // 0x33d310: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x33d310u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x33d314: 0x8c52bd20  lw          $s2, -0x42E0($v0)
    ctx->pc = 0x33d314u;
    SET_GPR_S32(ctx, 18, (int32_t)FAST_READ32(0x3FBD20u));
    // 0x33d318: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x33d318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x33d31c: 0x18400020  blez        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x33D31Cu;
    {
        const bool branch_taken_0x33d31c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x33D320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D31Cu;
        // 0x33d320: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d31c) {
            ctx->pc = 0x33D3A0u;
            goto label_33d3a0;
        }
    }
    ctx->pc = 0x33D324u;
    // 0x33d324: 0x24150004  addiu       $s5, $zero, 0x4
    ctx->pc = 0x33d324u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x33d328: 0x3c130034  lui         $s3, 0x34
    ctx->pc = 0x33d328u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)52 << 16));
    // 0x33d32c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x33d32cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33d330:
    // 0x33d330: 0x8e42002c  lw          $v0, 0x2C($s2)
    ctx->pc = 0x33d330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x33d334: 0x512821  addu        $a1, $v0, $s1
    ctx->pc = 0x33d334u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x33d338: 0x8ca30020  lw          $v1, 0x20($a1)
    ctx->pc = 0x33d338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x33d33c: 0x14750002  bne         $v1, $s5, . + 4 + (0x2 << 2)
    ctx->pc = 0x33D33Cu;
    {
        const bool branch_taken_0x33d33c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 21));
        ctx->pc = 0x33D340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D33Cu;
        // 0x33d340: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d33c) {
            ctx->pc = 0x33D348u;
            goto label_33d348;
        }
    }
    ctx->pc = 0x33D344u;
    // 0x33d344: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x33d344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_33d348:
    // 0x33d348: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x33d348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x33d34c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x33D34Cu;
    {
        const bool branch_taken_0x33d34c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33D350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D34Cu;
        // 0x33d350: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d34c) {
            ctx->pc = 0x33D364u;
            goto label_33d364;
        }
    }
    ctx->pc = 0x33D354u;
    // 0x33d354: 0x8ca40018  lw          $a0, 0x18($a1)
    ctx->pc = 0x33d354u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x33d358: 0x2667db70  addiu       $a3, $s3, -0x2490
    ctx->pc = 0x33d358u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 4294957936));
    // 0x33d35c: 0xc0dbe70  jal         func_36F9C0
    ctx->pc = 0x33D35Cu;
    SET_GPR_U32(ctx, 31, 0x33D364u);
    ctx->pc = 0x33D360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33D35Cu;
    // 0x33d360: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36F9C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36F9C0u, 0x33D35Cu, 0x33D364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33D364u;
label_33d364:
    // 0x33d364: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x33d364u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x33d368: 0x1600fff1  bnez        $s0, . + 4 + (-0xF << 2)
    ctx->pc = 0x33D368u;
    {
        const bool branch_taken_0x33d368 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x33D36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D368u;
        // 0x33d36c: 0x263101c4  addiu       $s1, $s1, 0x1C4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 452));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d368) {
            ctx->pc = 0x33D330u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33d330;
        }
    }
    ctx->pc = 0x33D370u;
    // 0x33d370: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x33D370u;
    {
        const bool branch_taken_0x33d370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33D374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D370u;
        // 0x33d374: 0x3c050048  lui         $a1, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d370) {
            ctx->pc = 0x33D3A4u;
            goto label_33d3a4;
        }
    }
    ctx->pc = 0x33D378u;
label_33d378:
    // 0x33d378: 0xc0c580c  jal         func_316030
    ctx->pc = 0x33D378u;
    SET_GPR_U32(ctx, 31, 0x33D380u);
    ctx->pc = 0x33D37Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33D378u;
    // 0x33d37c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x316030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x316030u, 0x33D378u, 0x33D380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33D380u;
label_33d380:
    // 0x33d380: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x33d380u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x33d384: 0x3c070034  lui         $a3, 0x34
    ctx->pc = 0x33d384u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)52 << 16));
    // 0x33d388: 0x8c65bd28  lw          $a1, -0x42D8($v1)
    ctx->pc = 0x33d388u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3FBD28u));
    // 0x33d38c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x33d38cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33d390: 0x24e7db70  addiu       $a3, $a3, -0x2490
    ctx->pc = 0x33d390u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294957936));
    // 0x33d394: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x33d394u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x33d398: 0xc0dbe70  jal         func_36F9C0
    ctx->pc = 0x33D398u;
    SET_GPR_U32(ctx, 31, 0x33D3A0u);
    ctx->pc = 0x33D39Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33D398u;
    // 0x33d39c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36F9C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36F9C0u, 0x33D398u, 0x33D3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33D3A0u;
label_33d3a0:
    // 0x33d3a0: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x33d3a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_33d3a4:
    // 0x33d3a4: 0x8ca22cc0  lw          $v0, 0x2CC0($a1)
    ctx->pc = 0x33d3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 11456)));
    // 0x33d3a8: 0x104000ed  beqz        $v0, . + 4 + (0xED << 2)
    ctx->pc = 0x33D3A8u;
    {
        const bool branch_taken_0x33d3a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33D3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D3A8u;
        // 0x33d3ac: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d3a8) {
            ctx->pc = 0x33D760u;
            goto label_33d760;
        }
    }
    ctx->pc = 0x33D3B0u;
    // 0x33d3b0: 0x4619d032  c.eq.s      $f26, $f25
    ctx->pc = 0x33d3b0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[26], ctx->f[25])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x33d3b4: 0x0  nop
    ctx->pc = 0x33d3b4u;
    // NOP
    // 0x33d3b8: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x33D3B8u;
    {
        const bool branch_taken_0x33d3b8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x33D3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D3B8u;
        // 0x33d3bc: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d3b8) {
            ctx->pc = 0x33D3D8u;
            goto label_33d3d8;
        }
    }
    ctx->pc = 0x33D3C0u;
    // 0x33d3c0: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x33d3c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x33d3c4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x33d3c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33d3c8: 0x0  nop
    ctx->pc = 0x33d3c8u;
    // NOP
    // 0x33d3cc: 0x4600c800  add.s       $f0, $f25, $f0
    ctx->pc = 0x33d3ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[25], ctx->f[0]);
    // 0x33d3d0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x33D3D0u;
    {
        const bool branch_taken_0x33d3d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33D3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D3D0u;
        // 0x33d3d4: 0xe4402cc4  swc1        $f0, 0x2CC4($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 11460), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d3d0) {
            ctx->pc = 0x33D3F4u;
            goto label_33d3f4;
        }
    }
    ctx->pc = 0x33D3D8u;
label_33d3d8:
    // 0x33d3d8: 0xc0dc10e  jal         func_370438
    ctx->pc = 0x33D3D8u;
    SET_GPR_U32(ctx, 31, 0x33D3E0u);
    ctx->pc = 0x370438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x370438u, 0x33D3D8u, 0x33D3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33D3E0u;
label_33d3e0:
    // 0x33d3e0: 0x461ac841  sub.s       $f1, $f25, $f26
    ctx->pc = 0x33d3e0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[25], ctx->f[26]);
    // 0x33d3e4: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x33d3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x33d3e8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x33d3e8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x33d3ec: 0x461a0840  add.s       $f1, $f1, $f26
    ctx->pc = 0x33d3ecu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[26]);
    // 0x33d3f0: 0xe4412cc4  swc1        $f1, 0x2CC4($v0)
    ctx->pc = 0x33d3f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x482CC4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x482CC4u, _value); } while (0); }
label_33d3f4:
    // 0x33d3f4: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x33d3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x33d3f8: 0x24110028  addiu       $s1, $zero, 0x28
    ctx->pc = 0x33d3f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x33d3fc: 0x8c452b98  lw          $a1, 0x2B98($v0)
    ctx->pc = 0x33d3fcu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x482B98u));
    // 0x33d400: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x33d400u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33d404: 0x3c120040  lui         $s2, 0x40
    ctx->pc = 0x33d404u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)64 << 16));
    // 0x33d408: 0xb11018  mult        $v0, $a1, $s1
    ctx->pc = 0x33d408u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x33d40c: 0x8e43c34c  lw          $v1, -0x3CB4($s2)
    ctx->pc = 0x33d40cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294951756)));
    // 0x33d410: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33d410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33d414: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x33d414u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x33d418: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x33D418u;
    {
        const bool branch_taken_0x33d418 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x33D41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D418u;
        // 0x33d41c: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d418) {
            ctx->pc = 0x33D428u;
            goto label_33d428;
        }
    }
    ctx->pc = 0x33D420u;
    // 0x33d420: 0xc0cf5ec  jal         func_33D7B0
    ctx->pc = 0x33D420u;
    SET_GPR_U32(ctx, 31, 0x33D428u);
    ctx->pc = 0x33D424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33D420u;
    // 0x33d424: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33D7B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33D7B0u, 0x33D420u, 0x33D428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33D428u;
label_33d428:
    // 0x33d428: 0x8e622b98  lw          $v0, 0x2B98($s3)
    ctx->pc = 0x33d428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11160)));
    // 0x33d42c: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x33d42cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x33d430: 0x8e03c34c  lw          $v1, -0x3CB4($s0)
    ctx->pc = 0x33d430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294951756)));
    // 0x33d434: 0x32c600ff  andi        $a2, $s6, 0xFF
    ctx->pc = 0x33d434u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
    // 0x33d438: 0x511018  mult        $v0, $v0, $s1
    ctx->pc = 0x33d438u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x33d43c: 0x8fac007c  lw          $t4, 0x7C($sp)
    ctx->pc = 0x33d43cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x33d440: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x33d440u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x33d444: 0x32e700ff  andi        $a3, $s7, 0xFF
    ctx->pc = 0x33d444u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)255);
    // 0x33d448: 0x3c080048  lui         $t0, 0x48
    ctx->pc = 0x33d448u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)72 << 16));
    // 0x33d44c: 0x33c900ff  andi        $t1, $fp, 0xFF
    ctx->pc = 0x33d44cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)255);
    // 0x33d450: 0x3c0a0048  lui         $t2, 0x48
    ctx->pc = 0x33d450u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)72 << 16));
    // 0x33d454: 0x318b00ff  andi        $t3, $t4, 0xFF
    ctx->pc = 0x33d454u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)255);
    // 0x33d458: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33d458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33d45c: 0x240c0001  addiu       $t4, $zero, 0x1
    ctx->pc = 0x33d45cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33d460: 0xac540000  sw          $s4, 0x0($v0)
    ctx->pc = 0x33d460u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 20));
    // 0x33d464: 0x3c0d0048  lui         $t5, 0x48
    ctx->pc = 0x33d464u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)72 << 16));
    // 0x33d468: 0xa0962cc8  sb          $s6, 0x2CC8($a0)
    ctx->pc = 0x33d468u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11464), (uint8_t)GPR_U32(ctx, 22));
    // 0x33d46c: 0x8e622b98  lw          $v0, 0x2B98($s3)
    ctx->pc = 0x33d46cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11160)));
    // 0x33d470: 0x8e03c34c  lw          $v1, -0x3CB4($s0)
    ctx->pc = 0x33d470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294951756)));
    // 0x33d474: 0x511018  mult        $v0, $v0, $s1
    ctx->pc = 0x33d474u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x33d478: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33d478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33d47c: 0xac460018  sw          $a2, 0x18($v0)
    ctx->pc = 0x33d47cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 6));
    // 0x33d480: 0xa0b72cc9  sb          $s7, 0x2CC9($a1)
    ctx->pc = 0x33d480u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 11465), (uint8_t)GPR_U32(ctx, 23));
    // 0x33d484: 0x8e622b98  lw          $v0, 0x2B98($s3)
    ctx->pc = 0x33d484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11160)));
    // 0x33d488: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x33d488u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x33d48c: 0x8e03c34c  lw          $v1, -0x3CB4($s0)
    ctx->pc = 0x33d48cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294951756)));
    // 0x33d490: 0x511018  mult        $v0, $v0, $s1
    ctx->pc = 0x33d490u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x33d494: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33d494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33d498: 0xac47001c  sw          $a3, 0x1C($v0)
    ctx->pc = 0x33d498u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 7));
    // 0x33d49c: 0xa11e2cca  sb          $fp, 0x2CCA($t0)
    ctx->pc = 0x33d49cu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 11466), (uint8_t)GPR_U32(ctx, 30));
    // 0x33d4a0: 0x8e622b98  lw          $v0, 0x2B98($s3)
    ctx->pc = 0x33d4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11160)));
    // 0x33d4a4: 0x8e03c34c  lw          $v1, -0x3CB4($s0)
    ctx->pc = 0x33d4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294951756)));
    // 0x33d4a8: 0x511018  mult        $v0, $v0, $s1
    ctx->pc = 0x33d4a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x33d4ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33d4acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33d4b0: 0xac490020  sw          $t1, 0x20($v0)
    ctx->pc = 0x33d4b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 9));
    // 0x33d4b4: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x33d4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x33d4b8: 0x8e03c34c  lw          $v1, -0x3CB4($s0)
    ctx->pc = 0x33d4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294951756)));
    // 0x33d4bc: 0xa1422ccb  sb          $v0, 0x2CCB($t2)
    ctx->pc = 0x33d4bcu;
    WRITE8(ADD32(GPR_U32(ctx, 10), 11467), (uint8_t)GPR_U32(ctx, 2));
    // 0x33d4c0: 0x8e622b98  lw          $v0, 0x2B98($s3)
    ctx->pc = 0x33d4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11160)));
    // 0x33d4c4: 0x511018  mult        $v0, $v0, $s1
    ctx->pc = 0x33d4c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x33d4c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33d4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33d4cc: 0xac4b0024  sw          $t3, 0x24($v0)
    ctx->pc = 0x33d4ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 11));
    // 0x33d4d0: 0x8e632b98  lw          $v1, 0x2B98($s3)
    ctx->pc = 0x33d4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11160)));
    // 0x33d4d4: 0x8e02c34c  lw          $v0, -0x3CB4($s0)
    ctx->pc = 0x33d4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294951756)));
    // 0x33d4d8: 0x711818  mult        $v1, $v1, $s1
    ctx->pc = 0x33d4d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x33d4dc: 0x8ca42cc0  lw          $a0, 0x2CC0($a1)
    ctx->pc = 0x33d4dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 11456)));
    // 0x33d4e0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x33d4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x33d4e4: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x33d4e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
    // 0x33d4e8: 0x8e622b98  lw          $v0, 0x2B98($s3)
    ctx->pc = 0x33d4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11160)));
    // 0x33d4ec: 0x8e03c34c  lw          $v1, -0x3CB4($s0)
    ctx->pc = 0x33d4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294951756)));
    // 0x33d4f0: 0x511018  mult        $v0, $v0, $s1
    ctx->pc = 0x33d4f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x33d4f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33d4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33d4f8: 0xac4c0004  sw          $t4, 0x4($v0)
    ctx->pc = 0x33d4f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 12));
    // 0x33d4fc: 0x8e632b98  lw          $v1, 0x2B98($s3)
    ctx->pc = 0x33d4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11160)));
    // 0x33d500: 0x8e02c34c  lw          $v0, -0x3CB4($s0)
    ctx->pc = 0x33d500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294951756)));
    // 0x33d504: 0x711818  mult        $v1, $v1, $s1
    ctx->pc = 0x33d504u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x33d508: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x33d508u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x33d50c: 0xac710008  sw          $s1, 0x8($v1)
    ctx->pc = 0x33d50cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 17));
    // 0x33d510: 0x8e622b98  lw          $v0, 0x2B98($s3)
    ctx->pc = 0x33d510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11160)));
    // 0x33d514: 0x8e03c34c  lw          $v1, -0x3CB4($s0)
    ctx->pc = 0x33d514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294951756)));
    // 0x33d518: 0x511018  mult        $v0, $v0, $s1
    ctx->pc = 0x33d518u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x33d51c: 0x8fa70078  lw          $a3, 0x78($sp)
    ctx->pc = 0x33d51cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x33d520: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33d520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33d524: 0xac470014  sw          $a3, 0x14($v0)
    ctx->pc = 0x33d524u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 7));
    // 0x33d528: 0x8fa90074  lw          $t1, 0x74($sp)
    ctx->pc = 0x33d528u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x33d52c: 0x8e622b98  lw          $v0, 0x2B98($s3)
    ctx->pc = 0x33d52cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11160)));
    // 0x33d530: 0x8e03c34c  lw          $v1, -0x3CB4($s0)
    ctx->pc = 0x33d530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294951756)));
    // 0x33d534: 0x511018  mult        $v0, $v0, $s1
    ctx->pc = 0x33d534u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x33d538: 0xada92ccc  sw          $t1, 0x2CCC($t5)
    ctx->pc = 0x33d538u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 11468), GPR_U32(ctx, 9));
    // 0x33d53c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33d53cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33d540: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x33d540u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x33d544: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x33D544u;
    {
        const bool branch_taken_0x33d544 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x33D548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D544u;
        // 0x33d548: 0x3c0a0048  lui         $t2, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d544) {
            ctx->pc = 0x33D56Cu;
            goto label_33d56c;
        }
    }
    ctx->pc = 0x33D54Cu;
    // 0x33d54c: 0xc0f528a  jal         func_3D4A28
    ctx->pc = 0x33D54Cu;
    SET_GPR_U32(ctx, 31, 0x33D554u);
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x33D54Cu, 0x33D554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33D554u;
label_33d554:
    // 0x33d554: 0x8e622b98  lw          $v0, 0x2B98($s3)
    ctx->pc = 0x33d554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11160)));
    // 0x33d558: 0x8e03c34c  lw          $v1, -0x3CB4($s0)
    ctx->pc = 0x33d558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294951756)));
    // 0x33d55c: 0x511018  mult        $v0, $v0, $s1
    ctx->pc = 0x33d55cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x33d560: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33d560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33d564: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x33d564u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x33d568: 0x3c0a0048  lui         $t2, 0x48
    ctx->pc = 0x33d568u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)72 << 16));
label_33d56c:
    // 0x33d56c: 0x8e702b98  lw          $s0, 0x2B98($s3)
    ctx->pc = 0x33d56cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11160)));
    // 0x33d570: 0x8d422cc0  lw          $v0, 0x2CC0($t2)
    ctx->pc = 0x33d570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 11456)));
    // 0x33d574: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x33d574u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x33d578: 0x2118018  mult        $s0, $s0, $s1
    ctx->pc = 0x33d578u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x33d57c: 0x8e43c34c  lw          $v1, -0x3CB4($s2)
    ctx->pc = 0x33d57cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294951756)));
    // 0x33d580: 0x22040  sll         $a0, $v0, 1
    ctx->pc = 0x33d580u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x33d584: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x33d584u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x33d588: 0x852018  mult        $a0, $a0, $a1
    ctx->pc = 0x33d588u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x33d58c: 0xc0f52a8  jal         func_3D4AA0
    ctx->pc = 0x33D58Cu;
    SET_GPR_U32(ctx, 31, 0x33D594u);
    ctx->pc = 0x33D590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33D58Cu;
    // 0x33d590: 0x2038021  addu        $s0, $s0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x33D58Cu, 0x33D594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33D594u;
label_33d594:
    // 0x33d594: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x33d594u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x33d598: 0x8e622b98  lw          $v0, 0x2B98($s3)
    ctx->pc = 0x33d598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11160)));
    // 0x33d59c: 0x8e44c34c  lw          $a0, -0x3CB4($s2)
    ctx->pc = 0x33d59cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294951756)));
    // 0x33d5a0: 0x511018  mult        $v0, $v0, $s1
    ctx->pc = 0x33d5a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x33d5a4: 0x444021  addu        $t0, $v0, $a0
    ctx->pc = 0x33d5a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x33d5a8: 0x8d030010  lw          $v1, 0x10($t0)
    ctx->pc = 0x33d5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x33d5ac: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x33D5ACu;
    {
        const bool branch_taken_0x33d5ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x33D5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D5ACu;
        // 0x33d5b0: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d5ac) {
            ctx->pc = 0x33D5C0u;
            goto label_33d5c0;
        }
    }
    ctx->pc = 0x33D5B4u;
    // 0x33d5b4: 0xad000004  sw          $zero, 0x4($t0)
    ctx->pc = 0x33d5b4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 0));
    // 0x33d5b8: 0x10000069  b           . + 4 + (0x69 << 2)
    ctx->pc = 0x33D5B8u;
    {
        const bool branch_taken_0x33d5b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33D5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D5B8u;
        // 0x33d5bc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d5b8) {
            ctx->pc = 0x33D760u;
            goto label_33d760;
        }
    }
    ctx->pc = 0x33D5C0u;
label_33d5c0:
    // 0x33d5c0: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x33d5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x33d5c4: 0x8c45bcec  lw          $a1, -0x4314($v0)
    ctx->pc = 0x33d5c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950124)));
    // 0x33d5c8: 0x2464d808  addiu       $a0, $v1, -0x27F8
    ctx->pc = 0x33d5c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957064));
    // 0x33d5cc: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x33d5ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x33d5d0: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x33d5d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x33d5d4: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x33d5d4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x33d5d8: 0x246ad808  addiu       $t2, $v1, -0x27F8
    ctx->pc = 0x33d5d8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957064));
    // 0x33d5dc: 0x68a20017  ldl         $v0, 0x17($a1)
    ctx->pc = 0x33d5dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x33d5e0: 0x6ca20010  ldr         $v0, 0x10($a1)
    ctx->pc = 0x33d5e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x33d5e4: 0x68a7001f  ldl         $a3, 0x1F($a1)
    ctx->pc = 0x33d5e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x33d5e8: 0x6ca70018  ldr         $a3, 0x18($a1)
    ctx->pc = 0x33d5e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x33d5ec: 0xb1420007  sdl         $v0, 0x7($t2)
    ctx->pc = 0x33d5ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x33d5f0: 0xb5420000  sdr         $v0, 0x0($t2)
    ctx->pc = 0x33d5f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x33d5f4: 0xb147000f  sdl         $a3, 0xF($t2)
    ctx->pc = 0x33d5f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x33d5f8: 0xb5470008  sdr         $a3, 0x8($t2)
    ctx->pc = 0x33d5f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x33d5fc: 0x8cc2c340  lw          $v0, -0x3CC0($a2)
    ctx->pc = 0x33d5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FC340u));
    // 0x33d600: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x33d600u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x33d604: 0xc462d808  lwc1        $f2, -0x27F8($v1)
    ctx->pc = 0x33d604u;
    { uint32_t bits = FAST_READ32(0x6BD808u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33d608: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x33d608u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x33d60c: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x33d60cu;
    { uint32_t bits = FAST_READ32(0x6BD80Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33d610: 0x2b82b  sltu        $s7, $zero, $v0
    ctx->pc = 0x33d610u;
    SET_GPR_U64(ctx, 23, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x33d614: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x33d614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33d618: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x33d618u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x33d61c: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x33d61cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x33d620: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x33d620u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x33d624: 0xe462d808  swc1        $f2, -0x27F8($v1)
    ctx->pc = 0x33d624u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294957064), bits); }
    // 0x33d628: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x33d628u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x33d62c: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x33d62cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x33d630: 0x8d020010  lw          $v0, 0x10($t0)
    ctx->pc = 0x33d630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x33d634: 0x8fac0080  lw          $t4, 0x80($sp)
    ctx->pc = 0x33d634u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x33d638: 0xaca22cd0  sw          $v0, 0x2CD0($a1)
    ctx->pc = 0x33d638u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 11472), GPR_U32(ctx, 2));
    // 0x33d63c: 0xacccc340  sw          $t4, -0x3CC0($a2)
    ctx->pc = 0x33d63cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294951744), GPR_U32(ctx, 12));
    // 0x33d640: 0x12870008  beq         $s4, $a3, . + 4 + (0x8 << 2)
    ctx->pc = 0x33D640u;
    {
        const bool branch_taken_0x33d640 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 7));
        ctx->pc = 0x33D644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D640u;
        // 0x33d644: 0xafa00070  sw          $zero, 0x70($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d640) {
            ctx->pc = 0x33D664u;
            goto label_33d664;
        }
    }
    ctx->pc = 0x33D648u;
    // 0x33d648: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x33d648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x33d64c: 0x1682000b  bne         $s4, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x33D64Cu;
    {
        const bool branch_taken_0x33d64c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x33D650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D64Cu;
        // 0x33d650: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d64c) {
            ctx->pc = 0x33D67Cu;
            goto label_33d67c;
        }
    }
    ctx->pc = 0x33D654u;
    // 0x33d654: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x33d654u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x33d658: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x33d658u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33d65c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x33D65Cu;
    {
        const bool branch_taken_0x33d65c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33D660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D65Cu;
        // 0x33d660: 0xe7a00070  swc1        $f0, 0x70($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d65c) {
            ctx->pc = 0x33D67Cu;
            goto label_33d67c;
        }
    }
    ctx->pc = 0x33D664u;
label_33d664:
    // 0x33d664: 0x3c013f5e  lui         $at, 0x3F5E
    ctx->pc = 0x33d664u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16222 << 16));
    // 0x33d668: 0x3421b852  ori         $at, $at, 0xB852
    ctx->pc = 0x33d668u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47186);
    // 0x33d66c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x33d66cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33d670: 0x0  nop
    ctx->pc = 0x33d670u;
    // NOP
    // 0x33d674: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x33d674u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x33d678: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x33d678u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_33d67c:
    // 0x33d67c: 0x9062bd24  lbu         $v0, -0x42DC($v1)
    ctx->pc = 0x33d67cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294950180)));
    // 0x33d680: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x33D680u;
    {
        const bool branch_taken_0x33d680 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33D684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D680u;
        // 0x33d684: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d680) {
            ctx->pc = 0x33D6F0u;
            goto label_33d6f0;
        }
    }
    ctx->pc = 0x33D688u;
    // 0x33d688: 0x8c52bd20  lw          $s2, -0x42E0($v0)
    ctx->pc = 0x33d688u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950176)));
    // 0x33d68c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x33d68cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x33d690: 0x18400022  blez        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x33D690u;
    {
        const bool branch_taken_0x33d690 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x33D694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D690u;
        // 0x33d694: 0x3c1e006c  lui         $fp, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d690) {
            ctx->pc = 0x33D71Cu;
            goto label_33d71c;
        }
    }
    ctx->pc = 0x33D698u;
    // 0x33d698: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x33d698u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33d69c: 0x24160004  addiu       $s6, $zero, 0x4
    ctx->pc = 0x33d69cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x33d6a0: 0x3c150034  lui         $s5, 0x34
    ctx->pc = 0x33d6a0u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)52 << 16));
    // 0x33d6a4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x33d6a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33d6a8:
    // 0x33d6a8: 0x8e42002c  lw          $v0, 0x2C($s2)
    ctx->pc = 0x33d6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x33d6ac: 0x512821  addu        $a1, $v0, $s1
    ctx->pc = 0x33d6acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x33d6b0: 0x8ca30020  lw          $v1, 0x20($a1)
    ctx->pc = 0x33d6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x33d6b4: 0x14760002  bne         $v1, $s6, . + 4 + (0x2 << 2)
    ctx->pc = 0x33D6B4u;
    {
        const bool branch_taken_0x33d6b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 22));
        ctx->pc = 0x33D6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D6B4u;
        // 0x33d6b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d6b4) {
            ctx->pc = 0x33D6C0u;
            goto label_33d6c0;
        }
    }
    ctx->pc = 0x33D6BCu;
    // 0x33d6bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x33d6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_33d6c0:
    // 0x33d6c0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x33d6c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x33d6c4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x33D6C4u;
    {
        const bool branch_taken_0x33d6c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33D6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D6C4u;
        // 0x33d6c8: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d6c4) {
            ctx->pc = 0x33D6DCu;
            goto label_33d6dc;
        }
    }
    ctx->pc = 0x33D6CCu;
    // 0x33d6cc: 0x8ca40018  lw          $a0, 0x18($a1)
    ctx->pc = 0x33d6ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x33d6d0: 0x26a7dba8  addiu       $a3, $s5, -0x2458
    ctx->pc = 0x33d6d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), 4294957992));
    // 0x33d6d4: 0xc0dbe70  jal         func_36F9C0
    ctx->pc = 0x33D6D4u;
    SET_GPR_U32(ctx, 31, 0x33D6DCu);
    ctx->pc = 0x33D6D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33D6D4u;
    // 0x33d6d8: 0x27a80070  addiu       $t0, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36F9C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36F9C0u, 0x33D6D4u, 0x33D6DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33D6DCu;
label_33d6dc:
    // 0x33d6dc: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x33d6dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x33d6e0: 0x1600fff1  bnez        $s0, . + 4 + (-0xF << 2)
    ctx->pc = 0x33D6E0u;
    {
        const bool branch_taken_0x33d6e0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x33D6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D6E0u;
        // 0x33d6e4: 0x263101c4  addiu       $s1, $s1, 0x1C4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 452));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d6e0) {
            ctx->pc = 0x33D6A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33d6a8;
        }
    }
    ctx->pc = 0x33D6E8u;
    // 0x33d6e8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x33D6E8u;
    {
        const bool branch_taken_0x33d6e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33D6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D6E8u;
        // 0x33d6ec: 0x8e662b98  lw          $a2, 0x2B98($s3) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d6e8) {
            ctx->pc = 0x33D720u;
            goto label_33d720;
        }
    }
    ctx->pc = 0x33D6F0u;
label_33d6f0:
    // 0x33d6f0: 0xc0c580c  jal         func_316030
    ctx->pc = 0x33D6F0u;
    SET_GPR_U32(ctx, 31, 0x33D6F8u);
    ctx->pc = 0x33D6F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33D6F0u;
    // 0x33d6f4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x316030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x316030u, 0x33D6F0u, 0x33D6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33D6F8u;
label_33d6f8:
    // 0x33d6f8: 0x3c1e006c  lui         $fp, 0x6C
    ctx->pc = 0x33d6f8u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)108 << 16));
    // 0x33d6fc: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x33d6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x33d700: 0x3c070034  lui         $a3, 0x34
    ctx->pc = 0x33d700u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)52 << 16));
    // 0x33d704: 0x8c65bd28  lw          $a1, -0x42D8($v1)
    ctx->pc = 0x33d704u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3FBD28u));
    // 0x33d708: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x33d708u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33d70c: 0x24e7dba8  addiu       $a3, $a3, -0x2458
    ctx->pc = 0x33d70cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294957992));
    // 0x33d710: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x33d710u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x33d714: 0xc0dbe70  jal         func_36F9C0
    ctx->pc = 0x33D714u;
    SET_GPR_U32(ctx, 31, 0x33D71Cu);
    ctx->pc = 0x33D718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33D714u;
    // 0x33d718: 0x27a80070  addiu       $t0, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36F9C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36F9C0u, 0x33D714u, 0x33D71Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33D71Cu;
label_33d71c:
    // 0x33d71c: 0x8e662b98  lw          $a2, 0x2B98($s3)
    ctx->pc = 0x33d71cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11160)));
label_33d720:
    // 0x33d720: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x33d720u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x33d724: 0xacb7c340  sw          $s7, -0x3CC0($a1)
    ctx->pc = 0x33d724u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 23)); ps2TraceGuestWrite(rdram, 0x3FC340u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FC340u, _value); } while (0);
    // 0x33d728: 0x24c20001  addiu       $v0, $a2, 0x1
    ctx->pc = 0x33d728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x33d72c: 0x28430082  slti        $v1, $v0, 0x82
    ctx->pc = 0x33d72cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)130) ? 1 : 0);
    // 0x33d730: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x33D730u;
    {
        const bool branch_taken_0x33d730 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x33D734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D730u;
        // 0x33d734: 0xae622b98  sw          $v0, 0x2B98($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 11160), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d730) {
            ctx->pc = 0x33D73Cu;
            goto label_33d73c;
        }
    }
    ctx->pc = 0x33D738u;
    // 0x33d738: 0xae602b98  sw          $zero, 0x2B98($s3)
    ctx->pc = 0x33d738u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 11160), GPR_U32(ctx, 0));
label_33d73c:
    // 0x33d73c: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x33d73cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x33d740: 0x27c4d1e0  addiu       $a0, $fp, -0x2E20
    ctx->pc = 0x33d740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4294955488));
    // 0x33d744: 0x2852818  mult        $a1, $s4, $a1
    ctx->pc = 0x33d744u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x33d748: 0x24840014  addiu       $a0, $a0, 0x14
    ctx->pc = 0x33d748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    // 0x33d74c: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x33d74cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33d750: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x33d750u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x33d754: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x33d754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x33d758: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x33d758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x33d75c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x33d75cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_33d760:
    // 0x33d760: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x33d760u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x33d764: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x33d764u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x33d768: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x33d768u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x33d76c: 0x7bb300c0  lq          $s3, 0xC0($sp)
    ctx->pc = 0x33d76cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x33d770: 0x7bb400d0  lq          $s4, 0xD0($sp)
    ctx->pc = 0x33d770u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x33d774: 0x7bb500e0  lq          $s5, 0xE0($sp)
    ctx->pc = 0x33d774u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x33d778: 0x7bb600f0  lq          $s6, 0xF0($sp)
    ctx->pc = 0x33d778u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x33d77c: 0x7bb70100  lq          $s7, 0x100($sp)
    ctx->pc = 0x33d77cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x33d780: 0x7bbe0110  lq          $fp, 0x110($sp)
    ctx->pc = 0x33d780u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x33d784: 0xdfbf0120  ld          $ra, 0x120($sp)
    ctx->pc = 0x33d784u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x33d788: 0xc7ba0160  lwc1        $f26, 0x160($sp)
    ctx->pc = 0x33d788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x33d78c: 0xc7b90158  lwc1        $f25, 0x158($sp)
    ctx->pc = 0x33d78cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x33d790: 0xc7b80150  lwc1        $f24, 0x150($sp)
    ctx->pc = 0x33d790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x33d794: 0xc7b70148  lwc1        $f23, 0x148($sp)
    ctx->pc = 0x33d794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x33d798: 0xc7b60140  lwc1        $f22, 0x140($sp)
    ctx->pc = 0x33d798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x33d79c: 0xc7b50138  lwc1        $f21, 0x138($sp)
    ctx->pc = 0x33d79cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x33d7a0: 0xc7b40130  lwc1        $f20, 0x130($sp)
    ctx->pc = 0x33d7a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x33d7a4: 0x3e00008  jr          $ra
    ctx->pc = 0x33D7A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33D7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D7A4u;
        // 0x33d7a8: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33D7A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33D7ACu;
    // 0x33d7ac: 0x0  nop
    ctx->pc = 0x33d7acu;
    // NOP
    ctx->pc = 0x33d7b0u;
}
