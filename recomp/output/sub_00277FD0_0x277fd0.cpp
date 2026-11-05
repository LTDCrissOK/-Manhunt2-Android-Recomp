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

// Function: sub_00277FD0
// Address: 0x277fd0 - 0x278008
void sub_00277FD0_0x277fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00277FD0_0x277fd0");
#endif

    switch (ctx->pc) {
        case 0x277ff8u: goto label_277ff8;
        default: break;
    }

    ctx->pc = 0x277fd0u;

    // 0x277fd0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x277fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x277fd4: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x277fd4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277fd8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x277fd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x277fdc: 0x3c030047  lui         $v1, 0x47
    ctx->pc = 0x277fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
    // 0x277fe0: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x277fe0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277fe4: 0x8c820114  lw          $v0, 0x114($a0)
    ctx->pc = 0x277fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 276)));
    // 0x277fe8: 0x24658348  addiu       $a1, $v1, -0x7CB8
    ctx->pc = 0x277fe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935368));
    // 0x277fec: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x277fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x277ff0: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x277FF0u;
    SET_GPR_U32(ctx, 31, 0x277FF8u);
    ctx->pc = 0x277FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277FF0u;
    // 0x277ff4: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x277FF0u, 0x277FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277FF8u;
label_277ff8:
    // 0x277ff8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x277ff8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x277ffc: 0x3e00008  jr          $ra
    ctx->pc = 0x277FFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x278000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277FFCu;
        // 0x278000: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x277FFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x278004u;
    // 0x278004: 0x0  nop
    ctx->pc = 0x278004u;
    // NOP
    ctx->pc = 0x278008u;
}
