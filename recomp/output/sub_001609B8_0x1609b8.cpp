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

// Function: sub_001609B8
// Address: 0x1609b8 - 0x160a78
void sub_001609B8_0x1609b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001609B8_0x1609b8");
#endif

    switch (ctx->pc) {
        case 0x1609f0u: goto label_1609f0;
        case 0x160a30u: goto label_160a30;
        case 0x160a3cu: goto label_160a3c;
        default: break;
    }

    ctx->pc = 0x1609b8u;

    // 0x1609b8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1609b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1609bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1609bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1609c0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1609c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1609c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1609c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1609c8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1609c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1609cc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1609ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1609d0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1609d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1609d4: 0x92020009  lbu         $v0, 0x9($s0)
    ctx->pc = 0x1609d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
    // 0x1609d8: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1609D8u;
    {
        const bool branch_taken_0x1609d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1609DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1609D8u;
        // 0x1609dc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1609d8) {
            ctx->pc = 0x160A5Cu;
            goto label_160a5c;
        }
    }
    ctx->pc = 0x1609E0u;
    // 0x1609e0: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x1609e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x1609e4: 0x24539c14  addiu       $s3, $v0, -0x63EC
    ctx->pc = 0x1609e4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941716));
    // 0x1609e8: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x1609e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1609ec: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1609ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1609f0:
    // 0x1609f0: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x1609f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1609f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1609f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1609f8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1609f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1609fc: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1609FCu;
    {
        const bool branch_taken_0x1609fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x160A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1609FCu;
        // 0x160a00: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1609fc) {
            ctx->pc = 0x160A3Cu;
            goto label_160a3c;
        }
    }
    ctx->pc = 0x160A04u;
    // 0x160a04: 0x26430001  addiu       $v1, $s2, 0x1
    ctx->pc = 0x160a04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x160a08: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x160a08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x160a0c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x160a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x160a10: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x160A10u;
    {
        const bool branch_taken_0x160a10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x160A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160A10u;
        // 0x160a14: 0x307200ff  andi        $s2, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x160a10) {
            ctx->pc = 0x160A3Cu;
            goto label_160a3c;
        }
    }
    ctx->pc = 0x160A18u;
    // 0x160a18: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x160a18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x160a1c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x160A1Cu;
    {
        const bool branch_taken_0x160a1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x160A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160A1Cu;
        // 0x160a20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160a1c) {
            ctx->pc = 0x160A3Cu;
            goto label_160a3c;
        }
    }
    ctx->pc = 0x160A24u;
    // 0x160a24: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x160a24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160a28: 0xc058368  jal         func_160DA0
    ctx->pc = 0x160A28u;
    SET_GPR_U32(ctx, 31, 0x160A30u);
    ctx->pc = 0x160A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160A28u;
    // 0x160a2c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x160DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160DA0u, 0x160A28u, 0x160A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160A30u;
label_160a30:
    // 0x160a30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x160a30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x160a34: 0xc04f1a8  jal         func_13C6A0
    ctx->pc = 0x160A34u;
    SET_GPR_U32(ctx, 31, 0x160A3Cu);
    ctx->pc = 0x160A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160A34u;
    // 0x160a38: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C6A0u, 0x160A34u, 0x160A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x160A3Cu;
label_160a3c:
    // 0x160a3c: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x160a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x160a40: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x160a40u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x160a44: 0x2e230010  sltiu       $v1, $s1, 0x10
    ctx->pc = 0x160a44u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x160a48: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x160A48u;
    {
        const bool branch_taken_0x160a48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x160a48) {
            ctx->pc = 0x160A4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x160A48u;
            // 0x160a4c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x160A60u;
            goto label_160a60;
        }
    }
    ctx->pc = 0x160A50u;
    // 0x160a50: 0x92020009  lbu         $v0, 0x9($s0)
    ctx->pc = 0x160a50u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
    // 0x160a54: 0x5642ffe6  bnel        $s2, $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x160A54u;
    {
        const bool branch_taken_0x160a54 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x160a54) {
            ctx->pc = 0x160A58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x160A54u;
            // 0x160a58: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1609F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1609f0;
        }
    }
    ctx->pc = 0x160A5Cu;
label_160a5c:
    // 0x160a5c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x160a5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_160a60:
    // 0x160a60: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x160a60u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x160a64: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x160a64u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x160a68: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x160a68u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x160a6c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x160a6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x160a70: 0x3e00008  jr          $ra
    ctx->pc = 0x160A70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x160A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160A70u;
        // 0x160a74: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x160A70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x160A78u;
}
