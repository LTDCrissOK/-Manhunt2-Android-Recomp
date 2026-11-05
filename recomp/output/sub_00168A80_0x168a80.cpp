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

// Function: sub_00168A80
// Address: 0x168a80 - 0x168bd0
void sub_00168A80_0x168a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00168A80_0x168a80");
#endif

    switch (ctx->pc) {
        case 0x168abcu: goto label_168abc;
        case 0x168ad4u: goto label_168ad4;
        case 0x168ae0u: goto label_168ae0;
        case 0x168af0u: goto label_168af0;
        case 0x168afcu: goto label_168afc;
        case 0x168b0cu: goto label_168b0c;
        case 0x168b10u: goto label_168b10;
        case 0x168b30u: goto label_168b30;
        case 0x168b44u: goto label_168b44;
        case 0x168b54u: goto label_168b54;
        case 0x168b64u: goto label_168b64;
        case 0x168b70u: goto label_168b70;
        case 0x168ba8u: goto label_168ba8;
        default: break;
    }

    ctx->pc = 0x168a80u;

    // 0x168a80: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x168a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x168a84: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x168a84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x168a88: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x168a88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x168a8c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x168a8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168a90: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x168a90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x168a94: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x168a94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x168a98: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x168a98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x168a9c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x168a9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x168aa0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x168aa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x168aa4: 0x8e02021c  lw          $v0, 0x21C($s0)
    ctx->pc = 0x168aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 540)));
    // 0x168aa8: 0x1040003f  beqz        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x168AA8u;
    {
        const bool branch_taken_0x168aa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x168AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168AA8u;
        // 0x168aac: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168aa8) {
            ctx->pc = 0x168BA8u;
            goto label_168ba8;
        }
    }
    ctx->pc = 0x168AB0u;
    // 0x168ab0: 0xae00021c  sw          $zero, 0x21C($s0)
    ctx->pc = 0x168ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 540), GPR_U32(ctx, 0));
    // 0x168ab4: 0xc04f0a8  jal         func_13C2A0
    ctx->pc = 0x168AB4u;
    SET_GPR_U32(ctx, 31, 0x168ABCu);
    ctx->pc = 0x168AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168AB4u;
    // 0x168ab8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C2A0u, 0x168AB4u, 0x168ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168ABCu;
label_168abc:
    // 0x168abc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x168abcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168ac0: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x168ac0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x168ac4: 0x8e020214  lw          $v0, 0x214($s0)
    ctx->pc = 0x168ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
    // 0x168ac8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x168ac8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168acc: 0xc045612  jal         func_115848
    ctx->pc = 0x168ACCu;
    SET_GPR_U32(ctx, 31, 0x168AD4u);
    ctx->pc = 0x168AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168ACCu;
    // 0x168ad0: 0x8c450010  lw          $a1, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115848u, 0x168ACCu, 0x168AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168AD4u;
label_168ad4:
    // 0x168ad4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x168ad4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168ad8: 0xc045668  jal         func_1159A0
    ctx->pc = 0x168AD8u;
    SET_GPR_U32(ctx, 31, 0x168AE0u);
    ctx->pc = 0x168ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168AD8u;
    // 0x168adc: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1159A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1159A0u, 0x168AD8u, 0x168AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168AE0u;
label_168ae0:
    // 0x168ae0: 0x8e02032c  lw          $v0, 0x32C($s0)
    ctx->pc = 0x168ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 812)));
    // 0x168ae4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x168ae4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168ae8: 0xc0456ac  jal         func_115AB0
    ctx->pc = 0x168AE8u;
    SET_GPR_U32(ctx, 31, 0x168AF0u);
    ctx->pc = 0x168AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168AE8u;
    // 0x168aec: 0x90450020  lbu         $a1, 0x20($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115AB0u, 0x168AE8u, 0x168AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168AF0u;
label_168af0:
    // 0x168af0: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x168af0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x168af4: 0xc04b2a2  jal         func_12CA88
    ctx->pc = 0x168AF4u;
    SET_GPR_U32(ctx, 31, 0x168AFCu);
    ctx->pc = 0x168AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168AF4u;
    // 0x168af8: 0x2484b530  addiu       $a0, $a0, -0x4AD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12CA88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12CA88u, 0x168AF4u, 0x168AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168AFCu;
label_168afc:
    // 0x168afc: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x168afcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168b00: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x168b00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168b04: 0xc0456a0  jal         func_115A80
    ctx->pc = 0x168B04u;
    SET_GPR_U32(ctx, 31, 0x168B0Cu);
    ctx->pc = 0x168B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168B04u;
    // 0x168b08: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115A80u, 0x168B04u, 0x168B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168B0Cu;
label_168b0c:
    // 0x168b0c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x168b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_168b10:
    // 0x168b10: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x168b10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x168b14: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x168b14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x168b18: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x168b18u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x168b1c: 0x1220001a  beqz        $s1, . + 4 + (0x1A << 2)
    ctx->pc = 0x168B1Cu;
    {
        const bool branch_taken_0x168b1c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x168B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168B1Cu;
        // 0x168b20: 0x26420001  addiu       $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168b1c) {
            ctx->pc = 0x168B88u;
            goto label_168b88;
        }
    }
    ctx->pc = 0x168B24u;
    // 0x168b24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x168b24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168b28: 0xc04f148  jal         func_13C520
    ctx->pc = 0x168B28u;
    SET_GPR_U32(ctx, 31, 0x168B30u);
    ctx->pc = 0x168B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168B28u;
    // 0x168b2c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C520u, 0x168B28u, 0x168B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168B30u;
label_168b30:
    // 0x168b30: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x168B30u;
    {
        const bool branch_taken_0x168b30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x168B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168B30u;
        // 0x168b34: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168b30) {
            ctx->pc = 0x168B84u;
            goto label_168b84;
        }
    }
    ctx->pc = 0x168B38u;
    // 0x168b38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x168b38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168b3c: 0xc04f142  jal         func_13C508
    ctx->pc = 0x168B3Cu;
    SET_GPR_U32(ctx, 31, 0x168B44u);
    ctx->pc = 0x168B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168B3Cu;
    // 0x168b40: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C508u, 0x168B3Cu, 0x168B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168B44u;
label_168b44:
    // 0x168b44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x168b44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168b48: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x168b48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168b4c: 0xc04f136  jal         func_13C4D8
    ctx->pc = 0x168B4Cu;
    SET_GPR_U32(ctx, 31, 0x168B54u);
    ctx->pc = 0x168B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168B4Cu;
    // 0x168b50: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C4D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C4D8u, 0x168B4Cu, 0x168B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168B54u;
label_168b54:
    // 0x168b54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x168b54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168b58: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x168b58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168b5c: 0xc04f14e  jal         func_13C538
    ctx->pc = 0x168B5Cu;
    SET_GPR_U32(ctx, 31, 0x168B64u);
    ctx->pc = 0x168B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168B5Cu;
    // 0x168b60: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C538u, 0x168B5Cu, 0x168B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168B64u;
label_168b64:
    // 0x168b64: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x168b64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168b68: 0xc045642  jal         func_115908
    ctx->pc = 0x168B68u;
    SET_GPR_U32(ctx, 31, 0x168B70u);
    ctx->pc = 0x168B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168B68u;
    // 0x168b6c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115908u, 0x168B68u, 0x168B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168B70u;
label_168b70:
    // 0x168b70: 0x26a20001  addiu       $v0, $s5, 0x1
    ctx->pc = 0x168b70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x168b74: 0x92030009  lbu         $v1, 0x9($s0)
    ctx->pc = 0x168b74u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
    // 0x168b78: 0x305500ff  andi        $s5, $v0, 0xFF
    ctx->pc = 0x168b78u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x168b7c: 0x52a30007  beql        $s5, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x168B7Cu;
    {
        const bool branch_taken_0x168b7c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 3));
        if (branch_taken_0x168b7c) {
            ctx->pc = 0x168B80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x168B7Cu;
            // 0x168b80: 0x8e040214  lw          $a0, 0x214($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x168B9Cu;
            goto label_168b9c;
        }
    }
    ctx->pc = 0x168B84u;
label_168b84:
    // 0x168b84: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x168b84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_168b88:
    // 0x168b88: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x168b88u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x168b8c: 0x2e430010  sltiu       $v1, $s2, 0x10
    ctx->pc = 0x168b8cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x168b90: 0x5460ffdf  bnel        $v1, $zero, . + 4 + (-0x21 << 2)
    ctx->pc = 0x168B90u;
    {
        const bool branch_taken_0x168b90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x168b90) {
            ctx->pc = 0x168B94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x168B90u;
            // 0x168b94: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x168B10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_168b10;
        }
    }
    ctx->pc = 0x168B98u;
    // 0x168b98: 0x8e040214  lw          $a0, 0x214($s0)
    ctx->pc = 0x168b98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_168b9c:
    // 0x168b9c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x168b9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168ba0: 0xc043f22  jal         func_10FC88
    ctx->pc = 0x168BA0u;
    SET_GPR_U32(ctx, 31, 0x168BA8u);
    ctx->pc = 0x168BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168BA0u;
    // 0x168ba4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FC88u, 0x168BA0u, 0x168BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168BA8u;
label_168ba8:
    // 0x168ba8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x168ba8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x168bac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x168bacu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x168bb0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x168bb0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x168bb4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x168bb4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x168bb8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x168bb8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x168bbc: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x168bbcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x168bc0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x168bc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x168bc4: 0x3e00008  jr          $ra
    ctx->pc = 0x168BC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x168BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168BC4u;
        // 0x168bc8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x168BC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x168BCCu;
    // 0x168bcc: 0x0  nop
    ctx->pc = 0x168bccu;
    // NOP
    ctx->pc = 0x168bd0u;
}
