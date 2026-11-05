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

// Function: sub_001BB518
// Address: 0x1bb518 - 0x1bb558
void sub_001BB518_0x1bb518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BB518_0x1bb518");
#endif

    switch (ctx->pc) {
        case 0x1bb52cu: goto label_1bb52c;
        default: break;
    }

    ctx->pc = 0x1bb518u;

    // 0x1bb518: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bb518u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1bb51c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1bb51cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1bb520: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1bb520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1bb524: 0xc06edf2  jal         func_1BB7C8
    ctx->pc = 0x1BB524u;
    SET_GPR_U32(ctx, 31, 0x1BB52Cu);
    ctx->pc = 0x1BB528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BB524u;
    // 0x1bb528: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB7C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB7C8u, 0x1BB524u, 0x1BB52Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BB52Cu;
label_1bb52c:
    // 0x1bb52c: 0xc6020074  lwc1        $f2, 0x74($s0)
    ctx->pc = 0x1bb52cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1bb530: 0x26020074  addiu       $v0, $s0, 0x74
    ctx->pc = 0x1bb530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 116));
    // 0x1bb534: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1bb534u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1bb538: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x1bb538u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1bb53c: 0xe6020074  swc1        $f2, 0x74($s0)
    ctx->pc = 0x1bb53cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
    // 0x1bb540: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bb540u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bb544: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1bb544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bb548: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1bb548u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1bb54c: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x1bb54cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1bb550: 0x3e00008  jr          $ra
    ctx->pc = 0x1BB550u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BB554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB550u;
        // 0x1bb554: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BB550u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BB558u;
}
