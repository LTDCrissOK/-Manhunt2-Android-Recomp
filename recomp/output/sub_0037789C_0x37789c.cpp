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

// Function: sub_0037789C
// Address: 0x37789c - 0x3778c8
void sub_0037789C_0x37789c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037789C_0x37789c");
#endif

    ctx->pc = 0x37789cu;

    // 0x37789c: 0x48c4d801  ctc2.i      $a0, $vi27
    ctx->pc = 0x37789cu;
    ctx->vu0_cmsar0 = GPR_U32(ctx, 4);
    // 0x3778a0: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x3778a0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3778a4: 0xd8a20010  lqc2        $vf2, 0x10($a1)
    ctx->pc = 0x3778a4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x3778a8: 0x4a00d839  vcallmsr    $vi27
    ctx->pc = 0x3778a8u;
    {     uint16_t instr_index = ctx->vu0_cmsar0 & 0x1FF;     uint32_t target_byte_addr = (uint32_t)instr_index << 3;     ctx->vu0_pc = target_byte_addr;     runtime->vu0StartMicroProgram(rdram, ctx, target_byte_addr); }
    // 0x3778ac: 0x48440801  cfc2.i      $a0, $vi1
    ctx->pc = 0x3778acu;
    SET_GPR_U32(ctx, 4, static_cast<uint32_t>(ctx->vi[1]));
    // 0x3778b0: 0x48451000  cfc2.ni     $a1, $vi2
    ctx->pc = 0x3778b0u;
    SET_GPR_U32(ctx, 5, static_cast<uint32_t>(ctx->vi[2]));
    // 0x3778b4: 0x42103  sra         $a0, $a0, 4
    ctx->pc = 0x3778b4u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 4));
    // 0x3778b8: 0x52903  sra         $a1, $a1, 4
    ctx->pc = 0x3778b8u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 4));
    // 0x3778bc: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x3778bcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x3778c0: 0x3e00008  jr          $ra
    ctx->pc = 0x3778C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3778C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3778C0u;
        // 0x3778c4: 0xace50000  sw          $a1, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3778C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3778C8u;
}
