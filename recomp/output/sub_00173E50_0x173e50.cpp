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

// Function: sub_00173E50
// Address: 0x173e50 - 0x173fb0
void sub_00173E50_0x173e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00173E50_0x173e50");
#endif

    switch (ctx->pc) {
        case 0x173ea4u: goto label_173ea4;
        case 0x173ed4u: goto label_173ed4;
        case 0x173ee4u: goto label_173ee4;
        case 0x173f04u: goto label_173f04;
        case 0x173f1cu: goto label_173f1c;
        case 0x173f38u: goto label_173f38;
        case 0x173f5cu: goto label_173f5c;
        default: break;
    }

    ctx->pc = 0x173e50u;

    // 0x173e50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x173e50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x173e54: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x173e54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x173e58: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x173e58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x173e5c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x173e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x173e60: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x173e60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x173e64: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x173e64u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173e68: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x173e68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x173e6c: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x173e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x173e70: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x173e70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x173e74: 0x24849a08  addiu       $a0, $a0, -0x65F8
    ctx->pc = 0x173e74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941192));
    // 0x173e78: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x173e78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x173e7c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x173e7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173e80: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x173e80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x173e84: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x173e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x173e88: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x173e88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x173e8c: 0x8c740000  lw          $s4, 0x0($v1)
    ctx->pc = 0x173e8cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x173e90: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x173e90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x173e94: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x173e94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x173e98: 0x8c93020c  lw          $s3, 0x20C($a0)
    ctx->pc = 0x173e98u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 524)));
    // 0x173e9c: 0xc04422c  jal         func_1108B0
    ctx->pc = 0x173E9Cu;
    SET_GPR_U32(ctx, 31, 0x173EA4u);
    ctx->pc = 0x173EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173E9Cu;
    // 0x173ea0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1108B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1108B0u, 0x173E9Cu, 0x173EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173EA4u;
label_173ea4:
    // 0x173ea4: 0x92430009  lbu         $v1, 0x9($s2)
    ctx->pc = 0x173ea4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 9)));
    // 0x173ea8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x173ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x173eac: 0x54620023  bnel        $v1, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x173EACu;
    {
        const bool branch_taken_0x173eac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x173eac) {
            ctx->pc = 0x173EB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x173EACu;
            // 0x173eb0: 0x92620234  lbu         $v0, 0x234($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 564)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x173F3Cu;
            goto label_173f3c;
        }
    }
    ctx->pc = 0x173EB4u;
    // 0x173eb4: 0x8e62010c  lw          $v0, 0x10C($s3)
    ctx->pc = 0x173eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 268)));
    // 0x173eb8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x173EB8u;
    {
        const bool branch_taken_0x173eb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x173eb8) {
            ctx->pc = 0x173EDCu;
            goto label_173edc;
        }
    }
    ctx->pc = 0x173EC0u;
    // 0x173ec0: 0x8e6200d0  lw          $v0, 0xD0($s3)
    ctx->pc = 0x173ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 208)));
    // 0x173ec4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x173EC4u;
    {
        const bool branch_taken_0x173ec4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x173ec4) {
            ctx->pc = 0x173EDCu;
            goto label_173edc;
        }
    }
    ctx->pc = 0x173ECCu;
    // 0x173ecc: 0xc05d38e  jal         func_174E38
    ctx->pc = 0x173ECCu;
    SET_GPR_U32(ctx, 31, 0x173ED4u);
    ctx->pc = 0x173ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173ECCu;
    // 0x173ed0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174E38u, 0x173ECCu, 0x173ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173ED4u;
label_173ed4:
    // 0x173ed4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x173ED4u;
    {
        const bool branch_taken_0x173ed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173ED4u;
        // 0x173ed8: 0x8e4200c4  lw          $v0, 0xC4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173ed4) {
            ctx->pc = 0x173EE8u;
            goto label_173ee8;
        }
    }
    ctx->pc = 0x173EDCu;
label_173edc:
    // 0x173edc: 0xc05d37c  jal         func_174DF0
    ctx->pc = 0x173EDCu;
    SET_GPR_U32(ctx, 31, 0x173EE4u);
    ctx->pc = 0x173EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173EDCu;
    // 0x173ee0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174DF0u, 0x173EDCu, 0x173EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173EE4u;
label_173ee4:
    // 0x173ee4: 0x8e4200c4  lw          $v0, 0xC4($s2)
    ctx->pc = 0x173ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
label_173ee8:
    // 0x173ee8: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x173EE8u;
    {
        const bool branch_taken_0x173ee8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x173EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173EE8u;
        // 0x173eec: 0xae4002bc  sw          $zero, 0x2BC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 700), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173ee8) {
            ctx->pc = 0x173F38u;
            goto label_173f38;
        }
    }
    ctx->pc = 0x173EF0u;
    // 0x173ef0: 0xae4000c4  sw          $zero, 0xC4($s2)
    ctx->pc = 0x173ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 196), GPR_U32(ctx, 0));
    // 0x173ef4: 0x8e420054  lw          $v0, 0x54($s2)
    ctx->pc = 0x173ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x173ef8: 0x8e44005c  lw          $a0, 0x5C($s2)
    ctx->pc = 0x173ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
    // 0x173efc: 0xc05a5fe  jal         func_1697F8
    ctx->pc = 0x173EFCu;
    SET_GPR_U32(ctx, 31, 0x173F04u);
    ctx->pc = 0x173F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173EFCu;
    // 0x173f00: 0x8c510010  lw          $s1, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1697F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1697F8u, 0x173EFCu, 0x173F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173F04u;
label_173f04:
    // 0x173f04: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x173f04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173f08: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x173f08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x173f0c: 0x2484b060  addiu       $a0, $a0, -0x4FA0
    ctx->pc = 0x173f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946912));
    // 0x173f10: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x173f10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173f14: 0xc04af16  jal         func_12BC58
    ctx->pc = 0x173F14u;
    SET_GPR_U32(ctx, 31, 0x173F1Cu);
    ctx->pc = 0x173F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173F14u;
    // 0x173f18: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12BC58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12BC58u, 0x173F14u, 0x173F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173F1Cu;
label_173f1c:
    // 0x173f1c: 0xae4000bc  sw          $zero, 0xBC($s2)
    ctx->pc = 0x173f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 188), GPR_U32(ctx, 0));
    // 0x173f20: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x173f20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173f24: 0xae4000c0  sw          $zero, 0xC0($s2)
    ctx->pc = 0x173f24u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 192), GPR_U32(ctx, 0));
    // 0x173f28: 0x8e420058  lw          $v0, 0x58($s2)
    ctx->pc = 0x173f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
    // 0x173f2c: 0x8e440054  lw          $a0, 0x54($s2)
    ctx->pc = 0x173f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x173f30: 0xc04448e  jal         func_111238
    ctx->pc = 0x173F30u;
    SET_GPR_U32(ctx, 31, 0x173F38u);
    ctx->pc = 0x173F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173F30u;
    // 0x173f34: 0x8c45001c  lw          $a1, 0x1C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111238u, 0x173F30u, 0x173F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173F38u;
label_173f38:
    // 0x173f38: 0x92620234  lbu         $v0, 0x234($s3)
    ctx->pc = 0x173f38u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 564)));
label_173f3c:
    // 0x173f3c: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x173F3Cu;
    {
        const bool branch_taken_0x173f3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x173f3c) {
            ctx->pc = 0x173F40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x173F3Cu;
            // 0x173f40: 0x8e420228  lw          $v0, 0x228($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 552)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x173F64u;
            goto label_173f64;
        }
    }
    ctx->pc = 0x173F44u;
    // 0x173f44: 0x8e42028c  lw          $v0, 0x28C($s2)
    ctx->pc = 0x173f44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 652)));
    // 0x173f48: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x173F48u;
    {
        const bool branch_taken_0x173f48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x173F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173F48u;
        // 0x173f4c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173f48) {
            ctx->pc = 0x173F60u;
            goto label_173f60;
        }
    }
    ctx->pc = 0x173F50u;
    // 0x173f50: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x173f50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x173f54: 0xc04970e  jal         func_125C38
    ctx->pc = 0x173F54u;
    SET_GPR_U32(ctx, 31, 0x173F5Cu);
    ctx->pc = 0x173F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173F54u;
    // 0x173f58: 0x2484a080  addiu       $a0, $a0, -0x5F80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125C38u, 0x173F54u, 0x173F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173F5Cu;
label_173f5c:
    // 0x173f5c: 0xa2600234  sb          $zero, 0x234($s3)
    ctx->pc = 0x173f5cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 564), (uint8_t)GPR_U32(ctx, 0));
label_173f60:
    // 0x173f60: 0x8e420228  lw          $v0, 0x228($s2)
    ctx->pc = 0x173f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 552)));
label_173f64:
    // 0x173f64: 0x54540005  bnel        $v0, $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x173F64u;
    {
        const bool branch_taken_0x173f64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x173f64) {
            ctx->pc = 0x173F68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x173F64u;
            // 0x173f68: 0x8e420270  lw          $v0, 0x270($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 624)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x173F7Cu;
            goto label_173f7c;
        }
    }
    ctx->pc = 0x173F6Cu;
    // 0x173f6c: 0x16800002  bnez        $s4, . + 4 + (0x2 << 2)
    ctx->pc = 0x173F6Cu;
    {
        const bool branch_taken_0x173f6c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x173F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173F6Cu;
        // 0x173f70: 0xae400228  sw          $zero, 0x228($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 552), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173f6c) {
            ctx->pc = 0x173F78u;
            goto label_173f78;
        }
    }
    ctx->pc = 0x173F74u;
    // 0x173f74: 0xae400228  sw          $zero, 0x228($s2)
    ctx->pc = 0x173f74u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 552), GPR_U32(ctx, 0));
label_173f78:
    // 0x173f78: 0x8e420270  lw          $v0, 0x270($s2)
    ctx->pc = 0x173f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 624)));
label_173f7c:
    // 0x173f7c: 0x50540001  beql        $v0, $s4, . + 4 + (0x1 << 2)
    ctx->pc = 0x173F7Cu;
    {
        const bool branch_taken_0x173f7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        if (branch_taken_0x173f7c) {
            ctx->pc = 0x173F80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x173F7Cu;
            // 0x173f80: 0xae400270  sw          $zero, 0x270($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 624), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x173F84u;
            goto label_173f84;
        }
    }
    ctx->pc = 0x173F84u;
label_173f84:
    // 0x173f84: 0x8e420278  lw          $v0, 0x278($s2)
    ctx->pc = 0x173f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 632)));
    // 0x173f88: 0x50540001  beql        $v0, $s4, . + 4 + (0x1 << 2)
    ctx->pc = 0x173F88u;
    {
        const bool branch_taken_0x173f88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        if (branch_taken_0x173f88) {
            ctx->pc = 0x173F8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x173F88u;
            // 0x173f8c: 0xae400278  sw          $zero, 0x278($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 632), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x173F90u;
            goto label_173f90;
        }
    }
    ctx->pc = 0x173F90u;
label_173f90:
    // 0x173f90: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x173f90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x173f94: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x173f94u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x173f98: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x173f98u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x173f9c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x173f9cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x173fa0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x173fa0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x173fa4: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x173fa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x173fa8: 0x3e00008  jr          $ra
    ctx->pc = 0x173FA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x173FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173FA8u;
        // 0x173fac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x173FA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x173FB0u;
}
