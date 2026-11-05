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

// Function: sub_001099E8
// Address: 0x1099e8 - 0x109a68
void sub_001099E8_0x1099e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001099E8_0x1099e8");
#endif

    switch (ctx->pc) {
        case 0x109a10u: goto label_109a10;
        case 0x109a28u: goto label_109a28;
        case 0x109a40u: goto label_109a40;
        default: break;
    }

    ctx->pc = 0x1099e8u;

    // 0x1099e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1099e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1099ec: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1099ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1099f0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1099f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1099f4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1099f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1099f8: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x1099f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x1099fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1099fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x109a00: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x109a00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x109a04: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x109a04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109a08: 0xc04786e  jal         func_11E1B8
    ctx->pc = 0x109A08u;
    SET_GPR_U32(ctx, 31, 0x109A10u);
    ctx->pc = 0x109A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109A08u;
    // 0x109a0c: 0x24849a08  addiu       $a0, $a0, -0x65F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E1B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E1B8u, 0x109A08u, 0x109A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109A10u;
label_109a10:
    // 0x109a10: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x109a10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109a14: 0x24020021  addiu       $v0, $zero, 0x21
    ctx->pc = 0x109a14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x109a18: 0x1202000c  beq         $s0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x109A18u;
    {
        const bool branch_taken_0x109a18 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x109A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109A18u;
        // 0x109a1c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109a18) {
            ctx->pc = 0x109A4Cu;
            goto label_109a4c;
        }
    }
    ctx->pc = 0x109A20u;
    // 0x109a20: 0xc040ce8  jal         func_1033A0
    ctx->pc = 0x109A20u;
    SET_GPR_U32(ctx, 31, 0x109A28u);
    ctx->pc = 0x109A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109A20u;
    // 0x109a24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1033A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1033A0u, 0x109A20u, 0x109A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109A28u;
label_109a28:
    // 0x109a28: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x109a28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109a2c: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x109a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x109a30: 0x10c20005  beq         $a2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x109A30u;
    {
        const bool branch_taken_0x109a30 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x109A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109A30u;
        // 0x109a34: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109a30) {
            ctx->pc = 0x109A48u;
            goto label_109a48;
        }
    }
    ctx->pc = 0x109A38u;
    // 0x109a38: 0xc043646  jal         func_10D918
    ctx->pc = 0x109A38u;
    SET_GPR_U32(ctx, 31, 0x109A40u);
    ctx->pc = 0x109A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109A38u;
    // 0x109a3c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10D918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D918u, 0x109A38u, 0x109A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109A40u;
label_109a40:
    // 0x109a40: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x109A40u;
    {
        const bool branch_taken_0x109a40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x109A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109A40u;
        // 0x109a44: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109a40) {
            ctx->pc = 0x109A4Cu;
            goto label_109a4c;
        }
    }
    ctx->pc = 0x109A48u;
label_109a48:
    // 0x109a48: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x109a48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_109a4c:
    // 0x109a4c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x109a4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x109a50: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x109a50u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x109a54: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x109a54u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x109a58: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x109a58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x109a5c: 0x3e00008  jr          $ra
    ctx->pc = 0x109A5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x109A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109A5Cu;
        // 0x109a60: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x109A5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x109A64u;
    // 0x109a64: 0x0  nop
    ctx->pc = 0x109a64u;
    // NOP
    ctx->pc = 0x109a68u;
}
