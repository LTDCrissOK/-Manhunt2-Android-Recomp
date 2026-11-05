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

// Function: sub_003AB970
// Address: 0x3ab970 - 0x3ab9c0
void sub_003AB970_0x3ab970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AB970_0x3ab970");
#endif

    switch (ctx->pc) {
        case 0x3ab994u: goto label_3ab994;
        case 0x3ab9a4u: goto label_3ab9a4;
        default: break;
    }

    ctx->pc = 0x3ab970u;

    // 0x3ab970: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3ab970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3ab974: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3ab974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3ab978: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3ab978u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ab97c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3ab97cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3ab980: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3ab980u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ab984: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3ab984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3ab988: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3ab988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x3ab98c: 0xc0ea7d8  jal         func_3A9F60
    ctx->pc = 0x3AB98Cu;
    SET_GPR_U32(ctx, 31, 0x3AB994u);
    ctx->pc = 0x3AB990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB98Cu;
    // 0x3ab990: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A9F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A9F60u, 0x3AB98Cu, 0x3AB994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB994u;
label_3ab994:
    // 0x3ab994: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ab994u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ab998: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3ab998u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ab99c: 0xc0eae70  jal         func_3AB9C0
    ctx->pc = 0x3AB99Cu;
    SET_GPR_U32(ctx, 31, 0x3AB9A4u);
    ctx->pc = 0x3AB9A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB99Cu;
    // 0x3ab9a0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AB9C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AB9C0u, 0x3AB99Cu, 0x3AB9A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB9A4u;
label_3ab9a4:
    // 0x3ab9a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3ab9a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ab9a8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3ab9a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3ab9ac: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3ab9acu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3ab9b0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3ab9b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3ab9b4: 0x80ea7de  j           func_3A9F78
    ctx->pc = 0x3AB9B4u;
    ctx->pc = 0x3AB9B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB9B4u;
    // 0x3ab9b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A9F78u;
    sub_003A9F78_0x3a9f78(rdram, ctx, runtime); return;
    ctx->pc = 0x3AB9BCu;
    // 0x3ab9bc: 0x0  nop
    ctx->pc = 0x3ab9bcu;
    // NOP
    ctx->pc = 0x3ab9c0u;
}
