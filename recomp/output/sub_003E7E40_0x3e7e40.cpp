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

// Function: sub_003E7E40
// Address: 0x3e7e40 - 0x3e7e80
void sub_003E7E40_0x3e7e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E7E40_0x3e7e40");
#endif

    ctx->pc = 0x3e7e40u;

    // 0x3e7e40: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x3e7e40u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3e7e44: 0x21342  srl         $v0, $v0, 13
    ctx->pc = 0x3e7e44u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 13));
    // 0x3e7e48: 0x3e00008  jr          $ra
    ctx->pc = 0x3E7E48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E7E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7E48u;
        // 0x3e7e4c: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E7E48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E7E50u;
    // 0x3e7e50: 0x94840000  lhu         $a0, 0x0($a0)
    ctx->pc = 0x3e7e50u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3e7e54: 0x30824000  andi        $v0, $a0, 0x4000
    ctx->pc = 0x3e7e54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16384);
    // 0x3e7e58: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3E7E58u;
    {
        const bool branch_taken_0x3e7e58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E7E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7E58u;
        // 0x3e7e5c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e7e58) {
            ctx->pc = 0x3E7E74u;
            goto label_3e7e74;
        }
    }
    ctx->pc = 0x3E7E60u;
    // 0x3e7e60: 0x41400  sll         $v0, $a0, 16
    ctx->pc = 0x3e7e60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x3e7e64: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x3e7e64u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x3e7e68: 0x38424080  xori        $v0, $v0, 0x4080
    ctx->pc = 0x3e7e68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)16512);
    // 0x3e7e6c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x3e7e6cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3e7e70: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3e7e70u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e7e74:
    // 0x3e7e74: 0x3e00008  jr          $ra
    ctx->pc = 0x3E7E74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E7E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E7E74u;
        // 0x3e7e78: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E7E74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E7E7Cu;
    // 0x3e7e7c: 0x0  nop
    ctx->pc = 0x3e7e7cu;
    // NOP
    ctx->pc = 0x3e7e80u;
}
