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

// Function: sub_0020BB30
// Address: 0x20bb30 - 0x20bb90
void sub_0020BB30_0x20bb30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020BB30_0x20bb30");
#endif

    switch (ctx->pc) {
        case 0x20bb40u: goto label_20bb40;
        default: break;
    }

    ctx->pc = 0x20bb30u;

    // 0x20bb30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20bb30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20bb34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20bb34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20bb38: 0xc082ebc  jal         func_20BAF0
    ctx->pc = 0x20BB38u;
    SET_GPR_U32(ctx, 31, 0x20BB40u);
    ctx->pc = 0x20BAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20BAF0u, 0x20BB38u, 0x20BB40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BB40u;
label_20bb40:
    // 0x20bb40: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x20BB40u;
    {
        const bool branch_taken_0x20bb40 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x20BB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BB40u;
        // 0x20bb44: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bb40) {
            ctx->pc = 0x20BB5Cu;
            goto label_20bb5c;
        }
    }
    ctx->pc = 0x20BB48u;
    // 0x20bb48: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x20bb48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x20bb4c: 0x0  nop
    ctx->pc = 0x20bb4cu;
    // NOP
    // 0x20bb50: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x20bb50u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x20bb54: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x20BB54u;
    {
        const bool branch_taken_0x20bb54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20bb54) {
            ctx->pc = 0x20BB74u;
            goto label_20bb74;
        }
    }
    ctx->pc = 0x20BB5Cu;
label_20bb5c:
    // 0x20bb5c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x20bb5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x20bb60: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x20bb60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x20bb64: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x20bb64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x20bb68: 0x0  nop
    ctx->pc = 0x20bb68u;
    // NOP
    // 0x20bb6c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x20bb6cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x20bb70: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x20bb70u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_20bb74:
    // 0x20bb74: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x20bb74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x20bb78: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x20bb78u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x20bb7c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x20bb7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20bb80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20bb80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20bb84: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x20bb84u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x20bb88: 0x3e00008  jr          $ra
    ctx->pc = 0x20BB88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20BB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20BB88u;
        // 0x20bb8c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20BB88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20BB90u;
}
