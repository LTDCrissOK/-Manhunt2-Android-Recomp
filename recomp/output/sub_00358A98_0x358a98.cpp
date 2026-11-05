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

// Function: sub_00358A98
// Address: 0x358a98 - 0x358b80
void sub_00358A98_0x358a98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00358A98_0x358a98");
#endif

    switch (ctx->pc) {
        case 0x358ad4u: goto label_358ad4;
        case 0x358b00u: goto label_358b00;
        case 0x358b08u: goto label_358b08;
        case 0x358b34u: goto label_358b34;
        case 0x358b50u: goto label_358b50;
        default: break;
    }

    ctx->pc = 0x358a98u;

    // 0x358a98: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x358a98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x358a9c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x358a9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x358aa0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x358aa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x358aa4: 0x3c10005c  lui         $s0, 0x5C
    ctx->pc = 0x358aa4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)92 << 16));
    // 0x358aa8: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x358aa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x358aac: 0x2610d3c0  addiu       $s0, $s0, -0x2C40
    ctx->pc = 0x358aacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294955968));
    // 0x358ab0: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x358ab0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x358ab4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x358ab4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358ab8: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x358ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x358abc: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x358abcu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x358ac0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x358ac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x358ac4: 0x3a0902d  daddu       $s2, $sp, $zero
    ctx->pc = 0x358ac4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358ac8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x358ac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x358acc: 0xc0d5f28  jal         func_357CA0
    ctx->pc = 0x358ACCu;
    SET_GPR_U32(ctx, 31, 0x358AD4u);
    ctx->pc = 0x358AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358ACCu;
    // 0x358ad0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x357CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x357CA0u, 0x358ACCu, 0x358AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358AD4u;
label_358ad4:
    // 0x358ad4: 0x4420001  bltzl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x358AD4u;
    {
        const bool branch_taken_0x358ad4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x358ad4) {
            ctx->pc = 0x358AD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x358AD4u;
            // 0x358ad8: 0x21023  negu        $v0, $v0 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x358ADCu;
            goto label_358adc;
        }
    }
    ctx->pc = 0x358ADCu;
label_358adc:
    // 0x358adc: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x358adcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x358ae0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x358ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x358ae4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x358ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x358ae8: 0x8c510004  lw          $s1, 0x4($v0)
    ctx->pc = 0x358ae8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x358aec: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x358aecu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x358af0: 0x1211000b  beq         $s0, $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x358AF0u;
    {
        const bool branch_taken_0x358af0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 17));
        ctx->pc = 0x358AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358AF0u;
        // 0x358af4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358af0) {
            ctx->pc = 0x358B20u;
            goto label_358b20;
        }
    }
    ctx->pc = 0x358AF8u;
    // 0x358af8: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x358af8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x358afc: 0x0  nop
    ctx->pc = 0x358afcu;
    // NOP
label_358b00:
    // 0x358b00: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x358B00u;
    SET_GPR_U32(ctx, 31, 0x358B08u);
    ctx->pc = 0x358B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358B00u;
    // 0x358b04: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x358B00u, 0x358B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358B08u;
label_358b08:
    // 0x358b08: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x358B08u;
    {
        const bool branch_taken_0x358b08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x358B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358B08u;
        // 0x358b0c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358b08) {
            ctx->pc = 0x358B20u;
            goto label_358b20;
        }
    }
    ctx->pc = 0x358B10u;
    // 0x358b10: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x358b10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x358b14: 0x5611fffa  bnel        $s0, $s1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x358B14u;
    {
        const bool branch_taken_0x358b14 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        if (branch_taken_0x358b14) {
            ctx->pc = 0x358B18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x358B14u;
            // 0x358b18: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x358B00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_358b00;
        }
    }
    ctx->pc = 0x358B1Cu;
    // 0x358b1c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x358b1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_358b20:
    // 0x358b20: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x358B20u;
    {
        const bool branch_taken_0x358b20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x358B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358B20u;
        // 0x358b24: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358b20) {
            ctx->pc = 0x358B44u;
            goto label_358b44;
        }
    }
    ctx->pc = 0x358B28u;
    // 0x358b28: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x358b28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x358b2c: 0xc0d60d4  jal         func_358350
    ctx->pc = 0x358B2Cu;
    SET_GPR_U32(ctx, 31, 0x358B34u);
    ctx->pc = 0x358B30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358B2Cu;
    // 0x358b30: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x358350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x358350u, 0x358B2Cu, 0x358B34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358B34u;
label_358b34:
    // 0x358b34: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x358B34u;
    {
        const bool branch_taken_0x358b34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x358B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358B34u;
        // 0x358b38: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358b34) {
            ctx->pc = 0x358B58u;
            goto label_358b58;
        }
    }
    ctx->pc = 0x358B3Cu;
    // 0x358b3c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x358B3Cu;
    {
        const bool branch_taken_0x358b3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x358B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358B3Cu;
        // 0x358b40: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358b3c) {
            ctx->pc = 0x358B60u;
            goto label_358b60;
        }
    }
    ctx->pc = 0x358B44u;
label_358b44:
    // 0x358b44: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x358b44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358b48: 0xc0d6246  jal         func_358918
    ctx->pc = 0x358B48u;
    SET_GPR_U32(ctx, 31, 0x358B50u);
    ctx->pc = 0x358B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x358B48u;
    // 0x358b4c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x358918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x358918u, 0x358B48u, 0x358B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x358B50u;
label_358b50:
    // 0x358b50: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x358B50u;
    {
        const bool branch_taken_0x358b50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x358B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358B50u;
        // 0x358b54: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358b50) {
            ctx->pc = 0x358B60u;
            goto label_358b60;
        }
    }
    ctx->pc = 0x358B58u;
label_358b58:
    // 0x358b58: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x358b58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358b5c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x358b5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_358b60:
    // 0x358b60: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x358b60u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x358b64: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x358b64u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x358b68: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x358b68u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x358b6c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x358b6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x358b70: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x358b70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x358b74: 0x3e00008  jr          $ra
    ctx->pc = 0x358B74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x358B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358B74u;
        // 0x358b78: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x358B74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x358B7Cu;
    // 0x358b7c: 0x0  nop
    ctx->pc = 0x358b7cu;
    // NOP
    ctx->pc = 0x358b80u;
}
