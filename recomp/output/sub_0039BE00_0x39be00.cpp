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

// Function: sub_0039BE00
// Address: 0x39be00 - 0x39be60
void sub_0039BE00_0x39be00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039BE00_0x39be00");
#endif

    switch (ctx->pc) {
        case 0x39be14u: goto label_39be14;
        default: break;
    }

    ctx->pc = 0x39be00u;

    // 0x39be00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x39be00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x39be04: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x39be04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39be08: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x39be08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x39be0c: 0xc0e6eb4  jal         func_39BAD0
    ctx->pc = 0x39BE0Cu;
    SET_GPR_U32(ctx, 31, 0x39BE14u);
    ctx->pc = 0x39BE10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39BE0Cu;
    // 0x39be10: 0x27a60004  addiu       $a2, $sp, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39BAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39BAD0u, 0x39BE0Cu, 0x39BE14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39BE14u;
label_39be14:
    // 0x39be14: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x39be14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x39be18: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x39be18u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x39be1c: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x39be1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x39be20: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x39be20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x39be24: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x39be24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x39be28: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x39be28u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x39be2c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x39be2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39be30: 0x0  nop
    ctx->pc = 0x39be30u;
    // NOP
    // 0x39be34: 0x0  nop
    ctx->pc = 0x39be34u;
    // NOP
    // 0x39be38: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x39be38u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[2]); }
    // 0x39be3c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x39be3cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x39be40: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x39be40u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x39be44: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x39be44u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x39be48: 0x3e00008  jr          $ra
    ctx->pc = 0x39BE48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39BE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BE48u;
        // 0x39be4c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39BE48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39BE50u;
    // 0x39be50: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x39be50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x39be54: 0x0  nop
    ctx->pc = 0x39be54u;
    // NOP
    // 0x39be58: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x39be58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x39be5c: 0x0  nop
    ctx->pc = 0x39be5cu;
    // NOP
    ctx->pc = 0x39be60u;
}
