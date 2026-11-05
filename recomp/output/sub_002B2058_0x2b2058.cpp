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

// Function: sub_002B2058
// Address: 0x2b2058 - 0x2b2090
void sub_002B2058_0x2b2058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B2058_0x2b2058");
#endif

    switch (ctx->pc) {
        case 0x2b2058u: goto label_2b2058;
        case 0x2b205cu: goto label_2b205c;
        case 0x2b2060u: goto label_2b2060;
        case 0x2b2064u: goto label_2b2064;
        case 0x2b2068u: goto label_2b2068;
        case 0x2b206cu: goto label_2b206c;
        case 0x2b2070u: goto label_2b2070;
        case 0x2b2074u: goto label_2b2074;
        case 0x2b2078u: goto label_2b2078;
        case 0x2b207cu: goto label_2b207c;
        case 0x2b2080u: goto label_2b2080;
        case 0x2b2084u: goto label_2b2084;
        case 0x2b2088u: goto label_2b2088;
        case 0x2b208cu: goto label_2b208c;
        default: break;
    }

    ctx->pc = 0x2b2058u;

label_2b2058:
    // 0x2b2058: 0x240200c0  addiu       $v0, $zero, 0xC0
    ctx->pc = 0x2b2058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
label_2b205c:
    // 0x2b205c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x2b205cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_2b2060:
    // 0x2b2060: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x2b2060u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_2b2064:
    // 0x2b2064: 0x2cc30006  sltiu       $v1, $a2, 0x6
    ctx->pc = 0x2b2064u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_2b2068:
    // 0x2b2068: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x2b2068u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_2b206c:
    // 0x2b206c: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
label_2b2070:
    if (ctx->pc == 0x2B2070u) {
        ctx->pc = 0x2B2070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B206Cu;
        // 0x2b2070: 0x852821  addu        $a1, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B2074u;
        goto label_2b2074;
    }
    ctx->pc = 0x2B206Cu;
    {
        const bool branch_taken_0x2b206c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B206Cu;
        // 0x2b2070: 0x852821  addu        $a1, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b206c) {
            ctx->pc = 0x2B20C0u;
            return;
        }
    }
    ctx->pc = 0x2B2074u;
label_2b2074:
    // 0x2b2074: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x2b2074u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
label_2b2078:
    // 0x2b2078: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x2b2078u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_2b207c:
    // 0x2b207c: 0x2442f2a0  addiu       $v0, $v0, -0xD60
    ctx->pc = 0x2b207cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963872));
label_2b2080:
    // 0x2b2080: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2b2080u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2b2084:
    // 0x2b2084: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2b2084u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2b2088:
    // 0x2b2088: 0x800008  jr          $a0
label_2b208c:
    if (ctx->pc == 0x2B208Cu) {
        ctx->pc = 0x2B2090u;
        goto label_fallthrough_0x2b2088;
    }
    ctx->pc = 0x2B2088u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B2088u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x2b2088:
    ctx->pc = 0x2B2090u;
}
