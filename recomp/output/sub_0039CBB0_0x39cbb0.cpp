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

// Function: sub_0039CBB0
// Address: 0x39cbb0 - 0x39cc00
void sub_0039CBB0_0x39cbb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039CBB0_0x39cbb0");
#endif

    switch (ctx->pc) {
        case 0x39cbd4u: goto label_39cbd4;
        case 0x39cbe4u: goto label_39cbe4;
        default: break;
    }

    ctx->pc = 0x39cbb0u;

    // 0x39cbb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x39cbb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x39cbb4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x39cbb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x39cbb8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x39cbb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39cbbc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x39cbbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x39cbc0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x39cbc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39cbc4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x39cbc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x39cbc8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x39cbc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x39cbcc: 0xc0ebe5c  jal         func_3AF970
    ctx->pc = 0x39CBCCu;
    SET_GPR_U32(ctx, 31, 0x39CBD4u);
    ctx->pc = 0x39CBD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39CBCCu;
    // 0x39cbd0: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AF970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AF970u, 0x39CBCCu, 0x39CBD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39CBD4u;
label_39cbd4:
    // 0x39cbd4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39cbd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39cbd8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x39cbd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39cbdc: 0xc0e7300  jal         func_39CC00
    ctx->pc = 0x39CBDCu;
    SET_GPR_U32(ctx, 31, 0x39CBE4u);
    ctx->pc = 0x39CBE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39CBDCu;
    // 0x39cbe0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39CC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39CC00u, 0x39CBDCu, 0x39CBE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39CBE4u;
label_39cbe4:
    // 0x39cbe4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x39cbe4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39cbe8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x39cbe8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x39cbec: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x39cbecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39cbf0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x39cbf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x39cbf4: 0x80ebe5e  j           func_3AF978
    ctx->pc = 0x39CBF4u;
    ctx->pc = 0x39CBF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39CBF4u;
    // 0x39cbf8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AF978u;
    sub_003AF978_0x3af978(rdram, ctx, runtime); return;
    ctx->pc = 0x39CBFCu;
    // 0x39cbfc: 0x0  nop
    ctx->pc = 0x39cbfcu;
    // NOP
    ctx->pc = 0x39cc00u;
}
