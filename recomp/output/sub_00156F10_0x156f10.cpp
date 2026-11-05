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

// Function: sub_00156F10
// Address: 0x156f10 - 0x156f60
void sub_00156F10_0x156f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00156F10_0x156f10");
#endif

    switch (ctx->pc) {
        case 0x156f50u: goto label_156f50;
        default: break;
    }

    ctx->pc = 0x156f10u;

    // 0x156f10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x156f10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x156f14: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x156f14u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x156f18: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x156f18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x156f1c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x156f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x156f20: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x156f20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
    // 0x156f24: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x156f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x156f28: 0x24639a08  addiu       $v1, $v1, -0x65F8
    ctx->pc = 0x156f28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941192));
    // 0x156f2c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x156f2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x156f30: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x156f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x156f34: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x156f34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x156f38: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x156f38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x156f3c: 0x8c640108  lw          $a0, 0x108($v1)
    ctx->pc = 0x156f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
    // 0x156f40: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x156F40u;
    {
        const bool branch_taken_0x156f40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x156F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156F40u;
        // 0x156f44: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156f40) {
            ctx->pc = 0x156F54u;
            goto label_156f54;
        }
    }
    ctx->pc = 0x156F48u;
    // 0x156f48: 0xc0cda26  jal         func_336898
    ctx->pc = 0x156F48u;
    SET_GPR_U32(ctx, 31, 0x156F50u);
    ctx->pc = 0x156F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156F48u;
    // 0x156f4c: 0x2405003b  addiu       $a1, $zero, 0x3B (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336898u, 0x156F48u, 0x156F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x156F50u;
label_156f50:
    // 0x156f50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x156f50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_156f54:
    // 0x156f54: 0x3e00008  jr          $ra
    ctx->pc = 0x156F54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x156F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156F54u;
        // 0x156f58: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x156F54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x156F5Cu;
    // 0x156f5c: 0x0  nop
    ctx->pc = 0x156f5cu;
    // NOP
    ctx->pc = 0x156f60u;
}
