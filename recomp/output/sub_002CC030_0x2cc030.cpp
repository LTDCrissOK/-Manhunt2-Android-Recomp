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

// Function: sub_002CC030
// Address: 0x2cc030 - 0x2cc0a8
void sub_002CC030_0x2cc030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CC030_0x2cc030");
#endif

    switch (ctx->pc) {
        case 0x2cc058u: goto label_2cc058;
        case 0x2cc080u: goto label_2cc080;
        default: break;
    }

    ctx->pc = 0x2cc030u;

    // 0x2cc030: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2cc030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2cc034: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2cc034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2cc038: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2cc038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2cc03c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2cc03cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc040: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2cc040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2cc044: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2cc044u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc048: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2cc048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2cc04c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2cc04cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2cc050: 0xc0b2ffe  jal         func_2CBFF8
    ctx->pc = 0x2CC050u;
    SET_GPR_U32(ctx, 31, 0x2CC058u);
    ctx->pc = 0x2CC054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC050u;
    // 0x2cc054: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBFF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBFF8u, 0x2CC050u, 0x2CC058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC058u;
label_2cc058:
    // 0x2cc058: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x2cc058u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
    // 0x2cc05c: 0x11283c  dsll32      $a1, $s1, 0
    ctx->pc = 0x2cc05cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) << (32 + 0));
    // 0x2cc060: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x2cc060u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x2cc064: 0x2610a608  addiu       $s0, $s0, -0x59F8
    ctx->pc = 0x2cc064u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294944264));
    // 0x2cc068: 0x12303c  dsll32      $a2, $s2, 0
    ctx->pc = 0x2cc068u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 18) << (32 + 0));
    // 0x2cc06c: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x2cc06cu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x2cc070: 0x13383c  dsll32      $a3, $s3, 0
    ctx->pc = 0x2cc070u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 19) << (32 + 0));
    // 0x2cc074: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x2cc074u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x2cc078: 0xc0e3cb0  jal         func_38F2C0
    ctx->pc = 0x2CC078u;
    SET_GPR_U32(ctx, 31, 0x2CC080u);
    ctx->pc = 0x2CC07Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC078u;
    // 0x2cc07c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F2C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F2C0u, 0x2CC078u, 0x2CC080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC080u;
label_2cc080:
    // 0x2cc080: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x2cc080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2cc084: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x2cc084u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x2cc088: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2cc088u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cc08c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2cc08cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2cc090: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2cc090u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cc094: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2cc094u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2cc098: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2cc098u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cc09c: 0xac43a61c  sw          $v1, -0x59E4($v0)
    ctx->pc = 0x2cc09cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x57A61Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x57A61Cu, _value); } while (0);
    // 0x2cc0a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2CC0A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CC0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC0A0u;
        // 0x2cc0a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CC0A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CC0A8u;
}
