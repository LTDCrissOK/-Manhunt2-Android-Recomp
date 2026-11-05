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

// Function: sub_002BA8D0
// Address: 0x2ba8d0 - 0x2ba90c
void sub_002BA8D0_0x2ba8d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BA8D0_0x2ba8d0");
#endif

    switch (ctx->pc) {
        case 0x2ba8d0u: goto label_2ba8d0;
        case 0x2ba8d4u: goto label_2ba8d4;
        case 0x2ba8d8u: goto label_2ba8d8;
        case 0x2ba8dcu: goto label_2ba8dc;
        case 0x2ba8e0u: goto label_2ba8e0;
        case 0x2ba8e4u: goto label_2ba8e4;
        case 0x2ba8e8u: goto label_2ba8e8;
        case 0x2ba8ecu: goto label_2ba8ec;
        case 0x2ba8f0u: goto label_2ba8f0;
        case 0x2ba8f4u: goto label_2ba8f4;
        case 0x2ba8f8u: goto label_2ba8f8;
        case 0x2ba8fcu: goto label_2ba8fc;
        case 0x2ba900u: goto label_2ba900;
        case 0x2ba904u: goto label_2ba904;
        case 0x2ba908u: goto label_2ba908;
        default: break;
    }

    ctx->pc = 0x2ba8d0u;

label_2ba8d0:
    // 0x2ba8d0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2ba8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_2ba8d4:
    // 0x2ba8d4: 0x9043afb8  lbu         $v1, -0x5048($v0)
    ctx->pc = 0x2ba8d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294946744)));
label_2ba8d8:
    // 0x2ba8d8: 0x2463ff9b  addiu       $v1, $v1, -0x65
    ctx->pc = 0x2ba8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967195));
label_2ba8dc:
    // 0x2ba8dc: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x2ba8dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
label_2ba8e0:
    // 0x2ba8e0: 0x31e03  sra         $v1, $v1, 24
    ctx->pc = 0x2ba8e0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 24));
label_2ba8e4:
    // 0x2ba8e4: 0x2c62000f  sltiu       $v0, $v1, 0xF
    ctx->pc = 0x2ba8e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)15) ? 1 : 0);
label_2ba8e8:
    // 0x2ba8e8: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_2ba8ec:
    if (ctx->pc == 0x2BA8ECu) {
        ctx->pc = 0x2BA8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA8E8u;
        // 0x2ba8ec: 0x3085ffff  andi        $a1, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA8F0u;
        goto label_2ba8f0;
    }
    ctx->pc = 0x2BA8E8u;
    {
        const bool branch_taken_0x2ba8e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA8E8u;
        // 0x2ba8ec: 0x3085ffff  andi        $a1, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba8e8) {
            ctx->pc = 0x2BA98Cu;
            return;
        }
    }
    ctx->pc = 0x2BA8F0u;
label_2ba8f0:
    // 0x2ba8f0: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x2ba8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
label_2ba8f4:
    // 0x2ba8f4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2ba8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2ba8f8:
    // 0x2ba8f8: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x2ba8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
label_2ba8fc:
    // 0x2ba8fc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2ba8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2ba900:
    // 0x2ba900: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2ba900u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2ba904:
    // 0x2ba904: 0x800008  jr          $a0
label_2ba908:
    if (ctx->pc == 0x2BA908u) {
        ctx->pc = 0x2BA90Cu;
        goto label_fallthrough_0x2ba904;
    }
    ctx->pc = 0x2BA904u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BA904u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x2ba904:
    ctx->pc = 0x2BA90Cu;
}
