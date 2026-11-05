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

// Function: sub_001323D8
// Address: 0x1323d8 - 0x132440
void sub_001323D8_0x1323d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001323D8_0x1323d8");
#endif

    switch (ctx->pc) {
        case 0x1323d8u: goto label_1323d8;
        case 0x1323dcu: goto label_1323dc;
        case 0x1323e0u: goto label_1323e0;
        case 0x1323e4u: goto label_1323e4;
        case 0x1323e8u: goto label_1323e8;
        case 0x1323ecu: goto label_1323ec;
        case 0x1323f0u: goto label_1323f0;
        case 0x1323f4u: goto label_1323f4;
        case 0x1323f8u: goto label_1323f8;
        case 0x1323fcu: goto label_1323fc;
        case 0x132400u: goto label_132400;
        case 0x132404u: goto label_132404;
        case 0x132408u: goto label_132408;
        case 0x13240cu: goto label_13240c;
        case 0x132410u: goto label_132410;
        case 0x132414u: goto label_132414;
        case 0x132418u: goto label_132418;
        case 0x13241cu: goto label_13241c;
        case 0x132420u: goto label_132420;
        case 0x132424u: goto label_132424;
        case 0x132428u: goto label_132428;
        case 0x13242cu: goto label_13242c;
        case 0x132430u: goto label_132430;
        case 0x132434u: goto label_132434;
        case 0x132438u: goto label_132438;
        case 0x13243cu: goto label_13243c;
        default: break;
    }

    ctx->pc = 0x1323d8u;

label_1323d8:
    // 0x1323d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1323d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1323dc:
    // 0x1323dc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1323dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1323e0:
    // 0x1323e0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1323e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1323e4:
    // 0x1323e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1323e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1323e8:
    // 0x1323e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1323e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1323ec:
    // 0x1323ec: 0xc04c77a  jal         func_131DE8
label_1323f0:
    if (ctx->pc == 0x1323F0u) {
        ctx->pc = 0x1323F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1323ECu;
        // 0x1323f0: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1323F4u;
        goto label_1323f4;
    }
    ctx->pc = 0x1323ECu;
    SET_GPR_U32(ctx, 31, 0x1323F4u);
    ctx->pc = 0x1323F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1323ECu;
    // 0x1323f0: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131DE8u, 0x1323ECu, 0x1323F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1323F4u;
label_1323f4:
    // 0x1323f4: 0x108100  sll         $s0, $s0, 4
    ctx->pc = 0x1323f4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_1323f8:
    // 0x1323f8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1323f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1323fc:
    // 0x1323fc: 0x2302021  addu        $a0, $s1, $s0
    ctx->pc = 0x1323fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_132400:
    // 0x132400: 0xac820018  sw          $v0, 0x18($a0)
    ctx->pc = 0x132400u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 2));
label_132404:
    // 0x132404: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x132404u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_132408:
    // 0x132408: 0xaca3001c  sw          $v1, 0x1C($a1)
    ctx->pc = 0x132408u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 3));
label_13240c:
    // 0x13240c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13240cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_132410:
    // 0x132410: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x132410u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_132414:
    // 0x132414: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x132414u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_132418:
    // 0x132418: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x132418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_13241c:
    // 0x13241c: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x13241cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_132420:
    // 0x132420: 0x40f809  jalr        $v0
label_132424:
    if (ctx->pc == 0x132424u) {
        ctx->pc = 0x132424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132420u;
        // 0x132424: 0x8e060024  lw          $a2, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x132428u;
        goto label_132428;
    }
    ctx->pc = 0x132420u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x132428u);
        ctx->pc = 0x132424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132420u;
        // 0x132424: 0x8e060024  lw          $a2, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x132420u, 0x132428u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x132428u;
label_132428:
    // 0x132428: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x132428u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_13242c:
    // 0x13242c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x13242cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_132430:
    // 0x132430: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x132430u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_132434:
    // 0x132434: 0x3e00008  jr          $ra
label_132438:
    if (ctx->pc == 0x132438u) {
        ctx->pc = 0x132438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132434u;
        // 0x132438: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13243Cu;
        goto label_13243c;
    }
    ctx->pc = 0x132434u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x132438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132434u;
        // 0x132438: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x132434u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13243Cu;
label_13243c:
    // 0x13243c: 0x0  nop
    ctx->pc = 0x13243cu;
    // NOP
    ctx->pc = 0x132440u;
}
