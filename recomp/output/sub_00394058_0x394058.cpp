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

// Function: sub_00394058
// Address: 0x394058 - 0x394088
void sub_00394058_0x394058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00394058_0x394058");
#endif

    ctx->pc = 0x394058u;

    // 0x394058: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x394058u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x39405c: 0x3c080040  lui         $t0, 0x40
    ctx->pc = 0x39405cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
    // 0x394060: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x394060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x394064: 0x2402ffc0  addiu       $v0, $zero, -0x40
    ctx->pc = 0x394064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x394068: 0x2508eb1f  addiu       $t0, $t0, -0x14E1
    ctx->pc = 0x394068u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294961951));
    // 0x39406c: 0x24090800  addiu       $t1, $zero, 0x800
    ctx->pc = 0x39406cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x394070: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x394070u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x394074: 0x1024024  and         $t0, $t0, $v0
    ctx->pc = 0x394074u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x394078: 0x80e5046  j           func_394118
    ctx->pc = 0x394078u;
    ctx->pc = 0x39407Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x394078u;
    // 0x39407c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x394118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x394118u, 0x394078u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x394080u;
    // 0x394080: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x394080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x394084: 0x0  nop
    ctx->pc = 0x394084u;
    // NOP
    ctx->pc = 0x394088u;
}
