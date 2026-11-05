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

// Function: sub_0017AE60
// Address: 0x17ae60 - 0x17aeb0
void sub_0017AE60_0x17ae60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017AE60_0x17ae60");
#endif

    switch (ctx->pc) {
        case 0x17aea0u: goto label_17aea0;
        default: break;
    }

    ctx->pc = 0x17ae60u;

    // 0x17ae60: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x17ae60u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x17ae64: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x17ae64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x17ae68: 0xa21018  mult        $v0, $a1, $v0
    ctx->pc = 0x17ae68u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x17ae6c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x17ae6cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ae70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17ae70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17ae74: 0x24090012  addiu       $t1, $zero, 0x12
    ctx->pc = 0x17ae74u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x17ae78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17ae78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17ae7c: 0x623021  addu        $a2, $v1, $v0
    ctx->pc = 0x17ae7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x17ae80: 0xacc90210  sw          $t1, 0x210($a2)
    ctx->pc = 0x17ae80u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 528), GPR_U32(ctx, 9));
    // 0x17ae84: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x17ae84u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ae88: 0xace00214  sw          $zero, 0x214($a3)
    ctx->pc = 0x17ae88u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 532), GPR_U32(ctx, 0));
    // 0x17ae8c: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x17ae8cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ae90: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17ae90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17ae94: 0xad000218  sw          $zero, 0x218($t0)
    ctx->pc = 0x17ae94u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 536), GPR_U32(ctx, 0));
    // 0x17ae98: 0xc05ebac  jal         func_17AEB0
    ctx->pc = 0x17AE98u;
    SET_GPR_U32(ctx, 31, 0x17AEA0u);
    ctx->pc = 0x17AE9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17AE98u;
    // 0x17ae9c: 0xac40021c  sw          $zero, 0x21C($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 540), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17AEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17AEB0u, 0x17AE98u, 0x17AEA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17AEA0u;
label_17aea0:
    // 0x17aea0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17aea0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17aea4: 0x3e00008  jr          $ra
    ctx->pc = 0x17AEA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17AEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AEA4u;
        // 0x17aea8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17AEA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17AEACu;
    // 0x17aeac: 0x0  nop
    ctx->pc = 0x17aeacu;
    // NOP
    ctx->pc = 0x17aeb0u;
}
