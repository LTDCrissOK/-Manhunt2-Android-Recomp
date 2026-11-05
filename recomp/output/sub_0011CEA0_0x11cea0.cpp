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

// Function: sub_0011CEA0
// Address: 0x11cea0 - 0x11cef0
void sub_0011CEA0_0x11cea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011CEA0_0x11cea0");
#endif

    switch (ctx->pc) {
        case 0x11cea0u: goto label_11cea0;
        case 0x11cea4u: goto label_11cea4;
        case 0x11cea8u: goto label_11cea8;
        case 0x11ceacu: goto label_11ceac;
        case 0x11ceb0u: goto label_11ceb0;
        case 0x11ceb4u: goto label_11ceb4;
        case 0x11ceb8u: goto label_11ceb8;
        case 0x11cebcu: goto label_11cebc;
        case 0x11cec0u: goto label_11cec0;
        case 0x11cec4u: goto label_11cec4;
        case 0x11cec8u: goto label_11cec8;
        case 0x11ceccu: goto label_11cecc;
        case 0x11ced0u: goto label_11ced0;
        case 0x11ced4u: goto label_11ced4;
        case 0x11ced8u: goto label_11ced8;
        case 0x11cedcu: goto label_11cedc;
        case 0x11cee0u: goto label_11cee0;
        case 0x11cee4u: goto label_11cee4;
        case 0x11cee8u: goto label_11cee8;
        case 0x11ceecu: goto label_11ceec;
        default: break;
    }

    ctx->pc = 0x11cea0u;

label_11cea0:
    // 0x11cea0: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x11cea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
label_11cea4:
    // 0x11cea4: 0xffb00110  sd          $s0, 0x110($sp)
    ctx->pc = 0x11cea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 16));
label_11cea8:
    // 0x11cea8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x11cea8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_11ceac:
    // 0x11ceac: 0xffbf0118  sd          $ra, 0x118($sp)
    ctx->pc = 0x11ceacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 31));
label_11ceb0:
    // 0x11ceb0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11ceb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_11ceb4:
    // 0x11ceb4: 0xc09e062  jal         func_278188
label_11ceb8:
    if (ctx->pc == 0x11CEB8u) {
        ctx->pc = 0x11CEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CEB4u;
        // 0x11ceb8: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11CEBCu;
        goto label_11cebc;
    }
    ctx->pc = 0x11CEB4u;
    SET_GPR_U32(ctx, 31, 0x11CEBCu);
    ctx->pc = 0x11CEB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CEB4u;
    // 0x11ceb8: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278188u, 0x11CEB4u, 0x11CEBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CEBCu;
label_11cebc:
    // 0x11cebc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x11cebcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_11cec0:
    // 0x11cec0: 0xc04751e  jal         func_11D478
label_11cec4:
    if (ctx->pc == 0x11CEC4u) {
        ctx->pc = 0x11CEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CEC0u;
        // 0x11cec4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11CEC8u;
        goto label_11cec8;
    }
    ctx->pc = 0x11CEC0u;
    SET_GPR_U32(ctx, 31, 0x11CEC8u);
    ctx->pc = 0x11CEC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CEC0u;
    // 0x11cec4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D478u, 0x11CEC0u, 0x11CEC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CEC8u;
label_11cec8:
    // 0x11cec8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11cec8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11cecc:
    // 0x11cecc: 0x2ca20045  sltiu       $v0, $a1, 0x45
    ctx->pc = 0x11ceccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)69) ? 1 : 0);
label_11ced0:
    // 0x11ced0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_11ced4:
    if (ctx->pc == 0x11CED4u) {
        ctx->pc = 0x11CED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CED0u;
        // 0x11ced4: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11CED8u;
        goto label_11ced8;
    }
    ctx->pc = 0x11CED0u;
    {
        const bool branch_taken_0x11ced0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CED0u;
        // 0x11ced4: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ced0) {
            ctx->pc = 0x11CEF8u;
            return;
        }
    }
    ctx->pc = 0x11CED8u;
label_11ced8:
    // 0x11ced8: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x11ced8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_11cedc:
    // 0x11cedc: 0x2442bdf0  addiu       $v0, $v0, -0x4210
    ctx->pc = 0x11cedcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950384));
label_11cee0:
    // 0x11cee0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x11cee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_11cee4:
    // 0x11cee4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x11cee4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_11cee8:
    // 0x11cee8: 0x800008  jr          $a0
label_11ceec:
    if (ctx->pc == 0x11CEECu) {
        ctx->pc = 0x11CEF0u;
        goto label_fallthrough_0x11cee8;
    }
    ctx->pc = 0x11CEE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11CEE8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x11cee8:
    ctx->pc = 0x11CEF0u;
}
