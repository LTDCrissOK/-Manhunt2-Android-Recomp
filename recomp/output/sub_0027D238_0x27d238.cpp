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

// Function: sub_0027D238
// Address: 0x27d238 - 0x27d298
void sub_0027D238_0x27d238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027D238_0x27d238");
#endif

    switch (ctx->pc) {
        case 0x27d250u: goto label_27d250;
        case 0x27d270u: goto label_27d270;
        case 0x27d27cu: goto label_27d27c;
        case 0x27d284u: goto label_27d284;
        default: break;
    }

    ctx->pc = 0x27d238u;

    // 0x27d238: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x27d238u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x27d23c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x27d23cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d240: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x27d240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x27d244: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x27d244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x27d248: 0xc0b6ada  jal         func_2DAB68
    ctx->pc = 0x27D248u;
    SET_GPR_U32(ctx, 31, 0x27D250u);
    ctx->pc = 0x27D24Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D248u;
    // 0x27d24c: 0x3c100040  lui         $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DAB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DAB68u, 0x27D248u, 0x27D250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D250u;
label_27d250:
    // 0x27d250: 0x3c04005c  lui         $a0, 0x5C
    ctx->pc = 0x27d250u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)92 << 16));
    // 0x27d254: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x27d254u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27d258: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x27d258u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27d25c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x27d25cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d260: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x27d260u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d264: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x27d264u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27d268: 0xc0da22a  jal         func_3688A8
    ctx->pc = 0x27D268u;
    SET_GPR_U32(ctx, 31, 0x27D270u);
    ctx->pc = 0x27D26Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D268u;
    // 0x27d26c: 0x2484ef00  addiu       $a0, $a0, -0x1100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962944));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3688A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3688A8u, 0x27D268u, 0x27D270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D270u;
label_27d270:
    // 0x27d270: 0x8e04a300  lw          $a0, -0x5D00($s0)
    ctx->pc = 0x27d270u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294943488)));
    // 0x27d274: 0xc0a054c  jal         func_281530
    ctx->pc = 0x27D274u;
    SET_GPR_U32(ctx, 31, 0x27D27Cu);
    ctx->pc = 0x27D278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D274u;
    // 0x27d278: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281530u, 0x27D274u, 0x27D27Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D27Cu;
label_27d27c:
    // 0x27d27c: 0xc0c29a4  jal         func_30A690
    ctx->pc = 0x27D27Cu;
    SET_GPR_U32(ctx, 31, 0x27D284u);
    ctx->pc = 0x27D280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D27Cu;
    // 0x27d280: 0x8e04a300  lw          $a0, -0x5D00($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294943488)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A690u, 0x27D27Cu, 0x27D284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D284u;
label_27d284:
    // 0x27d284: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x27d284u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27d288: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x27d288u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x27d28c: 0x3e00008  jr          $ra
    ctx->pc = 0x27D28Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27D290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D28Cu;
        // 0x27d290: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27D28Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27D294u;
    // 0x27d294: 0x0  nop
    ctx->pc = 0x27d294u;
    // NOP
    ctx->pc = 0x27d298u;
}
