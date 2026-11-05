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

// Function: sub_003AA4E0
// Address: 0x3aa4e0 - 0x3aa540
void sub_003AA4E0_0x3aa4e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AA4E0_0x3aa4e0");
#endif

    switch (ctx->pc) {
        case 0x3aa50cu: goto label_3aa50c;
        case 0x3aa520u: goto label_3aa520;
        default: break;
    }

    ctx->pc = 0x3aa4e0u;

    // 0x3aa4e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3aa4e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3aa4e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3aa4e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3aa4e8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3aa4e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aa4ec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3aa4ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3aa4f0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3aa4f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aa4f4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3aa4f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3aa4f8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x3aa4f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aa4fc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3aa4fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x3aa500: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3aa500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3aa504: 0xc0ea7d8  jal         func_3A9F60
    ctx->pc = 0x3AA504u;
    SET_GPR_U32(ctx, 31, 0x3AA50Cu);
    ctx->pc = 0x3AA508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AA504u;
    // 0x3aa508: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A9F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A9F60u, 0x3AA504u, 0x3AA50Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AA50Cu;
label_3aa50c:
    // 0x3aa50c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3aa50cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aa510: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3aa510u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aa514: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3aa514u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3aa518: 0xc0ea950  jal         func_3AA540
    ctx->pc = 0x3AA518u;
    SET_GPR_U32(ctx, 31, 0x3AA520u);
    ctx->pc = 0x3AA51Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AA518u;
    // 0x3aa51c: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AA540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AA540u, 0x3AA518u, 0x3AA520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AA520u;
label_3aa520:
    // 0x3aa520: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3aa520u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3aa524: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3aa524u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3aa528: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3aa528u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3aa52c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3aa52cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3aa530: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3aa530u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3aa534: 0x80ea7de  j           func_3A9F78
    ctx->pc = 0x3AA534u;
    ctx->pc = 0x3AA538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AA534u;
    // 0x3aa538: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A9F78u;
    sub_003A9F78_0x3a9f78(rdram, ctx, runtime); return;
    ctx->pc = 0x3AA53Cu;
    // 0x3aa53c: 0x0  nop
    ctx->pc = 0x3aa53cu;
    // NOP
    ctx->pc = 0x3aa540u;
}
