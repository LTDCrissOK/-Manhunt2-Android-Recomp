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

// Function: sub_00363B10
// Address: 0x363b10 - 0x363b58
void sub_00363B10_0x363b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00363B10_0x363b10");
#endif

    switch (ctx->pc) {
        case 0x363b38u: goto label_363b38;
        default: break;
    }

    ctx->pc = 0x363b10u;

    // 0x363b10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x363b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x363b14: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x363b14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x363b18: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x363b18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363b1c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x363b1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x363b20: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x363b20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363b24: 0x3c04005c  lui         $a0, 0x5C
    ctx->pc = 0x363b24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)92 << 16));
    // 0x363b28: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x363b28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x363b2c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x363b2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363b30: 0xc0fbd28  jal         func_3EF4A0
    ctx->pc = 0x363B30u;
    SET_GPR_U32(ctx, 31, 0x363B38u);
    ctx->pc = 0x363B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363B30u;
    // 0x363b34: 0x2484dc20  addiu       $a0, $a0, -0x23E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EF4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EF4A0u, 0x363B30u, 0x363B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363B38u;
label_363b38:
    // 0x363b38: 0xae110004  sw          $s1, 0x4($s0)
    ctx->pc = 0x363b38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
    // 0x363b3c: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x363b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x363b40: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x363b40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x363b44: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x363b44u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x363b48: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x363b48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x363b4c: 0x3e00008  jr          $ra
    ctx->pc = 0x363B4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x363B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363B4Cu;
        // 0x363b50: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x363B4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x363B54u;
    // 0x363b54: 0x0  nop
    ctx->pc = 0x363b54u;
    // NOP
    ctx->pc = 0x363b58u;
}
