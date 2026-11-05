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

// Function: sub_0020B638
// Address: 0x20b638 - 0x20b898
void sub_0020B638_0x20b638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020B638_0x20b638");
#endif

    switch (ctx->pc) {
        case 0x20b6a8u: goto label_20b6a8;
        case 0x20b748u: goto label_20b748;
        case 0x20b7acu: goto label_20b7ac;
        case 0x20b854u: goto label_20b854;
        case 0x20b864u: goto label_20b864;
        default: break;
    }

    ctx->pc = 0x20b638u;

    // 0x20b638: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x20b638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x20b63c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x20b63cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x20b640: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x20b640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x20b644: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x20b644u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b648: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x20b648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x20b64c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x20b64cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b650: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x20b650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x20b654: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x20b654u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b658: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x20b658u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x20b65c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x20b65cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b660: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x20b660u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x20b664: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x20b664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x20b668: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x20b668u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x20b66c: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x20b66cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20b670: 0x46140832  c.eq.s      $f1, $f20
    ctx->pc = 0x20b670u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20b674: 0x0  nop
    ctx->pc = 0x20b674u;
    // NOP
    // 0x20b678: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x20B678u;
    {
        const bool branch_taken_0x20b678 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x20B67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B678u;
        // 0x20b67c: 0x46006546  mov.s       $f21, $f12 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b678) {
            ctx->pc = 0x20B694u;
            goto label_20b694;
        }
    }
    ctx->pc = 0x20B680u;
    // 0x20b680: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x20b680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20b684: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x20b684u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20b688: 0x0  nop
    ctx->pc = 0x20b688u;
    // NOP
    // 0x20b68c: 0x45010078  bc1t        . + 4 + (0x78 << 2)
    ctx->pc = 0x20B68Cu;
    {
        const bool branch_taken_0x20b68c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x20B690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B68Cu;
        // 0x20b690: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b68c) {
            ctx->pc = 0x20B870u;
            goto label_20b870;
        }
    }
    ctx->pc = 0x20B694u;
label_20b694:
    // 0x20b694: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x20b694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20b698: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x20b698u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b69c: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x20b69cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x20b6a0: 0xc0f735c  jal         func_3DCD70
    ctx->pc = 0x20B6A0u;
    SET_GPR_U32(ctx, 31, 0x20B6A8u);
    ctx->pc = 0x20B6A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B6A0u;
    // 0x20b6a4: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DCD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DCD70u, 0x20B6A0u, 0x20B6A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B6A8u;
label_20b6a8:
    // 0x20b6a8: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x20b6a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x20b6ac: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x20b6acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20b6b0: 0x0  nop
    ctx->pc = 0x20b6b0u;
    // NOP
    // 0x20b6b4: 0x0  nop
    ctx->pc = 0x20b6b4u;
    // NOP
    // 0x20b6b8: 0x46001083  div.s       $f2, $f2, $f0
    ctx->pc = 0x20b6b8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x20b6bc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x20b6bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x20b6c0: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x20b6c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x20b6c4: 0x0  nop
    ctx->pc = 0x20b6c4u;
    // NOP
    // 0x20b6c8: 0x0  nop
    ctx->pc = 0x20b6c8u;
    // NOP
    // 0x20b6cc: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x20b6ccu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x20b6d0: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x20b6d0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x20b6d4: 0xe7a50014  swc1        $f5, 0x14($sp)
    ctx->pc = 0x20b6d4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x20b6d8: 0x4600a0c6  mov.s       $f3, $f20
    ctx->pc = 0x20b6d8u;
    ctx->f[3] = FPU_MOV_S(ctx->f[20]);
    // 0x20b6dc: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x20b6dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x20b6e0: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x20b6e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x20b6e4: 0x46002906  mov.s       $f4, $f5
    ctx->pc = 0x20b6e4u;
    ctx->f[4] = FPU_MOV_S(ctx->f[5]);
    // 0x20b6e8: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x20b6e8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x20b6ec: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x20b6ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x20b6f0: 0x46001006  mov.s       $f0, $f2
    ctx->pc = 0x20b6f0u;
    ctx->f[0] = FPU_MOV_S(ctx->f[2]);
    // 0x20b6f4: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x20b6f4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x20b6f8: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x20b6f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x20b6fc: 0x46000b40  add.s       $f13, $f1, $f0
    ctx->pc = 0x20b6fcu;
    ctx->f[13] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x20b700: 0x46066834  c.lt.s      $f13, $f6
    ctx->pc = 0x20b700u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[13], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20b704: 0x0  nop
    ctx->pc = 0x20b704u;
    // NOP
    // 0x20b708: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x20B708u;
    {
        const bool branch_taken_0x20b708 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20b708) {
            ctx->pc = 0x20B718u;
            goto label_20b718;
        }
    }
    ctx->pc = 0x20B710u;
    // 0x20b710: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x20B710u;
    {
        const bool branch_taken_0x20b710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B710u;
        // 0x20b714: 0x46003346  mov.s       $f13, $f6 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[6]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b710) {
            ctx->pc = 0x20B728u;
            goto label_20b728;
        }
    }
    ctx->pc = 0x20B718u;
label_20b718:
    // 0x20b718: 0x460d2834  c.lt.s      $f5, $f13
    ctx->pc = 0x20b718u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20b71c: 0x0  nop
    ctx->pc = 0x20b71cu;
    // NOP
    // 0x20b720: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x20B720u;
    {
        const bool branch_taken_0x20b720 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20b720) {
            ctx->pc = 0x20B724u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20B720u;
            // 0x20b724: 0x46002b46  mov.s       $f13, $f5 (Delay Slot)
            ctx->f[13] = FPU_MOV_S(ctx->f[5]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x20B728u;
            goto label_20b728;
        }
    }
    ctx->pc = 0x20B728u;
label_20b728:
    // 0x20b728: 0x460d6802  mul.s       $f0, $f13, $f13
    ctx->pc = 0x20b728u;
    ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[13]);
    // 0x20b72c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x20b72cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x20b730: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x20b730u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x20b734: 0x0  nop
    ctx->pc = 0x20b734u;
    // NOP
    // 0x20b738: 0x46006301  sub.s       $f12, $f12, $f0
    ctx->pc = 0x20b738u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x20b73c: 0x460c0304  c1          0xC0304
    ctx->pc = 0x20b73cu;
    ctx->f[12] = FPU_SQRT_S(ctx->f[0]);
    // 0x20b740: 0xc0e404c  jal         func_390130
    ctx->pc = 0x20B740u;
    SET_GPR_U32(ctx, 31, 0x20B748u);
    ctx->pc = 0x390130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390130u, 0x20B740u, 0x20B748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B748u;
label_20b748:
    // 0x20b748: 0x3c014265  lui         $at, 0x4265
    ctx->pc = 0x20b748u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16997 << 16));
    // 0x20b74c: 0x34212ee0  ori         $at, $at, 0x2EE0
    ctx->pc = 0x20b74cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12000);
    // 0x20b750: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x20b750u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x20b754: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x20b754u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x20b758: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x20b758u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x20b75c: 0xe6210000  swc1        $f1, 0x0($s1)
    ctx->pc = 0x20b75cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x20b760: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x20b760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20b764: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x20b764u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20b768: 0x0  nop
    ctx->pc = 0x20b768u;
    // NOP
    // 0x20b76c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x20B76Cu;
    {
        const bool branch_taken_0x20b76c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20b76c) {
            ctx->pc = 0x20B788u;
            goto label_20b788;
        }
    }
    ctx->pc = 0x20B774u;
    // 0x20b774: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x20b774u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x20b778: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x20b778u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20b77c: 0x0  nop
    ctx->pc = 0x20b77cu;
    // NOP
    // 0x20b780: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x20b780u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x20b784: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x20b784u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_20b788:
    // 0x20b788: 0x4492a000  mtc1        $s2, $f20
    ctx->pc = 0x20b788u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x20b78c: 0x0  nop
    ctx->pc = 0x20b78cu;
    // NOP
    // 0x20b790: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x20b790u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x20b794: 0xc62c0000  lwc1        $f12, 0x0($s1)
    ctx->pc = 0x20b794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x20b798: 0x0  nop
    ctx->pc = 0x20b798u;
    // NOP
    // 0x20b79c: 0x0  nop
    ctx->pc = 0x20b79cu;
    // NOP
    // 0x20b7a0: 0x46146303  div.s       $f12, $f12, $f20
    ctx->pc = 0x20b7a0u;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[12], ctx->f[20]); }
    // 0x20b7a4: 0xc0e3f5e  jal         func_38FD78
    ctx->pc = 0x20B7A4u;
    SET_GPR_U32(ctx, 31, 0x20B7ACu);
    ctx->pc = 0x38FD78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FD78u, 0x20B7A4u, 0x20B7ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B7ACu;
label_20b7ac:
    // 0x20b7ac: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x20b7acu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x20b7b0: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x20b7b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x20b7b4: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x20b7b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20b7b8: 0x522018  mult        $a0, $v0, $s2
    ctx->pc = 0x20b7b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x20b7bc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x20b7bcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20b7c0: 0x0  nop
    ctx->pc = 0x20b7c0u;
    // NOP
    // 0x20b7c4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x20b7c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x20b7c8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x20b7c8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x20b7cc: 0x46150836  c.le.s      $f1, $f21
    ctx->pc = 0x20b7ccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20b7d0: 0x0  nop
    ctx->pc = 0x20b7d0u;
    // NOP
    // 0x20b7d4: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x20B7D4u;
    {
        const bool branch_taken_0x20b7d4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20b7d4) {
            ctx->pc = 0x20B7D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20B7D4u;
            // 0x20b7d8: 0x4615a001  sub.s       $f0, $f20, $f21 (Delay Slot)
            ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[21]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x20B7E4u;
            goto label_20b7e4;
        }
    }
    ctx->pc = 0x20B7DCu;
    // 0x20b7dc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x20B7DCu;
    {
        const bool branch_taken_0x20b7dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B7DCu;
        // 0x20b7e0: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b7dc) {
            ctx->pc = 0x20B808u;
            goto label_20b808;
        }
    }
    ctx->pc = 0x20B7E4u;
label_20b7e4:
    // 0x20b7e4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x20b7e4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20b7e8: 0x0  nop
    ctx->pc = 0x20b7e8u;
    // NOP
    // 0x20b7ec: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x20B7ECu;
    {
        const bool branch_taken_0x20b7ec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20b7ec) {
            ctx->pc = 0x20B808u;
            goto label_20b808;
        }
    }
    ctx->pc = 0x20B7F4u;
    // 0x20b7f4: 0x922021  addu        $a0, $a0, $s2
    ctx->pc = 0x20b7f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x20b7f8: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x20b7f8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20b7fc: 0x28830168  slti        $v1, $a0, 0x168
    ctx->pc = 0x20b7fcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)360) ? 1 : 0);
    // 0x20b800: 0x2482fe98  addiu       $v0, $a0, -0x168
    ctx->pc = 0x20b800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966936));
    // 0x20b804: 0x43200a  movz        $a0, $v0, $v1
    ctx->pc = 0x20b804u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
label_20b808:
    // 0x20b808: 0x12600019  beqz        $s3, . + 4 + (0x19 << 2)
    ctx->pc = 0x20B808u;
    {
        const bool branch_taken_0x20b808 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B808u;
        // 0x20b80c: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b808) {
            ctx->pc = 0x20B870u;
            goto label_20b870;
        }
    }
    ctx->pc = 0x20B810u;
    // 0x20b810: 0xc6140000  lwc1        $f20, 0x0($s0)
    ctx->pc = 0x20b810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x20b814: 0x4484a800  mtc1        $a0, $f21
    ctx->pc = 0x20b814u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x20b818: 0x0  nop
    ctx->pc = 0x20b818u;
    // NOP
    // 0x20b81c: 0x4680ad60  cvt.s.w     $f21, $f21
    ctx->pc = 0x20b81cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[21], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
    // 0x20b820: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x20b820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20b824: 0x4614a502  mul.s       $f20, $f20, $f20
    ctx->pc = 0x20b824u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x20b828: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x20b828u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
    // 0x20b82c: 0x3421fa36  ori         $at, $at, 0xFA36
    ctx->pc = 0x20b82cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64054);
    // 0x20b830: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x20b830u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x20b834: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x20b834u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x20b838: 0x4601ad42  mul.s       $f21, $f21, $f1
    ctx->pc = 0x20b838u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
    // 0x20b83c: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x20b83cu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x20b840: 0x0  nop
    ctx->pc = 0x20b840u;
    // NOP
    // 0x20b844: 0x0  nop
    ctx->pc = 0x20b844u;
    // NOP
    // 0x20b848: 0x46140504  c1          0x140504
    ctx->pc = 0x20b848u;
    ctx->f[20] = FPU_SQRT_S(ctx->f[0]);
    // 0x20b84c: 0xc0e3f98  jal         func_38FE60
    ctx->pc = 0x20B84Cu;
    SET_GPR_U32(ctx, 31, 0x20B854u);
    ctx->pc = 0x20B850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B84Cu;
    // 0x20b850: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FE60u, 0x20B84Cu, 0x20B854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B854u;
label_20b854:
    // 0x20b854: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x20b854u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x20b858: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x20b858u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x20b85c: 0xc0e3f1c  jal         func_38FC70
    ctx->pc = 0x20B85Cu;
    SET_GPR_U32(ctx, 31, 0x20B864u);
    ctx->pc = 0x20B860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B85Cu;
    // 0x20b860: 0xe6000000  swc1        $f0, 0x0($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FC70u, 0x20B85Cu, 0x20B864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B864u;
label_20b864:
    // 0x20b864: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x20b864u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x20b868: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x20b868u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x20b86c: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x20b86cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_20b870:
    // 0x20b870: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x20b870u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20b874: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x20b874u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x20b878: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x20b878u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20b87c: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x20b87cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20b880: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x20b880u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20b884: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x20b884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x20b888: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x20b888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x20b88c: 0x3e00008  jr          $ra
    ctx->pc = 0x20B88Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20B890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B88Cu;
        // 0x20b890: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20B88Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20B894u;
    // 0x20b894: 0x0  nop
    ctx->pc = 0x20b894u;
    // NOP
    ctx->pc = 0x20b898u;
}
