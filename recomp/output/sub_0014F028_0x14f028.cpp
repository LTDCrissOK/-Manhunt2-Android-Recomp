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

// Function: sub_0014F028
// Address: 0x14f028 - 0x14f098
void sub_0014F028_0x14f028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014F028_0x14f028");
#endif

    switch (ctx->pc) {
        case 0x14f058u: goto label_14f058;
        case 0x14f064u: goto label_14f064;
        case 0x14f080u: goto label_14f080;
        default: break;
    }

    ctx->pc = 0x14f028u;

    // 0x14f028: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x14f028u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x14f02c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x14f02cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x14f030: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x14f030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x14f034: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x14f034u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14f038: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x14f038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x14f03c: 0x30b100ff  andi        $s1, $a1, 0xFF
    ctx->pc = 0x14f03cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x14f040: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x14f040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x14f044: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x14f044u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f048: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x14f048u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f04c: 0x964208d0  lhu         $v0, 0x8D0($s2)
    ctx->pc = 0x14f04cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2256)));
    // 0x14f050: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x14F050u;
    SET_GPR_U32(ctx, 31, 0x14F058u);
    ctx->pc = 0x14F054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F050u;
    // 0x14f054: 0x42800b  movn        $s0, $v0, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x14F050u, 0x14F058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F058u;
label_14f058:
    // 0x14f058: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14f058u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f05c: 0xc0aafc8  jal         func_2ABF20
    ctx->pc = 0x14F05Cu;
    SET_GPR_U32(ctx, 31, 0x14F064u);
    ctx->pc = 0x14F060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F05Cu;
    // 0x14f060: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF20u, 0x14F05Cu, 0x14F064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F064u;
label_14f064:
    // 0x14f064: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x14f064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x14f068: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x14f068u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f06c: 0x2232818  mult        $a1, $s1, $v1
    ctx->pc = 0x14f06cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x14f070: 0xb28821  addu        $s1, $a1, $s2
    ctx->pc = 0x14f070u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x14f074: 0xae2204f4  sw          $v0, 0x4F4($s1)
    ctx->pc = 0x14f074u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1268), GPR_U32(ctx, 2));
    // 0x14f078: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x14F078u;
    SET_GPR_U32(ctx, 31, 0x14F080u);
    ctx->pc = 0x14F07Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F078u;
    // 0x14f07c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x14F078u, 0x14F080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F080u;
label_14f080:
    // 0x14f080: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x14f080u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14f084: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x14f084u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14f088: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x14f088u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14f08c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x14f08cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14f090: 0x3e00008  jr          $ra
    ctx->pc = 0x14F090u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14F094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F090u;
        // 0x14f094: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14F090u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14F098u;
}
