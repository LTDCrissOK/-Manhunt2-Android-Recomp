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

// Function: sub_002E4478
// Address: 0x2e4478 - 0x2e44d0
void sub_002E4478_0x2e4478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E4478_0x2e4478");
#endif

    switch (ctx->pc) {
        case 0x2e4488u: goto label_2e4488;
        default: break;
    }

    ctx->pc = 0x2e4478u;

    // 0x2e4478: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e4478u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2e447c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e447cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e4480: 0xc0a21bc  jal         func_2886F0
    ctx->pc = 0x2E4480u;
    SET_GPR_U32(ctx, 31, 0x2E4488u);
    ctx->pc = 0x2886F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2886F0u, 0x2E4480u, 0x2E4488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4488u;
label_2e4488:
    // 0x2e4488: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e4488u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e448c: 0x0  nop
    ctx->pc = 0x2e448cu;
    // NOP
    // 0x2e4490: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2e4490u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2e4494: 0x3c013d80  lui         $at, 0x3D80
    ctx->pc = 0x2e4494u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15744 << 16));
    // 0x2e4498: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2e4498u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e449c: 0x3c013fb3  lui         $at, 0x3FB3
    ctx->pc = 0x2e449cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16307 << 16));
    // 0x2e44a0: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x2e44a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x2e44a4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2e44a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2e44a8: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x2e44a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x2e44ac: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2e44acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2e44b0: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2e44b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2e44b4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2e44b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2e44b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e44b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e44bc: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2e44bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2e44c0: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x2e44c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x2e44c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2E44C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E44C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E44C4u;
        // 0x2e44c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E44C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E44CCu;
    // 0x2e44cc: 0x0  nop
    ctx->pc = 0x2e44ccu;
    // NOP
    ctx->pc = 0x2e44d0u;
}
