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

// Function: sub_001FDBE0
// Address: 0x1fdbe0 - 0x1fdc10
void sub_001FDBE0_0x1fdbe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FDBE0_0x1fdbe0");
#endif

    ctx->pc = 0x1fdbe0u;

    // 0x1fdbe0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1fdbe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1fdbe4: 0x14a20007  bne         $a1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FDBE4u;
    {
        const bool branch_taken_0x1fdbe4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x1fdbe4) {
            ctx->pc = 0x1FDC04u;
            goto label_1fdc04;
        }
    }
    ctx->pc = 0x1FDBECu;
    // 0x1fdbec: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FDBECu;
    {
        const bool branch_taken_0x1fdbec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDBECu;
        // 0x1fdbf0: 0x3c02004a  lui         $v0, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdbec) {
            ctx->pc = 0x1FDC04u;
            goto label_1fdc04;
        }
    }
    ctx->pc = 0x1FDBF4u;
    // 0x1fdbf4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1fdbf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1fdbf8: 0x24429b10  addiu       $v0, $v0, -0x64F0
    ctx->pc = 0x1fdbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941456));
    // 0x1fdbfc: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x1fdbfcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x1fdc00: 0xa040000c  sb          $zero, 0xC($v0)
    ctx->pc = 0x1fdc00u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 12), (uint8_t)GPR_U32(ctx, 0));
label_1fdc04:
    // 0x1fdc04: 0x3e00008  jr          $ra
    ctx->pc = 0x1FDC04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FDC04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FDC0Cu;
    // 0x1fdc0c: 0x0  nop
    ctx->pc = 0x1fdc0cu;
    // NOP
    ctx->pc = 0x1fdc10u;
}
