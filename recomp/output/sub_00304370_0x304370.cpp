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

// Function: sub_00304370
// Address: 0x304370 - 0x3043d8
void sub_00304370_0x304370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00304370_0x304370");
#endif

    switch (ctx->pc) {
        case 0x3043c0u: goto label_3043c0;
        default: break;
    }

    ctx->pc = 0x304370u;

    // 0x304370: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x304370u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x304374: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x304374u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x304378: 0x8c422b40  lw          $v0, 0x2B40($v0)
    ctx->pc = 0x304378u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x482B40u));
    // 0x30437c: 0x2484117c  addiu       $a0, $a0, 0x117C
    ctx->pc = 0x30437cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4476));
    // 0x304380: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x304380u;
    {
        const bool branch_taken_0x304380 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x304384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304380u;
        // 0x304384: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304380) {
            ctx->pc = 0x30439Cu;
            goto label_30439c;
        }
    }
    ctx->pc = 0x304388u;
    // 0x304388: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x304388u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x30438c: 0x0  nop
    ctx->pc = 0x30438cu;
    // NOP
    // 0x304390: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x304390u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x304394: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x304394u;
    {
        const bool branch_taken_0x304394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x304394) {
            ctx->pc = 0x3043B8u;
            goto label_3043b8;
        }
    }
    ctx->pc = 0x30439Cu;
label_30439c:
    // 0x30439c: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x30439cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x3043a0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3043a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3043a4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3043a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3043a8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3043a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3043ac: 0x0  nop
    ctx->pc = 0x3043acu;
    // NOP
    // 0x3043b0: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x3043b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x3043b4: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x3043b4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
label_3043b8:
    // 0x3043b8: 0xc0b908c  jal         func_2E4230
    ctx->pc = 0x3043B8u;
    SET_GPR_U32(ctx, 31, 0x3043C0u);
    ctx->pc = 0x2E4230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4230u, 0x3043B8u, 0x3043C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3043C0u;
label_3043c0:
    // 0x3043c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3043c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3043c4: 0x3e00008  jr          $ra
    ctx->pc = 0x3043C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3043C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3043C4u;
        // 0x3043c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3043C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3043CCu;
    // 0x3043cc: 0x0  nop
    ctx->pc = 0x3043ccu;
    // NOP
    // 0x3043d0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3043d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3043d4: 0x0  nop
    ctx->pc = 0x3043d4u;
    // NOP
    ctx->pc = 0x3043d8u;
}
