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

// Function: sub_00126B68
// Address: 0x126b68 - 0x126c98
void sub_00126B68_0x126b68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00126B68_0x126b68");
#endif

    switch (ctx->pc) {
        case 0x126bc0u: goto label_126bc0;
        case 0x126c3cu: goto label_126c3c;
        case 0x126c68u: goto label_126c68;
        default: break;
    }

    ctx->pc = 0x126b68u;

    // 0x126b68: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x126b68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x126b6c: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x126b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x126b70: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x126b70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x126b74: 0x30b300ff  andi        $s3, $a1, 0xFF
    ctx->pc = 0x126b74u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x126b78: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x126b78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x126b7c: 0x2622818  mult        $a1, $s3, $v0
    ctx->pc = 0x126b7cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x126b80: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x126b80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x126b84: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x126b84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126b88: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x126b88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x126b8c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x126b8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x126b90: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x126b90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x126b94: 0x2404080d  addiu       $a0, $zero, 0x80D
    ctx->pc = 0x126b94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2061));
    // 0x126b98: 0x2251021  addu        $v0, $s1, $a1
    ctx->pc = 0x126b98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x126b9c: 0x8c430450  lw          $v1, 0x450($v0)
    ctx->pc = 0x126b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1104)));
    // 0x126ba0: 0x1064001b  beq         $v1, $a0, . + 4 + (0x1B << 2)
    ctx->pc = 0x126BA0u;
    {
        const bool branch_taken_0x126ba0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x126BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126BA0u;
        // 0x126ba4: 0xc0a02d  daddu       $s4, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126ba0) {
            ctx->pc = 0x126C10u;
            goto label_126c10;
        }
    }
    ctx->pc = 0x126BA8u;
    // 0x126ba8: 0x262a0448  addiu       $t2, $s1, 0x448
    ctx->pc = 0x126ba8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 17), 1096));
    // 0x126bac: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x126bacu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126bb0: 0x140402d  daddu       $t0, $t2, $zero
    ctx->pc = 0x126bb0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126bb4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x126bb4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126bb8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x126bb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x126bbc: 0x262b0454  addiu       $t3, $s1, 0x454
    ctx->pc = 0x126bbcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 17), 1108));
label_126bc0:
    // 0x126bc0: 0xc91021  addu        $v0, $a2, $t1
    ctx->pc = 0x126bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x126bc4: 0xe91821  addu        $v1, $a3, $t1
    ctx->pc = 0x126bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x126bc8: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x126bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x126bcc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x126bccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x126bd0: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x126bd0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x126bd4: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x126bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x126bd8: 0x24e40001  addiu       $a0, $a3, 0x1
    ctx->pc = 0x126bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x126bdc: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x126bdcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x126be0: 0xa0650000  sb          $a1, 0x0($v1)
    ctx->pc = 0x126be0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x126be4: 0x2cc20002  sltiu       $v0, $a2, 0x2
    ctx->pc = 0x126be4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x126be8: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x126BE8u;
    {
        const bool branch_taken_0x126be8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x126BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126BE8u;
        // 0x126bec: 0x308700ff  andi        $a3, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x126be8) {
            ctx->pc = 0x126BC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_126bc0;
        }
    }
    ctx->pc = 0x126BF0u;
    // 0x126bf0: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x126bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x126bf4: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x126bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x126bf8: 0x2631818  mult        $v1, $s3, $v1
    ctx->pc = 0x126bf8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x126bfc: 0xe31021  addu        $v0, $a3, $v1
    ctx->pc = 0x126bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x126c00: 0x1421021  addu        $v0, $t2, $v0
    ctx->pc = 0x126c00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x126c04: 0x1631821  addu        $v1, $t3, $v1
    ctx->pc = 0x126c04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
    // 0x126c08: 0xa0440000  sb          $a0, 0x0($v0)
    ctx->pc = 0x126c08u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x126c0c: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x126c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_126c10:
    // 0x126c10: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x126c10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x126c14: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x126c14u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
    // 0x126c18: 0x2629018  mult        $s2, $s3, $v0
    ctx->pc = 0x126c18u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
    // 0x126c1c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x126c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x126c20: 0x2321021  addu        $v0, $s1, $s2
    ctx->pc = 0x126c20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x126c24: 0x90500448  lbu         $s0, 0x448($v0)
    ctx->pc = 0x126c24u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1096)));
    // 0x126c28: 0x1203000d  beq         $s0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x126C28u;
    {
        const bool branch_taken_0x126c28 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x126C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126C28u;
        // 0x126c2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126c28) {
            ctx->pc = 0x126C60u;
            goto label_126c60;
        }
    }
    ctx->pc = 0x126C30u;
    // 0x126c30: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x126c30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126c34: 0xc049b3c  jal         func_126CF0
    ctx->pc = 0x126C34u;
    SET_GPR_U32(ctx, 31, 0x126C3Cu);
    ctx->pc = 0x126C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126C34u;
    // 0x126c38: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126CF0u, 0x126C34u, 0x126C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126C3Cu;
label_126c3c:
    // 0x126c3c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x126c3cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126c40: 0x2321021  addu        $v0, $s1, $s2
    ctx->pc = 0x126c40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x126c44: 0x1600000a  bnez        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x126C44u;
    {
        const bool branch_taken_0x126c44 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x126C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126C44u;
        // 0x126c48: 0xac430450  sw          $v1, 0x450($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1104), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126c44) {
            ctx->pc = 0x126C70u;
            goto label_126c70;
        }
    }
    ctx->pc = 0x126C4Cu;
    // 0x126c4c: 0x2402080d  addiu       $v0, $zero, 0x80D
    ctx->pc = 0x126c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2061));
    // 0x126c50: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x126C50u;
    {
        const bool branch_taken_0x126c50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x126C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126C50u;
        // 0x126c54: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126c50) {
            ctx->pc = 0x126C74u;
            goto label_126c74;
        }
    }
    ctx->pc = 0x126C58u;
    // 0x126c58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x126c58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126c5c: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x126c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
label_126c60:
    // 0x126c60: 0xc049abe  jal         func_126AF8
    ctx->pc = 0x126C60u;
    SET_GPR_U32(ctx, 31, 0x126C68u);
    ctx->pc = 0x126C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126C60u;
    // 0x126c64: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126AF8u, 0x126C60u, 0x126C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126C68u;
label_126c68:
    // 0x126c68: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x126C68u;
    {
        const bool branch_taken_0x126c68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126C68u;
        // 0x126c6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126c68) {
            ctx->pc = 0x126C74u;
            goto label_126c74;
        }
    }
    ctx->pc = 0x126C70u;
label_126c70:
    // 0x126c70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x126c70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_126c74:
    // 0x126c74: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x126c74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x126c78: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x126c78u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x126c7c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x126c7cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x126c80: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x126c80u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x126c84: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x126c84u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x126c88: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x126c88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x126c8c: 0x3e00008  jr          $ra
    ctx->pc = 0x126C8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x126C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126C8Cu;
        // 0x126c90: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x126C8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x126C94u;
    // 0x126c94: 0x0  nop
    ctx->pc = 0x126c94u;
    // NOP
    ctx->pc = 0x126c98u;
}
