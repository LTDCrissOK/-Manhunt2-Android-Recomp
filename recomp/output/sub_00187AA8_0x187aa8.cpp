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

// Function: sub_00187AA8
// Address: 0x187aa8 - 0x187b40
void sub_00187AA8_0x187aa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00187AA8_0x187aa8");
#endif

    switch (ctx->pc) {
        case 0x187aa8u: goto label_187aa8;
        case 0x187aacu: goto label_187aac;
        case 0x187ab0u: goto label_187ab0;
        case 0x187ab4u: goto label_187ab4;
        case 0x187ab8u: goto label_187ab8;
        case 0x187abcu: goto label_187abc;
        case 0x187ac0u: goto label_187ac0;
        case 0x187ac4u: goto label_187ac4;
        case 0x187ac8u: goto label_187ac8;
        case 0x187accu: goto label_187acc;
        case 0x187ad0u: goto label_187ad0;
        case 0x187ad4u: goto label_187ad4;
        case 0x187ad8u: goto label_187ad8;
        case 0x187adcu: goto label_187adc;
        case 0x187ae0u: goto label_187ae0;
        case 0x187ae4u: goto label_187ae4;
        case 0x187ae8u: goto label_187ae8;
        case 0x187aecu: goto label_187aec;
        case 0x187af0u: goto label_187af0;
        case 0x187af4u: goto label_187af4;
        case 0x187af8u: goto label_187af8;
        case 0x187afcu: goto label_187afc;
        case 0x187b00u: goto label_187b00;
        case 0x187b04u: goto label_187b04;
        case 0x187b08u: goto label_187b08;
        case 0x187b0cu: goto label_187b0c;
        case 0x187b10u: goto label_187b10;
        case 0x187b14u: goto label_187b14;
        case 0x187b18u: goto label_187b18;
        case 0x187b1cu: goto label_187b1c;
        case 0x187b20u: goto label_187b20;
        case 0x187b24u: goto label_187b24;
        case 0x187b28u: goto label_187b28;
        case 0x187b2cu: goto label_187b2c;
        case 0x187b30u: goto label_187b30;
        case 0x187b34u: goto label_187b34;
        case 0x187b38u: goto label_187b38;
        case 0x187b3cu: goto label_187b3c;
        default: break;
    }

    ctx->pc = 0x187aa8u;

label_187aa8:
    // 0x187aa8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x187aa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_187aac:
    // 0x187aac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x187aacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_187ab0:
    // 0x187ab0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x187ab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_187ab4:
    // 0x187ab4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x187ab4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_187ab8:
    // 0x187ab8: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x187ab8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_187abc:
    // 0x187abc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x187abcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_187ac0:
    // 0x187ac0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x187ac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_187ac4:
    // 0x187ac4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x187ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_187ac8:
    // 0x187ac8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_187acc:
    if (ctx->pc == 0x187ACCu) {
        ctx->pc = 0x187ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187AC8u;
        // 0x187acc: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x187AD0u;
        goto label_187ad0;
    }
    ctx->pc = 0x187AC8u;
    {
        const bool branch_taken_0x187ac8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x187ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187AC8u;
        // 0x187acc: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x187ac8) {
            ctx->pc = 0x187AE0u;
            goto label_187ae0;
        }
    }
    ctx->pc = 0x187AD0u;
label_187ad0:
    // 0x187ad0: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x187ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_187ad4:
    // 0x187ad4: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x187ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_187ad8:
    // 0x187ad8: 0x40f809  jalr        $v0
label_187adc:
    if (ctx->pc == 0x187ADCu) {
        ctx->pc = 0x187AE0u;
        goto label_187ae0;
    }
    ctx->pc = 0x187AD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x187AE0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x187AD8u, 0x187AE0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x187AE0u;
label_187ae0:
    // 0x187ae0: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x187ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_187ae4:
    // 0x187ae4: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_187ae8:
    if (ctx->pc == 0x187AE8u) {
        ctx->pc = 0x187AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187AE4u;
        // 0x187ae8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187AECu;
        goto label_187aec;
    }
    ctx->pc = 0x187AE4u;
    {
        const bool branch_taken_0x187ae4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x187AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187AE4u;
        // 0x187ae8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187ae4) {
            ctx->pc = 0x187B0Cu;
            goto label_187b0c;
        }
    }
    ctx->pc = 0x187AECu;
label_187aec:
    // 0x187aec: 0xc0f5240  jal         func_3D4900
label_187af0:
    if (ctx->pc == 0x187AF0u) {
        ctx->pc = 0x187AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187AECu;
        // 0x187af0: 0x240400b0  addiu       $a0, $zero, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187AF4u;
        goto label_187af4;
    }
    ctx->pc = 0x187AECu;
    SET_GPR_U32(ctx, 31, 0x187AF4u);
    ctx->pc = 0x187AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187AECu;
    // 0x187af0: 0x240400b0  addiu       $a0, $zero, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x187AECu, 0x187AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187AF4u;
label_187af4:
    // 0x187af4: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x187af4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_187af8:
    // 0x187af8: 0xc0644de  jal         func_191378
label_187afc:
    if (ctx->pc == 0x187AFCu) {
        ctx->pc = 0x187AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187AF8u;
        // 0x187afc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187B00u;
        goto label_187b00;
    }
    ctx->pc = 0x187AF8u;
    SET_GPR_U32(ctx, 31, 0x187B00u);
    ctx->pc = 0x187AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187AF8u;
    // 0x187afc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x191378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191378u, 0x187AF8u, 0x187B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187B00u;
label_187b00:
    // 0x187b00: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x187b00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
label_187b04:
    // 0x187b04: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x187b04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_187b08:
    // 0x187b08: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x187b08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_187b0c:
    // 0x187b0c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x187b0cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_187b10:
    // 0x187b10: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x187b10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_187b14:
    // 0x187b14: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x187b14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_187b18:
    // 0x187b18: 0x8c66002c  lw          $a2, 0x2C($v1)
    ctx->pc = 0x187b18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_187b1c:
    // 0x187b1c: 0xc0f809  jalr        $a2
label_187b20:
    if (ctx->pc == 0x187B20u) {
        ctx->pc = 0x187B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187B1Cu;
        // 0x187b20: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187B24u;
        goto label_187b24;
    }
    ctx->pc = 0x187B1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x187B24u);
        ctx->pc = 0x187B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187B1Cu;
        // 0x187b20: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x187B1Cu, 0x187B24u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x187B24u;
label_187b24:
    // 0x187b24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x187b24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_187b28:
    // 0x187b28: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x187b28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_187b2c:
    // 0x187b2c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x187b2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_187b30:
    // 0x187b30: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x187b30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_187b34:
    // 0x187b34: 0x3e00008  jr          $ra
label_187b38:
    if (ctx->pc == 0x187B38u) {
        ctx->pc = 0x187B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187B34u;
        // 0x187b38: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187B3Cu;
        goto label_187b3c;
    }
    ctx->pc = 0x187B34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x187B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187B34u;
        // 0x187b38: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x187B34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x187B3Cu;
label_187b3c:
    // 0x187b3c: 0x0  nop
    ctx->pc = 0x187b3cu;
    // NOP
    ctx->pc = 0x187b40u;
}
