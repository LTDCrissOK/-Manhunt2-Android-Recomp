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

// Function: sub_003440A8
// Address: 0x3440a8 - 0x3443a8
void sub_003440A8_0x3440a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003440A8_0x3440a8");
#endif

    switch (ctx->pc) {
        case 0x344210u: goto label_344210;
        case 0x344328u: goto label_344328;
        default: break;
    }

    ctx->pc = 0x3440a8u;

    // 0x3440a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3440a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3440ac: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x3440acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x3440b0: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x3440b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3440b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3440b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3440b8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3440b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3440bc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3440bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3440c0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3440c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3440c4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3440c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3440c8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3440c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x3440cc: 0xe7b50028  swc1        $f21, 0x28($sp)
    ctx->pc = 0x3440ccu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x3440d0: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x3440d0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x3440d4: 0x8e030064  lw          $v1, 0x64($s0)
    ctx->pc = 0x3440d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x3440d8: 0xc4610038  lwc1        $f1, 0x38($v1)
    ctx->pc = 0x3440d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3440dc: 0xc4600030  lwc1        $f0, 0x30($v1)
    ctx->pc = 0x3440dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3440e0: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x3440e0u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x3440e4: 0xe4600040  swc1        $f0, 0x40($v1)
    ctx->pc = 0x3440e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 64), bits); }
    // 0x3440e8: 0x8e020064  lw          $v0, 0x64($s0)
    ctx->pc = 0x3440e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x3440ec: 0xc4410038  lwc1        $f1, 0x38($v0)
    ctx->pc = 0x3440ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3440f0: 0xc4400034  lwc1        $f0, 0x34($v0)
    ctx->pc = 0x3440f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3440f4: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x3440f4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x3440f8: 0xe4400044  swc1        $f0, 0x44($v0)
    ctx->pc = 0x3440f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 68), bits); }
    // 0x3440fc: 0x8e030064  lw          $v1, 0x64($s0)
    ctx->pc = 0x3440fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x344100: 0xc6140048  lwc1        $f20, 0x48($s0)
    ctx->pc = 0x344100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x344104: 0xc4600068  lwc1        $f0, 0x68($v1)
    ctx->pc = 0x344104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x344108: 0xc607004c  lwc1        $f7, 0x4C($s0)
    ctx->pc = 0x344108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x34410c: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x34410cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x344110: 0xc6020050  lwc1        $f2, 0x50($s0)
    ctx->pc = 0x344110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x344114: 0xc6010054  lwc1        $f1, 0x54($s0)
    ctx->pc = 0x344114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x344118: 0xc6040058  lwc1        $f4, 0x58($s0)
    ctx->pc = 0x344118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x34411c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x34411Cu;
    {
        const bool branch_taken_0x34411c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x344120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34411Cu;
        // 0x344120: 0xc605005c  lwc1        $f5, 0x5C($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34411c) {
            ctx->pc = 0x344128u;
            goto label_344128;
        }
    }
    ctx->pc = 0x344124u;
    // 0x344124: 0x46001806  mov.s       $f0, $f3
    ctx->pc = 0x344124u;
    ctx->f[0] = FPU_MOV_S(ctx->f[3]);
label_344128:
    // 0x344128: 0x0  nop
    ctx->pc = 0x344128u;
    // NOP
    // 0x34412c: 0x0  nop
    ctx->pc = 0x34412cu;
    // NOP
    // 0x344130: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x344130u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x344134: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x344134u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x344138: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x344138u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x34413c: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x34413cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x344140: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x344140u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344144: 0xe4600060  swc1        $f0, 0x60($v1)
    ctx->pc = 0x344144u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 96), bits); }
    // 0x344148: 0xc4412cb0  lwc1        $f1, 0x2CB0($v0)
    ctx->pc = 0x344148u;
    { uint32_t bits = FAST_READ32(0x482CB0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34414c: 0x8e030064  lw          $v1, 0x64($s0)
    ctx->pc = 0x34414cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x344150: 0x46060840  add.s       $f1, $f1, $f6
    ctx->pc = 0x344150u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
    // 0x344154: 0xc4600060  lwc1        $f0, 0x60($v1)
    ctx->pc = 0x344154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x344158: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x344158u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x34415c: 0xe4600060  swc1        $f0, 0x60($v1)
    ctx->pc = 0x34415cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 96), bits); }
    // 0x344160: 0x8e020064  lw          $v0, 0x64($s0)
    ctx->pc = 0x344160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x344164: 0xc4400060  lwc1        $f0, 0x60($v0)
    ctx->pc = 0x344164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x344168: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x344168u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34416c: 0x0  nop
    ctx->pc = 0x34416cu;
    // NOP
    // 0x344170: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x344170u;
    {
        const bool branch_taken_0x344170 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x344170) {
            ctx->pc = 0x344174u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x344170u;
            // 0x344174: 0xe4420060  swc1        $f2, 0x60($v0) (Delay Slot)
            { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 96), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x344178u;
            goto label_344178;
        }
    }
    ctx->pc = 0x344178u;
label_344178:
    // 0x344178: 0x8e020064  lw          $v0, 0x64($s0)
    ctx->pc = 0x344178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x34417c: 0xc4400068  lwc1        $f0, 0x68($v0)
    ctx->pc = 0x34417cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x344180: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x344180u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x344184: 0x0  nop
    ctx->pc = 0x344184u;
    // NOP
    // 0x344188: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x344188u;
    {
        const bool branch_taken_0x344188 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x344188) {
            ctx->pc = 0x34418Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x344188u;
            // 0x34418c: 0x46001806  mov.s       $f0, $f3 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[3]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x344190u;
            goto label_344190;
        }
    }
    ctx->pc = 0x344190u;
label_344190:
    // 0x344190: 0x0  nop
    ctx->pc = 0x344190u;
    // NOP
    // 0x344194: 0x0  nop
    ctx->pc = 0x344194u;
    // NOP
    // 0x344198: 0x46002803  div.s       $f0, $f5, $f0
    ctx->pc = 0x344198u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[5], ctx->f[0]); }
    // 0x34419c: 0xe4400064  swc1        $f0, 0x64($v0)
    ctx->pc = 0x34419cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 100), bits); }
    // 0x3441a0: 0xc6212cb0  lwc1        $f1, 0x2CB0($s1)
    ctx->pc = 0x3441a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 11440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3441a4: 0x8e020064  lw          $v0, 0x64($s0)
    ctx->pc = 0x3441a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x3441a8: 0x46060840  add.s       $f1, $f1, $f6
    ctx->pc = 0x3441a8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
    // 0x3441ac: 0xc4400064  lwc1        $f0, 0x64($v0)
    ctx->pc = 0x3441acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3441b0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3441b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3441b4: 0xe4400064  swc1        $f0, 0x64($v0)
    ctx->pc = 0x3441b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 100), bits); }
    // 0x3441b8: 0x8e020064  lw          $v0, 0x64($s0)
    ctx->pc = 0x3441b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x3441bc: 0xc4400064  lwc1        $f0, 0x64($v0)
    ctx->pc = 0x3441bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3441c0: 0x46040034  c.lt.s      $f0, $f4
    ctx->pc = 0x3441c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3441c4: 0x0  nop
    ctx->pc = 0x3441c4u;
    // NOP
    // 0x3441c8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x3441C8u;
    {
        const bool branch_taken_0x3441c8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3441c8) {
            ctx->pc = 0x3441CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3441C8u;
            // 0x3441cc: 0xe4440064  swc1        $f4, 0x64($v0) (Delay Slot)
            { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 100), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3441D0u;
            goto label_3441d0;
        }
    }
    ctx->pc = 0x3441D0u;
label_3441d0:
    // 0x3441d0: 0x8e020064  lw          $v0, 0x64($s0)
    ctx->pc = 0x3441d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x3441d4: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x3441d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x3441d8: 0xc6010044  lwc1        $f1, 0x44($s0)
    ctx->pc = 0x3441d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3441dc: 0xc4400068  lwc1        $f0, 0x68($v0)
    ctx->pc = 0x3441dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3441e0: 0x46003802  mul.s       $f0, $f7, $f0
    ctx->pc = 0x3441e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x3441e4: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x3441e4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x3441e8: 0xe4400050  swc1        $f0, 0x50($v0)
    ctx->pc = 0x3441e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 80), bits); }
    // 0x3441ec: 0x8e030064  lw          $v1, 0x64($s0)
    ctx->pc = 0x3441ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x3441f0: 0xc4600050  lwc1        $f0, 0x50($v1)
    ctx->pc = 0x3441f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3441f4: 0x46003801  sub.s       $f0, $f7, $f0
    ctx->pc = 0x3441f4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[7], ctx->f[0]);
    // 0x3441f8: 0xe4600050  swc1        $f0, 0x50($v1)
    ctx->pc = 0x3441f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 80), bits); }
    // 0x3441fc: 0x8c82bd5c  lw          $v0, -0x42A4($a0)
    ctx->pc = 0x3441fcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FBD5Cu));
    // 0x344200: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x344200u;
    {
        const bool branch_taken_0x344200 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x344204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344200u;
        // 0x344204: 0xc6212cb0  lwc1        $f1, 0x2CB0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 11440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x344200) {
            ctx->pc = 0x34427Cu;
            goto label_34427c;
        }
    }
    ctx->pc = 0x344208u;
    // 0x344208: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x344208u;
    SET_GPR_U32(ctx, 31, 0x344210u);
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x344208u, 0x344210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344210u;
label_344210:
    // 0x344210: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x344210u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x344214: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x344214u;
    {
        const bool branch_taken_0x344214 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x344218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344214u;
        // 0x344218: 0x8e040064  lw          $a0, 0x64($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344214) {
            ctx->pc = 0x344230u;
            goto label_344230;
        }
    }
    ctx->pc = 0x34421Cu;
    // 0x34421c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x34421cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x344220: 0x0  nop
    ctx->pc = 0x344220u;
    // NOP
    // 0x344224: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x344224u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x344228: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x344228u;
    {
        const bool branch_taken_0x344228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x344228) {
            ctx->pc = 0x34424Cu;
            goto label_34424c;
        }
    }
    ctx->pc = 0x344230u;
label_344230:
    // 0x344230: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x344230u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x344234: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x344234u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x344238: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x344238u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x34423c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x34423cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x344240: 0x0  nop
    ctx->pc = 0x344240u;
    // NOP
    // 0x344244: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x344244u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x344248: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x344248u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_34424c:
    // 0x34424c: 0x3c013a19  lui         $at, 0x3A19
    ctx->pc = 0x34424cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14873 << 16));
    // 0x344250: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x344250u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x344254: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x344254u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x344258: 0x3c013f59  lui         $at, 0x3F59
    ctx->pc = 0x344258u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16217 << 16));
    // 0x34425c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x34425cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x344260: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x344260u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x344264: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x344264u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x344268: 0xc4810050  lwc1        $f1, 0x50($a0)
    ctx->pc = 0x344268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34426c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x34426cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x344270: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x344270u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x344274: 0xe4810050  swc1        $f1, 0x50($a0)
    ctx->pc = 0x344274u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 80), bits); }
    // 0x344278: 0xc6212cb0  lwc1        $f1, 0x2CB0($s1)
    ctx->pc = 0x344278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 11440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_34427c:
    // 0x34427c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x34427cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x344280: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x344280u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x344284: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x344284u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x344288: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x344288u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x34428c: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x34428cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x344290: 0x8e020064  lw          $v0, 0x64($s0)
    ctx->pc = 0x344290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x344294: 0xc4400050  lwc1        $f0, 0x50($v0)
    ctx->pc = 0x344294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x344298: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x344298u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x34429c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x34429cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3442a0: 0xe4400050  swc1        $f0, 0x50($v0)
    ctx->pc = 0x3442a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 80), bits); }
    // 0x3442a4: 0x8e020064  lw          $v0, 0x64($s0)
    ctx->pc = 0x3442a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x3442a8: 0xc4400050  lwc1        $f0, 0x50($v0)
    ctx->pc = 0x3442a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3442ac: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x3442acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3442b0: 0x0  nop
    ctx->pc = 0x3442b0u;
    // NOP
    // 0x3442b4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x3442B4u;
    {
        const bool branch_taken_0x3442b4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3442b4) {
            ctx->pc = 0x3442B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3442B4u;
            // 0x3442b8: 0xe4540050  swc1        $f20, 0x50($v0) (Delay Slot)
            { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 80), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3442BCu;
            goto label_3442bc;
        }
    }
    ctx->pc = 0x3442BCu;
label_3442bc:
    // 0x3442bc: 0x8e030064  lw          $v1, 0x64($s0)
    ctx->pc = 0x3442bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x3442c0: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x3442c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x3442c4: 0xc4740060  lwc1        $f20, 0x60($v1)
    ctx->pc = 0x3442c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3442c8: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x3442c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x3442cc: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3442CCu;
    {
        const bool branch_taken_0x3442cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3442D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3442CCu;
        // 0x3442d0: 0xc4750064  lwc1        $f21, 0x64($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3442cc) {
            ctx->pc = 0x3442F4u;
            goto label_3442f4;
        }
    }
    ctx->pc = 0x3442D4u;
    // 0x3442d4: 0xac600058  sw          $zero, 0x58($v1)
    ctx->pc = 0x3442d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 88), GPR_U32(ctx, 0));
    // 0x3442d8: 0x8e020064  lw          $v0, 0x64($s0)
    ctx->pc = 0x3442d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x3442dc: 0xac40005c  sw          $zero, 0x5C($v0)
    ctx->pc = 0x3442dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 92), GPR_U32(ctx, 0));
    // 0x3442e0: 0x8e030064  lw          $v1, 0x64($s0)
    ctx->pc = 0x3442e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x3442e4: 0xe4620060  swc1        $f2, 0x60($v1)
    ctx->pc = 0x3442e4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 96), bits); }
    // 0x3442e8: 0x8e020064  lw          $v0, 0x64($s0)
    ctx->pc = 0x3442e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x3442ec: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3442ECu;
    {
        const bool branch_taken_0x3442ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3442F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3442ECu;
        // 0x3442f0: 0xe4420064  swc1        $f2, 0x64($v0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 100), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3442ec) {
            ctx->pc = 0x34431Cu;
            goto label_34431c;
        }
    }
    ctx->pc = 0x3442F4u;
label_3442f4:
    // 0x3442f4: 0x4603a042  mul.s       $f1, $f20, $f3
    ctx->pc = 0x3442f4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[3]);
    // 0x3442f8: 0xc4600040  lwc1        $f0, 0x40($v1)
    ctx->pc = 0x3442f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3442fc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x3442fcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x344300: 0xe4600058  swc1        $f0, 0x58($v1)
    ctx->pc = 0x344300u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 88), bits); }
    // 0x344304: 0x8e020064  lw          $v0, 0x64($s0)
    ctx->pc = 0x344304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x344308: 0xc4400064  lwc1        $f0, 0x64($v0)
    ctx->pc = 0x344308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34430c: 0xc4410044  lwc1        $f1, 0x44($v0)
    ctx->pc = 0x34430cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x344310: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x344310u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x344314: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x344314u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x344318: 0xe441005c  swc1        $f1, 0x5C($v0)
    ctx->pc = 0x344318u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 92), bits); }
label_34431c:
    // 0x34431c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x34431cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344320: 0xc0d0d16  jal         func_343458
    ctx->pc = 0x344320u;
    SET_GPR_U32(ctx, 31, 0x344328u);
    ctx->pc = 0x344324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344320u;
    // 0x344324: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x343458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x343458u, 0x344320u, 0x344328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344328u;
label_344328:
    // 0x344328: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x344328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x34432c: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x34432cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x344330: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x344330u;
    {
        const bool branch_taken_0x344330 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x344334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344330u;
        // 0x344334: 0xae020030  sw          $v0, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344330) {
            ctx->pc = 0x344380u;
            goto label_344380;
        }
    }
    ctx->pc = 0x344338u;
    // 0x344338: 0x8e030064  lw          $v1, 0x64($s0)
    ctx->pc = 0x344338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x34433c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x34433cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x344340: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x344340u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x344344: 0xe4740060  swc1        $f20, 0x60($v1)
    ctx->pc = 0x344344u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 96), bits); }
    // 0x344348: 0x8e020064  lw          $v0, 0x64($s0)
    ctx->pc = 0x344348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x34434c: 0xe4550064  swc1        $f21, 0x64($v0)
    ctx->pc = 0x34434cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 100), bits); }
    // 0x344350: 0x8e030064  lw          $v1, 0x64($s0)
    ctx->pc = 0x344350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x344354: 0xc4600060  lwc1        $f0, 0x60($v1)
    ctx->pc = 0x344354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x344358: 0xc4610040  lwc1        $f1, 0x40($v1)
    ctx->pc = 0x344358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34435c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x34435cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x344360: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x344360u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x344364: 0xe4610058  swc1        $f1, 0x58($v1)
    ctx->pc = 0x344364u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 88), bits); }
    // 0x344368: 0x8e020064  lw          $v0, 0x64($s0)
    ctx->pc = 0x344368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x34436c: 0xc4400064  lwc1        $f0, 0x64($v0)
    ctx->pc = 0x34436cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x344370: 0xc4410044  lwc1        $f1, 0x44($v0)
    ctx->pc = 0x344370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x344374: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x344374u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x344378: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x344378u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x34437c: 0xe441005c  swc1        $f1, 0x5C($v0)
    ctx->pc = 0x34437cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 92), bits); }
label_344380:
    // 0x344380: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x344380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x344384: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x344384u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x344388: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x344388u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x34438c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x34438cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x344390: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x344390u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x344394: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x344394u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x344398: 0xc7b50028  lwc1        $f21, 0x28($sp)
    ctx->pc = 0x344398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x34439c: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x34439cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3443a0: 0x3e00008  jr          $ra
    ctx->pc = 0x3443A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3443A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3443A0u;
        // 0x3443a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3443A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3443A8u;
}
