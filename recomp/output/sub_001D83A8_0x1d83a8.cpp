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

// Function: sub_001D83A8
// Address: 0x1d83a8 - 0x1d8400
void sub_001D83A8_0x1d83a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D83A8_0x1d83a8");
#endif

    switch (ctx->pc) {
        case 0x1d83b8u: goto label_1d83b8;
        default: break;
    }

    ctx->pc = 0x1d83a8u;

    // 0x1d83a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d83a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d83ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d83acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d83b0: 0xc076100  jal         func_1D8400
    ctx->pc = 0x1D83B0u;
    SET_GPR_U32(ctx, 31, 0x1D83B8u);
    ctx->pc = 0x1D8400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8400u, 0x1D83B0u, 0x1D83B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D83B8u;
label_1d83b8:
    // 0x1d83b8: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1d83b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x1d83bc: 0x3c090048  lui         $t1, 0x48
    ctx->pc = 0x1d83bcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)72 << 16));
    // 0x1d83c0: 0x8c64918c  lw          $a0, -0x6E74($v1)
    ctx->pc = 0x1d83c0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3F918Cu));
    // 0x1d83c4: 0x3c080048  lui         $t0, 0x48
    ctx->pc = 0x1d83c4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)72 << 16));
    // 0x1d83c8: 0x3c060048  lui         $a2, 0x48
    ctx->pc = 0x1d83c8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)72 << 16));
    // 0x1d83cc: 0x3c070048  lui         $a3, 0x48
    ctx->pc = 0x1d83ccu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)72 << 16));
    // 0x1d83d0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1d83d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1d83d4: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x1d83d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x1d83d8: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x1d83d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d83dc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d83dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d83e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d83e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d83e4: 0xaca32b40  sw          $v1, 0x2B40($a1)
    ctx->pc = 0x1d83e4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x482B40u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x482B40u, _value); } while (0);
    // 0x1d83e8: 0xacc42b50  sw          $a0, 0x2B50($a2)
    ctx->pc = 0x1d83e8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x482B50u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x482B50u, _value); } while (0);
    // 0x1d83ec: 0xad222b3c  sw          $v0, 0x2B3C($t1)
    ctx->pc = 0x1d83ecu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x482B3Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x482B3Cu, _value); } while (0);
    // 0x1d83f0: 0xad042b00  sw          $a0, 0x2B00($t0)
    ctx->pc = 0x1d83f0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x482B00u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x482B00u, _value); } while (0);
    // 0x1d83f4: 0xace02b44  sw          $zero, 0x2B44($a3)
    ctx->pc = 0x1d83f4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x482B44u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x482B44u, _value); } while (0);
    // 0x1d83f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D83F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D83FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D83F8u;
        // 0x1d83fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D83F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D8400u;
}
