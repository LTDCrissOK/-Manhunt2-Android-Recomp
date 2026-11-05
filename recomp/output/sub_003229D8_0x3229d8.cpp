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

// Function: sub_003229D8
// Address: 0x3229d8 - 0x322a58
void sub_003229D8_0x3229d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003229D8_0x3229d8");
#endif

    switch (ctx->pc) {
        case 0x3229d8u: goto label_3229d8;
        case 0x3229dcu: goto label_3229dc;
        case 0x3229e0u: goto label_3229e0;
        case 0x3229e4u: goto label_3229e4;
        case 0x3229e8u: goto label_3229e8;
        case 0x3229ecu: goto label_3229ec;
        case 0x3229f0u: goto label_3229f0;
        case 0x3229f4u: goto label_3229f4;
        case 0x3229f8u: goto label_3229f8;
        case 0x3229fcu: goto label_3229fc;
        case 0x322a00u: goto label_322a00;
        case 0x322a04u: goto label_322a04;
        case 0x322a08u: goto label_322a08;
        case 0x322a0cu: goto label_322a0c;
        case 0x322a10u: goto label_322a10;
        case 0x322a14u: goto label_322a14;
        case 0x322a18u: goto label_322a18;
        case 0x322a1cu: goto label_322a1c;
        case 0x322a20u: goto label_322a20;
        case 0x322a24u: goto label_322a24;
        case 0x322a28u: goto label_322a28;
        case 0x322a2cu: goto label_322a2c;
        case 0x322a30u: goto label_322a30;
        case 0x322a34u: goto label_322a34;
        case 0x322a38u: goto label_322a38;
        case 0x322a3cu: goto label_322a3c;
        case 0x322a40u: goto label_322a40;
        case 0x322a44u: goto label_322a44;
        case 0x322a48u: goto label_322a48;
        case 0x322a4cu: goto label_322a4c;
        case 0x322a50u: goto label_322a50;
        case 0x322a54u: goto label_322a54;
        default: break;
    }

    ctx->pc = 0x3229d8u;

label_3229d8:
    // 0x3229d8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3229d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3229dc:
    // 0x3229dc: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x3229dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
label_3229e0:
    // 0x3229e0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3229e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_3229e4:
    // 0x3229e4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3229e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_3229e8:
    // 0x3229e8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3229e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3229ec:
    // 0x3229ec: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3229ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_3229f0:
    // 0x3229f0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x3229f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3229f4:
    // 0x3229f4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3229f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_3229f8:
    // 0x3229f8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3229f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3229fc:
    // 0x3229fc: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x3229fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_322a00:
    // 0x322a00: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_322a04:
    if (ctx->pc == 0x322A04u) {
        ctx->pc = 0x322A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322A00u;
        // 0x322a04: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322A08u;
        goto label_322a08;
    }
    ctx->pc = 0x322A00u;
    {
        const bool branch_taken_0x322a00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x322A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322A00u;
        // 0x322a04: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322a00) {
            ctx->pc = 0x322A3Cu;
            goto label_322a3c;
        }
    }
    ctx->pc = 0x322A08u;
label_322a08:
    // 0x322a08: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x322a08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_322a0c:
    // 0x322a0c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x322a0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_322a10:
    // 0x322a10: 0xc0c5492  jal         func_315248
label_322a14:
    if (ctx->pc == 0x322A14u) {
        ctx->pc = 0x322A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322A10u;
        // 0x322a14: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322A18u;
        goto label_322a18;
    }
    ctx->pc = 0x322A10u;
    SET_GPR_U32(ctx, 31, 0x322A18u);
    ctx->pc = 0x322A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322A10u;
    // 0x322a14: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x315248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x315248u, 0x322A10u, 0x322A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322A18u;
label_322a18:
    // 0x322a18: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x322a18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_322a1c:
    // 0x322a1c: 0x260f809  jalr        $s3
label_322a20:
    if (ctx->pc == 0x322A20u) {
        ctx->pc = 0x322A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322A1Cu;
        // 0x322a20: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322A24u;
        goto label_322a24;
    }
    ctx->pc = 0x322A1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x322A24u);
        ctx->pc = 0x322A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322A1Cu;
        // 0x322a20: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x322A1Cu, 0x322A24u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x322A24u;
label_322a24:
    // 0x322a24: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_322a28:
    if (ctx->pc == 0x322A28u) {
        ctx->pc = 0x322A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322A24u;
        // 0x322a28: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322A2Cu;
        goto label_322a2c;
    }
    ctx->pc = 0x322A24u;
    {
        const bool branch_taken_0x322a24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x322A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322A24u;
        // 0x322a28: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322a24) {
            ctx->pc = 0x322A3Cu;
            goto label_322a3c;
        }
    }
    ctx->pc = 0x322A2Cu;
label_322a2c:
    // 0x322a2c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x322a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_322a30:
    // 0x322a30: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x322a30u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_322a34:
    // 0x322a34: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_322a38:
    if (ctx->pc == 0x322A38u) {
        ctx->pc = 0x322A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322A34u;
        // 0x322a38: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322A3Cu;
        goto label_322a3c;
    }
    ctx->pc = 0x322A34u;
    {
        const bool branch_taken_0x322a34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x322A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322A34u;
        // 0x322a38: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322a34) {
            ctx->pc = 0x322A10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_322a10;
        }
    }
    ctx->pc = 0x322A3Cu;
label_322a3c:
    // 0x322a3c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x322a3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_322a40:
    // 0x322a40: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x322a40u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_322a44:
    // 0x322a44: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x322a44u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_322a48:
    // 0x322a48: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x322a48u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_322a4c:
    // 0x322a4c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x322a4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_322a50:
    // 0x322a50: 0x3e00008  jr          $ra
label_322a54:
    if (ctx->pc == 0x322A54u) {
        ctx->pc = 0x322A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322A50u;
        // 0x322a54: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322A58u;
        goto label_fallthrough_0x322a50;
    }
    ctx->pc = 0x322A50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x322A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322A50u;
        // 0x322a54: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x322A50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x322a50:
    ctx->pc = 0x322A58u;
}
