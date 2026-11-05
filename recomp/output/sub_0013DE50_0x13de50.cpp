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

// Function: sub_0013DE50
// Address: 0x13de50 - 0x13de98
void sub_0013DE50_0x13de50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013DE50_0x13de50");
#endif

    switch (ctx->pc) {
        case 0x13de64u: goto label_13de64;
        case 0x13de84u: goto label_13de84;
        default: break;
    }

    ctx->pc = 0x13de50u;

    // 0x13de50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x13de50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13de54: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13de54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x13de58: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x13de58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x13de5c: 0xc04f70e  jal         func_13DC38
    ctx->pc = 0x13DE5Cu;
    SET_GPR_U32(ctx, 31, 0x13DE64u);
    ctx->pc = 0x13DE60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13DE5Cu;
    // 0x13de60: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13DC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13DC38u, 0x13DE5Cu, 0x13DE64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DE64u;
label_13de64:
    // 0x13de64: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x13de64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x13de68: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x13de68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
    // 0x13de6c: 0x246306e0  addiu       $v1, $v1, 0x6E0
    ctx->pc = 0x13de6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1760));
    // 0x13de70: 0xae00006c  sw          $zero, 0x6C($s0)
    ctx->pc = 0x13de70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 0));
    // 0x13de74: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x13de74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
    // 0x13de78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13de78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13de7c: 0xc04f8aa  jal         func_13E2A8
    ctx->pc = 0x13DE7Cu;
    SET_GPR_U32(ctx, 31, 0x13DE84u);
    ctx->pc = 0x13DE80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13DE7Cu;
    // 0x13de80: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E2A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E2A8u, 0x13DE7Cu, 0x13DE84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DE84u;
label_13de84:
    // 0x13de84: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x13de84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13de88: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x13de88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13de8c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13de8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13de90: 0x3e00008  jr          $ra
    ctx->pc = 0x13DE90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13DE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DE90u;
        // 0x13de94: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13DE90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13DE98u;
}
