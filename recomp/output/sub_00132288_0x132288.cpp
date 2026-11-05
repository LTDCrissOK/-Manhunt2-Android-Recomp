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

// Function: sub_00132288
// Address: 0x132288 - 0x132308
void sub_00132288_0x132288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00132288_0x132288");
#endif

    switch (ctx->pc) {
        case 0x132288u: goto label_132288;
        case 0x13228cu: goto label_13228c;
        case 0x132290u: goto label_132290;
        case 0x132294u: goto label_132294;
        case 0x132298u: goto label_132298;
        case 0x13229cu: goto label_13229c;
        case 0x1322a0u: goto label_1322a0;
        case 0x1322a4u: goto label_1322a4;
        case 0x1322a8u: goto label_1322a8;
        case 0x1322acu: goto label_1322ac;
        case 0x1322b0u: goto label_1322b0;
        case 0x1322b4u: goto label_1322b4;
        case 0x1322b8u: goto label_1322b8;
        case 0x1322bcu: goto label_1322bc;
        case 0x1322c0u: goto label_1322c0;
        case 0x1322c4u: goto label_1322c4;
        case 0x1322c8u: goto label_1322c8;
        case 0x1322ccu: goto label_1322cc;
        case 0x1322d0u: goto label_1322d0;
        case 0x1322d4u: goto label_1322d4;
        case 0x1322d8u: goto label_1322d8;
        case 0x1322dcu: goto label_1322dc;
        case 0x1322e0u: goto label_1322e0;
        case 0x1322e4u: goto label_1322e4;
        case 0x1322e8u: goto label_1322e8;
        case 0x1322ecu: goto label_1322ec;
        case 0x1322f0u: goto label_1322f0;
        case 0x1322f4u: goto label_1322f4;
        case 0x1322f8u: goto label_1322f8;
        case 0x1322fcu: goto label_1322fc;
        case 0x132300u: goto label_132300;
        case 0x132304u: goto label_132304;
        default: break;
    }

    ctx->pc = 0x132288u;

label_132288:
    // 0x132288: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x132288u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_13228c:
    // 0x13228c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13228cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_132290:
    // 0x132290: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x132290u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_132294:
    // 0x132294: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x132294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_132298:
    // 0x132298: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x132298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_13229c:
    // 0x13229c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x13229cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_1322a0:
    // 0x1322a0: 0xc04c77a  jal         func_131DE8
label_1322a4:
    if (ctx->pc == 0x1322A4u) {
        ctx->pc = 0x1322A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1322A0u;
        // 0x1322a4: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1322A8u;
        goto label_1322a8;
    }
    ctx->pc = 0x1322A0u;
    SET_GPR_U32(ctx, 31, 0x1322A8u);
    ctx->pc = 0x1322A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1322A0u;
    // 0x1322a4: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131DE8u, 0x1322A0u, 0x1322A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1322A8u;
label_1322a8:
    // 0x1322a8: 0x118900  sll         $s1, $s1, 4
    ctx->pc = 0x1322a8u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
label_1322ac:
    // 0x1322ac: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1322acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1322b0:
    // 0x1322b0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1322b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1322b4:
    // 0x1322b4: 0x2111021  addu        $v0, $s0, $s1
    ctx->pc = 0x1322b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_1322b8:
    // 0x1322b8: 0xac520018  sw          $s2, 0x18($v0)
    ctx->pc = 0x1322b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 18));
label_1322bc:
    // 0x1322bc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1322bcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1322c0:
    // 0x1322c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1322c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1322c4:
    // 0x1322c4: 0xac62001c  sw          $v0, 0x1C($v1)
    ctx->pc = 0x1322c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 2));
label_1322c8:
    // 0x1322c8: 0xc04b3e2  jal         func_12CF88
label_1322cc:
    if (ctx->pc == 0x1322CCu) {
        ctx->pc = 0x1322CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1322C8u;
        // 0x1322cc: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1322D0u;
        goto label_1322d0;
    }
    ctx->pc = 0x1322C8u;
    SET_GPR_U32(ctx, 31, 0x1322D0u);
    ctx->pc = 0x1322CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1322C8u;
    // 0x1322cc: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12CF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12CF88u, 0x1322C8u, 0x1322D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1322D0u;
label_1322d0:
    // 0x1322d0: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1322d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1322d4:
    // 0x1322d4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1322d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1322d8:
    // 0x1322d8: 0x2118021  addu        $s0, $s0, $s1
    ctx->pc = 0x1322d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_1322dc:
    // 0x1322dc: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x1322dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_1322e0:
    // 0x1322e0: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x1322e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_1322e4:
    // 0x1322e4: 0x40f809  jalr        $v0
label_1322e8:
    if (ctx->pc == 0x1322E8u) {
        ctx->pc = 0x1322E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1322E4u;
        // 0x1322e8: 0x8e060024  lw          $a2, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1322ECu;
        goto label_1322ec;
    }
    ctx->pc = 0x1322E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1322ECu);
        ctx->pc = 0x1322E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1322E4u;
        // 0x1322e8: 0x8e060024  lw          $a2, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1322E4u, 0x1322ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1322ECu;
label_1322ec:
    // 0x1322ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1322ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1322f0:
    // 0x1322f0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1322f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1322f4:
    // 0x1322f4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1322f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1322f8:
    // 0x1322f8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1322f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1322fc:
    // 0x1322fc: 0x3e00008  jr          $ra
label_132300:
    if (ctx->pc == 0x132300u) {
        ctx->pc = 0x132300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1322FCu;
        // 0x132300: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x132304u;
        goto label_132304;
    }
    ctx->pc = 0x1322FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x132300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1322FCu;
        // 0x132300: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1322FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x132304u;
label_132304:
    // 0x132304: 0x0  nop
    ctx->pc = 0x132304u;
    // NOP
    ctx->pc = 0x132308u;
}
