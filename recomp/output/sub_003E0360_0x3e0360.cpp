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

// Function: sub_003E0360
// Address: 0x3e0360 - 0x3e03c8
void sub_003E0360_0x3e0360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E0360_0x3e0360");
#endif

    switch (ctx->pc) {
        case 0x3e0394u: goto label_3e0394;
        case 0x3e03b0u: goto label_3e03b0;
        default: break;
    }

    ctx->pc = 0x3e0360u;

    // 0x3e0360: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3e0360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3e0364: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3e0364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3e0368: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3e0368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3e036c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3e036cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3e0370: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3e0370u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e0374: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3e0374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3e0378: 0x50102b  sltu        $v0, $v0, $s0
    ctx->pc = 0x3e0378u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x3e037c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3E037Cu;
    {
        const bool branch_taken_0x3e037c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3E0380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E037Cu;
        // 0x3e0380: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e037c) {
            ctx->pc = 0x3E03A8u;
            goto label_3e03a8;
        }
    }
    ctx->pc = 0x3E0384u;
    // 0x3e0384: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3E0384u;
    {
        const bool branch_taken_0x3e0384 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e0384) {
            ctx->pc = 0x3E03A8u;
            goto label_3e03a8;
        }
    }
    ctx->pc = 0x3E038Cu;
    // 0x3e038c: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3E038Cu;
    SET_GPR_U32(ctx, 31, 0x3E0394u);
    ctx->pc = 0x3E0390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E038Cu;
    // 0x3e0390: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3E038Cu, 0x3E0394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E0394u;
label_3e0394:
    // 0x3e0394: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x3e0394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x3e0398: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x3e0398u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x3e039c: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x3e039cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
    // 0x3e03a0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3E03A0u;
    {
        const bool branch_taken_0x3e03a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E03A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E03A0u;
        // 0x3e03a4: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e03a0) {
            ctx->pc = 0x3E03B0u;
            goto label_3e03b0;
        }
    }
    ctx->pc = 0x3E03A8u;
label_3e03a8:
    // 0x3e03a8: 0xc0f80d0  jal         func_3E0340
    ctx->pc = 0x3E03A8u;
    SET_GPR_U32(ctx, 31, 0x3E03B0u);
    ctx->pc = 0x3E03ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E03A8u;
    // 0x3e03ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E0340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E0340u, 0x3E03A8u, 0x3E03B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E03B0u;
label_3e03b0:
    // 0x3e03b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3e03b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e03b4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3e03b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3e03b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3e03b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e03bc: 0x3e00008  jr          $ra
    ctx->pc = 0x3E03BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E03C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E03BCu;
        // 0x3e03c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E03BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E03C4u;
    // 0x3e03c4: 0x0  nop
    ctx->pc = 0x3e03c4u;
    // NOP
    ctx->pc = 0x3e03c8u;
}
