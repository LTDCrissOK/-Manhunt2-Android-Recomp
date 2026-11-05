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

// Function: sub_001BB9C0
// Address: 0x1bb9c0 - 0x1bb9f8
void sub_001BB9C0_0x1bb9c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BB9C0_0x1bb9c0");
#endif

    ctx->pc = 0x1bb9c0u;

    // 0x1bb9c0: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x1bb9c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x1bb9c4: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1bb9c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1bb9c8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1bb9c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bb9cc: 0xe48c0048  swc1        $f12, 0x48($a0)
    ctx->pc = 0x1bb9ccu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 72), bits); }
    // 0x1bb9d0: 0x46006000  add.s       $f0, $f12, $f0
    ctx->pc = 0x1bb9d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x1bb9d4: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x1bb9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
    // 0x1bb9d8: 0xe4800054  swc1        $f0, 0x54($a0)
    ctx->pc = 0x1bb9d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 84), bits); }
    // 0x1bb9dc: 0x8c620fe8  lw          $v0, 0xFE8($v1)
    ctx->pc = 0x1bb9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4072)));
    // 0x1bb9e0: 0xe44c0350  swc1        $f12, 0x350($v0)
    ctx->pc = 0x1bb9e0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 848), bits); }
    // 0x1bb9e4: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x1bb9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
    // 0x1bb9e8: 0xc4800054  lwc1        $f0, 0x54($a0)
    ctx->pc = 0x1bb9e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bb9ec: 0x8c620fe8  lw          $v0, 0xFE8($v1)
    ctx->pc = 0x1bb9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4072)));
    // 0x1bb9f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1BB9F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BB9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BB9F0u;
        // 0x1bb9f4: 0xe4400354  swc1        $f0, 0x354($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 852), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BB9F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BB9F8u;
}
