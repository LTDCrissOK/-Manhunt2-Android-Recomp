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

// Function: sub_0033B8E0
// Address: 0x33b8e0 - 0x33c7e0
void sub_0033B8E0_0x33b8e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033B8E0_0x33b8e0");
#endif

    switch (ctx->pc) {
        case 0x33b934u: goto label_33b934;
        case 0x33b990u: goto label_33b990;
        case 0x33b99cu: goto label_33b99c;
        case 0x33b9a4u: goto label_33b9a4;
        case 0x33b9b0u: goto label_33b9b0;
        case 0x33b9bcu: goto label_33b9bc;
        case 0x33b9c8u: goto label_33b9c8;
        case 0x33b9d4u: goto label_33b9d4;
        case 0x33b9e0u: goto label_33b9e0;
        case 0x33b9e8u: goto label_33b9e8;
        case 0x33b9f0u: goto label_33b9f0;
        case 0x33ba58u: goto label_33ba58;
        case 0x33ba60u: goto label_33ba60;
        case 0x33ba68u: goto label_33ba68;
        case 0x33ba74u: goto label_33ba74;
        case 0x33ba84u: goto label_33ba84;
        case 0x33bd50u: goto label_33bd50;
        case 0x33bd70u: goto label_33bd70;
        case 0x33be14u: goto label_33be14;
        case 0x33be58u: goto label_33be58;
        case 0x33bfb8u: goto label_33bfb8;
        case 0x33bfc0u: goto label_33bfc0;
        case 0x33bfc8u: goto label_33bfc8;
        case 0x33bfd4u: goto label_33bfd4;
        case 0x33bfe4u: goto label_33bfe4;
        case 0x33c2a8u: goto label_33c2a8;
        case 0x33c2c0u: goto label_33c2c0;
        case 0x33c34cu: goto label_33c34c;
        case 0x33c36cu: goto label_33c36c;
        case 0x33c398u: goto label_33c398;
        case 0x33c44cu: goto label_33c44c;
        case 0x33c454u: goto label_33c454;
        case 0x33c45cu: goto label_33c45c;
        case 0x33c468u: goto label_33c468;
        case 0x33c478u: goto label_33c478;
        case 0x33c728u: goto label_33c728;
        case 0x33c764u: goto label_33c764;
        case 0x33c77cu: goto label_33c77c;
        case 0x33c784u: goto label_33c784;
        case 0x33c78cu: goto label_33c78c;
        default: break;
    }

    ctx->pc = 0x33b8e0u;

    // 0x33b8e0: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x33b8e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
    // 0x33b8e4: 0xffb00100  sd          $s0, 0x100($sp)
    ctx->pc = 0x33b8e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 16));
    // 0x33b8e8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x33b8e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b8ec: 0xffb10108  sd          $s1, 0x108($sp)
    ctx->pc = 0x33b8ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 17));
    // 0x33b8f0: 0xffb20110  sd          $s2, 0x110($sp)
    ctx->pc = 0x33b8f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 18));
    // 0x33b8f4: 0xffb30118  sd          $s3, 0x118($sp)
    ctx->pc = 0x33b8f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 19));
    // 0x33b8f8: 0xffb40120  sd          $s4, 0x120($sp)
    ctx->pc = 0x33b8f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 20));
    // 0x33b8fc: 0xffb50128  sd          $s5, 0x128($sp)
    ctx->pc = 0x33b8fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 296), GPR_U64(ctx, 21));
    // 0x33b900: 0xffb60130  sd          $s6, 0x130($sp)
    ctx->pc = 0x33b900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 22));
    // 0x33b904: 0xffb70138  sd          $s7, 0x138($sp)
    ctx->pc = 0x33b904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 312), GPR_U64(ctx, 23));
    // 0x33b908: 0xffbe0140  sd          $fp, 0x140($sp)
    ctx->pc = 0x33b908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 30));
    // 0x33b90c: 0xffbf0148  sd          $ra, 0x148($sp)
    ctx->pc = 0x33b90cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 328), GPR_U64(ctx, 31));
    // 0x33b910: 0xe7bb0188  swc1        $f27, 0x188($sp)
    ctx->pc = 0x33b910u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
    // 0x33b914: 0xe7ba0180  swc1        $f26, 0x180($sp)
    ctx->pc = 0x33b914u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
    // 0x33b918: 0xe7b90178  swc1        $f25, 0x178($sp)
    ctx->pc = 0x33b918u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 376), bits); }
    // 0x33b91c: 0xe7b80170  swc1        $f24, 0x170($sp)
    ctx->pc = 0x33b91cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
    // 0x33b920: 0xe7b70168  swc1        $f23, 0x168($sp)
    ctx->pc = 0x33b920u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
    // 0x33b924: 0xe7b60160  swc1        $f22, 0x160($sp)
    ctx->pc = 0x33b924u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
    // 0x33b928: 0xe7b50158  swc1        $f21, 0x158($sp)
    ctx->pc = 0x33b928u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
    // 0x33b92c: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x33B92Cu;
    SET_GPR_U32(ctx, 31, 0x33B934u);
    ctx->pc = 0x33B930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33B92Cu;
    // 0x33b930: 0xe7b40150  swc1        $f20, 0x150($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x33B92Cu, 0x33B934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33B934u;
label_33b934:
    // 0x33b934: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x33b934u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x33b938: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x33b938u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x33b93c: 0xc4402cb0  lwc1        $f0, 0x2CB0($v0)
    ctx->pc = 0x33b93cu;
    { uint32_t bits = FAST_READ32(0x482CB0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33b940: 0xc4612cb4  lwc1        $f1, 0x2CB4($v1)
    ctx->pc = 0x33b940u;
    { uint32_t bits = FAST_READ32(0x482CB4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33b944: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x33b944u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x33b948: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x33b948u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
    // 0x33b94c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x33b94cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x33b950: 0x0  nop
    ctx->pc = 0x33b950u;
    // NOP
    // 0x33b954: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x33B954u;
    {
        const bool branch_taken_0x33b954 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x33B958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B954u;
        // 0x33b958: 0xafa00044  sw          $zero, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b954) {
            ctx->pc = 0x33B960u;
            goto label_33b960;
        }
    }
    ctx->pc = 0x33B95Cu;
    // 0x33b95c: 0x46000886  mov.s       $f2, $f1
    ctx->pc = 0x33b95cu;
    ctx->f[2] = FPU_MOV_S(ctx->f[1]);
label_33b960:
    // 0x33b960: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x33b960u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x33b964: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x33b964u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33b968: 0x3c100048  lui         $s0, 0x48
    ctx->pc = 0x33b968u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)72 << 16));
    // 0x33b96c: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x33b96cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x33b970: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x33b970u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x33b974: 0x3c110040  lui         $s1, 0x40
    ctx->pc = 0x33b974u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)64 << 16));
    // 0x33b978: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x33b978u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x33b97c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x33b97cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x33b980: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x33b980u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x33b984: 0x44120800  mfc1        $s2, $f1
    ctx->pc = 0x33b984u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 18, bits); }
    // 0x33b988: 0xc0e3f98  jal         func_38FE60
    ctx->pc = 0x33B988u;
    SET_GPR_U32(ctx, 31, 0x33B990u);
    ctx->pc = 0x33B98Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33B988u;
    // 0x33b98c: 0xc60c2ca8  lwc1        $f12, 0x2CA8($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 11432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FE60u, 0x33B988u, 0x33B990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33B990u;
label_33b990:
    // 0x33b990: 0xc60c2ca8  lwc1        $f12, 0x2CA8($s0)
    ctx->pc = 0x33b990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 11432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x33b994: 0xc0e3f1c  jal         func_38FC70
    ctx->pc = 0x33B994u;
    SET_GPR_U32(ctx, 31, 0x33B99Cu);
    ctx->pc = 0x33B998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33B994u;
    // 0x33b998: 0x46000686  mov.s       $f26, $f0 (Delay Slot)
    ctx->f[26] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FC70u, 0x33B994u, 0x33B99Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33B99Cu;
label_33b99c:
    // 0x33b99c: 0xc0db198  jal         func_36C660
    ctx->pc = 0x33B99Cu;
    SET_GPR_U32(ctx, 31, 0x33B9A4u);
    ctx->pc = 0x33B9A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33B99Cu;
    // 0x33b9a0: 0x46000646  mov.s       $f25, $f0 (Delay Slot)
    ctx->f[25] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C660u, 0x33B99Cu, 0x33B9A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33B9A4u;
label_33b9a4:
    // 0x33b9a4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x33b9a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x33b9a8: 0xc0db170  jal         func_36C5C0
    ctx->pc = 0x33B9A8u;
    SET_GPR_U32(ctx, 31, 0x33B9B0u);
    ctx->pc = 0x33B9ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33B9A8u;
    // 0x33b9ac: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C5C0u, 0x33B9A8u, 0x33B9B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33B9B0u;
label_33b9b0:
    // 0x33b9b0: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x33b9b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x33b9b4: 0xc0db21c  jal         func_36C870
    ctx->pc = 0x33B9B4u;
    SET_GPR_U32(ctx, 31, 0x33B9BCu);
    ctx->pc = 0x33B9B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33B9B4u;
    // 0x33b9b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C870u, 0x33B9B4u, 0x33B9BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33B9BCu;
label_33b9bc:
    // 0x33b9bc: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x33b9bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x33b9c0: 0xc0db21c  jal         func_36C870
    ctx->pc = 0x33B9C0u;
    SET_GPR_U32(ctx, 31, 0x33B9C8u);
    ctx->pc = 0x33B9C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33B9C0u;
    // 0x33b9c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C870u, 0x33B9C0u, 0x33B9C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33B9C8u;
label_33b9c8:
    // 0x33b9c8: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x33b9c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x33b9cc: 0xc0db21c  jal         func_36C870
    ctx->pc = 0x33B9CCu;
    SET_GPR_U32(ctx, 31, 0x33B9D4u);
    ctx->pc = 0x33B9D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33B9CCu;
    // 0x33b9d0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C870u, 0x33B9CCu, 0x33B9D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33B9D4u;
label_33b9d4:
    // 0x33b9d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x33b9d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b9d8: 0xc0db21c  jal         func_36C870
    ctx->pc = 0x33B9D8u;
    SET_GPR_U32(ctx, 31, 0x33B9E0u);
    ctx->pc = 0x33B9DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33B9D8u;
    // 0x33b9dc: 0x2404000e  addiu       $a0, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C870u, 0x33B9D8u, 0x33B9E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33B9E0u;
label_33b9e0:
    // 0x33b9e0: 0xc0c2d8e  jal         func_30B638
    ctx->pc = 0x33B9E0u;
    SET_GPR_U32(ctx, 31, 0x33B9E8u);
    ctx->pc = 0x33B9E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33B9E0u;
    // 0x33b9e4: 0x8e24bd48  lw          $a0, -0x42B8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294950216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30B638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30B638u, 0x33B9E0u, 0x33B9E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33B9E8u;
label_33b9e8:
    // 0x33b9e8: 0xc0c2d92  jal         func_30B648
    ctx->pc = 0x33B9E8u;
    SET_GPR_U32(ctx, 31, 0x33B9F0u);
    ctx->pc = 0x33B9ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33B9E8u;
    // 0x33b9ec: 0x8e24bd48  lw          $a0, -0x42B8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294950216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30B648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30B648u, 0x33B9E8u, 0x33B9F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33B9F0u;
label_33b9f0:
    // 0x33b9f0: 0x12400233  beqz        $s2, . + 4 + (0x233 << 2)
    ctx->pc = 0x33B9F0u;
    {
        const bool branch_taken_0x33b9f0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x33B9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B9F0u;
        // 0x33b9f4: 0x3c03005b  lui         $v1, 0x5B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)91 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b9f0) {
            ctx->pc = 0x33C2C0u;
            goto label_33c2c0;
        }
    }
    ctx->pc = 0x33B9F8u;
    // 0x33b9f8: 0x246221e8  addiu       $v0, $v1, 0x21E8
    ctx->pc = 0x33b9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 8680));
    // 0x33b9fc: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x33b9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x33ba00: 0x106000d3  beqz        $v1, . + 4 + (0xD3 << 2)
    ctx->pc = 0x33BA00u;
    {
        const bool branch_taken_0x33ba00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x33BA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BA00u;
        // 0x33ba04: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ba00) {
            ctx->pc = 0x33BD50u;
            goto label_33bd50;
        }
    }
    ctx->pc = 0x33BA08u;
    // 0x33ba08: 0x3c01428c  lui         $at, 0x428C
    ctx->pc = 0x33ba08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17036 << 16));
    // 0x33ba0c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x33ba0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x33ba10: 0x3c01c2c8  lui         $at, 0xC2C8
    ctx->pc = 0x33ba10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49864 << 16));
    // 0x33ba14: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x33ba14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33ba18: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x33ba18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x33ba1c: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x33ba1cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x33ba20: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x33ba20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x33ba24: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x33ba24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
    // 0x33ba28: 0x8e31bd48  lw          $s1, -0x42B8($s1)
    ctx->pc = 0x33ba28u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294950216)));
    // 0x33ba2c: 0x8e220100  lw          $v0, 0x100($s1)
    ctx->pc = 0x33ba2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 256)));
    // 0x33ba30: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x33ba30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x33ba34: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x33ba34u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x33ba38: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x33ba38u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33ba3c: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x33ba3cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x33ba40: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x33ba40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x33ba44: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x33ba44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x33ba48: 0xafa400f0  sw          $a0, 0xF0($sp)
    ctx->pc = 0x33ba48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 4));
    // 0x33ba4c: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x33ba4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33ba50: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x33BA50u;
    SET_GPR_U32(ctx, 31, 0x33BA58u);
    ctx->pc = 0x33BA54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33BA50u;
    // 0x33ba54: 0x60b02d  daddu       $s6, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x33BA50u, 0x33BA58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33BA58u;
label_33ba58:
    // 0x33ba58: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x33BA58u;
    SET_GPR_U32(ctx, 31, 0x33BA60u);
    ctx->pc = 0x33BA5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33BA58u;
    // 0x33ba5c: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x33BA58u, 0x33BA60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33BA60u;
label_33ba60:
    // 0x33ba60: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x33BA60u;
    SET_GPR_U32(ctx, 31, 0x33BA68u);
    ctx->pc = 0x33BA64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33BA60u;
    // 0x33ba64: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x33BA60u, 0x33BA68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33BA68u;
label_33ba68:
    // 0x33ba68: 0x8e300100  lw          $s0, 0x100($s1)
    ctx->pc = 0x33ba68u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 256)));
    // 0x33ba6c: 0xc0f70ce  jal         func_3DC338
    ctx->pc = 0x33BA6Cu;
    SET_GPR_U32(ctx, 31, 0x33BA74u);
    ctx->pc = 0x33BA70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33BA6Cu;
    // 0x33ba70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x33BA6Cu, 0x33BA74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33BA74u;
label_33ba74:
    // 0x33ba74: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x33BA74u;
    {
        const bool branch_taken_0x33ba74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33BA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BA74u;
        // 0x33ba78: 0x26020080  addiu       $v0, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33ba74) {
            ctx->pc = 0x33BA88u;
            goto label_33ba88;
        }
    }
    ctx->pc = 0x33BA7Cu;
    // 0x33ba7c: 0xc0c4900  jal         func_312400
    ctx->pc = 0x33BA7Cu;
    SET_GPR_U32(ctx, 31, 0x33BA84u);
    ctx->pc = 0x33BA80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33BA7Cu;
    // 0x33ba80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x33BA7Cu, 0x33BA84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33BA84u;
label_33ba84:
    // 0x33ba84: 0x26020080  addiu       $v0, $s0, 0x80
    ctx->pc = 0x33ba84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
label_33ba88:
    // 0x33ba88: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x33ba88u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33ba8c: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x33ba8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x33ba90: 0x27a70070  addiu       $a3, $sp, 0x70
    ctx->pc = 0x33ba90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x33ba94: 0x26020090  addiu       $v0, $s0, 0x90
    ctx->pc = 0x33ba94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x33ba98: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x33ba98u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33ba9c: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x33ba9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x33baa0: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x33baa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x33baa4: 0x260200a0  addiu       $v0, $s0, 0xA0
    ctx->pc = 0x33baa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x33baa8: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x33baa8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33baac: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x33baacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x33bab0: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x33bab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x33bab4: 0x260300b0  addiu       $v1, $s0, 0xB0
    ctx->pc = 0x33bab4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x33bab8: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x33bab8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x33babc: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x33babcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x33bac0: 0xc62000e0  lwc1        $f0, 0xE0($s1)
    ctx->pc = 0x33bac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33bac4: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x33bac4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x33bac8: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x33bac8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x33bacc: 0x0  nop
    ctx->pc = 0x33baccu;
    // NOP
    // 0x33bad0: 0x460031c3  div.s       $f7, $f6, $f0
    ctx->pc = 0x33bad0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[7] = FPU_DIV_S(ctx->f[6], ctx->f[0]); }
    // 0x33bad4: 0x44083800  mfc1        $t0, $f7
    ctx->pc = 0x33bad4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[7], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x33bad8: 0xdac10000  lqc2        $vf1, 0x0($s6)
    ctx->pc = 0x33bad8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x33badc: 0x48a81000  qmtc2.ni    $t0, $vf2
    ctx->pc = 0x33badcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x33bae0: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x33bae0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x33bae4: 0xfac10040  sqc2        $vf1, 0x40($s6)
    ctx->pc = 0x33bae4u;
    WRITE128(ADD32(GPR_U32(ctx, 22), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x33bae8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x33bae8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x33baec: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x33baecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x33baf0: 0x27a300b0  addiu       $v1, $sp, 0xB0
    ctx->pc = 0x33baf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x33baf4: 0x44023800  mfc1        $v0, $f7
    ctx->pc = 0x33baf4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[7], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x33baf8: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x33baf8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x33bafc: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x33bafcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x33bb00: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x33bb00u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x33bb04: 0xfba100b0  sqc2        $vf1, 0xB0($sp)
    ctx->pc = 0x33bb04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x33bb08: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x33bb08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x33bb0c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x33bb0cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33bb10: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x33bb10u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x33bb14: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x33bb14u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x33bb18: 0xfba100d0  sqc2        $vf1, 0xD0($sp)
    ctx->pc = 0x33bb18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x33bb1c: 0xc7a300d0  lwc1        $f3, 0xD0($sp)
    ctx->pc = 0x33bb1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x33bb20: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x33bb20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x33bb24: 0xc7a000d4  lwc1        $f0, 0xD4($sp)
    ctx->pc = 0x33bb24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33bb28: 0xc7a100d8  lwc1        $f1, 0xD8($sp)
    ctx->pc = 0x33bb28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33bb2c: 0xc7a200dc  lwc1        $f2, 0xDC($sp)
    ctx->pc = 0x33bb2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33bb30: 0xe7a300c0  swc1        $f3, 0xC0($sp)
    ctx->pc = 0x33bb30u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x33bb34: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x33bb34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x33bb38: 0xe7a100c8  swc1        $f1, 0xC8($sp)
    ctx->pc = 0x33bb38u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x33bb3c: 0xe7a200cc  swc1        $f2, 0xCC($sp)
    ctx->pc = 0x33bb3cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x33bb40: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x33bb40u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x33bb44: 0xfba100a0  sqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x33bb44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x33bb48: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x33bb48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33bb4c: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x33bb4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33bb50: 0xc7a400a8  lwc1        $f4, 0xA8($sp)
    ctx->pc = 0x33bb50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x33bb54: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x33bb54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x33bb58: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x33bb58u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x33bb5c: 0xe7a40020  swc1        $f4, 0x20($sp)
    ctx->pc = 0x33bb5cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x33bb60: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x33bb60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33bb64: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x33bb64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x33bb68: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x33bb68u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x33bb6c: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x33bb6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33bb70: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x33bb70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x33bb74: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x33bb74u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x33bb78: 0xc4820008  lwc1        $f2, 0x8($a0)
    ctx->pc = 0x33bb78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33bb7c: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x33bb7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x33bb80: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x33bb80u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x33bb84: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x33bb84u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
    // 0x33bb88: 0x46003946  mov.s       $f5, $f7
    ctx->pc = 0x33bb88u;
    ctx->f[5] = FPU_MOV_S(ctx->f[7]);
    // 0x33bb8c: 0x46002801  sub.s       $f0, $f5, $f0
    ctx->pc = 0x33bb8cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x33bb90: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x33bb90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x33bb94: 0xc62100e4  lwc1        $f1, 0xE4($s1)
    ctx->pc = 0x33bb94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33bb98: 0x0  nop
    ctx->pc = 0x33bb98u;
    // NOP
    // 0x33bb9c: 0x460131c3  div.s       $f7, $f6, $f1
    ctx->pc = 0x33bb9cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[7] = FPU_DIV_S(ctx->f[6], ctx->f[1]); }
    // 0x33bba0: 0x44083800  mfc1        $t0, $f7
    ctx->pc = 0x33bba0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[7], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x33bba4: 0xd8e10000  lqc2        $vf1, 0x0($a3)
    ctx->pc = 0x33bba4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x33bba8: 0x48a81000  qmtc2.ni    $t0, $vf2
    ctx->pc = 0x33bba8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x33bbac: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x33bbacu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x33bbb0: 0xfba100a0  sqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x33bbb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x33bbb4: 0x44072800  mfc1        $a3, $f5
    ctx->pc = 0x33bbb4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x33bbb8: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x33bbb8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x33bbbc: 0x48a71000  qmtc2.ni    $a3, $vf2
    ctx->pc = 0x33bbbcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x33bbc0: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x33bbc0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x33bbc4: 0xfba100b0  sqc2        $vf1, 0xB0($sp)
    ctx->pc = 0x33bbc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x33bbc8: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x33bbc8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33bbcc: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x33bbccu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x33bbd0: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x33bbd0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x33bbd4: 0xfba100d0  sqc2        $vf1, 0xD0($sp)
    ctx->pc = 0x33bbd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x33bbd8: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x33bbd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33bbdc: 0xc7a100d4  lwc1        $f1, 0xD4($sp)
    ctx->pc = 0x33bbdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33bbe0: 0xc7a200d8  lwc1        $f2, 0xD8($sp)
    ctx->pc = 0x33bbe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33bbe4: 0xc7a300dc  lwc1        $f3, 0xDC($sp)
    ctx->pc = 0x33bbe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x33bbe8: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x33bbe8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x33bbec: 0xe7a100c4  swc1        $f1, 0xC4($sp)
    ctx->pc = 0x33bbecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x33bbf0: 0xe7a200c8  swc1        $f2, 0xC8($sp)
    ctx->pc = 0x33bbf0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x33bbf4: 0xe7a300cc  swc1        $f3, 0xCC($sp)
    ctx->pc = 0x33bbf4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x33bbf8: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x33bbf8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x33bbfc: 0xfba100a0  sqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x33bbfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x33bc00: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x33bc00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33bc04: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x33bc04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33bc08: 0xc7a400a8  lwc1        $f4, 0xA8($sp)
    ctx->pc = 0x33bc08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x33bc0c: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x33bc0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x33bc10: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x33bc10u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x33bc14: 0xe7a40024  swc1        $f4, 0x24($sp)
    ctx->pc = 0x33bc14u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x33bc18: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x33bc18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33bc1c: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x33bc1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x33bc20: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x33bc20u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x33bc24: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x33bc24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33bc28: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x33bc28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x33bc2c: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x33bc2cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x33bc30: 0xc4820008  lwc1        $f2, 0x8($a0)
    ctx->pc = 0x33bc30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33bc34: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x33bc34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x33bc38: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x33bc38u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x33bc3c: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x33bc3cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x33bc40: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x33bc40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33bc44: 0xc7a20084  lwc1        $f2, 0x84($sp)
    ctx->pc = 0x33bc44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33bc48: 0xc7a30088  lwc1        $f3, 0x88($sp)
    ctx->pc = 0x33bc48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x33bc4c: 0x46002941  sub.s       $f5, $f5, $f0
    ctx->pc = 0x33bc4cu;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x33bc50: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x33bc50u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x33bc54: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x33bc54u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x33bc58: 0xe7a30028  swc1        $f3, 0x28($sp)
    ctx->pc = 0x33bc58u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x33bc5c: 0xe7a50034  swc1        $f5, 0x34($sp)
    ctx->pc = 0x33bc5cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x33bc60: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x33bc60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33bc64: 0xc4a30000  lwc1        $f3, 0x0($a1)
    ctx->pc = 0x33bc64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x33bc68: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x33bc68u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x33bc6c: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x33bc6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33bc70: 0xc4a30004  lwc1        $f3, 0x4($a1)
    ctx->pc = 0x33bc70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x33bc74: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x33bc74u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x33bc78: 0xc4820008  lwc1        $f2, 0x8($a0)
    ctx->pc = 0x33bc78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33bc7c: 0xc4a30008  lwc1        $f3, 0x8($a1)
    ctx->pc = 0x33bc7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x33bc80: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x33bc80u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x33bc84: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x33bc84u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x33bc88: 0x8fa800f0  lw          $t0, 0xF0($sp)
    ctx->pc = 0x33bc88u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x33bc8c: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x33bc8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x33bc90: 0xd9010000  lqc2        $vf1, 0x0($t0)
    ctx->pc = 0x33bc90u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x33bc94: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x33bc94u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33bc98: 0xdba30010  lqc2        $vf3, 0x10($sp)
    ctx->pc = 0x33bc98u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33bc9c: 0xdba40020  lqc2        $vf4, 0x20($sp)
    ctx->pc = 0x33bc9cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33bca0: 0xdba50030  lqc2        $vf5, 0x30($sp)
    ctx->pc = 0x33bca0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x33bca4: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x33bca4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x33bca8: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x33bca8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x33bcac: 0x4bc120be  vmaddaz.xyz $ACC, $vf4, $vf1z
    ctx->pc = 0x33bcacu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x33bcb0: 0x4bc0284b  vmaddw.xyz  $vf1, $vf5, $vf0w
    ctx->pc = 0x33bcb0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x33bcb4: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x33bcb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x33bcb8: 0xc7a30058  lwc1        $f3, 0x58($sp)
    ctx->pc = 0x33bcb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x33bcbc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x33bcbcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33bcc0: 0x0  nop
    ctx->pc = 0x33bcc0u;
    // NOP
    // 0x33bcc4: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x33bcc4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x33bcc8: 0x0  nop
    ctx->pc = 0x33bcc8u;
    // NOP
    // 0x33bccc: 0x45000020  bc1f        . + 4 + (0x20 << 2)
    ctx->pc = 0x33BCCCu;
    {
        const bool branch_taken_0x33bccc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x33BCD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BCCCu;
        // 0x33bcd0: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33bccc) {
            ctx->pc = 0x33BD50u;
            goto label_33bd50;
        }
    }
    ctx->pc = 0x33BCD4u;
    // 0x33bcd4: 0x3c0141c0  lui         $at, 0x41C0
    ctx->pc = 0x33bcd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16832 << 16));
    // 0x33bcd8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x33bcd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x33bcdc: 0xc7a10050  lwc1        $f1, 0x50($sp)
    ctx->pc = 0x33bcdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33bce0: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x33bce0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x33bce4: 0x0  nop
    ctx->pc = 0x33bce4u;
    // NOP
    // 0x33bce8: 0x0  nop
    ctx->pc = 0x33bce8u;
    // NOP
    // 0x33bcec: 0x46031503  div.s       $f20, $f2, $f3
    ctx->pc = 0x33bcecu;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[2], ctx->f[3]); }
    // 0x33bcf0: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x33bcf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33bcf4: 0xc4422c48  lwc1        $f2, 0x2C48($v0)
    ctx->pc = 0x33bcf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 11336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33bcf8: 0x0  nop
    ctx->pc = 0x33bcf8u;
    // NOP
    // 0x33bcfc: 0x0  nop
    ctx->pc = 0x33bcfcu;
    // NOP
    // 0x33bd00: 0x46030843  div.s       $f1, $f1, $f3
    ctx->pc = 0x33bd00u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[3]); }
    // 0x33bd04: 0x0  nop
    ctx->pc = 0x33bd04u;
    // NOP
    // 0x33bd08: 0x0  nop
    ctx->pc = 0x33bd08u;
    // NOP
    // 0x33bd0c: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x33bd0cu;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[3]); }
    // 0x33bd10: 0xc46eac6c  lwc1        $f14, -0x5394($v1)
    ctx->pc = 0x33bd10u;
    { uint32_t bits = FAST_READ32(0x6BAC6Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x33bd14: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x33bd14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x33bd18: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x33bd18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33bd1c: 0x8c48f420  lw          $t0, -0xBE0($v0)
    ctx->pc = 0x33bd1cu;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x4BF420u));
    // 0x33bd20: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x33bd20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33bd24: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x33bd24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33bd28: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x33bd28u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33bd2c: 0x4602a502  mul.s       $f20, $f20, $f2
    ctx->pc = 0x33bd2cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
    // 0x33bd30: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x33bd30u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33bd34: 0x46000b06  mov.s       $f12, $f1
    ctx->pc = 0x33bd34u;
    ctx->f[12] = FPU_MOV_S(ctx->f[1]);
    // 0x33bd38: 0xe7a10040  swc1        $f1, 0x40($sp)
    ctx->pc = 0x33bd38u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x33bd3c: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x33bd3cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    // 0x33bd40: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x33bd40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x33bd44: 0x460ea382  mul.s       $f14, $f20, $f14
    ctx->pc = 0x33bd44u;
    ctx->f[14] = FPU_MUL_S(ctx->f[20], ctx->f[14]);
    // 0x33bd48: 0xc0da874  jal         func_36A1D0
    ctx->pc = 0x33BD48u;
    SET_GPR_U32(ctx, 31, 0x33BD50u);
    ctx->pc = 0x33BD4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33BD48u;
    // 0x33bd4c: 0x4600a3c6  mov.s       $f15, $f20 (Delay Slot)
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A1D0u, 0x33BD48u, 0x33BD50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33BD50u;
label_33bd50:
    // 0x33bd50: 0x1240015b  beqz        $s2, . + 4 + (0x15B << 2)
    ctx->pc = 0x33BD50u;
    {
        const bool branch_taken_0x33bd50 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x33BD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BD50u;
        // 0x33bd54: 0x3c03005b  lui         $v1, 0x5B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)91 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33bd50) {
            ctx->pc = 0x33C2C0u;
            goto label_33c2c0;
        }
    }
    ctx->pc = 0x33BD58u;
    // 0x33bd58: 0x246221e8  addiu       $v0, $v1, 0x21E8
    ctx->pc = 0x33bd58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 8680));
    // 0x33bd5c: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x33bd5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x33bd60: 0x10600158  beqz        $v1, . + 4 + (0x158 << 2)
    ctx->pc = 0x33BD60u;
    {
        const bool branch_taken_0x33bd60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x33BD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BD60u;
        // 0x33bd64: 0x3c03005b  lui         $v1, 0x5B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)91 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33bd60) {
            ctx->pc = 0x33C2C4u;
            goto label_33c2c4;
        }
    }
    ctx->pc = 0x33BD68u;
    // 0x33bd68: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x33BD68u;
    SET_GPR_U32(ctx, 31, 0x33BD70u);
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x33BD68u, 0x33BD70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33BD70u;
label_33bd70:
    // 0x33bd70: 0x44921800  mtc1        $s2, $f3
    ctx->pc = 0x33bd70u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x33bd74: 0x0  nop
    ctx->pc = 0x33bd74u;
    // NOP
    // 0x33bd78: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x33bd78u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x33bd7c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x33bd7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x33bd80: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x33BD80u;
    {
        const bool branch_taken_0x33bd80 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x33BD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BD80u;
        // 0x33bd84: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33bd80) {
            ctx->pc = 0x33BD9Cu;
            goto label_33bd9c;
        }
    }
    ctx->pc = 0x33BD88u;
    // 0x33bd88: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x33bd88u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x33bd8c: 0x0  nop
    ctx->pc = 0x33bd8cu;
    // NOP
    // 0x33bd90: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x33bd90u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x33bd94: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x33BD94u;
    {
        const bool branch_taken_0x33bd94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33bd94) {
            ctx->pc = 0x33BDB4u;
            goto label_33bdb4;
        }
    }
    ctx->pc = 0x33BD9Cu;
label_33bd9c:
    // 0x33bd9c: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x33bd9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x33bda0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x33bda0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x33bda4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x33bda4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x33bda8: 0x0  nop
    ctx->pc = 0x33bda8u;
    // NOP
    // 0x33bdac: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x33bdacu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x33bdb0: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x33bdb0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_33bdb4:
    // 0x33bdb4: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x33bdb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x33bdb8: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x33bdb8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x33bdbc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x33bdbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x33bdc0: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x33bdc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x33bdc4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x33bdc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x33bdc8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x33bdc8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33bdcc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x33bdccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33bdd0: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x33bdd0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x33bdd4: 0x8c44f424  lw          $a0, -0xBDC($v0)
    ctx->pc = 0x33bdd4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x4BF424u));
    // 0x33bdd8: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x33bdd8u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    // 0x33bddc: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x33bddcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x33bde0: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x33bde0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x33bde4: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x33bde4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x33bde8: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x33bde8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x33bdec: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x33bdecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x33bdf0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x33bdf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x33bdf4: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x33bdf4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x33bdf8: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x33bdf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
    // 0x33bdfc: 0x4481d800  mtc1        $at, $f27
    ctx->pc = 0x33bdfcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[27], &bits, sizeof(bits)); }
    // 0x33be00: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x33be00u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x33be04: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x33be04u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x33be08: 0x44150800  mfc1        $s5, $f1
    ctx->pc = 0x33be08u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 21, bits); }
    // 0x33be0c: 0xc0da81e  jal         func_36A078
    ctx->pc = 0x33BE0Cu;
    SET_GPR_U32(ctx, 31, 0x33BE14u);
    ctx->pc = 0x33BE10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33BE0Cu;
    // 0x33be10: 0x24120009  addiu       $s2, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A078u, 0x33BE0Cu, 0x33BE14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33BE14u;
label_33be14:
    // 0x33be14: 0x27a300b0  addiu       $v1, $sp, 0xB0
    ctx->pc = 0x33be14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x33be18: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x33be18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x33be1c: 0xafa300e4  sw          $v1, 0xE4($sp)
    ctx->pc = 0x33be1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 3));
    // 0x33be20: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x33be20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x33be24: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x33be24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x33be28: 0x27a70070  addiu       $a3, $sp, 0x70
    ctx->pc = 0x33be28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x33be2c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x33be2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x33be30: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x33be30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
    // 0x33be34: 0xafa400e8  sw          $a0, 0xE8($sp)
    ctx->pc = 0x33be34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 4));
    // 0x33be38: 0x27be0090  addiu       $fp, $sp, 0x90
    ctx->pc = 0x33be38u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x33be3c: 0xafa500f0  sw          $a1, 0xF0($sp)
    ctx->pc = 0x33be3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 5));
    // 0x33be40: 0x27b400a0  addiu       $s4, $sp, 0xA0
    ctx->pc = 0x33be40u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x33be44: 0xafa700f4  sw          $a3, 0xF4($sp)
    ctx->pc = 0x33be44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 7));
    // 0x33be48: 0x2477c1c0  addiu       $s7, $v1, -0x3E40
    ctx->pc = 0x33be48u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951360));
    // 0x33be4c: 0x27b60060  addiu       $s6, $sp, 0x60
    ctx->pc = 0x33be4cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x33be50: 0x3c080040  lui         $t0, 0x40
    ctx->pc = 0x33be50u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
    // 0x33be54: 0x0  nop
    ctx->pc = 0x33be54u;
    // NOP
label_33be58:
    // 0x33be58: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x33be58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x33be5c: 0x8d02bd48  lw          $v0, -0x42B8($t0)
    ctx->pc = 0x33be5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294950216)));
    // 0x33be60: 0xe7bb0054  swc1        $f27, 0x54($sp)
    ctx->pc = 0x33be60u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x33be64: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x33be64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
    // 0x33be68: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x33be68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
    // 0x33be6c: 0x8c430100  lw          $v1, 0x100($v0)
    ctx->pc = 0x33be6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 256)));
    // 0x33be70: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x33be70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x33be74: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x33be74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
    // 0x33be78: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x33be78u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33be7c: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x33be7cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x33be80: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x33be80u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x33be84: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x33be84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x33be88: 0x2a620009  slti        $v0, $s3, 0x9
    ctx->pc = 0x33be88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x33be8c: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x33BE8Cu;
    {
        const bool branch_taken_0x33be8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33BE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BE8Cu;
        // 0x33be90: 0x3c040040  lui         $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33be8c) {
            ctx->pc = 0x33BED4u;
            goto label_33bed4;
        }
    }
    ctx->pc = 0x33BE94u;
    // 0x33be94: 0x272001a  div         $zero, $s3, $s2
    ctx->pc = 0x33be94u;
    { int32_t divisor = GPR_S32(ctx, 18);    int32_t dividend = GPR_S32(ctx, 19);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x33be98: 0x2484c198  addiu       $a0, $a0, -0x3E68
    ctx->pc = 0x33be98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951320));
    // 0x33be9c: 0x52400001  beql        $s2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x33BE9Cu;
    {
        const bool branch_taken_0x33be9c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x33be9c) {
            ctx->pc = 0x33BEA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33BE9Cu;
            // 0x33bea0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x33BEA4u;
            goto label_33bea4;
        }
    }
    ctx->pc = 0x33BEA4u;
label_33bea4:
    // 0x33bea4: 0xc7a10050  lwc1        $f1, 0x50($sp)
    ctx->pc = 0x33bea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33bea8: 0x1810  mfhi        $v1
    ctx->pc = 0x33bea8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x33beac: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x33beacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x33beb0: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x33beb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x33beb4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x33beb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33beb8: 0x771821  addu        $v1, $v1, $s7
    ctx->pc = 0x33beb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
    // 0x33bebc: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x33bebcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x33bec0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x33bec0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x33bec4: 0xe7a10050  swc1        $f1, 0x50($sp)
    ctx->pc = 0x33bec4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x33bec8: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x33bec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33becc: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x33BECCu;
    {
        const bool branch_taken_0x33becc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33BED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BECCu;
        // 0x33bed0: 0xc7a10058  lwc1        $f1, 0x58($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x33becc) {
            ctx->pc = 0x33BF9Cu;
            goto label_33bf9c;
        }
    }
    ctx->pc = 0x33BED4u;
label_33bed4:
    // 0x33bed4: 0x2a620012  slti        $v0, $s3, 0x12
    ctx->pc = 0x33bed4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)18) ? 1 : 0);
    // 0x33bed8: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x33BED8u;
    {
        const bool branch_taken_0x33bed8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33BEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BED8u;
        // 0x33bedc: 0x2484c198  addiu       $a0, $a0, -0x3E68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33bed8) {
            ctx->pc = 0x33BF20u;
            goto label_33bf20;
        }
    }
    ctx->pc = 0x33BEE0u;
    // 0x33bee0: 0x272001a  div         $zero, $s3, $s2
    ctx->pc = 0x33bee0u;
    { int32_t divisor = GPR_S32(ctx, 18);    int32_t dividend = GPR_S32(ctx, 19);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x33bee4: 0x52400001  beql        $s2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x33BEE4u;
    {
        const bool branch_taken_0x33bee4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x33bee4) {
            ctx->pc = 0x33BEE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33BEE4u;
            // 0x33bee8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x33BEECu;
            goto label_33beec;
        }
    }
    ctx->pc = 0x33BEECu;
label_33beec:
    // 0x33beec: 0xc7a10050  lwc1        $f1, 0x50($sp)
    ctx->pc = 0x33beecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33bef0: 0x1810  mfhi        $v1
    ctx->pc = 0x33bef0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x33bef4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x33bef4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x33bef8: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x33bef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x33befc: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x33befcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33bf00: 0x771821  addu        $v1, $v1, $s7
    ctx->pc = 0x33bf00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
    // 0x33bf04: 0x46160001  sub.s       $f0, $f0, $f22
    ctx->pc = 0x33bf04u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[22]);
    // 0x33bf08: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x33bf08u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x33bf0c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x33bf0cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x33bf10: 0xe7a10050  swc1        $f1, 0x50($sp)
    ctx->pc = 0x33bf10u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x33bf14: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x33bf14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33bf18: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x33BF18u;
    {
        const bool branch_taken_0x33bf18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33BF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BF18u;
        // 0x33bf1c: 0xc7a10058  lwc1        $f1, 0x58($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x33bf18) {
            ctx->pc = 0x33BF9Cu;
            goto label_33bf9c;
        }
    }
    ctx->pc = 0x33BF20u;
label_33bf20:
    // 0x33bf20: 0x2a62001b  slti        $v0, $s3, 0x1B
    ctx->pc = 0x33bf20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)27) ? 1 : 0);
    // 0x33bf24: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x33BF24u;
    {
        const bool branch_taken_0x33bf24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33BF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BF24u;
        // 0x33bf28: 0x272001a  div         $zero, $s3, $s2 (Delay Slot)
        { int32_t divisor = GPR_S32(ctx, 18);    int32_t dividend = GPR_S32(ctx, 19);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
        ctx->in_delay_slot = false;
        if (branch_taken_0x33bf24) {
            ctx->pc = 0x33BF58u;
            goto label_33bf58;
        }
    }
    ctx->pc = 0x33BF2Cu;
    // 0x33bf2c: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x33bf2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x33bf30: 0x2484c198  addiu       $a0, $a0, -0x3E68
    ctx->pc = 0x33bf30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951320));
    // 0x33bf34: 0x52400001  beql        $s2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x33BF34u;
    {
        const bool branch_taken_0x33bf34 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x33bf34) {
            ctx->pc = 0x33BF38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33BF34u;
            // 0x33bf38: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x33BF3Cu;
            goto label_33bf3c;
        }
    }
    ctx->pc = 0x33BF3Cu;
label_33bf3c:
    // 0x33bf3c: 0xc7a10050  lwc1        $f1, 0x50($sp)
    ctx->pc = 0x33bf3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33bf40: 0x1810  mfhi        $v1
    ctx->pc = 0x33bf40u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x33bf44: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x33bf44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x33bf48: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x33bf48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x33bf4c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x33bf4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33bf50: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x33BF50u;
    {
        const bool branch_taken_0x33bf50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33BF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BF50u;
        // 0x33bf54: 0x771821  addu        $v1, $v1, $s7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33bf50) {
            ctx->pc = 0x33BF84u;
            goto label_33bf84;
        }
    }
    ctx->pc = 0x33BF58u;
label_33bf58:
    // 0x33bf58: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x33bf58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x33bf5c: 0x2484c198  addiu       $a0, $a0, -0x3E68
    ctx->pc = 0x33bf5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951320));
    // 0x33bf60: 0x52400001  beql        $s2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x33BF60u;
    {
        const bool branch_taken_0x33bf60 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x33bf60) {
            ctx->pc = 0x33BF64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33BF60u;
            // 0x33bf64: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x33BF68u;
            goto label_33bf68;
        }
    }
    ctx->pc = 0x33BF68u;
label_33bf68:
    // 0x33bf68: 0xc7a10050  lwc1        $f1, 0x50($sp)
    ctx->pc = 0x33bf68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33bf6c: 0x1810  mfhi        $v1
    ctx->pc = 0x33bf6cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x33bf70: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x33bf70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x33bf74: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x33bf74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x33bf78: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x33bf78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33bf7c: 0x771821  addu        $v1, $v1, $s7
    ctx->pc = 0x33bf7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
    // 0x33bf80: 0x46160001  sub.s       $f0, $f0, $f22
    ctx->pc = 0x33bf80u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[22]);
label_33bf84:
    // 0x33bf84: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x33bf84u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x33bf88: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x33bf88u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x33bf8c: 0xe7a10050  swc1        $f1, 0x50($sp)
    ctx->pc = 0x33bf8cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x33bf90: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x33bf90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33bf94: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x33bf94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33bf98: 0x46160001  sub.s       $f0, $f0, $f22
    ctx->pc = 0x33bf98u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[22]);
label_33bf9c:
    // 0x33bf9c: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x33bf9cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x33bfa0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x33bfa0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x33bfa4: 0xe7a10058  swc1        $f1, 0x58($sp)
    ctx->pc = 0x33bfa4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x33bfa8: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x33bfa8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x33bfac: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x33bfacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33bfb0: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x33BFB0u;
    SET_GPR_U32(ctx, 31, 0x33BFB8u);
    ctx->pc = 0x33BFB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33BFB0u;
    // 0x33bfb4: 0x8cb1bd48  lw          $s1, -0x42B8($a1) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294950216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x33BFB0u, 0x33BFB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33BFB8u;
label_33bfb8:
    // 0x33bfb8: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x33BFB8u;
    SET_GPR_U32(ctx, 31, 0x33BFC0u);
    ctx->pc = 0x33BFBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33BFB8u;
    // 0x33bfbc: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x33BFB8u, 0x33BFC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33BFC0u;
label_33bfc0:
    // 0x33bfc0: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x33BFC0u;
    SET_GPR_U32(ctx, 31, 0x33BFC8u);
    ctx->pc = 0x33BFC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33BFC0u;
    // 0x33bfc4: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x33BFC0u, 0x33BFC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33BFC8u;
label_33bfc8:
    // 0x33bfc8: 0x8e300100  lw          $s0, 0x100($s1)
    ctx->pc = 0x33bfc8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 256)));
    // 0x33bfcc: 0xc0f70ce  jal         func_3DC338
    ctx->pc = 0x33BFCCu;
    SET_GPR_U32(ctx, 31, 0x33BFD4u);
    ctx->pc = 0x33BFD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33BFCCu;
    // 0x33bfd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x33BFCCu, 0x33BFD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33BFD4u;
label_33bfd4:
    // 0x33bfd4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x33BFD4u;
    {
        const bool branch_taken_0x33bfd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33BFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BFD4u;
        // 0x33bfd8: 0x26020080  addiu       $v0, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33bfd4) {
            ctx->pc = 0x33BFE8u;
            goto label_33bfe8;
        }
    }
    ctx->pc = 0x33BFDCu;
    // 0x33bfdc: 0xc0c4900  jal         func_312400
    ctx->pc = 0x33BFDCu;
    SET_GPR_U32(ctx, 31, 0x33BFE4u);
    ctx->pc = 0x33BFE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33BFDCu;
    // 0x33bfe0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x33BFDCu, 0x33BFE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33BFE4u;
label_33bfe4:
    // 0x33bfe4: 0x26020080  addiu       $v0, $s0, 0x80
    ctx->pc = 0x33bfe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
label_33bfe8:
    // 0x33bfe8: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x33bfe8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33bfec: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x33bfecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x33bff0: 0x26030090  addiu       $v1, $s0, 0x90
    ctx->pc = 0x33bff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x33bff4: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x33bff4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x33bff8: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x33bff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x33bffc: 0x260200a0  addiu       $v0, $s0, 0xA0
    ctx->pc = 0x33bffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x33c000: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x33c000u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33c004: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x33c004u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x33c008: 0x260300b0  addiu       $v1, $s0, 0xB0
    ctx->pc = 0x33c008u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x33c00c: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x33c00cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x33c010: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x33c010u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x33c014: 0xc62000e0  lwc1        $f0, 0xE0($s1)
    ctx->pc = 0x33c014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33c018: 0x0  nop
    ctx->pc = 0x33c018u;
    // NOP
    // 0x33c01c: 0x4600c143  div.s       $f5, $f24, $f0
    ctx->pc = 0x33c01cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[5] = FPU_DIV_S(ctx->f[24], ctx->f[0]); }
    // 0x33c020: 0x44072800  mfc1        $a3, $f5
    ctx->pc = 0x33c020u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x33c024: 0xdac10000  lqc2        $vf1, 0x0($s6)
    ctx->pc = 0x33c024u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x33c028: 0x48a71000  qmtc2.ni    $a3, $vf2
    ctx->pc = 0x33c028u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x33c02c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x33c02cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x33c030: 0xfac10040  sqc2        $vf1, 0x40($s6)
    ctx->pc = 0x33c030u;
    WRITE128(ADD32(GPR_U32(ctx, 22), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x33c034: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x33c034u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x33c038: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x33c038u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x33c03c: 0x8fa800e0  lw          $t0, 0xE0($sp)
    ctx->pc = 0x33c03cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x33c040: 0x44022800  mfc1        $v0, $f5
    ctx->pc = 0x33c040u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x33c044: 0xd9010000  lqc2        $vf1, 0x0($t0)
    ctx->pc = 0x33c044u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x33c048: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x33c048u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x33c04c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x33c04cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x33c050: 0xfba100b0  sqc2        $vf1, 0xB0($sp)
    ctx->pc = 0x33c050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x33c054: 0x8fa300e4  lw          $v1, 0xE4($sp)
    ctx->pc = 0x33c054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x33c058: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x33c058u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x33c05c: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x33c05cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x33c060: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x33c060u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x33c064: 0xfba100d0  sqc2        $vf1, 0xD0($sp)
    ctx->pc = 0x33c064u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x33c068: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x33c068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33c06c: 0xc7a100d4  lwc1        $f1, 0xD4($sp)
    ctx->pc = 0x33c06cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33c070: 0xc7a200d8  lwc1        $f2, 0xD8($sp)
    ctx->pc = 0x33c070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33c074: 0xc7a300dc  lwc1        $f3, 0xDC($sp)
    ctx->pc = 0x33c074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x33c078: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x33c078u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x33c07c: 0xe7a100c4  swc1        $f1, 0xC4($sp)
    ctx->pc = 0x33c07cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x33c080: 0xe7a200c8  swc1        $f2, 0xC8($sp)
    ctx->pc = 0x33c080u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x33c084: 0xe7a300cc  swc1        $f3, 0xCC($sp)
    ctx->pc = 0x33c084u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x33c088: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x33c088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x33c08c: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x33c08cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x33c090: 0xfba100a0  sqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x33c090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x33c094: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x33c094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33c098: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x33c098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33c09c: 0xc7a400a8  lwc1        $f4, 0xA8($sp)
    ctx->pc = 0x33c09cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x33c0a0: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x33c0a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x33c0a4: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x33c0a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x33c0a8: 0xe7a40020  swc1        $f4, 0x20($sp)
    ctx->pc = 0x33c0a8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x33c0ac: 0xc7c20000  lwc1        $f2, 0x0($fp)
    ctx->pc = 0x33c0acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33c0b0: 0xc6830000  lwc1        $f3, 0x0($s4)
    ctx->pc = 0x33c0b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x33c0b4: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x33c0b4u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x33c0b8: 0xc7c20004  lwc1        $f2, 0x4($fp)
    ctx->pc = 0x33c0b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33c0bc: 0xc6830004  lwc1        $f3, 0x4($s4)
    ctx->pc = 0x33c0bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x33c0c0: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x33c0c0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x33c0c4: 0xc7c20008  lwc1        $f2, 0x8($fp)
    ctx->pc = 0x33c0c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33c0c8: 0xc6830008  lwc1        $f3, 0x8($s4)
    ctx->pc = 0x33c0c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x33c0cc: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x33c0ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x33c0d0: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x33c0d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x33c0d4: 0x8fa500f4  lw          $a1, 0xF4($sp)
    ctx->pc = 0x33c0d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
    // 0x33c0d8: 0x46002801  sub.s       $f0, $f5, $f0
    ctx->pc = 0x33c0d8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x33c0dc: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x33c0dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x33c0e0: 0xc62100e4  lwc1        $f1, 0xE4($s1)
    ctx->pc = 0x33c0e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33c0e4: 0x0  nop
    ctx->pc = 0x33c0e4u;
    // NOP
    // 0x33c0e8: 0x4601c143  div.s       $f5, $f24, $f1
    ctx->pc = 0x33c0e8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[5] = FPU_DIV_S(ctx->f[24], ctx->f[1]); }
    // 0x33c0ec: 0x44072800  mfc1        $a3, $f5
    ctx->pc = 0x33c0ecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x33c0f0: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x33c0f0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x33c0f4: 0x48a71000  qmtc2.ni    $a3, $vf2
    ctx->pc = 0x33c0f4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x33c0f8: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x33c0f8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x33c0fc: 0xfba100a0  sqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x33c0fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x33c100: 0x4402b800  mfc1        $v0, $f23
    ctx->pc = 0x33c100u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[23], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x33c104: 0xd9010000  lqc2        $vf1, 0x0($t0)
    ctx->pc = 0x33c104u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x33c108: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x33c108u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x33c10c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x33c10cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x33c110: 0xfba100b0  sqc2        $vf1, 0xB0($sp)
    ctx->pc = 0x33c110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x33c114: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x33c114u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x33c118: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x33c118u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x33c11c: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x33c11cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x33c120: 0xfba100d0  sqc2        $vf1, 0xD0($sp)
    ctx->pc = 0x33c120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x33c124: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x33c124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33c128: 0xc7a100d4  lwc1        $f1, 0xD4($sp)
    ctx->pc = 0x33c128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33c12c: 0xc7a200d8  lwc1        $f2, 0xD8($sp)
    ctx->pc = 0x33c12cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33c130: 0xc7a300dc  lwc1        $f3, 0xDC($sp)
    ctx->pc = 0x33c130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x33c134: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x33c134u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x33c138: 0xe7a100c4  swc1        $f1, 0xC4($sp)
    ctx->pc = 0x33c138u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x33c13c: 0xe7a200c8  swc1        $f2, 0xC8($sp)
    ctx->pc = 0x33c13cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x33c140: 0xe7a300cc  swc1        $f3, 0xCC($sp)
    ctx->pc = 0x33c140u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x33c144: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x33c144u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x33c148: 0xfba100a0  sqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x33c148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x33c14c: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x33c14cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33c150: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x33c150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33c154: 0xc7a400a8  lwc1        $f4, 0xA8($sp)
    ctx->pc = 0x33c154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x33c158: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x33c158u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x33c15c: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x33c15cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x33c160: 0xe7a40024  swc1        $f4, 0x24($sp)
    ctx->pc = 0x33c160u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x33c164: 0xc7c20000  lwc1        $f2, 0x0($fp)
    ctx->pc = 0x33c164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33c168: 0xc6830000  lwc1        $f3, 0x0($s4)
    ctx->pc = 0x33c168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x33c16c: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x33c16cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x33c170: 0xc7c20004  lwc1        $f2, 0x4($fp)
    ctx->pc = 0x33c170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33c174: 0xc6830004  lwc1        $f3, 0x4($s4)
    ctx->pc = 0x33c174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x33c178: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x33c178u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x33c17c: 0xc7c20008  lwc1        $f2, 0x8($fp)
    ctx->pc = 0x33c17cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33c180: 0xc6830008  lwc1        $f3, 0x8($s4)
    ctx->pc = 0x33c180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x33c184: 0x4603105c  madd.s      $f1, $f2, $f3
    ctx->pc = 0x33c184u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x33c188: 0x46170840  add.s       $f1, $f1, $f23
    ctx->pc = 0x33c188u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[23]);
    // 0x33c18c: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x33c18cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33c190: 0xc7a20084  lwc1        $f2, 0x84($sp)
    ctx->pc = 0x33c190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33c194: 0xc7a30088  lwc1        $f3, 0x88($sp)
    ctx->pc = 0x33c194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x33c198: 0x4601b841  sub.s       $f1, $f23, $f1
    ctx->pc = 0x33c198u;
    ctx->f[1] = FPU_SUB_S(ctx->f[23], ctx->f[1]);
    // 0x33c19c: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x33c19cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x33c1a0: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x33c1a0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x33c1a4: 0xe7a30028  swc1        $f3, 0x28($sp)
    ctx->pc = 0x33c1a4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x33c1a8: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x33c1a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x33c1ac: 0xc7c20000  lwc1        $f2, 0x0($fp)
    ctx->pc = 0x33c1acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33c1b0: 0xc5030000  lwc1        $f3, 0x0($t0)
    ctx->pc = 0x33c1b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x33c1b4: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x33c1b4u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x33c1b8: 0xc7c20004  lwc1        $f2, 0x4($fp)
    ctx->pc = 0x33c1b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33c1bc: 0xc5030004  lwc1        $f3, 0x4($t0)
    ctx->pc = 0x33c1bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x33c1c0: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x33c1c0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x33c1c4: 0xc7c20008  lwc1        $f2, 0x8($fp)
    ctx->pc = 0x33c1c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33c1c8: 0xc5030008  lwc1        $f3, 0x8($t0)
    ctx->pc = 0x33c1c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x33c1cc: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x33c1ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x33c1d0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x33c1d0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x33c1d4: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x33c1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x33c1d8: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x33c1d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x33c1dc: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x33c1dcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x33c1e0: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x33c1e0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33c1e4: 0xdba30010  lqc2        $vf3, 0x10($sp)
    ctx->pc = 0x33c1e4u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33c1e8: 0xdba40020  lqc2        $vf4, 0x20($sp)
    ctx->pc = 0x33c1e8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33c1ec: 0xdba50030  lqc2        $vf5, 0x30($sp)
    ctx->pc = 0x33c1ecu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x33c1f0: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x33c1f0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x33c1f4: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x33c1f4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x33c1f8: 0x4bc120be  vmaddaz.xyz $ACC, $vf4, $vf1z
    ctx->pc = 0x33c1f8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x33c1fc: 0x4bc0284b  vmaddw.xyz  $vf1, $vf5, $vf0w
    ctx->pc = 0x33c1fcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x33c200: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x33c200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x33c204: 0xc7a20058  lwc1        $f2, 0x58($sp)
    ctx->pc = 0x33c204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33c208: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x33c208u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33c20c: 0x0  nop
    ctx->pc = 0x33c20cu;
    // NOP
    // 0x33c210: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x33c210u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x33c214: 0x0  nop
    ctx->pc = 0x33c214u;
    // NOP
    // 0x33c218: 0x45000023  bc1f        . + 4 + (0x23 << 2)
    ctx->pc = 0x33C218u;
    {
        const bool branch_taken_0x33c218 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x33C21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C218u;
        // 0x33c21c: 0xc7ac0050  lwc1        $f12, 0x50($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c218) {
            ctx->pc = 0x33C2A8u;
            goto label_33c2a8;
        }
    }
    ctx->pc = 0x33C220u;
    // 0x33c220: 0x272001a  div         $zero, $s3, $s2
    ctx->pc = 0x33c220u;
    { int32_t divisor = GPR_S32(ctx, 18);    int32_t dividend = GPR_S32(ctx, 19);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x33c224: 0xc7ad0054  lwc1        $f13, 0x54($sp)
    ctx->pc = 0x33c224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x33c228: 0x3c080040  lui         $t0, 0x40
    ctx->pc = 0x33c228u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
    // 0x33c22c: 0x0  nop
    ctx->pc = 0x33c22cu;
    // NOP
    // 0x33c230: 0x0  nop
    ctx->pc = 0x33c230u;
    // NOP
    // 0x33c234: 0x46026303  div.s       $f12, $f12, $f2
    ctx->pc = 0x33c234u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[12], ctx->f[2]); }
    // 0x33c238: 0x2508c1e8  addiu       $t0, $t0, -0x3E18
    ctx->pc = 0x33c238u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294951400));
    // 0x33c23c: 0x0  nop
    ctx->pc = 0x33c23cu;
    // NOP
    // 0x33c240: 0x0  nop
    ctx->pc = 0x33c240u;
    // NOP
    // 0x33c244: 0x46026b43  div.s       $f13, $f13, $f2
    ctx->pc = 0x33c244u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = FPU_DIV_S(ctx->f[13], ctx->f[2]); }
    // 0x33c248: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x33c248u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x33c24c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x33c24cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c250: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x33c250u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c254: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x33c254u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c258: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x33c258u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c25c: 0xe7ac0040  swc1        $f12, 0x40($sp)
    ctx->pc = 0x33c25cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x33c260: 0xe7ad0044  swc1        $f13, 0x44($sp)
    ctx->pc = 0x33c260u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x33c264: 0x52400001  beql        $s2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x33C264u;
    {
        const bool branch_taken_0x33c264 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x33c264) {
            ctx->pc = 0x33C268u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33C264u;
            // 0x33c268: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x33C26Cu;
            goto label_33c26c;
        }
    }
    ctx->pc = 0x33C26Cu;
label_33c26c:
    // 0x33c26c: 0xc4612c48  lwc1        $f1, 0x2C48($v1)
    ctx->pc = 0x33c26cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 11336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33c270: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x33c270u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x33c274: 0x2463ac50  addiu       $v1, $v1, -0x53B0
    ctx->pc = 0x33c274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945872));
    // 0x33c278: 0xc46e001c  lwc1        $f14, 0x1C($v1)
    ctx->pc = 0x33c278u;
    { uint32_t bits = FAST_READ32(0x6BAC6Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x33c27c: 0x1010  mfhi        $v0
    ctx->pc = 0x33c27cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x33c280: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x33c280u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x33c284: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x33c284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x33c288: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x33c288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33c28c: 0x0  nop
    ctx->pc = 0x33c28cu;
    // NOP
    // 0x33c290: 0x0  nop
    ctx->pc = 0x33c290u;
    // NOP
    // 0x33c294: 0x46020503  div.s       $f20, $f0, $f2
    ctx->pc = 0x33c294u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x33c298: 0x4601a502  mul.s       $f20, $f20, $f1
    ctx->pc = 0x33c298u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x33c29c: 0x460ea382  mul.s       $f14, $f20, $f14
    ctx->pc = 0x33c29cu;
    ctx->f[14] = FPU_MUL_S(ctx->f[20], ctx->f[14]);
    // 0x33c2a0: 0xc0da830  jal         func_36A0C0
    ctx->pc = 0x33C2A0u;
    SET_GPR_U32(ctx, 31, 0x33C2A8u);
    ctx->pc = 0x33C2A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C2A0u;
    // 0x33c2a4: 0x4600a3c6  mov.s       $f15, $f20 (Delay Slot)
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A0C0u, 0x33C2A0u, 0x33C2A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C2A8u;
label_33c2a8:
    // 0x33c2a8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x33c2a8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x33c2ac: 0x2a620024  slti        $v0, $s3, 0x24
    ctx->pc = 0x33c2acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)36) ? 1 : 0);
    // 0x33c2b0: 0x1440fee9  bnez        $v0, . + 4 + (-0x117 << 2)
    ctx->pc = 0x33C2B0u;
    {
        const bool branch_taken_0x33c2b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33C2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C2B0u;
        // 0x33c2b4: 0x3c080040  lui         $t0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c2b0) {
            ctx->pc = 0x33BE58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33be58;
        }
    }
    ctx->pc = 0x33C2B8u;
    // 0x33c2b8: 0xc0da828  jal         func_36A0A0
    ctx->pc = 0x33C2B8u;
    SET_GPR_U32(ctx, 31, 0x33C2C0u);
    ctx->pc = 0x36A0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A0A0u, 0x33C2B8u, 0x33C2C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C2C0u;
label_33c2c0:
    // 0x33c2c0: 0x3c03005b  lui         $v1, 0x5B
    ctx->pc = 0x33c2c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)91 << 16));
label_33c2c4:
    // 0x33c2c4: 0x246221e8  addiu       $v0, $v1, 0x21E8
    ctx->pc = 0x33c2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 8680));
    // 0x33c2c8: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x33c2c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x33c2cc: 0x1060012b  beqz        $v1, . + 4 + (0x12B << 2)
    ctx->pc = 0x33C2CCu;
    {
        const bool branch_taken_0x33c2cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x33C2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C2CCu;
        // 0x33c2d0: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c2cc) {
            ctx->pc = 0x33C77Cu;
            goto label_33c77c;
        }
    }
    ctx->pc = 0x33C2D4u;
    // 0x33c2d4: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x33c2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x33c2d8: 0x8c64c8e4  lw          $a0, -0x371C($v1)
    ctx->pc = 0x33c2d8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3FC8E4u));
    // 0x33c2dc: 0x8ca2c8f0  lw          $v0, -0x3710($a1)
    ctx->pc = 0x33c2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294953200)));
    // 0x33c2e0: 0x1444000d  bne         $v0, $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x33C2E0u;
    {
        const bool branch_taken_0x33c2e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x33C2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C2E0u;
        // 0x33c2e4: 0x3c040048  lui         $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c2e0) {
            ctx->pc = 0x33C318u;
            goto label_33c318;
        }
    }
    ctx->pc = 0x33C2E8u;
    // 0x33c2e8: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x33c2e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x33c2ec: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x33c2ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x33c2f0: 0x8c65c8f4  lw          $a1, -0x370C($v1)
    ctx->pc = 0x33c2f0u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3FC8F4u));
    // 0x33c2f4: 0x8c82c8e8  lw          $v0, -0x3718($a0)
    ctx->pc = 0x33c2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FC8E8u));
    // 0x33c2f8: 0x14a20007  bne         $a1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x33C2F8u;
    {
        const bool branch_taken_0x33c2f8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x33C2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C2F8u;
        // 0x33c2fc: 0x3c040048  lui         $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c2f8) {
            ctx->pc = 0x33C318u;
            goto label_33c318;
        }
    }
    ctx->pc = 0x33C300u;
    // 0x33c300: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x33c300u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x33c304: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x33c304u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x33c308: 0x8c65c8f8  lw          $a1, -0x3708($v1)
    ctx->pc = 0x33c308u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3FC8F8u));
    // 0x33c30c: 0x8c82c8ec  lw          $v0, -0x3714($a0)
    ctx->pc = 0x33c30cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FC8ECu));
    // 0x33c310: 0x10a2011a  beq         $a1, $v0, . + 4 + (0x11A << 2)
    ctx->pc = 0x33C310u;
    {
        const bool branch_taken_0x33c310 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x33C314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C310u;
        // 0x33c314: 0x3c040048  lui         $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c310) {
            ctx->pc = 0x33C77Cu;
            goto label_33c77c;
        }
    }
    ctx->pc = 0x33C318u;
label_33c318:
    // 0x33c318: 0x3c014320  lui         $at, 0x4320
    ctx->pc = 0x33c318u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17184 << 16));
    // 0x33c31c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x33c31cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x33c320: 0xc4802cb0  lwc1        $f0, 0x2CB0($a0)
    ctx->pc = 0x33c320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 11440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33c324: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x33c324u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x33c328: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x33c328u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x33c32c: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x33c32cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x33c330: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x33c330u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x33c334: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x33c334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x33c338: 0x10400110  beqz        $v0, . + 4 + (0x110 << 2)
    ctx->pc = 0x33C338u;
    {
        const bool branch_taken_0x33c338 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33C33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C338u;
        // 0x33c33c: 0xafa200ec  sw          $v0, 0xEC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c338) {
            ctx->pc = 0x33C77Cu;
            goto label_33c77c;
        }
    }
    ctx->pc = 0x33C340u;
    // 0x33c340: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x33c340u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x33c344: 0xc0db170  jal         func_36C5C0
    ctx->pc = 0x33C344u;
    SET_GPR_U32(ctx, 31, 0x33C34Cu);
    ctx->pc = 0x33C348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C344u;
    // 0x33c348: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C5C0u, 0x33C344u, 0x33C34Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C34Cu;
label_33c34c:
    // 0x33c34c: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x33c34cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x33c350: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x33c350u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x33c354: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x33c354u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x33c358: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x33c358u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x33c35c: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x33c35cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x33c360: 0x8c44f41c  lw          $a0, -0xBE4($v0)
    ctx->pc = 0x33c360u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x4BF41Cu));
    // 0x33c364: 0xc0da81e  jal         func_36A078
    ctx->pc = 0x33C364u;
    SET_GPR_U32(ctx, 31, 0x33C36Cu);
    ctx->pc = 0x33C368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C364u;
    // 0x33c368: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A078u, 0x33C364u, 0x33C36Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C36Cu;
label_33c36c:
    // 0x33c36c: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x33c36cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x33c370: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x33c370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x33c374: 0xafa200f0  sw          $v0, 0xF0($sp)
    ctx->pc = 0x33c374u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
    // 0x33c378: 0x27b40080  addiu       $s4, $sp, 0x80
    ctx->pc = 0x33c378u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x33c37c: 0xafa300f4  sw          $v1, 0xF4($sp)
    ctx->pc = 0x33c37cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 3));
    // 0x33c380: 0x27b30090  addiu       $s3, $sp, 0x90
    ctx->pc = 0x33c380u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x33c384: 0x27be00b0  addiu       $fp, $sp, 0xB0
    ctx->pc = 0x33c384u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x33c388: 0x27b200a0  addiu       $s2, $sp, 0xA0
    ctx->pc = 0x33c388u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x33c38c: 0x27b700c0  addiu       $s7, $sp, 0xC0
    ctx->pc = 0x33c38cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x33c390: 0x27b60060  addiu       $s6, $sp, 0x60
    ctx->pc = 0x33c390u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x33c394: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x33c394u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
label_33c398:
    // 0x33c398: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x33c398u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x33c39c: 0x8c91bd48  lw          $s1, -0x42B8($a0)
    ctx->pc = 0x33c39cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294950216)));
    // 0x33c3a0: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x33c3a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x33c3a4: 0x24e3bfd0  addiu       $v1, $a3, -0x4030
    ctx->pc = 0x33c3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294950864));
    // 0x33c3a8: 0x152080  sll         $a0, $s5, 2
    ctx->pc = 0x33c3a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x33c3ac: 0x24a2c068  addiu       $v0, $a1, -0x3F98
    ctx->pc = 0x33c3acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951016));
    // 0x33c3b0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x33c3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x33c3b4: 0x8e250100  lw          $a1, 0x100($s1)
    ctx->pc = 0x33c3b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 256)));
    // 0x33c3b8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x33c3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x33c3bc: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x33c3bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33c3c0: 0x3c080040  lui         $t0, 0x40
    ctx->pc = 0x33c3c0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
    // 0x33c3c4: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x33c3c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33c3c8: 0xc4a70070  lwc1        $f7, 0x70($a1)
    ctx->pc = 0x33c3c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x33c3cc: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x33c3ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x33c3d0: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x33c3d0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x33c3d4: 0x24a50070  addiu       $a1, $a1, 0x70
    ctx->pc = 0x33c3d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 112));
    // 0x33c3d8: 0xe7a70050  swc1        $f7, 0x50($sp)
    ctx->pc = 0x33c3d8u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x33c3dc: 0x2502c100  addiu       $v0, $t0, -0x3F00
    ctx->pc = 0x33c3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4294951168));
    // 0x33c3e0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x33c3e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x33c3e4: 0x4600d0c2  mul.s       $f3, $f26, $f0
    ctx->pc = 0x33c3e4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[26], ctx->f[0]);
    // 0x33c3e8: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x33c3e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33c3ec: 0x4601ca02  mul.s       $f8, $f25, $f1
    ctx->pc = 0x33c3ecu;
    ctx->f[8] = FPU_MUL_S(ctx->f[25], ctx->f[1]);
    // 0x33c3f0: 0xc4840000  lwc1        $f4, 0x0($a0)
    ctx->pc = 0x33c3f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x33c3f4: 0x4601d042  mul.s       $f1, $f26, $f1
    ctx->pc = 0x33c3f4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[26], ctx->f[1]);
    // 0x33c3f8: 0x4600c802  mul.s       $f0, $f25, $f0
    ctx->pc = 0x33c3f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[25], ctx->f[0]);
    // 0x33c3fc: 0xe7a20054  swc1        $f2, 0x54($sp)
    ctx->pc = 0x33c3fcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x33c400: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x33c400u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x33c404: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x33c404u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x33c408: 0x460818c1  sub.s       $f3, $f3, $f8
    ctx->pc = 0x33c408u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[8]);
    // 0x33c40c: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x33c40cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33c410: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x33c410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33c414: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x33c414u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x33c418: 0x3c01430c  lui         $at, 0x430C
    ctx->pc = 0x33c418u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17164 << 16));
    // 0x33c41c: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x33c41cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x33c420: 0x46052102  mul.s       $f4, $f4, $f5
    ctx->pc = 0x33c420u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
    // 0x33c424: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x33c424u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x33c428: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x33c428u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x33c42c: 0x460039c0  add.s       $f7, $f7, $f0
    ctx->pc = 0x33c42cu;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[0]);
    // 0x33c430: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x33c430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33c434: 0x46062100  add.s       $f4, $f4, $f6
    ctx->pc = 0x33c434u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[6]);
    // 0x33c438: 0xe7a1005c  swc1        $f1, 0x5C($sp)
    ctx->pc = 0x33c438u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x33c43c: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x33c43cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x33c440: 0xe7a70050  swc1        $f7, 0x50($sp)
    ctx->pc = 0x33c440u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x33c444: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x33C444u;
    SET_GPR_U32(ctx, 31, 0x33C44Cu);
    ctx->pc = 0x33C448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C444u;
    // 0x33c448: 0xe7a40054  swc1        $f4, 0x54($sp) (Delay Slot)
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x33C444u, 0x33C44Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C44Cu;
label_33c44c:
    // 0x33c44c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x33C44Cu;
    SET_GPR_U32(ctx, 31, 0x33C454u);
    ctx->pc = 0x33C450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C44Cu;
    // 0x33c450: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x33C44Cu, 0x33C454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C454u;
label_33c454:
    // 0x33c454: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x33C454u;
    SET_GPR_U32(ctx, 31, 0x33C45Cu);
    ctx->pc = 0x33C458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C454u;
    // 0x33c458: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x33C454u, 0x33C45Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C45Cu;
label_33c45c:
    // 0x33c45c: 0x8e300100  lw          $s0, 0x100($s1)
    ctx->pc = 0x33c45cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 256)));
    // 0x33c460: 0xc0f70ce  jal         func_3DC338
    ctx->pc = 0x33C460u;
    SET_GPR_U32(ctx, 31, 0x33C468u);
    ctx->pc = 0x33C464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C460u;
    // 0x33c464: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x33C460u, 0x33C468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C468u;
label_33c468:
    // 0x33c468: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x33C468u;
    {
        const bool branch_taken_0x33c468 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33C46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C468u;
        // 0x33c46c: 0x26020080  addiu       $v0, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c468) {
            ctx->pc = 0x33C47Cu;
            goto label_33c47c;
        }
    }
    ctx->pc = 0x33C470u;
    // 0x33c470: 0xc0c4900  jal         func_312400
    ctx->pc = 0x33C470u;
    SET_GPR_U32(ctx, 31, 0x33C478u);
    ctx->pc = 0x33C474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C470u;
    // 0x33c474: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x33C470u, 0x33C478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C478u;
label_33c478:
    // 0x33c478: 0x26020080  addiu       $v0, $s0, 0x80
    ctx->pc = 0x33c478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
label_33c47c:
    // 0x33c47c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x33c47cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33c480: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x33c480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x33c484: 0x26030090  addiu       $v1, $s0, 0x90
    ctx->pc = 0x33c484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x33c488: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x33c488u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x33c48c: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x33c48cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x33c490: 0x260200a0  addiu       $v0, $s0, 0xA0
    ctx->pc = 0x33c490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x33c494: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x33c494u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33c498: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x33c498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x33c49c: 0x260300b0  addiu       $v1, $s0, 0xB0
    ctx->pc = 0x33c49cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x33c4a0: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x33c4a0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x33c4a4: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x33c4a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x33c4a8: 0xc62000e0  lwc1        $f0, 0xE0($s1)
    ctx->pc = 0x33c4a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33c4ac: 0x0  nop
    ctx->pc = 0x33c4acu;
    // NOP
    // 0x33c4b0: 0x4600b943  div.s       $f5, $f23, $f0
    ctx->pc = 0x33c4b0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[5] = FPU_DIV_S(ctx->f[23], ctx->f[0]); }
    // 0x33c4b4: 0x44022800  mfc1        $v0, $f5
    ctx->pc = 0x33c4b4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x33c4b8: 0xdac10000  lqc2        $vf1, 0x0($s6)
    ctx->pc = 0x33c4b8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x33c4bc: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x33c4bcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x33c4c0: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x33c4c0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x33c4c4: 0xfac10040  sqc2        $vf1, 0x40($s6)
    ctx->pc = 0x33c4c4u;
    WRITE128(ADD32(GPR_U32(ctx, 22), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x33c4c8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x33c4c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x33c4cc: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x33c4ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x33c4d0: 0x0  nop
    ctx->pc = 0x33c4d0u;
    // NOP
    // 0x33c4d4: 0x44032800  mfc1        $v1, $f5
    ctx->pc = 0x33c4d4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x33c4d8: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x33c4d8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x33c4dc: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x33c4dcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x33c4e0: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x33c4e0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x33c4e4: 0xfba100b0  sqc2        $vf1, 0xB0($sp)
    ctx->pc = 0x33c4e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x33c4e8: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x33c4e8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x33c4ec: 0xdbc20000  lqc2        $vf2, 0x0($fp)
    ctx->pc = 0x33c4ecu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x33c4f0: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x33c4f0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x33c4f4: 0xfba100d0  sqc2        $vf1, 0xD0($sp)
    ctx->pc = 0x33c4f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x33c4f8: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x33c4f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33c4fc: 0xc7a100d4  lwc1        $f1, 0xD4($sp)
    ctx->pc = 0x33c4fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33c500: 0xc7a200d8  lwc1        $f2, 0xD8($sp)
    ctx->pc = 0x33c500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33c504: 0xc7a300dc  lwc1        $f3, 0xDC($sp)
    ctx->pc = 0x33c504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x33c508: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x33c508u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x33c50c: 0xe7a100c4  swc1        $f1, 0xC4($sp)
    ctx->pc = 0x33c50cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x33c510: 0xe7a200c8  swc1        $f2, 0xC8($sp)
    ctx->pc = 0x33c510u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x33c514: 0xe7a300cc  swc1        $f3, 0xCC($sp)
    ctx->pc = 0x33c514u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x33c518: 0xdae10000  lqc2        $vf1, 0x0($s7)
    ctx->pc = 0x33c518u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x33c51c: 0xfba100a0  sqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x33c51cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x33c520: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x33c520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33c524: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x33c524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33c528: 0xc7a400a8  lwc1        $f4, 0xA8($sp)
    ctx->pc = 0x33c528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x33c52c: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x33c52cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x33c530: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x33c530u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x33c534: 0xe7a40020  swc1        $f4, 0x20($sp)
    ctx->pc = 0x33c534u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x33c538: 0xc6620000  lwc1        $f2, 0x0($s3)
    ctx->pc = 0x33c538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33c53c: 0xc6430000  lwc1        $f3, 0x0($s2)
    ctx->pc = 0x33c53cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x33c540: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x33c540u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x33c544: 0xc6620004  lwc1        $f2, 0x4($s3)
    ctx->pc = 0x33c544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33c548: 0xc6430004  lwc1        $f3, 0x4($s2)
    ctx->pc = 0x33c548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x33c54c: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x33c54cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x33c550: 0xc6620008  lwc1        $f2, 0x8($s3)
    ctx->pc = 0x33c550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33c554: 0xc6430008  lwc1        $f3, 0x8($s2)
    ctx->pc = 0x33c554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x33c558: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x33c558u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x33c55c: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x33c55cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x33c560: 0x8fa400f4  lw          $a0, 0xF4($sp)
    ctx->pc = 0x33c560u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
    // 0x33c564: 0x46002801  sub.s       $f0, $f5, $f0
    ctx->pc = 0x33c564u;
    ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x33c568: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x33c568u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x33c56c: 0xc62100e4  lwc1        $f1, 0xE4($s1)
    ctx->pc = 0x33c56cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33c570: 0x0  nop
    ctx->pc = 0x33c570u;
    // NOP
    // 0x33c574: 0x4601b943  div.s       $f5, $f23, $f1
    ctx->pc = 0x33c574u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[5] = FPU_DIV_S(ctx->f[23], ctx->f[1]); }
    // 0x33c578: 0x44052800  mfc1        $a1, $f5
    ctx->pc = 0x33c578u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x33c57c: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x33c57cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x33c580: 0x48a51000  qmtc2.ni    $a1, $vf2
    ctx->pc = 0x33c580u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x33c584: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x33c584u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x33c588: 0xfba100a0  sqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x33c588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x33c58c: 0x4407b000  mfc1        $a3, $f22
    ctx->pc = 0x33c58cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[22], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x33c590: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x33c590u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x33c594: 0x48a71000  qmtc2.ni    $a3, $vf2
    ctx->pc = 0x33c594u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x33c598: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x33c598u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x33c59c: 0xfba100b0  sqc2        $vf1, 0xB0($sp)
    ctx->pc = 0x33c59cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x33c5a0: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x33c5a0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x33c5a4: 0xdbc20000  lqc2        $vf2, 0x0($fp)
    ctx->pc = 0x33c5a4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x33c5a8: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x33c5a8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x33c5ac: 0xfba100d0  sqc2        $vf1, 0xD0($sp)
    ctx->pc = 0x33c5acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x33c5b0: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x33c5b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33c5b4: 0xc7a100d4  lwc1        $f1, 0xD4($sp)
    ctx->pc = 0x33c5b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33c5b8: 0xc7a200d8  lwc1        $f2, 0xD8($sp)
    ctx->pc = 0x33c5b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33c5bc: 0xc7a300dc  lwc1        $f3, 0xDC($sp)
    ctx->pc = 0x33c5bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x33c5c0: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x33c5c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x33c5c4: 0xe7a100c4  swc1        $f1, 0xC4($sp)
    ctx->pc = 0x33c5c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x33c5c8: 0xe7a200c8  swc1        $f2, 0xC8($sp)
    ctx->pc = 0x33c5c8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x33c5cc: 0xe7a300cc  swc1        $f3, 0xCC($sp)
    ctx->pc = 0x33c5ccu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x33c5d0: 0xdae10000  lqc2        $vf1, 0x0($s7)
    ctx->pc = 0x33c5d0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x33c5d4: 0xfba100a0  sqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x33c5d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x33c5d8: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x33c5d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33c5dc: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x33c5dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33c5e0: 0xc7a400a8  lwc1        $f4, 0xA8($sp)
    ctx->pc = 0x33c5e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x33c5e4: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x33c5e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x33c5e8: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x33c5e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x33c5ec: 0xe7a40024  swc1        $f4, 0x24($sp)
    ctx->pc = 0x33c5ecu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x33c5f0: 0xc6620000  lwc1        $f2, 0x0($s3)
    ctx->pc = 0x33c5f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33c5f4: 0xc6430000  lwc1        $f3, 0x0($s2)
    ctx->pc = 0x33c5f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x33c5f8: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x33c5f8u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x33c5fc: 0xc6620004  lwc1        $f2, 0x4($s3)
    ctx->pc = 0x33c5fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33c600: 0xc6430004  lwc1        $f3, 0x4($s2)
    ctx->pc = 0x33c600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x33c604: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x33c604u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x33c608: 0xc6620008  lwc1        $f2, 0x8($s3)
    ctx->pc = 0x33c608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33c60c: 0xc6430008  lwc1        $f3, 0x8($s2)
    ctx->pc = 0x33c60cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x33c610: 0x4603105c  madd.s      $f1, $f2, $f3
    ctx->pc = 0x33c610u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x33c614: 0x46160840  add.s       $f1, $f1, $f22
    ctx->pc = 0x33c614u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[22]);
    // 0x33c618: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x33c618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33c61c: 0xc7a20084  lwc1        $f2, 0x84($sp)
    ctx->pc = 0x33c61cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33c620: 0xc7a30088  lwc1        $f3, 0x88($sp)
    ctx->pc = 0x33c620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x33c624: 0x4601b041  sub.s       $f1, $f22, $f1
    ctx->pc = 0x33c624u;
    ctx->f[1] = FPU_SUB_S(ctx->f[22], ctx->f[1]);
    // 0x33c628: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x33c628u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x33c62c: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x33c62cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x33c630: 0xe7a30028  swc1        $f3, 0x28($sp)
    ctx->pc = 0x33c630u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x33c634: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x33c634u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x33c638: 0xc6620000  lwc1        $f2, 0x0($s3)
    ctx->pc = 0x33c638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33c63c: 0xc6830000  lwc1        $f3, 0x0($s4)
    ctx->pc = 0x33c63cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x33c640: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x33c640u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x33c644: 0xc6620004  lwc1        $f2, 0x4($s3)
    ctx->pc = 0x33c644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33c648: 0xc6830004  lwc1        $f3, 0x4($s4)
    ctx->pc = 0x33c648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x33c64c: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x33c64cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x33c650: 0xc6620008  lwc1        $f2, 0x8($s3)
    ctx->pc = 0x33c650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33c654: 0xc6830008  lwc1        $f3, 0x8($s4)
    ctx->pc = 0x33c654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x33c658: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x33c658u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x33c65c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x33c65cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x33c660: 0x8fa800f0  lw          $t0, 0xF0($sp)
    ctx->pc = 0x33c660u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x33c664: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x33c664u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x33c668: 0xd9010000  lqc2        $vf1, 0x0($t0)
    ctx->pc = 0x33c668u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x33c66c: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x33c66cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33c670: 0xdba30010  lqc2        $vf3, 0x10($sp)
    ctx->pc = 0x33c670u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33c674: 0xdba40020  lqc2        $vf4, 0x20($sp)
    ctx->pc = 0x33c674u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33c678: 0xdba50030  lqc2        $vf5, 0x30($sp)
    ctx->pc = 0x33c678u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x33c67c: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x33c67cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x33c680: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x33c680u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x33c684: 0x4bc120be  vmaddaz.xyz $ACC, $vf4, $vf1z
    ctx->pc = 0x33c684u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x33c688: 0x4bc0284b  vmaddw.xyz  $vf1, $vf5, $vf0w
    ctx->pc = 0x33c688u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x33c68c: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x33c68cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x33c690: 0xc7ae0058  lwc1        $f14, 0x58($sp)
    ctx->pc = 0x33c690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x33c694: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x33c694u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33c698: 0x0  nop
    ctx->pc = 0x33c698u;
    // NOP
    // 0x33c69c: 0x460e0034  c.lt.s      $f0, $f14
    ctx->pc = 0x33c69cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[14])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x33c6a0: 0x0  nop
    ctx->pc = 0x33c6a0u;
    // NOP
    // 0x33c6a4: 0x4500002f  bc1f        . + 4 + (0x2F << 2)
    ctx->pc = 0x33C6A4u;
    {
        const bool branch_taken_0x33c6a4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x33C6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C6A4u;
        // 0x33c6a8: 0xc7a20050  lwc1        $f2, 0x50($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c6a4) {
            ctx->pc = 0x33C764u;
            goto label_33c764;
        }
    }
    ctx->pc = 0x33C6ACu;
    // 0x33c6ac: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x33c6acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x33c6b0: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x33c6b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33c6b4: 0x0  nop
    ctx->pc = 0x33c6b4u;
    // NOP
    // 0x33c6b8: 0x0  nop
    ctx->pc = 0x33c6b8u;
    // NOP
    // 0x33c6bc: 0x460e1083  div.s       $f2, $f2, $f14
    ctx->pc = 0x33c6bcu;
    { if (ctx->f[14] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[14]); }
    // 0x33c6c0: 0xc4432c48  lwc1        $f3, 0x2C48($v0)
    ctx->pc = 0x33c6c0u;
    { uint32_t bits = FAST_READ32(0x482C48u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x33c6c4: 0x0  nop
    ctx->pc = 0x33c6c4u;
    // NOP
    // 0x33c6c8: 0x0  nop
    ctx->pc = 0x33c6c8u;
    // NOP
    // 0x33c6cc: 0x460e0843  div.s       $f1, $f1, $f14
    ctx->pc = 0x33c6ccu;
    { if (ctx->f[14] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[14]); }
    // 0x33c6d0: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x33c6d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x33c6d4: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x33c6d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x33c6d8: 0x3c0142f0  lui         $at, 0x42F0
    ctx->pc = 0x33c6d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17136 << 16));
    // 0x33c6dc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x33c6dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33c6e0: 0x46001906  mov.s       $f4, $f3
    ctx->pc = 0x33c6e0u;
    ctx->f[4] = FPU_MOV_S(ctx->f[3]);
    // 0x33c6e4: 0x46032834  c.lt.s      $f5, $f3
    ctx->pc = 0x33c6e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x33c6e8: 0x0  nop
    ctx->pc = 0x33c6e8u;
    // NOP
    // 0x33c6ec: 0x0  nop
    ctx->pc = 0x33c6ecu;
    // NOP
    // 0x33c6f0: 0x460e0503  div.s       $f20, $f0, $f14
    ctx->pc = 0x33c6f0u;
    { if (ctx->f[14] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[0], ctx->f[14]); }
    // 0x33c6f4: 0xe7a20040  swc1        $f2, 0x40($sp)
    ctx->pc = 0x33c6f4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x33c6f8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x33C6F8u;
    {
        const bool branch_taken_0x33c6f8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x33C6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C6F8u;
        // 0x33c6fc: 0xe7a10044  swc1        $f1, 0x44($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c6f8) {
            ctx->pc = 0x33C708u;
            goto label_33c708;
        }
    }
    ctx->pc = 0x33C700u;
    // 0x33c700: 0x46002906  mov.s       $f4, $f5
    ctx->pc = 0x33c700u;
    ctx->f[4] = FPU_MOV_S(ctx->f[5]);
    // 0x33c704: 0x46032834  c.lt.s      $f5, $f3
    ctx->pc = 0x33c704u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_33c708:
    // 0x33c708: 0x46001806  mov.s       $f0, $f3
    ctx->pc = 0x33c708u;
    ctx->f[0] = FPU_MOV_S(ctx->f[3]);
    // 0x33c70c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x33C70Cu;
    {
        const bool branch_taken_0x33c70c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x33C710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C70Cu;
        // 0x33c710: 0x4604a542  mul.s       $f21, $f20, $f4 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[20], ctx->f[4]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c70c) {
            ctx->pc = 0x33C718u;
            goto label_33c718;
        }
    }
    ctx->pc = 0x33C714u;
    // 0x33c714: 0x46002806  mov.s       $f0, $f5
    ctx->pc = 0x33c714u;
    ctx->f[0] = FPU_MOV_S(ctx->f[5]);
label_33c718:
    // 0x33c718: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x33c718u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x33c71c: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x33c71cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x33c720: 0xc0da658  jal         func_369960
    ctx->pc = 0x33C720u;
    SET_GPR_U32(ctx, 31, 0x33C728u);
    ctx->pc = 0x33C724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C720u;
    // 0x33c724: 0xc44c2cac  lwc1        $f12, 0x2CAC($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 11436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x369960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x369960u, 0x33C720u, 0x33C728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C728u;
label_33c728:
    // 0x33c728: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x33c728u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x33c72c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x33c72cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x33c730: 0x2442ac50  addiu       $v0, $v0, -0x53B0
    ctx->pc = 0x33c730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945872));
    // 0x33c734: 0x3c080040  lui         $t0, 0x40
    ctx->pc = 0x33c734u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
    // 0x33c738: 0xc44e001c  lwc1        $f14, 0x1C($v0)
    ctx->pc = 0x33c738u;
    { uint32_t bits = FAST_READ32(0x6BAC6Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x33c73c: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x33c73cu;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
    // 0x33c740: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x33c740u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x33c744: 0xc7ac0040  lwc1        $f12, 0x40($sp)
    ctx->pc = 0x33c744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x33c748: 0x460eab82  mul.s       $f14, $f21, $f14
    ctx->pc = 0x33c748u;
    ctx->f[14] = FPU_MUL_S(ctx->f[21], ctx->f[14]);
    // 0x33c74c: 0x8fa700ec  lw          $a3, 0xEC($sp)
    ctx->pc = 0x33c74cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x33c750: 0xc7ad0044  lwc1        $f13, 0x44($sp)
    ctx->pc = 0x33c750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x33c754: 0x8c64c8f0  lw          $a0, -0x3710($v1)
    ctx->pc = 0x33c754u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3FC8F0u));
    // 0x33c758: 0x8d05c8f4  lw          $a1, -0x370C($t0)
    ctx->pc = 0x33c758u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3FC8F4u));
    // 0x33c75c: 0xc0da830  jal         func_36A0C0
    ctx->pc = 0x33C75Cu;
    SET_GPR_U32(ctx, 31, 0x33C764u);
    ctx->pc = 0x33C760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33C75Cu;
    // 0x33c760: 0x8c46c8f8  lw          $a2, -0x3708($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953208)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A0C0u, 0x33C75Cu, 0x33C764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C764u;
label_33c764:
    // 0x33c764: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x33c764u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x33c768: 0x2aa20025  slti        $v0, $s5, 0x25
    ctx->pc = 0x33c768u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)37) ? 1 : 0);
    // 0x33c76c: 0x1440ff0a  bnez        $v0, . + 4 + (-0xF6 << 2)
    ctx->pc = 0x33C76Cu;
    {
        const bool branch_taken_0x33c76c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33C770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C76Cu;
        // 0x33c770: 0x3c040040  lui         $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33c76c) {
            ctx->pc = 0x33C398u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33c398;
        }
    }
    ctx->pc = 0x33C774u;
    // 0x33c774: 0xc0da828  jal         func_36A0A0
    ctx->pc = 0x33C774u;
    SET_GPR_U32(ctx, 31, 0x33C77Cu);
    ctx->pc = 0x36A0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A0A0u, 0x33C774u, 0x33C77Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C77Cu;
label_33c77c:
    // 0x33c77c: 0xc0db1ae  jal         func_36C6B8
    ctx->pc = 0x33C77Cu;
    SET_GPR_U32(ctx, 31, 0x33C784u);
    ctx->pc = 0x36C6B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C6B8u, 0x33C77Cu, 0x33C784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C784u;
label_33c784:
    // 0x33c784: 0xc0db20a  jal         func_36C828
    ctx->pc = 0x33C784u;
    SET_GPR_U32(ctx, 31, 0x33C78Cu);
    ctx->pc = 0x36C828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C828u, 0x33C784u, 0x33C78Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33C78Cu;
label_33c78c:
    // 0x33c78c: 0xdfb00100  ld          $s0, 0x100($sp)
    ctx->pc = 0x33c78cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x33c790: 0xdfb10108  ld          $s1, 0x108($sp)
    ctx->pc = 0x33c790u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x33c794: 0xdfb20110  ld          $s2, 0x110($sp)
    ctx->pc = 0x33c794u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x33c798: 0xdfb30118  ld          $s3, 0x118($sp)
    ctx->pc = 0x33c798u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x33c79c: 0xdfb40120  ld          $s4, 0x120($sp)
    ctx->pc = 0x33c79cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x33c7a0: 0xdfb50128  ld          $s5, 0x128($sp)
    ctx->pc = 0x33c7a0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x33c7a4: 0xdfb60130  ld          $s6, 0x130($sp)
    ctx->pc = 0x33c7a4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x33c7a8: 0xdfb70138  ld          $s7, 0x138($sp)
    ctx->pc = 0x33c7a8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x33c7ac: 0xdfbe0140  ld          $fp, 0x140($sp)
    ctx->pc = 0x33c7acu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x33c7b0: 0xdfbf0148  ld          $ra, 0x148($sp)
    ctx->pc = 0x33c7b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x33c7b4: 0xc7bb0188  lwc1        $f27, 0x188($sp)
    ctx->pc = 0x33c7b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x33c7b8: 0xc7ba0180  lwc1        $f26, 0x180($sp)
    ctx->pc = 0x33c7b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x33c7bc: 0xc7b90178  lwc1        $f25, 0x178($sp)
    ctx->pc = 0x33c7bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x33c7c0: 0xc7b80170  lwc1        $f24, 0x170($sp)
    ctx->pc = 0x33c7c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x33c7c4: 0xc7b70168  lwc1        $f23, 0x168($sp)
    ctx->pc = 0x33c7c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x33c7c8: 0xc7b60160  lwc1        $f22, 0x160($sp)
    ctx->pc = 0x33c7c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x33c7cc: 0xc7b50158  lwc1        $f21, 0x158($sp)
    ctx->pc = 0x33c7ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x33c7d0: 0xc7b40150  lwc1        $f20, 0x150($sp)
    ctx->pc = 0x33c7d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x33c7d4: 0x3e00008  jr          $ra
    ctx->pc = 0x33C7D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33C7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33C7D4u;
        // 0x33c7d8: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33C7D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33C7DCu;
    // 0x33c7dc: 0x0  nop
    ctx->pc = 0x33c7dcu;
    // NOP
    ctx->pc = 0x33c7e0u;
}
