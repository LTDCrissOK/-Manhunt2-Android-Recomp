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

// Function: sub_0029EF50
// Address: 0x29ef50 - 0x29efa0
void sub_0029EF50_0x29ef50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029EF50_0x29ef50");
#endif

    switch (ctx->pc) {
        case 0x29ef50u: goto label_29ef50;
        case 0x29ef54u: goto label_29ef54;
        case 0x29ef58u: goto label_29ef58;
        case 0x29ef5cu: goto label_29ef5c;
        case 0x29ef60u: goto label_29ef60;
        case 0x29ef64u: goto label_29ef64;
        case 0x29ef68u: goto label_29ef68;
        case 0x29ef6cu: goto label_29ef6c;
        case 0x29ef70u: goto label_29ef70;
        case 0x29ef74u: goto label_29ef74;
        case 0x29ef78u: goto label_29ef78;
        case 0x29ef7cu: goto label_29ef7c;
        case 0x29ef80u: goto label_29ef80;
        case 0x29ef84u: goto label_29ef84;
        case 0x29ef88u: goto label_29ef88;
        case 0x29ef8cu: goto label_29ef8c;
        case 0x29ef90u: goto label_29ef90;
        case 0x29ef94u: goto label_29ef94;
        case 0x29ef98u: goto label_29ef98;
        case 0x29ef9cu: goto label_29ef9c;
        default: break;
    }

    ctx->pc = 0x29ef50u;

label_29ef50:
    // 0x29ef50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x29ef50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_29ef54:
    // 0x29ef54: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x29ef54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_29ef58:
    // 0x29ef58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29ef58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_29ef5c:
    // 0x29ef5c: 0x8c830208  lw          $v1, 0x208($a0)
    ctx->pc = 0x29ef5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 520)));
label_29ef60:
    // 0x29ef60: 0x8c82020c  lw          $v0, 0x20C($a0)
    ctx->pc = 0x29ef60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 524)));
label_29ef64:
    // 0x29ef64: 0x651818  mult        $v1, $v1, $a1
    ctx->pc = 0x29ef64u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_29ef68:
    // 0x29ef68: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x29ef68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_29ef6c:
    // 0x29ef6c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29ef6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_29ef70:
    // 0x29ef70: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x29ef70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_29ef74:
    // 0x29ef74: 0x8c840014  lw          $a0, 0x14($a0)
    ctx->pc = 0x29ef74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_29ef78:
    // 0x29ef78: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_29ef7c:
    if (ctx->pc == 0x29EF7Cu) {
        ctx->pc = 0x29EF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EF78u;
        // 0x29ef7c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29EF80u;
        goto label_29ef80;
    }
    ctx->pc = 0x29EF78u;
    {
        const bool branch_taken_0x29ef78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x29EF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EF78u;
        // 0x29ef7c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ef78) {
            ctx->pc = 0x29EF94u;
            goto label_29ef94;
        }
    }
    ctx->pc = 0x29EF80u;
label_29ef80:
    // 0x29ef80: 0x8c830074  lw          $v1, 0x74($a0)
    ctx->pc = 0x29ef80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_29ef84:
    // 0x29ef84: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x29ef84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_29ef88:
    // 0x29ef88: 0x40f809  jalr        $v0
label_29ef8c:
    if (ctx->pc == 0x29EF8Cu) {
        ctx->pc = 0x29EF90u;
        goto label_29ef90;
    }
    ctx->pc = 0x29EF88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x29EF90u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29EF88u, 0x29EF90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29EF90u;
label_29ef90:
    // 0x29ef90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29ef90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_29ef94:
    // 0x29ef94: 0x3e00008  jr          $ra
label_29ef98:
    if (ctx->pc == 0x29EF98u) {
        ctx->pc = 0x29EF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EF94u;
        // 0x29ef98: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29EF9Cu;
        goto label_29ef9c;
    }
    ctx->pc = 0x29EF94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29EF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EF94u;
        // 0x29ef98: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29EF94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29EF9Cu;
label_29ef9c:
    // 0x29ef9c: 0x0  nop
    ctx->pc = 0x29ef9cu;
    // NOP
    ctx->pc = 0x29efa0u;
}
