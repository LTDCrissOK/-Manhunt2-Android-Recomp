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

// Function: sub_0039CDB8
// Address: 0x39cdb8 - 0x39cdf8
void sub_0039CDB8_0x39cdb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039CDB8_0x39cdb8");
#endif

    switch (ctx->pc) {
        case 0x39cdd4u: goto label_39cdd4;
        case 0x39cde0u: goto label_39cde0;
        default: break;
    }

    ctx->pc = 0x39cdb8u;

    // 0x39cdb8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x39cdb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x39cdbc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x39cdbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x39cdc0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x39cdc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39cdc4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x39cdc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x39cdc8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x39cdc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x39cdcc: 0xc0ebe5c  jal         func_3AF970
    ctx->pc = 0x39CDCCu;
    SET_GPR_U32(ctx, 31, 0x39CDD4u);
    ctx->pc = 0x39CDD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39CDCCu;
    // 0x39cdd0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AF970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AF970u, 0x39CDCCu, 0x39CDD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39CDD4u;
label_39cdd4:
    // 0x39cdd4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39cdd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39cdd8: 0xc0e737e  jal         func_39CDF8
    ctx->pc = 0x39CDD8u;
    SET_GPR_U32(ctx, 31, 0x39CDE0u);
    ctx->pc = 0x39CDDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39CDD8u;
    // 0x39cddc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39CDF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39CDF8u, 0x39CDD8u, 0x39CDE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39CDE0u;
label_39cde0:
    // 0x39cde0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x39cde0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39cde4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x39cde4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x39cde8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x39cde8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39cdec: 0x80ebe5e  j           func_3AF978
    ctx->pc = 0x39CDECu;
    ctx->pc = 0x39CDF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39CDECu;
    // 0x39cdf0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AF978u;
    sub_003AF978_0x3af978(rdram, ctx, runtime); return;
    ctx->pc = 0x39CDF4u;
    // 0x39cdf4: 0x0  nop
    ctx->pc = 0x39cdf4u;
    // NOP
    ctx->pc = 0x39cdf8u;
}
