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

// Function: sub_002C6788
// Address: 0x2c6788 - 0x2c6898
void sub_002C6788_0x2c6788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C6788_0x2c6788");
#endif

    switch (ctx->pc) {
        case 0x2c6870u: goto label_2c6870;
        default: break;
    }

    ctx->pc = 0x2c6788u;

    // 0x2c6788: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c6788u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2c678c: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x2c678cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c6790: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2c6790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c6794: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2c6794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2c6798: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x2c6798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c679c: 0xc4a30004  lwc1        $f3, 0x4($a1)
    ctx->pc = 0x2c679cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c67a0: 0xc4840004  lwc1        $f4, 0x4($a0)
    ctx->pc = 0x2c67a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2c67a4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2c67a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2c67a8: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x2c67a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c67ac: 0x46032102  mul.s       $f4, $f4, $f3
    ctx->pc = 0x2c67acu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x2c67b0: 0xc4850008  lwc1        $f5, 0x8($a0)
    ctx->pc = 0x2c67b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2c67b4: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x2c67b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c67b8: 0x46022942  mul.s       $f5, $f5, $f2
    ctx->pc = 0x2c67b8u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x2c67bc: 0xc4a3000c  lwc1        $f3, 0xC($a1)
    ctx->pc = 0x2c67bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c67c0: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x2c67c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x2c67c4: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x2c67c4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x2c67c8: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x2c67c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2c67cc: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x2c67ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x2c67d0: 0x46010340  add.s       $f13, $f0, $f1
    ctx->pc = 0x2c67d0u;
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c67d4: 0x46026834  c.lt.s      $f13, $f2
    ctx->pc = 0x2c67d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[13], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c67d8: 0x0  nop
    ctx->pc = 0x2c67d8u;
    // NOP
    // 0x2c67dc: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2C67DCu;
    {
        const bool branch_taken_0x2c67dc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C67E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C67DCu;
        // 0x2c67e0: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c67dc) {
            ctx->pc = 0x2C67F4u;
            goto label_2c67f4;
        }
    }
    ctx->pc = 0x2C67E4u;
    // 0x2c67e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c67e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c67e8: 0x46006b47  neg.s       $f13, $f13
    ctx->pc = 0x2c67e8u;
    ctx->f[13] = FPU_NEG_S(ctx->f[13]);
    // 0x2c67ec: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2C67ECu;
    {
        const bool branch_taken_0x2c67ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C67F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C67ECu;
        // 0x2c67f0: 0xa2020008  sb          $v0, 0x8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c67ec) {
            ctx->pc = 0x2C67F8u;
            goto label_2c67f8;
        }
    }
    ctx->pc = 0x2C67F4u;
label_2c67f4:
    // 0x2c67f4: 0xa2000008  sb          $zero, 0x8($s0)
    ctx->pc = 0x2c67f4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 0));
label_2c67f8:
    // 0x2c67f8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c67f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2c67fc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2c67fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c6800: 0x0  nop
    ctx->pc = 0x2c6800u;
    // NOP
    // 0x2c6804: 0x460d0836  c.le.s      $f1, $f13
    ctx->pc = 0x2c6804u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c6808: 0x0  nop
    ctx->pc = 0x2c6808u;
    // NOP
    // 0x2c680c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2C680Cu;
    {
        const bool branch_taken_0x2c680c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c680c) {
            ctx->pc = 0x2C6810u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C680Cu;
            // 0x2c6810: 0x46000b46  mov.s       $f13, $f1 (Delay Slot)
            ctx->f[13] = FPU_MOV_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C6814u;
            goto label_2c6814;
        }
    }
    ctx->pc = 0x2C6814u;
label_2c6814:
    // 0x2c6814: 0x46016834  c.lt.s      $f13, $f1
    ctx->pc = 0x2c6814u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[13], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c6818: 0x0  nop
    ctx->pc = 0x2c6818u;
    // NOP
    // 0x2c681c: 0x45020018  bc1fl       . + 4 + (0x18 << 2)
    ctx->pc = 0x2C681Cu;
    {
        const bool branch_taken_0x2c681c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c681c) {
            ctx->pc = 0x2C6820u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C681Cu;
            // 0x2c6820: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C6880u;
            goto label_2c6880;
        }
    }
    ctx->pc = 0x2C6824u;
    // 0x2c6824: 0x460d6802  mul.s       $f0, $f13, $f13
    ctx->pc = 0x2c6824u;
    ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[13]);
    // 0x2c6828: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x2c6828u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2c682c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2c682cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2c6830: 0x0  nop
    ctx->pc = 0x2c6830u;
    // NOP
    // 0x2c6834: 0x0  nop
    ctx->pc = 0x2c6834u;
    // NOP
    // 0x2c6838: 0x46000304  c1          0x304
    ctx->pc = 0x2c6838u;
    ctx->f[12] = FPU_SQRT_S(ctx->f[0]);
    // 0x2c683c: 0x0  nop
    ctx->pc = 0x2c683cu;
    // NOP
    // 0x2c6840: 0x0  nop
    ctx->pc = 0x2c6840u;
    // NOP
    // 0x2c6844: 0x460c0843  div.s       $f1, $f1, $f12
    ctx->pc = 0x2c6844u;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[12]); }
    // 0x2c6848: 0x46026032  c.eq.s      $f12, $f2
    ctx->pc = 0x2c6848u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c684c: 0x0  nop
    ctx->pc = 0x2c684cu;
    // NOP
    // 0x2c6850: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2C6850u;
    {
        const bool branch_taken_0x2c6850 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C6854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6850u;
        // 0x2c6854: 0xe6010004  swc1        $f1, 0x4($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6850) {
            ctx->pc = 0x2C6868u;
            goto label_2c6868;
        }
    }
    ctx->pc = 0x2C6858u;
    // 0x2c6858: 0x46026832  c.eq.s      $f13, $f2
    ctx->pc = 0x2c6858u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[13], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c685c: 0x0  nop
    ctx->pc = 0x2c685cu;
    // NOP
    // 0x2c6860: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2C6860u;
    {
        const bool branch_taken_0x2c6860 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C6864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6860u;
        // 0x2c6864: 0x46001006  mov.s       $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6860) {
            ctx->pc = 0x2C6878u;
            goto label_2c6878;
        }
    }
    ctx->pc = 0x2C6868u;
label_2c6868:
    // 0x2c6868: 0xc0e404c  jal         func_390130
    ctx->pc = 0x2C6868u;
    SET_GPR_U32(ctx, 31, 0x2C6870u);
    ctx->pc = 0x390130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390130u, 0x2C6868u, 0x2C6870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6870u;
label_2c6870:
    // 0x2c6870: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2C6870u;
    {
        const bool branch_taken_0x2c6870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6870u;
        // 0x2c6874: 0xe6000000  swc1        $f0, 0x0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6870) {
            ctx->pc = 0x2C6884u;
            goto label_2c6884;
        }
    }
    ctx->pc = 0x2C6878u;
label_2c6878:
    // 0x2c6878: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2C6878u;
    {
        const bool branch_taken_0x2c6878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C687Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6878u;
        // 0x2c687c: 0xe6000000  swc1        $f0, 0x0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6878) {
            ctx->pc = 0x2C6884u;
            goto label_2c6884;
        }
    }
    ctx->pc = 0x2C6880u;
label_2c6880:
    // 0x2c6880: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2c6880u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_2c6884:
    // 0x2c6884: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c6884u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c6888: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2c6888u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c688c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C688Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C6890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C688Cu;
        // 0x2c6890: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C688Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C6894u;
    // 0x2c6894: 0x0  nop
    ctx->pc = 0x2c6894u;
    // NOP
    ctx->pc = 0x2c6898u;
}
