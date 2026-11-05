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

// Function: sub_00104BE0
// Address: 0x104be0 - 0x104c58
void sub_00104BE0_0x104be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00104BE0_0x104be0");
#endif

    switch (ctx->pc) {
        case 0x104c14u: goto label_104c14;
        case 0x104c3cu: goto label_104c3c;
        default: break;
    }

    ctx->pc = 0x104be0u;

    // 0x104be0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x104be0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x104be4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x104be4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x104be8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x104be8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x104bec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x104becu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104bf0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x104bf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x104bf4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x104bf4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104bf8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x104bf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x104bfc: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x104BFCu;
    {
        const bool branch_taken_0x104bfc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x104C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104BFCu;
        // 0x104c00: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104bfc) {
            ctx->pc = 0x104C0Cu;
            goto label_104c0c;
        }
    }
    ctx->pc = 0x104C04u;
    // 0x104c04: 0x5240000e  beql        $s2, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x104C04u;
    {
        const bool branch_taken_0x104c04 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x104c04) {
            ctx->pc = 0x104C08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x104C04u;
            // 0x104c08: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x104C40u;
            goto label_104c40;
        }
    }
    ctx->pc = 0x104C0Cu;
label_104c0c:
    // 0x104c0c: 0xc0413ae  jal         func_104EB8
    ctx->pc = 0x104C0Cu;
    SET_GPR_U32(ctx, 31, 0x104C14u);
    ctx->pc = 0x104C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104C0Cu;
    // 0x104c10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104EB8u, 0x104C0Cu, 0x104C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104C14u;
label_104c14:
    // 0x104c14: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x104C14u;
    {
        const bool branch_taken_0x104c14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x104c14) {
            ctx->pc = 0x104C18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x104C14u;
            // 0x104c18: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x104C40u;
            goto label_104c40;
        }
    }
    ctx->pc = 0x104C1Cu;
    // 0x104c1c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x104c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x104c20: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x104C20u;
    {
        const bool branch_taken_0x104c20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x104C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104C20u;
        // 0x104c24: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104c20) {
            ctx->pc = 0x104C2Cu;
            goto label_104c2c;
        }
    }
    ctx->pc = 0x104C28u;
    // 0x104c28: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x104c28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_104c2c:
    // 0x104c2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x104c2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104c30: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x104c30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104c34: 0xc0413d8  jal         func_104F60
    ctx->pc = 0x104C34u;
    SET_GPR_U32(ctx, 31, 0x104C3Cu);
    ctx->pc = 0x104C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104C34u;
    // 0x104c38: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x104F60u, 0x104C34u, 0x104C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104C3Cu;
label_104c3c:
    // 0x104c3c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x104c3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_104c40:
    // 0x104c40: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x104c40u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x104c44: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x104c44u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x104c48: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x104c48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x104c4c: 0x3e00008  jr          $ra
    ctx->pc = 0x104C4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x104C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104C4Cu;
        // 0x104c50: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x104C4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x104C54u;
    // 0x104c54: 0x0  nop
    ctx->pc = 0x104c54u;
    // NOP
    ctx->pc = 0x104c58u;
}
