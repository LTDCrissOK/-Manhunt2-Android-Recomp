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

// Function: sub_001F9AA8
// Address: 0x1f9aa8 - 0x1f9b80
void sub_001F9AA8_0x1f9aa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F9AA8_0x1f9aa8");
#endif

    switch (ctx->pc) {
        case 0x1f9ad0u: goto label_1f9ad0;
        case 0x1f9ad8u: goto label_1f9ad8;
        case 0x1f9af0u: goto label_1f9af0;
        case 0x1f9b0cu: goto label_1f9b0c;
        case 0x1f9b1cu: goto label_1f9b1c;
        case 0x1f9b2cu: goto label_1f9b2c;
        case 0x1f9b38u: goto label_1f9b38;
        case 0x1f9b44u: goto label_1f9b44;
        case 0x1f9b5cu: goto label_1f9b5c;
        case 0x1f9b64u: goto label_1f9b64;
        default: break;
    }

    ctx->pc = 0x1f9aa8u;

    // 0x1f9aa8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f9aa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f9aac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f9aacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f9ab0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f9ab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1f9ab4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1f9ab4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9ab8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1f9ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1f9abc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1f9abcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9ac0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1f9ac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1f9ac4: 0x3c12004a  lui         $s2, 0x4A
    ctx->pc = 0x1f9ac4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)74 << 16));
    // 0x1f9ac8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f9ac8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9acc: 0x0  nop
    ctx->pc = 0x1f9accu;
    // NOP
label_1f9ad0:
    // 0x1f9ad0: 0xc080700  jal         func_201C00
    ctx->pc = 0x1F9AD0u;
    SET_GPR_U32(ctx, 31, 0x1F9AD8u);
    ctx->pc = 0x1F9AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9AD0u;
    // 0x1f9ad4: 0x26449c38  addiu       $a0, $s2, -0x63C8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294941752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201C00u, 0x1F9AD0u, 0x1F9AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9AD8u;
label_1f9ad8:
    // 0x1f9ad8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1f9ad8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1f9adc: 0x2a02002e  slti        $v0, $s0, 0x2E
    ctx->pc = 0x1f9adcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)46) ? 1 : 0);
    // 0x1f9ae0: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1F9AE0u;
    {
        const bool branch_taken_0x1f9ae0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F9AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9AE0u;
        // 0x1f9ae4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9ae0) {
            ctx->pc = 0x1F9AD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f9ad0;
        }
    }
    ctx->pc = 0x1F9AE8u;
    // 0x1f9ae8: 0xc07e584  jal         func_1F9610
    ctx->pc = 0x1F9AE8u;
    SET_GPR_U32(ctx, 31, 0x1F9AF0u);
    ctx->pc = 0x1F9AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9AE8u;
    // 0x1f9aec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9610u, 0x1F9AE8u, 0x1F9AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9AF0u;
label_1f9af0:
    // 0x1f9af0: 0x92220180  lbu         $v0, 0x180($s1)
    ctx->pc = 0x1f9af0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 384)));
    // 0x1f9af4: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F9AF4u;
    {
        const bool branch_taken_0x1f9af4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f9af4) {
            ctx->pc = 0x1F9AF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F9AF4u;
            // 0x1f9af8: 0xa2200180  sb          $zero, 0x180($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 384), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F9B14u;
            goto label_1f9b14;
        }
    }
    ctx->pc = 0x1F9AFCu;
    // 0x1f9afc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f9afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f9b00: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f9b00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9b04: 0xc07e584  jal         func_1F9610
    ctx->pc = 0x1F9B04u;
    SET_GPR_U32(ctx, 31, 0x1F9B0Cu);
    ctx->pc = 0x1F9B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9B04u;
    // 0x1f9b08: 0xa2220180  sb          $v0, 0x180($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 384), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9610u, 0x1F9B04u, 0x1F9B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9B0Cu;
label_1f9b0c:
    // 0x1f9b0c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1F9B0Cu;
    {
        const bool branch_taken_0x1f9b0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9B0Cu;
        // 0x1f9b10: 0xa2200180  sb          $zero, 0x180($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 384), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9b0c) {
            ctx->pc = 0x1F9B24u;
            goto label_1f9b24;
        }
    }
    ctx->pc = 0x1F9B14u;
label_1f9b14:
    // 0x1f9b14: 0xc07e584  jal         func_1F9610
    ctx->pc = 0x1F9B14u;
    SET_GPR_U32(ctx, 31, 0x1F9B1Cu);
    ctx->pc = 0x1F9B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9B14u;
    // 0x1f9b18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9610u, 0x1F9B14u, 0x1F9B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9B1Cu;
label_1f9b1c:
    // 0x1f9b1c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f9b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f9b20: 0xa2220180  sb          $v0, 0x180($s1)
    ctx->pc = 0x1f9b20u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 384), (uint8_t)GPR_U32(ctx, 2));
label_1f9b24:
    // 0x1f9b24: 0xc07e5aa  jal         func_1F96A8
    ctx->pc = 0x1F9B24u;
    SET_GPR_U32(ctx, 31, 0x1F9B2Cu);
    ctx->pc = 0x1F9B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9B24u;
    // 0x1f9b28: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F96A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F96A8u, 0x1F9B24u, 0x1F9B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9B2Cu;
label_1f9b2c:
    // 0x1f9b2c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f9b2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9b30: 0xc07f300  jal         func_1FCC00
    ctx->pc = 0x1F9B30u;
    SET_GPR_U32(ctx, 31, 0x1F9B38u);
    ctx->pc = 0x1F9B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9B30u;
    // 0x1f9b34: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FCC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FCC00u, 0x1F9B30u, 0x1F9B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9B38u;
label_1f9b38:
    // 0x1f9b38: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f9b38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9b3c: 0xc07f300  jal         func_1FCC00
    ctx->pc = 0x1F9B3Cu;
    SET_GPR_U32(ctx, 31, 0x1F9B44u);
    ctx->pc = 0x1F9B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9B3Cu;
    // 0x1f9b40: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FCC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FCC00u, 0x1F9B3Cu, 0x1F9B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9B44u;
label_1f9b44:
    // 0x1f9b44: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1f9b44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1f9b48: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f9b48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9b4c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1f9b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1f9b50: 0xac4013a0  sw          $zero, 0x13A0($v0)
    ctx->pc = 0x1f9b50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 5024), GPR_U32(ctx, 0));
    // 0x1f9b54: 0xc07c3ec  jal         func_1F0FB0
    ctx->pc = 0x1F9B54u;
    SET_GPR_U32(ctx, 31, 0x1F9B5Cu);
    ctx->pc = 0x1F9B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9B54u;
    // 0x1f9b58: 0xac401398  sw          $zero, 0x1398($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 5016), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F0FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F0FB0u, 0x1F9B54u, 0x1F9B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9B5Cu;
label_1f9b5c:
    // 0x1f9b5c: 0xc082662  jal         func_209988
    ctx->pc = 0x1F9B5Cu;
    SET_GPR_U32(ctx, 31, 0x1F9B64u);
    ctx->pc = 0x209988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209988u, 0x1F9B5Cu, 0x1F9B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9B64u;
label_1f9b64:
    // 0x1f9b64: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f9b64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f9b68: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f9b68u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f9b6c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1f9b6cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f9b70: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1f9b70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f9b74: 0x3e00008  jr          $ra
    ctx->pc = 0x1F9B74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F9B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9B74u;
        // 0x1f9b78: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F9B74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F9B7Cu;
    // 0x1f9b7c: 0x0  nop
    ctx->pc = 0x1f9b7cu;
    // NOP
    ctx->pc = 0x1f9b80u;
}
