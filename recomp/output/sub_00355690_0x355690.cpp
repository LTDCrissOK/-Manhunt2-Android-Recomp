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

// Function: sub_00355690
// Address: 0x355690 - 0x355c38
void sub_00355690_0x355690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00355690_0x355690");
#endif

    switch (ctx->pc) {
        case 0x3556dcu: goto label_3556dc;
        case 0x3556e4u: goto label_3556e4;
        case 0x3556ecu: goto label_3556ec;
        case 0x35575cu: goto label_35575c;
        case 0x355790u: goto label_355790;
        case 0x355810u: goto label_355810;
        case 0x35581cu: goto label_35581c;
        case 0x355828u: goto label_355828;
        case 0x355834u: goto label_355834;
        case 0x355840u: goto label_355840;
        case 0x3558bcu: goto label_3558bc;
        case 0x3558d0u: goto label_3558d0;
        case 0x3558e0u: goto label_3558e0;
        case 0x355ab0u: goto label_355ab0;
        case 0x355ae4u: goto label_355ae4;
        case 0x355bbcu: goto label_355bbc;
        case 0x355bdcu: goto label_355bdc;
        case 0x355becu: goto label_355bec;
        case 0x355bf4u: goto label_355bf4;
        default: break;
    }

    ctx->pc = 0x355690u;

    // 0x355690: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x355690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
    // 0x355694: 0xffb40100  sd          $s4, 0x100($sp)
    ctx->pc = 0x355694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 20));
    // 0x355698: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x355698u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35569c: 0xffbe0120  sd          $fp, 0x120($sp)
    ctx->pc = 0x35569cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 30));
    // 0x3556a0: 0xffb000e0  sd          $s0, 0xE0($sp)
    ctx->pc = 0x3556a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 16));
    // 0x3556a4: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x3556a4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3556a8: 0xffb100e8  sd          $s1, 0xE8($sp)
    ctx->pc = 0x3556a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 232), GPR_U64(ctx, 17));
    // 0x3556ac: 0xffb200f0  sd          $s2, 0xF0($sp)
    ctx->pc = 0x3556acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 18));
    // 0x3556b0: 0xffb300f8  sd          $s3, 0xF8($sp)
    ctx->pc = 0x3556b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 248), GPR_U64(ctx, 19));
    // 0x3556b4: 0xffb50108  sd          $s5, 0x108($sp)
    ctx->pc = 0x3556b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 21));
    // 0x3556b8: 0xffb60110  sd          $s6, 0x110($sp)
    ctx->pc = 0x3556b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 22));
    // 0x3556bc: 0xffb70118  sd          $s7, 0x118($sp)
    ctx->pc = 0x3556bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 23));
    // 0x3556c0: 0xffbf0128  sd          $ra, 0x128($sp)
    ctx->pc = 0x3556c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 296), GPR_U64(ctx, 31));
    // 0x3556c4: 0xe7b80150  swc1        $f24, 0x150($sp)
    ctx->pc = 0x3556c4u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x3556c8: 0xe7b70148  swc1        $f23, 0x148($sp)
    ctx->pc = 0x3556c8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
    // 0x3556cc: 0xe7b60140  swc1        $f22, 0x140($sp)
    ctx->pc = 0x3556ccu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x3556d0: 0xe7b50138  swc1        $f21, 0x138($sp)
    ctx->pc = 0x3556d0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
    // 0x3556d4: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x3556D4u;
    SET_GPR_U32(ctx, 31, 0x3556DCu);
    ctx->pc = 0x3556D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3556D4u;
    // 0x3556d8: 0xe7b40130  swc1        $f20, 0x130($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x3556D4u, 0x3556DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3556DCu;
label_3556dc:
    // 0x3556dc: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x3556DCu;
    SET_GPR_U32(ctx, 31, 0x3556E4u);
    ctx->pc = 0x3556E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3556DCu;
    // 0x3556e0: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x3556DCu, 0x3556E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3556E4u;
label_3556e4:
    // 0x3556e4: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x3556E4u;
    SET_GPR_U32(ctx, 31, 0x3556ECu);
    ctx->pc = 0x3556E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3556E4u;
    // 0x3556e8: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x3556E4u, 0x3556ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3556ECu;
label_3556ec:
    // 0x3556ec: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x3556ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x3556f0: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x3556f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x3556f4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3556f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3556f8: 0xc4402d14  lwc1        $f0, 0x2D14($v0)
    ctx->pc = 0x3556f8u;
    { uint32_t bits = FAST_READ32(0x482D14u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3556fc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3556fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x355700: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x355700u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x355704: 0x44140800  mfc1        $s4, $f1
    ctx->pc = 0x355704u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 20, bits); }
    // 0x355708: 0x1280013a  beqz        $s4, . + 4 + (0x13A << 2)
    ctx->pc = 0x355708u;
    {
        const bool branch_taken_0x355708 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x35570Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355708u;
        // 0x35570c: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355708) {
            ctx->pc = 0x355BF4u;
            goto label_355bf4;
        }
    }
    ctx->pc = 0x355710u;
    // 0x355710: 0x8c64bd48  lw          $a0, -0x42B8($v1)
    ctx->pc = 0x355710u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950216)));
    // 0x355714: 0x8c820100  lw          $v0, 0x100($a0)
    ctx->pc = 0x355714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 256)));
    // 0x355718: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x355718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x35571c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x35571cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x355720: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x355720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x355724: 0x8c830100  lw          $v1, 0x100($a0)
    ctx->pc = 0x355724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 256)));
    // 0x355728: 0x24630060  addiu       $v1, $v1, 0x60
    ctx->pc = 0x355728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x35572c: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x35572cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x355730: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x355730u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x355734: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x355734u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x355738: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x355738u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
    // 0x35573c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x35573cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x355740: 0x8c64f428  lw          $a0, -0xBD8($v1)
    ctx->pc = 0x355740u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x4BF428u));
    // 0x355744: 0xac46ca8c  sw          $a2, -0x3574($v0)
    ctx->pc = 0x355744u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x6BCA8Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BCA8Cu, _value); } while (0);
    // 0x355748: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x355748u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35574c: 0x3c014140  lui         $at, 0x4140
    ctx->pc = 0x35574cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16704 << 16));
    // 0x355750: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x355750u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x355754: 0xc0daa5e  jal         func_36A978
    ctx->pc = 0x355754u;
    SET_GPR_U32(ctx, 31, 0x35575Cu);
    ctx->pc = 0x355758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x355754u;
    // 0x355758: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A978u, 0x355754u, 0x35575Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35575Cu;
label_35575c:
    // 0x35575c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x35575cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x355760: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x355760u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x355764: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x355764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x355768: 0x4480c000  mtc1        $zero, $f24
    ctx->pc = 0x355768u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x35576c: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x35576cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
    // 0x355770: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x355770u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355774: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x355774u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
    // 0x355778: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x355778u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x35577c: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x35577cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x355780: 0x2455bed0  addiu       $s5, $v0, -0x4130
    ctx->pc = 0x355780u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950608));
    // 0x355784: 0x27b60080  addiu       $s6, $sp, 0x80
    ctx->pc = 0x355784u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x355788: 0x26b30020  addiu       $s3, $s5, 0x20
    ctx->pc = 0x355788u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
    // 0x35578c: 0x2a0882d  daddu       $s1, $s5, $zero
    ctx->pc = 0x35578cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_355790:
    // 0x355790: 0x8e240030  lw          $a0, 0x30($s1)
    ctx->pc = 0x355790u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x355794: 0x108000d5  beqz        $a0, . + 4 + (0xD5 << 2)
    ctx->pc = 0x355794u;
    {
        const bool branch_taken_0x355794 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x355798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355794u;
        // 0x355798: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355794) {
            ctx->pc = 0x355AECu;
            goto label_355aec;
        }
    }
    ctx->pc = 0x35579Cu;
    // 0x35579c: 0x8c432b00  lw          $v1, 0x2B00($v0)
    ctx->pc = 0x35579cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11008)));
    // 0x3557a0: 0x641023  subu        $v0, $v1, $a0
    ctx->pc = 0x3557a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3557a4: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3557A4u;
    {
        const bool branch_taken_0x3557a4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3557A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3557A4u;
        // 0x3557a8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3557a4) {
            ctx->pc = 0x3557C0u;
            goto label_3557c0;
        }
    }
    ctx->pc = 0x3557ACu;
    // 0x3557ac: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x3557acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3557b0: 0x0  nop
    ctx->pc = 0x3557b0u;
    // NOP
    // 0x3557b4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x3557b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x3557b8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3557B8u;
    {
        const bool branch_taken_0x3557b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3557b8) {
            ctx->pc = 0x3557D8u;
            goto label_3557d8;
        }
    }
    ctx->pc = 0x3557C0u;
label_3557c0:
    // 0x3557c0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3557c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3557c4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3557c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3557c8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x3557c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3557cc: 0x0  nop
    ctx->pc = 0x3557ccu;
    // NOP
    // 0x3557d0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x3557d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x3557d4: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x3557d4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_3557d8:
    // 0x3557d8: 0x3c013a80  lui         $at, 0x3A80
    ctx->pc = 0x3557d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14976 << 16));
    // 0x3557dc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3557dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3557e0: 0xc6210034  lwc1        $f1, 0x34($s1)
    ctx->pc = 0x3557e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3557e4: 0x46001502  mul.s       $f20, $f2, $f0
    ctx->pc = 0x3557e4u;
    ctx->f[20] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x3557e8: 0x46140834  c.lt.s      $f1, $f20
    ctx->pc = 0x3557e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3557ec: 0x0  nop
    ctx->pc = 0x3557ecu;
    // NOP
    // 0x3557f0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x3557F0u;
    {
        const bool branch_taken_0x3557f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3557f0) {
            ctx->pc = 0x355800u;
            goto label_355800;
        }
    }
    ctx->pc = 0x3557F8u;
    // 0x3557f8: 0x100000f0  b           . + 4 + (0xF0 << 2)
    ctx->pc = 0x3557F8u;
    {
        const bool branch_taken_0x3557f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3557FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3557F8u;
        // 0x3557fc: 0xae200030  sw          $zero, 0x30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3557f8) {
            ctx->pc = 0x355BBCu;
            goto label_355bbc;
        }
    }
    ctx->pc = 0x355800u;
label_355800:
    // 0x355800: 0x17c0000f  bnez        $fp, . + 4 + (0xF << 2)
    ctx->pc = 0x355800u;
    {
        const bool branch_taken_0x355800 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        if (branch_taken_0x355800) {
            ctx->pc = 0x355840u;
            goto label_355840;
        }
    }
    ctx->pc = 0x355808u;
    // 0x355808: 0xc0db198  jal         func_36C660
    ctx->pc = 0x355808u;
    SET_GPR_U32(ctx, 31, 0x355810u);
    ctx->pc = 0x35580Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x355808u;
    // 0x35580c: 0x241e0001  addiu       $fp, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C660u, 0x355808u, 0x355810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355810u;
label_355810:
    // 0x355810: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x355810u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x355814: 0xc0db170  jal         func_36C5C0
    ctx->pc = 0x355814u;
    SET_GPR_U32(ctx, 31, 0x35581Cu);
    ctx->pc = 0x355818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x355814u;
    // 0x355818: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C5C0u, 0x355814u, 0x35581Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35581Cu;
label_35581c:
    // 0x35581c: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x35581cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x355820: 0xc0db21c  jal         func_36C870
    ctx->pc = 0x355820u;
    SET_GPR_U32(ctx, 31, 0x355828u);
    ctx->pc = 0x355824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x355820u;
    // 0x355824: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C870u, 0x355820u, 0x355828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355828u;
label_355828:
    // 0x355828: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x355828u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x35582c: 0xc0db21c  jal         func_36C870
    ctx->pc = 0x35582Cu;
    SET_GPR_U32(ctx, 31, 0x355834u);
    ctx->pc = 0x355830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35582Cu;
    // 0x355830: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C870u, 0x35582Cu, 0x355834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355834u;
label_355834:
    // 0x355834: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x355834u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x355838: 0xc0db21c  jal         func_36C870
    ctx->pc = 0x355838u;
    SET_GPR_U32(ctx, 31, 0x355840u);
    ctx->pc = 0x35583Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x355838u;
    // 0x35583c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C870u, 0x355838u, 0x355840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355840u;
label_355840:
    // 0x355840: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x355840u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x355844: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x355844u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x355848: 0x0  nop
    ctx->pc = 0x355848u;
    // NOP
    // 0x35584c: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x35584cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x355850: 0x0  nop
    ctx->pc = 0x355850u;
    // NOP
    // 0x355854: 0x4502000a  bc1fl       . + 4 + (0xA << 2)
    ctx->pc = 0x355854u;
    {
        const bool branch_taken_0x355854 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x355854) {
            ctx->pc = 0x355858u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x355854u;
            // 0x355858: 0xc6210034  lwc1        $f1, 0x34($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x355880u;
            goto label_355880;
        }
    }
    ctx->pc = 0x35585Cu;
    // 0x35585c: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x35585cu;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x355860: 0x0  nop
    ctx->pc = 0x355860u;
    // NOP
    // 0x355864: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x355864u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x355868: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x355868u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x35586c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x35586cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x355870: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x355870u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x355874: 0x44120800  mfc1        $s2, $f1
    ctx->pc = 0x355874u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 18, bits); }
    // 0x355878: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x355878u;
    {
        const bool branch_taken_0x355878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x355878) {
            ctx->pc = 0x3558B4u;
            goto label_3558b4;
        }
    }
    ctx->pc = 0x355880u;
label_355880:
    // 0x355880: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x355880u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x355884: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x355884u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x355888: 0x0  nop
    ctx->pc = 0x355888u;
    // NOP
    // 0x35588c: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x35588Cu;
    {
        const bool branch_taken_0x35588c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x355890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35588Cu;
        // 0x355890: 0x280902d  daddu       $s2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35588c) {
            ctx->pc = 0x3558B4u;
            goto label_3558b4;
        }
    }
    ctx->pc = 0x355894u;
    // 0x355894: 0x46140841  sub.s       $f1, $f1, $f20
    ctx->pc = 0x355894u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[20]);
    // 0x355898: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x355898u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x35589c: 0x0  nop
    ctx->pc = 0x35589cu;
    // NOP
    // 0x3558a0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3558a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3558a4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3558a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3558a8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3558a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x3558ac: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3558acu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3558b0: 0x44120800  mfc1        $s2, $f1
    ctx->pc = 0x3558b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 18, bits); }
label_3558b4:
    // 0x3558b4: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x3558B4u;
    SET_GPR_U32(ctx, 31, 0x3558BCu);
    ctx->pc = 0x3558B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3558B4u;
    // 0x3558b8: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x3558B4u, 0x3558BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3558BCu;
label_3558bc:
    // 0x3558bc: 0xc62c0038  lwc1        $f12, 0x38($s1)
    ctx->pc = 0x3558bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3558c0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3558c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3558c4: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3558c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3558c8: 0xc0b1574  jal         func_2C55D0
    ctx->pc = 0x3558C8u;
    SET_GPR_U32(ctx, 31, 0x3558D0u);
    ctx->pc = 0x3558CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3558C8u;
    // 0x3558cc: 0x46006307  neg.s       $f12, $f12 (Delay Slot)
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C55D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C55D0u, 0x3558C8u, 0x3558D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3558D0u;
label_3558d0:
    // 0x3558d0: 0x26b00010  addiu       $s0, $s5, 0x10
    ctx->pc = 0x3558d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x3558d4: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x3558d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x3558d8: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x3558D8u;
    SET_GPR_U32(ctx, 31, 0x3558E0u);
    ctx->pc = 0x3558DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3558D8u;
    // 0x3558dc: 0x2f08021  addu        $s0, $s7, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x3558D8u, 0x3558E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3558E0u;
label_3558e0:
    // 0x3558e0: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x3558e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3558e4: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x3558e4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3558e8: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x3558e8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3558ec: 0xd8430010  lqc2        $vf3, 0x10($v0)
    ctx->pc = 0x3558ecu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x3558f0: 0xd8440020  lqc2        $vf4, 0x20($v0)
    ctx->pc = 0x3558f0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x3558f4: 0xd8450030  lqc2        $vf5, 0x30($v0)
    ctx->pc = 0x3558f4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x3558f8: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x3558f8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x3558fc: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x3558fcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x355900: 0x4bc1214a  vmaddz.xyz  $vf5, $vf4, $vf1z
    ctx->pc = 0x355900u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x355904: 0xfba50080  sqc2        $vf5, 0x80($sp)
    ctx->pc = 0x355904u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x355908: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x355908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35590c: 0x27b00090  addiu       $s0, $sp, 0x90
    ctx->pc = 0x35590cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x355910: 0xc7a60084  lwc1        $f6, 0x84($sp)
    ctx->pc = 0x355910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x355914: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x355914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x355918: 0xc7a70088  lwc1        $f7, 0x88($sp)
    ctx->pc = 0x355918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x35591c: 0x4601a102  mul.s       $f4, $f20, $f1
    ctx->pc = 0x35591cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x355920: 0xc7a5008c  lwc1        $f5, 0x8C($sp)
    ctx->pc = 0x355920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x355924: 0x4606a082  mul.s       $f2, $f20, $f6
    ctx->pc = 0x355924u;
    ctx->f[2] = FPU_MUL_S(ctx->f[20], ctx->f[6]);
    // 0x355928: 0x4607a0c2  mul.s       $f3, $f20, $f7
    ctx->pc = 0x355928u;
    ctx->f[3] = FPU_MUL_S(ctx->f[20], ctx->f[7]);
    // 0x35592c: 0xe7a10070  swc1        $f1, 0x70($sp)
    ctx->pc = 0x35592cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x355930: 0x4605a002  mul.s       $f0, $f20, $f5
    ctx->pc = 0x355930u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[5]);
    // 0x355934: 0xe7a40090  swc1        $f4, 0x90($sp)
    ctx->pc = 0x355934u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x355938: 0xe7a20094  swc1        $f2, 0x94($sp)
    ctx->pc = 0x355938u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x35593c: 0xe7a30098  swc1        $f3, 0x98($sp)
    ctx->pc = 0x35593cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x355940: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x355940u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x355944: 0xe7a60074  swc1        $f6, 0x74($sp)
    ctx->pc = 0x355944u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x355948: 0xe7a70078  swc1        $f7, 0x78($sp)
    ctx->pc = 0x355948u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x35594c: 0xe7a5007c  swc1        $f5, 0x7C($sp)
    ctx->pc = 0x35594cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x355950: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x355950u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x355954: 0xda020000  lqc2        $vf2, 0x0($s0)
    ctx->pc = 0x355954u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x355958: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x355958u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x35595c: 0xfba100a0  sqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x35595cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x355960: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x355960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x355964: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x355964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x355968: 0xc7a200a8  lwc1        $f2, 0xA8($sp)
    ctx->pc = 0x355968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x35596c: 0xc7a300ac  lwc1        $f3, 0xAC($sp)
    ctx->pc = 0x35596cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x355970: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x355970u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x355974: 0xe7a10084  swc1        $f1, 0x84($sp)
    ctx->pc = 0x355974u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x355978: 0xe7a20088  swc1        $f2, 0x88($sp)
    ctx->pc = 0x355978u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x35597c: 0xe7a3008c  swc1        $f3, 0x8C($sp)
    ctx->pc = 0x35597cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x355980: 0xdac10000  lqc2        $vf1, 0x0($s6)
    ctx->pc = 0x355980u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x355984: 0xfa210020  sqc2        $vf1, 0x20($s1)
    ctx->pc = 0x355984u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x355988: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x355988u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x35598c: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x35598cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x355990: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x355990u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x355994: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x355994u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x355998: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x355998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35599c: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x35599cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3559a0: 0xc7a20098  lwc1        $f2, 0x98($sp)
    ctx->pc = 0x3559a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3559a4: 0xc7a5009c  lwc1        $f5, 0x9C($sp)
    ctx->pc = 0x3559a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x3559a8: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x3559a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x3559ac: 0xe7a10084  swc1        $f1, 0x84($sp)
    ctx->pc = 0x3559acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x3559b0: 0xe7a20088  swc1        $f2, 0x88($sp)
    ctx->pc = 0x3559b0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x3559b4: 0xe7a5008c  swc1        $f5, 0x8C($sp)
    ctx->pc = 0x3559b4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x3559b8: 0xc6c20000  lwc1        $f2, 0x0($s6)
    ctx->pc = 0x3559b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3559bc: 0xc6c30004  lwc1        $f3, 0x4($s6)
    ctx->pc = 0x3559bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3559c0: 0xc6c40008  lwc1        $f4, 0x8($s6)
    ctx->pc = 0x3559c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3559c4: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x3559c4u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x3559c8: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x3559c8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x3559cc: 0x4604251c  madd.s      $f20, $f4, $f4
    ctx->pc = 0x3559ccu;
    ctx->f[20] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x3559d0: 0x46140504  c1          0x140504
    ctx->pc = 0x3559d0u;
    ctx->f[20] = FPU_SQRT_S(ctx->f[0]);
    // 0x3559d4: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x3559d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3559d8: 0xc6c20000  lwc1        $f2, 0x0($s6)
    ctx->pc = 0x3559d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3559dc: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x3559dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3559e0: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x3559e0u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x3559e4: 0xc6c20004  lwc1        $f2, 0x4($s6)
    ctx->pc = 0x3559e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3559e8: 0xc4630004  lwc1        $f3, 0x4($v1)
    ctx->pc = 0x3559e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3559ec: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x3559ecu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x3559f0: 0xc6c20008  lwc1        $f2, 0x8($s6)
    ctx->pc = 0x3559f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3559f4: 0xc4630008  lwc1        $f3, 0x8($v1)
    ctx->pc = 0x3559f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3559f8: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x3559f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x3559fc: 0x46180034  c.lt.s      $f0, $f24
    ctx->pc = 0x3559fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[24])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x355a00: 0x0  nop
    ctx->pc = 0x355a00u;
    // NOP
    // 0x355a04: 0x4500002a  bc1f        . + 4 + (0x2A << 2)
    ctx->pc = 0x355A04u;
    {
        const bool branch_taken_0x355a04 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x355A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355A04u;
        // 0x355a08: 0xc7a10020  lwc1        $f1, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x355a04) {
            ctx->pc = 0x355AB0u;
            goto label_355ab0;
        }
    }
    ctx->pc = 0x355A0Cu;
    // 0x355a0c: 0xc7a20024  lwc1        $f2, 0x24($sp)
    ctx->pc = 0x355a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x355a10: 0xc7a30028  lwc1        $f3, 0x28($sp)
    ctx->pc = 0x355a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x355a14: 0x46160842  mul.s       $f1, $f1, $f22
    ctx->pc = 0x355a14u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[22]);
    // 0x355a18: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x355a18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x355a1c: 0x46161082  mul.s       $f2, $f2, $f22
    ctx->pc = 0x355a1cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[22]);
    // 0x355a20: 0x461618c2  mul.s       $f3, $f3, $f22
    ctx->pc = 0x355a20u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[22]);
    // 0x355a24: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x355a24u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x355a28: 0xe7a100b0  swc1        $f1, 0xB0($sp)
    ctx->pc = 0x355a28u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x355a2c: 0xe7a200b4  swc1        $f2, 0xB4($sp)
    ctx->pc = 0x355a2cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x355a30: 0x46150842  mul.s       $f1, $f1, $f21
    ctx->pc = 0x355a30u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
    // 0x355a34: 0xe7a300b8  swc1        $f3, 0xB8($sp)
    ctx->pc = 0x355a34u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x355a38: 0x46151082  mul.s       $f2, $f2, $f21
    ctx->pc = 0x355a38u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[21]);
    // 0x355a3c: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x355a3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x355a40: 0x461518c2  mul.s       $f3, $f3, $f21
    ctx->pc = 0x355a40u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[21]);
    // 0x355a44: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x355a44u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x355a48: 0xe7a100a0  swc1        $f1, 0xA0($sp)
    ctx->pc = 0x355a48u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x355a4c: 0xe7a200a4  swc1        $f2, 0xA4($sp)
    ctx->pc = 0x355a4cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x355a50: 0xe7a300a8  swc1        $f3, 0xA8($sp)
    ctx->pc = 0x355a50u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x355a54: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x355a54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x355a58: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x355a58u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x355a5c: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x355a5cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x355a60: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x355a60u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x355a64: 0xfba100c0  sqc2        $vf1, 0xC0($sp)
    ctx->pc = 0x355a64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x355a68: 0xc7ac00c4  lwc1        $f12, 0xC4($sp)
    ctx->pc = 0x355a68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x355a6c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x355a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x355a70: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x355a70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x355a74: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x355a74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355a78: 0xc7a200c0  lwc1        $f2, 0xC0($sp)
    ctx->pc = 0x355a78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x355a7c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x355a7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355a80: 0xc7a100cc  lwc1        $f1, 0xCC($sp)
    ctx->pc = 0x355a80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x355a84: 0xe7ac0094  swc1        $f12, 0x94($sp)
    ctx->pc = 0x355a84u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x355a88: 0xe7a20090  swc1        $f2, 0x90($sp)
    ctx->pc = 0x355a88u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x355a8c: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x355a8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x355a90: 0xe7a1009c  swc1        $f1, 0x9C($sp)
    ctx->pc = 0x355a90u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x355a94: 0x8c62bd50  lw          $v0, -0x42B0($v1)
    ctx->pc = 0x355a94u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FBD50u));
    // 0x355a98: 0x8c430104  lw          $v1, 0x104($v0)
    ctx->pc = 0x355a98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    // 0x355a9c: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x355a9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x355aa0: 0xc4c00074  lwc1        $f0, 0x74($a2)
    ctx->pc = 0x355aa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x355aa4: 0x46006301  sub.s       $f12, $f12, $f0
    ctx->pc = 0x355aa4u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x355aa8: 0xc0d5514  jal         func_355450
    ctx->pc = 0x355AA8u;
    SET_GPR_U32(ctx, 31, 0x355AB0u);
    ctx->pc = 0x355AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x355AA8u;
    // 0x355aac: 0x46176300  add.s       $f12, $f12, $f23 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x355450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x355450u, 0x355AA8u, 0x355AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355AB0u;
label_355ab0:
    // 0x355ab0: 0xc6630000  lwc1        $f3, 0x0($s3)
    ctx->pc = 0x355ab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x355ab4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x355ab4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355ab8: 0xc6620004  lwc1        $f2, 0x4($s3)
    ctx->pc = 0x355ab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x355abc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x355abcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355ac0: 0xc6610008  lwc1        $f1, 0x8($s3)
    ctx->pc = 0x355ac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x355ac4: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x355ac4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x355ac8: 0xc660000c  lwc1        $f0, 0xC($s3)
    ctx->pc = 0x355ac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x355acc: 0xc62c0038  lwc1        $f12, 0x38($s1)
    ctx->pc = 0x355accu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x355ad0: 0xe7a30090  swc1        $f3, 0x90($sp)
    ctx->pc = 0x355ad0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x355ad4: 0xe7a20094  swc1        $f2, 0x94($sp)
    ctx->pc = 0x355ad4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x355ad8: 0xe7a10098  swc1        $f1, 0x98($sp)
    ctx->pc = 0x355ad8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x355adc: 0xc0d535e  jal         func_354D78
    ctx->pc = 0x355ADCu;
    SET_GPR_U32(ctx, 31, 0x355AE4u);
    ctx->pc = 0x355AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x355ADCu;
    // 0x355ae0: 0xe7a0009c  swc1        $f0, 0x9C($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x354D78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x354D78u, 0x355ADCu, 0x355AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355AE4u;
label_355ae4:
    // 0x355ae4: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x355AE4u;
    {
        const bool branch_taken_0x355ae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x355AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355AE4u;
        // 0x355ae8: 0x26310040  addiu       $s1, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355ae4) {
            ctx->pc = 0x355BC0u;
            goto label_355bc0;
        }
    }
    ctx->pc = 0x355AECu;
label_355aec:
    // 0x355aec: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x355aecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x355af0: 0xc4402d14  lwc1        $f0, 0x2D14($v0)
    ctx->pc = 0x355af0u;
    { uint32_t bits = FAST_READ32(0x482D14u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x355af4: 0x46180032  c.eq.s      $f0, $f24
    ctx->pc = 0x355af4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[24])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x355af8: 0x0  nop
    ctx->pc = 0x355af8u;
    // NOP
    // 0x355afc: 0x45030030  bc1tl       . + 4 + (0x30 << 2)
    ctx->pc = 0x355AFCu;
    {
        const bool branch_taken_0x355afc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x355afc) {
            ctx->pc = 0x355B00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x355AFCu;
            // 0x355b00: 0x26310040  addiu       $s1, $s1, 0x40 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
            ctx->in_delay_slot = false;
            ctx->pc = 0x355BC0u;
            goto label_355bc0;
        }
    }
    ctx->pc = 0x355B04u;
    // 0x355b04: 0x26a20640  addiu       $v0, $s5, 0x640
    ctx->pc = 0x355b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 1600));
    // 0x355b08: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x355b08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x355b0c: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x355B0Cu;
    {
        const bool branch_taken_0x355b0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x355B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355B0Cu;
        // 0x355b10: 0xc7a10020  lwc1        $f1, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x355b0c) {
            ctx->pc = 0x355BBCu;
            goto label_355bbc;
        }
    }
    ctx->pc = 0x355B14u;
    // 0x355b14: 0xc7a20024  lwc1        $f2, 0x24($sp)
    ctx->pc = 0x355b14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x355b18: 0xc7a30028  lwc1        $f3, 0x28($sp)
    ctx->pc = 0x355b18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x355b1c: 0x46160842  mul.s       $f1, $f1, $f22
    ctx->pc = 0x355b1cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[22]);
    // 0x355b20: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x355b20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x355b24: 0x46161082  mul.s       $f2, $f2, $f22
    ctx->pc = 0x355b24u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[22]);
    // 0x355b28: 0x461618c2  mul.s       $f3, $f3, $f22
    ctx->pc = 0x355b28u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[22]);
    // 0x355b2c: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x355b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x355b30: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x355b30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x355b34: 0xe7a10050  swc1        $f1, 0x50($sp)
    ctx->pc = 0x355b34u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x355b38: 0xe7a20054  swc1        $f2, 0x54($sp)
    ctx->pc = 0x355b38u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x355b3c: 0x46150842  mul.s       $f1, $f1, $f21
    ctx->pc = 0x355b3cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
    // 0x355b40: 0xe7a30058  swc1        $f3, 0x58($sp)
    ctx->pc = 0x355b40u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x355b44: 0x46151082  mul.s       $f2, $f2, $f21
    ctx->pc = 0x355b44u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[21]);
    // 0x355b48: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x355b48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x355b4c: 0x461518c2  mul.s       $f3, $f3, $f21
    ctx->pc = 0x355b4cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[21]);
    // 0x355b50: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x355b50u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x355b54: 0xe7a10040  swc1        $f1, 0x40($sp)
    ctx->pc = 0x355b54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x355b58: 0xe7a20044  swc1        $f2, 0x44($sp)
    ctx->pc = 0x355b58u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x355b5c: 0xe7a30048  swc1        $f3, 0x48($sp)
    ctx->pc = 0x355b5cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x355b60: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x355b60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x355b64: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x355b64u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x355b68: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x355b68u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x355b6c: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x355b6cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x355b70: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x355b70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x355b74: 0xc7ac0064  lwc1        $f12, 0x64($sp)
    ctx->pc = 0x355b74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x355b78: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x355b78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x355b7c: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x355b7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x355b80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x355b80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355b84: 0xc7a20060  lwc1        $f2, 0x60($sp)
    ctx->pc = 0x355b84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x355b88: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x355b88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x355b8c: 0xc7a1006c  lwc1        $f1, 0x6C($sp)
    ctx->pc = 0x355b8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x355b90: 0xe7ac0034  swc1        $f12, 0x34($sp)
    ctx->pc = 0x355b90u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x355b94: 0xe7a20030  swc1        $f2, 0x30($sp)
    ctx->pc = 0x355b94u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x355b98: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x355b98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x355b9c: 0xe7a1003c  swc1        $f1, 0x3C($sp)
    ctx->pc = 0x355b9cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x355ba0: 0x8c62bd50  lw          $v0, -0x42B0($v1)
    ctx->pc = 0x355ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FBD50u));
    // 0x355ba4: 0x8c430104  lw          $v1, 0x104($v0)
    ctx->pc = 0x355ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    // 0x355ba8: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x355ba8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x355bac: 0xc4c00074  lwc1        $f0, 0x74($a2)
    ctx->pc = 0x355bacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x355bb0: 0x46006301  sub.s       $f12, $f12, $f0
    ctx->pc = 0x355bb0u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x355bb4: 0xc0d5514  jal         func_355450
    ctx->pc = 0x355BB4u;
    SET_GPR_U32(ctx, 31, 0x355BBCu);
    ctx->pc = 0x355BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x355BB4u;
    // 0x355bb8: 0x46176300  add.s       $f12, $f12, $f23 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x355450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x355450u, 0x355BB4u, 0x355BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355BBCu;
label_355bbc:
    // 0x355bbc: 0x26310040  addiu       $s1, $s1, 0x40
    ctx->pc = 0x355bbcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
label_355bc0:
    // 0x355bc0: 0x26a20640  addiu       $v0, $s5, 0x640
    ctx->pc = 0x355bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 1600));
    // 0x355bc4: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x355bc4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x355bc8: 0x26730040  addiu       $s3, $s3, 0x40
    ctx->pc = 0x355bc8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
    // 0x355bcc: 0x1440fef0  bnez        $v0, . + 4 + (-0x110 << 2)
    ctx->pc = 0x355BCCu;
    {
        const bool branch_taken_0x355bcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x355BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355BCCu;
        // 0x355bd0: 0x26f70040  addiu       $s7, $s7, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355bcc) {
            ctx->pc = 0x355790u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_355790;
        }
    }
    ctx->pc = 0x355BD4u;
    // 0x355bd4: 0xc0daa80  jal         func_36AA00
    ctx->pc = 0x355BD4u;
    SET_GPR_U32(ctx, 31, 0x355BDCu);
    ctx->pc = 0x355BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x355BD4u;
    // 0x355bd8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36AA00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36AA00u, 0x355BD4u, 0x355BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355BDCu;
label_355bdc:
    // 0x355bdc: 0x13c00006  beqz        $fp, . + 4 + (0x6 << 2)
    ctx->pc = 0x355BDCu;
    {
        const bool branch_taken_0x355bdc = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x355BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355BDCu;
        // 0x355be0: 0xdfb000e0  ld          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355bdc) {
            ctx->pc = 0x355BF8u;
            goto label_355bf8;
        }
    }
    ctx->pc = 0x355BE4u;
    // 0x355be4: 0xc0db1ae  jal         func_36C6B8
    ctx->pc = 0x355BE4u;
    SET_GPR_U32(ctx, 31, 0x355BECu);
    ctx->pc = 0x36C6B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C6B8u, 0x355BE4u, 0x355BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355BECu;
label_355bec:
    // 0x355bec: 0xc0db20a  jal         func_36C828
    ctx->pc = 0x355BECu;
    SET_GPR_U32(ctx, 31, 0x355BF4u);
    ctx->pc = 0x36C828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C828u, 0x355BECu, 0x355BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355BF4u;
label_355bf4:
    // 0x355bf4: 0xdfb000e0  ld          $s0, 0xE0($sp)
    ctx->pc = 0x355bf4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 224)));
label_355bf8:
    // 0x355bf8: 0xdfb100e8  ld          $s1, 0xE8($sp)
    ctx->pc = 0x355bf8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x355bfc: 0xdfb200f0  ld          $s2, 0xF0($sp)
    ctx->pc = 0x355bfcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x355c00: 0xdfb300f8  ld          $s3, 0xF8($sp)
    ctx->pc = 0x355c00u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x355c04: 0xdfb40100  ld          $s4, 0x100($sp)
    ctx->pc = 0x355c04u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x355c08: 0xdfb50108  ld          $s5, 0x108($sp)
    ctx->pc = 0x355c08u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x355c0c: 0xdfb60110  ld          $s6, 0x110($sp)
    ctx->pc = 0x355c0cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x355c10: 0xdfb70118  ld          $s7, 0x118($sp)
    ctx->pc = 0x355c10u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x355c14: 0xdfbe0120  ld          $fp, 0x120($sp)
    ctx->pc = 0x355c14u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x355c18: 0xdfbf0128  ld          $ra, 0x128($sp)
    ctx->pc = 0x355c18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x355c1c: 0xc7b80150  lwc1        $f24, 0x150($sp)
    ctx->pc = 0x355c1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x355c20: 0xc7b70148  lwc1        $f23, 0x148($sp)
    ctx->pc = 0x355c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x355c24: 0xc7b60140  lwc1        $f22, 0x140($sp)
    ctx->pc = 0x355c24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x355c28: 0xc7b50138  lwc1        $f21, 0x138($sp)
    ctx->pc = 0x355c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x355c2c: 0xc7b40130  lwc1        $f20, 0x130($sp)
    ctx->pc = 0x355c2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x355c30: 0x3e00008  jr          $ra
    ctx->pc = 0x355C30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x355C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355C30u;
        // 0x355c34: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x355C30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x355C38u;
}
