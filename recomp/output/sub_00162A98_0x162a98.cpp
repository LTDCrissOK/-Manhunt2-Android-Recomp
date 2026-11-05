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

// Function: sub_00162A98
// Address: 0x162a98 - 0x162b58
void sub_00162A98_0x162a98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00162A98_0x162a98");
#endif

    switch (ctx->pc) {
        case 0x162ad0u: goto label_162ad0;
        case 0x162b18u: goto label_162b18;
        case 0x162b24u: goto label_162b24;
        default: break;
    }

    ctx->pc = 0x162a98u;

    // 0x162a98: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x162a98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x162a9c: 0x2408000d  addiu       $t0, $zero, 0xD
    ctx->pc = 0x162a9cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x162aa0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x162aa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x162aa4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x162aa4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x162aa8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x162aa8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162aac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x162aacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x162ab0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x162ab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x162ab4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x162ab4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162ab8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x162ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x162abc: 0x26060228  addiu       $a2, $s0, 0x228
    ctx->pc = 0x162abcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 552));
    // 0x162ac0: 0x2604022c  addiu       $a0, $s0, 0x22C
    ctx->pc = 0x162ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 556));
    // 0x162ac4: 0x24120003  addiu       $s2, $zero, 0x3
    ctx->pc = 0x162ac4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x162ac8: 0x1118c0  sll         $v1, $s1, 3
    ctx->pc = 0x162ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x162acc: 0x0  nop
    ctx->pc = 0x162accu;
    // NOP
label_162ad0:
    // 0x162ad0: 0xc31021  addu        $v0, $a2, $v1
    ctx->pc = 0x162ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x162ad4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x162ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x162ad8: 0x10a00014  beqz        $a1, . + 4 + (0x14 << 2)
    ctx->pc = 0x162AD8u;
    {
        const bool branch_taken_0x162ad8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x162ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162AD8u;
        // 0x162adc: 0x831021  addu        $v0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162ad8) {
            ctx->pc = 0x162B2Cu;
            goto label_162b2c;
        }
    }
    ctx->pc = 0x162AE0u;
    // 0x162ae0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x162ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x162ae4: 0x3843000a  xori        $v1, $v0, 0xA
    ctx->pc = 0x162ae4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)10);
    // 0x162ae8: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x162AE8u;
    {
        const bool branch_taken_0x162ae8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x162ae8) {
            ctx->pc = 0x162B10u;
            goto label_162b10;
        }
    }
    ctx->pc = 0x162AF0u;
    // 0x162af0: 0x14480005  bne         $v0, $t0, . + 4 + (0x5 << 2)
    ctx->pc = 0x162AF0u;
    {
        const bool branch_taken_0x162af0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 8));
        ctx->pc = 0x162AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162AF0u;
        // 0x162af4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162af0) {
            ctx->pc = 0x162B08u;
            goto label_162b08;
        }
    }
    ctx->pc = 0x162AF8u;
    // 0x162af8: 0x8e020354  lw          $v0, 0x354($s0)
    ctx->pc = 0x162af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 852)));
    // 0x162afc: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x162afcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162b00: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x162b00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x162b04: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x162b04u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
label_162b08:
    // 0x162b08: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x162B08u;
    {
        const bool branch_taken_0x162b08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x162B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162B08u;
        // 0x162b0c: 0x26220001  addiu       $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162b08) {
            ctx->pc = 0x162B30u;
            goto label_162b30;
        }
    }
    ctx->pc = 0x162B10u;
label_162b10:
    // 0x162b10: 0xc04f1b6  jal         func_13C6D8
    ctx->pc = 0x162B10u;
    SET_GPR_U32(ctx, 31, 0x162B18u);
    ctx->pc = 0x162B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162B10u;
    // 0x162b14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C6D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C6D8u, 0x162B10u, 0x162B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162B18u;
label_162b18:
    // 0x162b18: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x162b18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162b1c: 0xc04f372  jal         func_13CDC8
    ctx->pc = 0x162B1Cu;
    SET_GPR_U32(ctx, 31, 0x162B24u);
    ctx->pc = 0x162B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162B1Cu;
    // 0x162b20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13CDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13CDC8u, 0x162B1Cu, 0x162B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162B24u;
label_162b24:
    // 0x162b24: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x162B24u;
    {
        const bool branch_taken_0x162b24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162B24u;
        // 0x162b28: 0xae120354  sw          $s2, 0x354($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 852), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162b24) {
            ctx->pc = 0x162B40u;
            goto label_162b40;
        }
    }
    ctx->pc = 0x162B2Cu;
label_162b2c:
    // 0x162b2c: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x162b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_162b30:
    // 0x162b30: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x162b30u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x162b34: 0x2e230010  sltiu       $v1, $s1, 0x10
    ctx->pc = 0x162b34u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x162b38: 0x1460ffe5  bnez        $v1, . + 4 + (-0x1B << 2)
    ctx->pc = 0x162B38u;
    {
        const bool branch_taken_0x162b38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x162B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162B38u;
        // 0x162b3c: 0x1118c0  sll         $v1, $s1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162b38) {
            ctx->pc = 0x162AD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_162ad0;
        }
    }
    ctx->pc = 0x162B40u;
label_162b40:
    // 0x162b40: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x162b40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x162b44: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x162b44u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x162b48: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x162b48u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x162b4c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x162b4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x162b50: 0x3e00008  jr          $ra
    ctx->pc = 0x162B50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x162B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162B50u;
        // 0x162b54: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x162B50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x162B58u;
}
