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

// Function: sub_00115218
// Address: 0x115218 - 0x115260
void sub_00115218_0x115218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00115218_0x115218");
#endif

    switch (ctx->pc) {
        case 0x115234u: goto label_115234;
        default: break;
    }

    ctx->pc = 0x115218u;

    // 0x115218: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x115218u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11521c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11521cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x115220: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x115220u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x115224: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x115224u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115228: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x115228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x11522c: 0xc045484  jal         func_115210
    ctx->pc = 0x11522Cu;
    SET_GPR_U32(ctx, 31, 0x115234u);
    ctx->pc = 0x115230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11522Cu;
    // 0x115230: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115210u, 0x11522Cu, 0x115234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115234u;
label_115234:
    // 0x115234: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x115234u;
    {
        const bool branch_taken_0x115234 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x115238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115234u;
        // 0x115238: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115234) {
            ctx->pc = 0x115248u;
            goto label_115248;
        }
    }
    ctx->pc = 0x11523Cu;
    // 0x11523c: 0x8e0201d8  lw          $v0, 0x1D8($s0)
    ctx->pc = 0x11523cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 472)));
    // 0x115240: 0x2882b  sltu        $s1, $zero, $v0
    ctx->pc = 0x115240u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x115244: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x115244u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_115248:
    // 0x115248: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x115248u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11524c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x11524cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x115250: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x115250u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x115254: 0x3e00008  jr          $ra
    ctx->pc = 0x115254u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x115258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115254u;
        // 0x115258: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115254u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11525Cu;
    // 0x11525c: 0x0  nop
    ctx->pc = 0x11525cu;
    // NOP
    ctx->pc = 0x115260u;
}
