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

// Function: sub_00176A98
// Address: 0x176a98 - 0x176b28
void sub_00176A98_0x176a98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00176A98_0x176a98");
#endif

    switch (ctx->pc) {
        case 0x176a98u: goto label_176a98;
        case 0x176a9cu: goto label_176a9c;
        case 0x176aa0u: goto label_176aa0;
        case 0x176aa4u: goto label_176aa4;
        case 0x176aa8u: goto label_176aa8;
        case 0x176aacu: goto label_176aac;
        case 0x176ab0u: goto label_176ab0;
        case 0x176ab4u: goto label_176ab4;
        case 0x176ab8u: goto label_176ab8;
        case 0x176abcu: goto label_176abc;
        case 0x176ac0u: goto label_176ac0;
        case 0x176ac4u: goto label_176ac4;
        case 0x176ac8u: goto label_176ac8;
        case 0x176accu: goto label_176acc;
        case 0x176ad0u: goto label_176ad0;
        case 0x176ad4u: goto label_176ad4;
        case 0x176ad8u: goto label_176ad8;
        case 0x176adcu: goto label_176adc;
        case 0x176ae0u: goto label_176ae0;
        case 0x176ae4u: goto label_176ae4;
        case 0x176ae8u: goto label_176ae8;
        case 0x176aecu: goto label_176aec;
        case 0x176af0u: goto label_176af0;
        case 0x176af4u: goto label_176af4;
        case 0x176af8u: goto label_176af8;
        case 0x176afcu: goto label_176afc;
        case 0x176b00u: goto label_176b00;
        case 0x176b04u: goto label_176b04;
        case 0x176b08u: goto label_176b08;
        case 0x176b0cu: goto label_176b0c;
        case 0x176b10u: goto label_176b10;
        case 0x176b14u: goto label_176b14;
        case 0x176b18u: goto label_176b18;
        case 0x176b1cu: goto label_176b1c;
        case 0x176b20u: goto label_176b20;
        case 0x176b24u: goto label_176b24;
        default: break;
    }

    ctx->pc = 0x176a98u;

label_176a98:
    // 0x176a98: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x176a98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_176a9c:
    // 0x176a9c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x176a9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_176aa0:
    // 0x176aa0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x176aa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_176aa4:
    // 0x176aa4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x176aa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_176aa8:
    // 0x176aa8: 0xc04f9a4  jal         func_13E690
label_176aac:
    if (ctx->pc == 0x176AACu) {
        ctx->pc = 0x176AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176AA8u;
        // 0x176aac: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176AB0u;
        goto label_176ab0;
    }
    ctx->pc = 0x176AA8u;
    SET_GPR_U32(ctx, 31, 0x176AB0u);
    ctx->pc = 0x176AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176AA8u;
    // 0x176aac: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E690u, 0x176AA8u, 0x176AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176AB0u;
label_176ab0:
    // 0x176ab0: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x176ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_176ab4:
    // 0x176ab4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x176ab4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_176ab8:
    // 0x176ab8: 0xae0300b4  sw          $v1, 0xB4($s0)
    ctx->pc = 0x176ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 3));
label_176abc:
    // 0x176abc: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x176abcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_176ac0:
    // 0x176ac0: 0xc04f8fc  jal         func_13E3F0
label_176ac4:
    if (ctx->pc == 0x176AC4u) {
        ctx->pc = 0x176AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176AC0u;
        // 0x176ac4: 0xae0200b0  sw          $v0, 0xB0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176AC8u;
        goto label_176ac8;
    }
    ctx->pc = 0x176AC0u;
    SET_GPR_U32(ctx, 31, 0x176AC8u);
    ctx->pc = 0x176AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176AC0u;
    // 0x176ac4: 0xae0200b0  sw          $v0, 0xB0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E3F0u, 0x176AC0u, 0x176AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176AC8u;
label_176ac8:
    // 0x176ac8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x176ac8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_176acc:
    // 0x176acc: 0x8e0500bc  lw          $a1, 0xBC($s0)
    ctx->pc = 0x176accu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
label_176ad0:
    // 0x176ad0: 0xc045fea  jal         func_117FA8
label_176ad4:
    if (ctx->pc == 0x176AD4u) {
        ctx->pc = 0x176AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176AD0u;
        // 0x176ad4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176AD8u;
        goto label_176ad8;
    }
    ctx->pc = 0x176AD0u;
    SET_GPR_U32(ctx, 31, 0x176AD8u);
    ctx->pc = 0x176AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176AD0u;
    // 0x176ad4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117FA8u, 0x176AD0u, 0x176AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176AD8u;
label_176ad8:
    // 0x176ad8: 0x8e0500d8  lw          $a1, 0xD8($s0)
    ctx->pc = 0x176ad8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
label_176adc:
    // 0x176adc: 0xc046256  jal         func_118958
label_176ae0:
    if (ctx->pc == 0x176AE0u) {
        ctx->pc = 0x176AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176ADCu;
        // 0x176ae0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176AE4u;
        goto label_176ae4;
    }
    ctx->pc = 0x176ADCu;
    SET_GPR_U32(ctx, 31, 0x176AE4u);
    ctx->pc = 0x176AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176ADCu;
    // 0x176ae0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118958u, 0x176ADCu, 0x176AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176AE4u;
label_176ae4:
    // 0x176ae4: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x176ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_176ae8:
    // 0x176ae8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x176ae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_176aec:
    // 0x176aec: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x176aecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_176af0:
    // 0x176af0: 0xc046290  jal         func_118A40
label_176af4:
    if (ctx->pc == 0x176AF4u) {
        ctx->pc = 0x176AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176AF0u;
        // 0x176af4: 0xc60c00dc  lwc1        $f12, 0xDC($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x176AF8u;
        goto label_176af8;
    }
    ctx->pc = 0x176AF0u;
    SET_GPR_U32(ctx, 31, 0x176AF8u);
    ctx->pc = 0x176AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176AF0u;
    // 0x176af4: 0xc60c00dc  lwc1        $f12, 0xDC($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x118A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118A40u, 0x176AF0u, 0x176AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176AF8u;
label_176af8:
    // 0x176af8: 0x8e0400b0  lw          $a0, 0xB0($s0)
    ctx->pc = 0x176af8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_176afc:
    // 0x176afc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x176afcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_176b00:
    // 0x176b00: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x176b00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_176b04:
    // 0x176b04: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x176b04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_176b08:
    // 0x176b08: 0x40f809  jalr        $v0
label_176b0c:
    if (ctx->pc == 0x176B0Cu) {
        ctx->pc = 0x176B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176B08u;
        // 0x176b0c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176B10u;
        goto label_176b10;
    }
    ctx->pc = 0x176B08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x176B10u);
        ctx->pc = 0x176B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176B08u;
        // 0x176b0c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x176B08u, 0x176B10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x176B10u;
label_176b10:
    // 0x176b10: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x176b10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_176b14:
    // 0x176b14: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x176b14u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_176b18:
    // 0x176b18: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x176b18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_176b1c:
    // 0x176b1c: 0x3e00008  jr          $ra
label_176b20:
    if (ctx->pc == 0x176B20u) {
        ctx->pc = 0x176B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176B1Cu;
        // 0x176b20: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x176B24u;
        goto label_176b24;
    }
    ctx->pc = 0x176B1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x176B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176B1Cu;
        // 0x176b20: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x176B1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x176B24u;
label_176b24:
    // 0x176b24: 0x0  nop
    ctx->pc = 0x176b24u;
    // NOP
    ctx->pc = 0x176b28u;
}
