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

// Function: sub_00192028
// Address: 0x192028 - 0x1920a0
void sub_00192028_0x192028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00192028_0x192028");
#endif

    switch (ctx->pc) {
        case 0x192044u: goto label_192044;
        case 0x192058u: goto label_192058;
        case 0x192064u: goto label_192064;
        case 0x192070u: goto label_192070;
        case 0x19207cu: goto label_19207c;
        default: break;
    }

    ctx->pc = 0x192028u;

    // 0x192028: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x192028u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19202c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19202cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x192030: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x192030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x192034: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x192034u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192038: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x192038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19203c: 0xc061a32  jal         func_1868C8
    ctx->pc = 0x19203Cu;
    SET_GPR_U32(ctx, 31, 0x192044u);
    ctx->pc = 0x192040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19203Cu;
    // 0x192040: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1868C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1868C8u, 0x19203Cu, 0x192044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192044u;
label_192044:
    // 0x192044: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x192044u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x192048: 0x240400b0  addiu       $a0, $zero, 0xB0
    ctx->pc = 0x192048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    // 0x19204c: 0x24630ff0  addiu       $v1, $v1, 0xFF0
    ctx->pc = 0x19204cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4080));
    // 0x192050: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x192050u;
    SET_GPR_U32(ctx, 31, 0x192058u);
    ctx->pc = 0x192054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192050u;
    // 0x192054: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x192050u, 0x192058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192058u;
label_192058:
    // 0x192058: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x192058u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19205c: 0xc0644de  jal         func_191378
    ctx->pc = 0x19205Cu;
    SET_GPR_U32(ctx, 31, 0x192064u);
    ctx->pc = 0x192060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19205Cu;
    // 0x192060: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x191378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191378u, 0x19205Cu, 0x192064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192064u;
label_192064:
    // 0x192064: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x192064u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    // 0x192068: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x192068u;
    SET_GPR_U32(ctx, 31, 0x192070u);
    ctx->pc = 0x19206Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192068u;
    // 0x19206c: 0x24040080  addiu       $a0, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x192068u, 0x192070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192070u;
label_192070:
    // 0x192070: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x192070u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192074: 0xc0635bc  jal         func_18D6F0
    ctx->pc = 0x192074u;
    SET_GPR_U32(ctx, 31, 0x19207Cu);
    ctx->pc = 0x192078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192074u;
    // 0x192078: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18D6F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18D6F0u, 0x192074u, 0x19207Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19207Cu;
label_19207c:
    // 0x19207c: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x19207cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x192080: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x192080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x192084: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x192084u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x192088: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x192088u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x19208c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x19208cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192090: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x192090u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x192094: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x192094u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x192098: 0x3e00008  jr          $ra
    ctx->pc = 0x192098u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19209Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192098u;
        // 0x19209c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x192098u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1920A0u;
}
