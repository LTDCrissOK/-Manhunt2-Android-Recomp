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

// Function: sub_00178AA8
// Address: 0x178aa8 - 0x178b88
void sub_00178AA8_0x178aa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00178AA8_0x178aa8");
#endif

    switch (ctx->pc) {
        case 0x178ad4u: goto label_178ad4;
        case 0x178ae8u: goto label_178ae8;
        case 0x178b10u: goto label_178b10;
        case 0x178b38u: goto label_178b38;
        case 0x178b40u: goto label_178b40;
        case 0x178b48u: goto label_178b48;
        case 0x178b50u: goto label_178b50;
        case 0x178b58u: goto label_178b58;
        case 0x178b60u: goto label_178b60;
        case 0x178b68u: goto label_178b68;
        case 0x178b70u: goto label_178b70;
        default: break;
    }

    ctx->pc = 0x178aa8u;

    // 0x178aa8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x178aa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x178aac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x178aacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x178ab0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x178ab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x178ab4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x178ab4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178ab8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x178ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x178abc: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x178abcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x178ac0: 0x92020009  lbu         $v0, 0x9($s0)
    ctx->pc = 0x178ac0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
    // 0x178ac4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x178AC4u;
    {
        const bool branch_taken_0x178ac4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x178AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178AC4u;
        // 0x178ac8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178ac4) {
            ctx->pc = 0x178ADCu;
            goto label_178adc;
        }
    }
    ctx->pc = 0x178ACCu;
    // 0x178acc: 0xc05ea92  jal         func_17AA48
    ctx->pc = 0x178ACCu;
    SET_GPR_U32(ctx, 31, 0x178AD4u);
    ctx->pc = 0x17AA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17AA48u, 0x178ACCu, 0x178AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178AD4u;
label_178ad4:
    // 0x178ad4: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x178AD4u;
    {
        const bool branch_taken_0x178ad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x178AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178AD4u;
        // 0x178ad8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178ad4) {
            ctx->pc = 0x178B74u;
            goto label_178b74;
        }
    }
    ctx->pc = 0x178ADCu;
label_178adc:
    // 0x178adc: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x178adcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178ae0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x178ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x178ae4: 0x0  nop
    ctx->pc = 0x178ae4u;
    // NOP
label_178ae8:
    // 0x178ae8: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x178ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x178aec: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x178aecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x178af0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x178af0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x178af4: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x178AF4u;
    {
        const bool branch_taken_0x178af4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x178AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178AF4u;
        // 0x178af8: 0x26420001  addiu       $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178af4) {
            ctx->pc = 0x178B10u;
            goto label_178b10;
        }
    }
    ctx->pc = 0x178AFCu;
    // 0x178afc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x178afcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178b00: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x178b00u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x178b04: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x178b04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178b08: 0xc05eb0c  jal         func_17AC30
    ctx->pc = 0x178B08u;
    SET_GPR_U32(ctx, 31, 0x178B10u);
    ctx->pc = 0x178B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178B08u;
    // 0x178b0c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17AC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17AC30u, 0x178B08u, 0x178B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178B10u;
label_178b10:
    // 0x178b10: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x178b10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x178b14: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x178b14u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x178b18: 0x2e230010  sltiu       $v1, $s1, 0x10
    ctx->pc = 0x178b18u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x178b1c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x178B1Cu;
    {
        const bool branch_taken_0x178b1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x178b1c) {
            ctx->pc = 0x178B30u;
            goto label_178b30;
        }
    }
    ctx->pc = 0x178B24u;
    // 0x178b24: 0x92020009  lbu         $v0, 0x9($s0)
    ctx->pc = 0x178b24u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
    // 0x178b28: 0x5642ffef  bnel        $s2, $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x178B28u;
    {
        const bool branch_taken_0x178b28 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x178b28) {
            ctx->pc = 0x178B2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x178B28u;
            // 0x178b2c: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x178AE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_178ae8;
        }
    }
    ctx->pc = 0x178B30u;
label_178b30:
    // 0x178b30: 0xc05e60e  jal         func_179838
    ctx->pc = 0x178B30u;
    SET_GPR_U32(ctx, 31, 0x178B38u);
    ctx->pc = 0x178B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178B30u;
    // 0x178b34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179838u, 0x178B30u, 0x178B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178B38u;
label_178b38:
    // 0x178b38: 0xc05e63a  jal         func_1798E8
    ctx->pc = 0x178B38u;
    SET_GPR_U32(ctx, 31, 0x178B40u);
    ctx->pc = 0x178B3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178B38u;
    // 0x178b3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1798E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1798E8u, 0x178B38u, 0x178B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178B40u;
label_178b40:
    // 0x178b40: 0xc05e682  jal         func_179A08
    ctx->pc = 0x178B40u;
    SET_GPR_U32(ctx, 31, 0x178B48u);
    ctx->pc = 0x178B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178B40u;
    // 0x178b44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179A08u, 0x178B40u, 0x178B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178B48u;
label_178b48:
    // 0x178b48: 0xc05e6ba  jal         func_179AE8
    ctx->pc = 0x178B48u;
    SET_GPR_U32(ctx, 31, 0x178B50u);
    ctx->pc = 0x178B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178B48u;
    // 0x178b4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179AE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179AE8u, 0x178B48u, 0x178B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178B50u;
label_178b50:
    // 0x178b50: 0xc05e8b0  jal         func_17A2C0
    ctx->pc = 0x178B50u;
    SET_GPR_U32(ctx, 31, 0x178B58u);
    ctx->pc = 0x178B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178B50u;
    // 0x178b54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A2C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A2C0u, 0x178B50u, 0x178B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178B58u;
label_178b58:
    // 0x178b58: 0xc05e83e  jal         func_17A0F8
    ctx->pc = 0x178B58u;
    SET_GPR_U32(ctx, 31, 0x178B60u);
    ctx->pc = 0x178B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178B58u;
    // 0x178b5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A0F8u, 0x178B58u, 0x178B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178B60u;
label_178b60:
    // 0x178b60: 0xc05ea56  jal         func_17A958
    ctx->pc = 0x178B60u;
    SET_GPR_U32(ctx, 31, 0x178B68u);
    ctx->pc = 0x178B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178B60u;
    // 0x178b64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A958u, 0x178B60u, 0x178B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178B68u;
label_178b68:
    // 0x178b68: 0xc05ea92  jal         func_17AA48
    ctx->pc = 0x178B68u;
    SET_GPR_U32(ctx, 31, 0x178B70u);
    ctx->pc = 0x178B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178B68u;
    // 0x178b6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17AA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17AA48u, 0x178B68u, 0x178B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178B70u;
label_178b70:
    // 0x178b70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x178b70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_178b74:
    // 0x178b74: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x178b74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x178b78: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x178b78u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x178b7c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x178b7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x178b80: 0x3e00008  jr          $ra
    ctx->pc = 0x178B80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178B80u;
        // 0x178b84: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x178B80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x178B88u;
}
