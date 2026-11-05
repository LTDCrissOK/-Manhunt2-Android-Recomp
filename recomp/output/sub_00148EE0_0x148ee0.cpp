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

// Function: sub_00148EE0
// Address: 0x148ee0 - 0x148f78
void sub_00148EE0_0x148ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00148EE0_0x148ee0");
#endif

    switch (ctx->pc) {
        case 0x148f20u: goto label_148f20;
        case 0x148f2cu: goto label_148f2c;
        case 0x148f3cu: goto label_148f3c;
        case 0x148f48u: goto label_148f48;
        case 0x148f5cu: goto label_148f5c;
        default: break;
    }

    ctx->pc = 0x148ee0u;

    // 0x148ee0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x148ee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x148ee4: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x148ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x148ee8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x148ee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x148eec: 0x30b200ff  andi        $s2, $a1, 0xFF
    ctx->pc = 0x148eecu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x148ef0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x148ef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x148ef4: 0x2421018  mult        $v0, $s2, $v0
    ctx->pc = 0x148ef4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x148ef8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x148ef8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148efc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x148efcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x148f00: 0x262304e4  addiu       $v1, $s1, 0x4E4
    ctx->pc = 0x148f00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1252));
    // 0x148f04: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x148f04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x148f08: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x148f08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x148f0c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x148f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x148f10: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x148F10u;
    {
        const bool branch_taken_0x148f10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x148F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148F10u;
        // 0x148f14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148f10) {
            ctx->pc = 0x148F60u;
            goto label_148f60;
        }
    }
    ctx->pc = 0x148F18u;
    // 0x148f18: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x148F18u;
    SET_GPR_U32(ctx, 31, 0x148F20u);
    ctx->pc = 0x148F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148F18u;
    // 0x148f1c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x148F18u, 0x148F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148F20u;
label_148f20:
    // 0x148f20: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x148f20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x148f24: 0xc0aafd2  jal         func_2ABF48
    ctx->pc = 0x148F24u;
    SET_GPR_U32(ctx, 31, 0x148F2Cu);
    ctx->pc = 0x148F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148F24u;
    // 0x148f28: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF48u, 0x148F24u, 0x148F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148F2Cu;
label_148f2c:
    // 0x148f2c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x148F2Cu;
    {
        const bool branch_taken_0x148f2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x148F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148F2Cu;
        // 0x148f30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148f2c) {
            ctx->pc = 0x148F50u;
            goto label_148f50;
        }
    }
    ctx->pc = 0x148F34u;
    // 0x148f34: 0xc0523de  jal         func_148F78
    ctx->pc = 0x148F34u;
    SET_GPR_U32(ctx, 31, 0x148F3Cu);
    ctx->pc = 0x148F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148F34u;
    // 0x148f38: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148F78u, 0x148F34u, 0x148F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148F3Cu;
label_148f3c:
    // 0x148f3c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x148f3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148f40: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x148F40u;
    SET_GPR_U32(ctx, 31, 0x148F48u);
    ctx->pc = 0x148F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148F40u;
    // 0x148f44: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x148F40u, 0x148F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148F48u;
label_148f48:
    // 0x148f48: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x148F48u;
    {
        const bool branch_taken_0x148f48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x148F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148F48u;
        // 0x148f4c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148f48) {
            ctx->pc = 0x148F60u;
            goto label_148f60;
        }
    }
    ctx->pc = 0x148F50u;
label_148f50:
    // 0x148f50: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x148f50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148f54: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x148F54u;
    SET_GPR_U32(ctx, 31, 0x148F5Cu);
    ctx->pc = 0x148F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148F54u;
    // 0x148f58: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x148F54u, 0x148F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148F5Cu;
label_148f5c:
    // 0x148f5c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x148f5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_148f60:
    // 0x148f60: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x148f60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x148f64: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x148f64u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x148f68: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x148f68u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x148f6c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x148f6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x148f70: 0x3e00008  jr          $ra
    ctx->pc = 0x148F70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x148F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148F70u;
        // 0x148f74: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x148F70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x148F78u;
}
