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

// Function: sub_00149020
// Address: 0x149020 - 0x1490b8
void sub_00149020_0x149020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00149020_0x149020");
#endif

    switch (ctx->pc) {
        case 0x149060u: goto label_149060;
        case 0x14906cu: goto label_14906c;
        case 0x14907cu: goto label_14907c;
        case 0x149088u: goto label_149088;
        case 0x14909cu: goto label_14909c;
        default: break;
    }

    ctx->pc = 0x149020u;

    // 0x149020: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x149020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x149024: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x149024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x149028: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x149028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x14902c: 0x30b200ff  andi        $s2, $a1, 0xFF
    ctx->pc = 0x14902cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x149030: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x149030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x149034: 0x2421018  mult        $v0, $s2, $v0
    ctx->pc = 0x149034u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x149038: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x149038u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14903c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x14903cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x149040: 0x262304e8  addiu       $v1, $s1, 0x4E8
    ctx->pc = 0x149040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1256));
    // 0x149044: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x149044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x149048: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x149048u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14904c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x14904cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x149050: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x149050u;
    {
        const bool branch_taken_0x149050 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x149054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149050u;
        // 0x149054: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149050) {
            ctx->pc = 0x1490A0u;
            goto label_1490a0;
        }
    }
    ctx->pc = 0x149058u;
    // 0x149058: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x149058u;
    SET_GPR_U32(ctx, 31, 0x149060u);
    ctx->pc = 0x14905Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149058u;
    // 0x14905c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x149058u, 0x149060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149060u;
label_149060:
    // 0x149060: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x149060u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x149064: 0xc0aafd2  jal         func_2ABF48
    ctx->pc = 0x149064u;
    SET_GPR_U32(ctx, 31, 0x14906Cu);
    ctx->pc = 0x149068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149064u;
    // 0x149068: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF48u, 0x149064u, 0x14906Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14906Cu;
label_14906c:
    // 0x14906c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x14906Cu;
    {
        const bool branch_taken_0x14906c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x149070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14906Cu;
        // 0x149070: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14906c) {
            ctx->pc = 0x149090u;
            goto label_149090;
        }
    }
    ctx->pc = 0x149074u;
    // 0x149074: 0xc05242e  jal         func_1490B8
    ctx->pc = 0x149074u;
    SET_GPR_U32(ctx, 31, 0x14907Cu);
    ctx->pc = 0x149078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149074u;
    // 0x149078: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1490B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1490B8u, 0x149074u, 0x14907Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14907Cu;
label_14907c:
    // 0x14907c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x14907cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149080: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x149080u;
    SET_GPR_U32(ctx, 31, 0x149088u);
    ctx->pc = 0x149084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149080u;
    // 0x149084: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x149080u, 0x149088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149088u;
label_149088:
    // 0x149088: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x149088u;
    {
        const bool branch_taken_0x149088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14908Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149088u;
        // 0x14908c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149088) {
            ctx->pc = 0x1490A0u;
            goto label_1490a0;
        }
    }
    ctx->pc = 0x149090u;
label_149090:
    // 0x149090: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x149090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149094: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x149094u;
    SET_GPR_U32(ctx, 31, 0x14909Cu);
    ctx->pc = 0x149098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149094u;
    // 0x149098: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x149094u, 0x14909Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14909Cu;
label_14909c:
    // 0x14909c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x14909cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1490a0:
    // 0x1490a0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1490a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1490a4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1490a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1490a8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1490a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1490ac: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1490acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1490b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1490B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1490B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1490B0u;
        // 0x1490b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1490B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1490B8u;
}
