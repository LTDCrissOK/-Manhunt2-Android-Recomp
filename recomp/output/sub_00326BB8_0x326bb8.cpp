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

// Function: sub_00326BB8
// Address: 0x326bb8 - 0x326cb8
void sub_00326BB8_0x326bb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00326BB8_0x326bb8");
#endif

    switch (ctx->pc) {
        case 0x326bf0u: goto label_326bf0;
        case 0x326c28u: goto label_326c28;
        case 0x326c38u: goto label_326c38;
        default: break;
    }

    ctx->pc = 0x326bb8u;

    // 0x326bb8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x326bb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x326bbc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x326bbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x326bc0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x326bc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x326bc4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x326bc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326bc8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x326bc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x326bcc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x326bccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326bd0: 0x92220004  lbu         $v0, 0x4($s1)
    ctx->pc = 0x326bd0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x326bd4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x326BD4u;
    {
        const bool branch_taken_0x326bd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x326BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326BD4u;
        // 0x326bd8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326bd4) {
            ctx->pc = 0x326BE0u;
            goto label_326be0;
        }
    }
    ctx->pc = 0x326BDCu;
    // 0x326bdc: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x326bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_326be0:
    // 0x326be0: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x326BE0u;
    {
        const bool branch_taken_0x326be0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x326BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326BE0u;
        // 0x326be4: 0x24820008  addiu       $v0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326be0) {
            ctx->pc = 0x326BF0u;
            goto label_326bf0;
        }
    }
    ctx->pc = 0x326BE8u;
    // 0x326be8: 0xc0c51ee  jal         func_3147B8
    ctx->pc = 0x326BE8u;
    SET_GPR_U32(ctx, 31, 0x326BF0u);
    ctx->pc = 0x326BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326BE8u;
    // 0x326bec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3147B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3147B8u, 0x326BE8u, 0x326BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326BF0u;
label_326bf0:
    // 0x326bf0: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x326BF0u;
    {
        const bool branch_taken_0x326bf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x326bf0) {
            ctx->pc = 0x326C20u;
            goto label_326c20;
        }
    }
    ctx->pc = 0x326BF8u;
    // 0x326bf8: 0x8603000a  lh          $v1, 0xA($s0)
    ctx->pc = 0x326bf8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x326bfc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x326bfcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326c00: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x326c00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x326c04: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x326c04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x326c08: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x326c08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x326c0c: 0xa4600000  sh          $zero, 0x0($v1)
    ctx->pc = 0x326c0cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x326c10: 0x9604000a  lhu         $a0, 0xA($s0)
    ctx->pc = 0x326c10u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x326c14: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x326c14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x326c18: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x326C18u;
    {
        const bool branch_taken_0x326c18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326C18u;
        // 0x326c1c: 0xa604000a  sh          $a0, 0xA($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326c18) {
            ctx->pc = 0x326CA0u;
            goto label_326ca0;
        }
    }
    ctx->pc = 0x326C20u;
label_326c20:
    // 0x326c20: 0xc0b6750  jal         func_2D9D40
    ctx->pc = 0x326C20u;
    SET_GPR_U32(ctx, 31, 0x326C28u);
    ctx->pc = 0x326C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326C20u;
    // 0x326c24: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9D40u, 0x326C20u, 0x326C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326C28u;
label_326c28:
    // 0x326c28: 0x3c04005a  lui         $a0, 0x5A
    ctx->pc = 0x326c28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)90 << 16));
    // 0x326c2c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x326c2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326c30: 0xc0c3612  jal         func_30D848
    ctx->pc = 0x326C30u;
    SET_GPR_U32(ctx, 31, 0x326C38u);
    ctx->pc = 0x326C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326C30u;
    // 0x326c34: 0x24847ee0  addiu       $a0, $a0, 0x7EE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30D848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30D848u, 0x326C30u, 0x326C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326C38u;
label_326c38:
    // 0x326c38: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x326c38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326c3c: 0x4a0000c  bltz        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x326C3Cu;
    {
        const bool branch_taken_0x326c3c = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x326C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326C3Cu;
        // 0x326c40: 0x3c040040  lui         $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326c3c) {
            ctx->pc = 0x326C70u;
            goto label_326c70;
        }
    }
    ctx->pc = 0x326C44u;
    // 0x326c44: 0x8602000a  lh          $v0, 0xA($s0)
    ctx->pc = 0x326c44u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x326c48: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x326c48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x326c4c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x326c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x326c50: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x326c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x326c54: 0xa4450000  sh          $a1, 0x0($v0)
    ctx->pc = 0x326c54u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x326c58: 0x9083bba8  lbu         $v1, -0x4458($a0)
    ctx->pc = 0x326c58u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294949800)));
    // 0x326c5c: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x326C5Cu;
    {
        const bool branch_taken_0x326c5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x326C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326C5Cu;
        // 0x326c60: 0x3c02004c  lui         $v0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326c5c) {
            ctx->pc = 0x326C90u;
            goto label_326c90;
        }
    }
    ctx->pc = 0x326C64u;
    // 0x326c64: 0x8c43f400  lw          $v1, -0xC00($v0)
    ctx->pc = 0x326c64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294964224)));
    // 0x326c68: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x326C68u;
    {
        const bool branch_taken_0x326c68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326C68u;
        // 0x326c6c: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326c68) {
            ctx->pc = 0x326C90u;
            goto label_326c90;
        }
    }
    ctx->pc = 0x326C70u;
label_326c70:
    // 0x326c70: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x326c70u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x326c74: 0x8603000a  lh          $v1, 0xA($s0)
    ctx->pc = 0x326c74u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x326c78: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x326c78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x326c7c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x326c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x326c80: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x326c80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x326c84: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x326c84u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x326c88: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x326c88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x326c8c: 0xa4600000  sh          $zero, 0x0($v1)
    ctx->pc = 0x326c8cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 0));
label_326c90:
    // 0x326c90: 0x9603000a  lhu         $v1, 0xA($s0)
    ctx->pc = 0x326c90u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x326c94: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x326c94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326c98: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x326c98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x326c9c: 0xa603000a  sh          $v1, 0xA($s0)
    ctx->pc = 0x326c9cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 3));
label_326ca0:
    // 0x326ca0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x326ca0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x326ca4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x326ca4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x326ca8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x326ca8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x326cac: 0x3e00008  jr          $ra
    ctx->pc = 0x326CACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x326CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326CACu;
        // 0x326cb0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x326CACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x326CB4u;
    // 0x326cb4: 0x0  nop
    ctx->pc = 0x326cb4u;
    // NOP
    ctx->pc = 0x326cb8u;
}
