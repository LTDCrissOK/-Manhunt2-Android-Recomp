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

// Function: sub_00136AB8
// Address: 0x136ab8 - 0x136af0
void sub_00136AB8_0x136ab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00136AB8_0x136ab8");
#endif

    switch (ctx->pc) {
        case 0x136ad0u: goto label_136ad0;
        case 0x136adcu: goto label_136adc;
        default: break;
    }

    ctx->pc = 0x136ab8u;

    // 0x136ab8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x136ab8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x136abc: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x136abcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x136ac0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x136ac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x136ac4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x136ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x136ac8: 0xc041d06  jal         func_107418
    ctx->pc = 0x136AC8u;
    SET_GPR_U32(ctx, 31, 0x136AD0u);
    ctx->pc = 0x136ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136AC8u;
    // 0x136acc: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107418u, 0x136AC8u, 0x136AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136AD0u;
label_136ad0:
    // 0x136ad0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x136ad0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136ad4: 0xc04241a  jal         func_109068
    ctx->pc = 0x136AD4u;
    SET_GPR_U32(ctx, 31, 0x136ADCu);
    ctx->pc = 0x136AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136AD4u;
    // 0x136ad8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109068u, 0x136AD4u, 0x136ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136ADCu;
label_136adc:
    // 0x136adc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x136adcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136ae0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x136ae0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x136ae4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x136ae4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x136ae8: 0x3e00008  jr          $ra
    ctx->pc = 0x136AE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x136AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136AE8u;
        // 0x136aec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x136AE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x136AF0u;
}
