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

// Function: sub_0030B250
// Address: 0x30b250 - 0x30b278
void sub_0030B250_0x30b250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030B250_0x30b250");
#endif

    switch (ctx->pc) {
        case 0x30b26cu: goto label_30b26c;
        default: break;
    }

    ctx->pc = 0x30b250u;

    // 0x30b250: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x30b250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x30b254: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x30b254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x30b258: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x30b258u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x30b25c: 0xe7ac0010  swc1        $f12, 0x10($sp)
    ctx->pc = 0x30b25cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x30b260: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x30b260u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b264: 0xc0c2c18  jal         func_30B060
    ctx->pc = 0x30B264u;
    SET_GPR_U32(ctx, 31, 0x30B26Cu);
    ctx->pc = 0x30B268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B264u;
    // 0x30b268: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30B060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30B060u, 0x30B264u, 0x30B26Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B26Cu;
label_30b26c:
    // 0x30b26c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x30b26cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30b270: 0x3e00008  jr          $ra
    ctx->pc = 0x30B270u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30B274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B270u;
        // 0x30b274: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30B270u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30B278u;
}
