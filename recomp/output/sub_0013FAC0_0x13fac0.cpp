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

// Function: sub_0013FAC0
// Address: 0x13fac0 - 0x13fb68
void sub_0013FAC0_0x13fac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013FAC0_0x13fac0");
#endif

    switch (ctx->pc) {
        case 0x13fb00u: goto label_13fb00;
        case 0x13fb0cu: goto label_13fb0c;
        case 0x13fb1cu: goto label_13fb1c;
        case 0x13fb34u: goto label_13fb34;
        case 0x13fb48u: goto label_13fb48;
        default: break;
    }

    ctx->pc = 0x13fac0u;

    // 0x13fac0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x13fac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x13fac4: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x13fac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x13fac8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x13fac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x13facc: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x13faccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x13fad0: 0x30b200ff  andi        $s2, $a1, 0xFF
    ctx->pc = 0x13fad0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x13fad4: 0x2429818  mult        $s3, $s2, $v0
    ctx->pc = 0x13fad4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 19, (int32_t)result); }
    // 0x13fad8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x13fad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x13fadc: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x13fadcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x13fae0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x13fae0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fae4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x13fae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x13fae8: 0x2331021  addu        $v0, $s1, $s3
    ctx->pc = 0x13fae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
    // 0x13faec: 0x8c5004e4  lw          $s0, 0x4E4($v0)
    ctx->pc = 0x13faecu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1252)));
    // 0x13faf0: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
    ctx->pc = 0x13FAF0u;
    {
        const bool branch_taken_0x13faf0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x13FAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FAF0u;
        // 0x13faf4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13faf0) {
            ctx->pc = 0x13FB4Cu;
            goto label_13fb4c;
        }
    }
    ctx->pc = 0x13FAF8u;
    // 0x13faf8: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x13FAF8u;
    SET_GPR_U32(ctx, 31, 0x13FB00u);
    ctx->pc = 0x13FAFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FAF8u;
    // 0x13fafc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x13FAF8u, 0x13FB00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FB00u;
label_13fb00:
    // 0x13fb00: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x13fb00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fb04: 0xc0aafd2  jal         func_2ABF48
    ctx->pc = 0x13FB04u;
    SET_GPR_U32(ctx, 31, 0x13FB0Cu);
    ctx->pc = 0x13FB08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FB04u;
    // 0x13fb08: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF48u, 0x13FB04u, 0x13FB0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FB0Cu;
label_13fb0c:
    // 0x13fb0c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x13FB0Cu;
    {
        const bool branch_taken_0x13fb0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13FB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FB0Cu;
        // 0x13fb10: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13fb0c) {
            ctx->pc = 0x13FB3Cu;
            goto label_13fb3c;
        }
    }
    ctx->pc = 0x13FB14u;
    // 0x13fb14: 0xc04fea2  jal         func_13FA88
    ctx->pc = 0x13FB14u;
    SET_GPR_U32(ctx, 31, 0x13FB1Cu);
    ctx->pc = 0x13FB18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FB14u;
    // 0x13fb18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13FA88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13FA88u, 0x13FB14u, 0x13FB1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FB1Cu;
label_13fb1c:
    // 0x13fb1c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13fb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13fb20: 0x2711821  addu        $v1, $s3, $s1
    ctx->pc = 0x13fb20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
    // 0x13fb24: 0xac6204e8  sw          $v0, 0x4E8($v1)
    ctx->pc = 0x13fb24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1256), GPR_U32(ctx, 2));
    // 0x13fb28: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x13fb28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fb2c: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x13FB2Cu;
    SET_GPR_U32(ctx, 31, 0x13FB34u);
    ctx->pc = 0x13FB30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FB2Cu;
    // 0x13fb30: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x13FB2Cu, 0x13FB34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FB34u;
label_13fb34:
    // 0x13fb34: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x13FB34u;
    {
        const bool branch_taken_0x13fb34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13FB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FB34u;
        // 0x13fb38: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13fb34) {
            ctx->pc = 0x13FB4Cu;
            goto label_13fb4c;
        }
    }
    ctx->pc = 0x13FB3Cu;
label_13fb3c:
    // 0x13fb3c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x13fb3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fb40: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x13FB40u;
    SET_GPR_U32(ctx, 31, 0x13FB48u);
    ctx->pc = 0x13FB44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FB40u;
    // 0x13fb44: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x13FB40u, 0x13FB48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13FB48u;
label_13fb48:
    // 0x13fb48: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13fb48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13fb4c:
    // 0x13fb4c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x13fb4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13fb50: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x13fb50u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13fb54: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x13fb54u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13fb58: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x13fb58u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x13fb5c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x13fb5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13fb60: 0x3e00008  jr          $ra
    ctx->pc = 0x13FB60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13FB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FB60u;
        // 0x13fb64: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13FB60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13FB68u;
}
