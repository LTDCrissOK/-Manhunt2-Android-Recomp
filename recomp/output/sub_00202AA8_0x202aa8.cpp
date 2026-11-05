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

// Function: sub_00202AA8
// Address: 0x202aa8 - 0x202b00
void sub_00202AA8_0x202aa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00202AA8_0x202aa8");
#endif

    switch (ctx->pc) {
        case 0x202ae0u: goto label_202ae0;
        case 0x202af0u: goto label_202af0;
        default: break;
    }

    ctx->pc = 0x202aa8u;

    // 0x202aa8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x202aa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x202aac: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x202aacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x202ab0: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x202ab0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x202ab4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x202ab4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202ab8: 0xc45493a4  lwc1        $f20, -0x6C5C($v0)
    ctx->pc = 0x202ab8u;
    { uint32_t bits = FAST_READ32(0x3F93A4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x202abc: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x202abcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x202ac0: 0x3c013b81  lui         $at, 0x3B81
    ctx->pc = 0x202ac0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15233 << 16));
    // 0x202ac4: 0x34210204  ori         $at, $at, 0x204
    ctx->pc = 0x202ac4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)516);
    // 0x202ac8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x202ac8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x202acc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x202accu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x202ad0: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x202ad0u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x202ad4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x202ad4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x202ad8: 0xc08276c  jal         func_209DB0
    ctx->pc = 0x202AD8u;
    SET_GPR_U32(ctx, 31, 0x202AE0u);
    ctx->pc = 0x202ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202AD8u;
    // 0x202adc: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x209DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209DB0u, 0x202AD8u, 0x202AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202AE0u;
label_202ae0:
    // 0x202ae0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x202ae0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x202ae4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x202ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x202ae8: 0xc08276c  jal         func_209DB0
    ctx->pc = 0x202AE8u;
    SET_GPR_U32(ctx, 31, 0x202AF0u);
    ctx->pc = 0x202AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202AE8u;
    // 0x202aec: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x209DB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209DB0u, 0x202AE8u, 0x202AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202AF0u;
label_202af0:
    // 0x202af0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x202af0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x202af4: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x202af4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x202af8: 0x3e00008  jr          $ra
    ctx->pc = 0x202AF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x202AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202AF8u;
        // 0x202afc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x202AF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x202B00u;
}
