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

// Function: sub_003638F0
// Address: 0x3638f0 - 0x363970
void sub_003638F0_0x3638f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003638F0_0x3638f0");
#endif

    switch (ctx->pc) {
        case 0x3638f0u: goto label_3638f0;
        case 0x3638f4u: goto label_3638f4;
        case 0x3638f8u: goto label_3638f8;
        case 0x3638fcu: goto label_3638fc;
        case 0x363900u: goto label_363900;
        case 0x363904u: goto label_363904;
        case 0x363908u: goto label_363908;
        case 0x36390cu: goto label_36390c;
        case 0x363910u: goto label_363910;
        case 0x363914u: goto label_363914;
        case 0x363918u: goto label_363918;
        case 0x36391cu: goto label_36391c;
        case 0x363920u: goto label_363920;
        case 0x363924u: goto label_363924;
        case 0x363928u: goto label_363928;
        case 0x36392cu: goto label_36392c;
        case 0x363930u: goto label_363930;
        case 0x363934u: goto label_363934;
        case 0x363938u: goto label_363938;
        case 0x36393cu: goto label_36393c;
        case 0x363940u: goto label_363940;
        case 0x363944u: goto label_363944;
        case 0x363948u: goto label_363948;
        case 0x36394cu: goto label_36394c;
        case 0x363950u: goto label_363950;
        case 0x363954u: goto label_363954;
        case 0x363958u: goto label_363958;
        case 0x36395cu: goto label_36395c;
        case 0x363960u: goto label_363960;
        case 0x363964u: goto label_363964;
        case 0x363968u: goto label_363968;
        case 0x36396cu: goto label_36396c;
        default: break;
    }

    ctx->pc = 0x3638f0u;

label_3638f0:
    // 0x3638f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3638f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3638f4:
    // 0x3638f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3638f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_3638f8:
    // 0x3638f8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3638f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_3638fc:
    // 0x3638fc: 0x14a00007  bnez        $a1, . + 4 + (0x7 << 2)
label_363900:
    if (ctx->pc == 0x363900u) {
        ctx->pc = 0x363900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3638FCu;
        // 0x363900: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x363904u;
        goto label_363904;
    }
    ctx->pc = 0x3638FCu;
    {
        const bool branch_taken_0x3638fc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x363900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3638FCu;
        // 0x363900: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3638fc) {
            ctx->pc = 0x36391Cu;
            goto label_36391c;
        }
    }
    ctx->pc = 0x363904u;
label_363904:
    // 0x363904: 0x8e03005c  lw          $v1, 0x5C($s0)
    ctx->pc = 0x363904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
label_363908:
    // 0x363908: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x363908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_36390c:
    // 0x36390c: 0x40f809  jalr        $v0
label_363910:
    if (ctx->pc == 0x363910u) {
        ctx->pc = 0x363914u;
        goto label_363914;
    }
    ctx->pc = 0x36390Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x363914u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36390Cu, 0x363914u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x363914u;
label_363914:
    // 0x363914: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_363918:
    if (ctx->pc == 0x363918u) {
        ctx->pc = 0x363918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363914u;
        // 0x363918: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36391Cu;
        goto label_36391c;
    }
    ctx->pc = 0x363914u;
    {
        const bool branch_taken_0x363914 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x363918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363914u;
        // 0x363918: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x363914) {
            ctx->pc = 0x36395Cu;
            goto label_36395c;
        }
    }
    ctx->pc = 0x36391Cu;
label_36391c:
    // 0x36391c: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x36391cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_363920:
    // 0x363920: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x363920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_363924:
    // 0x363924: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x363924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_363928:
    // 0x363928: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x363928u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_36392c:
    // 0x36392c: 0xf8410010  sqc2        $vf1, 0x10($v0)
    ctx->pc = 0x36392cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[1]));
label_363930:
    // 0x363930: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x363930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_363934:
    // 0x363934: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x363934u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_363938:
    // 0x363938: 0x8c860024  lw          $a2, 0x24($a0)
    ctx->pc = 0x363938u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_36393c:
    // 0x36393c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x36393cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_363940:
    // 0x363940: 0x40f809  jalr        $v0
label_363944:
    if (ctx->pc == 0x363944u) {
        ctx->pc = 0x363944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363940u;
        // 0x363944: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x363948u;
        goto label_363948;
    }
    ctx->pc = 0x363940u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x363948u);
        ctx->pc = 0x363944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363940u;
        // 0x363944: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x363940u, 0x363948u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x363948u;
label_363948:
    // 0x363948: 0xae020058  sw          $v0, 0x58($s0)
    ctx->pc = 0x363948u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
label_36394c:
    // 0x36394c: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x36394cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_363950:
    // 0x363950: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x363950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_363954:
    // 0x363954: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x363954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_363958:
    // 0x363958: 0xae030038  sw          $v1, 0x38($s0)
    ctx->pc = 0x363958u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 3));
label_36395c:
    // 0x36395c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36395cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_363960:
    // 0x363960: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x363960u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_363964:
    // 0x363964: 0x3e00008  jr          $ra
label_363968:
    if (ctx->pc == 0x363968u) {
        ctx->pc = 0x363968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363964u;
        // 0x363968: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36396Cu;
        goto label_36396c;
    }
    ctx->pc = 0x363964u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x363968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363964u;
        // 0x363968: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x363964u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36396Cu;
label_36396c:
    // 0x36396c: 0x0  nop
    ctx->pc = 0x36396cu;
    // NOP
    ctx->pc = 0x363970u;
}
