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

// Function: sub_002350B0
// Address: 0x2350b0 - 0x235d60
void sub_002350B0_0x2350b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002350B0_0x2350b0");
#endif

    switch (ctx->pc) {
        case 0x235128u: goto label_235128;
        case 0x235134u: goto label_235134;
        case 0x235140u: goto label_235140;
        case 0x235148u: goto label_235148;
        case 0x235150u: goto label_235150;
        case 0x2351b0u: goto label_2351b0;
        case 0x2351c4u: goto label_2351c4;
        case 0x235228u: goto label_235228;
        case 0x235260u: goto label_235260;
        case 0x235274u: goto label_235274;
        case 0x2353b4u: goto label_2353b4;
        case 0x2354d0u: goto label_2354d0;
        case 0x235510u: goto label_235510;
        case 0x235688u: goto label_235688;
        case 0x235694u: goto label_235694;
        case 0x23569cu: goto label_23569c;
        case 0x2356a4u: goto label_2356a4;
        case 0x2356b0u: goto label_2356b0;
        case 0x2356c0u: goto label_2356c0;
        case 0x235920u: goto label_235920;
        case 0x23597cu: goto label_23597c;
        case 0x235c70u: goto label_235c70;
        case 0x235c78u: goto label_235c78;
        case 0x235cb4u: goto label_235cb4;
        case 0x235ce8u: goto label_235ce8;
        case 0x235cfcu: goto label_235cfc;
        default: break;
    }

    ctx->pc = 0x2350b0u;

    // 0x2350b0: 0x27bdfe10  addiu       $sp, $sp, -0x1F0
    ctx->pc = 0x2350b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966800));
    // 0x2350b4: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x2350b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x2350b8: 0xffbe0180  sd          $fp, 0x180($sp)
    ctx->pc = 0x2350b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 384), GPR_U64(ctx, 30));
    // 0x2350bc: 0xffb20150  sd          $s2, 0x150($sp)
    ctx->pc = 0x2350bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 18));
    // 0x2350c0: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x2350c0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2350c4: 0xe7bc01d0  swc1        $f28, 0x1D0($sp)
    ctx->pc = 0x2350c4u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 464), bits); }
    // 0x2350c8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2350c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2350cc: 0xffb00140  sd          $s0, 0x140($sp)
    ctx->pc = 0x2350ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 16));
    // 0x2350d0: 0x46006706  mov.s       $f28, $f12
    ctx->pc = 0x2350d0u;
    ctx->f[28] = FPU_MOV_S(ctx->f[12]);
    // 0x2350d4: 0xffb30158  sd          $s3, 0x158($sp)
    ctx->pc = 0x2350d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 344), GPR_U64(ctx, 19));
    // 0x2350d8: 0x245245c0  addiu       $s2, $v0, 0x45C0
    ctx->pc = 0x2350d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 17856));
    // 0x2350dc: 0xffb10148  sd          $s1, 0x148($sp)
    ctx->pc = 0x2350dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 328), GPR_U64(ctx, 17));
    // 0x2350e0: 0x3c100057  lui         $s0, 0x57
    ctx->pc = 0x2350e0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)87 << 16));
    // 0x2350e4: 0xffb40160  sd          $s4, 0x160($sp)
    ctx->pc = 0x2350e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 20));
    // 0x2350e8: 0xffb50168  sd          $s5, 0x168($sp)
    ctx->pc = 0x2350e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 360), GPR_U64(ctx, 21));
    // 0x2350ec: 0xffb60170  sd          $s6, 0x170($sp)
    ctx->pc = 0x2350ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 22));
    // 0x2350f0: 0xffb70178  sd          $s7, 0x178($sp)
    ctx->pc = 0x2350f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 376), GPR_U64(ctx, 23));
    // 0x2350f4: 0xffbf0188  sd          $ra, 0x188($sp)
    ctx->pc = 0x2350f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 392), GPR_U64(ctx, 31));
    // 0x2350f8: 0xe7bf01e8  swc1        $f31, 0x1E8($sp)
    ctx->pc = 0x2350f8u;
    { float f = ctx->f[31]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 488), bits); }
    // 0x2350fc: 0xe7be01e0  swc1        $f30, 0x1E0($sp)
    ctx->pc = 0x2350fcu;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 480), bits); }
    // 0x235100: 0xe7bd01d8  swc1        $f29, 0x1D8($sp)
    ctx->pc = 0x235100u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 472), bits); }
    // 0x235104: 0xe7bb01c8  swc1        $f27, 0x1C8($sp)
    ctx->pc = 0x235104u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 456), bits); }
    // 0x235108: 0xe7ba01c0  swc1        $f26, 0x1C0($sp)
    ctx->pc = 0x235108u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 448), bits); }
    // 0x23510c: 0xe7b901b8  swc1        $f25, 0x1B8($sp)
    ctx->pc = 0x23510cu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 440), bits); }
    // 0x235110: 0xe7b801b0  swc1        $f24, 0x1B0($sp)
    ctx->pc = 0x235110u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 432), bits); }
    // 0x235114: 0xe7b701a8  swc1        $f23, 0x1A8($sp)
    ctx->pc = 0x235114u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 424), bits); }
    // 0x235118: 0xe7b601a0  swc1        $f22, 0x1A0($sp)
    ctx->pc = 0x235118u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
    // 0x23511c: 0xe7b50198  swc1        $f21, 0x198($sp)
    ctx->pc = 0x23511cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 408), bits); }
    // 0x235120: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x235120u;
    SET_GPR_U32(ctx, 31, 0x235128u);
    ctx->pc = 0x235124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235120u;
    // 0x235124: 0xe7b40190  swc1        $f20, 0x190($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x235120u, 0x235128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235128u;
label_235128:
    // 0x235128: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x235128u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x23512c: 0xc0b2af0  jal         func_2CABC0
    ctx->pc = 0x23512Cu;
    SET_GPR_U32(ctx, 31, 0x235134u);
    ctx->pc = 0x235130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23512Cu;
    // 0x235130: 0x26045ad0  addiu       $a0, $s0, 0x5AD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 23248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CABC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CABC0u, 0x23512Cu, 0x235134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235134u;
label_235134:
    // 0x235134: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x235134u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235138: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x235138u;
    SET_GPR_U32(ctx, 31, 0x235140u);
    ctx->pc = 0x23513Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235138u;
    // 0x23513c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x235138u, 0x235140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235140u;
label_235140:
    // 0x235140: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x235140u;
    SET_GPR_U32(ctx, 31, 0x235148u);
    ctx->pc = 0x235144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235140u;
    // 0x235144: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x235140u, 0x235148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235148u;
label_235148:
    // 0x235148: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x235148u;
    SET_GPR_U32(ctx, 31, 0x235150u);
    ctx->pc = 0x23514Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235148u;
    // 0x23514c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x235148u, 0x235150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235150u;
label_235150:
    // 0x235150: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x235150u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x235154: 0x8c422b40  lw          $v0, 0x2B40($v0)
    ctx->pc = 0x235154u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x482B40u));
    // 0x235158: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x235158u;
    {
        const bool branch_taken_0x235158 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x23515Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235158u;
        // 0x23515c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235158) {
            ctx->pc = 0x235174u;
            goto label_235174;
        }
    }
    ctx->pc = 0x235160u;
    // 0x235160: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x235160u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x235164: 0x0  nop
    ctx->pc = 0x235164u;
    // NOP
    // 0x235168: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x235168u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x23516c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x23516Cu;
    {
        const bool branch_taken_0x23516c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23516c) {
            ctx->pc = 0x23518Cu;
            goto label_23518c;
        }
    }
    ctx->pc = 0x235174u;
label_235174:
    // 0x235174: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x235174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x235178: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x235178u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x23517c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x23517cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x235180: 0x0  nop
    ctx->pc = 0x235180u;
    // NOP
    // 0x235184: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x235184u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x235188: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x235188u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_23518c:
    // 0x23518c: 0x3c013cf5  lui         $at, 0x3CF5
    ctx->pc = 0x23518cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15605 << 16));
    // 0x235190: 0x3421c330  ori         $at, $at, 0xC330
    ctx->pc = 0x235190u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49968);
    // 0x235194: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x235194u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x235198: 0x92420089  lbu         $v0, 0x89($s2)
    ctx->pc = 0x235198u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 137)));
    // 0x23519c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x23519Cu;
    {
        const bool branch_taken_0x23519c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2351A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23519Cu;
        // 0x2351a0: 0x46000ec2  mul.s       $f27, $f1, $f0 (Delay Slot)
        ctx->f[27] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23519c) {
            ctx->pc = 0x2351DCu;
            goto label_2351dc;
        }
    }
    ctx->pc = 0x2351A4u;
    // 0x2351a4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2351a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2351a8: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x2351A8u;
    SET_GPR_U32(ctx, 31, 0x2351B0u);
    ctx->pc = 0x2351ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2351A8u;
    // 0x2351ac: 0x3c100040  lui         $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2351A8u, 0x2351B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2351B0u;
label_2351b0:
    // 0x2351b0: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x2351b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2351b4: 0x8e04bd50  lw          $a0, -0x42B0($s0)
    ctx->pc = 0x2351b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950224)));
    // 0x2351b8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2351b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2351bc: 0xc0bcd36  jal         func_2F34D8
    ctx->pc = 0x2351BCu;
    SET_GPR_U32(ctx, 31, 0x2351C4u);
    ctx->pc = 0x2351C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2351BCu;
    // 0x2351c0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F34D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F34D8u, 0x2351BCu, 0x2351C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2351C4u;
label_2351c4:
    // 0x2351c4: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2351C4u;
    {
        const bool branch_taken_0x2351c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2351C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2351C4u;
        // 0x2351c8: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2351c4) {
            ctx->pc = 0x235220u;
            goto label_235220;
        }
    }
    ctx->pc = 0x2351CCu;
    // 0x2351cc: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x2351ccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2351d0: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x2351d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2351d4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2351D4u;
    {
        const bool branch_taken_0x2351d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2351D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2351D4u;
        // 0x2351d8: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2351d4) {
            ctx->pc = 0x235220u;
            goto label_235220;
        }
    }
    ctx->pc = 0x2351DCu;
label_2351dc:
    // 0x2351dc: 0x8fc2032c  lw          $v0, 0x32C($fp)
    ctx->pc = 0x2351dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 812)));
    // 0x2351e0: 0x104002c7  beqz        $v0, . + 4 + (0x2C7 << 2)
    ctx->pc = 0x2351E0u;
    {
        const bool branch_taken_0x2351e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2351E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2351E0u;
        // 0x2351e4: 0xdfb00140  ld          $s0, 0x140($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2351e0) {
            ctx->pc = 0x235D00u;
            goto label_235d00;
        }
    }
    ctx->pc = 0x2351E8u;
    // 0x2351e8: 0x8c420104  lw          $v0, 0x104($v0)
    ctx->pc = 0x2351e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    // 0x2351ec: 0x104002c5  beqz        $v0, . + 4 + (0x2C5 << 2)
    ctx->pc = 0x2351ECu;
    {
        const bool branch_taken_0x2351ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2351F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2351ECu;
        // 0x2351f0: 0xdfb10148  ld          $s1, 0x148($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 328)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2351ec) {
            ctx->pc = 0x235D04u;
            goto label_235d04;
        }
    }
    ctx->pc = 0x2351F4u;
    // 0x2351f4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2351f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2351f8: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x2351f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x2351fc: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2351fcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x235200: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x235200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x235204: 0x26430020  addiu       $v1, $s2, 0x20
    ctx->pc = 0x235204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x235208: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x235208u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23520c: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x23520cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x235210: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x235210u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x235214: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x235214u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x235218: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x235218u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x23521c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x23521cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_235220:
    // 0x235220: 0xc08dab6  jal         func_236AD8
    ctx->pc = 0x235220u;
    SET_GPR_U32(ctx, 31, 0x235228u);
    ctx->pc = 0x235224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235220u;
    // 0x235224: 0x8c44bd50  lw          $a0, -0x42B0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236AD8u, 0x235220u, 0x235228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235228u;
label_235228:
    // 0x235228: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x235228u;
    {
        const bool branch_taken_0x235228 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x235228) {
            ctx->pc = 0x235274u;
            goto label_235274;
        }
    }
    ctx->pc = 0x235230u;
    // 0x235230: 0x8e4200a8  lw          $v0, 0xA8($s2)
    ctx->pc = 0x235230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 168)));
    // 0x235234: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x235234u;
    {
        const bool branch_taken_0x235234 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x235234) {
            ctx->pc = 0x235274u;
            goto label_235274;
        }
    }
    ctx->pc = 0x23523Cu;
    // 0x23523c: 0x92420089  lbu         $v0, 0x89($s2)
    ctx->pc = 0x23523cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 137)));
    // 0x235240: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x235240u;
    {
        const bool branch_taken_0x235240 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x235244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235240u;
        // 0x235244: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235240) {
            ctx->pc = 0x235268u;
            goto label_235268;
        }
    }
    ctx->pc = 0x235248u;
    // 0x235248: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x235248u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x23524c: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x23524cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235250: 0x8c64bd50  lw          $a0, -0x42B0($v1)
    ctx->pc = 0x235250u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3FBD50u));
    // 0x235254: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x235254u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235258: 0xc0bcd58  jal         func_2F3560
    ctx->pc = 0x235258u;
    SET_GPR_U32(ctx, 31, 0x235260u);
    ctx->pc = 0x23525Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235258u;
    // 0x23525c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F3560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F3560u, 0x235258u, 0x235260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235260u;
label_235260:
    // 0x235260: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x235260u;
    {
        const bool branch_taken_0x235260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x235260) {
            ctx->pc = 0x235274u;
            goto label_235274;
        }
    }
    ctx->pc = 0x235268u;
label_235268:
    // 0x235268: 0x8ca4bd50  lw          $a0, -0x42B0($a1)
    ctx->pc = 0x235268u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294950224)));
    // 0x23526c: 0xc0bcd36  jal         func_2F34D8
    ctx->pc = 0x23526Cu;
    SET_GPR_U32(ctx, 31, 0x235274u);
    ctx->pc = 0x235270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23526Cu;
    // 0x235270: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F34D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F34D8u, 0x23526Cu, 0x235274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235274u;
label_235274:
    // 0x235274: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x235274u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x235278: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x235278u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x23527c: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x23527cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x235280: 0xc642007c  lwc1        $f2, 0x7C($s2)
    ctx->pc = 0x235280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x235284: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x235284u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x235288: 0xc6430084  lwc1        $f3, 0x84($s2)
    ctx->pc = 0x235288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x23528c: 0x0  nop
    ctx->pc = 0x23528cu;
    // NOP
    // 0x235290: 0x0  nop
    ctx->pc = 0x235290u;
    // NOP
    // 0x235294: 0x46023083  div.s       $f2, $f6, $f2
    ctx->pc = 0x235294u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[6], ctx->f[2]); }
    // 0x235298: 0xc6410080  lwc1        $f1, 0x80($s2)
    ctx->pc = 0x235298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23529c: 0x4603e102  mul.s       $f4, $f28, $f3
    ctx->pc = 0x23529cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[28], ctx->f[3]);
    // 0x2352a0: 0xc6450050  lwc1        $f5, 0x50($s2)
    ctx->pc = 0x2352a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2352a4: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x2352a4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x2352a8: 0x92420088  lbu         $v0, 0x88($s2)
    ctx->pc = 0x2352a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 136)));
    // 0x2352ac: 0x4600e002  mul.s       $f0, $f28, $f0
    ctx->pc = 0x2352acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[28], ctx->f[0]);
    // 0x2352b0: 0x46040f41  sub.s       $f29, $f1, $f4
    ctx->pc = 0x2352b0u;
    ctx->f[29] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x2352b4: 0xe7a2011c  swc1        $f2, 0x11C($sp)
    ctx->pc = 0x2352b4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
    // 0x2352b8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2352B8u;
    {
        const bool branch_taken_0x2352b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2352BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2352B8u;
        // 0x2352bc: 0x46050680  add.s       $f26, $f0, $f5 (Delay Slot)
        ctx->f[26] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2352b8) {
            ctx->pc = 0x2352D4u;
            goto label_2352d4;
        }
    }
    ctx->pc = 0x2352C0u;
    // 0x2352c0: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x2352c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x2352c4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2352c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2352c8: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x2352c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x2352cc: 0x4481d000  mtc1        $at, $f26
    ctx->pc = 0x2352ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[26], &bits, sizeof(bits)); }
    // 0x2352d0: 0xe7a0011c  swc1        $f0, 0x11C($sp)
    ctx->pc = 0x2352d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
label_2352d4:
    // 0x2352d4: 0xc6400054  lwc1        $f0, 0x54($s2)
    ctx->pc = 0x2352d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2352d8: 0x461b0002  mul.s       $f0, $f0, $f27
    ctx->pc = 0x2352d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[27]);
    // 0x2352dc: 0x46002800  add.s       $f0, $f5, $f0
    ctx->pc = 0x2352dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
    // 0x2352e0: 0x46003034  c.lt.s      $f6, $f0
    ctx->pc = 0x2352e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2352e4: 0x0  nop
    ctx->pc = 0x2352e4u;
    // NOP
    // 0x2352e8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2352E8u;
    {
        const bool branch_taken_0x2352e8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2352ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2352E8u;
        // 0x2352ec: 0xe6400050  swc1        $f0, 0x50($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 80), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2352e8) {
            ctx->pc = 0x2352F8u;
            goto label_2352f8;
        }
    }
    ctx->pc = 0x2352F0u;
    // 0x2352f0: 0x46060001  sub.s       $f0, $f0, $f6
    ctx->pc = 0x2352f0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[6]);
    // 0x2352f4: 0xe6400050  swc1        $f0, 0x50($s2)
    ctx->pc = 0x2352f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 80), bits); }
label_2352f8:
    // 0x2352f8: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2352f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x2352fc: 0x8c77bd48  lw          $s7, -0x42B8($v1)
    ctx->pc = 0x2352fcu;
    SET_GPR_S32(ctx, 23, (int32_t)FAST_READ32(0x3FBD48u));
    // 0x235300: 0x8ee20100  lw          $v0, 0x100($s7)
    ctx->pc = 0x235300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 256)));
    // 0x235304: 0x24430060  addiu       $v1, $v0, 0x60
    ctx->pc = 0x235304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x235308: 0x24560040  addiu       $s6, $v0, 0x40
    ctx->pc = 0x235308u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x23530c: 0xafa30120  sw          $v1, 0x120($sp)
    ctx->pc = 0x23530cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 3));
    // 0x235310: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x235310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x235314: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x235314u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x235318: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x235318u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23531c: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x23531cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x235320: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x235320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x235324: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x235324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x235328: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x235328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23532c: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x23532cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x235330: 0xc7a5002c  lwc1        $f5, 0x2C($sp)
    ctx->pc = 0x235330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x235334: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x235334u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x235338: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x235338u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x23533c: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x23533cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x235340: 0xe7a5001c  swc1        $f5, 0x1C($sp)
    ctx->pc = 0x235340u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x235344: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x235344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x235348: 0xc6030004  lwc1        $f3, 0x4($s0)
    ctx->pc = 0x235348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x23534c: 0xc6040008  lwc1        $f4, 0x8($s0)
    ctx->pc = 0x23534cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x235350: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x235350u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x235354: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x235354u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x235358: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x235358u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x23535c: 0x46010044  c1          0x10044
    ctx->pc = 0x23535cu;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x235360: 0xc6400048  lwc1        $f0, 0x48($s2)
    ctx->pc = 0x235360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x235364: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x235364u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x235368: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x235368u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x23536c: 0x0  nop
    ctx->pc = 0x23536cu;
    // NOP
    // 0x235370: 0x0  nop
    ctx->pc = 0x235370u;
    // NOP
    // 0x235374: 0x46000e43  div.s       $f25, $f1, $f0
    ctx->pc = 0x235374u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[25] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x235378: 0x4619a034  c.lt.s      $f20, $f25
    ctx->pc = 0x235378u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[25])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23537c: 0x0  nop
    ctx->pc = 0x23537cu;
    // NOP
    // 0x235380: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x235380u;
    {
        const bool branch_taken_0x235380 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x235380) {
            ctx->pc = 0x235384u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x235380u;
            // 0x235384: 0x4600a646  mov.s       $f25, $f20 (Delay Slot)
            ctx->f[25] = FPU_MOV_S(ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x235388u;
            goto label_235388;
        }
    }
    ctx->pc = 0x235388u;
label_235388:
    // 0x235388: 0xc6400058  lwc1        $f0, 0x58($s2)
    ctx->pc = 0x235388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23538c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x23538cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x235390: 0x0  nop
    ctx->pc = 0x235390u;
    // NOP
    // 0x235394: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x235394u;
    {
        const bool branch_taken_0x235394 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x235398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235394u;
        // 0x235398: 0x4619a641  sub.s       $f25, $f20, $f25 (Delay Slot)
        ctx->f[25] = FPU_SUB_S(ctx->f[20], ctx->f[25]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x235394) {
            ctx->pc = 0x2353ACu;
            goto label_2353ac;
        }
    }
    ctx->pc = 0x23539Cu;
    // 0x23539c: 0x0  nop
    ctx->pc = 0x23539cu;
    // NOP
    // 0x2353a0: 0x0  nop
    ctx->pc = 0x2353a0u;
    // NOP
    // 0x2353a4: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x2353a4u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x2353a8: 0x4600ef42  mul.s       $f29, $f29, $f0
    ctx->pc = 0x2353a8u;
    ctx->f[29] = FPU_MUL_S(ctx->f[29], ctx->f[0]);
label_2353ac:
    // 0x2353ac: 0xc0db0ea  jal         func_36C3A8
    ctx->pc = 0x2353ACu;
    SET_GPR_U32(ctx, 31, 0x2353B4u);
    ctx->pc = 0x2353B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2353ACu;
    // 0x2353b0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C3A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C3A8u, 0x2353ACu, 0x2353B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2353B4u;
label_2353b4:
    // 0x2353b4: 0x92420088  lbu         $v0, 0x88($s2)
    ctx->pc = 0x2353b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 136)));
    // 0x2353b8: 0x5040001c  beql        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x2353B8u;
    {
        const bool branch_taken_0x2353b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2353b8) {
            ctx->pc = 0x2353BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2353B8u;
            // 0x2353bc: 0xc6400040  lwc1        $f0, 0x40($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x23542Cu;
            goto label_23542c;
        }
    }
    ctx->pc = 0x2353C0u;
    // 0x2353c0: 0x4614e032  c.eq.s      $f28, $f20
    ctx->pc = 0x2353c0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[28], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2353c4: 0x0  nop
    ctx->pc = 0x2353c4u;
    // NOP
    // 0x2353c8: 0x45020018  bc1fl       . + 4 + (0x18 << 2)
    ctx->pc = 0x2353C8u;
    {
        const bool branch_taken_0x2353c8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2353c8) {
            ctx->pc = 0x2353CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2353C8u;
            // 0x2353cc: 0xc6400040  lwc1        $f0, 0x40($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x23542Cu;
            goto label_23542c;
        }
    }
    ctx->pc = 0x2353D0u;
    // 0x2353d0: 0xc6400030  lwc1        $f0, 0x30($s2)
    ctx->pc = 0x2353d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2353d4: 0xc6420034  lwc1        $f2, 0x34($s2)
    ctx->pc = 0x2353d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2353d8: 0x461b0000  add.s       $f0, $f0, $f27
    ctx->pc = 0x2353d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[27]);
    // 0x2353dc: 0x0  nop
    ctx->pc = 0x2353dcu;
    // NOP
    // 0x2353e0: 0x0  nop
    ctx->pc = 0x2353e0u;
    // NOP
    // 0x2353e4: 0x46020043  div.s       $f1, $f0, $f2
    ctx->pc = 0x2353e4u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x2353e8: 0xe6400030  swc1        $f0, 0x30($s2)
    ctx->pc = 0x2353e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 48), bits); }
    // 0x2353ec: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2353ecu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2353f0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2353f0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2353f4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2353f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2353f8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2353f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2353fc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2353FCu;
    {
        const bool branch_taken_0x2353fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x235400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2353FCu;
        // 0x235400: 0xc6400040  lwc1        $f0, 0x40($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2353fc) {
            ctx->pc = 0x235420u;
            goto label_235420;
        }
    }
    ctx->pc = 0x235404u;
    // 0x235404: 0x461b0000  add.s       $f0, $f0, $f27
    ctx->pc = 0x235404u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[27]);
    // 0x235408: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x235408u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23540c: 0x0  nop
    ctx->pc = 0x23540cu;
    // NOP
    // 0x235410: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x235410u;
    {
        const bool branch_taken_0x235410 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x235414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235410u;
        // 0x235414: 0xe6400040  swc1        $f0, 0x40($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 64), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x235410) {
            ctx->pc = 0x23544Cu;
            goto label_23544c;
        }
    }
    ctx->pc = 0x235418u;
    // 0x235418: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x235418u;
    {
        const bool branch_taken_0x235418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23541Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235418u;
        // 0x23541c: 0xe6420040  swc1        $f2, 0x40($s2) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 64), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x235418) {
            ctx->pc = 0x23544Cu;
            goto label_23544c;
        }
    }
    ctx->pc = 0x235420u;
label_235420:
    // 0x235420: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x235420u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x235424: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x235424u;
    {
        const bool branch_taken_0x235424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235424u;
        // 0x235428: 0x461b0001  sub.s       $f0, $f0, $f27 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[27]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x235424) {
            ctx->pc = 0x235438u;
            goto label_235438;
        }
    }
    ctx->pc = 0x23542Cu;
label_23542c:
    // 0x23542c: 0xae400030  sw          $zero, 0x30($s2)
    ctx->pc = 0x23542cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 0));
    // 0x235430: 0x461b0001  sub.s       $f0, $f0, $f27
    ctx->pc = 0x235430u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[27]);
    // 0x235434: 0xc6410030  lwc1        $f1, 0x30($s2)
    ctx->pc = 0x235434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_235438:
    // 0x235438: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x235438u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23543c: 0x0  nop
    ctx->pc = 0x23543cu;
    // NOP
    // 0x235440: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x235440u;
    {
        const bool branch_taken_0x235440 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x235444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235440u;
        // 0x235444: 0xe6400040  swc1        $f0, 0x40($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 64), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x235440) {
            ctx->pc = 0x23544Cu;
            goto label_23544c;
        }
    }
    ctx->pc = 0x235448u;
    // 0x235448: 0xe6410040  swc1        $f1, 0x40($s2)
    ctx->pc = 0x235448u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 64), bits); }
label_23544c:
    // 0x23544c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x23544cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x235450: 0x8c43bd50  lw          $v1, -0x42B0($v0)
    ctx->pc = 0x235450u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FBD50u));
    // 0x235454: 0x8c6204f4  lw          $v0, 0x4F4($v1)
    ctx->pc = 0x235454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1268)));
    // 0x235458: 0x38420004  xori        $v0, $v0, 0x4
    ctx->pc = 0x235458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)4);
    // 0x23545c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x23545cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x235460: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x235460u;
    {
        const bool branch_taken_0x235460 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x235464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235460u;
        // 0x235464: 0xafa20124  sw          $v0, 0x124($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235460) {
            ctx->pc = 0x235478u;
            goto label_235478;
        }
    }
    ctx->pc = 0x235468u;
    // 0x235468: 0xc6400040  lwc1        $f0, 0x40($s2)
    ctx->pc = 0x235468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23546c: 0xc6410034  lwc1        $f1, 0x34($s2)
    ctx->pc = 0x23546cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x235470: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x235470u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x235474: 0x4600ce40  add.s       $f25, $f25, $f0
    ctx->pc = 0x235474u;
    ctx->f[25] = FPU_ADD_S(ctx->f[25], ctx->f[0]);
label_235478:
    // 0x235478: 0xafa00128  sw          $zero, 0x128($sp)
    ctx->pc = 0x235478u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 0));
    // 0x23547c: 0xc7a10128  lwc1        $f1, 0x128($sp)
    ctx->pc = 0x23547cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x235480: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x235480u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x235484: 0xc640007c  lwc1        $f0, 0x7C($s2)
    ctx->pc = 0x235484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x235488: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x235488u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23548c: 0x0  nop
    ctx->pc = 0x23548cu;
    // NOP
    // 0x235490: 0x45000213  bc1f        . + 4 + (0x213 << 2)
    ctx->pc = 0x235490u;
    {
        const bool branch_taken_0x235490 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x235494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235490u;
        // 0x235494: 0x27a300a0  addiu       $v1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235490) {
            ctx->pc = 0x235CE0u;
            goto label_235ce0;
        }
    }
    ctx->pc = 0x235498u;
    // 0x235498: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x235498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x23549c: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x23549cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2354a0: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x2354a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2354a4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2354a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2354a8: 0x4481f800  mtc1        $at, $f31
    ctx->pc = 0x2354a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[31], &bits, sizeof(bits)); }
    // 0x2354ac: 0x46000f86  mov.s       $f30, $f1
    ctx->pc = 0x2354acu;
    ctx->f[30] = FPU_MOV_S(ctx->f[1]);
    // 0x2354b0: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x2354b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x2354b4: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x2354b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x2354b8: 0x26750010  addiu       $s5, $s3, 0x10
    ctx->pc = 0x2354b8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x2354bc: 0xafa3012c  sw          $v1, 0x12C($sp)
    ctx->pc = 0x2354bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 3));
    // 0x2354c0: 0xafa40130  sw          $a0, 0x130($sp)
    ctx->pc = 0x2354c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 4));
    // 0x2354c4: 0xafa50134  sw          $a1, 0x134($sp)
    ctx->pc = 0x2354c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 5));
    // 0x2354c8: 0xafa60138  sw          $a2, 0x138($sp)
    ctx->pc = 0x2354c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 6));
    // 0x2354cc: 0xc7a0011c  lwc1        $f0, 0x11C($sp)
    ctx->pc = 0x2354ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2354d0:
    // 0x2354d0: 0x4600d680  add.s       $f26, $f26, $f0
    ctx->pc = 0x2354d0u;
    ctx->f[26] = FPU_ADD_S(ctx->f[26], ctx->f[0]);
    // 0x2354d4: 0xdac10000  lqc2        $vf1, 0x0($s6)
    ctx->pc = 0x2354d4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x2354d8: 0xfa610000  sqc2        $vf1, 0x0($s3)
    ctx->pc = 0x2354d8u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2354dc: 0x26c20010  addiu       $v0, $s6, 0x10
    ctx->pc = 0x2354dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
    // 0x2354e0: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2354e0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2354e4: 0xfa610010  sqc2        $vf1, 0x10($s3)
    ctx->pc = 0x2354e4u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2354e8: 0x26c30020  addiu       $v1, $s6, 0x20
    ctx->pc = 0x2354e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 32));
    // 0x2354ec: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2354ecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2354f0: 0xfa610020  sqc2        $vf1, 0x20($s3)
    ctx->pc = 0x2354f0u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2354f4: 0x26c20030  addiu       $v0, $s6, 0x30
    ctx->pc = 0x2354f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 48));
    // 0x2354f8: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2354f8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2354fc: 0xfa610030  sqc2        $vf1, 0x30($s3)
    ctx->pc = 0x2354fcu;
    WRITE128(ADD32(GPR_U32(ctx, 19), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x235500: 0x8fa50120  lw          $a1, 0x120($sp)
    ctx->pc = 0x235500u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x235504: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x235504u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235508: 0xc0b15a0  jal         func_2C5680
    ctx->pc = 0x235508u;
    SET_GPR_U32(ctx, 31, 0x235510u);
    ctx->pc = 0x23550Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235508u;
    // 0x23550c: 0x4600d306  mov.s       $f12, $f26 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[26]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5680u, 0x235508u, 0x235510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235510u;
label_235510:
    // 0x235510: 0x8fa20124  lw          $v0, 0x124($sp)
    ctx->pc = 0x235510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
    // 0x235514: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x235514u;
    {
        const bool branch_taken_0x235514 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x235518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235514u;
        // 0x235518: 0xc6400038  lwc1        $f0, 0x38($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x235514) {
            ctx->pc = 0x23552Cu;
            goto label_23552c;
        }
    }
    ctx->pc = 0x23551Cu;
    // 0x23551c: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x23551cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x235520: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x235520u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x235524: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x235524u;
    {
        const bool branch_taken_0x235524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235524u;
        // 0x235528: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x235524) {
            ctx->pc = 0x23553Cu;
            goto label_23553c;
        }
    }
    ctx->pc = 0x23552Cu;
label_23552c:
    // 0x23552c: 0xc6410040  lwc1        $f1, 0x40($s2)
    ctx->pc = 0x23552cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x235530: 0xc6420034  lwc1        $f2, 0x34($s2)
    ctx->pc = 0x235530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x235534: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x235534u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x235538: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x235538u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
label_23553c:
    // 0x23553c: 0xe640003c  swc1        $f0, 0x3C($s2)
    ctx->pc = 0x23553cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 60), bits); }
    // 0x235540: 0xc7c200d0  lwc1        $f2, 0xD0($fp)
    ctx->pc = 0x235540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x235544: 0xc640003c  lwc1        $f0, 0x3C($s2)
    ctx->pc = 0x235544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x235548: 0x461e1034  c.lt.s      $f2, $f30
    ctx->pc = 0x235548u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[30])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23554c: 0x0  nop
    ctx->pc = 0x23554cu;
    // NOP
    // 0x235550: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x235550u;
    {
        const bool branch_taken_0x235550 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x235554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235550u;
        // 0x235554: 0x4600e940  add.s       $f5, $f29, $f0 (Delay Slot)
        ctx->f[5] = FPU_ADD_S(ctx->f[29], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x235550) {
            ctx->pc = 0x23555Cu;
            goto label_23555c;
        }
    }
    ctx->pc = 0x235558u;
    // 0x235558: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x235558u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_23555c:
    // 0x23555c: 0x87c2070a  lh          $v0, 0x70A($fp)
    ctx->pc = 0x23555cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 1802)));
    // 0x235560: 0x1c400005  bgtz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x235560u;
    {
        const bool branch_taken_0x235560 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x235560) {
            ctx->pc = 0x235578u;
            goto label_235578;
        }
    }
    ctx->pc = 0x235568u;
    // 0x235568: 0x8fc200b8  lw          $v0, 0xB8($fp)
    ctx->pc = 0x235568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 184)));
    // 0x23556c: 0x8c4200a4  lw          $v0, 0xA4($v0)
    ctx->pc = 0x23556cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x235570: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x235570u;
    {
        const bool branch_taken_0x235570 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x235574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235570u;
        // 0x235574: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235570) {
            ctx->pc = 0x23558Cu;
            goto label_23558c;
        }
    }
    ctx->pc = 0x235578u;
label_235578:
    // 0x235578: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x235578u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23557c: 0x0  nop
    ctx->pc = 0x23557cu;
    // NOP
    // 0x235580: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x235580u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x235584: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x235584u;
    {
        const bool branch_taken_0x235584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x235584) {
            ctx->pc = 0x2355A4u;
            goto label_2355a4;
        }
    }
    ctx->pc = 0x23558Cu;
label_23558c:
    // 0x23558c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x23558cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x235590: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x235590u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x235594: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x235594u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x235598: 0x0  nop
    ctx->pc = 0x235598u;
    // NOP
    // 0x23559c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x23559cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2355a0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2355a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2355a4:
    // 0x2355a4: 0x0  nop
    ctx->pc = 0x2355a4u;
    // NOP
    // 0x2355a8: 0x0  nop
    ctx->pc = 0x2355a8u;
    // NOP
    // 0x2355ac: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x2355acu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x2355b0: 0xe7a00114  swc1        $f0, 0x114($sp)
    ctx->pc = 0x2355b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
    // 0x2355b4: 0xafa00110  sw          $zero, 0x110($sp)
    ctx->pc = 0x2355b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 0));
    // 0x2355b8: 0x27a30114  addiu       $v1, $sp, 0x114
    ctx->pc = 0x2355b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 276));
    // 0x2355bc: 0xc7a00114  lwc1        $f0, 0x114($sp)
    ctx->pc = 0x2355bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2355c0: 0x27a20110  addiu       $v0, $sp, 0x110
    ctx->pc = 0x2355c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x2355c4: 0xc7b50110  lwc1        $f21, 0x110($sp)
    ctx->pc = 0x2355c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2355c8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2355c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2355cc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2355ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2355d0: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x2355d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2355d4: 0x0  nop
    ctx->pc = 0x2355d4u;
    // NOP
    // 0x2355d8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2355D8u;
    {
        const bool branch_taken_0x2355d8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2355DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2355D8u;
        // 0x2355dc: 0xe7b40118  swc1        $f20, 0x118($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2355d8) {
            ctx->pc = 0x2355E4u;
            goto label_2355e4;
        }
    }
    ctx->pc = 0x2355E0u;
    // 0x2355e0: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2355e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2355e4:
    // 0x2355e4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2355e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2355e8: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2355e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2355ec: 0x0  nop
    ctx->pc = 0x2355ecu;
    // NOP
    // 0x2355f0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2355F0u;
    {
        const bool branch_taken_0x2355f0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2355F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2355F0u;
        // 0x2355f4: 0x27a30118  addiu       $v1, $sp, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2355f0) {
            ctx->pc = 0x2355FCu;
            goto label_2355fc;
        }
    }
    ctx->pc = 0x2355F8u;
    // 0x2355f8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2355f8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2355fc:
    // 0x2355fc: 0xc6400060  lwc1        $f0, 0x60($s2)
    ctx->pc = 0x2355fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x235600: 0x27b40030  addiu       $s4, $sp, 0x30
    ctx->pc = 0x235600u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x235604: 0xc642005c  lwc1        $f2, 0x5C($s2)
    ctx->pc = 0x235604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x235608: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x235608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23560c: 0x0  nop
    ctx->pc = 0x23560cu;
    // NOP
    // 0x235610: 0x0  nop
    ctx->pc = 0x235610u;
    // NOP
    // 0x235614: 0x46001083  div.s       $f2, $f2, $f0
    ctx->pc = 0x235614u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x235618: 0xe7a10114  swc1        $f1, 0x114($sp)
    ctx->pc = 0x235618u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
    // 0x23561c: 0xc6a30000  lwc1        $f3, 0x0($s5)
    ctx->pc = 0x23561cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x235620: 0xc6a10004  lwc1        $f1, 0x4($s5)
    ctx->pc = 0x235620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x235624: 0xc6a40008  lwc1        $f4, 0x8($s5)
    ctx->pc = 0x235624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x235628: 0x46022940  add.s       $f5, $f5, $f2
    ctx->pc = 0x235628u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[2]);
    // 0x23562c: 0xc6a0000c  lwc1        $f0, 0xC($s5)
    ctx->pc = 0x23562cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x235630: 0x460328c2  mul.s       $f3, $f5, $f3
    ctx->pc = 0x235630u;
    ctx->f[3] = FPU_MUL_S(ctx->f[5], ctx->f[3]);
    // 0x235634: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x235634u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x235638: 0x46012842  mul.s       $f1, $f5, $f1
    ctx->pc = 0x235638u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x23563c: 0x46042902  mul.s       $f4, $f5, $f4
    ctx->pc = 0x23563cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x235640: 0xe7a30030  swc1        $f3, 0x30($sp)
    ctx->pc = 0x235640u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x235644: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x235644u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x235648: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x235648u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x23564c: 0xe7a40038  swc1        $f4, 0x38($sp)
    ctx->pc = 0x23564cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x235650: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x235650u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x235654: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x235654u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x235658: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x235658u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x23565c: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x23565cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x235660: 0xc7a30040  lwc1        $f3, 0x40($sp)
    ctx->pc = 0x235660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x235664: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x235664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x235668: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x235668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23566c: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x23566cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x235670: 0xc7a2004c  lwc1        $f2, 0x4C($sp)
    ctx->pc = 0x235670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x235674: 0xe7a30020  swc1        $f3, 0x20($sp)
    ctx->pc = 0x235674u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x235678: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x235678u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x23567c: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x23567cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x235680: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x235680u;
    SET_GPR_U32(ctx, 31, 0x235688u);
    ctx->pc = 0x235684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235680u;
    // 0x235684: 0xe7a2002c  swc1        $f2, 0x2C($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x235680u, 0x235688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235688u;
label_235688:
    // 0x235688: 0x27b10090  addiu       $s1, $sp, 0x90
    ctx->pc = 0x235688u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x23568c: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x23568Cu;
    SET_GPR_U32(ctx, 31, 0x235694u);
    ctx->pc = 0x235690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23568Cu;
    // 0x235690: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x23568Cu, 0x235694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235694u;
label_235694:
    // 0x235694: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x235694u;
    SET_GPR_U32(ctx, 31, 0x23569Cu);
    ctx->pc = 0x235698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235694u;
    // 0x235698: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x235694u, 0x23569Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23569Cu;
label_23569c:
    // 0x23569c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x23569Cu;
    SET_GPR_U32(ctx, 31, 0x2356A4u);
    ctx->pc = 0x2356A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23569Cu;
    // 0x2356a0: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x23569Cu, 0x2356A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2356A4u;
label_2356a4:
    // 0x2356a4: 0x8ef00100  lw          $s0, 0x100($s7)
    ctx->pc = 0x2356a4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 256)));
    // 0x2356a8: 0xc0f70ce  jal         func_3DC338
    ctx->pc = 0x2356A8u;
    SET_GPR_U32(ctx, 31, 0x2356B0u);
    ctx->pc = 0x2356ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2356A8u;
    // 0x2356ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x2356A8u, 0x2356B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2356B0u;
label_2356b0:
    // 0x2356b0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2356B0u;
    {
        const bool branch_taken_0x2356b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2356B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2356B0u;
        // 0x2356b4: 0x26020080  addiu       $v0, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2356b0) {
            ctx->pc = 0x2356C4u;
            goto label_2356c4;
        }
    }
    ctx->pc = 0x2356B8u;
    // 0x2356b8: 0xc0c4900  jal         func_312400
    ctx->pc = 0x2356B8u;
    SET_GPR_U32(ctx, 31, 0x2356C0u);
    ctx->pc = 0x2356BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2356B8u;
    // 0x2356bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x2356B8u, 0x2356C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2356C0u;
label_2356c0:
    // 0x2356c0: 0x26020080  addiu       $v0, $s0, 0x80
    ctx->pc = 0x2356c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
label_2356c4:
    // 0x2356c4: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2356c4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2356c8: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x2356c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2356cc: 0x26030090  addiu       $v1, $s0, 0x90
    ctx->pc = 0x2356ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x2356d0: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2356d0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2356d4: 0xfba100a0  sqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x2356d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2356d8: 0x260200a0  addiu       $v0, $s0, 0xA0
    ctx->pc = 0x2356d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x2356dc: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2356dcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2356e0: 0xfba100b0  sqc2        $vf1, 0xB0($sp)
    ctx->pc = 0x2356e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2356e4: 0x260300b0  addiu       $v1, $s0, 0xB0
    ctx->pc = 0x2356e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x2356e8: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2356e8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2356ec: 0xfba100c0  sqc2        $vf1, 0xC0($sp)
    ctx->pc = 0x2356ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2356f0: 0xc6e000e0  lwc1        $f0, 0xE0($s7)
    ctx->pc = 0x2356f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2356f4: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x2356f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x2356f8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2356f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2356fc: 0x0  nop
    ctx->pc = 0x2356fcu;
    // NOP
    // 0x235700: 0x46000943  div.s       $f5, $f1, $f0
    ctx->pc = 0x235700u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[5] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x235704: 0x44022800  mfc1        $v0, $f5
    ctx->pc = 0x235704u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x235708: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x235708u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x23570c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x23570cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x235710: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x235710u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x235714: 0xfa210040  sqc2        $vf1, 0x40($s1)
    ctx->pc = 0x235714u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x235718: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x235718u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x23571c: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x23571cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x235720: 0x8fa30130  lw          $v1, 0x130($sp)
    ctx->pc = 0x235720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x235724: 0x44042800  mfc1        $a0, $f5
    ctx->pc = 0x235724u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x235728: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x235728u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23572c: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x23572cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x235730: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x235730u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x235734: 0xfba100e0  sqc2        $vf1, 0xE0($sp)
    ctx->pc = 0x235734u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x235738: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x235738u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x23573c: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x23573cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x235740: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x235740u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x235744: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x235744u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x235748: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x235748u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x23574c: 0xfba10100  sqc2        $vf1, 0x100($sp)
    ctx->pc = 0x23574cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x235750: 0xc7a00100  lwc1        $f0, 0x100($sp)
    ctx->pc = 0x235750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x235754: 0xc7a10104  lwc1        $f1, 0x104($sp)
    ctx->pc = 0x235754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x235758: 0xc7a20108  lwc1        $f2, 0x108($sp)
    ctx->pc = 0x235758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x23575c: 0xc7a3010c  lwc1        $f3, 0x10C($sp)
    ctx->pc = 0x23575cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x235760: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x235760u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x235764: 0xe7a100f4  swc1        $f1, 0xF4($sp)
    ctx->pc = 0x235764u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x235768: 0xe7a200f8  swc1        $f2, 0xF8($sp)
    ctx->pc = 0x235768u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x23576c: 0xe7a300fc  swc1        $f3, 0xFC($sp)
    ctx->pc = 0x23576cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
    // 0x235770: 0x8fa70138  lw          $a3, 0x138($sp)
    ctx->pc = 0x235770u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x235774: 0xd8e10000  lqc2        $vf1, 0x0($a3)
    ctx->pc = 0x235774u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x235778: 0xfba100d0  sqc2        $vf1, 0xD0($sp)
    ctx->pc = 0x235778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x23577c: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x23577cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x235780: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x235780u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235784: 0xc7a100d4  lwc1        $f1, 0xD4($sp)
    ctx->pc = 0x235784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x235788: 0xc7a400d8  lwc1        $f4, 0xD8($sp)
    ctx->pc = 0x235788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x23578c: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x23578cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x235790: 0xe7a10060  swc1        $f1, 0x60($sp)
    ctx->pc = 0x235790u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x235794: 0xe7a40070  swc1        $f4, 0x70($sp)
    ctx->pc = 0x235794u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x235798: 0x8fa20134  lw          $v0, 0x134($sp)
    ctx->pc = 0x235798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
    // 0x23579c: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x23579cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2357a0: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x2357a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2357a4: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x2357a4u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x2357a8: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x2357a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2357ac: 0xc4630004  lwc1        $f3, 0x4($v1)
    ctx->pc = 0x2357acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2357b0: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x2357b0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x2357b4: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x2357b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2357b8: 0xc4630008  lwc1        $f3, 0x8($v1)
    ctx->pc = 0x2357b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2357bc: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x2357bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x2357c0: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x2357c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x2357c4: 0x8fa2012c  lw          $v0, 0x12C($sp)
    ctx->pc = 0x2357c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
    // 0x2357c8: 0x46002801  sub.s       $f0, $f5, $f0
    ctx->pc = 0x2357c8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x2357cc: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x2357ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x2357d0: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x2357d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x2357d4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2357d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2357d8: 0xc6e100e4  lwc1        $f1, 0xE4($s7)
    ctx->pc = 0x2357d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2357dc: 0x46010143  div.s       $f5, $f0, $f1
    ctx->pc = 0x2357dcu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[5] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x2357e0: 0x44032800  mfc1        $v1, $f5
    ctx->pc = 0x2357e0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2357e4: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2357e4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2357e8: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x2357e8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2357ec: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2357ecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2357f0: 0xfba100d0  sqc2        $vf1, 0xD0($sp)
    ctx->pc = 0x2357f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2357f4: 0x8fa40130  lw          $a0, 0x130($sp)
    ctx->pc = 0x2357f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x2357f8: 0x4405f800  mfc1        $a1, $f31
    ctx->pc = 0x2357f8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[31], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x2357fc: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x2357fcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x235800: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x235800u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x235804: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x235804u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x235808: 0xfba100e0  sqc2        $vf1, 0xE0($sp)
    ctx->pc = 0x235808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x23580c: 0x27a600d0  addiu       $a2, $sp, 0xD0
    ctx->pc = 0x23580cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x235810: 0x27a700e0  addiu       $a3, $sp, 0xE0
    ctx->pc = 0x235810u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x235814: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x235814u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x235818: 0xd8e20000  lqc2        $vf2, 0x0($a3)
    ctx->pc = 0x235818u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x23581c: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x23581cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x235820: 0xfba10100  sqc2        $vf1, 0x100($sp)
    ctx->pc = 0x235820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x235824: 0xc7a00100  lwc1        $f0, 0x100($sp)
    ctx->pc = 0x235824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x235828: 0xc7a10104  lwc1        $f1, 0x104($sp)
    ctx->pc = 0x235828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23582c: 0xc7a20108  lwc1        $f2, 0x108($sp)
    ctx->pc = 0x23582cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x235830: 0xc7a3010c  lwc1        $f3, 0x10C($sp)
    ctx->pc = 0x235830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x235834: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x235834u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x235838: 0xe7a100f4  swc1        $f1, 0xF4($sp)
    ctx->pc = 0x235838u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x23583c: 0xe7a200f8  swc1        $f2, 0xF8($sp)
    ctx->pc = 0x23583cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x235840: 0xe7a300fc  swc1        $f3, 0xFC($sp)
    ctx->pc = 0x235840u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
    // 0x235844: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x235844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x235848: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x235848u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23584c: 0xfba100d0  sqc2        $vf1, 0xD0($sp)
    ctx->pc = 0x23584cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x235850: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x235850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x235854: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x235854u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235858: 0xc7a100d4  lwc1        $f1, 0xD4($sp)
    ctx->pc = 0x235858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23585c: 0xc7a400d8  lwc1        $f4, 0xD8($sp)
    ctx->pc = 0x23585cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x235860: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x235860u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x235864: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x235864u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x235868: 0xe7a40074  swc1        $f4, 0x74($sp)
    ctx->pc = 0x235868u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x23586c: 0x8fa30134  lw          $v1, 0x134($sp)
    ctx->pc = 0x23586cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
    // 0x235870: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x235870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x235874: 0xc4830000  lwc1        $f3, 0x0($a0)
    ctx->pc = 0x235874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x235878: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x235878u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x23587c: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x23587cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x235880: 0xc4830004  lwc1        $f3, 0x4($a0)
    ctx->pc = 0x235880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x235884: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x235884u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x235888: 0xc4620008  lwc1        $f2, 0x8($v1)
    ctx->pc = 0x235888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x23588c: 0xc4830008  lwc1        $f3, 0x8($a0)
    ctx->pc = 0x23588cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x235890: 0x4603105c  madd.s      $f1, $f2, $f3
    ctx->pc = 0x235890u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x235894: 0x461f0840  add.s       $f1, $f1, $f31
    ctx->pc = 0x235894u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[31]);
    // 0x235898: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x235898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23589c: 0xc7a200b4  lwc1        $f2, 0xB4($sp)
    ctx->pc = 0x23589cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2358a0: 0xc7a300b8  lwc1        $f3, 0xB8($sp)
    ctx->pc = 0x2358a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2358a4: 0x4601f841  sub.s       $f1, $f31, $f1
    ctx->pc = 0x2358a4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], ctx->f[1]);
    // 0x2358a8: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x2358a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2358ac: 0xe7a20068  swc1        $f2, 0x68($sp)
    ctx->pc = 0x2358acu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2358b0: 0xe7a30078  swc1        $f3, 0x78($sp)
    ctx->pc = 0x2358b0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x2358b4: 0xe7a10084  swc1        $f1, 0x84($sp)
    ctx->pc = 0x2358b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x2358b8: 0x8fa50130  lw          $a1, 0x130($sp)
    ctx->pc = 0x2358b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x2358bc: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x2358bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2358c0: 0xc4a30000  lwc1        $f3, 0x0($a1)
    ctx->pc = 0x2358c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2358c4: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x2358c4u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x2358c8: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x2358c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2358cc: 0xc4a30004  lwc1        $f3, 0x4($a1)
    ctx->pc = 0x2358ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2358d0: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x2358d0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x2358d4: 0xc4620008  lwc1        $f2, 0x8($v1)
    ctx->pc = 0x2358d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2358d8: 0xc4a30008  lwc1        $f3, 0x8($a1)
    ctx->pc = 0x2358d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2358dc: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x2358dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x2358e0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2358e0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2358e4: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x2358e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2358e8: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x2358e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2358ec: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x2358ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x2358f0: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2358f0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2358f4: 0xd8c20000  lqc2        $vf2, 0x0($a2)
    ctx->pc = 0x2358f4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2358f8: 0xd8c30010  lqc2        $vf3, 0x10($a2)
    ctx->pc = 0x2358f8u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x2358fc: 0xd8c40020  lqc2        $vf4, 0x20($a2)
    ctx->pc = 0x2358fcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x235900: 0xd8c50030  lqc2        $vf5, 0x30($a2)
    ctx->pc = 0x235900u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x235904: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x235904u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x235908: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x235908u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x23590c: 0x4bc120be  vmaddaz.xyz $ACC, $vf4, $vf1z
    ctx->pc = 0x23590cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x235910: 0x4bc0284b  vmaddw.xyz  $vf1, $vf5, $vf0w
    ctx->pc = 0x235910u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x235914: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x235914u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x235918: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x235918u;
    SET_GPR_U32(ctx, 31, 0x235920u);
    ctx->pc = 0x23591Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235918u;
    // 0x23591c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x235918u, 0x235920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235920u;
label_235920:
    // 0x235920: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x235920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x235924: 0x4602f034  c.lt.s      $f30, $f2
    ctx->pc = 0x235924u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[30], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x235928: 0x0  nop
    ctx->pc = 0x235928u;
    // NOP
    // 0x23592c: 0x450000e1  bc1f        . + 4 + (0xE1 << 2)
    ctx->pc = 0x23592Cu;
    {
        const bool branch_taken_0x23592c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x235930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23592Cu;
        // 0x235930: 0xc7a00020  lwc1        $f0, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x23592c) {
            ctx->pc = 0x235CB4u;
            goto label_235cb4;
        }
    }
    ctx->pc = 0x235934u;
    // 0x235934: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x235934u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x235938: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x235938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23593c: 0x0  nop
    ctx->pc = 0x23593cu;
    // NOP
    // 0x235940: 0x0  nop
    ctx->pc = 0x235940u;
    // NOP
    // 0x235944: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x235944u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x235948: 0x92420088  lbu         $v0, 0x88($s2)
    ctx->pc = 0x235948u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 136)));
    // 0x23594c: 0x0  nop
    ctx->pc = 0x23594cu;
    // NOP
    // 0x235950: 0x0  nop
    ctx->pc = 0x235950u;
    // NOP
    // 0x235954: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x235954u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[2]); }
    // 0x235958: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x235958u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x23595c: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x23595Cu;
    {
        const bool branch_taken_0x23595c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x235960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23595Cu;
        // 0x235960: 0xe7a10034  swc1        $f1, 0x34($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x23595c) {
            ctx->pc = 0x235A48u;
            goto label_235a48;
        }
    }
    ctx->pc = 0x235964u;
    // 0x235964: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x235964u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x235968: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x235968u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x23596c: 0x2442f250  addiu       $v0, $v0, -0xDB0
    ctx->pc = 0x23596cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963792));
    // 0x235970: 0x8ce4bd50  lw          $a0, -0x42B0($a3)
    ctx->pc = 0x235970u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3FBD50u));
    // 0x235974: 0xc0be5e2  jal         func_2F9788
    ctx->pc = 0x235974u;
    SET_GPR_U32(ctx, 31, 0x23597Cu);
    ctx->pc = 0x235978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235974u;
    // 0x235978: 0x8c500174  lw          $s0, 0x174($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 372)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F9788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F9788u, 0x235974u, 0x23597Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23597Cu;
label_23597c:
    // 0x23597c: 0x8fa30124  lw          $v1, 0x124($sp)
    ctx->pc = 0x23597cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
    // 0x235980: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x235980u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235984: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x235984u;
    {
        const bool branch_taken_0x235984 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x235988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235984u;
        // 0x235988: 0x4600a846  mov.s       $f1, $f21 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x235984) {
            ctx->pc = 0x2359C4u;
            goto label_2359c4;
        }
    }
    ctx->pc = 0x23598Cu;
    // 0x23598c: 0xc6400030  lwc1        $f0, 0x30($s2)
    ctx->pc = 0x23598cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x235990: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x235990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x235994: 0x50800001  beql        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x235994u;
    {
        const bool branch_taken_0x235994 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x235994) {
            ctx->pc = 0x235998u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x235994u;
            // 0x235998: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x23599Cu;
            goto label_23599c;
        }
    }
    ctx->pc = 0x23599Cu;
label_23599c:
    // 0x23599c: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x23599cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x2359a0: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x2359a0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2359a4: 0x44001a  div         $zero, $v0, $a0
    ctx->pc = 0x2359a4u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2359a8: 0x1810  mfhi        $v1
    ctx->pc = 0x2359a8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2359ac: 0x28630006  slti        $v1, $v1, 0x6
    ctx->pc = 0x2359acu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x2359b0: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2359B0u;
    {
        const bool branch_taken_0x2359b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2359b0) {
            ctx->pc = 0x2359D0u;
            goto label_2359d0;
        }
    }
    ctx->pc = 0x2359B8u;
    // 0x2359b8: 0x4600a046  mov.s       $f1, $f20
    ctx->pc = 0x2359b8u;
    ctx->f[1] = FPU_MOV_S(ctx->f[20]);
    // 0x2359bc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2359BCu;
    {
        const bool branch_taken_0x2359bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2359C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2359BCu;
        // 0x2359c0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2359bc) {
            ctx->pc = 0x2359D0u;
            goto label_2359d0;
        }
    }
    ctx->pc = 0x2359C4u;
label_2359c4:
    // 0x2359c4: 0xc6410040  lwc1        $f1, 0x40($s2)
    ctx->pc = 0x2359c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2359c8: 0xc6400034  lwc1        $f0, 0x34($s2)
    ctx->pc = 0x2359c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2359cc: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x2359ccu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_2359d0:
    // 0x2359d0: 0x14a00009  bnez        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2359D0u;
    {
        const bool branch_taken_0x2359d0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2359D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2359D0u;
        // 0x2359d4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2359d0) {
            ctx->pc = 0x2359F8u;
            goto label_2359f8;
        }
    }
    ctx->pc = 0x2359D8u;
    // 0x2359d8: 0x46180802  mul.s       $f0, $f1, $f24
    ctx->pc = 0x2359d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[24]);
    // 0x2359dc: 0x4600c001  sub.s       $f0, $f24, $f0
    ctx->pc = 0x2359dcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[24], ctx->f[0]);
    // 0x2359e0: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2359e0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x2359e4: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x2359e4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2359e8: 0xa3a20042  sb          $v0, 0x42($sp)
    ctx->pc = 0x2359e8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 66), (uint8_t)GPR_U32(ctx, 2));
    // 0x2359ec: 0xa3a20040  sb          $v0, 0x40($sp)
    ctx->pc = 0x2359ecu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 2));
    // 0x2359f0: 0xa3a20041  sb          $v0, 0x41($sp)
    ctx->pc = 0x2359f0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 65), (uint8_t)GPR_U32(ctx, 2));
    // 0x2359f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2359f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2359f8:
    // 0x2359f8: 0x14a20009  bne         $a1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2359F8u;
    {
        const bool branch_taken_0x2359f8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2359FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2359F8u;
        // 0x2359fc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2359f8) {
            ctx->pc = 0x235A20u;
            goto label_235a20;
        }
    }
    ctx->pc = 0x235A00u;
    // 0x235a00: 0x46180802  mul.s       $f0, $f1, $f24
    ctx->pc = 0x235a00u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[24]);
    // 0x235a04: 0xa3a00042  sb          $zero, 0x42($sp)
    ctx->pc = 0x235a04u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 66), (uint8_t)GPR_U32(ctx, 0));
    // 0x235a08: 0x4600c001  sub.s       $f0, $f24, $f0
    ctx->pc = 0x235a08u;
    ctx->f[0] = FPU_SUB_S(ctx->f[24], ctx->f[0]);
    // 0x235a0c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x235a0cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x235a10: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x235a10u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x235a14: 0xa3a20041  sb          $v0, 0x41($sp)
    ctx->pc = 0x235a14u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 65), (uint8_t)GPR_U32(ctx, 2));
    // 0x235a18: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x235A18u;
    {
        const bool branch_taken_0x235a18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235A18u;
        // 0x235a1c: 0xa3a20040  sb          $v0, 0x40($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235a18) {
            ctx->pc = 0x235A7Cu;
            goto label_235a7c;
        }
    }
    ctx->pc = 0x235A20u;
label_235a20:
    // 0x235a20: 0x14a20017  bne         $a1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x235A20u;
    {
        const bool branch_taken_0x235a20 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x235A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235A20u;
        // 0x235a24: 0x93a20040  lbu         $v0, 0x40($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235a20) {
            ctx->pc = 0x235A80u;
            goto label_235a80;
        }
    }
    ctx->pc = 0x235A28u;
    // 0x235a28: 0x46180802  mul.s       $f0, $f1, $f24
    ctx->pc = 0x235a28u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[24]);
    // 0x235a2c: 0xa3a00041  sb          $zero, 0x41($sp)
    ctx->pc = 0x235a2cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 65), (uint8_t)GPR_U32(ctx, 0));
    // 0x235a30: 0xa3a00042  sb          $zero, 0x42($sp)
    ctx->pc = 0x235a30u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 66), (uint8_t)GPR_U32(ctx, 0));
    // 0x235a34: 0x4600c001  sub.s       $f0, $f24, $f0
    ctx->pc = 0x235a34u;
    ctx->f[0] = FPU_SUB_S(ctx->f[24], ctx->f[0]);
    // 0x235a38: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x235a38u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x235a3c: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x235a3cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x235a40: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x235A40u;
    {
        const bool branch_taken_0x235a40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235A40u;
        // 0x235a44: 0xa3a20040  sb          $v0, 0x40($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235a40) {
            ctx->pc = 0x235A7Cu;
            goto label_235a7c;
        }
    }
    ctx->pc = 0x235A48u;
label_235a48:
    // 0x235a48: 0xc7a00114  lwc1        $f0, 0x114($sp)
    ctx->pc = 0x235a48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x235a4c: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x235a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x235a50: 0x2442f250  addiu       $v0, $v0, -0xDB0
    ctx->pc = 0x235a50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963792));
    // 0x235a54: 0x46180002  mul.s       $f0, $f0, $f24
    ctx->pc = 0x235a54u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[24]);
    // 0x235a58: 0x8c500170  lw          $s0, 0x170($v0)
    ctx->pc = 0x235a58u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x4BF3C0u));
    // 0x235a5c: 0xa3a00042  sb          $zero, 0x42($sp)
    ctx->pc = 0x235a5cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 66), (uint8_t)GPR_U32(ctx, 0));
    // 0x235a60: 0x4600c041  sub.s       $f1, $f24, $f0
    ctx->pc = 0x235a60u;
    ctx->f[1] = FPU_SUB_S(ctx->f[24], ctx->f[0]);
    // 0x235a64: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x235a64u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x235a68: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x235a68u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x235a6c: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x235a6cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x235a70: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x235a70u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x235a74: 0xa3a20041  sb          $v0, 0x41($sp)
    ctx->pc = 0x235a74u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 65), (uint8_t)GPR_U32(ctx, 2));
    // 0x235a78: 0xa3a30040  sb          $v1, 0x40($sp)
    ctx->pc = 0x235a78u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 3));
label_235a7c:
    // 0x235a7c: 0x93a20040  lbu         $v0, 0x40($sp)
    ctx->pc = 0x235a7cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 64)));
label_235a80:
    // 0x235a80: 0xc6410010  lwc1        $f1, 0x10($s2)
    ctx->pc = 0x235a80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x235a84: 0x93a30041  lbu         $v1, 0x41($sp)
    ctx->pc = 0x235a84u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 65)));
    // 0x235a88: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x235a88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x235a8c: 0x0  nop
    ctx->pc = 0x235a8cu;
    // NOP
    // 0x235a90: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x235a90u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x235a94: 0x93a40042  lbu         $a0, 0x42($sp)
    ctx->pc = 0x235a94u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 66)));
    // 0x235a98: 0x46180842  mul.s       $f1, $f1, $f24
    ctx->pc = 0x235a98u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[24]);
    // 0x235a9c: 0xc640000c  lwc1        $f0, 0xC($s2)
    ctx->pc = 0x235a9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x235aa0: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x235aa0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x235aa4: 0x0  nop
    ctx->pc = 0x235aa4u;
    // NOP
    // 0x235aa8: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x235aa8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x235aac: 0x44842000  mtc1        $a0, $f4
    ctx->pc = 0x235aacu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x235ab0: 0x0  nop
    ctx->pc = 0x235ab0u;
    // NOP
    // 0x235ab4: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x235ab4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x235ab8: 0x92460089  lbu         $a2, 0x89($s2)
    ctx->pc = 0x235ab8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 137)));
    // 0x235abc: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x235abcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x235ac0: 0x4601e042  mul.s       $f1, $f28, $f1
    ctx->pc = 0x235ac0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[28], ctx->f[1]);
    // 0x235ac4: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x235ac4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x235ac8: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x235ac8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x235acc: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x235accu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x235ad0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x235ad0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x235ad4: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x235ad4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x235ad8: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x235ad8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x235adc: 0x46001824  .word       0x46001824                   # cvt.w.s     $f0, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x235adcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x235ae0: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x235ae0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x235ae4: 0x46002024  .word       0x46002024                   # cvt.w.s     $f0, $f4 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x235ae4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[4]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x235ae8: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x235ae8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x235aec: 0xa3a20040  sb          $v0, 0x40($sp)
    ctx->pc = 0x235aecu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 2));
    // 0x235af0: 0xa3a30043  sb          $v1, 0x43($sp)
    ctx->pc = 0x235af0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 67), (uint8_t)GPR_U32(ctx, 3));
    // 0x235af4: 0xa3a40041  sb          $a0, 0x41($sp)
    ctx->pc = 0x235af4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 65), (uint8_t)GPR_U32(ctx, 4));
    // 0x235af8: 0x10c0000a  beqz        $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x235AF8u;
    {
        const bool branch_taken_0x235af8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x235AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235AF8u;
        // 0x235afc: 0xa3a50042  sb          $a1, 0x42($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 66), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235af8) {
            ctx->pc = 0x235B24u;
            goto label_235b24;
        }
    }
    ctx->pc = 0x235B00u;
    // 0x235b00: 0xc640005c  lwc1        $f0, 0x5C($s2)
    ctx->pc = 0x235b00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x235b04: 0xc6410060  lwc1        $f1, 0x60($s2)
    ctx->pc = 0x235b04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x235b08: 0x461b0000  add.s       $f0, $f0, $f27
    ctx->pc = 0x235b08u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[27]);
    // 0x235b0c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x235b0cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x235b10: 0x0  nop
    ctx->pc = 0x235b10u;
    // NOP
    // 0x235b14: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x235B14u;
    {
        const bool branch_taken_0x235b14 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x235B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235B14u;
        // 0x235b18: 0xe640005c  swc1        $f0, 0x5C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 92), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x235b14) {
            ctx->pc = 0x235B40u;
            goto label_235b40;
        }
    }
    ctx->pc = 0x235B1Cu;
    // 0x235b1c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x235B1Cu;
    {
        const bool branch_taken_0x235b1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235B1Cu;
        // 0x235b20: 0xe641005c  swc1        $f1, 0x5C($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 92), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x235b1c) {
            ctx->pc = 0x235B40u;
            goto label_235b40;
        }
    }
    ctx->pc = 0x235B24u;
label_235b24:
    // 0x235b24: 0xc640005c  lwc1        $f0, 0x5C($s2)
    ctx->pc = 0x235b24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x235b28: 0x461b0001  sub.s       $f0, $f0, $f27
    ctx->pc = 0x235b28u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[27]);
    // 0x235b2c: 0x461e0034  c.lt.s      $f0, $f30
    ctx->pc = 0x235b2cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[30])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x235b30: 0x0  nop
    ctx->pc = 0x235b30u;
    // NOP
    // 0x235b34: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x235B34u;
    {
        const bool branch_taken_0x235b34 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x235B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235B34u;
        // 0x235b38: 0xe640005c  swc1        $f0, 0x5C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 92), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x235b34) {
            ctx->pc = 0x235B40u;
            goto label_235b40;
        }
    }
    ctx->pc = 0x235B3Cu;
    // 0x235b3c: 0xae40005c  sw          $zero, 0x5C($s2)
    ctx->pc = 0x235b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 92), GPR_U32(ctx, 0));
label_235b40:
    // 0x235b40: 0xc6400060  lwc1        $f0, 0x60($s2)
    ctx->pc = 0x235b40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x235b44: 0xc641005c  lwc1        $f1, 0x5C($s2)
    ctx->pc = 0x235b44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x235b48: 0x93a20043  lbu         $v0, 0x43($sp)
    ctx->pc = 0x235b48u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 67)));
    // 0x235b4c: 0x0  nop
    ctx->pc = 0x235b4cu;
    // NOP
    // 0x235b50: 0x0  nop
    ctx->pc = 0x235b50u;
    // NOP
    // 0x235b54: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x235b54u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x235b58: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x235b58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x235b5c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x235b5cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x235b60: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x235b60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x235b64: 0x93a30040  lbu         $v1, 0x40($sp)
    ctx->pc = 0x235b64u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x235b68: 0x44823800  mtc1        $v0, $f7
    ctx->pc = 0x235b68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x235b6c: 0x0  nop
    ctx->pc = 0x235b6cu;
    // NOP
    // 0x235b70: 0x468039e0  cvt.s.w     $f7, $f7
    ctx->pc = 0x235b70u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[7], sizeof(tmp)); ctx->f[7] = FPU_CVT_S_W(tmp); }
    // 0x235b74: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x235b74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x235b78: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x235b78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x235b7c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x235b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x235b80: 0x93a40041  lbu         $a0, 0x41($sp)
    ctx->pc = 0x235b80u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 65)));
    // 0x235b84: 0x44832800  mtc1        $v1, $f5
    ctx->pc = 0x235b84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x235b88: 0x0  nop
    ctx->pc = 0x235b88u;
    // NOP
    // 0x235b8c: 0x46802960  cvt.s.w     $f5, $f5
    ctx->pc = 0x235b8cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x235b90: 0x93a50042  lbu         $a1, 0x42($sp)
    ctx->pc = 0x235b90u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 66)));
    // 0x235b94: 0x2442ac50  addiu       $v0, $v0, -0x53B0
    ctx->pc = 0x235b94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945872));
    // 0x235b98: 0x44842000  mtc1        $a0, $f4
    ctx->pc = 0x235b98u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x235b9c: 0x0  nop
    ctx->pc = 0x235b9cu;
    // NOP
    // 0x235ba0: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x235ba0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x235ba4: 0x3c014300  lui         $at, 0x4300
    ctx->pc = 0x235ba4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17152 << 16));
    // 0x235ba8: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x235ba8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x235bac: 0x46020882  mul.s       $f2, $f1, $f2
    ctx->pc = 0x235bacu;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x235bb0: 0xc449001c  lwc1        $f9, 0x1C($v0)
    ctx->pc = 0x235bb0u;
    { uint32_t bits = FAST_READ32(0x6BAC6Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x235bb4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x235bb4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x235bb8: 0xc64a0044  lwc1        $f10, 0x44($s2)
    ctx->pc = 0x235bb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x235bbc: 0x44851800  mtc1        $a1, $f3
    ctx->pc = 0x235bbcu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x235bc0: 0x0  nop
    ctx->pc = 0x235bc0u;
    // NOP
    // 0x235bc4: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x235bc4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x235bc8: 0xc6480004  lwc1        $f8, 0x4($s2)
    ctx->pc = 0x235bc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x235bcc: 0x46023882  mul.s       $f2, $f7, $f2
    ctx->pc = 0x235bccu;
    ctx->f[2] = FPU_MUL_S(ctx->f[7], ctx->f[2]);
    // 0x235bd0: 0xc6570008  lwc1        $f23, 0x8($s2)
    ctx->pc = 0x235bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x235bd4: 0x46002942  mul.s       $f5, $f5, $f0
    ctx->pc = 0x235bd4u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x235bd8: 0x46060842  mul.s       $f1, $f1, $f6
    ctx->pc = 0x235bd8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x235bdc: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x235bdcu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x235be0: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x235be0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x235be4: 0x460239c1  sub.s       $f7, $f7, $f2
    ctx->pc = 0x235be4u;
    ctx->f[7] = FPU_SUB_S(ctx->f[7], ctx->f[2]);
    // 0x235be8: 0x46012940  add.s       $f5, $f5, $f1
    ctx->pc = 0x235be8u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[1]);
    // 0x235bec: 0x46012100  add.s       $f4, $f4, $f1
    ctx->pc = 0x235becu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
    // 0x235bf0: 0x46003824  .word       0x46003824                   # cvt.w.s     $f0, $f7 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x235bf0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[7]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x235bf4: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x235bf4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x235bf8: 0x460118c0  add.s       $f3, $f3, $f1
    ctx->pc = 0x235bf8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x235bfc: 0x46002824  .word       0x46002824                   # cvt.w.s     $f0, $f5 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x235bfcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[5]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x235c00: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x235c00u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x235c04: 0x46002024  .word       0x46002024                   # cvt.w.s     $f0, $f4 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x235c04u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[4]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x235c08: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x235c08u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x235c0c: 0xa3a20043  sb          $v0, 0x43($sp)
    ctx->pc = 0x235c0cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 67), (uint8_t)GPR_U32(ctx, 2));
    // 0x235c10: 0x46001824  .word       0x46001824                   # cvt.w.s     $f0, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x235c10u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x235c14: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x235c14u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x235c18: 0x460ac834  c.lt.s      $f25, $f10
    ctx->pc = 0x235c18u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[25], ctx->f[10])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x235c1c: 0xa3a30040  sb          $v1, 0x40($sp)
    ctx->pc = 0x235c1cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 3));
    // 0x235c20: 0x46094542  mul.s       $f21, $f8, $f9
    ctx->pc = 0x235c20u;
    ctx->f[21] = FPU_MUL_S(ctx->f[8], ctx->f[9]);
    // 0x235c24: 0xa3a40041  sb          $a0, 0x41($sp)
    ctx->pc = 0x235c24u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 65), (uint8_t)GPR_U32(ctx, 4));
    // 0x235c28: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x235C28u;
    {
        const bool branch_taken_0x235c28 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x235C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235C28u;
        // 0x235c2c: 0xa3a50042  sb          $a1, 0x42($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 66), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235c28) {
            ctx->pc = 0x235C34u;
            goto label_235c34;
        }
    }
    ctx->pc = 0x235C30u;
    // 0x235c30: 0x46005646  mov.s       $f25, $f10
    ctx->pc = 0x235c30u;
    ctx->f[25] = FPU_MOV_S(ctx->f[10]);
label_235c34:
    // 0x235c34: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x235c34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x235c38: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x235c38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x235c3c: 0xc640004c  lwc1        $f0, 0x4C($s2)
    ctx->pc = 0x235c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x235c40: 0x4616a882  mul.s       $f2, $f21, $f22
    ctx->pc = 0x235c40u;
    ctx->f[2] = FPU_MUL_S(ctx->f[21], ctx->f[22]);
    // 0x235c44: 0x4600c802  mul.s       $f0, $f25, $f0
    ctx->pc = 0x235c44u;
    ctx->f[0] = FPU_MUL_S(ctx->f[25], ctx->f[0]);
    // 0x235c48: 0x4616b842  mul.s       $f1, $f23, $f22
    ctx->pc = 0x235c48u;
    ctx->f[1] = FPU_MUL_S(ctx->f[23], ctx->f[22]);
    // 0x235c4c: 0x46001542  mul.s       $f21, $f2, $f0
    ctx->pc = 0x235c4cu;
    ctx->f[21] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x235c50: 0x12200018  beqz        $s1, . + 4 + (0x18 << 2)
    ctx->pc = 0x235C50u;
    {
        const bool branch_taken_0x235c50 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x235C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235C50u;
        // 0x235c54: 0x46000dc2  mul.s       $f23, $f1, $f0 (Delay Slot)
        ctx->f[23] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x235c50) {
            ctx->pc = 0x235CB4u;
            goto label_235cb4;
        }
    }
    ctx->pc = 0x235C58u;
    // 0x235c58: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x235c58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x235c5c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x235c5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x235c60: 0x0  nop
    ctx->pc = 0x235c60u;
    // NOP
    // 0x235c64: 0x4614d500  add.s       $f20, $f26, $f20
    ctx->pc = 0x235c64u;
    ctx->f[20] = FPU_ADD_S(ctx->f[26], ctx->f[20]);
    // 0x235c68: 0xc0da658  jal         func_369960
    ctx->pc = 0x235C68u;
    SET_GPR_U32(ctx, 31, 0x235C70u);
    ctx->pc = 0x235C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235C68u;
    // 0x235c6c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x369960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x369960u, 0x235C68u, 0x235C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235C70u;
label_235c70:
    // 0x235c70: 0xc0da658  jal         func_369960
    ctx->pc = 0x235C70u;
    SET_GPR_U32(ctx, 31, 0x235C78u);
    ctx->pc = 0x235C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235C70u;
    // 0x235c74: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x369960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x369960u, 0x235C70u, 0x235C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235C78u;
label_235c78:
    // 0x235c78: 0x4616b802  mul.s       $f0, $f23, $f22
    ctx->pc = 0x235c78u;
    ctx->f[0] = FPU_MUL_S(ctx->f[23], ctx->f[22]);
    // 0x235c7c: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x235c7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x235c80: 0x4616ab02  mul.s       $f12, $f21, $f22
    ctx->pc = 0x235c80u;
    ctx->f[12] = FPU_MUL_S(ctx->f[21], ctx->f[22]);
    // 0x235c84: 0xc7ad0034  lwc1        $f13, 0x34($sp)
    ctx->pc = 0x235c84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x235c88: 0x93a40040  lbu         $a0, 0x40($sp)
    ctx->pc = 0x235c88u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x235c8c: 0x4600ab86  mov.s       $f14, $f21
    ctx->pc = 0x235c8cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[21]);
    // 0x235c90: 0x46006b41  sub.s       $f13, $f13, $f0
    ctx->pc = 0x235c90u;
    ctx->f[13] = FPU_SUB_S(ctx->f[13], ctx->f[0]);
    // 0x235c94: 0x93a50041  lbu         $a1, 0x41($sp)
    ctx->pc = 0x235c94u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 65)));
    // 0x235c98: 0x460c0b01  sub.s       $f12, $f1, $f12
    ctx->pc = 0x235c98u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[12]);
    // 0x235c9c: 0x93a60042  lbu         $a2, 0x42($sp)
    ctx->pc = 0x235c9cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 66)));
    // 0x235ca0: 0x93a70043  lbu         $a3, 0x43($sp)
    ctx->pc = 0x235ca0u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 67)));
    // 0x235ca4: 0x4600bbc6  mov.s       $f15, $f23
    ctx->pc = 0x235ca4u;
    ctx->f[15] = FPU_MOV_S(ctx->f[23]);
    // 0x235ca8: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x235ca8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235cac: 0xc0da874  jal         func_36A1D0
    ctx->pc = 0x235CACu;
    SET_GPR_U32(ctx, 31, 0x235CB4u);
    ctx->pc = 0x235CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235CACu;
    // 0x235cb0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A1D0u, 0x235CACu, 0x235CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235CB4u;
label_235cb4:
    // 0x235cb4: 0x8fa20128  lw          $v0, 0x128($sp)
    ctx->pc = 0x235cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x235cb8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x235cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x235cbc: 0xafa20128  sw          $v0, 0x128($sp)
    ctx->pc = 0x235cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 2));
    // 0x235cc0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x235cc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x235cc4: 0x0  nop
    ctx->pc = 0x235cc4u;
    // NOP
    // 0x235cc8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x235cc8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x235ccc: 0xc641007c  lwc1        $f1, 0x7C($s2)
    ctx->pc = 0x235cccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x235cd0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x235cd0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x235cd4: 0x0  nop
    ctx->pc = 0x235cd4u;
    // NOP
    // 0x235cd8: 0x4501fdfd  bc1t        . + 4 + (-0x203 << 2)
    ctx->pc = 0x235CD8u;
    {
        const bool branch_taken_0x235cd8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x235CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235CD8u;
        // 0x235cdc: 0xc7a0011c  lwc1        $f0, 0x11C($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x235cd8) {
            ctx->pc = 0x2354D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2354d0;
        }
    }
    ctx->pc = 0x235CE0u;
label_235ce0:
    // 0x235ce0: 0xc0db0ea  jal         func_36C3A8
    ctx->pc = 0x235CE0u;
    SET_GPR_U32(ctx, 31, 0x235CE8u);
    ctx->pc = 0x235CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235CE0u;
    // 0x235ce4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C3A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C3A8u, 0x235CE0u, 0x235CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235CE8u;
label_235ce8:
    // 0x235ce8: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x235CE8u;
    {
        const bool branch_taken_0x235ce8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x235CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235CE8u;
        // 0x235cec: 0x3c030057  lui         $v1, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235ce8) {
            ctx->pc = 0x235CFCu;
            goto label_235cfc;
        }
    }
    ctx->pc = 0x235CF0u;
    // 0x235cf0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x235cf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x235cf4: 0xc0b2b08  jal         func_2CAC20
    ctx->pc = 0x235CF4u;
    SET_GPR_U32(ctx, 31, 0x235CFCu);
    ctx->pc = 0x235CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235CF4u;
    // 0x235cf8: 0x24645ad0  addiu       $a0, $v1, 0x5AD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 23248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CAC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CAC20u, 0x235CF4u, 0x235CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235CFCu;
label_235cfc:
    // 0x235cfc: 0xdfb00140  ld          $s0, 0x140($sp)
    ctx->pc = 0x235cfcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 320)));
label_235d00:
    // 0x235d00: 0xdfb10148  ld          $s1, 0x148($sp)
    ctx->pc = 0x235d00u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 328)));
label_235d04:
    // 0x235d04: 0xdfb20150  ld          $s2, 0x150($sp)
    ctx->pc = 0x235d04u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x235d08: 0xdfb30158  ld          $s3, 0x158($sp)
    ctx->pc = 0x235d08u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x235d0c: 0xdfb40160  ld          $s4, 0x160($sp)
    ctx->pc = 0x235d0cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x235d10: 0xdfb50168  ld          $s5, 0x168($sp)
    ctx->pc = 0x235d10u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x235d14: 0xdfb60170  ld          $s6, 0x170($sp)
    ctx->pc = 0x235d14u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x235d18: 0xdfb70178  ld          $s7, 0x178($sp)
    ctx->pc = 0x235d18u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x235d1c: 0xdfbe0180  ld          $fp, 0x180($sp)
    ctx->pc = 0x235d1cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x235d20: 0xdfbf0188  ld          $ra, 0x188($sp)
    ctx->pc = 0x235d20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x235d24: 0xc7bf01e8  lwc1        $f31, 0x1E8($sp)
    ctx->pc = 0x235d24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[31] = f; }
    // 0x235d28: 0xc7be01e0  lwc1        $f30, 0x1E0($sp)
    ctx->pc = 0x235d28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[30] = f; }
    // 0x235d2c: 0xc7bd01d8  lwc1        $f29, 0x1D8($sp)
    ctx->pc = 0x235d2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
    // 0x235d30: 0xc7bc01d0  lwc1        $f28, 0x1D0($sp)
    ctx->pc = 0x235d30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
    // 0x235d34: 0xc7bb01c8  lwc1        $f27, 0x1C8($sp)
    ctx->pc = 0x235d34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x235d38: 0xc7ba01c0  lwc1        $f26, 0x1C0($sp)
    ctx->pc = 0x235d38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x235d3c: 0xc7b901b8  lwc1        $f25, 0x1B8($sp)
    ctx->pc = 0x235d3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x235d40: 0xc7b801b0  lwc1        $f24, 0x1B0($sp)
    ctx->pc = 0x235d40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x235d44: 0xc7b701a8  lwc1        $f23, 0x1A8($sp)
    ctx->pc = 0x235d44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x235d48: 0xc7b601a0  lwc1        $f22, 0x1A0($sp)
    ctx->pc = 0x235d48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x235d4c: 0xc7b50198  lwc1        $f21, 0x198($sp)
    ctx->pc = 0x235d4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x235d50: 0xc7b40190  lwc1        $f20, 0x190($sp)
    ctx->pc = 0x235d50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x235d54: 0x3e00008  jr          $ra
    ctx->pc = 0x235D54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x235D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235D54u;
        // 0x235d58: 0x27bd01f0  addiu       $sp, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x235D54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x235D5Cu;
    // 0x235d5c: 0x0  nop
    ctx->pc = 0x235d5cu;
    // NOP
    ctx->pc = 0x235d60u;
}
