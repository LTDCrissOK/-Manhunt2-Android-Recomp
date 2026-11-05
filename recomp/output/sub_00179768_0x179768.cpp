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

// Function: sub_00179768
// Address: 0x179768 - 0x1797a8
void sub_00179768_0x179768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00179768_0x179768");
#endif

    switch (ctx->pc) {
        case 0x17979cu: goto label_17979c;
        default: break;
    }

    ctx->pc = 0x179768u;

    // 0x179768: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x179768u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17976c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17976cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x179770: 0x90820009  lbu         $v0, 0x9($a0)
    ctx->pc = 0x179770u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 9)));
    // 0x179774: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x179774u;
    {
        const bool branch_taken_0x179774 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x179778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179774u;
        // 0x179778: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179774) {
            ctx->pc = 0x17979Cu;
            goto label_17979c;
        }
    }
    ctx->pc = 0x17977Cu;
    // 0x17977c: 0x90830531  lbu         $v1, 0x531($a0)
    ctx->pc = 0x17977cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1329)));
    // 0x179780: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x179780u;
    {
        const bool branch_taken_0x179780 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x179784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179780u;
        // 0x179784: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179780) {
            ctx->pc = 0x17979Cu;
            goto label_17979c;
        }
    }
    ctx->pc = 0x179788u;
    // 0x179788: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x179788u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x17978c: 0x432818  mult        $a1, $v0, $v1
    ctx->pc = 0x17978cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x179790: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x179790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x179794: 0xc05d5c0  jal         func_175700
    ctx->pc = 0x179794u;
    SET_GPR_U32(ctx, 31, 0x17979Cu);
    ctx->pc = 0x179798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179794u;
    // 0x179798: 0x8c440214  lw          $a0, 0x214($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 532)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175700u, 0x179794u, 0x17979Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17979Cu;
label_17979c:
    // 0x17979c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17979cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1797a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1797A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1797A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1797A0u;
        // 0x1797a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1797A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1797A8u;
}
