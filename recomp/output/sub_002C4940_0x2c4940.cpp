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

// Function: sub_002C4940
// Address: 0x2c4940 - 0x2c4980
void sub_002C4940_0x2c4940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C4940_0x2c4940");
#endif

    switch (ctx->pc) {
        case 0x2c4968u: goto label_2c4968;
        default: break;
    }

    ctx->pc = 0x2c4940u;

    // 0x2c4940: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2c4940u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c4944: 0x0  nop
    ctx->pc = 0x2c4944u;
    // NOP
    // 0x2c4948: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c4948u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2c494c: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x2c494cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
    // 0x2c4950: 0x3421fa36  ori         $at, $at, 0xFA36
    ctx->pc = 0x2c4950u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64054);
    // 0x2c4954: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2c4954u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2c4958: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c4958u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2c495c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c495cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c4960: 0xc0e3f98  jal         func_38FE60
    ctx->pc = 0x2C4960u;
    SET_GPR_U32(ctx, 31, 0x2C4968u);
    ctx->pc = 0x2C4964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4960u;
    // 0x2c4964: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FE60u, 0x2C4960u, 0x2C4968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4968u;
label_2c4968:
    // 0x2c4968: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c4968u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c496c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C496Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C4970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C496Cu;
        // 0x2c4970: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C496Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C4974u;
    // 0x2c4974: 0x0  nop
    ctx->pc = 0x2c4974u;
    // NOP
    // 0x2c4978: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2c4978u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2c497c: 0x0  nop
    ctx->pc = 0x2c497cu;
    // NOP
    ctx->pc = 0x2c4980u;
}
