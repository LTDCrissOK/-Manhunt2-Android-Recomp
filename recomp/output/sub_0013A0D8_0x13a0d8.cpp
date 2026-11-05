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

// Function: sub_0013A0D8
// Address: 0x13a0d8 - 0x13a180
void sub_0013A0D8_0x13a0d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013A0D8_0x13a0d8");
#endif

    ctx->pc = 0x13a0d8u;

    // 0x13a0d8: 0x2402005c  addiu       $v0, $zero, 0x5C
    ctx->pc = 0x13a0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x13a0dc: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x13a0dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x13a0e0: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x13a0e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x13a0e4: 0x24070012  addiu       $a3, $zero, 0x12
    ctx->pc = 0x13a0e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x13a0e8: 0x24080007  addiu       $t0, $zero, 0x7
    ctx->pc = 0x13a0e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x13a0ec: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x13a0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x13a0f0: 0xac4704f0  sw          $a3, 0x4F0($v0)
    ctx->pc = 0x13a0f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1264), GPR_U32(ctx, 7));
    // 0x13a0f4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x13a0f4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a0f8: 0xac6804f4  sw          $t0, 0x4F4($v1)
    ctx->pc = 0x13a0f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1268), GPR_U32(ctx, 8));
    // 0x13a0fc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x13a0fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a100: 0xacc004f8  sw          $zero, 0x4F8($a2)
    ctx->pc = 0x13a100u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1272), GPR_U32(ctx, 0));
    // 0x13a104: 0xac4004fc  sw          $zero, 0x4FC($v0)
    ctx->pc = 0x13a104u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1276), GPR_U32(ctx, 0));
    // 0x13a108: 0xac600500  sw          $zero, 0x500($v1)
    ctx->pc = 0x13a108u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1280), GPR_U32(ctx, 0));
    // 0x13a10c: 0xacc00504  sw          $zero, 0x504($a2)
    ctx->pc = 0x13a10cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1284), GPR_U32(ctx, 0));
    // 0x13a110: 0xa41821  addu        $v1, $a1, $a0
    ctx->pc = 0x13a110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x13a114: 0xac400508  sw          $zero, 0x508($v0)
    ctx->pc = 0x13a114u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1288), GPR_U32(ctx, 0));
    // 0x13a118: 0xac60050c  sw          $zero, 0x50C($v1)
    ctx->pc = 0x13a118u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1292), GPR_U32(ctx, 0));
    // 0x13a11c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x13a11cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a120: 0xacc00510  sw          $zero, 0x510($a2)
    ctx->pc = 0x13a120u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1296), GPR_U32(ctx, 0));
    // 0x13a124: 0xac400514  sw          $zero, 0x514($v0)
    ctx->pc = 0x13a124u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1300), GPR_U32(ctx, 0));
    // 0x13a128: 0xac600518  sw          $zero, 0x518($v1)
    ctx->pc = 0x13a128u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1304), GPR_U32(ctx, 0));
    // 0x13a12c: 0xacc00524  sw          $zero, 0x524($a2)
    ctx->pc = 0x13a12cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1316), GPR_U32(ctx, 0));
    // 0x13a130: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x13a130u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a134: 0xac400528  sw          $zero, 0x528($v0)
    ctx->pc = 0x13a134u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1320), GPR_U32(ctx, 0));
    // 0x13a138: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x13a138u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a13c: 0xac60052c  sw          $zero, 0x52C($v1)
    ctx->pc = 0x13a13cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1324), GPR_U32(ctx, 0));
    // 0x13a140: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x13a140u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a144: 0xacc00530  sw          $zero, 0x530($a2)
    ctx->pc = 0x13a144u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1328), GPR_U32(ctx, 0));
    // 0x13a148: 0xac40051c  sw          $zero, 0x51C($v0)
    ctx->pc = 0x13a148u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1308), GPR_U32(ctx, 0));
    // 0x13a14c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x13a14cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a150: 0xac600520  sw          $zero, 0x520($v1)
    ctx->pc = 0x13a150u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1312), GPR_U32(ctx, 0));
    // 0x13a154: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x13a154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x13a158: 0xacc00534  sw          $zero, 0x534($a2)
    ctx->pc = 0x13a158u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1332), GPR_U32(ctx, 0));
    // 0x13a15c: 0xac400538  sw          $zero, 0x538($v0)
    ctx->pc = 0x13a15cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1336), GPR_U32(ctx, 0));
    // 0x13a160: 0xac60053c  sw          $zero, 0x53C($v1)
    ctx->pc = 0x13a160u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1340), GPR_U32(ctx, 0));
    // 0x13a164: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x13a164u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a168: 0xacc00540  sw          $zero, 0x540($a2)
    ctx->pc = 0x13a168u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1344), GPR_U32(ctx, 0));
    // 0x13a16c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x13a16cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a170: 0xac400544  sw          $zero, 0x544($v0)
    ctx->pc = 0x13a170u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1348), GPR_U32(ctx, 0));
    // 0x13a174: 0x3e00008  jr          $ra
    ctx->pc = 0x13A174u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13A178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13A174u;
        // 0x13a178: 0xac800548  sw          $zero, 0x548($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1352), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13A174u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13A17Cu;
    // 0x13a17c: 0x0  nop
    ctx->pc = 0x13a17cu;
    // NOP
    ctx->pc = 0x13a180u;
}
