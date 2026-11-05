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

// Function: sub_0013A9D0
// Address: 0x13a9d0 - 0x13aa68
void sub_0013A9D0_0x13a9d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013A9D0_0x13a9d0");
#endif

    switch (ctx->pc) {
        case 0x13aa10u: goto label_13aa10;
        case 0x13aa1cu: goto label_13aa1c;
        case 0x13aa2cu: goto label_13aa2c;
        case 0x13aa38u: goto label_13aa38;
        case 0x13aa4cu: goto label_13aa4c;
        default: break;
    }

    ctx->pc = 0x13a9d0u;

    // 0x13a9d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13a9d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x13a9d4: 0x2402005c  addiu       $v0, $zero, 0x5C
    ctx->pc = 0x13a9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x13a9d8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x13a9d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x13a9dc: 0x30b200ff  andi        $s2, $a1, 0xFF
    ctx->pc = 0x13a9dcu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x13a9e0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x13a9e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x13a9e4: 0x2421018  mult        $v0, $s2, $v0
    ctx->pc = 0x13a9e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x13a9e8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x13a9e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a9ec: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x13a9ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x13a9f0: 0x26230524  addiu       $v1, $s1, 0x524
    ctx->pc = 0x13a9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1316));
    // 0x13a9f4: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x13a9f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x13a9f8: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x13a9f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13a9fc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x13a9fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13aa00: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x13AA00u;
    {
        const bool branch_taken_0x13aa00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x13AA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AA00u;
        // 0x13aa04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13aa00) {
            ctx->pc = 0x13AA50u;
            goto label_13aa50;
        }
    }
    ctx->pc = 0x13AA08u;
    // 0x13aa08: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x13AA08u;
    SET_GPR_U32(ctx, 31, 0x13AA10u);
    ctx->pc = 0x13AA0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13AA08u;
    // 0x13aa0c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x13AA08u, 0x13AA10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13AA10u;
label_13aa10:
    // 0x13aa10: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x13aa10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13aa14: 0xc0aafd2  jal         func_2ABF48
    ctx->pc = 0x13AA14u;
    SET_GPR_U32(ctx, 31, 0x13AA1Cu);
    ctx->pc = 0x13AA18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13AA14u;
    // 0x13aa18: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF48u, 0x13AA14u, 0x13AA1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13AA1Cu;
label_13aa1c:
    // 0x13aa1c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x13AA1Cu;
    {
        const bool branch_taken_0x13aa1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13AA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AA1Cu;
        // 0x13aa20: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13aa1c) {
            ctx->pc = 0x13AA40u;
            goto label_13aa40;
        }
    }
    ctx->pc = 0x13AA24u;
    // 0x13aa24: 0xc04ea6e  jal         func_13A9B8
    ctx->pc = 0x13AA24u;
    SET_GPR_U32(ctx, 31, 0x13AA2Cu);
    ctx->pc = 0x13AA28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13AA24u;
    // 0x13aa28: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13A9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A9B8u, 0x13AA24u, 0x13AA2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13AA2Cu;
label_13aa2c:
    // 0x13aa2c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x13aa2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13aa30: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x13AA30u;
    SET_GPR_U32(ctx, 31, 0x13AA38u);
    ctx->pc = 0x13AA34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13AA30u;
    // 0x13aa34: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x13AA30u, 0x13AA38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13AA38u;
label_13aa38:
    // 0x13aa38: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x13AA38u;
    {
        const bool branch_taken_0x13aa38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13AA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AA38u;
        // 0x13aa3c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13aa38) {
            ctx->pc = 0x13AA50u;
            goto label_13aa50;
        }
    }
    ctx->pc = 0x13AA40u;
label_13aa40:
    // 0x13aa40: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x13aa40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13aa44: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x13AA44u;
    SET_GPR_U32(ctx, 31, 0x13AA4Cu);
    ctx->pc = 0x13AA48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13AA44u;
    // 0x13aa48: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x13AA44u, 0x13AA4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13AA4Cu;
label_13aa4c:
    // 0x13aa4c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13aa4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13aa50:
    // 0x13aa50: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x13aa50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13aa54: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x13aa54u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13aa58: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x13aa58u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13aa5c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x13aa5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x13aa60: 0x3e00008  jr          $ra
    ctx->pc = 0x13AA60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13AA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AA60u;
        // 0x13aa64: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13AA60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13AA68u;
}
