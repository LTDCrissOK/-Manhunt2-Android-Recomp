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

// Function: sub_003E9C10
// Address: 0x3e9c10 - 0x3e9d48
void sub_003E9C10_0x3e9c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E9C10_0x3e9c10");
#endif

    switch (ctx->pc) {
        case 0x3e9c10u: goto label_3e9c10;
        case 0x3e9c14u: goto label_3e9c14;
        case 0x3e9c18u: goto label_3e9c18;
        case 0x3e9c1cu: goto label_3e9c1c;
        case 0x3e9c20u: goto label_3e9c20;
        case 0x3e9c24u: goto label_3e9c24;
        case 0x3e9c28u: goto label_3e9c28;
        case 0x3e9c2cu: goto label_3e9c2c;
        case 0x3e9c30u: goto label_3e9c30;
        case 0x3e9c34u: goto label_3e9c34;
        case 0x3e9c38u: goto label_3e9c38;
        case 0x3e9c3cu: goto label_3e9c3c;
        case 0x3e9c40u: goto label_3e9c40;
        case 0x3e9c44u: goto label_3e9c44;
        case 0x3e9c48u: goto label_3e9c48;
        case 0x3e9c4cu: goto label_3e9c4c;
        case 0x3e9c50u: goto label_3e9c50;
        case 0x3e9c54u: goto label_3e9c54;
        case 0x3e9c58u: goto label_3e9c58;
        case 0x3e9c5cu: goto label_3e9c5c;
        case 0x3e9c60u: goto label_3e9c60;
        case 0x3e9c64u: goto label_3e9c64;
        case 0x3e9c68u: goto label_3e9c68;
        case 0x3e9c6cu: goto label_3e9c6c;
        case 0x3e9c70u: goto label_3e9c70;
        case 0x3e9c74u: goto label_3e9c74;
        case 0x3e9c78u: goto label_3e9c78;
        case 0x3e9c7cu: goto label_3e9c7c;
        case 0x3e9c80u: goto label_3e9c80;
        case 0x3e9c84u: goto label_3e9c84;
        case 0x3e9c88u: goto label_3e9c88;
        case 0x3e9c8cu: goto label_3e9c8c;
        case 0x3e9c90u: goto label_3e9c90;
        case 0x3e9c94u: goto label_3e9c94;
        case 0x3e9c98u: goto label_3e9c98;
        case 0x3e9c9cu: goto label_3e9c9c;
        case 0x3e9ca0u: goto label_3e9ca0;
        case 0x3e9ca4u: goto label_3e9ca4;
        case 0x3e9ca8u: goto label_3e9ca8;
        case 0x3e9cacu: goto label_3e9cac;
        case 0x3e9cb0u: goto label_3e9cb0;
        case 0x3e9cb4u: goto label_3e9cb4;
        case 0x3e9cb8u: goto label_3e9cb8;
        case 0x3e9cbcu: goto label_3e9cbc;
        case 0x3e9cc0u: goto label_3e9cc0;
        case 0x3e9cc4u: goto label_3e9cc4;
        case 0x3e9cc8u: goto label_3e9cc8;
        case 0x3e9cccu: goto label_3e9ccc;
        case 0x3e9cd0u: goto label_3e9cd0;
        case 0x3e9cd4u: goto label_3e9cd4;
        case 0x3e9cd8u: goto label_3e9cd8;
        case 0x3e9cdcu: goto label_3e9cdc;
        case 0x3e9ce0u: goto label_3e9ce0;
        case 0x3e9ce4u: goto label_3e9ce4;
        case 0x3e9ce8u: goto label_3e9ce8;
        case 0x3e9cecu: goto label_3e9cec;
        case 0x3e9cf0u: goto label_3e9cf0;
        case 0x3e9cf4u: goto label_3e9cf4;
        case 0x3e9cf8u: goto label_3e9cf8;
        case 0x3e9cfcu: goto label_3e9cfc;
        case 0x3e9d00u: goto label_3e9d00;
        case 0x3e9d04u: goto label_3e9d04;
        case 0x3e9d08u: goto label_3e9d08;
        case 0x3e9d0cu: goto label_3e9d0c;
        case 0x3e9d10u: goto label_3e9d10;
        case 0x3e9d14u: goto label_3e9d14;
        case 0x3e9d18u: goto label_3e9d18;
        case 0x3e9d1cu: goto label_3e9d1c;
        case 0x3e9d20u: goto label_3e9d20;
        case 0x3e9d24u: goto label_3e9d24;
        case 0x3e9d28u: goto label_3e9d28;
        case 0x3e9d2cu: goto label_3e9d2c;
        case 0x3e9d30u: goto label_3e9d30;
        case 0x3e9d34u: goto label_3e9d34;
        case 0x3e9d38u: goto label_3e9d38;
        case 0x3e9d3cu: goto label_3e9d3c;
        case 0x3e9d40u: goto label_3e9d40;
        case 0x3e9d44u: goto label_3e9d44;
        default: break;
    }

    ctx->pc = 0x3e9c10u;

label_3e9c10:
    // 0x3e9c10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3e9c10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3e9c14:
    // 0x3e9c14: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3e9c14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_3e9c18:
    // 0x3e9c18: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3e9c18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_3e9c1c:
    // 0x3e9c1c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3e9c1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3e9c20:
    // 0x3e9c20: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3e9c20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_3e9c24:
    // 0x3e9c24: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3e9c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_3e9c28:
    // 0x3e9c28: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3e9c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3e9c2c:
    // 0x3e9c2c: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_3e9c30:
    if (ctx->pc == 0x3E9C30u) {
        ctx->pc = 0x3E9C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9C2Cu;
        // 0x3e9c30: 0x2412001c  addiu       $s2, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9C34u;
        goto label_3e9c34;
    }
    ctx->pc = 0x3E9C2Cu;
    {
        const bool branch_taken_0x3e9c2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E9C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9C2Cu;
        // 0x3e9c30: 0x2412001c  addiu       $s2, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9c2c) {
            ctx->pc = 0x3E9CACu;
            goto label_3e9cac;
        }
    }
    ctx->pc = 0x3E9C34u;
label_3e9c34:
    // 0x3e9c34: 0x0  nop
    ctx->pc = 0x3e9c34u;
    // NOP
label_3e9c38:
    // 0x3e9c38: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3e9c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3e9c3c:
    // 0x3e9c3c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3e9c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3e9c40:
    // 0x3e9c40: 0x50600016  beql        $v1, $zero, . + 4 + (0x16 << 2)
label_3e9c44:
    if (ctx->pc == 0x3E9C44u) {
        ctx->pc = 0x3E9C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9C40u;
        // 0x3e9c44: 0x8c500008  lw          $s0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9C48u;
        goto label_3e9c48;
    }
    ctx->pc = 0x3E9C40u;
    {
        const bool branch_taken_0x3e9c40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e9c40) {
            ctx->pc = 0x3E9C44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E9C40u;
            // 0x3e9c44: 0x8c500008  lw          $s0, 0x8($v0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E9C9Cu;
            goto label_3e9c9c;
        }
    }
    ctx->pc = 0x3E9C48u;
label_3e9c48:
    // 0x3e9c48: 0x8c62fff0  lw          $v0, -0x10($v1)
    ctx->pc = 0x3e9c48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967280)));
label_3e9c4c:
    // 0x3e9c4c: 0x522018  mult        $a0, $v0, $s2
    ctx->pc = 0x3e9c4cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_3e9c50:
    // 0x3e9c50: 0x838021  addu        $s0, $a0, $v1
    ctx->pc = 0x3e9c50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_3e9c54:
    // 0x3e9c54: 0x5070000c  beql        $v1, $s0, . + 4 + (0xC << 2)
label_3e9c58:
    if (ctx->pc == 0x3E9C58u) {
        ctx->pc = 0x3E9C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9C54u;
        // 0x3e9c58: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9C5Cu;
        goto label_3e9c5c;
    }
    ctx->pc = 0x3E9C54u;
    {
        const bool branch_taken_0x3e9c54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        if (branch_taken_0x3e9c54) {
            ctx->pc = 0x3E9C58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E9C54u;
            // 0x3e9c58: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E9C88u;
            goto label_3e9c88;
        }
    }
    ctx->pc = 0x3E9C5Cu;
label_3e9c5c:
    // 0x3e9c5c: 0x2610ffe4  addiu       $s0, $s0, -0x1C
    ctx->pc = 0x3e9c5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967268));
label_3e9c60:
    // 0x3e9c60: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3e9c60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e9c64:
    // 0x3e9c64: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x3e9c64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3e9c68:
    // 0x3e9c68: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x3e9c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_3e9c6c:
    // 0x3e9c6c: 0x40f809  jalr        $v0
label_3e9c70:
    if (ctx->pc == 0x3E9C70u) {
        ctx->pc = 0x3E9C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9C6Cu;
        // 0x3e9c70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9C74u;
        goto label_3e9c74;
    }
    ctx->pc = 0x3E9C6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3E9C74u);
        ctx->pc = 0x3E9C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9C6Cu;
        // 0x3e9c70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E9C6Cu, 0x3E9C74u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E9C74u;
label_3e9c74:
    // 0x3e9c74: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3e9c74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3e9c78:
    // 0x3e9c78: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3e9c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3e9c7c:
    // 0x3e9c7c: 0x1450fff8  bne         $v0, $s0, . + 4 + (-0x8 << 2)
label_3e9c80:
    if (ctx->pc == 0x3E9C80u) {
        ctx->pc = 0x3E9C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9C7Cu;
        // 0x3e9c80: 0x2610ffe4  addiu       $s0, $s0, -0x1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967268));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9C84u;
        goto label_3e9c84;
    }
    ctx->pc = 0x3E9C7Cu;
    {
        const bool branch_taken_0x3e9c7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x3E9C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9C7Cu;
        // 0x3e9c80: 0x2610ffe4  addiu       $s0, $s0, -0x1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967268));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9c7c) {
            ctx->pc = 0x3E9C60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e9c60;
        }
    }
    ctx->pc = 0x3E9C84u;
label_3e9c84:
    // 0x3e9c84: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3e9c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3e9c88:
    // 0x3e9c88: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3e9c88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3e9c8c:
    // 0x3e9c8c: 0xc0f528a  jal         func_3D4A28
label_3e9c90:
    if (ctx->pc == 0x3E9C90u) {
        ctx->pc = 0x3E9C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9C8Cu;
        // 0x3e9c90: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9C94u;
        goto label_3e9c94;
    }
    ctx->pc = 0x3E9C8Cu;
    SET_GPR_U32(ctx, 31, 0x3E9C94u);
    ctx->pc = 0x3E9C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E9C8Cu;
    // 0x3e9c90: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x3E9C8Cu, 0x3E9C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E9C94u;
label_3e9c94:
    // 0x3e9c94: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3e9c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3e9c98:
    // 0x3e9c98: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x3e9c98u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3e9c9c:
    // 0x3e9c9c: 0xc0f5222  jal         func_3D4888
label_3e9ca0:
    if (ctx->pc == 0x3E9CA0u) {
        ctx->pc = 0x3E9CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9C9Cu;
        // 0x3e9ca0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9CA4u;
        goto label_3e9ca4;
    }
    ctx->pc = 0x3E9C9Cu;
    SET_GPR_U32(ctx, 31, 0x3E9CA4u);
    ctx->pc = 0x3E9CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E9C9Cu;
    // 0x3e9ca0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3E9C9Cu, 0x3E9CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E9CA4u;
label_3e9ca4:
    // 0x3e9ca4: 0x1600ffe4  bnez        $s0, . + 4 + (-0x1C << 2)
label_3e9ca8:
    if (ctx->pc == 0x3E9CA8u) {
        ctx->pc = 0x3E9CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9CA4u;
        // 0x3e9ca8: 0xae300000  sw          $s0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9CACu;
        goto label_3e9cac;
    }
    ctx->pc = 0x3E9CA4u;
    {
        const bool branch_taken_0x3e9ca4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E9CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9CA4u;
        // 0x3e9ca8: 0xae300000  sw          $s0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9ca4) {
            ctx->pc = 0x3E9C38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e9c38;
        }
    }
    ctx->pc = 0x3E9CACu;
label_3e9cac:
    // 0x3e9cac: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3e9cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3e9cb0:
    // 0x3e9cb0: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_3e9cb4:
    if (ctx->pc == 0x3E9CB4u) {
        ctx->pc = 0x3E9CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9CB0u;
        // 0x3e9cb4: 0x2412001c  addiu       $s2, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9CB8u;
        goto label_3e9cb8;
    }
    ctx->pc = 0x3E9CB0u;
    {
        const bool branch_taken_0x3e9cb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E9CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9CB0u;
        // 0x3e9cb4: 0x2412001c  addiu       $s2, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9cb0) {
            ctx->pc = 0x3E9D2Cu;
            goto label_3e9d2c;
        }
    }
    ctx->pc = 0x3E9CB8u;
label_3e9cb8:
    // 0x3e9cb8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3e9cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3e9cbc:
    // 0x3e9cbc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3e9cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3e9cc0:
    // 0x3e9cc0: 0x50600016  beql        $v1, $zero, . + 4 + (0x16 << 2)
label_3e9cc4:
    if (ctx->pc == 0x3E9CC4u) {
        ctx->pc = 0x3E9CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9CC0u;
        // 0x3e9cc4: 0x8c500008  lw          $s0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9CC8u;
        goto label_3e9cc8;
    }
    ctx->pc = 0x3E9CC0u;
    {
        const bool branch_taken_0x3e9cc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e9cc0) {
            ctx->pc = 0x3E9CC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E9CC0u;
            // 0x3e9cc4: 0x8c500008  lw          $s0, 0x8($v0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E9D1Cu;
            goto label_3e9d1c;
        }
    }
    ctx->pc = 0x3E9CC8u;
label_3e9cc8:
    // 0x3e9cc8: 0x8c62fff0  lw          $v0, -0x10($v1)
    ctx->pc = 0x3e9cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967280)));
label_3e9ccc:
    // 0x3e9ccc: 0x522018  mult        $a0, $v0, $s2
    ctx->pc = 0x3e9cccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_3e9cd0:
    // 0x3e9cd0: 0x838021  addu        $s0, $a0, $v1
    ctx->pc = 0x3e9cd0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_3e9cd4:
    // 0x3e9cd4: 0x5070000c  beql        $v1, $s0, . + 4 + (0xC << 2)
label_3e9cd8:
    if (ctx->pc == 0x3E9CD8u) {
        ctx->pc = 0x3E9CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9CD4u;
        // 0x3e9cd8: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9CDCu;
        goto label_3e9cdc;
    }
    ctx->pc = 0x3E9CD4u;
    {
        const bool branch_taken_0x3e9cd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        if (branch_taken_0x3e9cd4) {
            ctx->pc = 0x3E9CD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3E9CD4u;
            // 0x3e9cd8: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3E9D08u;
            goto label_3e9d08;
        }
    }
    ctx->pc = 0x3E9CDCu;
label_3e9cdc:
    // 0x3e9cdc: 0x2610ffe4  addiu       $s0, $s0, -0x1C
    ctx->pc = 0x3e9cdcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967268));
label_3e9ce0:
    // 0x3e9ce0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3e9ce0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e9ce4:
    // 0x3e9ce4: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x3e9ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3e9ce8:
    // 0x3e9ce8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x3e9ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_3e9cec:
    // 0x3e9cec: 0x40f809  jalr        $v0
label_3e9cf0:
    if (ctx->pc == 0x3E9CF0u) {
        ctx->pc = 0x3E9CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9CECu;
        // 0x3e9cf0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9CF4u;
        goto label_3e9cf4;
    }
    ctx->pc = 0x3E9CECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3E9CF4u);
        ctx->pc = 0x3E9CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9CECu;
        // 0x3e9cf0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E9CECu, 0x3E9CF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E9CF4u;
label_3e9cf4:
    // 0x3e9cf4: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x3e9cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3e9cf8:
    // 0x3e9cf8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3e9cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3e9cfc:
    // 0x3e9cfc: 0x1450fff8  bne         $v0, $s0, . + 4 + (-0x8 << 2)
label_3e9d00:
    if (ctx->pc == 0x3E9D00u) {
        ctx->pc = 0x3E9D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9CFCu;
        // 0x3e9d00: 0x2610ffe4  addiu       $s0, $s0, -0x1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967268));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9D04u;
        goto label_3e9d04;
    }
    ctx->pc = 0x3E9CFCu;
    {
        const bool branch_taken_0x3e9cfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x3E9D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9CFCu;
        // 0x3e9d00: 0x2610ffe4  addiu       $s0, $s0, -0x1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967268));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9cfc) {
            ctx->pc = 0x3E9CE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e9ce0;
        }
    }
    ctx->pc = 0x3E9D04u;
label_3e9d04:
    // 0x3e9d04: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3e9d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3e9d08:
    // 0x3e9d08: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3e9d08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3e9d0c:
    // 0x3e9d0c: 0xc0f528a  jal         func_3D4A28
label_3e9d10:
    if (ctx->pc == 0x3E9D10u) {
        ctx->pc = 0x3E9D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9D0Cu;
        // 0x3e9d10: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9D14u;
        goto label_3e9d14;
    }
    ctx->pc = 0x3E9D0Cu;
    SET_GPR_U32(ctx, 31, 0x3E9D14u);
    ctx->pc = 0x3E9D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E9D0Cu;
    // 0x3e9d10: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x3E9D0Cu, 0x3E9D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E9D14u;
label_3e9d14:
    // 0x3e9d14: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3e9d14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3e9d18:
    // 0x3e9d18: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x3e9d18u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3e9d1c:
    // 0x3e9d1c: 0xc0f5222  jal         func_3D4888
label_3e9d20:
    if (ctx->pc == 0x3E9D20u) {
        ctx->pc = 0x3E9D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9D1Cu;
        // 0x3e9d20: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9D24u;
        goto label_3e9d24;
    }
    ctx->pc = 0x3E9D1Cu;
    SET_GPR_U32(ctx, 31, 0x3E9D24u);
    ctx->pc = 0x3E9D20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E9D1Cu;
    // 0x3e9d20: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3E9D1Cu, 0x3E9D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E9D24u;
label_3e9d24:
    // 0x3e9d24: 0x1600ffe4  bnez        $s0, . + 4 + (-0x1C << 2)
label_3e9d28:
    if (ctx->pc == 0x3E9D28u) {
        ctx->pc = 0x3E9D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9D24u;
        // 0x3e9d28: 0xae300004  sw          $s0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9D2Cu;
        goto label_3e9d2c;
    }
    ctx->pc = 0x3E9D24u;
    {
        const bool branch_taken_0x3e9d24 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E9D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9D24u;
        // 0x3e9d28: 0xae300004  sw          $s0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e9d24) {
            ctx->pc = 0x3E9CB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3e9cb8;
        }
    }
    ctx->pc = 0x3E9D2Cu;
label_3e9d2c:
    // 0x3e9d2c: 0xae200048  sw          $zero, 0x48($s1)
    ctx->pc = 0x3e9d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 0));
label_3e9d30:
    // 0x3e9d30: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3e9d30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3e9d34:
    // 0x3e9d34: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3e9d34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_3e9d38:
    // 0x3e9d38: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3e9d38u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3e9d3c:
    // 0x3e9d3c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3e9d3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_3e9d40:
    // 0x3e9d40: 0x3e00008  jr          $ra
label_3e9d44:
    if (ctx->pc == 0x3E9D44u) {
        ctx->pc = 0x3E9D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9D40u;
        // 0x3e9d44: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E9D48u;
        goto label_fallthrough_0x3e9d40;
    }
    ctx->pc = 0x3E9D40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E9D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E9D40u;
        // 0x3e9d44: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E9D40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3e9d40:
    ctx->pc = 0x3E9D48u;
}
