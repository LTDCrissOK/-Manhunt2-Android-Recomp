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

// Function: sub_001F5BE8
// Address: 0x1f5be8 - 0x1f5c20
void sub_001F5BE8_0x1f5be8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F5BE8_0x1f5be8");
#endif

    ctx->pc = 0x1f5be8u;

    // 0x1f5be8: 0x2ca2003c  sltiu       $v0, $a1, 0x3C
    ctx->pc = 0x1f5be8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)60) ? 1 : 0);
    // 0x1f5bec: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F5BECu;
    {
        const bool branch_taken_0x1f5bec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5BECu;
        // 0x1f5bf0: 0x3c020067  lui         $v0, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5bec) {
            ctx->pc = 0x1F5C14u;
            goto label_1f5c14;
        }
    }
    ctx->pc = 0x1F5BF4u;
    // 0x1f5bf4: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1f5bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1f5bf8: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x1f5bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x1f5bfc: 0x2442c948  addiu       $v0, $v0, -0x36B8
    ctx->pc = 0x1f5bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953288));
    // 0x1f5c00: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1f5c00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1f5c04: 0x2484ca38  addiu       $a0, $a0, -0x35C8
    ctx->pc = 0x1f5c04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953528));
    // 0x1f5c08: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1f5c08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1f5c0c: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x1f5c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x1f5c10: 0xe46c0000  swc1        $f12, 0x0($v1)
    ctx->pc = 0x1f5c10u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_1f5c14:
    // 0x1f5c14: 0x3e00008  jr          $ra
    ctx->pc = 0x1F5C14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F5C14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F5C1Cu;
    // 0x1f5c1c: 0x0  nop
    ctx->pc = 0x1f5c1cu;
    // NOP
    ctx->pc = 0x1f5c20u;
}
