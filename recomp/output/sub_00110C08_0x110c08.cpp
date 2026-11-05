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

// Function: sub_00110C08
// Address: 0x110c08 - 0x110c40
void sub_00110C08_0x110c08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00110C08_0x110c08");
#endif

    switch (ctx->pc) {
        case 0x110c24u: goto label_110c24;
        default: break;
    }

    ctx->pc = 0x110c08u;

    // 0x110c08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x110c08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x110c0c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x110c0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x110c10: 0x8c8400b4  lw          $a0, 0xB4($a0)
    ctx->pc = 0x110c10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 180)));
    // 0x110c14: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x110C14u;
    {
        const bool branch_taken_0x110c14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x110C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110C14u;
        // 0x110c18: 0x30a500ff  andi        $a1, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x110c14) {
            ctx->pc = 0x110C2Cu;
            goto label_110c2c;
        }
    }
    ctx->pc = 0x110C1Cu;
    // 0x110c1c: 0xc05a91c  jal         func_16A470
    ctx->pc = 0x110C1Cu;
    SET_GPR_U32(ctx, 31, 0x110C24u);
    ctx->pc = 0x16A470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16A470u, 0x110C1Cu, 0x110C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110C24u;
label_110c24:
    // 0x110c24: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x110C24u;
    {
        const bool branch_taken_0x110c24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110C24u;
        // 0x110c28: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110c24) {
            ctx->pc = 0x110C34u;
            goto label_110c34;
        }
    }
    ctx->pc = 0x110C2Cu;
label_110c2c:
    // 0x110c2c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x110c2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110c30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x110c30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_110c34:
    // 0x110c34: 0x3e00008  jr          $ra
    ctx->pc = 0x110C34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x110C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110C34u;
        // 0x110c38: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x110C34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x110C3Cu;
    // 0x110c3c: 0x0  nop
    ctx->pc = 0x110c3cu;
    // NOP
    ctx->pc = 0x110c40u;
}
