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

// Function: sub_001F5BA0
// Address: 0x1f5ba0 - 0x1f5be8
void sub_001F5BA0_0x1f5ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F5BA0_0x1f5ba0");
#endif

    switch (ctx->pc) {
        case 0x1f5bc8u: goto label_1f5bc8;
        default: break;
    }

    ctx->pc = 0x1f5ba0u;

    // 0x1f5ba0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1f5ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1f5ba4: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1f5ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x1f5ba8: 0xac459238  sw          $a1, -0x6DC8($v0)
    ctx->pc = 0x1f5ba8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x3F9238u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F9238u, _value); } while (0);
    // 0x1f5bac: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x1f5bacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x1f5bb0: 0xe46c923c  swc1        $f12, -0x6DC4($v1)
    ctx->pc = 0x1f5bb0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3F923Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F923Cu, _value); } while (0); }
    // 0x1f5bb4: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x1f5bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x1f5bb8: 0x2442ca38  addiu       $v0, $v0, -0x35C8
    ctx->pc = 0x1f5bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953528));
    // 0x1f5bbc: 0x2484c948  addiu       $a0, $a0, -0x36B8
    ctx->pc = 0x1f5bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953288));
    // 0x1f5bc0: 0x2403003b  addiu       $v1, $zero, 0x3B
    ctx->pc = 0x1f5bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x1f5bc4: 0x0  nop
    ctx->pc = 0x1f5bc4u;
    // NOP
label_1f5bc8:
    // 0x1f5bc8: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x1f5bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x1f5bcc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1f5bccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1f5bd0: 0xe44c0000  swc1        $f12, 0x0($v0)
    ctx->pc = 0x1f5bd0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1f5bd4: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x1f5bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x1f5bd8: 0x461fffb  bgez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1F5BD8u;
    {
        const bool branch_taken_0x1f5bd8 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1F5BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5BD8u;
        // 0x1f5bdc: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5bd8) {
            ctx->pc = 0x1F5BC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f5bc8;
        }
    }
    ctx->pc = 0x1F5BE0u;
    // 0x1f5be0: 0x3e00008  jr          $ra
    ctx->pc = 0x1F5BE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F5BE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F5BE8u;
}
