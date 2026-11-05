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

// Function: sub_001810B0
// Address: 0x1810b0 - 0x1810f8
void sub_001810B0_0x1810b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001810B0_0x1810b0");
#endif

    switch (ctx->pc) {
        case 0x1810d0u: goto label_1810d0;
        default: break;
    }

    ctx->pc = 0x1810b0u;

    // 0x1810b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1810b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1810b4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1810b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1810b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1810b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1810bc: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x1810bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x1810c0: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1810c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1810c4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1810c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1810c8: 0xc0b12b0  jal         func_2C4AC0
    ctx->pc = 0x1810C8u;
    SET_GPR_U32(ctx, 31, 0x1810D0u);
    ctx->pc = 0x1810CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1810C8u;
    // 0x1810cc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4AC0u, 0x1810C8u, 0x1810D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1810D0u;
label_1810d0:
    // 0x1810d0: 0xc6010128  lwc1        $f1, 0x128($s0)
    ctx->pc = 0x1810d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1810d4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1810d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1810d8: 0x0  nop
    ctx->pc = 0x1810d8u;
    // NOP
    // 0x1810dc: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1810DCu;
    {
        const bool branch_taken_0x1810dc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1810E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1810DCu;
        // 0x1810e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1810dc) {
            ctx->pc = 0x1810E8u;
            goto label_1810e8;
        }
    }
    ctx->pc = 0x1810E4u;
    // 0x1810e4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1810e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1810e8:
    // 0x1810e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1810e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1810ec: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1810ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1810f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1810F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1810F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1810F0u;
        // 0x1810f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1810F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1810F8u;
}
