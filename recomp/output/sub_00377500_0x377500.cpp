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

// Function: sub_00377500
// Address: 0x377500 - 0x377550
void sub_00377500_0x377500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00377500_0x377500");
#endif

    switch (ctx->pc) {
        case 0x37753cu: goto label_37753c;
        default: break;
    }

    ctx->pc = 0x377500u;

    // 0x377500: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x377500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x377504: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x377504u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
    // 0x377508: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x377508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37750c: 0x24425d20  addiu       $v0, $v0, 0x5D20
    ctx->pc = 0x37750cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23840));
    // 0x377510: 0xc4410028  lwc1        $f1, 0x28($v0)
    ctx->pc = 0x377510u;
    { uint32_t bits = FAST_READ32(0x655D48u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x377514: 0xc4420038  lwc1        $f2, 0x38($v0)
    ctx->pc = 0x377514u;
    { uint32_t bits = FAST_READ32(0x655D58u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x377518: 0x460c0842  mul.s       $f1, $f1, $f12
    ctx->pc = 0x377518u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
    // 0x37751c: 0xc440002c  lwc1        $f0, 0x2C($v0)
    ctx->pc = 0x37751cu;
    { uint32_t bits = FAST_READ32(0x655D4Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x377520: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x377520u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x377524: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x377524u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x377528: 0x0  nop
    ctx->pc = 0x377528u;
    // NOP
    // 0x37752c: 0x0  nop
    ctx->pc = 0x37752cu;
    // NOP
    // 0x377530: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x377530u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x377534: 0xc0dde53  jal         func_37794C
    ctx->pc = 0x377534u;
    SET_GPR_U32(ctx, 31, 0x37753Cu);
    ctx->pc = 0x37794Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37794Cu, 0x377534u, 0x37753Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37753Cu;
label_37753c:
    // 0x37753c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37753cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x377540: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x377540u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x377544: 0x3e00008  jr          $ra
    ctx->pc = 0x377544u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x377548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377544u;
        // 0x377548: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x377544u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37754Cu;
    // 0x37754c: 0x0  nop
    ctx->pc = 0x37754cu;
    // NOP
    ctx->pc = 0x377550u;
}
