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

// Function: sub_00366490
// Address: 0x366490 - 0x3665d0
void sub_00366490_0x366490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00366490_0x366490");
#endif

    ctx->pc = 0x366490u;

    // 0x366490: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x366490u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x366494: 0x9043cb28  lbu         $v1, -0x34D8($v0)
    ctx->pc = 0x366494u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x3FCB28u));
    // 0x366498: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x366498u;
    {
        const bool branch_taken_0x366498 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x366498) {
            ctx->pc = 0x3664A4u;
            goto label_3664a4;
        }
    }
    ctx->pc = 0x3664A0u;
    // 0x3664a0: 0xd  break       0
    ctx->pc = 0x3664a0u;
    runtime->handleBreak(rdram, ctx);
label_3664a4:
    // 0x3664a4: 0x3e00008  jr          $ra
    ctx->pc = 0x3664A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3664A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3664ACu;
    // 0x3664ac: 0x0  nop
    ctx->pc = 0x3664acu;
    // NOP
    // 0x3664b0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3664b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3664b4: 0x0  nop
    ctx->pc = 0x3664b4u;
    // NOP
    // 0x3664b8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3664b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3664bc: 0x0  nop
    ctx->pc = 0x3664bcu;
    // NOP
    // 0x3664c0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3664c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3664c4: 0x0  nop
    ctx->pc = 0x3664c4u;
    // NOP
    // 0x3664c8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3664c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3664cc: 0x0  nop
    ctx->pc = 0x3664ccu;
    // NOP
    // 0x3664d0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3664d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3664d4: 0x0  nop
    ctx->pc = 0x3664d4u;
    // NOP
    // 0x3664d8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3664d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3664dc: 0x0  nop
    ctx->pc = 0x3664dcu;
    // NOP
    // 0x3664e0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3664e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3664e4: 0x0  nop
    ctx->pc = 0x3664e4u;
    // NOP
    // 0x3664e8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3664e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3664ec: 0x0  nop
    ctx->pc = 0x3664ecu;
    // NOP
    // 0x3664f0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3664f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3664f4: 0x0  nop
    ctx->pc = 0x3664f4u;
    // NOP
    // 0x3664f8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3664f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3664fc: 0x0  nop
    ctx->pc = 0x3664fcu;
    // NOP
    // 0x366500: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x366500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x366504: 0x0  nop
    ctx->pc = 0x366504u;
    // NOP
    // 0x366508: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x366508u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x36650c: 0x0  nop
    ctx->pc = 0x36650cu;
    // NOP
    // 0x366510: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x366510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x366514: 0x0  nop
    ctx->pc = 0x366514u;
    // NOP
    // 0x366518: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x366518u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x36651c: 0x0  nop
    ctx->pc = 0x36651cu;
    // NOP
    // 0x366520: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x366520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x366524: 0x0  nop
    ctx->pc = 0x366524u;
    // NOP
    // 0x366528: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x366528u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x36652c: 0x0  nop
    ctx->pc = 0x36652cu;
    // NOP
    // 0x366530: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x366530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x366534: 0x0  nop
    ctx->pc = 0x366534u;
    // NOP
    // 0x366538: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x366538u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x36653c: 0x0  nop
    ctx->pc = 0x36653cu;
    // NOP
    // 0x366540: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x366540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x366544: 0x0  nop
    ctx->pc = 0x366544u;
    // NOP
    // 0x366548: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x366548u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x36654c: 0x0  nop
    ctx->pc = 0x36654cu;
    // NOP
    // 0x366550: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x366550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x366554: 0x0  nop
    ctx->pc = 0x366554u;
    // NOP
    // 0x366558: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x366558u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x36655c: 0x0  nop
    ctx->pc = 0x36655cu;
    // NOP
    // 0x366560: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x366560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x366564: 0x0  nop
    ctx->pc = 0x366564u;
    // NOP
    // 0x366568: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x366568u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x36656c: 0x0  nop
    ctx->pc = 0x36656cu;
    // NOP
    // 0x366570: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x366570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x366574: 0x0  nop
    ctx->pc = 0x366574u;
    // NOP
    // 0x366578: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x366578u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x36657c: 0x0  nop
    ctx->pc = 0x36657cu;
    // NOP
    // 0x366580: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x366580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x366584: 0x0  nop
    ctx->pc = 0x366584u;
    // NOP
    // 0x366588: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x366588u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x36658c: 0x0  nop
    ctx->pc = 0x36658cu;
    // NOP
    // 0x366590: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x366590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x366594: 0x0  nop
    ctx->pc = 0x366594u;
    // NOP
    // 0x366598: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x366598u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x36659c: 0x0  nop
    ctx->pc = 0x36659cu;
    // NOP
    // 0x3665a0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3665a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3665a4: 0x0  nop
    ctx->pc = 0x3665a4u;
    // NOP
    // 0x3665a8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3665a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3665ac: 0x0  nop
    ctx->pc = 0x3665acu;
    // NOP
    // 0x3665b0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3665b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3665b4: 0x0  nop
    ctx->pc = 0x3665b4u;
    // NOP
    // 0x3665b8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3665b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3665bc: 0x0  nop
    ctx->pc = 0x3665bcu;
    // NOP
    // 0x3665c0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3665c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3665c4: 0x0  nop
    ctx->pc = 0x3665c4u;
    // NOP
    // 0x3665c8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3665c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3665cc: 0x0  nop
    ctx->pc = 0x3665ccu;
    // NOP
    ctx->pc = 0x3665d0u;
}
