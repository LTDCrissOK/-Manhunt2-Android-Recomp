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

// Function: sub_003E8AF8
// Address: 0x3e8af8 - 0x3e8b40
void sub_003E8AF8_0x3e8af8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E8AF8_0x3e8af8");
#endif

    switch (ctx->pc) {
        case 0x3e8b1cu: goto label_3e8b1c;
        case 0x3e8b28u: goto label_3e8b28;
        default: break;
    }

    ctx->pc = 0x3e8af8u;

    // 0x3e8af8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3e8af8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3e8afc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3e8afcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3e8b00: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3e8b00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3e8b04: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3e8b04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e8b08: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3e8b08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e8b0c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3e8b0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3e8b10: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x3e8b10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x3e8b14: 0xc0b005e  jal         func_2C0178
    ctx->pc = 0x3E8B14u;
    SET_GPR_U32(ctx, 31, 0x3E8B1Cu);
    ctx->pc = 0x3E8B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E8B14u;
    // 0x3e8b18: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0178u, 0x3E8B14u, 0x3E8B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E8B1Cu;
label_3e8b1c:
    // 0x3e8b1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e8b1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e8b20: 0xc0af77e  jal         func_2BDDF8
    ctx->pc = 0x3E8B20u;
    SET_GPR_U32(ctx, 31, 0x3E8B28u);
    ctx->pc = 0x3E8B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E8B20u;
    // 0x3e8b24: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BDDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BDDF8u, 0x3E8B20u, 0x3E8B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E8B28u;
label_3e8b28:
    // 0x3e8b28: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3e8b28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e8b2c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3e8b2cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3e8b30: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3e8b30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e8b34: 0x3e00008  jr          $ra
    ctx->pc = 0x3E8B34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E8B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8B34u;
        // 0x3e8b38: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E8B34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E8B3Cu;
    // 0x3e8b3c: 0x0  nop
    ctx->pc = 0x3e8b3cu;
    // NOP
    ctx->pc = 0x3e8b40u;
}
