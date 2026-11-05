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

// Function: sub_0039AD68
// Address: 0x39ad68 - 0x39adc0
void sub_0039AD68_0x39ad68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039AD68_0x39ad68");
#endif

    switch (ctx->pc) {
        case 0x39ad8cu: goto label_39ad8c;
        case 0x39ad9cu: goto label_39ad9c;
        case 0x39ada4u: goto label_39ada4;
        default: break;
    }

    ctx->pc = 0x39ad68u;

    // 0x39ad68: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x39ad68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x39ad6c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x39ad6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x39ad70: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x39ad70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39ad74: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x39ad74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x39ad78: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x39ad78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39ad7c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x39ad7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x39ad80: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x39ad80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x39ad84: 0xc0ebe5c  jal         func_3AF970
    ctx->pc = 0x39AD84u;
    SET_GPR_U32(ctx, 31, 0x39AD8Cu);
    ctx->pc = 0x39AD88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39AD84u;
    // 0x39ad88: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AF970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AF970u, 0x39AD84u, 0x39AD8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39AD8Cu;
label_39ad8c:
    // 0x39ad8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39ad8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39ad90: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x39ad90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39ad94: 0xc0e6b70  jal         func_39ADC0
    ctx->pc = 0x39AD94u;
    SET_GPR_U32(ctx, 31, 0x39AD9Cu);
    ctx->pc = 0x39AD98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39AD94u;
    // 0x39ad98: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39ADC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39ADC0u, 0x39AD94u, 0x39AD9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39AD9Cu;
label_39ad9c:
    // 0x39ad9c: 0xc0ebe5e  jal         func_3AF978
    ctx->pc = 0x39AD9Cu;
    SET_GPR_U32(ctx, 31, 0x39ADA4u);
    ctx->pc = 0x39ADA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39AD9Cu;
    // 0x39ada0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AF978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AF978u, 0x39AD9Cu, 0x39ADA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39ADA4u;
label_39ada4:
    // 0x39ada4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x39ada4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x39ada8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x39ada8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39adac: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x39adacu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39adb0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x39adb0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39adb4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x39adb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x39adb8: 0x3e00008  jr          $ra
    ctx->pc = 0x39ADB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39ADBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39ADB8u;
        // 0x39adbc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39ADB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39ADC0u;
}
