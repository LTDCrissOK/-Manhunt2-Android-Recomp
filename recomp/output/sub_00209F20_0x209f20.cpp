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

// Function: sub_00209F20
// Address: 0x209f20 - 0x209f68
void sub_00209F20_0x209f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00209F20_0x209f20");
#endif

    switch (ctx->pc) {
        case 0x209f5cu: goto label_209f5c;
        default: break;
    }

    ctx->pc = 0x209f20u;

    // 0x209f20: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x209f20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x209f24: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x209f24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x209f28: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x209f28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x209f2c: 0x3c01459c  lui         $at, 0x459C
    ctx->pc = 0x209f2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17820 << 16));
    // 0x209f30: 0x34214000  ori         $at, $at, 0x4000
    ctx->pc = 0x209f30u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16384);
    // 0x209f34: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x209f34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x209f38: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x209f38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x209f3c: 0x46006301  sub.s       $f12, $f12, $f0
    ctx->pc = 0x209f3cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x209f40: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x209f40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x209f44: 0x2405100d  addiu       $a1, $zero, 0x100D
    ctx->pc = 0x209f44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4109));
    // 0x209f48: 0x46016302  mul.s       $f12, $f12, $f1
    ctx->pc = 0x209f48u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x209f4c: 0x46006024  .word       0x46006024                   # cvt.w.s     $f0, $f12 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x209f4cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[12]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x209f50: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x209f50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x209f54: 0xc082700  jal         func_209C00
    ctx->pc = 0x209F54u;
    SET_GPR_U32(ctx, 31, 0x209F5Cu);
    ctx->pc = 0x209F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209F54u;
    // 0x209f58: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x209C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209C00u, 0x209F54u, 0x209F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209F5Cu;
label_209f5c:
    // 0x209f5c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x209f5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x209f60: 0x3e00008  jr          $ra
    ctx->pc = 0x209F60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x209F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209F60u;
        // 0x209f64: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x209F60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x209F68u;
}
