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

// Function: sub_0013AB10
// Address: 0x13ab10 - 0x13aba8
void sub_0013AB10_0x13ab10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013AB10_0x13ab10");
#endif

    switch (ctx->pc) {
        case 0x13ab50u: goto label_13ab50;
        case 0x13ab5cu: goto label_13ab5c;
        case 0x13ab6cu: goto label_13ab6c;
        case 0x13ab78u: goto label_13ab78;
        case 0x13ab8cu: goto label_13ab8c;
        default: break;
    }

    ctx->pc = 0x13ab10u;

    // 0x13ab10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13ab10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x13ab14: 0x2402005c  addiu       $v0, $zero, 0x5C
    ctx->pc = 0x13ab14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x13ab18: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x13ab18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x13ab1c: 0x30b200ff  andi        $s2, $a1, 0xFF
    ctx->pc = 0x13ab1cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x13ab20: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x13ab20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x13ab24: 0x2421018  mult        $v0, $s2, $v0
    ctx->pc = 0x13ab24u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x13ab28: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x13ab28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ab2c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x13ab2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x13ab30: 0x2623052c  addiu       $v1, $s1, 0x52C
    ctx->pc = 0x13ab30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1324));
    // 0x13ab34: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x13ab34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x13ab38: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x13ab38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13ab3c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x13ab3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13ab40: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x13AB40u;
    {
        const bool branch_taken_0x13ab40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x13AB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AB40u;
        // 0x13ab44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ab40) {
            ctx->pc = 0x13AB90u;
            goto label_13ab90;
        }
    }
    ctx->pc = 0x13AB48u;
    // 0x13ab48: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x13AB48u;
    SET_GPR_U32(ctx, 31, 0x13AB50u);
    ctx->pc = 0x13AB4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13AB48u;
    // 0x13ab4c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x13AB48u, 0x13AB50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13AB50u;
label_13ab50:
    // 0x13ab50: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x13ab50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13ab54: 0xc0aafd2  jal         func_2ABF48
    ctx->pc = 0x13AB54u;
    SET_GPR_U32(ctx, 31, 0x13AB5Cu);
    ctx->pc = 0x13AB58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13AB54u;
    // 0x13ab58: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF48u, 0x13AB54u, 0x13AB5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13AB5Cu;
label_13ab5c:
    // 0x13ab5c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x13AB5Cu;
    {
        const bool branch_taken_0x13ab5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13AB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AB5Cu;
        // 0x13ab60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ab5c) {
            ctx->pc = 0x13AB80u;
            goto label_13ab80;
        }
    }
    ctx->pc = 0x13AB64u;
    // 0x13ab64: 0xc04eabe  jal         func_13AAF8
    ctx->pc = 0x13AB64u;
    SET_GPR_U32(ctx, 31, 0x13AB6Cu);
    ctx->pc = 0x13AB68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13AB64u;
    // 0x13ab68: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13AAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13AAF8u, 0x13AB64u, 0x13AB6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13AB6Cu;
label_13ab6c:
    // 0x13ab6c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x13ab6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ab70: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x13AB70u;
    SET_GPR_U32(ctx, 31, 0x13AB78u);
    ctx->pc = 0x13AB74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13AB70u;
    // 0x13ab74: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x13AB70u, 0x13AB78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13AB78u;
label_13ab78:
    // 0x13ab78: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x13AB78u;
    {
        const bool branch_taken_0x13ab78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13AB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13AB78u;
        // 0x13ab7c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ab78) {
            ctx->pc = 0x13AB90u;
            goto label_13ab90;
        }
    }
    ctx->pc = 0x13AB80u;
label_13ab80:
    // 0x13ab80: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x13ab80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ab84: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x13AB84u;
    SET_GPR_U32(ctx, 31, 0x13AB8Cu);
    ctx->pc = 0x13AB88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13AB84u;
    // 0x13ab88: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x13AB84u, 0x13AB8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13AB8Cu;
label_13ab8c:
    // 0x13ab8c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13ab8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13ab90:
    // 0x13ab90: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x13ab90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13ab94: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x13ab94u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13ab98: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x13ab98u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13ab9c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x13ab9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x13aba0: 0x3e00008  jr          $ra
    ctx->pc = 0x13ABA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13ABA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13ABA0u;
        // 0x13aba4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13ABA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13ABA8u;
}
