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

// Function: sub_00124DE0
// Address: 0x124de0 - 0x124ea0
void sub_00124DE0_0x124de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00124DE0_0x124de0");
#endif

    switch (ctx->pc) {
        case 0x124e14u: goto label_124e14;
        case 0x124e24u: goto label_124e24;
        case 0x124e34u: goto label_124e34;
        case 0x124e4cu: goto label_124e4c;
        case 0x124e5cu: goto label_124e5c;
        case 0x124e70u: goto label_124e70;
        default: break;
    }

    ctx->pc = 0x124de0u;

    // 0x124de0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x124de0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x124de4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x124de4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x124de8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x124de8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x124dec: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x124decu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124df0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x124df0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x124df4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x124df4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124df8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x124df8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x124dfc: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x124dfcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124e00: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x124e00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x124e04: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x124e04u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124e08: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x124e08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x124e0c: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x124E0Cu;
    SET_GPR_U32(ctx, 31, 0x124E14u);
    ctx->pc = 0x124E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124E0Cu;
    // 0x124e10: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x124E0Cu, 0x124E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124E14u;
label_124e14:
    // 0x124e14: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x124E14u;
    {
        const bool branch_taken_0x124e14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x124E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124E14u;
        // 0x124e18: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124e14) {
            ctx->pc = 0x124E7Cu;
            goto label_124e7c;
        }
    }
    ctx->pc = 0x124E1Cu;
    // 0x124e1c: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x124E1Cu;
    SET_GPR_U32(ctx, 31, 0x124E24u);
    ctx->pc = 0x124E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124E1Cu;
    // 0x124e20: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x124E1Cu, 0x124E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124E24u;
label_124e24:
    // 0x124e24: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x124E24u;
    {
        const bool branch_taken_0x124e24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x124E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124E24u;
        // 0x124e28: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124e24) {
            ctx->pc = 0x124E7Cu;
            goto label_124e7c;
        }
    }
    ctx->pc = 0x124E2Cu;
    // 0x124e2c: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x124E2Cu;
    SET_GPR_U32(ctx, 31, 0x124E34u);
    ctx->pc = 0x124E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124E2Cu;
    // 0x124e30: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x124E2Cu, 0x124E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124E34u;
label_124e34:
    // 0x124e34: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x124E34u;
    {
        const bool branch_taken_0x124e34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x124E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124E34u;
        // 0x124e38: 0x3c100049  lui         $s0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124e34) {
            ctx->pc = 0x124E78u;
            goto label_124e78;
        }
    }
    ctx->pc = 0x124E3Cu;
    // 0x124e3c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x124e3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124e40: 0x261099f0  addiu       $s0, $s0, -0x6610
    ctx->pc = 0x124e40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941168));
    // 0x124e44: 0xc046f70  jal         func_11BDC0
    ctx->pc = 0x124E44u;
    SET_GPR_U32(ctx, 31, 0x124E4Cu);
    ctx->pc = 0x124E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124E44u;
    // 0x124e48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11BDC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11BDC0u, 0x124E44u, 0x124E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124E4Cu;
label_124e4c:
    // 0x124e4c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x124e4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124e50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x124e50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124e54: 0xc047092  jal         func_11C248
    ctx->pc = 0x124E54u;
    SET_GPR_U32(ctx, 31, 0x124E5Cu);
    ctx->pc = 0x124E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124E54u;
    // 0x124e58: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11C248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11C248u, 0x124E54u, 0x124E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124E5Cu;
label_124e5c:
    // 0x124e5c: 0x8e840078  lw          $a0, 0x78($s4)
    ctx->pc = 0x124e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 120)));
    // 0x124e60: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x124e60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124e64: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x124e64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124e68: 0xc042d52  jal         func_10B548
    ctx->pc = 0x124E68u;
    SET_GPR_U32(ctx, 31, 0x124E70u);
    ctx->pc = 0x124E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124E68u;
    // 0x124e6c: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B548u, 0x124E68u, 0x124E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x124E70u;
label_124e70:
    // 0x124e70: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x124E70u;
    {
        const bool branch_taken_0x124e70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124E70u;
        // 0x124e74: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124e70) {
            ctx->pc = 0x124E80u;
            goto label_124e80;
        }
    }
    ctx->pc = 0x124E78u;
label_124e78:
    // 0x124e78: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x124e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_124e7c:
    // 0x124e7c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x124e7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_124e80:
    // 0x124e80: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x124e80u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x124e84: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x124e84u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x124e88: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x124e88u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x124e8c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x124e8cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x124e90: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x124e90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x124e94: 0x3e00008  jr          $ra
    ctx->pc = 0x124E94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x124E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124E94u;
        // 0x124e98: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x124E94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x124E9Cu;
    // 0x124e9c: 0x0  nop
    ctx->pc = 0x124e9cu;
    // NOP
    ctx->pc = 0x124ea0u;
}
