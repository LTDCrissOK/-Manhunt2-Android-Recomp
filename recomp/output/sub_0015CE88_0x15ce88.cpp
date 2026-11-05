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

// Function: sub_0015CE88
// Address: 0x15ce88 - 0x15cef8
void sub_0015CE88_0x15ce88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015CE88_0x15ce88");
#endif

    switch (ctx->pc) {
        case 0x15cebcu: goto label_15cebc;
        case 0x15cec8u: goto label_15cec8;
        default: break;
    }

    ctx->pc = 0x15ce88u;

    // 0x15ce88: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x15ce88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x15ce8c: 0x24020070  addiu       $v0, $zero, 0x70
    ctx->pc = 0x15ce8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x15ce90: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x15ce90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x15ce94: 0x30b100ff  andi        $s1, $a1, 0xFF
    ctx->pc = 0x15ce94u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x15ce98: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x15ce98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x15ce9c: 0x2221818  mult        $v1, $s1, $v0
    ctx->pc = 0x15ce9cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x15cea0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x15cea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x15cea4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x15cea4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15cea8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x15cea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x15ceac: 0x708821  addu        $s1, $v1, $s0
    ctx->pc = 0x15ceacu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x15ceb0: 0x8e32032c  lw          $s2, 0x32C($s1)
    ctx->pc = 0x15ceb0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 812)));
    // 0x15ceb4: 0xc04f1b6  jal         func_13C6D8
    ctx->pc = 0x15CEB4u;
    SET_GPR_U32(ctx, 31, 0x15CEBCu);
    ctx->pc = 0x15CEB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15CEB4u;
    // 0x15ceb8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C6D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C6D8u, 0x15CEB4u, 0x15CEBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15CEBCu;
label_15cebc:
    // 0x15cebc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15cebcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15cec0: 0xc04f42e  jal         func_13D0B8
    ctx->pc = 0x15CEC0u;
    SET_GPR_U32(ctx, 31, 0x15CEC8u);
    ctx->pc = 0x15CEC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15CEC0u;
    // 0x15cec4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13D0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13D0B8u, 0x15CEC0u, 0x15CEC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15CEC8u;
label_15cec8:
    // 0x15cec8: 0x2403001a  addiu       $v1, $zero, 0x1A
    ctx->pc = 0x15cec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x15cecc: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x15ceccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x15ced0: 0xae220328  sw          $v0, 0x328($s1)
    ctx->pc = 0x15ced0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 808), GPR_U32(ctx, 2));
    // 0x15ced4: 0xae230324  sw          $v1, 0x324($s1)
    ctx->pc = 0x15ced4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 804), GPR_U32(ctx, 3));
    // 0x15ced8: 0xae20032c  sw          $zero, 0x32C($s1)
    ctx->pc = 0x15ced8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 812), GPR_U32(ctx, 0));
    // 0x15cedc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x15cedcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15cee0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x15cee0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x15cee4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x15cee4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15cee8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x15cee8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x15ceec: 0x3e00008  jr          $ra
    ctx->pc = 0x15CEECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15CEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CEECu;
        // 0x15cef0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15CEECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15CEF4u;
    // 0x15cef4: 0x0  nop
    ctx->pc = 0x15cef4u;
    // NOP
    ctx->pc = 0x15cef8u;
}
