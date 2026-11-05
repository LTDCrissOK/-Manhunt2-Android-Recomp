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

// Function: sub_0012C4C0
// Address: 0x12c4c0 - 0x12c520
void sub_0012C4C0_0x12c4c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012C4C0_0x12c4c0");
#endif

    switch (ctx->pc) {
        case 0x12c4d8u: goto label_12c4d8;
        case 0x12c4f0u: goto label_12c4f0;
        default: break;
    }

    ctx->pc = 0x12c4c0u;

    // 0x12c4c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x12c4c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12c4c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12c4c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12c4c8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x12c4c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c4cc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x12c4ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x12c4d0: 0xc04afb0  jal         func_12BEC0
    ctx->pc = 0x12C4D0u;
    SET_GPR_U32(ctx, 31, 0x12C4D8u);
    ctx->pc = 0x12C4D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C4D0u;
    // 0x12c4d4: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12BEC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12BEC0u, 0x12C4D0u, 0x12C4D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C4D8u;
label_12c4d8:
    // 0x12c4d8: 0xa2000084  sb          $zero, 0x84($s0)
    ctx->pc = 0x12c4d8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 132), (uint8_t)GPR_U32(ctx, 0));
    // 0x12c4dc: 0x26050085  addiu       $a1, $s0, 0x85
    ctx->pc = 0x12c4dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 133));
    // 0x12c4e0: 0xa20000c6  sb          $zero, 0xC6($s0)
    ctx->pc = 0x12c4e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 198), (uint8_t)GPR_U32(ctx, 0));
    // 0x12c4e4: 0x24060041  addiu       $a2, $zero, 0x41
    ctx->pc = 0x12c4e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x12c4e8: 0xa20000c7  sb          $zero, 0xC7($s0)
    ctx->pc = 0x12c4e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 199), (uint8_t)GPR_U32(ctx, 0));
    // 0x12c4ec: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x12c4ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12c4f0:
    // 0x12c4f0: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x12c4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x12c4f4: 0xa41821  addu        $v1, $a1, $a0
    ctx->pc = 0x12c4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x12c4f8: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x12c4f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x12c4fc: 0x2c820041  sltiu       $v0, $a0, 0x41
    ctx->pc = 0x12c4fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)65) ? 1 : 0);
    // 0x12c500: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x12C500u;
    {
        const bool branch_taken_0x12c500 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12C504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C500u;
        // 0x12c504: 0xa0660000  sb          $a2, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c500) {
            ctx->pc = 0x12C4F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12c4f0;
        }
    }
    ctx->pc = 0x12C508u;
    // 0x12c508: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12c508u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12c50c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x12c50cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12c510: 0x3e00008  jr          $ra
    ctx->pc = 0x12C510u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12C514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C510u;
        // 0x12c514: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12C510u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12C518u;
    // 0x12c518: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x12c518u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x12c51c: 0x0  nop
    ctx->pc = 0x12c51cu;
    // NOP
    ctx->pc = 0x12c520u;
}
