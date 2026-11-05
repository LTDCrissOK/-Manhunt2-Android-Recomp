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

// Function: sub_00271458
// Address: 0x271458 - 0x2714a0
void sub_00271458_0x271458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00271458_0x271458");
#endif

    switch (ctx->pc) {
        case 0x271488u: goto label_271488;
        default: break;
    }

    ctx->pc = 0x271458u;

    // 0x271458: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x271458u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x27145c: 0x46006006  mov.s       $f0, $f12
    ctx->pc = 0x27145cu;
    ctx->f[0] = FPU_MOV_S(ctx->f[12]);
    // 0x271460: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x271460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x271464: 0x46000042  mul.s       $f1, $f0, $f0
    ctx->pc = 0x271464u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x271468: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x271468u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x27146c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x27146cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271470: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x271470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x271474: 0x26020220  addiu       $v0, $s0, 0x220
    ctx->pc = 0x271474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 544));
    // 0x271478: 0x7c430010  sq          $v1, 0x10($v0)
    ctx->pc = 0x271478u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), GPR_VEC(ctx, 3));
    // 0x27147c: 0xe4410030  swc1        $f1, 0x30($v0)
    ctx->pc = 0x27147cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x271480: 0xc0dde53  jal         func_37794C
    ctx->pc = 0x271480u;
    SET_GPR_U32(ctx, 31, 0x271488u);
    ctx->pc = 0x271484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271480u;
    // 0x271484: 0xe4400020  swc1        $f0, 0x20($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x37794Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37794Cu, 0x271480u, 0x271488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271488u;
label_271488:
    // 0x271488: 0xae020284  sw          $v0, 0x284($s0)
    ctx->pc = 0x271488u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 644), GPR_U32(ctx, 2));
    // 0x27148c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x27148cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x271490: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x271490u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x271494: 0x3e00008  jr          $ra
    ctx->pc = 0x271494u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x271498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271494u;
        // 0x271498: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x271494u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27149Cu;
    // 0x27149c: 0x0  nop
    ctx->pc = 0x27149cu;
    // NOP
    ctx->pc = 0x2714a0u;
}
