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

// Function: sub_00124B98
// Address: 0x124b98 - 0x124c38
void sub_00124B98_0x124b98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00124B98_0x124b98");
#endif

    switch (ctx->pc) {
        case 0x124bd0u: goto label_124bd0;
        case 0x124be0u: goto label_124be0;
        case 0x124c08u: goto label_124c08;
        default: break;
    }

    ctx->pc = 0x124b98u;

    // 0x124b98: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x124b98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x124b9c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x124b9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x124ba0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x124ba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x124ba4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x124ba4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124ba8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x124ba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x124bac: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x124bacu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124bb0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x124bb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x124bb4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x124bb4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124bb8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x124bb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x124bbc: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x124bbcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124bc0: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x124bc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x124bc4: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x124bc4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124bc8: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x124BC8u;
    SET_GPR_U32(ctx, 31, 0x124BD0u);
    ctx->pc = 0x124BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124BC8u;
    // 0x124bcc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x124BC8u, 0x124BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124BD0u;
label_124bd0:
    // 0x124bd0: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x124BD0u;
    {
        const bool branch_taken_0x124bd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x124BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124BD0u;
        // 0x124bd4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124bd0) {
            ctx->pc = 0x124C14u;
            goto label_124c14;
        }
    }
    ctx->pc = 0x124BD8u;
    // 0x124bd8: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x124BD8u;
    SET_GPR_U32(ctx, 31, 0x124BE0u);
    ctx->pc = 0x124BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124BD8u;
    // 0x124bdc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x124BD8u, 0x124BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124BE0u;
label_124be0:
    // 0x124be0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x124BE0u;
    {
        const bool branch_taken_0x124be0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x124BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124BE0u;
        // 0x124be4: 0x272102b  sltu        $v0, $s3, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x124be0) {
            ctx->pc = 0x124C10u;
            goto label_124c10;
        }
    }
    ctx->pc = 0x124BE8u;
    // 0x124be8: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x124BE8u;
    {
        const bool branch_taken_0x124be8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x124BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124BE8u;
        // 0x124bec: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124be8) {
            ctx->pc = 0x124C14u;
            goto label_124c14;
        }
    }
    ctx->pc = 0x124BF0u;
    // 0x124bf0: 0x8e840078  lw          $a0, 0x78($s4)
    ctx->pc = 0x124bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 120)));
    // 0x124bf4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x124bf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124bf8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x124bf8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124bfc: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x124bfcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124c00: 0xc042836  jal         func_10A0D8
    ctx->pc = 0x124C00u;
    SET_GPR_U32(ctx, 31, 0x124C08u);
    ctx->pc = 0x124C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124C00u;
    // 0x124c04: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A0D8u, 0x124C00u, 0x124C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124C08u;
label_124c08:
    // 0x124c08: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x124C08u;
    {
        const bool branch_taken_0x124c08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124C08u;
        // 0x124c0c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124c08) {
            ctx->pc = 0x124C18u;
            goto label_124c18;
        }
    }
    ctx->pc = 0x124C10u;
label_124c10:
    // 0x124c10: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x124c10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_124c14:
    // 0x124c14: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x124c14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_124c18:
    // 0x124c18: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x124c18u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x124c1c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x124c1cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x124c20: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x124c20u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x124c24: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x124c24u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x124c28: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x124c28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x124c2c: 0x3e00008  jr          $ra
    ctx->pc = 0x124C2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x124C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124C2Cu;
        // 0x124c30: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x124C2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x124C34u;
    // 0x124c34: 0x0  nop
    ctx->pc = 0x124c34u;
    // NOP
    ctx->pc = 0x124c38u;
}
