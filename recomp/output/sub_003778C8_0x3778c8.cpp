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

// Function: sub_003778C8
// Address: 0x3778c8 - 0x377908
void sub_003778C8_0x3778c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003778C8_0x3778c8");
#endif

    ctx->pc = 0x3778c8u;

    // 0x3778c8: 0x48c4d801  ctc2.i      $a0, $vi27
    ctx->pc = 0x3778c8u;
    ctx->vu0_cmsar0 = GPR_U32(ctx, 4);
    // 0x3778cc: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x3778ccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3778d0: 0xd8a20010  lqc2        $vf2, 0x10($a1)
    ctx->pc = 0x3778d0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x3778d4: 0xd8a30020  lqc2        $vf3, 0x20($a1)
    ctx->pc = 0x3778d4u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x3778d8: 0xd8a40030  lqc2        $vf4, 0x30($a1)
    ctx->pc = 0x3778d8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x3778dc: 0xd8a50040  lqc2        $vf5, 0x40($a1)
    ctx->pc = 0x3778dcu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x3778e0: 0xd8a60050  lqc2        $vf6, 0x50($a1)
    ctx->pc = 0x3778e0u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 80)));
    // 0x3778e4: 0xd8a70060  lqc2        $vf7, 0x60($a1)
    ctx->pc = 0x3778e4u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 96)));
    // 0x3778e8: 0xd8a80070  lqc2        $vf8, 0x70($a1)
    ctx->pc = 0x3778e8u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 112)));
    // 0x3778ec: 0xd8a90080  lqc2        $vf9, 0x80($a1)
    ctx->pc = 0x3778ecu;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 128)));
    // 0x3778f0: 0xd8aa0090  lqc2        $vf10, 0x90($a1)
    ctx->pc = 0x3778f0u;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 144)));
    // 0x3778f4: 0xd8ab00a0  lqc2        $vf11, 0xA0($a1)
    ctx->pc = 0x3778f4u;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 160)));
    // 0x3778f8: 0xd8ac00b0  lqc2        $vf12, 0xB0($a1)
    ctx->pc = 0x3778f8u;
    ctx->vu0_vf[12] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 176)));
    // 0x3778fc: 0x4a00d839  vcallmsr    $vi27
    ctx->pc = 0x3778fcu;
    {     uint16_t instr_index = ctx->vi[27] & 0x1FF;     uint32_t target_byte_addr = (uint32_t)instr_index << 3;     ctx->vu0_pc = target_byte_addr;     runtime->vu0StartMicroProgram(rdram, ctx, target_byte_addr); }
    // 0x377900: 0x3e00008  jr          $ra
    ctx->pc = 0x377900u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x377900u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x377908u;
}
