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

// Function: sub_0028F0D8
// Address: 0x28f0d8 - 0x28f120
void sub_0028F0D8_0x28f0d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028F0D8_0x28f0d8");
#endif

    switch (ctx->pc) {
        case 0x28f0d8u: goto label_28f0d8;
        case 0x28f0dcu: goto label_28f0dc;
        case 0x28f0e0u: goto label_28f0e0;
        case 0x28f0e4u: goto label_28f0e4;
        case 0x28f0e8u: goto label_28f0e8;
        case 0x28f0ecu: goto label_28f0ec;
        case 0x28f0f0u: goto label_28f0f0;
        case 0x28f0f4u: goto label_28f0f4;
        case 0x28f0f8u: goto label_28f0f8;
        case 0x28f0fcu: goto label_28f0fc;
        case 0x28f100u: goto label_28f100;
        case 0x28f104u: goto label_28f104;
        case 0x28f108u: goto label_28f108;
        case 0x28f10cu: goto label_28f10c;
        case 0x28f110u: goto label_28f110;
        case 0x28f114u: goto label_28f114;
        case 0x28f118u: goto label_28f118;
        case 0x28f11cu: goto label_28f11c;
        default: break;
    }

    ctx->pc = 0x28f0d8u;

label_28f0d8:
    // 0x28f0d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28f0d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_28f0dc:
    // 0x28f0dc: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x28f0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_28f0e0:
    // 0x28f0e0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28f0e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_28f0e4:
    // 0x28f0e4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x28f0e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_28f0e8:
    // 0x28f0e8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x28f0e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_28f0ec:
    // 0x28f0ec: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x28f0ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
label_28f0f0:
    // 0x28f0f0: 0x8c62cba8  lw          $v0, -0x3458($v1)
    ctx->pc = 0x28f0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294953896)));
label_28f0f4:
    // 0x28f0f4: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x28f0f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_28f0f8:
    // 0x28f0f8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x28f0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_28f0fc:
    // 0x28f0fc: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x28f0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_28f100:
    // 0x28f100: 0x40f809  jalr        $v0
label_28f104:
    if (ctx->pc == 0x28F104u) {
        ctx->pc = 0x28F108u;
        goto label_28f108;
    }
    ctx->pc = 0x28F100u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x28F108u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28F100u, 0x28F108u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28F108u;
label_28f108:
    // 0x28f108: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x28f108u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
label_28f10c:
    // 0x28f10c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28f10cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_28f110:
    // 0x28f110: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x28f110u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_28f114:
    // 0x28f114: 0x3e00008  jr          $ra
label_28f118:
    if (ctx->pc == 0x28F118u) {
        ctx->pc = 0x28F118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F114u;
        // 0x28f118: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28F11Cu;
        goto label_28f11c;
    }
    ctx->pc = 0x28F114u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28F118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28F114u;
        // 0x28f118: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28F114u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28F11Cu;
label_28f11c:
    // 0x28f11c: 0x0  nop
    ctx->pc = 0x28f11cu;
    // NOP
    ctx->pc = 0x28f120u;
}
