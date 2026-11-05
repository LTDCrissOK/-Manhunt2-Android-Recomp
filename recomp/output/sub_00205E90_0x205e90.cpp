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

// Function: sub_00205E90
// Address: 0x205e90 - 0x205f00
void sub_00205E90_0x205e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00205E90_0x205e90");
#endif

    switch (ctx->pc) {
        case 0x205eb4u: goto label_205eb4;
        case 0x205ebcu: goto label_205ebc;
        case 0x205ec4u: goto label_205ec4;
        case 0x205eccu: goto label_205ecc;
        case 0x205ed4u: goto label_205ed4;
        case 0x205ee8u: goto label_205ee8;
        default: break;
    }

    ctx->pc = 0x205e90u;

    // 0x205e90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x205e90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x205e94: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x205e94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x205e98: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x205e98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x205e9c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x205e9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x205ea0: 0x92020018  lbu         $v0, 0x18($s0)
    ctx->pc = 0x205ea0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x205ea4: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x205EA4u;
    {
        const bool branch_taken_0x205ea4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x205ea4) {
            ctx->pc = 0x205EA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x205EA4u;
            // 0x205ea8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x205EF0u;
            goto label_205ef0;
        }
    }
    ctx->pc = 0x205EACu;
    // 0x205eac: 0xc0e4f86  jal         func_393E18
    ctx->pc = 0x205EACu;
    SET_GPR_U32(ctx, 31, 0x205EB4u);
    ctx->pc = 0x393E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x393E18u, 0x205EACu, 0x205EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205EB4u;
label_205eb4:
    // 0x205eb4: 0xc0e5cd4  jal         func_397350
    ctx->pc = 0x205EB4u;
    SET_GPR_U32(ctx, 31, 0x205EBCu);
    ctx->pc = 0x397350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397350u, 0x205EB4u, 0x205EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205EBCu;
label_205ebc:
    // 0x205ebc: 0xc0e7b3c  jal         func_39ECF0
    ctx->pc = 0x205EBCu;
    SET_GPR_U32(ctx, 31, 0x205EC4u);
    ctx->pc = 0x39ECF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39ECF0u, 0x205EBCu, 0x205EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205EC4u;
label_205ec4:
    // 0x205ec4: 0xc0e5874  jal         func_3961D0
    ctx->pc = 0x205EC4u;
    SET_GPR_U32(ctx, 31, 0x205ECCu);
    ctx->pc = 0x3961D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3961D0u, 0x205EC4u, 0x205ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205ECCu;
label_205ecc:
    // 0x205ecc: 0xc0b2524  jal         func_2C9490
    ctx->pc = 0x205ECCu;
    SET_GPR_U32(ctx, 31, 0x205ED4u);
    ctx->pc = 0x205ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x205ECCu;
    // 0x205ed0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9490u, 0x205ECCu, 0x205ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205ED4u;
label_205ed4:
    // 0x205ed4: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x205ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x205ed8: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x205ED8u;
    {
        const bool branch_taken_0x205ed8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x205ed8) {
            ctx->pc = 0x205EDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x205ED8u;
            // 0x205edc: 0xa2000018  sb          $zero, 0x18($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 24), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x205EECu;
            goto label_205eec;
        }
    }
    ctx->pc = 0x205EE0u;
    // 0x205ee0: 0xc0b2524  jal         func_2C9490
    ctx->pc = 0x205EE0u;
    SET_GPR_U32(ctx, 31, 0x205EE8u);
    ctx->pc = 0x2C9490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9490u, 0x205EE0u, 0x205EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x205EE8u;
label_205ee8:
    // 0x205ee8: 0xa2000018  sb          $zero, 0x18($s0)
    ctx->pc = 0x205ee8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 24), (uint8_t)GPR_U32(ctx, 0));
label_205eec:
    // 0x205eec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x205eecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_205ef0:
    // 0x205ef0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x205ef0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x205ef4: 0x3e00008  jr          $ra
    ctx->pc = 0x205EF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x205EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205EF4u;
        // 0x205ef8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x205EF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x205EFCu;
    // 0x205efc: 0x0  nop
    ctx->pc = 0x205efcu;
    // NOP
    ctx->pc = 0x205f00u;
}
