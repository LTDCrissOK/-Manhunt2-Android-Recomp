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

// Function: sub_0017AE08
// Address: 0x17ae08 - 0x17ae60
void sub_0017AE08_0x17ae08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017AE08_0x17ae08");
#endif

    switch (ctx->pc) {
        case 0x17ae28u: goto label_17ae28;
        case 0x17ae30u: goto label_17ae30;
        default: break;
    }

    ctx->pc = 0x17ae08u;

    // 0x17ae08: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17ae08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17ae0c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17ae0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17ae10: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17ae10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17ae14: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x17ae14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ae18: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17ae18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17ae1c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x17ae1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ae20: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17ae20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ae24: 0x0  nop
    ctx->pc = 0x17ae24u;
    // NOP
label_17ae28:
    // 0x17ae28: 0xc05eb98  jal         func_17AE60
    ctx->pc = 0x17AE28u;
    SET_GPR_U32(ctx, 31, 0x17AE30u);
    ctx->pc = 0x17AE2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17AE28u;
    // 0x17ae2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17AE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17AE60u, 0x17AE28u, 0x17AE30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17AE30u;
label_17ae30:
    // 0x17ae30: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x17ae30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x17ae34: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x17ae34u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x17ae38: 0x2e030014  sltiu       $v1, $s0, 0x14
    ctx->pc = 0x17ae38u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
    // 0x17ae3c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x17AE3Cu;
    {
        const bool branch_taken_0x17ae3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x17AE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AE3Cu;
        // 0x17ae40: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ae3c) {
            ctx->pc = 0x17AE28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17ae28;
        }
    }
    ctx->pc = 0x17AE44u;
    // 0x17ae44: 0xa2200530  sb          $zero, 0x530($s1)
    ctx->pc = 0x17ae44u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1328), (uint8_t)GPR_U32(ctx, 0));
    // 0x17ae48: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17ae48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17ae4c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17ae4cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17ae50: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17ae50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17ae54: 0x3e00008  jr          $ra
    ctx->pc = 0x17AE54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17AE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AE54u;
        // 0x17ae58: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17AE54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17AE5Cu;
    // 0x17ae5c: 0x0  nop
    ctx->pc = 0x17ae5cu;
    // NOP
    ctx->pc = 0x17ae60u;
}
