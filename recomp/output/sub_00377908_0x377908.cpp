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

// Function: sub_00377908
// Address: 0x377908 - 0x377940
void sub_00377908_0x377908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00377908_0x377908");
#endif

    ctx->pc = 0x377908u;

    // 0x377908: 0x48c4d801  ctc2.i      $a0, $vi27
    ctx->pc = 0x377908u;
    ctx->vu0_cmsar0 = GPR_U32(ctx, 4);
    // 0x37790c: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x37790cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x377910: 0xd8a20010  lqc2        $vf2, 0x10($a1)
    ctx->pc = 0x377910u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x377914: 0xd8a30020  lqc2        $vf3, 0x20($a1)
    ctx->pc = 0x377914u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x377918: 0xd8a40030  lqc2        $vf4, 0x30($a1)
    ctx->pc = 0x377918u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x37791c: 0x4a00d839  vcallmsr    $vi27
    ctx->pc = 0x37791cu;
    {     uint16_t instr_index = ctx->vu0_cmsar0 & 0x1FF;     uint32_t target_byte_addr = (uint32_t)instr_index << 3;     ctx->vu0_pc = target_byte_addr;     runtime->vu0StartMicroProgram(rdram, ctx, target_byte_addr); }
    // 0x377920: 0x3e00008  jr          $ra
    ctx->pc = 0x377920u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x377920u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x377928u;
    // 0x377928: 0x48c4d801  ctc2.i      $a0, $vi27
    ctx->pc = 0x377928u;
    ctx->vu0_cmsar0 = GPR_U32(ctx, 4);
    // 0x37792c: 0x4a0002ff  vnop
    ctx->pc = 0x37792cu;
    // NOP operation, no action needed for VU0
    // 0x377930: 0x4a0002ff  vnop
    ctx->pc = 0x377930u;
    // NOP operation, no action needed for VU0
    // 0x377934: 0x4a00d839  vcallmsr    $vi27
    ctx->pc = 0x377934u;
    {     uint16_t instr_index = ctx->vu0_cmsar0 & 0x1FF;     uint32_t target_byte_addr = (uint32_t)instr_index << 3;     ctx->vu0_pc = target_byte_addr;     runtime->vu0StartMicroProgram(rdram, ctx, target_byte_addr); }
    // 0x377938: 0x3e00008  jr          $ra
    ctx->pc = 0x377938u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x377938u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x377940u;
}
