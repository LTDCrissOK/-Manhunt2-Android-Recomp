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

// Function: sub_002998C8
// Address: 0x2998c8 - 0x299ac0
void sub_002998C8_0x2998c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002998C8_0x2998c8");
#endif

    switch (ctx->pc) {
        case 0x2998f0u: goto label_2998f0;
        case 0x2999d0u: goto label_2999d0;
        case 0x299a0cu: goto label_299a0c;
        case 0x299a60u: goto label_299a60;
        case 0x299a98u: goto label_299a98;
        default: break;
    }

    ctx->pc = 0x2998c8u;

    // 0x2998c8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2998c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2998cc: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2998ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2998d0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2998d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2998d4: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2998d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2998d8: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x2998d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x2998dc: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x2998dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x2998e0: 0xe7b60050  swc1        $f22, 0x50($sp)
    ctx->pc = 0x2998e0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2998e4: 0xe7b50048  swc1        $f21, 0x48($sp)
    ctx->pc = 0x2998e4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2998e8: 0xc0a64e2  jal         func_299388
    ctx->pc = 0x2998E8u;
    SET_GPR_U32(ctx, 31, 0x2998F0u);
    ctx->pc = 0x2998ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2998E8u;
    // 0x2998ec: 0xe7b40040  swc1        $f20, 0x40($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x299388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299388u, 0x2998E8u, 0x2998F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2998F0u;
label_2998f0:
    // 0x2998f0: 0xc643007c  lwc1        $f3, 0x7C($s2)
    ctx->pc = 0x2998f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2998f4: 0x3c01c0a0  lui         $at, 0xC0A0
    ctx->pc = 0x2998f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49312 << 16));
    // 0x2998f8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2998f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2998fc: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x2998fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x299900: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x299900u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x299904: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x299904u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x299908: 0x46011834  c.lt.s      $f3, $f1
    ctx->pc = 0x299908u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29990c: 0x0  nop
    ctx->pc = 0x29990cu;
    // NOP
    // 0x299910: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x299910u;
    {
        const bool branch_taken_0x299910 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x299914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299910u;
        // 0x299914: 0xc6420078  lwc1        $f2, 0x78($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x299910) {
            ctx->pc = 0x299930u;
            goto label_299930;
        }
    }
    ctx->pc = 0x299918u;
    // 0x299918: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x299918u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x29991c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x29991cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x299920: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x299920u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
    // 0x299924: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x299924u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x299928: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x299928u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x29992c: 0x460100c0  add.s       $f3, $f0, $f1
    ctx->pc = 0x29992cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_299930:
    // 0x299930: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x299930u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x299934: 0x3c014299  lui         $at, 0x4299
    ctx->pc = 0x299934u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17049 << 16));
    // 0x299938: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x299938u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x29993c: 0x26510028  addiu       $s1, $s2, 0x28
    ctx->pc = 0x29993cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 40));
    // 0x299940: 0x0  nop
    ctx->pc = 0x299940u;
    // NOP
    // 0x299944: 0x0  nop
    ctx->pc = 0x299944u;
    // NOP
    // 0x299948: 0x46021883  div.s       $f2, $f3, $f2
    ctx->pc = 0x299948u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[3], ctx->f[2]); }
    // 0x29994c: 0xc6410090  lwc1        $f1, 0x90($s2)
    ctx->pc = 0x29994cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x299950: 0xc6430028  lwc1        $f3, 0x28($s2)
    ctx->pc = 0x299950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x299954: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x299954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x299958: 0xc6240004  lwc1        $f4, 0x4($s1)
    ctx->pc = 0x299958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x29995c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x29995cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299960: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x299960u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x299964: 0xc474ac6c  lwc1        $f20, -0x5394($v1)
    ctx->pc = 0x299964u;
    { uint32_t bits = FAST_READ32(0x6BAC6Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x299968: 0xc6400094  lwc1        $f0, 0x94($s2)
    ctx->pc = 0x299968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29996c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29996cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299970: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x299970u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x299974: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x299974u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x299978: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x299978u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x29997c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x29997cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299980: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x299980u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x299984: 0xc64e0098  lwc1        $f14, 0x98($s2)
    ctx->pc = 0x299984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x299988: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x299988u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x29998c: 0xc64f009c  lwc1        $f15, 0x9C($s2)
    ctx->pc = 0x29998cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x299990: 0x4615a502  mul.s       $f20, $f20, $f21
    ctx->pc = 0x299990u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[21]);
    // 0x299994: 0x46000b06  mov.s       $f12, $f1
    ctx->pc = 0x299994u;
    ctx->f[12] = FPU_MOV_S(ctx->f[1]);
    // 0x299998: 0x460010e4  .word       0x460010E4                   # cvt.w.s     $f3, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x299998u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[3], &tmp, sizeof(tmp)); }
    // 0x29999c: 0x44101800  mfc1        $s0, $f3
    ctx->pc = 0x29999cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
    // 0x2999a0: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x2999a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2999a4: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x2999a4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    // 0x2999a8: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x2999a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2999ac: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x2999acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2999b0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2999b0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2999b4: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x2999b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x2999b8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2999b8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2999bc: 0x3c013ca3  lui         $at, 0x3CA3
    ctx->pc = 0x2999bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15523 << 16));
    // 0x2999c0: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x2999c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x2999c4: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x2999c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x2999c8: 0xc0da874  jal         func_36A1D0
    ctx->pc = 0x2999C8u;
    SET_GPR_U32(ctx, 31, 0x2999D0u);
    ctx->pc = 0x2999CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2999C8u;
    // 0x2999cc: 0x2800a  movz        $s0, $zero, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A1D0u, 0x2999C8u, 0x2999D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2999D0u;
label_2999d0:
    // 0x2999d0: 0xc7ac0000  lwc1        $f12, 0x0($sp)
    ctx->pc = 0x2999d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2999d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2999d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2999d8: 0xc7ad0004  lwc1        $f13, 0x4($sp)
    ctx->pc = 0x2999d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2999dc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2999dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2999e0: 0xc64e0098  lwc1        $f14, 0x98($s2)
    ctx->pc = 0x2999e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2999e4: 0x46146300  add.s       $f12, $f12, $f20
    ctx->pc = 0x2999e4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[20]);
    // 0x2999e8: 0xc64f009c  lwc1        $f15, 0x9C($s2)
    ctx->pc = 0x2999e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x2999ec: 0x46156b40  add.s       $f13, $f13, $f21
    ctx->pc = 0x2999ecu;
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[21]);
    // 0x2999f0: 0x46147381  sub.s       $f14, $f14, $f20
    ctx->pc = 0x2999f0u;
    ctx->f[14] = FPU_SUB_S(ctx->f[14], ctx->f[20]);
    // 0x2999f4: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2999f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2999f8: 0x46167bc1  sub.s       $f15, $f15, $f22
    ctx->pc = 0x2999f8u;
    ctx->f[15] = FPU_SUB_S(ctx->f[15], ctx->f[22]);
    // 0x2999fc: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x2999fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x299a00: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x299a00u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299a04: 0xc0da874  jal         func_36A1D0
    ctx->pc = 0x299A04u;
    SET_GPR_U32(ctx, 31, 0x299A0Cu);
    ctx->pc = 0x299A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299A04u;
    // 0x299a08: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A1D0u, 0x299A04u, 0x299A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299A0Cu;
label_299a0c:
    // 0x299a0c: 0xc6230004  lwc1        $f3, 0x4($s1)
    ctx->pc = 0x299a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x299a10: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x299a10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299a14: 0xc6420028  lwc1        $f2, 0x28($s2)
    ctx->pc = 0x299a14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x299a18: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x299a18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299a1c: 0xc64100a0  lwc1        $f1, 0xA0($s2)
    ctx->pc = 0x299a1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x299a20: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x299a20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299a24: 0xc64000a4  lwc1        $f0, 0xA4($s2)
    ctx->pc = 0x299a24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x299a28: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x299a28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x299a2c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x299a2cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x299a30: 0xc64e00a8  lwc1        $f14, 0xA8($s2)
    ctx->pc = 0x299a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x299a34: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x299a34u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x299a38: 0xc64f00ac  lwc1        $f15, 0xAC($s2)
    ctx->pc = 0x299a38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x299a3c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x299a3cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299a40: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x299a40u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299a44: 0x46000b06  mov.s       $f12, $f1
    ctx->pc = 0x299a44u;
    ctx->f[12] = FPU_MOV_S(ctx->f[1]);
    // 0x299a48: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x299a48u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x299a4c: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x299a4cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    // 0x299a50: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x299a50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x299a54: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x299a54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x299a58: 0xc0da874  jal         func_36A1D0
    ctx->pc = 0x299A58u;
    SET_GPR_U32(ctx, 31, 0x299A60u);
    ctx->pc = 0x299A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299A58u;
    // 0x299a5c: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A1D0u, 0x299A58u, 0x299A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299A60u;
label_299a60:
    // 0x299a60: 0xc64f00ac  lwc1        $f15, 0xAC($s2)
    ctx->pc = 0x299a60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x299a64: 0x24040078  addiu       $a0, $zero, 0x78
    ctx->pc = 0x299a64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x299a68: 0xc7ad0004  lwc1        $f13, 0x4($sp)
    ctx->pc = 0x299a68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x299a6c: 0x24050078  addiu       $a1, $zero, 0x78
    ctx->pc = 0x299a6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x299a70: 0xc64e00a8  lwc1        $f14, 0xA8($s2)
    ctx->pc = 0x299a70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x299a74: 0x46167bc1  sub.s       $f15, $f15, $f22
    ctx->pc = 0x299a74u;
    ctx->f[15] = FPU_SUB_S(ctx->f[15], ctx->f[22]);
    // 0x299a78: 0x46156b40  add.s       $f13, $f13, $f21
    ctx->pc = 0x299a78u;
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[21]);
    // 0x299a7c: 0xc7ac0000  lwc1        $f12, 0x0($sp)
    ctx->pc = 0x299a7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x299a80: 0x46147381  sub.s       $f14, $f14, $f20
    ctx->pc = 0x299a80u;
    ctx->f[14] = FPU_SUB_S(ctx->f[14], ctx->f[20]);
    // 0x299a84: 0x24060078  addiu       $a2, $zero, 0x78
    ctx->pc = 0x299a84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x299a88: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x299a88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x299a8c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x299a8cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299a90: 0xc0da874  jal         func_36A1D0
    ctx->pc = 0x299A90u;
    SET_GPR_U32(ctx, 31, 0x299A98u);
    ctx->pc = 0x299A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299A90u;
    // 0x299a94: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A1D0u, 0x299A90u, 0x299A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299A98u;
label_299a98:
    // 0x299a98: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x299a98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x299a9c: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x299a9cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x299aa0: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x299aa0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x299aa4: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x299aa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x299aa8: 0xc7b60050  lwc1        $f22, 0x50($sp)
    ctx->pc = 0x299aa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x299aac: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x299aacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x299ab0: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x299ab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x299ab4: 0x3e00008  jr          $ra
    ctx->pc = 0x299AB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x299AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299AB4u;
        // 0x299ab8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x299AB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x299ABCu;
    // 0x299abc: 0x0  nop
    ctx->pc = 0x299abcu;
    // NOP
    ctx->pc = 0x299ac0u;
}
