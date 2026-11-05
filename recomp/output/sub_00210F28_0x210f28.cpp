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

// Function: sub_00210F28
// Address: 0x210f28 - 0x210fa8
void sub_00210F28_0x210f28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00210F28_0x210f28");
#endif

    switch (ctx->pc) {
        case 0x210f88u: goto label_210f88;
        default: break;
    }

    ctx->pc = 0x210f28u;

    // 0x210f28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x210f28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x210f2c: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x210f2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210f30: 0x10c00018  beqz        $a2, . + 4 + (0x18 << 2)
    ctx->pc = 0x210F30u;
    {
        const bool branch_taken_0x210f30 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x210F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210F30u;
        // 0x210f34: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210f30) {
            ctx->pc = 0x210F94u;
            goto label_210f94;
        }
    }
    ctx->pc = 0x210F38u;
    // 0x210f38: 0x8ce200b8  lw          $v0, 0xB8($a3)
    ctx->pc = 0x210f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 184)));
    // 0x210f3c: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x210f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x210f40: 0x8c4300b0  lw          $v1, 0xB0($v0)
    ctx->pc = 0x210f40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
    // 0x210f44: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x210f44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x210f48: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x210F48u;
    {
        const bool branch_taken_0x210f48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x210F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210F48u;
        // 0x210f4c: 0x3c040001  lui         $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210f48) {
            ctx->pc = 0x210F5Cu;
            goto label_210f5c;
        }
    }
    ctx->pc = 0x210F50u;
    // 0x210f50: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x210f50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x210f54: 0xaca2003c  sw          $v0, 0x3C($a1)
    ctx->pc = 0x210f54u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 60), GPR_U32(ctx, 2));
    // 0x210f58: 0x8ce200b8  lw          $v0, 0xB8($a3)
    ctx->pc = 0x210f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 184)));
label_210f5c:
    // 0x210f5c: 0x8c4300b0  lw          $v1, 0xB0($v0)
    ctx->pc = 0x210f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 176)));
    // 0x210f60: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x210f60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x210f64: 0x1464000c  bne         $v1, $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x210F64u;
    {
        const bool branch_taken_0x210f64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x210F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210F64u;
        // 0x210f68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210f64) {
            ctx->pc = 0x210F98u;
            goto label_210f98;
        }
    }
    ctx->pc = 0x210F6Cu;
    // 0x210f6c: 0x8cc200bc  lw          $v0, 0xBC($a2)
    ctx->pc = 0x210f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 188)));
    // 0x210f70: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x210f70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x210f74: 0x38420007  xori        $v0, $v0, 0x7
    ctx->pc = 0x210f74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
    // 0x210f78: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x210F78u;
    {
        const bool branch_taken_0x210f78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x210f78) {
            ctx->pc = 0x210F7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x210F78u;
            // 0x210f7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x210F98u;
            goto label_210f98;
        }
    }
    ctx->pc = 0x210F80u;
    // 0x210f80: 0xc06b600  jal         func_1AD800
    ctx->pc = 0x210F80u;
    SET_GPR_U32(ctx, 31, 0x210F88u);
    ctx->pc = 0x210F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210F80u;
    // 0x210f84: 0x8cc40334  lw          $a0, 0x334($a2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 820)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD800u, 0x210F80u, 0x210F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210F88u;
label_210f88:
    // 0x210f88: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x210f88u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210f8c: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x210F8Cu;
    {
        const bool branch_taken_0x210f8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x210F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210F8Cu;
        // 0x210f90: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210f8c) {
            ctx->pc = 0x210F98u;
            goto label_210f98;
        }
    }
    ctx->pc = 0x210F94u;
label_210f94:
    // 0x210f94: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x210f94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_210f98:
    // 0x210f98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x210f98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x210f9c: 0x3e00008  jr          $ra
    ctx->pc = 0x210F9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x210FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210F9Cu;
        // 0x210fa0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210F9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x210FA4u;
    // 0x210fa4: 0x0  nop
    ctx->pc = 0x210fa4u;
    // NOP
    ctx->pc = 0x210fa8u;
}
