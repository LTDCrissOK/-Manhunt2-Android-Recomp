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

// Function: sub_001D90C0
// Address: 0x1d90c0 - 0x1d9108
void sub_001D90C0_0x1d90c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D90C0_0x1d90c0");
#endif

    switch (ctx->pc) {
        case 0x1d90d8u: goto label_1d90d8;
        case 0x1d90e4u: goto label_1d90e4;
        default: break;
    }

    ctx->pc = 0x1d90c0u;

    // 0x1d90c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d90c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d90c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d90c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d90c8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d90c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d90cc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d90ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d90d0: 0xc0796ac  jal         func_1E5AB0
    ctx->pc = 0x1D90D0u;
    SET_GPR_U32(ctx, 31, 0x1D90D8u);
    ctx->pc = 0x1D90D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D90D0u;
    // 0x1d90d4: 0x3c110040  lui         $s1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)64 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E5AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E5AB0u, 0x1D90D0u, 0x1D90D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D90D8u;
label_1d90d8:
    // 0x1d90d8: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1d90d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x1d90dc: 0xc0796ac  jal         func_1E5AB0
    ctx->pc = 0x1D90DCu;
    SET_GPR_U32(ctx, 31, 0x1D90E4u);
    ctx->pc = 0x1D90E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D90DCu;
    // 0x1d90e0: 0x8c7091d8  lw          $s0, -0x6E28($v1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294939096)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E5AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E5AB0u, 0x1D90DCu, 0x1D90E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D90E4u;
label_1d90e4:
    // 0x1d90e4: 0x8e2391f0  lw          $v1, -0x6E10($s1)
    ctx->pc = 0x1d90e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294939120)));
    // 0x1d90e8: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1d90e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1d90ec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d90ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d90f0: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x1d90f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1d90f4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d90f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d90f8: 0x10102b  sltu        $v0, $zero, $s0
    ctx->pc = 0x1d90f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x1d90fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d90fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d9100: 0x3e00008  jr          $ra
    ctx->pc = 0x1D9100u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D9104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9100u;
        // 0x1d9104: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9100u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D9108u;
}
