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

// Function: sub_0015AE08
// Address: 0x15ae08 - 0x15ae60
void sub_0015AE08_0x15ae08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015AE08_0x15ae08");
#endif

    switch (ctx->pc) {
        case 0x15ae28u: goto label_15ae28;
        case 0x15ae30u: goto label_15ae30;
        default: break;
    }

    ctx->pc = 0x15ae08u;

    // 0x15ae08: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x15ae08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x15ae0c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x15ae0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x15ae10: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x15ae10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x15ae14: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x15ae14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ae18: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x15ae18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x15ae1c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x15ae1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ae20: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15ae20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ae24: 0x0  nop
    ctx->pc = 0x15ae24u;
    // NOP
label_15ae28:
    // 0x15ae28: 0xc056b98  jal         func_15AE60
    ctx->pc = 0x15AE28u;
    SET_GPR_U32(ctx, 31, 0x15AE30u);
    ctx->pc = 0x15AE2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15AE28u;
    // 0x15ae2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15AE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15AE60u, 0x15AE28u, 0x15AE30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15AE30u;
label_15ae30:
    // 0x15ae30: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x15ae30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x15ae34: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x15ae34u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x15ae38: 0x2e030010  sltiu       $v1, $s0, 0x10
    ctx->pc = 0x15ae38u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x15ae3c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x15AE3Cu;
    {
        const bool branch_taken_0x15ae3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15AE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AE3Cu;
        // 0x15ae40: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ae3c) {
            ctx->pc = 0x15AE28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15ae28;
        }
    }
    ctx->pc = 0x15AE44u;
    // 0x15ae44: 0xa2200a20  sb          $zero, 0xA20($s1)
    ctx->pc = 0x15ae44u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2592), (uint8_t)GPR_U32(ctx, 0));
    // 0x15ae48: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x15ae48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15ae4c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x15ae4cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x15ae50: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x15ae50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15ae54: 0x3e00008  jr          $ra
    ctx->pc = 0x15AE54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15AE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AE54u;
        // 0x15ae58: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15AE54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15AE5Cu;
    // 0x15ae5c: 0x0  nop
    ctx->pc = 0x15ae5cu;
    // NOP
    ctx->pc = 0x15ae60u;
}
