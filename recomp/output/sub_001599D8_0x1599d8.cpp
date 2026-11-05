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

// Function: sub_001599D8
// Address: 0x1599d8 - 0x159a60
void sub_001599D8_0x1599d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001599D8_0x1599d8");
#endif

    switch (ctx->pc) {
        case 0x1599d8u: goto label_1599d8;
        case 0x1599dcu: goto label_1599dc;
        case 0x1599e0u: goto label_1599e0;
        case 0x1599e4u: goto label_1599e4;
        case 0x1599e8u: goto label_1599e8;
        case 0x1599ecu: goto label_1599ec;
        case 0x1599f0u: goto label_1599f0;
        case 0x1599f4u: goto label_1599f4;
        case 0x1599f8u: goto label_1599f8;
        case 0x1599fcu: goto label_1599fc;
        case 0x159a00u: goto label_159a00;
        case 0x159a04u: goto label_159a04;
        case 0x159a08u: goto label_159a08;
        case 0x159a0cu: goto label_159a0c;
        case 0x159a10u: goto label_159a10;
        case 0x159a14u: goto label_159a14;
        case 0x159a18u: goto label_159a18;
        case 0x159a1cu: goto label_159a1c;
        case 0x159a20u: goto label_159a20;
        case 0x159a24u: goto label_159a24;
        case 0x159a28u: goto label_159a28;
        case 0x159a2cu: goto label_159a2c;
        case 0x159a30u: goto label_159a30;
        case 0x159a34u: goto label_159a34;
        case 0x159a38u: goto label_159a38;
        case 0x159a3cu: goto label_159a3c;
        case 0x159a40u: goto label_159a40;
        case 0x159a44u: goto label_159a44;
        case 0x159a48u: goto label_159a48;
        case 0x159a4cu: goto label_159a4c;
        case 0x159a50u: goto label_159a50;
        case 0x159a54u: goto label_159a54;
        case 0x159a58u: goto label_159a58;
        case 0x159a5cu: goto label_159a5c;
        default: break;
    }

    ctx->pc = 0x1599d8u;

label_1599d8:
    // 0x1599d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1599d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1599dc:
    // 0x1599dc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1599dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1599e0:
    // 0x1599e0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1599e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1599e4:
    // 0x1599e4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1599e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1599e8:
    // 0x1599e8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1599e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_1599ec:
    // 0x1599ec: 0xc04f21c  jal         func_13C870
label_1599f0:
    if (ctx->pc == 0x1599F0u) {
        ctx->pc = 0x1599F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1599ECu;
        // 0x1599f0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1599F4u;
        goto label_1599f4;
    }
    ctx->pc = 0x1599ECu;
    SET_GPR_U32(ctx, 31, 0x1599F4u);
    ctx->pc = 0x1599F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1599ECu;
    // 0x1599f0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C870u, 0x1599ECu, 0x1599F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1599F4u;
label_1599f4:
    // 0x1599f4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1599f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1599f8:
    // 0x1599f8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1599f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1599fc:
    // 0x1599fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1599fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_159a00:
    // 0x159a00: 0xc04f33e  jal         func_13CCF8
label_159a04:
    if (ctx->pc == 0x159A04u) {
        ctx->pc = 0x159A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159A00u;
        // 0x159a04: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159A08u;
        goto label_159a08;
    }
    ctx->pc = 0x159A00u;
    SET_GPR_U32(ctx, 31, 0x159A08u);
    ctx->pc = 0x159A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159A00u;
    // 0x159a04: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13CCF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13CCF8u, 0x159A00u, 0x159A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159A08u;
label_159a08:
    // 0x159a08: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x159a08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_159a0c:
    // 0x159a0c: 0xc04f0b6  jal         func_13C2D8
label_159a10:
    if (ctx->pc == 0x159A10u) {
        ctx->pc = 0x159A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159A0Cu;
        // 0x159a10: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159A14u;
        goto label_159a14;
    }
    ctx->pc = 0x159A0Cu;
    SET_GPR_U32(ctx, 31, 0x159A14u);
    ctx->pc = 0x159A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159A0Cu;
    // 0x159a10: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C2D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C2D8u, 0x159A0Cu, 0x159A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159A14u;
label_159a14:
    // 0x159a14: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x159a14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_159a18:
    // 0x159a18: 0x8e2502e4  lw          $a1, 0x2E4($s1)
    ctx->pc = 0x159a18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 740)));
label_159a1c:
    // 0x159a1c: 0xc0461e8  jal         func_1187A0
label_159a20:
    if (ctx->pc == 0x159A20u) {
        ctx->pc = 0x159A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159A1Cu;
        // 0x159a20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159A24u;
        goto label_159a24;
    }
    ctx->pc = 0x159A1Cu;
    SET_GPR_U32(ctx, 31, 0x159A24u);
    ctx->pc = 0x159A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159A1Cu;
    // 0x159a20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1187A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1187A0u, 0x159A1Cu, 0x159A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159A24u;
label_159a24:
    // 0x159a24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x159a24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_159a28:
    // 0x159a28: 0xc046226  jal         func_118898
label_159a2c:
    if (ctx->pc == 0x159A2Cu) {
        ctx->pc = 0x159A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159A28u;
        // 0x159a2c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159A30u;
        goto label_159a30;
    }
    ctx->pc = 0x159A28u;
    SET_GPR_U32(ctx, 31, 0x159A30u);
    ctx->pc = 0x159A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159A28u;
    // 0x159a2c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118898u, 0x159A28u, 0x159A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159A30u;
label_159a30:
    // 0x159a30: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x159a30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_159a34:
    // 0x159a34: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x159a34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_159a38:
    // 0x159a38: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x159a38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_159a3c:
    // 0x159a3c: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x159a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_159a40:
    // 0x159a40: 0x40f809  jalr        $v0
label_159a44:
    if (ctx->pc == 0x159A44u) {
        ctx->pc = 0x159A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159A40u;
        // 0x159a44: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159A48u;
        goto label_159a48;
    }
    ctx->pc = 0x159A40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x159A48u);
        ctx->pc = 0x159A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159A40u;
        // 0x159a44: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x159A40u, 0x159A48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x159A48u;
label_159a48:
    // 0x159a48: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x159a48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_159a4c:
    // 0x159a4c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x159a4cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_159a50:
    // 0x159a50: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x159a50u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_159a54:
    // 0x159a54: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x159a54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_159a58:
    // 0x159a58: 0x3e00008  jr          $ra
label_159a5c:
    if (ctx->pc == 0x159A5Cu) {
        ctx->pc = 0x159A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159A58u;
        // 0x159a5c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x159A60u;
        goto label_fallthrough_0x159a58;
    }
    ctx->pc = 0x159A58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x159A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x159A58u;
        // 0x159a5c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x159A58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x159a58:
    ctx->pc = 0x159A60u;
}
