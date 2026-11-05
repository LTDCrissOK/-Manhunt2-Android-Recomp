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

// Function: sub_00207A48
// Address: 0x207a48 - 0x207ab0
void sub_00207A48_0x207a48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00207A48_0x207a48");
#endif

    switch (ctx->pc) {
        case 0x207a48u: goto label_207a48;
        case 0x207a4cu: goto label_207a4c;
        case 0x207a50u: goto label_207a50;
        case 0x207a54u: goto label_207a54;
        case 0x207a58u: goto label_207a58;
        case 0x207a5cu: goto label_207a5c;
        case 0x207a60u: goto label_207a60;
        case 0x207a64u: goto label_207a64;
        case 0x207a68u: goto label_207a68;
        case 0x207a6cu: goto label_207a6c;
        case 0x207a70u: goto label_207a70;
        case 0x207a74u: goto label_207a74;
        case 0x207a78u: goto label_207a78;
        case 0x207a7cu: goto label_207a7c;
        case 0x207a80u: goto label_207a80;
        case 0x207a84u: goto label_207a84;
        case 0x207a88u: goto label_207a88;
        case 0x207a8cu: goto label_207a8c;
        case 0x207a90u: goto label_207a90;
        case 0x207a94u: goto label_207a94;
        case 0x207a98u: goto label_207a98;
        case 0x207a9cu: goto label_207a9c;
        case 0x207aa0u: goto label_207aa0;
        case 0x207aa4u: goto label_207aa4;
        case 0x207aa8u: goto label_207aa8;
        case 0x207aacu: goto label_207aac;
        default: break;
    }

    ctx->pc = 0x207a48u;

label_207a48:
    // 0x207a48: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x207a48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_207a4c:
    // 0x207a4c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x207a4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_207a50:
    // 0x207a50: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x207a50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_207a54:
    // 0x207a54: 0x24900018  addiu       $s0, $a0, 0x18
    ctx->pc = 0x207a54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
label_207a58:
    // 0x207a58: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x207a58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_207a5c:
    // 0x207a5c: 0x24910008  addiu       $s1, $a0, 0x8
    ctx->pc = 0x207a5cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_207a60:
    // 0x207a60: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x207a60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_207a64:
    // 0x207a64: 0x24120003  addiu       $s2, $zero, 0x3
    ctx->pc = 0x207a64u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_207a68:
    // 0x207a68: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x207a68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_207a6c:
    // 0x207a6c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_207a70:
    if (ctx->pc == 0x207A70u) {
        ctx->pc = 0x207A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207A6Cu;
        // 0x207a70: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207A74u;
        goto label_207a74;
    }
    ctx->pc = 0x207A6Cu;
    {
        const bool branch_taken_0x207a6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x207A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207A6Cu;
        // 0x207a70: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207a6c) {
            ctx->pc = 0x207A8Cu;
            goto label_207a8c;
        }
    }
    ctx->pc = 0x207A74u;
label_207a74:
    // 0x207a74: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x207a74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_207a78:
    // 0x207a78: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x207a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_207a7c:
    // 0x207a7c: 0x8c650010  lw          $a1, 0x10($v1)
    ctx->pc = 0x207a7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_207a80:
    // 0x207a80: 0xa0f809  jalr        $a1
label_207a84:
    if (ctx->pc == 0x207A84u) {
        ctx->pc = 0x207A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207A80u;
        // 0x207a84: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207A88u;
        goto label_207a88;
    }
    ctx->pc = 0x207A80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x207A88u);
        ctx->pc = 0x207A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207A80u;
        // 0x207a84: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x207A80u, 0x207A88u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x207A88u;
label_207a88:
    // 0x207a88: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x207a88u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
label_207a8c:
    // 0x207a8c: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x207a8cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_207a90:
    // 0x207a90: 0x641fff5  bgez        $s2, . + 4 + (-0xB << 2)
label_207a94:
    if (ctx->pc == 0x207A94u) {
        ctx->pc = 0x207A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207A90u;
        // 0x207a94: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207A98u;
        goto label_207a98;
    }
    ctx->pc = 0x207A90u;
    {
        const bool branch_taken_0x207a90 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x207A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207A90u;
        // 0x207a94: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207a90) {
            ctx->pc = 0x207A68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_207a68;
        }
    }
    ctx->pc = 0x207A98u;
label_207a98:
    // 0x207a98: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x207a98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_207a9c:
    // 0x207a9c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x207a9cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_207aa0:
    // 0x207aa0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x207aa0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_207aa4:
    // 0x207aa4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x207aa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_207aa8:
    // 0x207aa8: 0x3e00008  jr          $ra
label_207aac:
    if (ctx->pc == 0x207AACu) {
        ctx->pc = 0x207AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207AA8u;
        // 0x207aac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x207AB0u;
        goto label_fallthrough_0x207aa8;
    }
    ctx->pc = 0x207AA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x207AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x207AA8u;
        // 0x207aac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x207AA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x207aa8:
    ctx->pc = 0x207AB0u;
}
