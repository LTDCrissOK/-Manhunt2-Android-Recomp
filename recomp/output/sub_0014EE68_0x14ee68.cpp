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

// Function: sub_0014EE68
// Address: 0x14ee68 - 0x14eec0
void sub_0014EE68_0x14ee68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014EE68_0x14ee68");
#endif

    switch (ctx->pc) {
        case 0x14ee88u: goto label_14ee88;
        case 0x14ee90u: goto label_14ee90;
        case 0x14eeacu: goto label_14eeac;
        default: break;
    }

    ctx->pc = 0x14ee68u;

    // 0x14ee68: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x14ee68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x14ee6c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x14ee6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x14ee70: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x14ee70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x14ee74: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x14ee74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ee78: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x14ee78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x14ee7c: 0x30b000ff  andi        $s0, $a1, 0xFF
    ctx->pc = 0x14ee7cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x14ee80: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x14EE80u;
    SET_GPR_U32(ctx, 31, 0x14EE88u);
    ctx->pc = 0x14EE84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14EE80u;
    // 0x14ee84: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x14EE80u, 0x14EE88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EE88u;
label_14ee88:
    // 0x14ee88: 0xc0aafc4  jal         func_2ABF10
    ctx->pc = 0x14EE88u;
    SET_GPR_U32(ctx, 31, 0x14EE90u);
    ctx->pc = 0x14EE8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14EE88u;
    // 0x14ee8c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF10u, 0x14EE88u, 0x14EE90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EE90u;
label_14ee90:
    // 0x14ee90: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x14ee90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x14ee94: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x14ee94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ee98: 0x2038018  mult        $s0, $s0, $v1
    ctx->pc = 0x14ee98u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x14ee9c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x14ee9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14eea0: 0x2308821  addu        $s1, $s1, $s0
    ctx->pc = 0x14eea0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x14eea4: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x14EEA4u;
    SET_GPR_U32(ctx, 31, 0x14EEACu);
    ctx->pc = 0x14EEA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14EEA4u;
    // 0x14eea8: 0xae2204ec  sw          $v0, 0x4EC($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1260), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x14EEA4u, 0x14EEACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EEACu;
label_14eeac:
    // 0x14eeac: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x14eeacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14eeb0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x14eeb0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14eeb4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x14eeb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14eeb8: 0x3e00008  jr          $ra
    ctx->pc = 0x14EEB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14EEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EEB8u;
        // 0x14eebc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14EEB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14EEC0u;
}
