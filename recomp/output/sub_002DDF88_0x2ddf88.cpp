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

// Function: sub_002DDF88
// Address: 0x2ddf88 - 0x2de020
void sub_002DDF88_0x2ddf88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DDF88_0x2ddf88");
#endif

    switch (ctx->pc) {
        case 0x2de000u: goto label_2de000;
        default: break;
    }

    ctx->pc = 0x2ddf88u;

    // 0x2ddf88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ddf88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ddf8c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ddf8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ddf90: 0x8c82005c  lw          $v0, 0x5C($a0)
    ctx->pc = 0x2ddf90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
    // 0x2ddf94: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DDF94u;
    {
        const bool branch_taken_0x2ddf94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DDF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDF94u;
        // 0x2ddf98: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ddf94) {
            ctx->pc = 0x2DDFA4u;
            goto label_2ddfa4;
        }
    }
    ctx->pc = 0x2DDF9Cu;
    // 0x2ddf9c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2DDF9Cu;
    {
        const bool branch_taken_0x2ddf9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DDFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDF9Cu;
        // 0x2ddfa0: 0xc4402b30  lwc1        $f0, 0x2B30($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 11056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ddf9c) {
            ctx->pc = 0x2DDFB0u;
            goto label_2ddfb0;
        }
    }
    ctx->pc = 0x2DDFA4u;
label_2ddfa4:
    // 0x2ddfa4: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x2ddfa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
    // 0x2ddfa8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2ddfa8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2ddfac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ddfacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ddfb0:
    // 0x2ddfb0: 0x3c0141c8  lui         $at, 0x41C8
    ctx->pc = 0x2ddfb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16840 << 16));
    // 0x2ddfb4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2ddfb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ddfb8: 0x248300a0  addiu       $v1, $a0, 0xA0
    ctx->pc = 0x2ddfb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
    // 0x2ddfbc: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x2ddfbcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2ddfc0: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x2ddfc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ddfc4: 0xc4630004  lwc1        $f3, 0x4($v1)
    ctx->pc = 0x2ddfc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2ddfc8: 0xc4640008  lwc1        $f4, 0x8($v1)
    ctx->pc = 0x2ddfc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2ddfcc: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x2ddfccu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x2ddfd0: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x2ddfd0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x2ddfd4: 0x4604215c  madd.s      $f5, $f4, $f4
    ctx->pc = 0x2ddfd4u;
    ctx->f[5] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x2ddfd8: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2ddfd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2ddfdc: 0xc440b680  lwc1        $f0, -0x4980($v0)
    ctx->pc = 0x2ddfdcu;
    { uint32_t bits = FAST_READ32(0x3FB680u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ddfe0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2ddfe0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2ddfe4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2ddfe4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2ddfe8: 0x46002834  c.lt.s      $f5, $f0
    ctx->pc = 0x2ddfe8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ddfec: 0x0  nop
    ctx->pc = 0x2ddfecu;
    // NOP
    // 0x2ddff0: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x2DDFF0u;
    {
        const bool branch_taken_0x2ddff0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ddff0) {
            ctx->pc = 0x2DDFF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DDFF0u;
            // 0x2ddff4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DE010u;
            goto label_2de010;
        }
    }
    ctx->pc = 0x2DDFF8u;
    // 0x2ddff8: 0xc0b7232  jal         func_2DC8C8
    ctx->pc = 0x2DDFF8u;
    SET_GPR_U32(ctx, 31, 0x2DE000u);
    ctx->pc = 0x2DC8C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC8C8u, 0x2DDFF8u, 0x2DE000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE000u;
label_2de000:
    // 0x2de000: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2de000u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de004: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2DE004u;
    {
        const bool branch_taken_0x2de004 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DE008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE004u;
        // 0x2de008: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de004) {
            ctx->pc = 0x2DE010u;
            goto label_2de010;
        }
    }
    ctx->pc = 0x2DE00Cu;
    // 0x2de00c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2de00cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2de010:
    // 0x2de010: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2de010u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2de014: 0x3e00008  jr          $ra
    ctx->pc = 0x2DE014u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DE018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE014u;
        // 0x2de018: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DE014u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DE01Cu;
    // 0x2de01c: 0x0  nop
    ctx->pc = 0x2de01cu;
    // NOP
    ctx->pc = 0x2de020u;
}
