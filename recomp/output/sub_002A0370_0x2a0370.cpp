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

// Function: sub_002A0370
// Address: 0x2a0370 - 0x2a03c0
void sub_002A0370_0x2a0370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A0370_0x2a0370");
#endif

    switch (ctx->pc) {
        case 0x2a0370u: goto label_2a0370;
        case 0x2a0374u: goto label_2a0374;
        case 0x2a0378u: goto label_2a0378;
        case 0x2a037cu: goto label_2a037c;
        case 0x2a0380u: goto label_2a0380;
        case 0x2a0384u: goto label_2a0384;
        case 0x2a0388u: goto label_2a0388;
        case 0x2a038cu: goto label_2a038c;
        case 0x2a0390u: goto label_2a0390;
        case 0x2a0394u: goto label_2a0394;
        case 0x2a0398u: goto label_2a0398;
        case 0x2a039cu: goto label_2a039c;
        case 0x2a03a0u: goto label_2a03a0;
        case 0x2a03a4u: goto label_2a03a4;
        case 0x2a03a8u: goto label_2a03a8;
        case 0x2a03acu: goto label_2a03ac;
        case 0x2a03b0u: goto label_2a03b0;
        case 0x2a03b4u: goto label_2a03b4;
        case 0x2a03b8u: goto label_2a03b8;
        case 0x2a03bcu: goto label_2a03bc;
        default: break;
    }

    ctx->pc = 0x2a0370u;

label_2a0370:
    // 0x2a0370: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a0370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2a0374:
    // 0x2a0374: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a0374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2a0378:
    // 0x2a0378: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2a0378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2a037c:
    // 0x2a037c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2a037cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2a0380:
    // 0x2a0380: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2a0380u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2a0384:
    // 0x2a0384: 0x8e230278  lw          $v1, 0x278($s1)
    ctx->pc = 0x2a0384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
label_2a0388:
    // 0x2a0388: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x2a0388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_2a038c:
    // 0x2a038c: 0x40f809  jalr        $v0
label_2a0390:
    if (ctx->pc == 0x2A0390u) {
        ctx->pc = 0x2A0394u;
        goto label_2a0394;
    }
    ctx->pc = 0x2A038Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A0394u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A038Cu, 0x2A0394u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A0394u;
label_2a0394:
    // 0x2a0394: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a0394u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a0398:
    // 0x2a0398: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
label_2a039c:
    if (ctx->pc == 0x2A039Cu) {
        ctx->pc = 0x2A039Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0398u;
        // 0x2a039c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A03A0u;
        goto label_2a03a0;
    }
    ctx->pc = 0x2A0398u;
    {
        const bool branch_taken_0x2a0398 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A039Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0398u;
        // 0x2a039c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a0398) {
            ctx->pc = 0x2A03A8u;
            goto label_2a03a8;
        }
    }
    ctx->pc = 0x2A03A0u;
label_2a03a0:
    // 0x2a03a0: 0xc0a76c4  jal         func_29DB10
label_2a03a4:
    if (ctx->pc == 0x2A03A4u) {
        ctx->pc = 0x2A03A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A03A0u;
        // 0x2a03a4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A03A8u;
        goto label_2a03a8;
    }
    ctx->pc = 0x2A03A0u;
    SET_GPR_U32(ctx, 31, 0x2A03A8u);
    ctx->pc = 0x2A03A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A03A0u;
    // 0x2a03a4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29DB10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29DB10u, 0x2A03A0u, 0x2A03A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A03A8u;
label_2a03a8:
    // 0x2a03a8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2a03a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a03ac:
    // 0x2a03ac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2a03acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2a03b0:
    // 0x2a03b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a03b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2a03b4:
    // 0x2a03b4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2a03b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2a03b8:
    // 0x2a03b8: 0x3e00008  jr          $ra
label_2a03bc:
    if (ctx->pc == 0x2A03BCu) {
        ctx->pc = 0x2A03BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A03B8u;
        // 0x2a03bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A03C0u;
        goto label_fallthrough_0x2a03b8;
    }
    ctx->pc = 0x2A03B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A03BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A03B8u;
        // 0x2a03bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A03B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2a03b8:
    ctx->pc = 0x2A03C0u;
}
