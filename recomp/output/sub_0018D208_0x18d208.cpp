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

// Function: sub_0018D208
// Address: 0x18d208 - 0x18d250
void sub_0018D208_0x18d208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018D208_0x18d208");
#endif

    switch (ctx->pc) {
        case 0x18d220u: goto label_18d220;
        case 0x18d22cu: goto label_18d22c;
        case 0x18d238u: goto label_18d238;
        default: break;
    }

    ctx->pc = 0x18d208u;

    // 0x18d208: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x18d208u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18d20c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x18d20cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x18d210: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x18d210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x18d214: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x18d214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x18d218: 0xc061a12  jal         func_186848
    ctx->pc = 0x18D218u;
    SET_GPR_U32(ctx, 31, 0x18D220u);
    ctx->pc = 0x18D21Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D218u;
    // 0x18d21c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x18D218u, 0x18D220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D220u;
label_18d220:
    // 0x18d220: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x18d220u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d224: 0xc061a2a  jal         func_1868A8
    ctx->pc = 0x18D224u;
    SET_GPR_U32(ctx, 31, 0x18D22Cu);
    ctx->pc = 0x18D228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D224u;
    // 0x18d228: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1868A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1868A8u, 0x18D224u, 0x18D22Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D22Cu;
label_18d22c:
    // 0x18d22c: 0x8c450450  lw          $a1, 0x450($v0)
    ctx->pc = 0x18d22cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1104)));
    // 0x18d230: 0xc070d6e  jal         func_1C35B8
    ctx->pc = 0x18D230u;
    SET_GPR_U32(ctx, 31, 0x18D238u);
    ctx->pc = 0x18D234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18D230u;
    // 0x18d234: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C35B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C35B8u, 0x18D230u, 0x18D238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18D238u;
label_18d238:
    // 0x18d238: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x18d238u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18d23c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x18d23cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x18d240: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x18d240u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x18d244: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x18d244u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18d248: 0x3e00008  jr          $ra
    ctx->pc = 0x18D248u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18D24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D248u;
        // 0x18d24c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18D248u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18D250u;
}
