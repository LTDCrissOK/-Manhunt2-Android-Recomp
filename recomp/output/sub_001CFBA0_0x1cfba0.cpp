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

// Function: sub_001CFBA0
// Address: 0x1cfba0 - 0x1cfbe0
void sub_001CFBA0_0x1cfba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CFBA0_0x1cfba0");
#endif

    switch (ctx->pc) {
        case 0x1cfbd4u: goto label_1cfbd4;
        default: break;
    }

    ctx->pc = 0x1cfba0u;

    // 0x1cfba0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cfba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cfba4: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1cfba4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cfba8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cfba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cfbac: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x1cfbacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1cfbb0: 0xc4a0001c  lwc1        $f0, 0x1C($a1)
    ctx->pc = 0x1cfbb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cfbb4: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x1cfbb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cfbb8: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1cfbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x1cfbbc: 0x0  nop
    ctx->pc = 0x1cfbbcu;
    // NOP
    // 0x1cfbc0: 0x0  nop
    ctx->pc = 0x1cfbc0u;
    // NOP
    // 0x1cfbc4: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1cfbc4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1cfbc8: 0xc44c0010  lwc1        $f12, 0x10($v0)
    ctx->pc = 0x1cfbc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1cfbcc: 0xc073e86  jal         func_1CFA18
    ctx->pc = 0x1CFBCCu;
    SET_GPR_U32(ctx, 31, 0x1CFBD4u);
    ctx->pc = 0x1CFBD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CFBCCu;
    // 0x1cfbd0: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFA18u, 0x1CFBCCu, 0x1CFBD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CFBD4u;
label_1cfbd4:
    // 0x1cfbd4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cfbd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cfbd8: 0x3e00008  jr          $ra
    ctx->pc = 0x1CFBD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CFBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CFBD8u;
        // 0x1cfbdc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CFBD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CFBE0u;
}
