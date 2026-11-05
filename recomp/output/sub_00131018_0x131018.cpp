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

// Function: sub_00131018
// Address: 0x131018 - 0x1310a8
void sub_00131018_0x131018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00131018_0x131018");
#endif

    switch (ctx->pc) {
        case 0x131048u: goto label_131048;
        case 0x131054u: goto label_131054;
        case 0x13105cu: goto label_13105c;
        case 0x131074u: goto label_131074;
        case 0x131084u: goto label_131084;
        default: break;
    }

    ctx->pc = 0x131018u;

    // 0x131018: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x131018u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13101c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13101cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x131020: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x131020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x131024: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x131024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x131028: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x131028u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13102c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x13102cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x131030: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x131030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x131034: 0x8c430258  lw          $v1, 0x258($v0)
    ctx->pc = 0x131034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 600)));
    // 0x131038: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x131038u;
    {
        const bool branch_taken_0x131038 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x13103Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131038u;
        // 0x13103c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x131038) {
            ctx->pc = 0x13108Cu;
            goto label_13108c;
        }
    }
    ctx->pc = 0x131040u;
    // 0x131040: 0xc045efe  jal         func_117BF8
    ctx->pc = 0x131040u;
    SET_GPR_U32(ctx, 31, 0x131048u);
    ctx->pc = 0x131044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131040u;
    // 0x131044: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117BF8u, 0x131040u, 0x131048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131048u;
label_131048:
    // 0x131048: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x131048u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13104c: 0xc045f00  jal         func_117C00
    ctx->pc = 0x13104Cu;
    SET_GPR_U32(ctx, 31, 0x131054u);
    ctx->pc = 0x131050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13104Cu;
    // 0x131050: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117C00u, 0x13104Cu, 0x131054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131054u;
label_131054:
    // 0x131054: 0xc043920  jal         func_10E480
    ctx->pc = 0x131054u;
    SET_GPR_U32(ctx, 31, 0x13105Cu);
    ctx->pc = 0x131058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131054u;
    // 0x131058: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E480u, 0x131054u, 0x13105Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13105Cu;
label_13105c:
    // 0x13105c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x13105cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131060: 0x5200000b  beql        $s0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x131060u;
    {
        const bool branch_taken_0x131060 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x131060) {
            ctx->pc = 0x131064u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x131060u;
            // 0x131064: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x131090u;
            goto label_131090;
        }
    }
    ctx->pc = 0x131068u;
    // 0x131068: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x131068u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13106c: 0xc0944da  jal         func_251368
    ctx->pc = 0x13106Cu;
    SET_GPR_U32(ctx, 31, 0x131074u);
    ctx->pc = 0x131070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13106Cu;
    // 0x131070: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x251368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x251368u, 0x13106Cu, 0x131074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131074u;
label_131074:
    // 0x131074: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x131074u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x131078: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x131078u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13107c: 0xc04785a  jal         func_11E168
    ctx->pc = 0x13107Cu;
    SET_GPR_U32(ctx, 31, 0x131084u);
    ctx->pc = 0x131080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13107Cu;
    // 0x131080: 0x24849a08  addiu       $a0, $a0, -0x65F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E168u, 0x13107Cu, 0x131084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131084u;
label_131084:
    // 0x131084: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x131084u;
    {
        const bool branch_taken_0x131084 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x131084) {
            ctx->pc = 0x131088u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x131084u;
            // 0x131088: 0xac5201c8  sw          $s2, 0x1C8($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 456), GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13108Cu;
            goto label_13108c;
        }
    }
    ctx->pc = 0x13108Cu;
label_13108c:
    // 0x13108c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13108cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_131090:
    // 0x131090: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x131090u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x131094: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x131094u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x131098: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x131098u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13109c: 0x3e00008  jr          $ra
    ctx->pc = 0x13109Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1310A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13109Cu;
        // 0x1310a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13109Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1310A4u;
    // 0x1310a4: 0x0  nop
    ctx->pc = 0x1310a4u;
    // NOP
    ctx->pc = 0x1310a8u;
}
