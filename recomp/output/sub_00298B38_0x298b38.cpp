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

// Function: sub_00298B38
// Address: 0x298b38 - 0x298cd0
void sub_00298B38_0x298b38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00298B38_0x298b38");
#endif

    switch (ctx->pc) {
        case 0x298b78u: goto label_298b78;
        case 0x298b8cu: goto label_298b8c;
        case 0x298bc4u: goto label_298bc4;
        case 0x298bd4u: goto label_298bd4;
        case 0x298c04u: goto label_298c04;
        case 0x298c18u: goto label_298c18;
        case 0x298c2cu: goto label_298c2c;
        case 0x298c38u: goto label_298c38;
        case 0x298c48u: goto label_298c48;
        case 0x298c5cu: goto label_298c5c;
        case 0x298c90u: goto label_298c90;
        default: break;
    }

    ctx->pc = 0x298b38u;

    // 0x298b38: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x298b38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x298b3c: 0x3c020052  lui         $v0, 0x52
    ctx->pc = 0x298b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)82 << 16));
    // 0x298b40: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x298b40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x298b44: 0x24030039  addiu       $v1, $zero, 0x39
    ctx->pc = 0x298b44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x298b48: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x298b48u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298b4c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x298b4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x298b50: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x298b50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x298b54: 0x2450ac80  addiu       $s0, $v0, -0x5380
    ctx->pc = 0x298b54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945920));
    // 0x298b58: 0x8c44ac80  lw          $a0, -0x5380($v0)
    ctx->pc = 0x298b58u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x51AC80u));
    // 0x298b5c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x298b5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298b60: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x298b60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x298b64: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x298b64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x298b68: 0x1483000c  bne         $a0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x298B68u;
    {
        const bool branch_taken_0x298b68 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x298B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298B68u;
        // 0x298b6c: 0xffbf0038  sd          $ra, 0x38($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298b68) {
            ctx->pc = 0x298B9Cu;
            goto label_298b9c;
        }
    }
    ctx->pc = 0x298B70u;
    // 0x298b70: 0xc0a71e0  jal         func_29C780
    ctx->pc = 0x298B70u;
    SET_GPR_U32(ctx, 31, 0x298B78u);
    ctx->pc = 0x29C780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C780u, 0x298B70u, 0x298B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298B78u;
label_298b78:
    // 0x298b78: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x298b78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x298b7c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x298b7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298b80: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x298b80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298b84: 0xc0d7424  jal         func_35D090
    ctx->pc = 0x298B84u;
    SET_GPR_U32(ctx, 31, 0x298B8Cu);
    ctx->pc = 0x298B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298B84u;
    // 0x298b88: 0x24a5bd60  addiu       $a1, $a1, -0x42A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D090u, 0x298B84u, 0x298B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298B8Cu;
label_298b8c:
    // 0x298b8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x298b8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298b90: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x298b90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298b94: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x298B94u;
    {
        const bool branch_taken_0x298b94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x298B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298B94u;
        // 0x298b98: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298b94) {
            ctx->pc = 0x298C24u;
            goto label_298c24;
        }
    }
    ctx->pc = 0x298B9Cu;
label_298b9c:
    // 0x298b9c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x298b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x298ba0: 0x9062a932  lbu         $v0, -0x56CE($v1)
    ctx->pc = 0x298ba0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x3FA932u));
    // 0x298ba4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x298BA4u;
    {
        const bool branch_taken_0x298ba4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x298BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298BA4u;
        // 0x298ba8: 0x60a02d  daddu       $s4, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298ba4) {
            ctx->pc = 0x298BB8u;
            goto label_298bb8;
        }
    }
    ctx->pc = 0x298BACu;
    // 0x298bac: 0xa280a932  sb          $zero, -0x56CE($s4)
    ctx->pc = 0x298bacu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 4294945074), (uint8_t)GPR_U32(ctx, 0));
    // 0x298bb0: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x298BB0u;
    {
        const bool branch_taken_0x298bb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x298BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298BB0u;
        // 0x298bb4: 0xae40ac80  sw          $zero, -0x5380($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4294945920), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298bb0) {
            ctx->pc = 0x298CACu;
            goto label_298cac;
        }
    }
    ctx->pc = 0x298BB8u;
label_298bb8:
    // 0x298bb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x298bb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298bbc: 0xc0addea  jal         func_2B77A8
    ctx->pc = 0x298BBCu;
    SET_GPR_U32(ctx, 31, 0x298BC4u);
    ctx->pc = 0x298BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298BBCu;
    // 0x298bc0: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B77A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B77A8u, 0x298BBCu, 0x298BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298BC4u;
label_298bc4:
    // 0x298bc4: 0x10510007  beq         $v0, $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x298BC4u;
    {
        const bool branch_taken_0x298bc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x298BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298BC4u;
        // 0x298bc8: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298bc4) {
            ctx->pc = 0x298BE4u;
            goto label_298be4;
        }
    }
    ctx->pc = 0x298BCCu;
    // 0x298bcc: 0xc0ade76  jal         func_2B79D8
    ctx->pc = 0x298BCCu;
    SET_GPR_U32(ctx, 31, 0x298BD4u);
    ctx->pc = 0x298BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298BCCu;
    // 0x298bd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B79D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B79D8u, 0x298BCCu, 0x298BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298BD4u;
label_298bd4:
    // 0x298bd4: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x298bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x298bd8: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x298BD8u;
    {
        const bool branch_taken_0x298bd8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x298BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298BD8u;
        // 0x298bdc: 0x8e43ac80  lw          $v1, -0x5380($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294945920)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298bd8) {
            ctx->pc = 0x298BF0u;
            goto label_298bf0;
        }
    }
    ctx->pc = 0x298BE0u;
    // 0x298be0: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x298be0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_298be4:
    // 0x298be4: 0xae11591c  sw          $s1, 0x591C($s0)
    ctx->pc = 0x298be4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 22812), GPR_U32(ctx, 17));
    // 0x298be8: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x298BE8u;
    {
        const bool branch_taken_0x298be8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x298BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298BE8u;
        // 0x298bec: 0xae0258f8  sw          $v0, 0x58F8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 22776), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298be8) {
            ctx->pc = 0x298C40u;
            goto label_298c40;
        }
    }
    ctx->pc = 0x298BF0u;
label_298bf0:
    // 0x298bf0: 0x2402002c  addiu       $v0, $zero, 0x2C
    ctx->pc = 0x298bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x298bf4: 0x14620012  bne         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x298BF4u;
    {
        const bool branch_taken_0x298bf4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x298bf4) {
            ctx->pc = 0x298C40u;
            goto label_298c40;
        }
    }
    ctx->pc = 0x298BFCu;
    // 0x298bfc: 0xc0a71e0  jal         func_29C780
    ctx->pc = 0x298BFCu;
    SET_GPR_U32(ctx, 31, 0x298C04u);
    ctx->pc = 0x29C780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C780u, 0x298BFCu, 0x298C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298C04u;
label_298c04:
    // 0x298c04: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x298c04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x298c08: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x298c08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298c0c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x298c0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298c10: 0xc0d7424  jal         func_35D090
    ctx->pc = 0x298C10u;
    SET_GPR_U32(ctx, 31, 0x298C18u);
    ctx->pc = 0x298C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298C10u;
    // 0x298c14: 0x24a5bd60  addiu       $a1, $a1, -0x42A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D090u, 0x298C10u, 0x298C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298C18u;
label_298c18:
    // 0x298c18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x298c18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298c1c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x298c1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298c20: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x298c20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_298c24:
    // 0x298c24: 0xc0a7096  jal         func_29C258
    ctx->pc = 0x298C24u;
    SET_GPR_U32(ctx, 31, 0x298C2Cu);
    ctx->pc = 0x29C258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C258u, 0x298C24u, 0x298C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298C2Cu;
label_298c2c:
    // 0x298c2c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x298c2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298c30: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x298C30u;
    SET_GPR_U32(ctx, 31, 0x298C38u);
    ctx->pc = 0x298C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298C30u;
    // 0x298c34: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x298C30u, 0x298C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298C38u;
label_298c38:
    // 0x298c38: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x298C38u;
    {
        const bool branch_taken_0x298c38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x298C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298C38u;
        // 0x298c3c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298c38) {
            ctx->pc = 0x298CB0u;
            goto label_298cb0;
        }
    }
    ctx->pc = 0x298C40u;
label_298c40:
    // 0x298c40: 0xc0a1f58  jal         func_287D60
    ctx->pc = 0x298C40u;
    SET_GPR_U32(ctx, 31, 0x298C48u);
    ctx->pc = 0x287D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x287D60u, 0x298C40u, 0x298C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298C48u;
label_298c48:
    // 0x298c48: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x298C48u;
    {
        const bool branch_taken_0x298c48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x298C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298C48u;
        // 0x298c4c: 0x2651ac80  addiu       $s1, $s2, -0x5380 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 4294945920));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298c48) {
            ctx->pc = 0x298CACu;
            goto label_298cac;
        }
    }
    ctx->pc = 0x298C50u;
    // 0x298c50: 0x8e700078  lw          $s0, 0x78($s3)
    ctx->pc = 0x298c50u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 120)));
    // 0x298c54: 0xc0ade76  jal         func_2B79D8
    ctx->pc = 0x298C54u;
    SET_GPR_U32(ctx, 31, 0x298C5Cu);
    ctx->pc = 0x298C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298C54u;
    // 0x298c58: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B79D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B79D8u, 0x298C54u, 0x298C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298C5Cu;
label_298c5c:
    // 0x298c5c: 0x24030110  addiu       $v1, $zero, 0x110
    ctx->pc = 0x298c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
    // 0x298c60: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x298c60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x298c64: 0x2038018  mult        $s0, $s0, $v1
    ctx->pc = 0x298c64u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x298c68: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x298c68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x298c6c: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x298c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x298c70: 0x54640009  bnel        $v1, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x298C70u;
    {
        const bool branch_taken_0x298c70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x298c70) {
            ctx->pc = 0x298C74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x298C70u;
            // 0x298c74: 0xa284a932  sb          $a0, -0x56CE($s4) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 20), 4294945074), (uint8_t)GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x298C98u;
            goto label_298c98;
        }
    }
    ctx->pc = 0x298C78u;
    // 0x298c78: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x298c78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
    // 0x298c7c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x298c7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x298c80: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x298c80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x298c84: 0x24849b10  addiu       $a0, $a0, -0x64F0
    ctx->pc = 0x298c84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941456));
    // 0x298c88: 0xc07f540  jal         func_1FD500
    ctx->pc = 0x298C88u;
    SET_GPR_U32(ctx, 31, 0x298C90u);
    ctx->pc = 0x298C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298C88u;
    // 0x298c8c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD500u, 0x298C88u, 0x298C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298C90u;
label_298c90:
    // 0x298c90: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x298C90u;
    {
        const bool branch_taken_0x298c90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x298C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298C90u;
        // 0x298c94: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298c90) {
            ctx->pc = 0x298CB0u;
            goto label_298cb0;
        }
    }
    ctx->pc = 0x298C98u;
label_298c98:
    // 0x298c98: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x298c98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x298c9c: 0x8e620078  lw          $v0, 0x78($s3)
    ctx->pc = 0x298c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 120)));
    // 0x298ca0: 0xae24591c  sw          $a0, 0x591C($s1)
    ctx->pc = 0x298ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 22812), GPR_U32(ctx, 4));
    // 0x298ca4: 0xae225908  sw          $v0, 0x5908($s1)
    ctx->pc = 0x298ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 22792), GPR_U32(ctx, 2));
    // 0x298ca8: 0xae2358f8  sw          $v1, 0x58F8($s1)
    ctx->pc = 0x298ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 22776), GPR_U32(ctx, 3));
label_298cac:
    // 0x298cac: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x298cacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_298cb0:
    // 0x298cb0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x298cb0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x298cb4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x298cb4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x298cb8: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x298cb8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x298cbc: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x298cbcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x298cc0: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x298cc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x298cc4: 0x3e00008  jr          $ra
    ctx->pc = 0x298CC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x298CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298CC4u;
        // 0x298cc8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x298CC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x298CCCu;
    // 0x298ccc: 0x0  nop
    ctx->pc = 0x298cccu;
    // NOP
    ctx->pc = 0x298cd0u;
}
