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

// Function: sub_003A2C10
// Address: 0x3a2c10 - 0x3a2d28
void sub_003A2C10_0x3a2c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A2C10_0x3a2c10");
#endif

    switch (ctx->pc) {
        case 0x3a2c38u: goto label_3a2c38;
        case 0x3a2c54u: goto label_3a2c54;
        case 0x3a2c70u: goto label_3a2c70;
        case 0x3a2c78u: goto label_3a2c78;
        case 0x3a2c88u: goto label_3a2c88;
        case 0x3a2cb8u: goto label_3a2cb8;
        case 0x3a2cd4u: goto label_3a2cd4;
        default: break;
    }

    ctx->pc = 0x3a2c10u;

    // 0x3a2c10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3a2c10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3a2c14: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3a2c14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3a2c18: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3a2c18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a2c1c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3a2c1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3a2c20: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3a2c20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a2c24: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3a2c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3a2c28: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3a2c28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x3a2c2c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3a2c2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3a2c30: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3A2C30u;
    {
        const bool branch_taken_0x3a2c30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A2C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2C30u;
        // 0x3a2c34: 0x3c130041  lui         $s3, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)65 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2c30) {
            ctx->pc = 0x3A2C40u;
            goto label_3a2c40;
        }
    }
    ctx->pc = 0x3A2C38u;
label_3a2c38:
    // 0x3a2c38: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x3a2c38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x3a2c3c: 0x28403  sra         $s0, $v0, 16
    ctx->pc = 0x3a2c3cu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 16));
label_3a2c40:
    // 0x3a2c40: 0x2a0203e8  slti        $v0, $s0, 0x3E8
    ctx->pc = 0x3a2c40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1000) ? 1 : 0);
    // 0x3a2c44: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x3A2C44u;
    {
        const bool branch_taken_0x3a2c44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a2c44) {
            ctx->pc = 0x3A2C48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A2C44u;
            // 0x3a2c48: 0x82320002  lb          $s2, 0x2($s1) (Delay Slot)
            SET_GPR_S32(ctx, 18, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A2C8Cu;
            goto label_3a2c8c;
        }
    }
    ctx->pc = 0x3A2C4Cu;
    // 0x3a2c4c: 0xc0eb26e  jal         func_3AC9B8
    ctx->pc = 0x3A2C4Cu;
    SET_GPR_U32(ctx, 31, 0x3A2C54u);
    ctx->pc = 0x3AC9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AC9B8u, 0x3A2C4Cu, 0x3A2C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A2C54u;
label_3a2c54:
    // 0x3a2c54: 0x26641e04  addiu       $a0, $s3, 0x1E04
    ctx->pc = 0x3a2c54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 7684));
    // 0x3a2c58: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3a2c58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3a2c5c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3a2c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a2c60: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3A2C60u;
    {
        const bool branch_taken_0x3a2c60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3a2c60) {
            ctx->pc = 0x3A2C80u;
            goto label_3a2c80;
        }
    }
    ctx->pc = 0x3A2C68u;
    // 0x3a2c68: 0xc0eb274  jal         func_3AC9D0
    ctx->pc = 0x3A2C68u;
    SET_GPR_U32(ctx, 31, 0x3A2C70u);
    ctx->pc = 0x3AC9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AC9D0u, 0x3A2C68u, 0x3A2C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A2C70u;
label_3a2c70:
    // 0x3a2c70: 0xc0e8aa4  jal         func_3A2A90
    ctx->pc = 0x3A2C70u;
    SET_GPR_U32(ctx, 31, 0x3A2C78u);
    ctx->pc = 0x3A2A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2A90u, 0x3A2C70u, 0x3A2C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A2C78u;
label_3a2c78:
    // 0x3a2c78: 0x1000ffef  b           . + 4 + (-0x11 << 2)
    ctx->pc = 0x3A2C78u;
    {
        const bool branch_taken_0x3a2c78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A2C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2C78u;
        // 0x3a2c7c: 0x26020001  addiu       $v0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2c78) {
            ctx->pc = 0x3A2C38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a2c38;
        }
    }
    ctx->pc = 0x3A2C80u;
label_3a2c80:
    // 0x3a2c80: 0xc0eb274  jal         func_3AC9D0
    ctx->pc = 0x3A2C80u;
    SET_GPR_U32(ctx, 31, 0x3A2C88u);
    ctx->pc = 0x3A2C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A2C80u;
    // 0x3a2c84: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AC9D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AC9D0u, 0x3A2C80u, 0x3A2C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A2C88u;
label_3a2c88:
    // 0x3a2c88: 0x82320002  lb          $s2, 0x2($s1)
    ctx->pc = 0x3a2c88u;
    SET_GPR_S32(ctx, 18, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
label_3a2c8c:
    // 0x3a2c8c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3a2c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3a2c90: 0x5642001b  bnel        $s2, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x3A2C90u;
    {
        const bool branch_taken_0x3a2c90 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x3a2c90) {
            ctx->pc = 0x3A2C94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A2C90u;
            // 0x3a2c94: 0xae601e04  sw          $zero, 0x1E04($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 7684), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A2D00u;
            goto label_3a2d00;
        }
    }
    ctx->pc = 0x3A2C98u;
    // 0x3a2c98: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x3a2c98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x3a2c9c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3a2c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a2ca0: 0x24501dc8  addiu       $s0, $v0, 0x1DC8
    ctx->pc = 0x3a2ca0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 7624));
    // 0x3a2ca4: 0x82030001  lb          $v1, 0x1($s0)
    ctx->pc = 0x3a2ca4u;
    SET_GPR_S32(ctx, 3, (int8_t)FAST_READ8(0x411DC9u));
    // 0x3a2ca8: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A2CA8u;
    {
        const bool branch_taken_0x3a2ca8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x3A2CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2CA8u;
        // 0x3a2cac: 0x92020001  lbu         $v0, 0x1($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2ca8) {
            ctx->pc = 0x3A2CBCu;
            goto label_3a2cbc;
        }
    }
    ctx->pc = 0x3A2CB0u;
    // 0x3a2cb0: 0xc0e8ab0  jal         func_3A2AC0
    ctx->pc = 0x3A2CB0u;
    SET_GPR_U32(ctx, 31, 0x3A2CB8u);
    ctx->pc = 0x3A2CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A2CB0u;
    // 0x3a2cb4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2AC0u, 0x3A2CB0u, 0x3A2CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A2CB8u;
label_3a2cb8:
    // 0x3a2cb8: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x3a2cb8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_3a2cbc:
    // 0x3a2cbc: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x3a2cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x3a2cc0: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x3a2cc0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x3a2cc4: 0x54520004  bnel        $v0, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A2CC4u;
    {
        const bool branch_taken_0x3a2cc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x3a2cc4) {
            ctx->pc = 0x3A2CC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A2CC4u;
            // 0x3a2cc8: 0x82230002  lb          $v1, 0x2($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A2CD8u;
            goto label_3a2cd8;
        }
    }
    ctx->pc = 0x3A2CCCu;
    // 0x3a2ccc: 0xc0e8aba  jal         func_3A2AE8
    ctx->pc = 0x3A2CCCu;
    SET_GPR_U32(ctx, 31, 0x3A2CD4u);
    ctx->pc = 0x3A2CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A2CCCu;
    // 0x3a2cd0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2AE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2AE8u, 0x3A2CCCu, 0x3A2CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A2CD4u;
label_3a2cd4:
    // 0x3a2cd4: 0x82230002  lb          $v1, 0x2($s1)
    ctx->pc = 0x3a2cd4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
label_3a2cd8:
    // 0x3a2cd8: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x3a2cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x3a2cdc: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3A2CDCu;
    {
        const bool branch_taken_0x3a2cdc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3A2CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2CDCu;
        // 0x3a2ce0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2cdc) {
            ctx->pc = 0x3A2CFCu;
            goto label_3a2cfc;
        }
    }
    ctx->pc = 0x3A2CE4u;
    // 0x3a2ce4: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x3a2ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x3a2ce8: 0xa2220002  sb          $v0, 0x2($s1)
    ctx->pc = 0x3a2ce8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x3a2cec: 0x24631e24  addiu       $v1, $v1, 0x1E24
    ctx->pc = 0x3a2cecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7716));
    // 0x3a2cf0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3a2cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x411E24u));
    // 0x3a2cf4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3a2cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3a2cf8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x3a2cf8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x411E24u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x411E24u, _value); } while (0);
label_3a2cfc:
    // 0x3a2cfc: 0xae601e04  sw          $zero, 0x1E04($s3)
    ctx->pc = 0x3a2cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 7684), GPR_U32(ctx, 0));
label_3a2d00:
    // 0x3a2d00: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3a2d00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a2d04: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3a2d04u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3a2d08: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3a2d08u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a2d0c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3a2d0cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3a2d10: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3a2d10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a2d14: 0x3e00008  jr          $ra
    ctx->pc = 0x3A2D14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A2D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2D14u;
        // 0x3a2d18: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A2D14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A2D1Cu;
    // 0x3a2d1c: 0x0  nop
    ctx->pc = 0x3a2d1cu;
    // NOP
    // 0x3a2d20: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3a2d20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3a2d24: 0x0  nop
    ctx->pc = 0x3a2d24u;
    // NOP
    ctx->pc = 0x3a2d28u;
}
