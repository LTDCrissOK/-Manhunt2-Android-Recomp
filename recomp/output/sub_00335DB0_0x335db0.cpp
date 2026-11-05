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

// Function: sub_00335DB0
// Address: 0x335db0 - 0x335ec8
void sub_00335DB0_0x335db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00335DB0_0x335db0");
#endif

    switch (ctx->pc) {
        case 0x335df8u: goto label_335df8;
        case 0x335e04u: goto label_335e04;
        case 0x335e28u: goto label_335e28;
        default: break;
    }

    ctx->pc = 0x335db0u;

    // 0x335db0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x335db0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x335db4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x335db4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x335db8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x335db8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x335dbc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x335dbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335dc0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x335dc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x335dc4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x335dc4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335dc8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x335dc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x335dcc: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x335dccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335dd0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x335dd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x335dd4: 0x12000032  beqz        $s0, . + 4 + (0x32 << 2)
    ctx->pc = 0x335DD4u;
    {
        const bool branch_taken_0x335dd4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x335DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335DD4u;
        // 0x335dd8: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335dd4) {
            ctx->pc = 0x335EA0u;
            goto label_335ea0;
        }
    }
    ctx->pc = 0x335DDCu;
    // 0x335ddc: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x335ddcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x335de0: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x335DE0u;
    {
        const bool branch_taken_0x335de0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x335DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335DE0u;
        // 0x335de4: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335de0) {
            ctx->pc = 0x335EA0u;
            goto label_335ea0;
        }
    }
    ctx->pc = 0x335DE8u;
    // 0x335de8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x335de8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x335dec: 0x8e320014  lw          $s2, 0x14($s1)
    ctx->pc = 0x335decu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x335df0: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x335DF0u;
    {
        const bool branch_taken_0x335df0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x335DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335DF0u;
        // 0x335df4: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335df0) {
            ctx->pc = 0x335E70u;
            goto label_335e70;
        }
    }
    ctx->pc = 0x335DF8u;
label_335df8:
    // 0x335df8: 0x8c640020  lw          $a0, 0x20($v1)
    ctx->pc = 0x335df8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x335dfc: 0xc0f0a8a  jal         func_3C2A28
    ctx->pc = 0x335DFCu;
    SET_GPR_U32(ctx, 31, 0x335E04u);
    ctx->pc = 0x335E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335DFCu;
    // 0x335e00: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2A28u, 0x335DFCu, 0x335E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335E04u;
label_335e04:
    // 0x335e04: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x335E04u;
    {
        const bool branch_taken_0x335e04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x335e04) {
            ctx->pc = 0x335E08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x335E04u;
            // 0x335e08: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x335E50u;
            goto label_335e50;
        }
    }
    ctx->pc = 0x335E0Cu;
    // 0x335e0c: 0x8e250014  lw          $a1, 0x14($s1)
    ctx->pc = 0x335e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x335e10: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x335e10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335e14: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x335e14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335e18: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x335e18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335e1c: 0x2451026  xor         $v0, $s2, $a1
    ctx->pc = 0x335e1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) ^ GPR_U64(ctx, 5));
    // 0x335e20: 0xc0cd720  jal         func_335C80
    ctx->pc = 0x335E20u;
    SET_GPR_U32(ctx, 31, 0x335E28u);
    ctx->pc = 0x335E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335E20u;
    // 0x335e24: 0x2800b  movn        $s0, $zero, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335C80u, 0x335E20u, 0x335E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335E28u;
label_335e28:
    // 0x335e28: 0x1240001e  beqz        $s2, . + 4 + (0x1E << 2)
    ctx->pc = 0x335E28u;
    {
        const bool branch_taken_0x335e28 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x335E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335E28u;
        // 0x335e2c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335e28) {
            ctx->pc = 0x335EA4u;
            goto label_335ea4;
        }
    }
    ctx->pc = 0x335E30u;
    // 0x335e30: 0x1600001d  bnez        $s0, . + 4 + (0x1D << 2)
    ctx->pc = 0x335E30u;
    {
        const bool branch_taken_0x335e30 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x335E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335E30u;
        // 0x335e34: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335e30) {
            ctx->pc = 0x335EA8u;
            goto label_335ea8;
        }
    }
    ctx->pc = 0x335E38u;
    // 0x335e38: 0x8e43001c  lw          $v1, 0x1C($s2)
    ctx->pc = 0x335e38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x335e3c: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x335e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
    // 0x335e40: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x335e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x335e44: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x335e44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
    // 0x335e48: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x335E48u;
    {
        const bool branch_taken_0x335e48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x335E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335E48u;
        // 0x335e4c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335e48) {
            ctx->pc = 0x335EA8u;
            goto label_335ea8;
        }
    }
    ctx->pc = 0x335E50u;
label_335e50:
    // 0x335e50: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x335E50u;
    {
        const bool branch_taken_0x335e50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x335E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335E50u;
        // 0x335e54: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335e50) {
            ctx->pc = 0x335E5Cu;
            goto label_335e5c;
        }
    }
    ctx->pc = 0x335E58u;
    // 0x335e58: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x335e58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_335e5c:
    // 0x335e5c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x335E5Cu;
    {
        const bool branch_taken_0x335e5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x335e5c) {
            ctx->pc = 0x335E60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x335E5Cu;
            // 0x335e60: 0xae230014  sw          $v1, 0x14($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x335E70u;
            goto label_335e70;
        }
    }
    ctx->pc = 0x335E64u;
    // 0x335e64: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x335e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x335e68: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x335e68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x335e6c: 0xae230014  sw          $v1, 0x14($s1)
    ctx->pc = 0x335e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
label_335e70:
    // 0x335e70: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x335e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x335e74: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x335E74u;
    {
        const bool branch_taken_0x335e74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x335E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335E74u;
        // 0x335e78: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335e74) {
            ctx->pc = 0x335E80u;
            goto label_335e80;
        }
    }
    ctx->pc = 0x335E7Cu;
    // 0x335e7c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x335e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_335e80:
    // 0x335e80: 0x1460ffdd  bnez        $v1, . + 4 + (-0x23 << 2)
    ctx->pc = 0x335E80u;
    {
        const bool branch_taken_0x335e80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x335E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335E80u;
        // 0x335e84: 0xae230014  sw          $v1, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335e80) {
            ctx->pc = 0x335DF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_335df8;
        }
    }
    ctx->pc = 0x335E88u;
    // 0x335e88: 0x12400006  beqz        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x335E88u;
    {
        const bool branch_taken_0x335e88 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x335E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335E88u;
        // 0x335e8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335e88) {
            ctx->pc = 0x335EA4u;
            goto label_335ea4;
        }
    }
    ctx->pc = 0x335E90u;
    // 0x335e90: 0x8e43001c  lw          $v1, 0x1C($s2)
    ctx->pc = 0x335e90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x335e94: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x335e94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
    // 0x335e98: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x335e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x335e9c: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x335e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
label_335ea0:
    // 0x335ea0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x335ea0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_335ea4:
    // 0x335ea4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x335ea4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_335ea8:
    // 0x335ea8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x335ea8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x335eac: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x335eacu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x335eb0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x335eb0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x335eb4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x335eb4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x335eb8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x335eb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x335ebc: 0x3e00008  jr          $ra
    ctx->pc = 0x335EBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x335EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335EBCu;
        // 0x335ec0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x335EBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x335EC4u;
    // 0x335ec4: 0x0  nop
    ctx->pc = 0x335ec4u;
    // NOP
    ctx->pc = 0x335ec8u;
}
