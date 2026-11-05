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

// Function: sub_00134248
// Address: 0x134248 - 0x134288
void sub_00134248_0x134248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00134248_0x134248");
#endif

    switch (ctx->pc) {
        case 0x134264u: goto label_134264;
        case 0x134274u: goto label_134274;
        default: break;
    }

    ctx->pc = 0x134248u;

    // 0x134248: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x134248u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13424c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13424cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x134250: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x134250u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134254: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x134254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x134258: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x134258u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x13425c: 0xc041e8c  jal         func_107A30
    ctx->pc = 0x13425Cu;
    SET_GPR_U32(ctx, 31, 0x134264u);
    ctx->pc = 0x134260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13425Cu;
    // 0x134260: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107A30u, 0x13425Cu, 0x134264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134264u;
label_134264:
    // 0x134264: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x134264u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x134268: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x134268u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13426c: 0xc04d110  jal         func_134440
    ctx->pc = 0x13426Cu;
    SET_GPR_U32(ctx, 31, 0x134274u);
    ctx->pc = 0x134270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13426Cu;
    // 0x134270: 0xae020028  sw          $v0, 0x28($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x134440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134440u, 0x13426Cu, 0x134274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134274u;
label_134274:
    // 0x134274: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x134274u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x134278: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x134278u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13427c: 0x3e00008  jr          $ra
    ctx->pc = 0x13427Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x134280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13427Cu;
        // 0x134280: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13427Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x134284u;
    // 0x134284: 0x0  nop
    ctx->pc = 0x134284u;
    // NOP
    ctx->pc = 0x134288u;
}
