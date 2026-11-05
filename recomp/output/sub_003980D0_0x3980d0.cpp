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

// Function: sub_003980D0
// Address: 0x3980d0 - 0x398110
void sub_003980D0_0x3980d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003980D0_0x3980d0");
#endif

    switch (ctx->pc) {
        case 0x3980f4u: goto label_3980f4;
        default: break;
    }

    ctx->pc = 0x3980d0u;

    // 0x3980d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3980d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3980d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3980d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3980d8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3980d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3980dc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3980dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3980e0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3980e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3980e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3980e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3980e8: 0xae110008  sw          $s1, 0x8($s0)
    ctx->pc = 0x3980e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 17));
    // 0x3980ec: 0xc0eb5c4  jal         func_3AD710
    ctx->pc = 0x3980ECu;
    SET_GPR_U32(ctx, 31, 0x3980F4u);
    ctx->pc = 0x3980F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3980ECu;
    // 0x3980f0: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AD710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AD710u, 0x3980ECu, 0x3980F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3980F4u;
label_3980f4:
    // 0x3980f4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x3980f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3980f8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3980f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3980fc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3980fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x398100: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x398100u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x398104: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x398104u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x398108: 0x80eb54a  j           func_3AD528
    ctx->pc = 0x398108u;
    ctx->pc = 0x39810Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398108u;
    // 0x39810c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AD528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AD528u, 0x398108u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x398110u;
}
