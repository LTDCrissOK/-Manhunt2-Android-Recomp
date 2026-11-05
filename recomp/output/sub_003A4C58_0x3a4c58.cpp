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

// Function: sub_003A4C58
// Address: 0x3a4c58 - 0x3a4c90
void sub_003A4C58_0x3a4c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A4C58_0x3a4c58");
#endif

    ctx->pc = 0x3a4c58u;

    // 0x3a4c58: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x3a4c58u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x3a4c5c: 0x42603  sra         $a0, $a0, 24
    ctx->pc = 0x3a4c5cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 24));
    // 0x3a4c60: 0x2482ff9f  addiu       $v0, $a0, -0x61
    ctx->pc = 0x3a4c60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967199));
    // 0x3a4c64: 0x2483ffe0  addiu       $v1, $a0, -0x20
    ctx->pc = 0x3a4c64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967264));
    // 0x3a4c68: 0x2c42001a  sltiu       $v0, $v0, 0x1A
    ctx->pc = 0x3a4c68u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)26) ? 1 : 0);
    // 0x3a4c6c: 0x32e00  sll         $a1, $v1, 24
    ctx->pc = 0x3a4c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x3a4c70: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3A4C70u;
    {
        const bool branch_taken_0x3a4c70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A4C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4C70u;
        // 0x3a4c74: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4c70) {
            ctx->pc = 0x3A4C7Cu;
            goto label_3a4c7c;
        }
    }
    ctx->pc = 0x3A4C78u;
    // 0x3a4c78: 0x52603  sra         $a0, $a1, 24
    ctx->pc = 0x3a4c78u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 5), 24));
label_3a4c7c:
    // 0x3a4c7c: 0x3863005c  xori        $v1, $v1, 0x5C
    ctx->pc = 0x3a4c7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)92);
    // 0x3a4c80: 0x2402002f  addiu       $v0, $zero, 0x2F
    ctx->pc = 0x3a4c80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x3a4c84: 0x3e00008  jr          $ra
    ctx->pc = 0x3A4C84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A4C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4C84u;
        // 0x3a4c88: 0x83100b  movn        $v0, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A4C84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A4C8Cu;
    // 0x3a4c8c: 0x0  nop
    ctx->pc = 0x3a4c8cu;
    // NOP
    ctx->pc = 0x3a4c90u;
}
