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

// Function: sub_002C5120
// Address: 0x2c5120 - 0x2c5220
void sub_002C5120_0x2c5120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C5120_0x2c5120");
#endif

    ctx->pc = 0x2c5120u;

    // 0x2c5120: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x2c5120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c5124: 0xc4a30004  lwc1        $f3, 0x4($a1)
    ctx->pc = 0x2c5124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c5128: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2c5128u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2c512c: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x2c512cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c5130: 0x460318c2  mul.s       $f3, $f3, $f3
    ctx->pc = 0x2c5130u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x2c5134: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x2c5134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c5138: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x2c5138u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x2c513c: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x2c513cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2c5140: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x2c5140u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x2c5144: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x2c5144u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2c5148: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2c5148u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2c514c: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2c514cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2c5150: 0x46012034  c.lt.s      $f4, $f1
    ctx->pc = 0x2c5150u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c5154: 0x0  nop
    ctx->pc = 0x2c5154u;
    // NOP
    // 0x2c5158: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x2C5158u;
    {
        const bool branch_taken_0x2c5158 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2c5158) {
            ctx->pc = 0x2C515Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C5158u;
            // 0x2c515c: 0x46002046  mov.s       $f1, $f4 (Delay Slot)
            ctx->f[1] = FPU_MOV_S(ctx->f[4]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C5178u;
            goto label_2c5178;
        }
    }
    ctx->pc = 0x2C5160u;
    // 0x2c5160: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2c5160u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x2c5164: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c5164u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c5168: 0x0  nop
    ctx->pc = 0x2c5168u;
    // NOP
    // 0x2c516c: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x2c516cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x2c5170: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2C5170u;
    {
        const bool branch_taken_0x2c5170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C5174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5170u;
        // 0x2c5174: 0xc4a50000  lwc1        $f5, 0x0($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5170) {
            ctx->pc = 0x2C517Cu;
            goto label_2c517c;
        }
    }
    ctx->pc = 0x2C5178u;
label_2c5178:
    // 0x2c5178: 0xc4a50000  lwc1        $f5, 0x0($a1)
    ctx->pc = 0x2c5178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_2c517c:
    // 0x2c517c: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x2c517cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x2c5180: 0xc4a90004  lwc1        $f9, 0x4($a1)
    ctx->pc = 0x2c5180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x2c5184: 0x24830020  addiu       $v1, $a0, 0x20
    ctx->pc = 0x2c5184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x2c5188: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x2c5188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c518c: 0x460129c2  mul.s       $f7, $f5, $f1
    ctx->pc = 0x2c518cu;
    ctx->f[7] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x2c5190: 0x46014802  mul.s       $f0, $f9, $f1
    ctx->pc = 0x2c5190u;
    ctx->f[0] = FPU_MUL_S(ctx->f[9], ctx->f[1]);
    // 0x2c5194: 0xc4a6000c  lwc1        $f6, 0xC($a1)
    ctx->pc = 0x2c5194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2c5198: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x2c5198u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2c519c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c519cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2c51a0: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2c51a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2c51a4: 0x46053ac2  mul.s       $f11, $f7, $f5
    ctx->pc = 0x2c51a4u;
    ctx->f[11] = FPU_MUL_S(ctx->f[7], ctx->f[5]);
    // 0x2c51a8: 0x46090342  mul.s       $f13, $f0, $f9
    ctx->pc = 0x2c51a8u;
    ctx->f[13] = FPU_MUL_S(ctx->f[0], ctx->f[9]);
    // 0x2c51ac: 0x46060302  mul.s       $f12, $f0, $f6
    ctx->pc = 0x2c51acu;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x2c51b0: 0x46060a82  mul.s       $f10, $f1, $f6
    ctx->pc = 0x2c51b0u;
    ctx->f[10] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x2c51b4: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x2c51b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x2c51b8: 0x46050a02  mul.s       $f8, $f1, $f5
    ctx->pc = 0x2c51b8u;
    ctx->f[8] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x2c51bc: 0x46020882  mul.s       $f2, $f1, $f2
    ctx->pc = 0x2c51bcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2c51c0: 0x460a0140  add.s       $f5, $f0, $f10
    ctx->pc = 0x2c51c0u;
    ctx->f[5] = FPU_ADD_S(ctx->f[0], ctx->f[10]);
    // 0x2c51c4: 0x460d1901  sub.s       $f4, $f3, $f13
    ctx->pc = 0x2c51c4u;
    ctx->f[4] = FPU_SUB_S(ctx->f[3], ctx->f[13]);
    // 0x2c51c8: 0x460639c2  mul.s       $f7, $f7, $f6
    ctx->pc = 0x2c51c8u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[6]);
    // 0x2c51cc: 0x460b18c1  sub.s       $f3, $f3, $f11
    ctx->pc = 0x2c51ccu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[11]);
    // 0x2c51d0: 0xe4850010  swc1        $f5, 0x10($a0)
    ctx->pc = 0x2c51d0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x2c51d4: 0x46090842  mul.s       $f1, $f1, $f9
    ctx->pc = 0x2c51d4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[9]);
    // 0x2c51d8: 0x46022101  sub.s       $f4, $f4, $f2
    ctx->pc = 0x2c51d8u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[2]);
    // 0x2c51dc: 0x460c4180  add.s       $f6, $f8, $f12
    ctx->pc = 0x2c51dcu;
    ctx->f[6] = FPU_ADD_S(ctx->f[8], ctx->f[12]);
    // 0x2c51e0: 0x460a0001  sub.s       $f0, $f0, $f10
    ctx->pc = 0x2c51e0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[10]);
    // 0x2c51e4: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x2c51e4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x2c51e8: 0xe4840000  swc1        $f4, 0x0($a0)
    ctx->pc = 0x2c51e8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x2c51ec: 0x46070941  sub.s       $f5, $f1, $f7
    ctx->pc = 0x2c51ecu;
    ctx->f[5] = FPU_SUB_S(ctx->f[1], ctx->f[7]);
    // 0x2c51f0: 0xe4860008  swc1        $f6, 0x8($a0)
    ctx->pc = 0x2c51f0u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x2c51f4: 0x460c4201  sub.s       $f8, $f8, $f12
    ctx->pc = 0x2c51f4u;
    ctx->f[8] = FPU_SUB_S(ctx->f[8], ctx->f[12]);
    // 0x2c51f8: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x2c51f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x2c51fc: 0x46070840  add.s       $f1, $f1, $f7
    ctx->pc = 0x2c51fcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[7]);
    // 0x2c5200: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x2c5200u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2c5204: 0x460d18c1  sub.s       $f3, $f3, $f13
    ctx->pc = 0x2c5204u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[13]);
    // 0x2c5208: 0xe4450008  swc1        $f5, 0x8($v0)
    ctx->pc = 0x2c5208u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2c520c: 0xe4880020  swc1        $f8, 0x20($a0)
    ctx->pc = 0x2c520cu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x2c5210: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x2c5210u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2c5214: 0x3e00008  jr          $ra
    ctx->pc = 0x2C5214u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C5218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5214u;
        // 0x2c5218: 0xe4630008  swc1        $f3, 0x8($v1) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C5214u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C521Cu;
    // 0x2c521c: 0x0  nop
    ctx->pc = 0x2c521cu;
    // NOP
    ctx->pc = 0x2c5220u;
}
