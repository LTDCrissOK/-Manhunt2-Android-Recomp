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

// Function: sub_0015AD48
// Address: 0x15ad48 - 0x15add8
void sub_0015AD48_0x15ad48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015AD48_0x15ad48");
#endif

    switch (ctx->pc) {
        case 0x15ad84u: goto label_15ad84;
        case 0x15ad90u: goto label_15ad90;
        case 0x15ada0u: goto label_15ada0;
        case 0x15adb0u: goto label_15adb0;
        case 0x15adbcu: goto label_15adbc;
        default: break;
    }

    ctx->pc = 0x15ad48u;

    // 0x15ad48: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x15ad48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x15ad4c: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x15ad4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x15ad50: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x15ad50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x15ad54: 0x30b200ff  andi        $s2, $a1, 0xFF
    ctx->pc = 0x15ad54u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x15ad58: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x15ad58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x15ad5c: 0x2421818  mult        $v1, $s2, $v0
    ctx->pc = 0x15ad5cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x15ad60: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x15ad60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x15ad64: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x15ad64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ad68: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x15ad68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x15ad6c: 0x711021  addu        $v0, $v1, $s1
    ctx->pc = 0x15ad6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x15ad70: 0x8c500a30  lw          $s0, 0xA30($v0)
    ctx->pc = 0x15ad70u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2608)));
    // 0x15ad74: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x15AD74u;
    {
        const bool branch_taken_0x15ad74 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AD74u;
        // 0x15ad78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ad74) {
            ctx->pc = 0x15ADB4u;
            goto label_15adb4;
        }
    }
    ctx->pc = 0x15AD7Cu;
    // 0x15ad7c: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x15AD7Cu;
    SET_GPR_U32(ctx, 31, 0x15AD84u);
    ctx->pc = 0x15AD80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15AD7Cu;
    // 0x15ad80: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x15AD7Cu, 0x15AD84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15AD84u;
label_15ad84:
    // 0x15ad84: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15ad84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ad88: 0xc0aafd2  jal         func_2ABF48
    ctx->pc = 0x15AD88u;
    SET_GPR_U32(ctx, 31, 0x15AD90u);
    ctx->pc = 0x15AD8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15AD88u;
    // 0x15ad8c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF48u, 0x15AD88u, 0x15AD90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15AD90u;
label_15ad90:
    // 0x15ad90: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x15AD90u;
    {
        const bool branch_taken_0x15ad90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15AD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AD90u;
        // 0x15ad94: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ad90) {
            ctx->pc = 0x15ADA8u;
            goto label_15ada8;
        }
    }
    ctx->pc = 0x15AD98u;
    // 0x15ad98: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x15AD98u;
    SET_GPR_U32(ctx, 31, 0x15ADA0u);
    ctx->pc = 0x15AD9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15AD98u;
    // 0x15ad9c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x15AD98u, 0x15ADA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15ADA0u;
label_15ada0:
    // 0x15ada0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x15ADA0u;
    {
        const bool branch_taken_0x15ada0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15ADA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ADA0u;
        // 0x15ada4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ada0) {
            ctx->pc = 0x15ADC0u;
            goto label_15adc0;
        }
    }
    ctx->pc = 0x15ADA8u;
label_15ada8:
    // 0x15ada8: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x15ADA8u;
    SET_GPR_U32(ctx, 31, 0x15ADB0u);
    ctx->pc = 0x15ADACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15ADA8u;
    // 0x15adac: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x15ADA8u, 0x15ADB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15ADB0u;
label_15adb0:
    // 0x15adb0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15adb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_15adb4:
    // 0x15adb4: 0xc056b32  jal         func_15ACC8
    ctx->pc = 0x15ADB4u;
    SET_GPR_U32(ctx, 31, 0x15ADBCu);
    ctx->pc = 0x15ADB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15ADB4u;
    // 0x15adb8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15ACC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15ACC8u, 0x15ADB4u, 0x15ADBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15ADBCu;
label_15adbc:
    // 0x15adbc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15adbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15adc0:
    // 0x15adc0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x15adc0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15adc4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x15adc4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x15adc8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x15adc8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15adcc: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x15adccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x15add0: 0x3e00008  jr          $ra
    ctx->pc = 0x15ADD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15ADD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ADD0u;
        // 0x15add4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15ADD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15ADD8u;
}
