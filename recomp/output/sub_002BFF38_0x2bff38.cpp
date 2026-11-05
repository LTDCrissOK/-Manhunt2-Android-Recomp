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

// Function: sub_002BFF38
// Address: 0x2bff38 - 0x2bff78
void sub_002BFF38_0x2bff38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BFF38_0x2bff38");
#endif

    switch (ctx->pc) {
        case 0x2bff54u: goto label_2bff54;
        default: break;
    }

    ctx->pc = 0x2bff38u;

    // 0x2bff38: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2bff38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2bff3c: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x2bff3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2bff40: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x2bff40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x2bff44: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2bff44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bff48: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x2bff48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x2bff4c: 0xc0b0370  jal         func_2C0DC0
    ctx->pc = 0x2BFF4Cu;
    SET_GPR_U32(ctx, 31, 0x2BFF54u);
    ctx->pc = 0x2BFF50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BFF4Cu;
    // 0x2bff50: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0DC0u, 0x2BFF4Cu, 0x2BFF54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BFF54u;
label_2bff54:
    // 0x2bff54: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x2bff54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bff58: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x2bff58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2bff5c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2bff5cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2bff60: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2bff60u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2bff64: 0xa202002c  sb          $v0, 0x2C($s0)
    ctx->pc = 0x2bff64u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 44), (uint8_t)GPR_U32(ctx, 2));
    // 0x2bff68: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x2bff68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2bff6c: 0x3e00008  jr          $ra
    ctx->pc = 0x2BFF6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BFF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BFF6Cu;
        // 0x2bff70: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BFF6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BFF74u;
    // 0x2bff74: 0x0  nop
    ctx->pc = 0x2bff74u;
    // NOP
    ctx->pc = 0x2bff78u;
}
