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

// Function: sub_003A0A48
// Address: 0x3a0a48 - 0x3a0b40
void sub_003A0A48_0x3a0a48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A0A48_0x3a0a48");
#endif

    switch (ctx->pc) {
        case 0x3a0a88u: goto label_3a0a88;
        case 0x3a0ad8u: goto label_3a0ad8;
        case 0x3a0af0u: goto label_3a0af0;
        default: break;
    }

    ctx->pc = 0x3a0a48u;

    // 0x3a0a48: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3a0a48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3a0a4c: 0x3c070041  lui         $a3, 0x41
    ctx->pc = 0x3a0a4cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65 << 16));
    // 0x3a0a50: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3a0a50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3a0a54: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3a0a54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a0a58: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3a0a58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3a0a5c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3a0a5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a0a60: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3a0a60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x3a0a64: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x3a0a64u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a0a68: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3a0a68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3a0a6c: 0x24e3b7f8  addiu       $v1, $a3, -0x4808
    ctx->pc = 0x3a0a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294948856));
    // 0x3a0a70: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3a0a70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3a0a74: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x3a0a74u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x40B7F8u));
    // 0x3a0a78: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x3A0A78u;
    {
        const bool branch_taken_0x3a0a78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A0A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0A78u;
        // 0x3a0a7c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0a78) {
            ctx->pc = 0x3A0AACu;
            goto label_3a0aac;
        }
    }
    ctx->pc = 0x3A0A80u;
    // 0x3a0a80: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3a0a80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3a0a84: 0x0  nop
    ctx->pc = 0x3a0a84u;
    // NOP
label_3a0a88:
    // 0x3a0a88: 0x28a20004  slti        $v0, $a1, 0x4
    ctx->pc = 0x3a0a88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x3a0a8c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3A0A8Cu;
    {
        const bool branch_taken_0x3a0a8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A0A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0A8Cu;
        // 0x3a0a90: 0x24631964  addiu       $v1, $v1, 0x1964 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6500));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0a8c) {
            ctx->pc = 0x3A0AACu;
            goto label_3a0aac;
        }
    }
    ctx->pc = 0x3A0A94u;
    // 0x3a0a94: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x3a0a94u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3a0a98: 0x0  nop
    ctx->pc = 0x3a0a98u;
    // NOP
    // 0x3a0a9c: 0x0  nop
    ctx->pc = 0x3a0a9cu;
    // NOP
    // 0x3a0aa0: 0x0  nop
    ctx->pc = 0x3a0aa0u;
    // NOP
    // 0x3a0aa4: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x3A0AA4u;
    {
        const bool branch_taken_0x3a0aa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a0aa4) {
            ctx->pc = 0x3A0AA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A0AA4u;
            // 0x3a0aa8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A0A88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a0a88;
        }
    }
    ctx->pc = 0x3A0AACu;
label_3a0aac:
    // 0x3a0aac: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3a0aacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3a0ab0: 0x10a3001c  beq         $a1, $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x3A0AB0u;
    {
        const bool branch_taken_0x3a0ab0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x3A0AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0AB0u;
        // 0x3a0ab4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0ab0) {
            ctx->pc = 0x3A0B24u;
            goto label_3a0b24;
        }
    }
    ctx->pc = 0x3A0AB8u;
    // 0x3a0ab8: 0x24021964  addiu       $v0, $zero, 0x1964
    ctx->pc = 0x3a0ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6500));
    // 0x3a0abc: 0x24e3b7f8  addiu       $v1, $a3, -0x4808
    ctx->pc = 0x3a0abcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294948856));
    // 0x3a0ac0: 0xa21018  mult        $v0, $a1, $v0
    ctx->pc = 0x3a0ac0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3a0ac4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3a0ac4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a0ac8: 0x24061964  addiu       $a2, $zero, 0x1964
    ctx->pc = 0x3a0ac8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6500));
    // 0x3a0acc: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x3a0accu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3a0ad0: 0xc0efab3  jal         func_3BEACC
    ctx->pc = 0x3A0AD0u;
    SET_GPR_U32(ctx, 31, 0x3A0AD8u);
    ctx->pc = 0x3A0AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A0AD0u;
    // 0x3a0ad4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x3A0AD0u, 0x3A0AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0AD8u;
label_3a0ad8:
    // 0x3a0ad8: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x3a0ad8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a0adc: 0xae12001c  sw          $s2, 0x1C($s0)
    ctx->pc = 0x3a0adcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 18));
    // 0x3a0ae0: 0x1a20000a  blez        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x3A0AE0u;
    {
        const bool branch_taken_0x3a0ae0 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x3A0AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0AE0u;
        // 0x3a0ae4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0ae0) {
            ctx->pc = 0x3A0B0Cu;
            goto label_3a0b0c;
        }
    }
    ctx->pc = 0x3A0AE8u;
    // 0x3a0ae8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3a0ae8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a0aec: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x3a0aecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_3a0af0:
    // 0x3a0af0: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x3a0af0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3a0af4: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x3a0af4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x3a0af8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3a0af8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3a0afc: 0xb1102a  slt         $v0, $a1, $s1
    ctx->pc = 0x3a0afcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x3a0b00: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x3a0b00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x3a0b04: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3A0B04u;
    {
        const bool branch_taken_0x3a0b04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A0B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0B04u;
        // 0x3a0b08: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0b04) {
            ctx->pc = 0x3A0AF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a0af0;
        }
    }
    ctx->pc = 0x3A0B0Cu;
label_3a0b0c:
    // 0x3a0b0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3a0b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a0b10: 0xa2110002  sb          $s1, 0x2($s0)
    ctx->pc = 0x3a0b10u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 17));
    // 0x3a0b14: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x3a0b14u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a0b18: 0xa2000004  sb          $zero, 0x4($s0)
    ctx->pc = 0x3a0b18u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a0b1c: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x3a0b1cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3a0b20: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3a0b20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3a0b24:
    // 0x3a0b24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3a0b24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a0b28: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3a0b28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3a0b2c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3a0b2cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a0b30: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3a0b30u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3a0b34: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3a0b34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a0b38: 0x3e00008  jr          $ra
    ctx->pc = 0x3A0B38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A0B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0B38u;
        // 0x3a0b3c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A0B38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A0B40u;
}
