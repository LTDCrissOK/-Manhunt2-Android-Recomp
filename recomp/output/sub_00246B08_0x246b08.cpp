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

// Function: sub_00246B08
// Address: 0x246b08 - 0x246ba0
void sub_00246B08_0x246b08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00246B08_0x246b08");
#endif

    switch (ctx->pc) {
        case 0x246b20u: goto label_246b20;
        case 0x246b30u: goto label_246b30;
        case 0x246b68u: goto label_246b68;
        case 0x246b78u: goto label_246b78;
        case 0x246b8cu: goto label_246b8c;
        default: break;
    }

    ctx->pc = 0x246b08u;

    // 0x246b08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x246b08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x246b0c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x246b0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x246b10: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x246b10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x246b14: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x246b14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x246b18: 0xc0899bc  jal         func_2266F0
    ctx->pc = 0x246B18u;
    SET_GPR_U32(ctx, 31, 0x246B20u);
    ctx->pc = 0x246B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246B18u;
    // 0x246b1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x246B18u, 0x246B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246B20u;
label_246b20:
    // 0x246b20: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x246B20u;
    {
        const bool branch_taken_0x246b20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x246b20) {
            ctx->pc = 0x246B24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x246B20u;
            // 0x246b24: 0x8e040338  lw          $a0, 0x338($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 824)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x246B34u;
            goto label_246b34;
        }
    }
    ctx->pc = 0x246B28u;
    // 0x246b28: 0xc098514  jal         func_261450
    ctx->pc = 0x246B28u;
    SET_GPR_U32(ctx, 31, 0x246B30u);
    ctx->pc = 0x246B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246B28u;
    // 0x246b2c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261450u, 0x246B28u, 0x246B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246B30u;
label_246b30:
    // 0x246b30: 0x8e040338  lw          $a0, 0x338($s0)
    ctx->pc = 0x246b30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 824)));
label_246b34:
    // 0x246b34: 0x8c850088  lw          $a1, 0x88($a0)
    ctx->pc = 0x246b34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
    // 0x246b38: 0x38a20003  xori        $v0, $a1, 0x3
    ctx->pc = 0x246b38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)3);
    // 0x246b3c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x246B3Cu;
    {
        const bool branch_taken_0x246b3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x246B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246B3Cu;
        // 0x246b40: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246b3c) {
            ctx->pc = 0x246B58u;
            goto label_246b58;
        }
    }
    ctx->pc = 0x246B44u;
    // 0x246b44: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x246b44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x246b48: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x246b48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x246b4c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x246b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x246b50: 0x28630046  slti        $v1, $v1, 0x46
    ctx->pc = 0x246b50u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)70) ? 1 : 0);
    // 0x246b54: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x246b54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_246b58:
    // 0x246b58: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x246B58u;
    {
        const bool branch_taken_0x246b58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x246b58) {
            ctx->pc = 0x246B70u;
            goto label_246b70;
        }
    }
    ctx->pc = 0x246B60u;
    // 0x246b60: 0xc06be94  jal         func_1AFA50
    ctx->pc = 0x246B60u;
    SET_GPR_U32(ctx, 31, 0x246B68u);
    ctx->pc = 0x1AFA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AFA50u, 0x246B60u, 0x246B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246B68u;
label_246b68:
    // 0x246b68: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x246B68u;
    {
        const bool branch_taken_0x246b68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x246b68) {
            ctx->pc = 0x246B78u;
            goto label_246b78;
        }
    }
    ctx->pc = 0x246B70u;
label_246b70:
    // 0x246b70: 0xc06be7c  jal         func_1AF9F0
    ctx->pc = 0x246B70u;
    SET_GPR_U32(ctx, 31, 0x246B78u);
    ctx->pc = 0x1AF9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF9F0u, 0x246B70u, 0x246B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246B78u;
label_246b78:
    // 0x246b78: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x246B78u;
    {
        const bool branch_taken_0x246b78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x246b78) {
            ctx->pc = 0x246B7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x246B78u;
            // 0x246b7c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x246B90u;
            goto label_246b90;
        }
    }
    ctx->pc = 0x246B80u;
    // 0x246b80: 0x8e040338  lw          $a0, 0x338($s0)
    ctx->pc = 0x246b80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 824)));
    // 0x246b84: 0xc06bfc8  jal         func_1AFF20
    ctx->pc = 0x246B84u;
    SET_GPR_U32(ctx, 31, 0x246B8Cu);
    ctx->pc = 0x246B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246B84u;
    // 0x246b88: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AFF20u, 0x246B84u, 0x246B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x246B8Cu;
label_246b8c:
    // 0x246b8c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x246b8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_246b90:
    // 0x246b90: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x246b90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x246b94: 0x3e00008  jr          $ra
    ctx->pc = 0x246B94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x246B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246B94u;
        // 0x246b98: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x246B94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x246B9Cu;
    // 0x246b9c: 0x0  nop
    ctx->pc = 0x246b9cu;
    // NOP
    ctx->pc = 0x246ba0u;
}
