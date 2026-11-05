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

// Function: sub_003A7BC0
// Address: 0x3a7bc0 - 0x3a7c60
void sub_003A7BC0_0x3a7bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A7BC0_0x3a7bc0");
#endif

    switch (ctx->pc) {
        case 0x3a7bdcu: goto label_3a7bdc;
        case 0x3a7bf4u: goto label_3a7bf4;
        case 0x3a7c08u: goto label_3a7c08;
        case 0x3a7c38u: goto label_3a7c38;
        default: break;
    }

    ctx->pc = 0x3a7bc0u;

    // 0x3a7bc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3a7bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3a7bc4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x3a7bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x3a7bc8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3a7bc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a7bcc: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x3a7bccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x3a7bd0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3a7bd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3a7bd4: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x3A7BD4u;
    SET_GPR_U32(ctx, 31, 0x3A7BDCu);
    ctx->pc = 0x3A7BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A7BD4u;
    // 0x3a7bd8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x3A7BD4u, 0x3A7BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7BDCu;
label_3a7bdc:
    // 0x3a7bdc: 0x2c420012  sltiu       $v0, $v0, 0x12
    ctx->pc = 0x3a7bdcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)18) ? 1 : 0);
    // 0x3a7be0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3a7be0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a7be4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A7BE4u;
    {
        const bool branch_taken_0x3a7be4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A7BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7BE4u;
        // 0x3a7be8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7be4) {
            ctx->pc = 0x3A7BF4u;
            goto label_3a7bf4;
        }
    }
    ctx->pc = 0x3A7BECu;
    // 0x3a7bec: 0xc0e9ebe  jal         func_3A7AF8
    ctx->pc = 0x3A7BECu;
    SET_GPR_U32(ctx, 31, 0x3A7BF4u);
    ctx->pc = 0x3A7AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7AF8u, 0x3A7BECu, 0x3A7BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7BF4u;
label_3a7bf4:
    // 0x3a7bf4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a7bf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a7bf8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3a7bf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a7bfc: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x3a7bfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3a7c00: 0xc0e9ed0  jal         func_3A7B40
    ctx->pc = 0x3A7C00u;
    SET_GPR_U32(ctx, 31, 0x3A7C08u);
    ctx->pc = 0x3A7C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A7C00u;
    // 0x3a7c04: 0xafb00000  sw          $s0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7B40u, 0x3A7C00u, 0x3A7C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7C08u;
label_3a7c08:
    // 0x3a7c08: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x3a7c08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3a7c0c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3a7c0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a7c10: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x3a7c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a7c14: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3a7c14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a7c18: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x3a7c18u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3a7c1c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x3A7C1Cu;
    {
        const bool branch_taken_0x3a7c1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A7C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7C1Cu;
        // 0x3a7c20: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7c1c) {
            ctx->pc = 0x3A7C28u;
            goto label_3a7c28;
        }
    }
    ctx->pc = 0x3A7C24u;
    // 0x3a7c24: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x3a7c24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_3a7c28:
    // 0x3a7c28: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3A7C28u;
    {
        const bool branch_taken_0x3a7c28 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A7C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7C28u;
        // 0x3a7c2c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7c28) {
            ctx->pc = 0x3A7C48u;
            goto label_3a7c48;
        }
    }
    ctx->pc = 0x3A7C30u;
    // 0x3a7c30: 0xc0e9eca  jal         func_3A7B28
    ctx->pc = 0x3A7C30u;
    SET_GPR_U32(ctx, 31, 0x3A7C38u);
    ctx->pc = 0x3A7C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A7C30u;
    // 0x3a7c34: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7B28u, 0x3A7C30u, 0x3A7C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7C38u;
label_3a7c38:
    // 0x3a7c38: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3a7c38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3a7c3c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3a7c3cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3a7c40: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x3a7c40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x3a7c44: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3a7c44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3a7c48:
    // 0x3a7c48: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x3a7c48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a7c4c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x3a7c4cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3a7c50: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3a7c50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a7c54: 0x3e00008  jr          $ra
    ctx->pc = 0x3A7C54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A7C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7C54u;
        // 0x3a7c58: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A7C54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A7C5Cu;
    // 0x3a7c5c: 0x0  nop
    ctx->pc = 0x3a7c5cu;
    // NOP
    ctx->pc = 0x3a7c60u;
}
