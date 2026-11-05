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

// Function: sub_0025A7C8
// Address: 0x25a7c8 - 0x25a818
void sub_0025A7C8_0x25a7c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025A7C8_0x25a7c8");
#endif

    switch (ctx->pc) {
        case 0x25a7ecu: goto label_25a7ec;
        default: break;
    }

    ctx->pc = 0x25a7c8u;

    // 0x25a7c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x25a7c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25a7cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x25a7ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x25a7d0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x25a7d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x25a7d4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x25a7d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a7d8: 0x3c110040  lui         $s1, 0x40
    ctx->pc = 0x25a7d8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)64 << 16));
    // 0x25a7dc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x25a7dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x25a7e0: 0x26319b40  addiu       $s1, $s1, -0x64C0
    ctx->pc = 0x25a7e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294941504));
    // 0x25a7e4: 0xc096a8c  jal         func_25AA30
    ctx->pc = 0x25A7E4u;
    SET_GPR_U32(ctx, 31, 0x25A7ECu);
    ctx->pc = 0x25A7E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A7E4u;
    // 0x25a7e8: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25AA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AA30u, 0x25A7E4u, 0x25A7ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A7ECu;
label_25a7ec:
    // 0x25a7ec: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x25a7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x25a7f0: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x25a7f0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x25a7f4: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x25a7f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x25a7f8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x25a7f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25a7fc: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x25a7fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x25a800: 0x2118021  addu        $s0, $s0, $s1
    ctx->pc = 0x25a800u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x25a804: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x25a804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x25a808: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x25a808u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25a80c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x25a80cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x25a810: 0x3e00008  jr          $ra
    ctx->pc = 0x25A810u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25A814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A810u;
        // 0x25a814: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25A810u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25A818u;
}
