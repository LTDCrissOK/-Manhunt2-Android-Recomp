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

// Function: sub_002862B8
// Address: 0x2862b8 - 0x2862e8
void sub_002862B8_0x2862b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002862B8_0x2862b8");
#endif

    ctx->pc = 0x2862b8u;

    // 0x2862b8: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x2862b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x2862bc: 0x3c013ca3  lui         $at, 0x3CA3
    ctx->pc = 0x2862bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15523 << 16));
    // 0x2862c0: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x2862c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x2862c4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2862c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2862c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2862c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2862cc: 0x2485c650  addiu       $a1, $a0, -0x39B0
    ctx->pc = 0x2862ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952528));
    // 0x2862d0: 0xac82c650  sw          $v0, -0x39B0($a0)
    ctx->pc = 0x2862d0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6BC650u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BC650u, _value); } while (0);
    // 0x2862d4: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x2862d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2862d8: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x2862d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6BC658u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BC658u, _value); } while (0); }
    // 0x2862dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2862DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2862E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2862DCu;
        // 0x2862e0: 0xaca30004  sw          $v1, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2862DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2862E4u;
    // 0x2862e4: 0x0  nop
    ctx->pc = 0x2862e4u;
    // NOP
    ctx->pc = 0x2862e8u;
}
