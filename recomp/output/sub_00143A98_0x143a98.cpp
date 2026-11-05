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

// Function: sub_00143A98
// Address: 0x143a98 - 0x143b70
void sub_00143A98_0x143a98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00143A98_0x143a98");
#endif

    switch (ctx->pc) {
        case 0x143ae4u: goto label_143ae4;
        case 0x143af4u: goto label_143af4;
        case 0x143b00u: goto label_143b00;
        case 0x143b14u: goto label_143b14;
        case 0x143b38u: goto label_143b38;
        case 0x143b48u: goto label_143b48;
        case 0x143b58u: goto label_143b58;
        default: break;
    }

    ctx->pc = 0x143a98u;

    // 0x143a98: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x143a98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x143a9c: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x143a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
    // 0x143aa0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x143aa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x143aa4: 0x24639a08  addiu       $v1, $v1, -0x65F8
    ctx->pc = 0x143aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941192));
    // 0x143aa8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x143aa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x143aac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x143aacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143ab0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x143ab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x143ab4: 0x30b200ff  andi        $s2, $a1, 0xFF
    ctx->pc = 0x143ab4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x143ab8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x143ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x143abc: 0x122080  sll         $a0, $s2, 2
    ctx->pc = 0x143abcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x143ac0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x143ac0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143ac4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x143ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x143ac8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x143ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x143acc: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x143accu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x143ad0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x143ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x143ad4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x143ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x143ad8: 0x8c71020c  lw          $s1, 0x20C($v1)
    ctx->pc = 0x143ad8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 524)));
    // 0x143adc: 0xc04398a  jal         func_10E628
    ctx->pc = 0x143ADCu;
    SET_GPR_U32(ctx, 31, 0x143AE4u);
    ctx->pc = 0x143AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143ADCu;
    // 0x143ae0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E628u, 0x143ADCu, 0x143AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143AE4u;
label_143ae4:
    // 0x143ae4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x143ae4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143ae8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x143ae8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143aec: 0xc04d91a  jal         func_136468
    ctx->pc = 0x143AECu;
    SET_GPR_U32(ctx, 31, 0x143AF4u);
    ctx->pc = 0x143AF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143AECu;
    // 0x143af0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136468u, 0x143AECu, 0x143AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143AF4u;
label_143af4:
    // 0x143af4: 0x8e050ab0  lw          $a1, 0xAB0($s0)
    ctx->pc = 0x143af4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2736)));
    // 0x143af8: 0xc043e76  jal         func_10F9D8
    ctx->pc = 0x143AF8u;
    SET_GPR_U32(ctx, 31, 0x143B00u);
    ctx->pc = 0x143AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143AF8u;
    // 0x143afc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F9D8u, 0x143AF8u, 0x143B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143B00u;
label_143b00:
    // 0x143b00: 0x920204bc  lbu         $v0, 0x4BC($s0)
    ctx->pc = 0x143b00u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1212)));
    // 0x143b04: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x143B04u;
    {
        const bool branch_taken_0x143b04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x143B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143B04u;
        // 0x143b08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143b04) {
            ctx->pc = 0x143B58u;
            goto label_143b58;
        }
    }
    ctx->pc = 0x143B0Cu;
    // 0x143b0c: 0xc04d914  jal         func_136450
    ctx->pc = 0x143B0Cu;
    SET_GPR_U32(ctx, 31, 0x143B14u);
    ctx->pc = 0x143B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143B0Cu;
    // 0x143b10: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136450u, 0x143B0Cu, 0x143B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143B14u;
label_143b14:
    // 0x143b14: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x143B14u;
    {
        const bool branch_taken_0x143b14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x143b14) {
            ctx->pc = 0x143B18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x143B14u;
            // 0x143b18: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x143B5Cu;
            goto label_143b5c;
        }
    }
    ctx->pc = 0x143B1Cu;
    // 0x143b1c: 0x920204bc  lbu         $v0, 0x4BC($s0)
    ctx->pc = 0x143b1cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1212)));
    // 0x143b20: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x143b20u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x143b24: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x143B24u;
    {
        const bool branch_taken_0x143b24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x143b24) {
            ctx->pc = 0x143B28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x143B24u;
            // 0x143b28: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x143B5Cu;
            goto label_143b5c;
        }
    }
    ctx->pc = 0x143B2Cu;
    // 0x143b2c: 0x8e050ab0  lw          $a1, 0xAB0($s0)
    ctx->pc = 0x143b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2736)));
    // 0x143b30: 0xc04da68  jal         func_1369A0
    ctx->pc = 0x143B30u;
    SET_GPR_U32(ctx, 31, 0x143B38u);
    ctx->pc = 0x143B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143B30u;
    // 0x143b34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1369A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1369A0u, 0x143B30u, 0x143B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143B38u;
label_143b38:
    // 0x143b38: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x143B38u;
    {
        const bool branch_taken_0x143b38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x143B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143B38u;
        // 0x143b3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143b38) {
            ctx->pc = 0x143B58u;
            goto label_143b58;
        }
    }
    ctx->pc = 0x143B40u;
    // 0x143b40: 0xc04398a  jal         func_10E628
    ctx->pc = 0x143B40u;
    SET_GPR_U32(ctx, 31, 0x143B48u);
    ctx->pc = 0x143B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143B40u;
    // 0x143b44: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E628u, 0x143B40u, 0x143B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143B48u;
label_143b48:
    // 0x143b48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x143b48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143b4c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x143b4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143b50: 0xc04d91a  jal         func_136468
    ctx->pc = 0x143B50u;
    SET_GPR_U32(ctx, 31, 0x143B58u);
    ctx->pc = 0x143B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143B50u;
    // 0x143b54: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136468u, 0x143B50u, 0x143B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143B58u;
label_143b58:
    // 0x143b58: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x143b58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_143b5c:
    // 0x143b5c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x143b5cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x143b60: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x143b60u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x143b64: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x143b64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x143b68: 0x3e00008  jr          $ra
    ctx->pc = 0x143B68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x143B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143B68u;
        // 0x143b6c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143B68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x143B70u;
}
