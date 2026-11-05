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

// Function: sub_00110C40
// Address: 0x110c40 - 0x110c80
void sub_00110C40_0x110c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00110C40_0x110c40");
#endif

    switch (ctx->pc) {
        case 0x110c70u: goto label_110c70;
        default: break;
    }

    ctx->pc = 0x110c40u;

    // 0x110c40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x110c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x110c44: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x110c44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x110c48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x110c48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x110c4c: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x110c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x110c50: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x110c50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x110c54: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x110c54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x110c58: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x110c58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x110c5c: 0x8c440108  lw          $a0, 0x108($v0)
    ctx->pc = 0x110c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x110c60: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x110C60u;
    {
        const bool branch_taken_0x110c60 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x110C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110C60u;
        // 0x110c64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110c60) {
            ctx->pc = 0x110C70u;
            goto label_110c70;
        }
    }
    ctx->pc = 0x110C68u;
    // 0x110c68: 0xc09525e  jal         func_254978
    ctx->pc = 0x110C68u;
    SET_GPR_U32(ctx, 31, 0x110C70u);
    ctx->pc = 0x254978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254978u, 0x110C68u, 0x110C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x110C70u;
label_110c70:
    // 0x110c70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x110c70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x110c74: 0x3e00008  jr          $ra
    ctx->pc = 0x110C74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x110C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110C74u;
        // 0x110c78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x110C74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x110C7Cu;
    // 0x110c7c: 0x0  nop
    ctx->pc = 0x110c7cu;
    // NOP
    ctx->pc = 0x110c80u;
}
