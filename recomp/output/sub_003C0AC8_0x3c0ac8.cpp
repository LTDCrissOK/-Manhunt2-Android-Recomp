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

// Function: sub_003C0AC8
// Address: 0x3c0ac8 - 0x3c0b60
void sub_003C0AC8_0x3c0ac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C0AC8_0x3c0ac8");
#endif

    switch (ctx->pc) {
        case 0x3c0ac8u: goto label_3c0ac8;
        case 0x3c0accu: goto label_3c0acc;
        case 0x3c0ad0u: goto label_3c0ad0;
        case 0x3c0ad4u: goto label_3c0ad4;
        case 0x3c0ad8u: goto label_3c0ad8;
        case 0x3c0adcu: goto label_3c0adc;
        case 0x3c0ae0u: goto label_3c0ae0;
        case 0x3c0ae4u: goto label_3c0ae4;
        case 0x3c0ae8u: goto label_3c0ae8;
        case 0x3c0aecu: goto label_3c0aec;
        case 0x3c0af0u: goto label_3c0af0;
        case 0x3c0af4u: goto label_3c0af4;
        case 0x3c0af8u: goto label_3c0af8;
        case 0x3c0afcu: goto label_3c0afc;
        case 0x3c0b00u: goto label_3c0b00;
        case 0x3c0b04u: goto label_3c0b04;
        case 0x3c0b08u: goto label_3c0b08;
        case 0x3c0b0cu: goto label_3c0b0c;
        case 0x3c0b10u: goto label_3c0b10;
        case 0x3c0b14u: goto label_3c0b14;
        case 0x3c0b18u: goto label_3c0b18;
        case 0x3c0b1cu: goto label_3c0b1c;
        case 0x3c0b20u: goto label_3c0b20;
        case 0x3c0b24u: goto label_3c0b24;
        case 0x3c0b28u: goto label_3c0b28;
        case 0x3c0b2cu: goto label_3c0b2c;
        case 0x3c0b30u: goto label_3c0b30;
        case 0x3c0b34u: goto label_3c0b34;
        case 0x3c0b38u: goto label_3c0b38;
        case 0x3c0b3cu: goto label_3c0b3c;
        case 0x3c0b40u: goto label_3c0b40;
        case 0x3c0b44u: goto label_3c0b44;
        case 0x3c0b48u: goto label_3c0b48;
        case 0x3c0b4cu: goto label_3c0b4c;
        case 0x3c0b50u: goto label_3c0b50;
        case 0x3c0b54u: goto label_3c0b54;
        case 0x3c0b58u: goto label_3c0b58;
        case 0x3c0b5cu: goto label_3c0b5c;
        default: break;
    }

    ctx->pc = 0x3c0ac8u;

label_3c0ac8:
    // 0x3c0ac8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3c0ac8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_3c0acc:
    // 0x3c0acc: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x3c0accu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
label_3c0ad0:
    // 0x3c0ad0: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x3c0ad0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_3c0ad4:
    // 0x3c0ad4: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x3c0ad4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_3c0ad8:
    // 0x3c0ad8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3c0ad8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3c0adc:
    // 0x3c0adc: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x3c0adcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_3c0ae0:
    // 0x3c0ae0: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x3c0ae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_3c0ae4:
    // 0x3c0ae4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3c0ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3c0ae8:
    // 0x3c0ae8: 0x8c62cddc  lw          $v0, -0x3224($v1)
    ctx->pc = 0x3c0ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294954460)));
label_3c0aec:
    // 0x3c0aec: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3c0aecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_3c0af0:
    // 0x3c0af0: 0x8c520148  lw          $s2, 0x148($v0)
    ctx->pc = 0x3c0af0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 328)));
label_3c0af4:
    // 0x3c0af4: 0x12400011  beqz        $s2, . + 4 + (0x11 << 2)
label_3c0af8:
    if (ctx->pc == 0x3C0AF8u) {
        ctx->pc = 0x3C0AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0AF4u;
        // 0x3c0af8: 0x60a02d  daddu       $s4, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0AFCu;
        goto label_3c0afc;
    }
    ctx->pc = 0x3C0AF4u;
    {
        const bool branch_taken_0x3c0af4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C0AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0AF4u;
        // 0x3c0af8: 0x60a02d  daddu       $s4, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0af4) {
            ctx->pc = 0x3C0B3Cu;
            goto label_3c0b3c;
        }
    }
    ctx->pc = 0x3C0AFCu;
label_3c0afc:
    // 0x3c0afc: 0x8e500004  lw          $s0, 0x4($s2)
    ctx->pc = 0x3c0afcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_3c0b00:
    // 0x3c0b00: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x3c0b00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_3c0b04:
    // 0x3c0b04: 0x600000a  bltz        $s0, . + 4 + (0xA << 2)
label_3c0b08:
    if (ctx->pc == 0x3C0B08u) {
        ctx->pc = 0x3C0B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0B04u;
        // 0x3c0b08: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0B0Cu;
        goto label_3c0b0c;
    }
    ctx->pc = 0x3C0B04u;
    {
        const bool branch_taken_0x3c0b04 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x3C0B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0B04u;
        // 0x3c0b08: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0b04) {
            ctx->pc = 0x3C0B30u;
            goto label_3c0b30;
        }
    }
    ctx->pc = 0x3C0B0Cu;
label_3c0b0c:
    // 0x3c0b0c: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x3c0b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_3c0b10:
    // 0x3c0b10: 0x528821  addu        $s1, $v0, $s2
    ctx->pc = 0x3c0b10u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_3c0b14:
    // 0x3c0b14: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3c0b14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3c0b18:
    // 0x3c0b18: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x3c0b18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_3c0b1c:
    // 0x3c0b1c: 0x40f809  jalr        $v0
label_3c0b20:
    if (ctx->pc == 0x3C0B20u) {
        ctx->pc = 0x3C0B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0B1Cu;
        // 0x3c0b20: 0x2631fffc  addiu       $s1, $s1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0B24u;
        goto label_3c0b24;
    }
    ctx->pc = 0x3C0B1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C0B24u);
        ctx->pc = 0x3C0B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0B1Cu;
        // 0x3c0b20: 0x2631fffc  addiu       $s1, $s1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C0B1Cu, 0x3C0B24u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C0B24u;
label_3c0b24:
    // 0x3c0b24: 0x0  nop
    ctx->pc = 0x3c0b24u;
    // NOP
label_3c0b28:
    // 0x3c0b28: 0x603fffb  bgezl       $s0, . + 4 + (-0x5 << 2)
label_3c0b2c:
    if (ctx->pc == 0x3C0B2Cu) {
        ctx->pc = 0x3C0B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0B28u;
        // 0x3c0b2c: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0B30u;
        goto label_3c0b30;
    }
    ctx->pc = 0x3C0B28u;
    {
        const bool branch_taken_0x3c0b28 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x3c0b28) {
            ctx->pc = 0x3C0B2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C0B28u;
            // 0x3c0b2c: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C0B18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c0b18;
        }
    }
    ctx->pc = 0x3C0B30u;
label_3c0b30:
    // 0x3c0b30: 0x8e520000  lw          $s2, 0x0($s2)
    ctx->pc = 0x3c0b30u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3c0b34:
    // 0x3c0b34: 0x5640fff2  bnel        $s2, $zero, . + 4 + (-0xE << 2)
label_3c0b38:
    if (ctx->pc == 0x3C0B38u) {
        ctx->pc = 0x3C0B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0B34u;
        // 0x3c0b38: 0x8e500004  lw          $s0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0B3Cu;
        goto label_3c0b3c;
    }
    ctx->pc = 0x3C0B34u;
    {
        const bool branch_taken_0x3c0b34 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c0b34) {
            ctx->pc = 0x3C0B38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C0B34u;
            // 0x3c0b38: 0x8e500004  lw          $s0, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C0B00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c0b00;
        }
    }
    ctx->pc = 0x3C0B3Cu;
label_3c0b3c:
    // 0x3c0b3c: 0x8e84cddc  lw          $a0, -0x3224($s4)
    ctx->pc = 0x3c0b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294954460)));
label_3c0b40:
    // 0x3c0b40: 0x8c82003c  lw          $v0, 0x3C($a0)
    ctx->pc = 0x3c0b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
label_3c0b44:
    // 0x3c0b44: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_3c0b48:
    if (ctx->pc == 0x3C0B48u) {
        ctx->pc = 0x3C0B4Cu;
        goto label_3c0b4c;
    }
    ctx->pc = 0x3C0B44u;
    {
        const bool branch_taken_0x3c0b44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c0b44) {
            ctx->pc = 0x3C0B54u;
            goto label_3c0b54;
        }
    }
    ctx->pc = 0x3C0B4Cu;
label_3c0b4c:
    // 0x3c0b4c: 0x40f809  jalr        $v0
label_3c0b50:
    if (ctx->pc == 0x3C0B50u) {
        ctx->pc = 0x3C0B54u;
        goto label_3c0b54;
    }
    ctx->pc = 0x3C0B4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3C0B54u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C0B4Cu, 0x3C0B54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C0B54u;
label_3c0b54:
    // 0x3c0b54: 0xc0da21e  jal         func_368878
label_3c0b58:
    if (ctx->pc == 0x3C0B58u) {
        ctx->pc = 0x3C0B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0B54u;
        // 0x3c0b58: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0B5Cu;
        goto label_3c0b5c;
    }
    ctx->pc = 0x3C0B54u;
    SET_GPR_U32(ctx, 31, 0x3C0B5Cu);
    ctx->pc = 0x3C0B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C0B54u;
    // 0x3c0b58: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x368878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x368878u, 0x3C0B54u, 0x3C0B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C0B5Cu;
label_3c0b5c:
    // 0x3c0b5c: 0x0  nop
    ctx->pc = 0x3c0b5cu;
    // NOP
    ctx->pc = 0x3c0b60u;
}
