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

// Function: sub_002911F0
// Address: 0x2911f0 - 0x291220
void sub_002911F0_0x2911f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002911F0_0x2911f0");
#endif

    switch (ctx->pc) {
        case 0x291214u: goto label_291214;
        default: break;
    }

    ctx->pc = 0x2911f0u;

    // 0x2911f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2911f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2911f4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2911f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2911f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2911f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2911fc: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2911fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291200: 0x44808000  mtc1        $zero, $f16
    ctx->pc = 0x291200u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
    // 0x291204: 0xc44e0020  lwc1        $f14, 0x20($v0)
    ctx->pc = 0x291204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x291208: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x291208u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x29120c: 0xc09f662  jal         func_27D988
    ctx->pc = 0x29120Cu;
    SET_GPR_U32(ctx, 31, 0x291214u);
    ctx->pc = 0x291210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29120Cu;
    // 0x291210: 0xc44f0024  lwc1        $f15, 0x24($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x27D988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27D988u, 0x29120Cu, 0x291214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291214u;
label_291214:
    // 0x291214: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x291214u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x291218: 0x3e00008  jr          $ra
    ctx->pc = 0x291218u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29121Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291218u;
        // 0x29121c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x291218u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x291220u;
}
