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

// Function: sub_00397300
// Address: 0x397300 - 0x397350
void sub_00397300_0x397300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00397300_0x397300");
#endif

    ctx->pc = 0x397300u;

    // 0x397300: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x397300u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x397304: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x397304u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x397308: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x397308u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x39730c: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x39730cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x397310: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x397310u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x397314: 0x3c080040  lui         $t0, 0x40
    ctx->pc = 0x397314u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
    // 0x397318: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x397318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39731c: 0x24631978  addiu       $v1, $v1, 0x1978
    ctx->pc = 0x39731cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6520));
    // 0x397320: 0x24841988  addiu       $a0, $a0, 0x1988
    ctx->pc = 0x397320u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6536));
    // 0x397324: 0x24a51998  addiu       $a1, $a1, 0x1998
    ctx->pc = 0x397324u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6552));
    // 0x397328: 0x24c619a8  addiu       $a2, $a2, 0x19A8
    ctx->pc = 0x397328u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 6568));
    // 0x39732c: 0x24e719b8  addiu       $a3, $a3, 0x19B8
    ctx->pc = 0x39732cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 6584));
    // 0x397330: 0x250819c8  addiu       $t0, $t0, 0x19C8
    ctx->pc = 0x397330u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 6600));
    // 0x397334: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x397334u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x401978u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x401978u, _value); } while (0);
    // 0x397338: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x397338u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x401988u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x401988u, _value); } while (0);
    // 0x39733c: 0xfca20000  sd          $v0, 0x0($a1)
    ctx->pc = 0x39733cu;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x401998u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x401998u, _value); } while (0);
    // 0x397340: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x397340u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x4019A8u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x4019A8u, _value); } while (0);
    // 0x397344: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x397344u;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x4019B8u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x4019B8u, _value); } while (0);
    // 0x397348: 0x3e00008  jr          $ra
    ctx->pc = 0x397348u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39734Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397348u;
        // 0x39734c: 0xfd020000  sd          $v0, 0x0($t0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x397348u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x397350u;
}
