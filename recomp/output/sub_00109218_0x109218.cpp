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

// Function: sub_00109218
// Address: 0x109218 - 0x109258
void sub_00109218_0x109218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00109218_0x109218");
#endif

    switch (ctx->pc) {
        case 0x10922cu: goto label_10922c;
        case 0x109234u: goto label_109234;
        case 0x10923cu: goto label_10923c;
        default: break;
    }

    ctx->pc = 0x109218u;

    // 0x109218: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x109218u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10921c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10921cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x109220: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x109220u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x109224: 0xc0430e4  jal         func_10C390
    ctx->pc = 0x109224u;
    SET_GPR_U32(ctx, 31, 0x10922Cu);
    ctx->pc = 0x109228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109224u;
    // 0x109228: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C390u, 0x109224u, 0x10922Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10922Cu;
label_10922c:
    // 0x10922c: 0xc04329c  jal         func_10CA70
    ctx->pc = 0x10922Cu;
    SET_GPR_U32(ctx, 31, 0x109234u);
    ctx->pc = 0x109230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10922Cu;
    // 0x109230: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CA70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CA70u, 0x10922Cu, 0x109234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109234u;
label_109234:
    // 0x109234: 0xc043614  jal         func_10D850
    ctx->pc = 0x109234u;
    SET_GPR_U32(ctx, 31, 0x10923Cu);
    ctx->pc = 0x109238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109234u;
    // 0x109238: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10D850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D850u, 0x109234u, 0x10923Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10923Cu;
label_10923c:
    // 0x10923c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10923cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x109240: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x109240u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x109244: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x109244u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x109248: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x109248u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10924c: 0x3e00008  jr          $ra
    ctx->pc = 0x10924Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x109250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10924Cu;
        // 0x109250: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10924Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x109254u;
    // 0x109254: 0x0  nop
    ctx->pc = 0x109254u;
    // NOP
    ctx->pc = 0x109258u;
}
