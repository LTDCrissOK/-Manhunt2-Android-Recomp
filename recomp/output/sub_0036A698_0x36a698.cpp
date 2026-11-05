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

// Function: sub_0036A698
// Address: 0x36a698 - 0x36a978
void sub_0036A698_0x36a698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036A698_0x36a698");
#endif

    switch (ctx->pc) {
        case 0x36a724u: goto label_36a724;
        case 0x36a738u: goto label_36a738;
        case 0x36a7b0u: goto label_36a7b0;
        case 0x36a7d8u: goto label_36a7d8;
        case 0x36a7ecu: goto label_36a7ec;
        case 0x36a804u: goto label_36a804;
        case 0x36a81cu: goto label_36a81c;
        case 0x36a834u: goto label_36a834;
        case 0x36a890u: goto label_36a890;
        case 0x36a8c0u: goto label_36a8c0;
        case 0x36a8d0u: goto label_36a8d0;
        case 0x36a8e8u: goto label_36a8e8;
        case 0x36a918u: goto label_36a918;
        case 0x36a928u: goto label_36a928;
        default: break;
    }

    ctx->pc = 0x36a698u;

    // 0x36a698: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x36a698u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x36a69c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x36a69cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x36a6a0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x36a6a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x36a6a4: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x36a6a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a6a8: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x36a6a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x36a6ac: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x36a6acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a6b0: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x36a6b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x36a6b4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x36a6b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a6b8: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x36a6b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x36a6bc: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x36a6bcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a6c0: 0xe7b80070  swc1        $f24, 0x70($sp)
    ctx->pc = 0x36a6c0u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x36a6c4: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x36a6c4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a6c8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x36a6c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x36a6cc: 0x46008606  mov.s       $f24, $f16
    ctx->pc = 0x36a6ccu;
    ctx->f[24] = FPU_MOV_S(ctx->f[16]);
    // 0x36a6d0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x36a6d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x36a6d4: 0xe7be00a0  swc1        $f30, 0xA0($sp)
    ctx->pc = 0x36a6d4u;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x36a6d8: 0xe7bd0098  swc1        $f29, 0x98($sp)
    ctx->pc = 0x36a6d8u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x36a6dc: 0xe7bc0090  swc1        $f28, 0x90($sp)
    ctx->pc = 0x36a6dcu;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x36a6e0: 0xe7bb0088  swc1        $f27, 0x88($sp)
    ctx->pc = 0x36a6e0u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x36a6e4: 0xe7ba0080  swc1        $f26, 0x80($sp)
    ctx->pc = 0x36a6e4u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x36a6e8: 0xe7b90078  swc1        $f25, 0x78($sp)
    ctx->pc = 0x36a6e8u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x36a6ec: 0xe7b70068  swc1        $f23, 0x68($sp)
    ctx->pc = 0x36a6ecu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x36a6f0: 0xe7b60060  swc1        $f22, 0x60($sp)
    ctx->pc = 0x36a6f0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x36a6f4: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x36a6f4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x36a6f8: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x36a6f8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x36a6fc: 0xe7ac0000  swc1        $f12, 0x0($sp)
    ctx->pc = 0x36a6fcu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x36a700: 0xe7ad0004  swc1        $f13, 0x4($sp)
    ctx->pc = 0x36a700u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x36a704: 0xe7ae0008  swc1        $f14, 0x8($sp)
    ctx->pc = 0x36a704u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x36a708: 0x11200006  beqz        $t1, . + 4 + (0x6 << 2)
    ctx->pc = 0x36A708u;
    {
        const bool branch_taken_0x36a708 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x36A70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A708u;
        // 0x36a70c: 0xe7af000c  swc1        $f15, 0xC($sp) (Delay Slot)
        { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x36a708) {
            ctx->pc = 0x36A724u;
            goto label_36a724;
        }
    }
    ctx->pc = 0x36A710u;
    // 0x36a710: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x36a710u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a714: 0x37a50004  ori         $a1, $sp, 0x4
    ctx->pc = 0x36a714u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x36a718: 0x37a60008  ori         $a2, $sp, 0x8
    ctx->pc = 0x36a718u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    // 0x36a71c: 0xc0a1816  jal         func_286058
    ctx->pc = 0x36A71Cu;
    SET_GPR_U32(ctx, 31, 0x36A724u);
    ctx->pc = 0x36A720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A71Cu;
    // 0x36a720: 0x37a7000c  ori         $a3, $sp, 0xC (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)12);
    ctx->in_delay_slot = false;
    ctx->pc = 0x286058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286058u, 0x36A71Cu, 0x36A724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A724u;
label_36a724:
    // 0x36a724: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x36a724u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x36a728: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x36a728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x36a72c: 0xac43ca8c  sw          $v1, -0x3574($v0)
    ctx->pc = 0x36a72cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6BCA8Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BCA8Cu, _value); } while (0);
    // 0x36a730: 0xc0da570  jal         func_3695C0
    ctx->pc = 0x36A730u;
    SET_GPR_U32(ctx, 31, 0x36A738u);
    ctx->pc = 0x36A734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A730u;
    // 0x36a734: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3695C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3695C0u, 0x36A730u, 0x36A738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A738u;
label_36a738:
    // 0x36a738: 0x4600c024  .word       0x4600C024                   # cvt.w.s     $f0, $f24 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x36a738u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[24]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x36a73c: 0x44100000  mfc1        $s0, $f0
    ctx->pc = 0x36a73cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
    // 0x36a740: 0xc7ae0008  lwc1        $f14, 0x8($sp)
    ctx->pc = 0x36a740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x36a744: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x36a744u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a748: 0xc7af000c  lwc1        $f15, 0xC($sp)
    ctx->pc = 0x36a748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x36a74c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x36a74cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a750: 0x460e7000  add.s       $f0, $f14, $f14
    ctx->pc = 0x36a750u;
    ctx->f[0] = FPU_ADD_S(ctx->f[14], ctx->f[14]);
    // 0x36a754: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x36a754u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x36a758: 0x4481e800  mtc1        $at, $f29
    ctx->pc = 0x36a758u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[29], &bits, sizeof(bits)); }
    // 0x36a75c: 0x460f7840  add.s       $f1, $f15, $f15
    ctx->pc = 0x36a75cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[15], ctx->f[15]);
    // 0x36a760: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x36a760u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x36a764: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x36a764u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x36a768: 0x4480f000  mtc1        $zero, $f30
    ctx->pc = 0x36a768u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[30], &bits, sizeof(bits)); }
    // 0x36a76c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x36a76cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a770: 0x0  nop
    ctx->pc = 0x36a770u;
    // NOP
    // 0x36a774: 0x0  nop
    ctx->pc = 0x36a774u;
    // NOP
    // 0x36a778: 0x4600eec3  div.s       $f27, $f29, $f0
    ctx->pc = 0x36a778u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[27] = FPU_DIV_S(ctx->f[29], ctx->f[0]); }
    // 0x36a77c: 0xc7ad0004  lwc1        $f13, 0x4($sp)
    ctx->pc = 0x36a77cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x36a780: 0x0  nop
    ctx->pc = 0x36a780u;
    // NOP
    // 0x36a784: 0x0  nop
    ctx->pc = 0x36a784u;
    // NOP
    // 0x36a788: 0x4601ee83  div.s       $f26, $f29, $f1
    ctx->pc = 0x36a788u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[26] = FPU_DIV_S(ctx->f[29], ctx->f[1]); }
    // 0x36a78c: 0xc7ac0000  lwc1        $f12, 0x0($sp)
    ctx->pc = 0x36a78cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x36a790: 0x0  nop
    ctx->pc = 0x36a790u;
    // NOP
    // 0x36a794: 0x0  nop
    ctx->pc = 0x36a794u;
    // NOP
    // 0x36a798: 0x46181603  div.s       $f24, $f2, $f24
    ctx->pc = 0x36a798u;
    { if (ctx->f[24] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[24] = FPU_DIV_S(ctx->f[2], ctx->f[24]); }
    // 0x36a79c: 0x4600f646  mov.s       $f25, $f30
    ctx->pc = 0x36a79cu;
    ctx->f[25] = FPU_MOV_S(ctx->f[30]);
    // 0x36a7a0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x36a7a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a7a4: 0x461b7382  mul.s       $f14, $f14, $f27
    ctx->pc = 0x36a7a4u;
    ctx->f[14] = FPU_MUL_S(ctx->f[14], ctx->f[27]);
    // 0x36a7a8: 0xc0da62e  jal         func_3698B8
    ctx->pc = 0x36A7A8u;
    SET_GPR_U32(ctx, 31, 0x36A7B0u);
    ctx->pc = 0x36A7ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A7A8u;
    // 0x36a7ac: 0x461a7bc2  mul.s       $f15, $f15, $f26 (Delay Slot)
    ctx->f[15] = FPU_MUL_S(ctx->f[15], ctx->f[26]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3698B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3698B8u, 0x36A7A8u, 0x36A7B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A7B0u;
label_36a7b0:
    // 0x36a7b0: 0x12a0003b  beqz        $s5, . + 4 + (0x3B << 2)
    ctx->pc = 0x36A7B0u;
    {
        const bool branch_taken_0x36a7b0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x36A7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A7B0u;
        // 0x36a7b4: 0x26020001  addiu       $v0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36a7b0) {
            ctx->pc = 0x36A8A0u;
            goto label_36a8a0;
        }
    }
    ctx->pc = 0x36A7B8u;
    // 0x36a7b8: 0x18400059  blez        $v0, . + 4 + (0x59 << 2)
    ctx->pc = 0x36A7B8u;
    {
        const bool branch_taken_0x36a7b8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x36A7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A7B8u;
        // 0x36a7bc: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36a7b8) {
            ctx->pc = 0x36A920u;
            goto label_36a920;
        }
    }
    ctx->pc = 0x36A7C0u;
    // 0x36a7c0: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x36a7c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
    // 0x36a7c4: 0x3421f998  ori         $at, $at, 0xF998
    ctx->pc = 0x36a7c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)63896);
    // 0x36a7c8: 0x4481e000  mtc1        $at, $f28
    ctx->pc = 0x36a7c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[28], &bits, sizeof(bits)); }
    // 0x36a7cc: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x36a7ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a7d0: 0x461ccd02  mul.s       $f20, $f25, $f28
    ctx->pc = 0x36a7d0u;
    ctx->f[20] = FPU_MUL_S(ctx->f[25], ctx->f[28]);
    // 0x36a7d4: 0x0  nop
    ctx->pc = 0x36a7d4u;
    // NOP
label_36a7d8:
    // 0x36a7d8: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x36a7d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x36a7dc: 0x461cc582  mul.s       $f22, $f24, $f28
    ctx->pc = 0x36a7dcu;
    ctx->f[22] = FPU_MUL_S(ctx->f[24], ctx->f[28]);
    // 0x36a7e0: 0x4618ce40  add.s       $f25, $f25, $f24
    ctx->pc = 0x36a7e0u;
    ctx->f[25] = FPU_ADD_S(ctx->f[25], ctx->f[24]);
    // 0x36a7e4: 0xc0e3f1c  jal         func_38FC70
    ctx->pc = 0x36A7E4u;
    SET_GPR_U32(ctx, 31, 0x36A7ECu);
    ctx->pc = 0x36A7E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A7E4u;
    // 0x36a7e8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FC70u, 0x36A7E4u, 0x36A7ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A7ECu;
label_36a7ec:
    // 0x36a7ec: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x36a7ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36a7f0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x36a7f0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x36a7f4: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x36a7f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36a7f8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x36a7f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x36a7fc: 0xc0e3f98  jal         func_38FE60
    ctx->pc = 0x36A7FCu;
    SET_GPR_U32(ctx, 31, 0x36A804u);
    ctx->pc = 0x36A800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A7FCu;
    // 0x36a800: 0x460105c0  add.s       $f23, $f0, $f1 (Delay Slot)
    ctx->f[23] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FE60u, 0x36A7FCu, 0x36A804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A804u;
label_36a804:
    // 0x36a804: 0xc7a2000c  lwc1        $f2, 0xC($sp)
    ctx->pc = 0x36a804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36a808: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x36a808u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x36a80c: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x36a80cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36a810: 0x46020542  mul.s       $f21, $f0, $f2
    ctx->pc = 0x36a810u;
    ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x36a814: 0xc0e3f1c  jal         func_38FC70
    ctx->pc = 0x36A814u;
    SET_GPR_U32(ctx, 31, 0x36A81Cu);
    ctx->pc = 0x36A818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A814u;
    // 0x36a818: 0x4601ad40  add.s       $f21, $f21, $f1 (Delay Slot)
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FC70u, 0x36A814u, 0x36A81Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A81Cu;
label_36a81c:
    // 0x36a81c: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x36a81cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36a820: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x36a820u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x36a824: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x36a824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36a828: 0x46020502  mul.s       $f20, $f0, $f2
    ctx->pc = 0x36a828u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x36a82c: 0xc0e3f98  jal         func_38FE60
    ctx->pc = 0x36A82Cu;
    SET_GPR_U32(ctx, 31, 0x36A834u);
    ctx->pc = 0x36A830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A82Cu;
    // 0x36a830: 0x4601a500  add.s       $f20, $f20, $f1 (Delay Slot)
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FE60u, 0x36A82Cu, 0x36A834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A834u;
label_36a834:
    // 0x36a834: 0xc7a4000c  lwc1        $f4, 0xC($sp)
    ctx->pc = 0x36a834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x36a838: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x36a838u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x36a83c: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x36a83cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x36a840: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x36a840u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x36a844: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x36a844u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x36a848: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x36a848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36a84c: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x36a84cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36a850: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x36a850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a854: 0x4601a501  sub.s       $f20, $f20, $f1
    ctx->pc = 0x36a854u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[1]);
    // 0x36a858: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x36a858u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a85c: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x36a85cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x36a860: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x36a860u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a864: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x36a864u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a868: 0x4602a500  add.s       $f20, $f20, $f2
    ctx->pc = 0x36a868u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[2]);
    // 0x36a86c: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x36a86cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x36a870: 0x461ba502  mul.s       $f20, $f20, $f27
    ctx->pc = 0x36a870u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[27]);
    // 0x36a874: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x36a874u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x36a878: 0x461da502  mul.s       $f20, $f20, $f29
    ctx->pc = 0x36a878u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[29]);
    // 0x36a87c: 0x461a0002  mul.s       $f0, $f0, $f26
    ctx->pc = 0x36a87cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[26]);
    // 0x36a880: 0x461ea380  add.s       $f14, $f20, $f30
    ctx->pc = 0x36a880u;
    ctx->f[14] = FPU_ADD_S(ctx->f[20], ctx->f[30]);
    // 0x36a884: 0x461d0002  mul.s       $f0, $f0, $f29
    ctx->pc = 0x36a884u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[29]);
    // 0x36a888: 0xc0da62e  jal         func_3698B8
    ctx->pc = 0x36A888u;
    SET_GPR_U32(ctx, 31, 0x36A890u);
    ctx->pc = 0x36A88Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A888u;
    // 0x36a88c: 0x461e03c0  add.s       $f15, $f0, $f30 (Delay Slot)
    ctx->f[15] = FPU_ADD_S(ctx->f[0], ctx->f[30]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3698B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3698B8u, 0x36A888u, 0x36A890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A890u;
label_36a890:
    // 0x36a890: 0x5600ffd1  bnel        $s0, $zero, . + 4 + (-0x2F << 2)
    ctx->pc = 0x36A890u;
    {
        const bool branch_taken_0x36a890 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x36a890) {
            ctx->pc = 0x36A894u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x36A890u;
            // 0x36a894: 0x461ccd02  mul.s       $f20, $f25, $f28 (Delay Slot)
            ctx->f[20] = FPU_MUL_S(ctx->f[25], ctx->f[28]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x36A7D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36a7d8;
        }
    }
    ctx->pc = 0x36A898u;
    // 0x36a898: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x36A898u;
    {
        const bool branch_taken_0x36a898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36a898) {
            ctx->pc = 0x36A920u;
            goto label_36a920;
        }
    }
    ctx->pc = 0x36A8A0u;
label_36a8a0:
    // 0x36a8a0: 0x1840001f  blez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x36A8A0u;
    {
        const bool branch_taken_0x36a8a0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x36A8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A8A0u;
        // 0x36a8a4: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36a8a0) {
            ctx->pc = 0x36A920u;
            goto label_36a920;
        }
    }
    ctx->pc = 0x36A8A8u;
    // 0x36a8a8: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x36a8a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
    // 0x36a8ac: 0x3421f998  ori         $at, $at, 0xF998
    ctx->pc = 0x36a8acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)63896);
    // 0x36a8b0: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x36a8b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x36a8b4: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x36a8b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a8b8: 0x4600cd46  mov.s       $f21, $f25
    ctx->pc = 0x36a8b8u;
    ctx->f[21] = FPU_MOV_S(ctx->f[25]);
    // 0x36a8bc: 0x4616cd02  mul.s       $f20, $f25, $f22
    ctx->pc = 0x36a8bcu;
    ctx->f[20] = FPU_MUL_S(ctx->f[25], ctx->f[22]);
label_36a8c0:
    // 0x36a8c0: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x36a8c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x36a8c4: 0x4618ce40  add.s       $f25, $f25, $f24
    ctx->pc = 0x36a8c4u;
    ctx->f[25] = FPU_ADD_S(ctx->f[25], ctx->f[24]);
    // 0x36a8c8: 0xc0e3f1c  jal         func_38FC70
    ctx->pc = 0x36A8C8u;
    SET_GPR_U32(ctx, 31, 0x36A8D0u);
    ctx->pc = 0x36A8CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A8C8u;
    // 0x36a8cc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FC70u, 0x36A8C8u, 0x36A8D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A8D0u;
label_36a8d0:
    // 0x36a8d0: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x36a8d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x36a8d4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x36a8d4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x36a8d8: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x36a8d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36a8dc: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x36a8dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x36a8e0: 0xc0e3f98  jal         func_38FE60
    ctx->pc = 0x36A8E0u;
    SET_GPR_U32(ctx, 31, 0x36A8E8u);
    ctx->pc = 0x36A8E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A8E0u;
    // 0x36a8e4: 0x460105c0  add.s       $f23, $f0, $f1 (Delay Slot)
    ctx->f[23] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FE60u, 0x36A8E0u, 0x36A8E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A8E8u;
label_36a8e8:
    // 0x36a8e8: 0xc7a1000c  lwc1        $f1, 0xC($sp)
    ctx->pc = 0x36a8e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36a8ec: 0x4600ab86  mov.s       $f14, $f21
    ctx->pc = 0x36a8ecu;
    ctx->f[14] = FPU_MOV_S(ctx->f[21]);
    // 0x36a8f0: 0xc7ad0004  lwc1        $f13, 0x4($sp)
    ctx->pc = 0x36a8f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x36a8f4: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x36a8f4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x36a8f8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x36a8f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x36a8fc: 0x4600abc6  mov.s       $f15, $f21
    ctx->pc = 0x36a8fcu;
    ctx->f[15] = FPU_MOV_S(ctx->f[21]);
    // 0x36a900: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x36a900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a904: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x36a904u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a908: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x36a908u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a90c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x36a90cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a910: 0xc0da62e  jal         func_3698B8
    ctx->pc = 0x36A910u;
    SET_GPR_U32(ctx, 31, 0x36A918u);
    ctx->pc = 0x36A914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A910u;
    // 0x36a914: 0x460d0340  add.s       $f13, $f0, $f13 (Delay Slot)
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3698B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3698B8u, 0x36A910u, 0x36A918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A918u;
label_36a918:
    // 0x36a918: 0x5600ffe9  bnel        $s0, $zero, . + 4 + (-0x17 << 2)
    ctx->pc = 0x36A918u;
    {
        const bool branch_taken_0x36a918 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x36a918) {
            ctx->pc = 0x36A91Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x36A918u;
            // 0x36a91c: 0x4616cd02  mul.s       $f20, $f25, $f22 (Delay Slot)
            ctx->f[20] = FPU_MUL_S(ctx->f[25], ctx->f[22]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x36A8C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36a8c0;
        }
    }
    ctx->pc = 0x36A920u;
label_36a920:
    // 0x36a920: 0xc0da59a  jal         func_369668
    ctx->pc = 0x36A920u;
    SET_GPR_U32(ctx, 31, 0x36A928u);
    ctx->pc = 0x369668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x369668u, 0x36A920u, 0x36A928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A928u;
label_36a928:
    // 0x36a928: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x36a928u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36a92c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x36a92cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36a930: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x36a930u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36a934: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x36a934u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x36a938: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x36a938u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x36a93c: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x36a93cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36a940: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x36a940u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x36a944: 0xc7be00a0  lwc1        $f30, 0xA0($sp)
    ctx->pc = 0x36a944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[30] = f; }
    // 0x36a948: 0xc7bd0098  lwc1        $f29, 0x98($sp)
    ctx->pc = 0x36a948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
    // 0x36a94c: 0xc7bc0090  lwc1        $f28, 0x90($sp)
    ctx->pc = 0x36a94cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
    // 0x36a950: 0xc7bb0088  lwc1        $f27, 0x88($sp)
    ctx->pc = 0x36a950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x36a954: 0xc7ba0080  lwc1        $f26, 0x80($sp)
    ctx->pc = 0x36a954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x36a958: 0xc7b90078  lwc1        $f25, 0x78($sp)
    ctx->pc = 0x36a958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x36a95c: 0xc7b80070  lwc1        $f24, 0x70($sp)
    ctx->pc = 0x36a95cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x36a960: 0xc7b70068  lwc1        $f23, 0x68($sp)
    ctx->pc = 0x36a960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x36a964: 0xc7b60060  lwc1        $f22, 0x60($sp)
    ctx->pc = 0x36a964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x36a968: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x36a968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x36a96c: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x36a96cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x36a970: 0x3e00008  jr          $ra
    ctx->pc = 0x36A970u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36A974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A970u;
        // 0x36a974: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36A970u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36A978u;
}
