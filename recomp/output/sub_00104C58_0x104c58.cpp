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

// Function: sub_00104C58
// Address: 0x104c58 - 0x104cd0
void sub_00104C58_0x104c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00104C58_0x104c58");
#endif

    switch (ctx->pc) {
        case 0x104c8cu: goto label_104c8c;
        case 0x104cb4u: goto label_104cb4;
        default: break;
    }

    ctx->pc = 0x104c58u;

    // 0x104c58: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x104c58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x104c5c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x104c5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x104c60: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x104c60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x104c64: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x104c64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104c68: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x104c68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x104c6c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x104c6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104c70: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x104c70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x104c74: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x104C74u;
    {
        const bool branch_taken_0x104c74 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x104C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104C74u;
        // 0x104c78: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104c74) {
            ctx->pc = 0x104C84u;
            goto label_104c84;
        }
    }
    ctx->pc = 0x104C7Cu;
    // 0x104c7c: 0x5240000e  beql        $s2, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x104C7Cu;
    {
        const bool branch_taken_0x104c7c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x104c7c) {
            ctx->pc = 0x104C80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x104C7Cu;
            // 0x104c80: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x104CB8u;
            goto label_104cb8;
        }
    }
    ctx->pc = 0x104C84u;
label_104c84:
    // 0x104c84: 0xc0413ae  jal         func_104EB8
    ctx->pc = 0x104C84u;
    SET_GPR_U32(ctx, 31, 0x104C8Cu);
    ctx->pc = 0x104C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104C84u;
    // 0x104c88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104EB8u, 0x104C84u, 0x104C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104C8Cu;
label_104c8c:
    // 0x104c8c: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x104C8Cu;
    {
        const bool branch_taken_0x104c8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x104c8c) {
            ctx->pc = 0x104C90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x104C8Cu;
            // 0x104c90: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x104CB8u;
            goto label_104cb8;
        }
    }
    ctx->pc = 0x104C94u;
    // 0x104c94: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x104c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x104c98: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x104C98u;
    {
        const bool branch_taken_0x104c98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x104C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104C98u;
        // 0x104c9c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104c98) {
            ctx->pc = 0x104CA4u;
            goto label_104ca4;
        }
    }
    ctx->pc = 0x104CA0u;
    // 0x104ca0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x104ca0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_104ca4:
    // 0x104ca4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x104ca4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104ca8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x104ca8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104cac: 0xc0413e6  jal         func_104F98
    ctx->pc = 0x104CACu;
    SET_GPR_U32(ctx, 31, 0x104CB4u);
    ctx->pc = 0x104CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104CACu;
    // 0x104cb0: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104F98u, 0x104CACu, 0x104CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104CB4u;
label_104cb4:
    // 0x104cb4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x104cb4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_104cb8:
    // 0x104cb8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x104cb8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x104cbc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x104cbcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x104cc0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x104cc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x104cc4: 0x3e00008  jr          $ra
    ctx->pc = 0x104CC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x104CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104CC4u;
        // 0x104cc8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x104CC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x104CCCu;
    // 0x104ccc: 0x0  nop
    ctx->pc = 0x104cccu;
    // NOP
    ctx->pc = 0x104cd0u;
}
