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

// Function: sub_001D7380
// Address: 0x1d7380 - 0x1d73c8
void sub_001D7380_0x1d7380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D7380_0x1d7380");
#endif

    switch (ctx->pc) {
        case 0x1d73bcu: goto label_1d73bc;
        default: break;
    }

    ctx->pc = 0x1d7380u;

    // 0x1d7380: 0x28830080  slti        $v1, $a0, 0x80
    ctx->pc = 0x1d7380u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x1d7384: 0x2402007f  addiu       $v0, $zero, 0x7F
    ctx->pc = 0x1d7384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x1d7388: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x1d7388u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x1d738c: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x1d738cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1d7390: 0x463018  mult        $a2, $v0, $a2
    ctx->pc = 0x1d7390u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x1d7394: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x1d7394u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x1d7398: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d7398u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d739c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1d739cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x1d73a0: 0x24a58f20  addiu       $a1, $a1, -0x70E0
    ctx->pc = 0x1d73a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938400));
    // 0x1d73a4: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x1d73a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x1d73a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d73a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d73ac: 0x248490e0  addiu       $a0, $a0, -0x6F20
    ctx->pc = 0x1d73acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938848));
    // 0x1d73b0: 0xac629160  sw          $v0, -0x6EA0($v1)
    ctx->pc = 0x1d73b0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3F9160u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F9160u, _value); } while (0);
    // 0x1d73b4: 0xc0efbe8  jal         func_3BEFA0
    ctx->pc = 0x1D73B4u;
    SET_GPR_U32(ctx, 31, 0x1D73BCu);
    ctx->pc = 0x1D73B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D73B4u;
    // 0x1d73b8: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEFA0u, 0x1D73B4u, 0x1D73BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D73BCu;
label_1d73bc:
    // 0x1d73bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d73bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d73c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D73C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D73C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D73C0u;
        // 0x1d73c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D73C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D73C8u;
}
