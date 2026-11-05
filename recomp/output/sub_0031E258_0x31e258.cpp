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

// Function: sub_0031E258
// Address: 0x31e258 - 0x31e2c8
void sub_0031E258_0x31e258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031E258_0x31e258");
#endif

    switch (ctx->pc) {
        case 0x31e268u: goto label_31e268;
        case 0x31e2b4u: goto label_31e2b4;
        default: break;
    }

    ctx->pc = 0x31e258u;

    // 0x31e258: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x31e258u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x31e25c: 0xffbf0100  sd          $ra, 0x100($sp)
    ctx->pc = 0x31e25cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 31));
    // 0x31e260: 0xc0c7888  jal         func_31E220
    ctx->pc = 0x31E260u;
    SET_GPR_U32(ctx, 31, 0x31E268u);
    ctx->pc = 0x31E220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E220u, 0x31E260u, 0x31E268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E268u;
label_31e268:
    // 0x31e268: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x31e268u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x31e26c: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x31e26cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x31e270: 0x8c439160  lw          $v1, -0x6EA0($v0)
    ctx->pc = 0x31e270u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3F9160u));
    // 0x31e274: 0x3c05004c  lui         $a1, 0x4C
    ctx->pc = 0x31e274u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)76 << 16));
    // 0x31e278: 0x3c08004c  lui         $t0, 0x4C
    ctx->pc = 0x31e278u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)76 << 16));
    // 0x31e27c: 0x8ca6ee20  lw          $a2, -0x11E0($a1)
    ctx->pc = 0x31e27cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x4BEE20u));
    // 0x31e280: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x31e280u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x31e284: 0x8d0aef30  lw          $t2, -0x10D0($t0)
    ctx->pc = 0x31e284u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294962992)));
    // 0x31e288: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x31e288u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x31e28c: 0x3c070067  lui         $a3, 0x67
    ctx->pc = 0x31e28cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)103 << 16));
    // 0x31e290: 0x24e79920  addiu       $a3, $a3, -0x66E0
    ctx->pc = 0x31e290u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294940960));
    // 0x31e294: 0x8c49eee0  lw          $t1, -0x1120($v0)
    ctx->pc = 0x31e294u;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x4BEEE0u));
    // 0x31e298: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x31e298u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x31e29c: 0x3c080047  lui         $t0, 0x47
    ctx->pc = 0x31e29cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)71 << 16));
    // 0x31e2a0: 0x673821  addu        $a3, $v1, $a3
    ctx->pc = 0x31e2a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x31e2a4: 0x24a54580  addiu       $a1, $a1, 0x4580
    ctx->pc = 0x31e2a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17792));
    // 0x31e2a8: 0x25084590  addiu       $t0, $t0, 0x4590
    ctx->pc = 0x31e2a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 17808));
    // 0x31e2ac: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x31E2ACu;
    SET_GPR_U32(ctx, 31, 0x31E2B4u);
    ctx->pc = 0x31E2B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E2ACu;
    // 0x31e2b0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x31E2ACu, 0x31E2B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E2B4u;
label_31e2b4:
    // 0x31e2b4: 0xdfbf0100  ld          $ra, 0x100($sp)
    ctx->pc = 0x31e2b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x31e2b8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x31e2b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31e2bc: 0x3e00008  jr          $ra
    ctx->pc = 0x31E2BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31E2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E2BCu;
        // 0x31e2c0: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31E2BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31E2C4u;
    // 0x31e2c4: 0x0  nop
    ctx->pc = 0x31e2c4u;
    // NOP
    ctx->pc = 0x31e2c8u;
}
