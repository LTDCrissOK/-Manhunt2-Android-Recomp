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

// Function: sub_003A29D8
// Address: 0x3a29d8 - 0x3a2a88
void sub_003A29D8_0x3a29d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A29D8_0x3a29d8");
#endif

    switch (ctx->pc) {
        case 0x3a2a14u: goto label_3a2a14;
        case 0x3a2a60u: goto label_3a2a60;
        default: break;
    }

    ctx->pc = 0x3a29d8u;

    // 0x3a29d8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3a29d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3a29dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3a29dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3a29e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3a29e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a29e4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3a29e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3a29e8: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x3a29e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a29ec: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3a29ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3a29f0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3a29f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a29f4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3a29f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x3a29f8: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x3a29f8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a29fc: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x3a29fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x3a2a00: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x3a2a00u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a2a04: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x3a2a04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x3a2a08: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3a2a08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3a2a0c: 0xc0eb27a  jal         func_3AC9E8
    ctx->pc = 0x3A2A0Cu;
    SET_GPR_U32(ctx, 31, 0x3A2A14u);
    ctx->pc = 0x3A2A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A2A0Cu;
    // 0x3a2a10: 0xc0a82d  daddu       $s5, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AC9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AC9E8u, 0x3A2A0Cu, 0x3A2A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A2A14u;
label_3a2a14:
    // 0x3a2a14: 0x82030002  lb          $v1, 0x2($s0)
    ctx->pc = 0x3a2a14u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x3a2a18: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A2A18u;
    {
        const bool branch_taken_0x3a2a18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A2A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2A18u;
        // 0x3a2a1c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2a18) {
            ctx->pc = 0x3A2A30u;
            goto label_3a2a30;
        }
    }
    ctx->pc = 0x3A2A20u;
    // 0x3a2a20: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A2A20u;
    {
        const bool branch_taken_0x3a2a20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3A2A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2A20u;
        // 0x3a2a24: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2a20) {
            ctx->pc = 0x3A2A30u;
            goto label_3a2a30;
        }
    }
    ctx->pc = 0x3A2A28u;
    // 0x3a2a28: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3A2A28u;
    {
        const bool branch_taken_0x3a2a28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3a2a28) {
            ctx->pc = 0x3A2A58u;
            goto label_3a2a58;
        }
    }
    ctx->pc = 0x3A2A30u;
label_3a2a30:
    // 0x3a2a30: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3a2a30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3a2a34: 0xae120030  sw          $s2, 0x30($s0)
    ctx->pc = 0x3a2a34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 18));
    // 0x3a2a38: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x3a2a38u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x3a2a3c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3a2a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a2a40: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x3a2a40u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x3a2a44: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x3a2a44u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a2a48: 0xae110018  sw          $s1, 0x18($s0)
    ctx->pc = 0x3a2a48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 17));
    // 0x3a2a4c: 0xfe130020  sd          $s3, 0x20($s0)
    ctx->pc = 0x3a2a4cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 19));
    // 0x3a2a50: 0xfe150028  sd          $s5, 0x28($s0)
    ctx->pc = 0x3a2a50u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 40), GPR_U64(ctx, 21));
    // 0x3a2a54: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x3a2a54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_3a2a58:
    // 0x3a2a58: 0xc0eb286  jal         func_3ACA18
    ctx->pc = 0x3A2A58u;
    SET_GPR_U32(ctx, 31, 0x3A2A60u);
    ctx->pc = 0x3ACA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ACA18u, 0x3A2A58u, 0x3A2A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A2A60u;
label_3a2a60:
    // 0x3a2a60: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x3a2a60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a2a64: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3a2a64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a2a68: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3a2a68u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3a2a6c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3a2a6cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a2a70: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3a2a70u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3a2a74: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x3a2a74u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a2a78: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x3a2a78u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3a2a7c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3a2a7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3a2a80: 0x3e00008  jr          $ra
    ctx->pc = 0x3A2A80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A2A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2A80u;
        // 0x3a2a84: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A2A80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A2A88u;
}
