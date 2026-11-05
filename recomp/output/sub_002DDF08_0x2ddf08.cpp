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

// Function: sub_002DDF08
// Address: 0x2ddf08 - 0x2ddf88
void sub_002DDF08_0x2ddf08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DDF08_0x2ddf08");
#endif

    switch (ctx->pc) {
        case 0x2ddf1cu: goto label_2ddf1c;
        default: break;
    }

    ctx->pc = 0x2ddf08u;

    // 0x2ddf08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ddf08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ddf0c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2ddf0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2ddf10: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2ddf10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2ddf14: 0xc0b7212  jal         func_2DC848
    ctx->pc = 0x2DDF14u;
    SET_GPR_U32(ctx, 31, 0x2DDF1Cu);
    ctx->pc = 0x2DDF18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DDF14u;
    // 0x2ddf18: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC848u, 0x2DDF14u, 0x2DDF1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDF1Cu;
label_2ddf1c:
    // 0x2ddf1c: 0x26030090  addiu       $v1, $s0, 0x90
    ctx->pc = 0x2ddf1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x2ddf20: 0x260200a0  addiu       $v0, $s0, 0xA0
    ctx->pc = 0x2ddf20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x2ddf24: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x2ddf24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ddf28: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x2ddf28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2ddf2c: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x2ddf2cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x2ddf30: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x2ddf30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ddf34: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x2ddf34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2ddf38: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x2ddf38u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x2ddf3c: 0xc4620008  lwc1        $f2, 0x8($v1)
    ctx->pc = 0x2ddf3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2ddf40: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x2ddf40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2ddf44: 0x4603115c  madd.s      $f5, $f2, $f3
    ctx->pc = 0x2ddf44u;
    ctx->f[5] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x2ddf48: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2ddf48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2ddf4c: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x2ddf4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x2ddf50: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x2ddf50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2ddf54: 0xc483b67c  lwc1        $f3, -0x4984($a0)
    ctx->pc = 0x2ddf54u;
    { uint32_t bits = FAST_READ32(0x3FB67Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2ddf58: 0xc6010024  lwc1        $f1, 0x24($s0)
    ctx->pc = 0x2ddf58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ddf5c: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x2ddf5cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x2ddf60: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x2ddf60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x2ddf64: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2ddf64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2ddf68: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2ddf68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ddf6c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2ddf6cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2ddf70: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2ddf70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ddf74: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x2ddf74u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x2ddf78: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x2ddf78u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x2ddf7c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2ddf7cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ddf80: 0x3e00008  jr          $ra
    ctx->pc = 0x2DDF80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DDF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DDF80u;
        // 0x2ddf84: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DDF80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DDF88u;
}
