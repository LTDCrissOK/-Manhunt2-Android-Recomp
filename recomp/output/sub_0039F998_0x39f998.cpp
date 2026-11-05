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

// Function: sub_0039F998
// Address: 0x39f998 - 0x39fa38
void sub_0039F998_0x39f998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039F998_0x39f998");
#endif

    switch (ctx->pc) {
        case 0x39f9d8u: goto label_39f9d8;
        default: break;
    }

    ctx->pc = 0x39f998u;

    // 0x39f998: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x39f998u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x39f99c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x39f99cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x39f9a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x39f9a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39f9a4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x39f9a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x39f9a8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x39f9a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39f9ac: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x39F9ACu;
    {
        const bool branch_taken_0x39f9ac = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x39F9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F9ACu;
        // 0x39f9b0: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f9ac) {
            ctx->pc = 0x39F9D0u;
            goto label_39f9d0;
        }
    }
    ctx->pc = 0x39F9B4u;
    // 0x39f9b4: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x39f9b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x39f9b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x39f9b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39f9bc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x39f9bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x39f9c0: 0x2484c110  addiu       $a0, $a0, -0x3EF0
    ctx->pc = 0x39f9c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951184));
    // 0x39f9c4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x39f9c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39f9c8: 0x80ecbf4  j           func_3B2FD0
    ctx->pc = 0x39F9C8u;
    ctx->pc = 0x39F9CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39F9C8u;
    // 0x39f9cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2FD0u;
    sub_003B2FD0_0x3b2fd0(rdram, ctx, runtime); return;
    ctx->pc = 0x39F9D0u;
label_39f9d0:
    // 0x39f9d0: 0xc0e7dcc  jal         func_39F730
    ctx->pc = 0x39F9D0u;
    SET_GPR_U32(ctx, 31, 0x39F9D8u);
    ctx->pc = 0x39F730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39F730u, 0x39F9D0u, 0x39F9D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39F9D8u;
label_39f9d8:
    // 0x39f9d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x39f9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39f9dc: 0x82020001  lb          $v0, 0x1($s0)
    ctx->pc = 0x39f9dcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x39f9e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39f9e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39f9e4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x39f9e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39f9e8: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x39F9E8u;
    {
        const bool branch_taken_0x39f9e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x39F9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39F9E8u;
        // 0x39f9ec: 0xae1101a8  sw          $s1, 0x1A8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 424), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39f9e8) {
            ctx->pc = 0x39FA08u;
            goto label_39fa08;
        }
    }
    ctx->pc = 0x39F9F0u;
    // 0x39f9f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x39f9f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39f9f4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x39f9f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x39f9f8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x39f9f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39f9fc: 0x80e819c  j           func_3A0670
    ctx->pc = 0x39F9FCu;
    ctx->pc = 0x39FA00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39F9FCu;
    // 0x39fa00: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A0670u;
    sub_003A0670_0x3a0670(rdram, ctx, runtime); return;
    ctx->pc = 0x39FA04u;
    // 0x39fa04: 0x0  nop
    ctx->pc = 0x39fa04u;
    // NOP
label_39fa08:
    // 0x39fa08: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x39fa08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39fa0c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x39fa0cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x39fa10: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x39fa10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39fa14: 0x3e00008  jr          $ra
    ctx->pc = 0x39FA14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39FA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FA14u;
        // 0x39fa18: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39FA14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39FA1Cu;
    // 0x39fa1c: 0x0  nop
    ctx->pc = 0x39fa1cu;
    // NOP
    // 0x39fa20: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x39fa20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x39fa24: 0x0  nop
    ctx->pc = 0x39fa24u;
    // NOP
    // 0x39fa28: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x39fa28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x39fa2c: 0x0  nop
    ctx->pc = 0x39fa2cu;
    // NOP
    // 0x39fa30: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x39fa30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x39fa34: 0x0  nop
    ctx->pc = 0x39fa34u;
    // NOP
    ctx->pc = 0x39fa38u;
}
