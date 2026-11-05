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

// Function: sub_00157A88
// Address: 0x157a88 - 0x157da8
void sub_00157A88_0x157a88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00157A88_0x157a88");
#endif

    switch (ctx->pc) {
        case 0x157bfcu: goto label_157bfc;
        case 0x157c18u: goto label_157c18;
        case 0x157c2cu: goto label_157c2c;
        case 0x157c40u: goto label_157c40;
        case 0x157c54u: goto label_157c54;
        case 0x157c6cu: goto label_157c6c;
        case 0x157c90u: goto label_157c90;
        case 0x157ca4u: goto label_157ca4;
        case 0x157cbcu: goto label_157cbc;
        case 0x157cd4u: goto label_157cd4;
        case 0x157ce0u: goto label_157ce0;
        case 0x157d0cu: goto label_157d0c;
        case 0x157d48u: goto label_157d48;
        case 0x157d64u: goto label_157d64;
        case 0x157d74u: goto label_157d74;
        default: break;
    }

    ctx->pc = 0x157a88u;

    // 0x157a88: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x157a88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x157a8c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x157a8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x157a90: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x157a90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x157a94: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x157a94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157a98: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x157a98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x157a9c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x157a9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157aa0: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x157aa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x157aa4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x157aa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157aa8: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x157aa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x157aac: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x157aacu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157ab0: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x157ab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x157ab4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x157ab4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157ab8: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x157ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
    // 0x157abc: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x157abcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157ac0: 0xffbe0060  sd          $fp, 0x60($sp)
    ctx->pc = 0x157ac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 30));
    // 0x157ac4: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x157ac4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157ac8: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x157ac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x157acc: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x157accu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157ad0: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x157ad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x157ad4: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x157ad4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157ad8: 0x8e340054  lw          $s4, 0x54($s1)
    ctx->pc = 0x157ad8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x157adc: 0xae060218  sw          $a2, 0x218($s0)
    ctx->pc = 0x157adcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 536), GPR_U32(ctx, 6));
    // 0x157ae0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x157ae0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157ae4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x157ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x157ae8: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x157ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x157aec: 0x2e820013  sltiu       $v0, $s4, 0x13
    ctx->pc = 0x157aecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)19) ? 1 : 0);
    // 0x157af0: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x157af0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x157af4: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x157af4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x157af8: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x157AF8u;
    {
        const bool branch_taken_0x157af8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x157AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157AF8u;
        // 0x157afc: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157af8) {
            ctx->pc = 0x157BE4u;
            goto label_157be4;
        }
    }
    ctx->pc = 0x157B00u;
    // 0x157b00: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x157b00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x157b04: 0x141880  sll         $v1, $s4, 2
    ctx->pc = 0x157b04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x157b08: 0x2442ed20  addiu       $v0, $v0, -0x12E0
    ctx->pc = 0x157b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962464));
    // 0x157b0c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x157b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x157b10: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x157b10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x157b14: 0x800008  jr          $a0
    ctx->pc = 0x157B14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x157B1Cu: goto label_157b1c;
            case 0x157B30u: goto label_157b30;
            case 0x157B44u: goto label_157b44;
            case 0x157B50u: goto label_157b50;
            case 0x157B5Cu: goto label_157b5c;
            case 0x157B70u: goto label_157b70;
            case 0x157B88u: goto label_157b88;
            case 0x157BA0u: goto label_157ba0;
            case 0x157BB8u: goto label_157bb8;
            case 0x157BCCu: goto label_157bcc;
            case 0x157BD8u: goto label_157bd8;
            case 0x157BE4u: goto label_157be4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x157B14u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x157B1Cu;
label_157b1c:
    // 0x157b1c: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x157b1cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x157b20: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x157b20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x157b24: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x157b24u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x157b28: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x157B28u;
    {
        const bool branch_taken_0x157b28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157B28u;
        // 0x157b2c: 0xafb30008  sw          $s3, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157b28) {
            ctx->pc = 0x157BE4u;
            goto label_157be4;
        }
    }
    ctx->pc = 0x157B30u;
label_157b30:
    // 0x157b30: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x157b30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x157b34: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x157b34u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x157b38: 0xae0202e0  sw          $v0, 0x2E0($s0)
    ctx->pc = 0x157b38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 736), GPR_U32(ctx, 2));
    // 0x157b3c: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x157B3Cu;
    {
        const bool branch_taken_0x157b3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157B3Cu;
        // 0x157b40: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157b3c) {
            ctx->pc = 0x157BE4u;
            goto label_157be4;
        }
    }
    ctx->pc = 0x157B44u;
label_157b44:
    // 0x157b44: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x157b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x157b48: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x157B48u;
    {
        const bool branch_taken_0x157b48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157B48u;
        // 0x157b4c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157b48) {
            ctx->pc = 0x157BE0u;
            goto label_157be0;
        }
    }
    ctx->pc = 0x157B50u;
label_157b50:
    // 0x157b50: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x157b50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x157b54: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x157B54u;
    {
        const bool branch_taken_0x157b54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157B54u;
        // 0x157b58: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157b54) {
            ctx->pc = 0x157BE0u;
            goto label_157be0;
        }
    }
    ctx->pc = 0x157B5Cu;
label_157b5c:
    // 0x157b5c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x157b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x157b60: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x157b60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x157b64: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x157b64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x157b68: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x157B68u;
    {
        const bool branch_taken_0x157b68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157B68u;
        // 0x157b6c: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157b68) {
            ctx->pc = 0x157BE0u;
            goto label_157be0;
        }
    }
    ctx->pc = 0x157B70u;
label_157b70:
    // 0x157b70: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x157b70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x157b74: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x157b74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x157b78: 0xae0202e0  sw          $v0, 0x2E0($s0)
    ctx->pc = 0x157b78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 736), GPR_U32(ctx, 2));
    // 0x157b7c: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x157b7cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x157b80: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x157B80u;
    {
        const bool branch_taken_0x157b80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157B80u;
        // 0x157b84: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157b80) {
            ctx->pc = 0x157BE4u;
            goto label_157be4;
        }
    }
    ctx->pc = 0x157B88u;
label_157b88:
    // 0x157b88: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x157b88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x157b8c: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x157b8cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x157b90: 0xae0202e0  sw          $v0, 0x2E0($s0)
    ctx->pc = 0x157b90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 736), GPR_U32(ctx, 2));
    // 0x157b94: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x157b94u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x157b98: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x157B98u;
    {
        const bool branch_taken_0x157b98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157B98u;
        // 0x157b9c: 0xafb30000  sw          $s3, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157b98) {
            ctx->pc = 0x157BE4u;
            goto label_157be4;
        }
    }
    ctx->pc = 0x157BA0u;
label_157ba0:
    // 0x157ba0: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x157ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x157ba4: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x157ba4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x157ba8: 0xae0202e0  sw          $v0, 0x2E0($s0)
    ctx->pc = 0x157ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 736), GPR_U32(ctx, 2));
    // 0x157bac: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x157bacu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x157bb0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x157BB0u;
    {
        const bool branch_taken_0x157bb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157BB0u;
        // 0x157bb4: 0xafb30010  sw          $s3, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157bb0) {
            ctx->pc = 0x157BE4u;
            goto label_157be4;
        }
    }
    ctx->pc = 0x157BB8u;
label_157bb8:
    // 0x157bb8: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x157bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x157bbc: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x157bbcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x157bc0: 0xae0202e0  sw          $v0, 0x2E0($s0)
    ctx->pc = 0x157bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 736), GPR_U32(ctx, 2));
    // 0x157bc4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x157BC4u;
    {
        const bool branch_taken_0x157bc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157BC4u;
        // 0x157bc8: 0xafb2000c  sw          $s2, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157bc4) {
            ctx->pc = 0x157BE4u;
            goto label_157be4;
        }
    }
    ctx->pc = 0x157BCCu;
label_157bcc:
    // 0x157bcc: 0x24020017  addiu       $v0, $zero, 0x17
    ctx->pc = 0x157bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x157bd0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x157BD0u;
    {
        const bool branch_taken_0x157bd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157BD0u;
        // 0x157bd4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157bd0) {
            ctx->pc = 0x157BE0u;
            goto label_157be0;
        }
    }
    ctx->pc = 0x157BD8u;
label_157bd8:
    // 0x157bd8: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x157bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x157bdc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x157bdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_157be0:
    // 0x157be0: 0xae0202e0  sw          $v0, 0x2E0($s0)
    ctx->pc = 0x157be0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 736), GPR_U32(ctx, 2));
label_157be4:
    // 0x157be4: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x157BE4u;
    {
        const bool branch_taken_0x157be4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x157be4) {
            ctx->pc = 0x157BF4u;
            goto label_157bf4;
        }
    }
    ctx->pc = 0x157BECu;
    // 0x157bec: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x157BECu;
    {
        const bool branch_taken_0x157bec = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x157bec) {
            ctx->pc = 0x157C00u;
            goto label_157c00;
        }
    }
    ctx->pc = 0x157BF4u;
label_157bf4:
    // 0x157bf4: 0xc046002  jal         func_118008
    ctx->pc = 0x157BF4u;
    SET_GPR_U32(ctx, 31, 0x157BFCu);
    ctx->pc = 0x157BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157BF4u;
    // 0x157bf8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118008u, 0x157BF4u, 0x157BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157BFCu;
label_157bfc:
    // 0x157bfc: 0xae0202e4  sw          $v0, 0x2E4($s0)
    ctx->pc = 0x157bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 740), GPR_U32(ctx, 2));
label_157c00:
    // 0x157c00: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x157C00u;
    {
        const bool branch_taken_0x157c00 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x157c00) {
            ctx->pc = 0x157C10u;
            goto label_157c10;
        }
    }
    ctx->pc = 0x157C08u;
    // 0x157c08: 0x12c00004  beqz        $s6, . + 4 + (0x4 << 2)
    ctx->pc = 0x157C08u;
    {
        const bool branch_taken_0x157c08 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x157c08) {
            ctx->pc = 0x157C1Cu;
            goto label_157c1c;
        }
    }
    ctx->pc = 0x157C10u;
label_157c10:
    // 0x157c10: 0xc0461fe  jal         func_1187F8
    ctx->pc = 0x157C10u;
    SET_GPR_U32(ctx, 31, 0x157C18u);
    ctx->pc = 0x157C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157C10u;
    // 0x157c14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1187F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1187F8u, 0x157C10u, 0x157C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157C18u;
label_157c18:
    // 0x157c18: 0xae020304  sw          $v0, 0x304($s0)
    ctx->pc = 0x157c18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 772), GPR_U32(ctx, 2));
label_157c1c:
    // 0x157c1c: 0x12e00004  beqz        $s7, . + 4 + (0x4 << 2)
    ctx->pc = 0x157C1Cu;
    {
        const bool branch_taken_0x157c1c = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x157c1c) {
            ctx->pc = 0x157C30u;
            goto label_157c30;
        }
    }
    ctx->pc = 0x157C24u;
    // 0x157c24: 0xc045fd2  jal         func_117F48
    ctx->pc = 0x157C24u;
    SET_GPR_U32(ctx, 31, 0x157C2Cu);
    ctx->pc = 0x157C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157C24u;
    // 0x157c28: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117F48u, 0x157C24u, 0x157C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157C2Cu;
label_157c2c:
    // 0x157c2c: 0xae020308  sw          $v0, 0x308($s0)
    ctx->pc = 0x157c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 776), GPR_U32(ctx, 2));
label_157c30:
    // 0x157c30: 0x13c00004  beqz        $fp, . + 4 + (0x4 << 2)
    ctx->pc = 0x157C30u;
    {
        const bool branch_taken_0x157c30 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x157c30) {
            ctx->pc = 0x157C44u;
            goto label_157c44;
        }
    }
    ctx->pc = 0x157C38u;
    // 0x157c38: 0xc046272  jal         func_1189C8
    ctx->pc = 0x157C38u;
    SET_GPR_U32(ctx, 31, 0x157C40u);
    ctx->pc = 0x157C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157C38u;
    // 0x157c3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1189C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189C8u, 0x157C38u, 0x157C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157C40u;
label_157c40:
    // 0x157c40: 0xae02030c  sw          $v0, 0x30C($s0)
    ctx->pc = 0x157c40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 780), GPR_U32(ctx, 2));
label_157c44:
    // 0x157c44: 0x12600005  beqz        $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x157C44u;
    {
        const bool branch_taken_0x157c44 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x157C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157C44u;
        // 0x157c48: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157c44) {
            ctx->pc = 0x157C5Cu;
            goto label_157c5c;
        }
    }
    ctx->pc = 0x157C4Cu;
    // 0x157c4c: 0xc0462b0  jal         func_118AC0
    ctx->pc = 0x157C4Cu;
    SET_GPR_U32(ctx, 31, 0x157C54u);
    ctx->pc = 0x157C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157C4Cu;
    // 0x157c50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118AC0u, 0x157C4Cu, 0x157C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157C54u;
label_157c54:
    // 0x157c54: 0xe6000310  swc1        $f0, 0x310($s0)
    ctx->pc = 0x157c54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 784), bits); }
    // 0x157c58: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x157c58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_157c5c:
    // 0x157c5c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x157C5Cu;
    {
        const bool branch_taken_0x157c5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x157C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157C5Cu;
        // 0x157c60: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157c5c) {
            ctx->pc = 0x157C80u;
            goto label_157c80;
        }
    }
    ctx->pc = 0x157C64u;
    // 0x157c64: 0xc046272  jal         func_1189C8
    ctx->pc = 0x157C64u;
    SET_GPR_U32(ctx, 31, 0x157C6Cu);
    ctx->pc = 0x157C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157C64u;
    // 0x157c68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1189C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189C8u, 0x157C64u, 0x157C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157C6Cu;
label_157c6c:
    // 0x157c6c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x157c6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x157c70: 0x0  nop
    ctx->pc = 0x157c70u;
    // NOP
    // 0x157c74: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x157c74u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x157c78: 0xe6000314  swc1        $f0, 0x314($s0)
    ctx->pc = 0x157c78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 788), bits); }
    // 0x157c7c: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x157c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_157c80:
    // 0x157c80: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x157C80u;
    {
        const bool branch_taken_0x157c80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x157c80) {
            ctx->pc = 0x157C94u;
            goto label_157c94;
        }
    }
    ctx->pc = 0x157C88u;
    // 0x157c88: 0xc04633e  jal         func_118CF8
    ctx->pc = 0x157C88u;
    SET_GPR_U32(ctx, 31, 0x157C90u);
    ctx->pc = 0x157C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157C88u;
    // 0x157c8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118CF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118CF8u, 0x157C88u, 0x157C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157C90u;
label_157c90:
    // 0x157c90: 0xae020318  sw          $v0, 0x318($s0)
    ctx->pc = 0x157c90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 792), GPR_U32(ctx, 2));
label_157c94:
    // 0x157c94: 0x12a00005  beqz        $s5, . + 4 + (0x5 << 2)
    ctx->pc = 0x157C94u;
    {
        const bool branch_taken_0x157c94 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x157C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157C94u;
        // 0x157c98: 0x8fa2000c  lw          $v0, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157c94) {
            ctx->pc = 0x157CACu;
            goto label_157cac;
        }
    }
    ctx->pc = 0x157C9Cu;
    // 0x157c9c: 0xc04611e  jal         func_118478
    ctx->pc = 0x157C9Cu;
    SET_GPR_U32(ctx, 31, 0x157CA4u);
    ctx->pc = 0x157CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157C9Cu;
    // 0x157ca0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118478u, 0x157C9Cu, 0x157CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157CA4u;
label_157ca4:
    // 0x157ca4: 0xae02031c  sw          $v0, 0x31C($s0)
    ctx->pc = 0x157ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 796), GPR_U32(ctx, 2));
    // 0x157ca8: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x157ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_157cac:
    // 0x157cac: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x157CACu;
    {
        const bool branch_taken_0x157cac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x157CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157CACu;
        // 0x157cb0: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157cac) {
            ctx->pc = 0x157CC4u;
            goto label_157cc4;
        }
    }
    ctx->pc = 0x157CB4u;
    // 0x157cb4: 0xc046272  jal         func_1189C8
    ctx->pc = 0x157CB4u;
    SET_GPR_U32(ctx, 31, 0x157CBCu);
    ctx->pc = 0x157CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157CB4u;
    // 0x157cb8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1189C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189C8u, 0x157CB4u, 0x157CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157CBCu;
label_157cbc:
    // 0x157cbc: 0xae020328  sw          $v0, 0x328($s0)
    ctx->pc = 0x157cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 808), GPR_U32(ctx, 2));
    // 0x157cc0: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x157cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_157cc4:
    // 0x157cc4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x157CC4u;
    {
        const bool branch_taken_0x157cc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x157cc4) {
            ctx->pc = 0x157CD8u;
            goto label_157cd8;
        }
    }
    ctx->pc = 0x157CCCu;
    // 0x157ccc: 0xc046272  jal         func_1189C8
    ctx->pc = 0x157CCCu;
    SET_GPR_U32(ctx, 31, 0x157CD4u);
    ctx->pc = 0x157CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157CCCu;
    // 0x157cd0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1189C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189C8u, 0x157CCCu, 0x157CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157CD4u;
label_157cd4:
    // 0x157cd4: 0xae02032c  sw          $v0, 0x32C($s0)
    ctx->pc = 0x157cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 812), GPR_U32(ctx, 2));
label_157cd8:
    // 0x157cd8: 0xc046086  jal         func_118218
    ctx->pc = 0x157CD8u;
    SET_GPR_U32(ctx, 31, 0x157CE0u);
    ctx->pc = 0x157CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157CD8u;
    // 0x157cdc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118218u, 0x157CD8u, 0x157CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157CE0u;
label_157ce0:
    // 0x157ce0: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x157CE0u;
    {
        const bool branch_taken_0x157ce0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x157ce0) {
            ctx->pc = 0x157CE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x157CE0u;
            // 0x157ce4: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x157CFCu;
            goto label_157cfc;
        }
    }
    ctx->pc = 0x157CE8u;
    // 0x157ce8: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x157ce8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x157cec: 0xfa0102f0  sqc2        $vf1, 0x2F0($s0)
    ctx->pc = 0x157cecu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 752), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x157cf0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x157cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x157cf4: 0xae020300  sw          $v0, 0x300($s0)
    ctx->pc = 0x157cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 768), GPR_U32(ctx, 2));
    // 0x157cf8: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x157cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_157cfc:
    // 0x157cfc: 0x1682000e  bne         $s4, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x157CFCu;
    {
        const bool branch_taken_0x157cfc = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x157D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157CFCu;
        // 0x157d00: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157cfc) {
            ctx->pc = 0x157D38u;
            goto label_157d38;
        }
    }
    ctx->pc = 0x157D04u;
    // 0x157d04: 0xc0460e4  jal         func_118390
    ctx->pc = 0x157D04u;
    SET_GPR_U32(ctx, 31, 0x157D0Cu);
    ctx->pc = 0x157D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157D04u;
    // 0x157d08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118390u, 0x157D04u, 0x157D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157D0Cu;
label_157d0c:
    // 0x157d0c: 0x8e03031c  lw          $v1, 0x31C($s0)
    ctx->pc = 0x157d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 796)));
    // 0x157d10: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x157D10u;
    {
        const bool branch_taken_0x157d10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x157D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157D10u;
        // 0x157d14: 0xae020320  sw          $v0, 0x320($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 800), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157d10) {
            ctx->pc = 0x157D2Cu;
            goto label_157d2c;
        }
    }
    ctx->pc = 0x157D18u;
    // 0x157d18: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x157d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x157d1c: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x157D1Cu;
    {
        const bool branch_taken_0x157d1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x157D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157D1Cu;
        // 0x157d20: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157d1c) {
            ctx->pc = 0x157D38u;
            goto label_157d38;
        }
    }
    ctx->pc = 0x157D24u;
    // 0x157d24: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x157D24u;
    {
        const bool branch_taken_0x157d24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157D24u;
        // 0x157d28: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157d24) {
            ctx->pc = 0x157D30u;
            goto label_157d30;
        }
    }
    ctx->pc = 0x157D2Cu;
label_157d2c:
    // 0x157d2c: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x157d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_157d30:
    // 0x157d30: 0xae0202e0  sw          $v0, 0x2E0($s0)
    ctx->pc = 0x157d30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 736), GPR_U32(ctx, 2));
    // 0x157d34: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x157d34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_157d38:
    // 0x157d38: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x157D38u;
    {
        const bool branch_taken_0x157d38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x157d38) {
            ctx->pc = 0x157D3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x157D38u;
            // 0x157d3c: 0x8e220080  lw          $v0, 0x80($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x157D50u;
            goto label_157d50;
        }
    }
    ctx->pc = 0x157D40u;
    // 0x157d40: 0xc0461b0  jal         func_1186C0
    ctx->pc = 0x157D40u;
    SET_GPR_U32(ctx, 31, 0x157D48u);
    ctx->pc = 0x157D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157D40u;
    // 0x157d44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1186C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1186C0u, 0x157D40u, 0x157D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157D48u;
label_157d48:
    // 0x157d48: 0xae020324  sw          $v0, 0x324($s0)
    ctx->pc = 0x157d48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 804), GPR_U32(ctx, 2));
    // 0x157d4c: 0x8e220080  lw          $v0, 0x80($s1)
    ctx->pc = 0x157d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_157d50:
    // 0x157d50: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x157d50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157d54: 0xae020220  sw          $v0, 0x220($s0)
    ctx->pc = 0x157d54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 544), GPR_U32(ctx, 2));
    // 0x157d58: 0x8e230088  lw          $v1, 0x88($s1)
    ctx->pc = 0x157d58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
    // 0x157d5c: 0xc045eee  jal         func_117BB8
    ctx->pc = 0x157D5Cu;
    SET_GPR_U32(ctx, 31, 0x157D64u);
    ctx->pc = 0x157D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157D5Cu;
    // 0x157d60: 0xae030330  sw          $v1, 0x330($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 816), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117BB8u, 0x157D5Cu, 0x157D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157D64u;
label_157d64:
    // 0x157d64: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x157d64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x157d68: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x157d68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157d6c: 0xc042136  jal         func_1084D8
    ctx->pc = 0x157D6Cu;
    SET_GPR_U32(ctx, 31, 0x157D74u);
    ctx->pc = 0x157D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x157D6Cu;
    // 0x157d70: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1084D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1084D8u, 0x157D6Cu, 0x157D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x157D74u;
label_157d74:
    // 0x157d74: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x157d74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x157d78: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x157d78u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x157d7c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x157d7cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x157d80: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x157d80u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x157d84: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x157d84u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x157d88: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x157d88u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x157d8c: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x157d8cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x157d90: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x157d90u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x157d94: 0xdfbe0060  ld          $fp, 0x60($sp)
    ctx->pc = 0x157d94u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x157d98: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x157d98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x157d9c: 0x3e00008  jr          $ra
    ctx->pc = 0x157D9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x157DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x157D9Cu;
        // 0x157da0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x157D9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x157DA4u;
    // 0x157da4: 0x0  nop
    ctx->pc = 0x157da4u;
    // NOP
    ctx->pc = 0x157da8u;
}
