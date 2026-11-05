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

// Function: sub_00158AA0
// Address: 0x158aa0 - 0x158b38
void sub_00158AA0_0x158aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00158AA0_0x158aa0");
#endif

    switch (ctx->pc) {
        case 0x158aa0u: goto label_158aa0;
        case 0x158aa4u: goto label_158aa4;
        case 0x158aa8u: goto label_158aa8;
        case 0x158aacu: goto label_158aac;
        case 0x158ab0u: goto label_158ab0;
        case 0x158ab4u: goto label_158ab4;
        case 0x158ab8u: goto label_158ab8;
        case 0x158abcu: goto label_158abc;
        case 0x158ac0u: goto label_158ac0;
        case 0x158ac4u: goto label_158ac4;
        case 0x158ac8u: goto label_158ac8;
        case 0x158accu: goto label_158acc;
        case 0x158ad0u: goto label_158ad0;
        case 0x158ad4u: goto label_158ad4;
        case 0x158ad8u: goto label_158ad8;
        case 0x158adcu: goto label_158adc;
        case 0x158ae0u: goto label_158ae0;
        case 0x158ae4u: goto label_158ae4;
        case 0x158ae8u: goto label_158ae8;
        case 0x158aecu: goto label_158aec;
        case 0x158af0u: goto label_158af0;
        case 0x158af4u: goto label_158af4;
        case 0x158af8u: goto label_158af8;
        case 0x158afcu: goto label_158afc;
        case 0x158b00u: goto label_158b00;
        case 0x158b04u: goto label_158b04;
        case 0x158b08u: goto label_158b08;
        case 0x158b0cu: goto label_158b0c;
        case 0x158b10u: goto label_158b10;
        case 0x158b14u: goto label_158b14;
        case 0x158b18u: goto label_158b18;
        case 0x158b1cu: goto label_158b1c;
        case 0x158b20u: goto label_158b20;
        case 0x158b24u: goto label_158b24;
        case 0x158b28u: goto label_158b28;
        case 0x158b2cu: goto label_158b2c;
        case 0x158b30u: goto label_158b30;
        case 0x158b34u: goto label_158b34;
        default: break;
    }

    ctx->pc = 0x158aa0u;

label_158aa0:
    // 0x158aa0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x158aa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_158aa4:
    // 0x158aa4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x158aa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_158aa8:
    // 0x158aa8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x158aa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_158aac:
    // 0x158aac: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x158aacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_158ab0:
    // 0x158ab0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x158ab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_158ab4:
    // 0x158ab4: 0xc04f2f8  jal         func_13CBE0
label_158ab8:
    if (ctx->pc == 0x158AB8u) {
        ctx->pc = 0x158AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158AB4u;
        // 0x158ab8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158ABCu;
        goto label_158abc;
    }
    ctx->pc = 0x158AB4u;
    SET_GPR_U32(ctx, 31, 0x158ABCu);
    ctx->pc = 0x158AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158AB4u;
    // 0x158ab8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13CBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13CBE0u, 0x158AB4u, 0x158ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158ABCu;
label_158abc:
    // 0x158abc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x158abcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_158ac0:
    // 0x158ac0: 0x24060015  addiu       $a2, $zero, 0x15
    ctx->pc = 0x158ac0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_158ac4:
    // 0x158ac4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x158ac4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_158ac8:
    // 0x158ac8: 0xc04f33e  jal         func_13CCF8
label_158acc:
    if (ctx->pc == 0x158ACCu) {
        ctx->pc = 0x158ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158AC8u;
        // 0x158acc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158AD0u;
        goto label_158ad0;
    }
    ctx->pc = 0x158AC8u;
    SET_GPR_U32(ctx, 31, 0x158AD0u);
    ctx->pc = 0x158ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158AC8u;
    // 0x158acc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13CCF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13CCF8u, 0x158AC8u, 0x158AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158AD0u;
label_158ad0:
    // 0x158ad0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x158ad0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_158ad4:
    // 0x158ad4: 0xc04f0b6  jal         func_13C2D8
label_158ad8:
    if (ctx->pc == 0x158AD8u) {
        ctx->pc = 0x158AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158AD4u;
        // 0x158ad8: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158ADCu;
        goto label_158adc;
    }
    ctx->pc = 0x158AD4u;
    SET_GPR_U32(ctx, 31, 0x158ADCu);
    ctx->pc = 0x158AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158AD4u;
    // 0x158ad8: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C2D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C2D8u, 0x158AD4u, 0x158ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158ADCu;
label_158adc:
    // 0x158adc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x158adcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_158ae0:
    // 0x158ae0: 0x8e050304  lw          $a1, 0x304($s0)
    ctx->pc = 0x158ae0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
label_158ae4:
    // 0x158ae4: 0xc0461e8  jal         func_1187A0
label_158ae8:
    if (ctx->pc == 0x158AE8u) {
        ctx->pc = 0x158AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158AE4u;
        // 0x158ae8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158AECu;
        goto label_158aec;
    }
    ctx->pc = 0x158AE4u;
    SET_GPR_U32(ctx, 31, 0x158AECu);
    ctx->pc = 0x158AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158AE4u;
    // 0x158ae8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1187A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1187A0u, 0x158AE4u, 0x158AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158AECu;
label_158aec:
    // 0x158aec: 0xc60c0310  lwc1        $f12, 0x310($s0)
    ctx->pc = 0x158aecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_158af0:
    // 0x158af0: 0xc046290  jal         func_118A40
label_158af4:
    if (ctx->pc == 0x158AF4u) {
        ctx->pc = 0x158AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158AF0u;
        // 0x158af4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158AF8u;
        goto label_158af8;
    }
    ctx->pc = 0x158AF0u;
    SET_GPR_U32(ctx, 31, 0x158AF8u);
    ctx->pc = 0x158AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158AF0u;
    // 0x158af4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118A40u, 0x158AF0u, 0x158AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158AF8u;
label_158af8:
    // 0x158af8: 0x8e05032c  lw          $a1, 0x32C($s0)
    ctx->pc = 0x158af8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 812)));
label_158afc:
    // 0x158afc: 0xc046256  jal         func_118958
label_158b00:
    if (ctx->pc == 0x158B00u) {
        ctx->pc = 0x158B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158AFCu;
        // 0x158b00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158B04u;
        goto label_158b04;
    }
    ctx->pc = 0x158AFCu;
    SET_GPR_U32(ctx, 31, 0x158B04u);
    ctx->pc = 0x158B00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x158AFCu;
    // 0x158b00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118958u, 0x158AFCu, 0x158B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x158B04u;
label_158b04:
    // 0x158b04: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x158b04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_158b08:
    // 0x158b08: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x158b08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_158b0c:
    // 0x158b0c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x158b0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_158b10:
    // 0x158b10: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x158b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_158b14:
    // 0x158b14: 0x40f809  jalr        $v0
label_158b18:
    if (ctx->pc == 0x158B18u) {
        ctx->pc = 0x158B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158B14u;
        // 0x158b18: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158B1Cu;
        goto label_158b1c;
    }
    ctx->pc = 0x158B14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x158B1Cu);
        ctx->pc = 0x158B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158B14u;
        // 0x158b18: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x158B14u, 0x158B1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x158B1Cu;
label_158b1c:
    // 0x158b1c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x158b1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_158b20:
    // 0x158b20: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x158b20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_158b24:
    // 0x158b24: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x158b24u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_158b28:
    // 0x158b28: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x158b28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_158b2c:
    // 0x158b2c: 0x3e00008  jr          $ra
label_158b30:
    if (ctx->pc == 0x158B30u) {
        ctx->pc = 0x158B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158B2Cu;
        // 0x158b30: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x158B34u;
        goto label_158b34;
    }
    ctx->pc = 0x158B2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x158B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x158B2Cu;
        // 0x158b30: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x158B2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x158B34u;
label_158b34:
    // 0x158b34: 0x0  nop
    ctx->pc = 0x158b34u;
    // NOP
    ctx->pc = 0x158b38u;
}
