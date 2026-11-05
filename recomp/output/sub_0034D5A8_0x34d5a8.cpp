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

// Function: sub_0034D5A8
// Address: 0x34d5a8 - 0x34d940
void sub_0034D5A8_0x34d5a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034D5A8_0x34d5a8");
#endif

    switch (ctx->pc) {
        case 0x34d604u: goto label_34d604;
        case 0x34d620u: goto label_34d620;
        case 0x34d638u: goto label_34d638;
        case 0x34d650u: goto label_34d650;
        case 0x34d668u: goto label_34d668;
        case 0x34d670u: goto label_34d670;
        case 0x34d68cu: goto label_34d68c;
        case 0x34d694u: goto label_34d694;
        case 0x34d6b0u: goto label_34d6b0;
        case 0x34d760u: goto label_34d760;
        case 0x34d768u: goto label_34d768;
        case 0x34d850u: goto label_34d850;
        case 0x34d898u: goto label_34d898;
        case 0x34d8b4u: goto label_34d8b4;
        default: break;
    }

    ctx->pc = 0x34d5a8u;

    // 0x34d5a8: 0x27bdfe40  addiu       $sp, $sp, -0x1C0
    ctx->pc = 0x34d5a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966848));
    // 0x34d5ac: 0xffb00130  sd          $s0, 0x130($sp)
    ctx->pc = 0x34d5acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 16));
    // 0x34d5b0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x34d5b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d5b4: 0xffb10138  sd          $s1, 0x138($sp)
    ctx->pc = 0x34d5b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 312), GPR_U64(ctx, 17));
    // 0x34d5b8: 0xffb20140  sd          $s2, 0x140($sp)
    ctx->pc = 0x34d5b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 18));
    // 0x34d5bc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x34d5bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d5c0: 0xffb30148  sd          $s3, 0x148($sp)
    ctx->pc = 0x34d5c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 328), GPR_U64(ctx, 19));
    // 0x34d5c4: 0xffb40150  sd          $s4, 0x150($sp)
    ctx->pc = 0x34d5c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 20));
    // 0x34d5c8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x34d5c8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d5cc: 0xffb50158  sd          $s5, 0x158($sp)
    ctx->pc = 0x34d5ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 344), GPR_U64(ctx, 21));
    // 0x34d5d0: 0xffb60160  sd          $s6, 0x160($sp)
    ctx->pc = 0x34d5d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 22));
    // 0x34d5d4: 0xffb70168  sd          $s7, 0x168($sp)
    ctx->pc = 0x34d5d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 360), GPR_U64(ctx, 23));
    // 0x34d5d8: 0xffbe0170  sd          $fp, 0x170($sp)
    ctx->pc = 0x34d5d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 30));
    // 0x34d5dc: 0xe7bb01b8  swc1        $f27, 0x1B8($sp)
    ctx->pc = 0x34d5dcu;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 440), bits); }
    // 0x34d5e0: 0xe7ba01b0  swc1        $f26, 0x1B0($sp)
    ctx->pc = 0x34d5e0u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 432), bits); }
    // 0x34d5e4: 0xe7b901a8  swc1        $f25, 0x1A8($sp)
    ctx->pc = 0x34d5e4u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 424), bits); }
    // 0x34d5e8: 0xe7b801a0  swc1        $f24, 0x1A0($sp)
    ctx->pc = 0x34d5e8u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
    // 0x34d5ec: 0xe7b70198  swc1        $f23, 0x198($sp)
    ctx->pc = 0x34d5ecu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 408), bits); }
    // 0x34d5f0: 0xffbf0178  sd          $ra, 0x178($sp)
    ctx->pc = 0x34d5f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 376), GPR_U64(ctx, 31));
    // 0x34d5f4: 0xe7b60190  swc1        $f22, 0x190($sp)
    ctx->pc = 0x34d5f4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
    // 0x34d5f8: 0xe7b50188  swc1        $f21, 0x188($sp)
    ctx->pc = 0x34d5f8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
    // 0x34d5fc: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x34D5FCu;
    SET_GPR_U32(ctx, 31, 0x34D604u);
    ctx->pc = 0x34D600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34D5FCu;
    // 0x34d600: 0xe7b40180  swc1        $f20, 0x180($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x34D5FCu, 0x34D604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D604u;
label_34d604:
    // 0x34d604: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x34d604u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x34d608: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x34d608u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x34d60c: 0x4481d800  mtc1        $at, $f27
    ctx->pc = 0x34d60cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[27], &bits, sizeof(bits)); }
    // 0x34d610: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x34d610u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x34d614: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x34d614u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x34d618: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x34D618u;
    SET_GPR_U32(ctx, 31, 0x34D620u);
    ctx->pc = 0x34D61Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34D618u;
    // 0x34d61c: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x34D618u, 0x34D620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D620u;
label_34d620:
    // 0x34d620: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x34d620u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x34d624: 0x4481d000  mtc1        $at, $f26
    ctx->pc = 0x34d624u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[26], &bits, sizeof(bits)); }
    // 0x34d628: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x34d628u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x34d62c: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x34d62cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x34d630: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x34D630u;
    SET_GPR_U32(ctx, 31, 0x34D638u);
    ctx->pc = 0x34D634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34D630u;
    // 0x34d634: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x34D630u, 0x34D638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D638u;
label_34d638:
    // 0x34d638: 0x3c013cf5  lui         $at, 0x3CF5
    ctx->pc = 0x34d638u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15605 << 16));
    // 0x34d63c: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x34d63cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x34d640: 0x4481c800  mtc1        $at, $f25
    ctx->pc = 0x34d640u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
    // 0x34d644: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x34d644u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x34d648: 0xc07a8b2  jal         func_1EA2C8
    ctx->pc = 0x34D648u;
    SET_GPR_U32(ctx, 31, 0x34D650u);
    ctx->pc = 0x34D64Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34D648u;
    // 0x34d64c: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA2C8u, 0x34D648u, 0x34D650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D650u;
label_34d650:
    // 0x34d650: 0x27b10090  addiu       $s1, $sp, 0x90
    ctx->pc = 0x34d650u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x34d654: 0x27be00a0  addiu       $fp, $sp, 0xA0
    ctx->pc = 0x34d654u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x34d658: 0x27b200f0  addiu       $s2, $sp, 0xF0
    ctx->pc = 0x34d658u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x34d65c: 0x27b700e0  addiu       $s7, $sp, 0xE0
    ctx->pc = 0x34d65cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x34d660: 0x27b600d0  addiu       $s6, $sp, 0xD0
    ctx->pc = 0x34d660u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x34d664: 0x220a02d  daddu       $s4, $s1, $zero
    ctx->pc = 0x34d664u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_34d668:
    // 0x34d668: 0xc0dc10e  jal         func_370438
    ctx->pc = 0x34D668u;
    SET_GPR_U32(ctx, 31, 0x34D670u);
    ctx->pc = 0x34D66Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34D668u;
    // 0x34d66c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x370438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x370438u, 0x34D668u, 0x34D670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D670u;
label_34d670:
    // 0x34d670: 0x3c0140c8  lui         $at, 0x40C8
    ctx->pc = 0x34d670u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16584 << 16));
    // 0x34d674: 0x3421f5c3  ori         $at, $at, 0xF5C3
    ctx->pc = 0x34d674u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62915);
    // 0x34d678: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x34d678u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x34d67c: 0x0  nop
    ctx->pc = 0x34d67cu;
    // NOP
    // 0x34d680: 0x46010542  mul.s       $f21, $f0, $f1
    ctx->pc = 0x34d680u;
    ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x34d684: 0xc0e3f98  jal         func_38FE60
    ctx->pc = 0x34D684u;
    SET_GPR_U32(ctx, 31, 0x34D68Cu);
    ctx->pc = 0x34D688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34D684u;
    // 0x34d688: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FE60u, 0x34D684u, 0x34D68Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D68Cu;
label_34d68c:
    // 0x34d68c: 0xc0dc10e  jal         func_370438
    ctx->pc = 0x34D68Cu;
    SET_GPR_U32(ctx, 31, 0x34D694u);
    ctx->pc = 0x34D690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34D68Cu;
    // 0x34d690: 0x46000586  mov.s       $f22, $f0 (Delay Slot)
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x370438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x370438u, 0x34D68Cu, 0x34D694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D694u;
label_34d694:
    // 0x34d694: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x34d694u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
    // 0x34d698: 0x3421ccce  ori         $at, $at, 0xCCCE
    ctx->pc = 0x34d698u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52430);
    // 0x34d69c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x34d69cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x34d6a0: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x34d6a0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x34d6a4: 0x46010502  mul.s       $f20, $f0, $f1
    ctx->pc = 0x34d6a4u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x34d6a8: 0xc0e3f1c  jal         func_38FC70
    ctx->pc = 0x34D6A8u;
    SET_GPR_U32(ctx, 31, 0x34D6B0u);
    ctx->pc = 0x34D6ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34D6A8u;
    // 0x34d6ac: 0x461ba500  add.s       $f20, $f20, $f27 (Delay Slot)
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[27]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FC70u, 0x34D6A8u, 0x34D6B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D6B0u;
label_34d6b0:
    // 0x34d6b0: 0xe7b60090  swc1        $f22, 0x90($sp)
    ctx->pc = 0x34d6b0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x34d6b4: 0xe7b40094  swc1        $f20, 0x94($sp)
    ctx->pc = 0x34d6b4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x34d6b8: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x34d6b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x34d6bc: 0xafa0009c  sw          $zero, 0x9C($sp)
    ctx->pc = 0x34d6bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 0));
    // 0x34d6c0: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x34d6c0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x34d6c4: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x34d6c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x34d6c8: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x34d6c8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34d6cc: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x34d6ccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x34d6d0: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x34d6d0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x34d6d4: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x34d6d4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x34d6d8: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x34d6d8u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x34d6dc: 0x4a0003bf  vwaitq
    ctx->pc = 0x34d6dcu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x34d6e0: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x34d6e0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x34d6e4: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x34d6e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x34d6e8: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x34d6e8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x34d6ec: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x34d6ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x34d6f0: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x34d6f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34d6f4: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x34d6f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34d6f8: 0xc7a30008  lwc1        $f3, 0x8($sp)
    ctx->pc = 0x34d6f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x34d6fc: 0x46170842  mul.s       $f1, $f1, $f23
    ctx->pc = 0x34d6fcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[23]);
    // 0x34d700: 0xc7a0000c  lwc1        $f0, 0xC($sp)
    ctx->pc = 0x34d700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34d704: 0x46171082  mul.s       $f2, $f2, $f23
    ctx->pc = 0x34d704u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[23]);
    // 0x34d708: 0x461718c2  mul.s       $f3, $f3, $f23
    ctx->pc = 0x34d708u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[23]);
    // 0x34d70c: 0x46170002  mul.s       $f0, $f0, $f23
    ctx->pc = 0x34d70cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
    // 0x34d710: 0xe7a100a0  swc1        $f1, 0xA0($sp)
    ctx->pc = 0x34d710u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x34d714: 0xe7a200a4  swc1        $f2, 0xA4($sp)
    ctx->pc = 0x34d714u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x34d718: 0xe7a300a8  swc1        $f3, 0xA8($sp)
    ctx->pc = 0x34d718u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x34d71c: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x34d71cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x34d720: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x34d720u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x34d724: 0xdbc20000  lqc2        $vf2, 0x0($fp)
    ctx->pc = 0x34d724u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x34d728: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x34d728u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x34d72c: 0xfba100b0  sqc2        $vf1, 0xB0($sp)
    ctx->pc = 0x34d72cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x34d730: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x34d730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34d734: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x34d734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34d738: 0xc7a200b8  lwc1        $f2, 0xB8($sp)
    ctx->pc = 0x34d738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34d73c: 0xc7a300bc  lwc1        $f3, 0xBC($sp)
    ctx->pc = 0x34d73cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x34d740: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x34d740u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x34d744: 0xe7a10094  swc1        $f1, 0x94($sp)
    ctx->pc = 0x34d744u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x34d748: 0xe7a20098  swc1        $f2, 0x98($sp)
    ctx->pc = 0x34d748u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x34d74c: 0xe7a3009c  swc1        $f3, 0x9C($sp)
    ctx->pc = 0x34d74cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x34d750: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x34d750u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x34d754: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x34d754u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x34d758: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x34D758u;
    SET_GPR_U32(ctx, 31, 0x34D760u);
    ctx->pc = 0x34D75Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34D758u;
    // 0x34d75c: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x34D758u, 0x34D760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D760u;
label_34d760:
    // 0x34d760: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x34D760u;
    SET_GPR_U32(ctx, 31, 0x34D768u);
    ctx->pc = 0x34D764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34D760u;
    // 0x34d764: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x34D760u, 0x34D768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D768u;
label_34d768:
    // 0x34d768: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x34d768u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34d76c: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x34d76cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34d770: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x34d770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
    // 0x34d774: 0x7fa300e0  sq          $v1, 0xE0($sp)
    ctx->pc = 0x34d774u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 3));
    // 0x34d778: 0xdae10000  lqc2        $vf1, 0x0($s7)
    ctx->pc = 0x34d778u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x34d77c: 0xdac20000  lqc2        $vf2, 0x0($s6)
    ctx->pc = 0x34d77cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x34d780: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x34d780u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x34d784: 0xfba100f0  sqc2        $vf1, 0xF0($sp)
    ctx->pc = 0x34d784u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x34d788: 0xc6420000  lwc1        $f2, 0x0($s2)
    ctx->pc = 0x34d788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34d78c: 0xc6430004  lwc1        $f3, 0x4($s2)
    ctx->pc = 0x34d78cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x34d790: 0xc6440008  lwc1        $f4, 0x8($s2)
    ctx->pc = 0x34d790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x34d794: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x34d794u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x34d798: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x34d798u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x34d79c: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x34d79cu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x34d7a0: 0x0  nop
    ctx->pc = 0x34d7a0u;
    // NOP
    // 0x34d7a4: 0x0  nop
    ctx->pc = 0x34d7a4u;
    // NOP
    // 0x34d7a8: 0x46000044  c1          0x44
    ctx->pc = 0x34d7a8u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x34d7ac: 0xe7a00114  swc1        $f0, 0x114($sp)
    ctx->pc = 0x34d7acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
    // 0x34d7b0: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x34d7b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x34d7b4: 0x0  nop
    ctx->pc = 0x34d7b4u;
    // NOP
    // 0x34d7b8: 0x4601a834  c.lt.s      $f21, $f1
    ctx->pc = 0x34d7b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34d7bc: 0x0  nop
    ctx->pc = 0x34d7bcu;
    // NOP
    // 0x34d7c0: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x34D7C0u;
    {
        const bool branch_taken_0x34d7c0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x34D7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34D7C0u;
        // 0x34d7c4: 0xe7a10110  swc1        $f1, 0x110($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34d7c0) {
            ctx->pc = 0x34D7E8u;
            goto label_34d7e8;
        }
    }
    ctx->pc = 0x34D7C8u;
    // 0x34d7c8: 0x0  nop
    ctx->pc = 0x34d7c8u;
    // NOP
    // 0x34d7cc: 0x0  nop
    ctx->pc = 0x34d7ccu;
    // NOP
    // 0x34d7d0: 0x4601d003  div.s       $f0, $f26, $f1
    ctx->pc = 0x34d7d0u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[26], ctx->f[1]); }
    // 0x34d7d4: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x34d7d4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x34d7d8: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x34d7d8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x34d7dc: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x34d7dcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x34d7e0: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x34d7e0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x34d7e4: 0xfba10100  sqc2        $vf1, 0x100($sp)
    ctx->pc = 0x34d7e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), _mm_castps_si128(ctx->vu0_vf[1]));
label_34d7e8:
    // 0x34d7e8: 0x7fa00030  sq          $zero, 0x30($sp)
    ctx->pc = 0x34d7e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 0));
    // 0x34d7ec: 0x7fa00040  sq          $zero, 0x40($sp)
    ctx->pc = 0x34d7ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 0));
    // 0x34d7f0: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x34d7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x34d7f4: 0x3c01447a  lui         $at, 0x447A
    ctx->pc = 0x34d7f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17530 << 16));
    // 0x34d7f8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x34d7f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x34d7fc: 0xc440664c  lwc1        $f0, 0x664C($v0)
    ctx->pc = 0x34d7fcu;
    { uint32_t bits = FAST_READ32(0x47664Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34d800: 0x2a63000b  slti        $v1, $s3, 0xB
    ctx->pc = 0x34d800u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x34d804: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x34d804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x34d808: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x34d808u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x34d80c: 0xaea20044  sw          $v0, 0x44($s5)
    ctx->pc = 0x34d80cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 68), GPR_U32(ctx, 2));
    // 0x34d810: 0xe7a10120  swc1        $f1, 0x120($sp)
    ctx->pc = 0x34d810u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x34d814: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x34d814u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    // 0x34d818: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x34d818u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
    // 0x34d81c: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x34d81cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
    // 0x34d820: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x34d820u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
    // 0x34d824: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x34d824u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
    // 0x34d828: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x34d828u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
    // 0x34d82c: 0xafa0006c  sw          $zero, 0x6C($sp)
    ctx->pc = 0x34d82cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
    // 0x34d830: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x34d830u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
    // 0x34d834: 0xafa00080  sw          $zero, 0x80($sp)
    ctx->pc = 0x34d834u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
    // 0x34d838: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x34D838u;
    {
        const bool branch_taken_0x34d838 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x34D83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34D838u;
        // 0x34d83c: 0xafa00078  sw          $zero, 0x78($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34d838) {
            ctx->pc = 0x34D858u;
            goto label_34d858;
        }
    }
    ctx->pc = 0x34D840u;
    // 0x34d840: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x34d840u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x34d844: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x34d844u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34d848: 0xc077824  jal         func_1DE090
    ctx->pc = 0x34D848u;
    SET_GPR_U32(ctx, 31, 0x34D850u);
    ctx->pc = 0x34D84Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34D848u;
    // 0x34d84c: 0x27a60120  addiu       $a2, $sp, 0x120 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE090u, 0x34D848u, 0x34D850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D850u;
label_34d850:
    // 0x34d850: 0x1440ff85  bnez        $v0, . + 4 + (-0x7B << 2)
    ctx->pc = 0x34D850u;
    {
        const bool branch_taken_0x34d850 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34d850) {
            ctx->pc = 0x34D668u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34d668;
        }
    }
    ctx->pc = 0x34D858u;
label_34d858:
    // 0x34d858: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x34d858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34d85c: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x34d85cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x34d860: 0xc7a30008  lwc1        $f3, 0x8($sp)
    ctx->pc = 0x34d860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x34d864: 0x46180842  mul.s       $f1, $f1, $f24
    ctx->pc = 0x34d864u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[24]);
    // 0x34d868: 0xc7a0000c  lwc1        $f0, 0xC($sp)
    ctx->pc = 0x34d868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34d86c: 0x46181082  mul.s       $f2, $f2, $f24
    ctx->pc = 0x34d86cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[24]);
    // 0x34d870: 0x461818c2  mul.s       $f3, $f3, $f24
    ctx->pc = 0x34d870u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[24]);
    // 0x34d874: 0x46180002  mul.s       $f0, $f0, $f24
    ctx->pc = 0x34d874u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[24]);
    // 0x34d878: 0xe7a10090  swc1        $f1, 0x90($sp)
    ctx->pc = 0x34d878u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x34d87c: 0xe7a20094  swc1        $f2, 0x94($sp)
    ctx->pc = 0x34d87cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x34d880: 0xe7a30098  swc1        $f3, 0x98($sp)
    ctx->pc = 0x34d880u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x34d884: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x34d884u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x34d888: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x34d888u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x34d88c: 0xfa010020  sqc2        $vf1, 0x20($s0)
    ctx->pc = 0x34d88cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x34d890: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x34D890u;
    SET_GPR_U32(ctx, 31, 0x34D898u);
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x34D890u, 0x34D898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D898u;
label_34d898:
    // 0x34d898: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x34d898u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x34d89c: 0x2442ff80  addiu       $v0, $v0, -0x80
    ctx->pc = 0x34d89cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967168));
    // 0x34d8a0: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x34d8a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x34d8a4: 0x0  nop
    ctx->pc = 0x34d8a4u;
    // NOP
    // 0x34d8a8: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x34d8a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x34d8ac: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x34D8ACu;
    SET_GPR_U32(ctx, 31, 0x34D8B4u);
    ctx->pc = 0x34D8B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34D8ACu;
    // 0x34d8b0: 0x4619a502  mul.s       $f20, $f20, $f25 (Delay Slot)
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[25]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x34D8ACu, 0x34D8B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34D8B4u;
label_34d8b4:
    // 0x34d8b4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x34d8b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x34d8b8: 0x2442ff80  addiu       $v0, $v0, -0x80
    ctx->pc = 0x34d8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967168));
    // 0x34d8bc: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x34d8bcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x34d8c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34d8c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34d8c4: 0x0  nop
    ctx->pc = 0x34d8c4u;
    // NOP
    // 0x34d8c8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x34d8c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x34d8cc: 0xe63a0004  swc1        $f26, 0x4($s1)
    ctx->pc = 0x34d8ccu;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x34d8d0: 0xe7b5009c  swc1        $f21, 0x9C($sp)
    ctx->pc = 0x34d8d0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x34d8d4: 0x46190002  mul.s       $f0, $f0, $f25
    ctx->pc = 0x34d8d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[25]);
    // 0x34d8d8: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x34d8d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x34d8dc: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x34d8dcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x34d8e0: 0xfa010010  sqc2        $vf1, 0x10($s0)
    ctx->pc = 0x34d8e0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x34d8e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x34d8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34d8e8: 0xdfb10138  ld          $s1, 0x138($sp)
    ctx->pc = 0x34d8e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x34d8ec: 0xa2020044  sb          $v0, 0x44($s0)
    ctx->pc = 0x34d8ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 68), (uint8_t)GPR_U32(ctx, 2));
    // 0x34d8f0: 0xdfb00130  ld          $s0, 0x130($sp)
    ctx->pc = 0x34d8f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x34d8f4: 0xdfb20140  ld          $s2, 0x140($sp)
    ctx->pc = 0x34d8f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x34d8f8: 0xdfb30148  ld          $s3, 0x148($sp)
    ctx->pc = 0x34d8f8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x34d8fc: 0xdfb40150  ld          $s4, 0x150($sp)
    ctx->pc = 0x34d8fcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x34d900: 0xdfb50158  ld          $s5, 0x158($sp)
    ctx->pc = 0x34d900u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x34d904: 0xdfb60160  ld          $s6, 0x160($sp)
    ctx->pc = 0x34d904u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x34d908: 0xdfb70168  ld          $s7, 0x168($sp)
    ctx->pc = 0x34d908u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x34d90c: 0xdfbe0170  ld          $fp, 0x170($sp)
    ctx->pc = 0x34d90cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x34d910: 0xdfbf0178  ld          $ra, 0x178($sp)
    ctx->pc = 0x34d910u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x34d914: 0xc7bb01b8  lwc1        $f27, 0x1B8($sp)
    ctx->pc = 0x34d914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x34d918: 0xc7ba01b0  lwc1        $f26, 0x1B0($sp)
    ctx->pc = 0x34d918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x34d91c: 0xc7b901a8  lwc1        $f25, 0x1A8($sp)
    ctx->pc = 0x34d91cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x34d920: 0xc7b801a0  lwc1        $f24, 0x1A0($sp)
    ctx->pc = 0x34d920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x34d924: 0xc7b70198  lwc1        $f23, 0x198($sp)
    ctx->pc = 0x34d924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x34d928: 0xc7b60190  lwc1        $f22, 0x190($sp)
    ctx->pc = 0x34d928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x34d92c: 0xc7b50188  lwc1        $f21, 0x188($sp)
    ctx->pc = 0x34d92cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x34d930: 0xc7b40180  lwc1        $f20, 0x180($sp)
    ctx->pc = 0x34d930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x34d934: 0x3e00008  jr          $ra
    ctx->pc = 0x34D934u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34D938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34D934u;
        // 0x34d938: 0x27bd01c0  addiu       $sp, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34D934u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34D93Cu;
    // 0x34d93c: 0x0  nop
    ctx->pc = 0x34d93cu;
    // NOP
    ctx->pc = 0x34d940u;
}
