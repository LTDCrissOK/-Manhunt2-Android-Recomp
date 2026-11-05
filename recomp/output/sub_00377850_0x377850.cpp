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

// Function: sub_00377850
// Address: 0x377850 - 0x37789c
void sub_00377850_0x377850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00377850_0x377850");
#endif

    switch (ctx->pc) {
        case 0x377864u: goto label_377864;
        default: break;
    }

    ctx->pc = 0x377850u;

    // 0x377850: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x377850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x377854: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x377854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x377858: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x377858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37785c: 0xc0dddba  jal         func_3776E8
    ctx->pc = 0x37785Cu;
    SET_GPR_U32(ctx, 31, 0x377864u);
    ctx->pc = 0x377860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37785Cu;
    // 0x377860: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3776E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3776E8u, 0x37785Cu, 0x377864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377864u;
label_377864:
    // 0x377864: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x377864u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x377868: 0x3e00008  jr          $ra
    ctx->pc = 0x377868u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37786Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377868u;
        // 0x37786c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x377868u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x377870u;
    // 0x377870: 0x48c4d801  ctc2.i      $a0, $vi27
    ctx->pc = 0x377870u;
    ctx->vu0_cmsar0 = GPR_U32(ctx, 4);
    // 0x377874: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x377874u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x377878: 0x4a0002ff  vnop
    ctx->pc = 0x377878u;
    // NOP operation, no action needed for VU0
    // 0x37787c: 0x4a00d839  vcallmsr    $vi27
    ctx->pc = 0x37787cu;
    {     uint16_t instr_index = ctx->vi[27] & 0x1FF;     uint32_t target_byte_addr = (uint32_t)instr_index << 3;     ctx->vu0_pc = target_byte_addr;     runtime->vu0StartMicroProgram(rdram, ctx, target_byte_addr); }
    // 0x377880: 0x48440801  cfc2.i      $a0, $vi1
    ctx->pc = 0x377880u;
    SET_GPR_U32(ctx, 4, static_cast<uint32_t>(ctx->vi[1]));
    // 0x377884: 0x48451000  cfc2.ni     $a1, $vi2
    ctx->pc = 0x377884u;
    SET_GPR_U32(ctx, 5, static_cast<uint32_t>(ctx->vi[2]));
    // 0x377888: 0x42103  sra         $a0, $a0, 4
    ctx->pc = 0x377888u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 4));
    // 0x37788c: 0x52903  sra         $a1, $a1, 4
    ctx->pc = 0x37788cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 4));
    // 0x377890: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x377890u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x377894: 0x3e00008  jr          $ra
    ctx->pc = 0x377894u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x377898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377894u;
        // 0x377898: 0xace50000  sw          $a1, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x377894u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37789Cu;
}
