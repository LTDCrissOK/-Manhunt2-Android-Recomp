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

// Function: sub_001F0680
// Address: 0x1f0680 - 0x1f0870
void sub_001F0680_0x1f0680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F0680_0x1f0680");
#endif

    switch (ctx->pc) {
        case 0x1f0710u: goto label_1f0710;
        case 0x1f0750u: goto label_1f0750;
        case 0x1f077cu: goto label_1f077c;
        default: break;
    }

    ctx->pc = 0x1f0680u;

    // 0x1f0680: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1f0680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1f0684: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1f0684u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1f0688: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1f0688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1f068c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1f068cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f0690: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f0690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f0694: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f0694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1f0698: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1f0698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1f069c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1f069cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1f06a0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f06a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f06a4: 0xe7bb0068  swc1        $f27, 0x68($sp)
    ctx->pc = 0x1f06a4u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x1f06a8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1f06a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f06ac: 0xe7ba0060  swc1        $f26, 0x60($sp)
    ctx->pc = 0x1f06acu;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1f06b0: 0x261113e8  addiu       $s1, $s0, 0x13E8
    ctx->pc = 0x1f06b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 5096));
    // 0x1f06b4: 0xe7b90058  swc1        $f25, 0x58($sp)
    ctx->pc = 0x1f06b4u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x1f06b8: 0xe7b80050  swc1        $f24, 0x50($sp)
    ctx->pc = 0x1f06b8u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1f06bc: 0xe7b60040  swc1        $f22, 0x40($sp)
    ctx->pc = 0x1f06bcu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1f06c0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1f06c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1f06c4: 0xe7b70048  swc1        $f23, 0x48($sp)
    ctx->pc = 0x1f06c4u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1f06c8: 0xe7b50038  swc1        $f21, 0x38($sp)
    ctx->pc = 0x1f06c8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x1f06cc: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x1f06ccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1f06d0: 0xac401534  sw          $zero, 0x1534($v0)
    ctx->pc = 0x1f06d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 5428), GPR_U32(ctx, 0));
    // 0x1f06d4: 0xac401538  sw          $zero, 0x1538($v0)
    ctx->pc = 0x1f06d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 5432), GPR_U32(ctx, 0));
    // 0x1f06d8: 0x3c013bb6  lui         $at, 0x3BB6
    ctx->pc = 0x1f06d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15286 << 16));
    // 0x1f06dc: 0x34210b61  ori         $at, $at, 0xB61
    ctx->pc = 0x1f06dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2913);
    // 0x1f06e0: 0x4481c800  mtc1        $at, $f25
    ctx->pc = 0x1f06e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
    // 0x1f06e4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1f06e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1f06e8: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x1f06e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x1f06ec: 0xc6171534  lwc1        $f23, 0x1534($s0)
    ctx->pc = 0x1f06ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1f06f0: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x1f06f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x1f06f4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1f06f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1f06f8: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x1f06f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x1f06fc: 0x3c014190  lui         $at, 0x4190
    ctx->pc = 0x1f06fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16784 << 16));
    // 0x1f0700: 0x4481d800  mtc1        $at, $f27
    ctx->pc = 0x1f0700u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[27], &bits, sizeof(bits)); }
    // 0x1f0704: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x1f0704u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x1f0708: 0x4481d000  mtc1        $at, $f26
    ctx->pc = 0x1f0708u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[26], &bits, sizeof(bits)); }
    // 0x1f070c: 0x0  nop
    ctx->pc = 0x1f070cu;
    // NOP
label_1f0710:
    // 0x1f0710: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x1f0710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f0714: 0x4600b834  c.lt.s      $f23, $f0
    ctx->pc = 0x1f0714u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f0718: 0x0  nop
    ctx->pc = 0x1f0718u;
    // NOP
    // 0x1f071c: 0x45020034  bc1fl       . + 4 + (0x34 << 2)
    ctx->pc = 0x1F071Cu;
    {
        const bool branch_taken_0x1f071c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f071c) {
            ctx->pc = 0x1F0720u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F071Cu;
            // 0x1f0720: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F07F0u;
            goto label_1f07f0;
        }
    }
    ctx->pc = 0x1F0724u;
    // 0x1f0724: 0x4492a000  mtc1        $s2, $f20
    ctx->pc = 0x1f0724u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1f0728: 0x0  nop
    ctx->pc = 0x1f0728u;
    // NOP
    // 0x1f072c: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x1f072cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x1f0730: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x1f0730u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x1f0734: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1f0734u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1f0738: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x1f0738u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x1f073c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1f073cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1f0740: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1f0740u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1f0744: 0x461ba502  mul.s       $f20, $f20, $f27
    ctx->pc = 0x1f0744u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[27]);
    // 0x1f0748: 0xc0e40f4  jal         func_3903D0
    ctx->pc = 0x1F0748u;
    SET_GPR_U32(ctx, 31, 0x1F0750u);
    ctx->pc = 0x1F074Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0748u;
    // 0x1f074c: 0x461aa300  add.s       $f12, $f20, $f26 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[20], ctx->f[26]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3903D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3903D0u, 0x1F0748u, 0x1F0750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F0750u;
label_1f0750:
    // 0x1f0750: 0x46190002  mul.s       $f0, $f0, $f25
    ctx->pc = 0x1f0750u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[25]);
    // 0x1f0754: 0x3c014387  lui         $at, 0x4387
    ctx->pc = 0x1f0754u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17287 << 16));
    // 0x1f0758: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1f0758u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f075c: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x1f075cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x1f0760: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1f0760u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1f0764: 0x460ca300  add.s       $f12, $f20, $f12
    ctx->pc = 0x1f0764u;
    ctx->f[12] = FPU_ADD_S(ctx->f[20], ctx->f[12]);
    // 0x1f0768: 0x46180001  sub.s       $f0, $f0, $f24
    ctx->pc = 0x1f0768u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[24]);
    // 0x1f076c: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x1f076cu;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x1f0770: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x1f0770u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x1f0774: 0xc0e40f4  jal         func_3903D0
    ctx->pc = 0x1F0774u;
    SET_GPR_U32(ctx, 31, 0x1F077Cu);
    ctx->pc = 0x1F0778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F0774u;
    // 0x1f0778: 0x46150500  add.s       $f20, $f0, $f21 (Delay Slot)
    ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3903D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3903D0u, 0x1F0774u, 0x1F077Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F077Cu;
label_1f077c:
    // 0x1f077c: 0x46190002  mul.s       $f0, $f0, $f25
    ctx->pc = 0x1f077cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[25]);
    // 0x1f0780: 0xc6220000  lwc1        $f2, 0x0($s1)
    ctx->pc = 0x1f0780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1f0784: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x1f0784u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x1f0788: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1f0788u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f078c: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x1f078cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x1f0790: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1f0790u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1f0794: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1f0794u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1f0798: 0x46180001  sub.s       $f0, $f0, $f24
    ctx->pc = 0x1f0798u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[24]);
    // 0x1f079c: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x1f079cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x1f07a0: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x1f07a0u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x1f07a4: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x1f07a4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x1f07a8: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x1f07a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x1f07ac: 0x46170834  c.lt.s      $f1, $f23
    ctx->pc = 0x1f07acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f07b0: 0x0  nop
    ctx->pc = 0x1f07b0u;
    // NOP
    // 0x1f07b4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1F07B4u;
    {
        const bool branch_taken_0x1f07b4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F07B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F07B4u;
        // 0x1f07b8: 0x46150000  add.s       $f0, $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f07b4) {
            ctx->pc = 0x1F07C0u;
            goto label_1f07c0;
        }
    }
    ctx->pc = 0x1F07BCu;
    // 0x1f07bc: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1f07bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1f07c0:
    // 0x1f07c0: 0x0  nop
    ctx->pc = 0x1f07c0u;
    // NOP
    // 0x1f07c4: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x1f07c4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1f07c8: 0xc6031534  lwc1        $f3, 0x1534($s0)
    ctx->pc = 0x1f07c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1f07cc: 0x46140802  mul.s       $f0, $f1, $f20
    ctx->pc = 0x1f07ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x1f07d0: 0xc6011538  lwc1        $f1, 0x1538($s0)
    ctx->pc = 0x1f07d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f07d4: 0x46151082  mul.s       $f2, $f2, $f21
    ctx->pc = 0x1f07d4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[21]);
    // 0x1f07d8: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x1f07d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x1f07dc: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1f07dcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1f07e0: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x1f07e0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x1f07e4: 0xe6011538  swc1        $f1, 0x1538($s0)
    ctx->pc = 0x1f07e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5432), bits); }
    // 0x1f07e8: 0xe6031534  swc1        $f3, 0x1534($s0)
    ctx->pc = 0x1f07e8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5428), bits); }
    // 0x1f07ec: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1f07ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1f07f0:
    // 0x1f07f0: 0x2a420014  slti        $v0, $s2, 0x14
    ctx->pc = 0x1f07f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x1f07f4: 0x1440ffc6  bnez        $v0, . + 4 + (-0x3A << 2)
    ctx->pc = 0x1F07F4u;
    {
        const bool branch_taken_0x1f07f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F07F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F07F4u;
        // 0x1f07f8: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f07f4) {
            ctx->pc = 0x1F0710u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f0710;
        }
    }
    ctx->pc = 0x1F07FCu;
    // 0x1f07fc: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1f07fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1f0800: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1f0800u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1f0804: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1f0804u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f0808: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1f0808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1f080c: 0xc4401534  lwc1        $f0, 0x1534($v0)
    ctx->pc = 0x1f080cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f0810: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1f0810u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f0814: 0x0  nop
    ctx->pc = 0x1f0814u;
    // NOP
    // 0x1f0818: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1F0818u;
    {
        const bool branch_taken_0x1f0818 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f0818) {
            ctx->pc = 0x1F081Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F0818u;
            // 0x1f081c: 0xe4411534  swc1        $f1, 0x1534($v0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 5428), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F0820u;
            goto label_1f0820;
        }
    }
    ctx->pc = 0x1F0820u;
label_1f0820:
    // 0x1f0820: 0xc4401538  lwc1        $f0, 0x1538($v0)
    ctx->pc = 0x1f0820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f0824: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1f0824u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f0828: 0x0  nop
    ctx->pc = 0x1f0828u;
    // NOP
    // 0x1f082c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1F082Cu;
    {
        const bool branch_taken_0x1f082c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f082c) {
            ctx->pc = 0x1F0830u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F082Cu;
            // 0x1f0830: 0xe4411538  swc1        $f1, 0x1538($v0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 5432), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F0834u;
            goto label_1f0834;
        }
    }
    ctx->pc = 0x1F0834u;
label_1f0834:
    // 0x1f0834: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f0834u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f0838: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f0838u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f083c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1f083cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f0840: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1f0840u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f0844: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1f0844u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f0848: 0xc7bb0068  lwc1        $f27, 0x68($sp)
    ctx->pc = 0x1f0848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x1f084c: 0xc7ba0060  lwc1        $f26, 0x60($sp)
    ctx->pc = 0x1f084cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x1f0850: 0xc7b90058  lwc1        $f25, 0x58($sp)
    ctx->pc = 0x1f0850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x1f0854: 0xc7b80050  lwc1        $f24, 0x50($sp)
    ctx->pc = 0x1f0854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x1f0858: 0xc7b70048  lwc1        $f23, 0x48($sp)
    ctx->pc = 0x1f0858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1f085c: 0xc7b60040  lwc1        $f22, 0x40($sp)
    ctx->pc = 0x1f085cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1f0860: 0xc7b50038  lwc1        $f21, 0x38($sp)
    ctx->pc = 0x1f0860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1f0864: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x1f0864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1f0868: 0x3e00008  jr          $ra
    ctx->pc = 0x1F0868u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F086Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0868u;
        // 0x1f086c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F0868u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F0870u;
}
