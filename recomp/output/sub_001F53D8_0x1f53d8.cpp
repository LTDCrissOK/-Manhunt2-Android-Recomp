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

// Function: sub_001F53D8
// Address: 0x1f53d8 - 0x1f5400
void sub_001F53D8_0x1f53d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F53D8_0x1f53d8");
#endif

    ctx->pc = 0x1f53d8u;

    // 0x1f53d8: 0x46006024  .word       0x46006024                   # cvt.w.s     $f0, $f12 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1f53d8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[12]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1f53dc: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x1f53dcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x1f53e0: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x1f53e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x1f53e4: 0x2463fb68  addiu       $v1, $v1, -0x498
    ctx->pc = 0x1f53e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966120));
    // 0x1f53e8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1f53e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f53ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f53ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f53f0: 0xa48600f4  sh          $a2, 0xF4($a0)
    ctx->pc = 0x1f53f0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 244), (uint16_t)GPR_U32(ctx, 6));
    // 0x1f53f4: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x1f53f4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x1f53f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1F53F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F53FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F53F8u;
        // 0x1f53fc: 0xac850104  sw          $a1, 0x104($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 260), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F53F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F5400u;
}
