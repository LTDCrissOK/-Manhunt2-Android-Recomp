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

// Function: sub_00200A70
// Address: 0x200a70 - 0x200b60
void sub_00200A70_0x200a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00200A70_0x200a70");
#endif

    switch (ctx->pc) {
        case 0x200b54u: goto label_200b54;
        default: break;
    }

    ctx->pc = 0x200a70u;

    // 0x200a70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x200a70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x200a74: 0x2407007f  addiu       $a3, $zero, 0x7F
    ctx->pc = 0x200a74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x200a78: 0x3c09004a  lui         $t1, 0x4A
    ctx->pc = 0x200a78u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)74 << 16));
    // 0x200a7c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x200a7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x200a80: 0x50e00001  beql        $a3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x200A80u;
    {
        const bool branch_taken_0x200a80 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x200a80) {
            ctx->pc = 0x200A84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x200A80u;
            // 0x200a84: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x200A88u;
            goto label_200a88;
        }
    }
    ctx->pc = 0x200A88u;
label_200a88:
    // 0x200a88: 0x25269c38  addiu       $a2, $t1, -0x63C8
    ctx->pc = 0x200a88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), 4294941752));
    // 0x200a8c: 0x90c80003  lbu         $t0, 0x3($a2)
    ctx->pc = 0x200a8cu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3)));
    // 0x200a90: 0x2402007f  addiu       $v0, $zero, 0x7F
    ctx->pc = 0x200a90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x200a94: 0x90c50001  lbu         $a1, 0x1($a2)
    ctx->pc = 0x200a94u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x200a98: 0x90c20002  lbu         $v0, 0x2($a2)
    ctx->pc = 0x200a98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x200a9c: 0xa82818  mult        $a1, $a1, $t0
    ctx->pc = 0x200a9cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x200aa0: 0x91239c38  lbu         $v1, -0x63C8($t1)
    ctx->pc = 0x200aa0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 4294941752)));
    // 0x200aa4: 0x8c860060  lw          $a2, 0x60($a0)
    ctx->pc = 0x200aa4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x200aa8: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x200aa8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x200aac: 0xa7001b  divu        $zero, $a1, $a3
    ctx->pc = 0x200aacu;
    { uint32_t divisor = GPR_U32(ctx, 7); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
    // 0x200ab0: 0x2812  mflo        $a1
    ctx->pc = 0x200ab0u;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x200ab4: 0x67001b  divu        $zero, $v1, $a3
    ctx->pc = 0x200ab4u;
    { uint32_t divisor = GPR_U32(ctx, 7); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x200ab8: 0xa6102a  slt         $v0, $a1, $a2
    ctx->pc = 0x200ab8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x200abc: 0x3812  mflo        $a3
    ctx->pc = 0x200abcu;
    SET_GPR_U64(ctx, 7, ctx->lo);
    // 0x200ac0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x200AC0u;
    {
        const bool branch_taken_0x200ac0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x200AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200AC0u;
        // 0x200ac4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200ac0) {
            ctx->pc = 0x200AD8u;
            goto label_200ad8;
        }
    }
    ctx->pc = 0x200AC8u;
    // 0x200ac8: 0x24c2fffb  addiu       $v0, $a2, -0x5
    ctx->pc = 0x200ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967291));
    // 0x200acc: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x200accu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x200ad0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x200AD0u;
    {
        const bool branch_taken_0x200ad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x200AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200AD0u;
        // 0x200ad4: 0xa2182a  slt         $v1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x200ad0) {
            ctx->pc = 0x200AECu;
            goto label_200aec;
        }
    }
    ctx->pc = 0x200AD8u;
label_200ad8:
    // 0x200ad8: 0xc5102a  slt         $v0, $a2, $a1
    ctx->pc = 0x200ad8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x200adc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x200ADCu;
    {
        const bool branch_taken_0x200adc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x200AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200ADCu;
        // 0x200ae0: 0x24c20005  addiu       $v0, $a2, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200adc) {
            ctx->pc = 0x200AF4u;
            goto label_200af4;
        }
    }
    ctx->pc = 0x200AE4u;
    // 0x200ae4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x200ae4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x200ae8: 0x45182a  slt         $v1, $v0, $a1
    ctx->pc = 0x200ae8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_200aec:
    // 0x200aec: 0xa3100a  movz        $v0, $a1, $v1
    ctx->pc = 0x200aecu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x200af0: 0xac820060  sw          $v0, 0x60($a0)
    ctx->pc = 0x200af0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 2));
label_200af4:
    // 0x200af4: 0x8c830064  lw          $v1, 0x64($a0)
    ctx->pc = 0x200af4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
    // 0x200af8: 0xe3102a  slt         $v0, $a3, $v1
    ctx->pc = 0x200af8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x200afc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x200AFCu;
    {
        const bool branch_taken_0x200afc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x200B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200AFCu;
        // 0x200b00: 0x2462fffb  addiu       $v0, $v1, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967291));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200afc) {
            ctx->pc = 0x200B10u;
            goto label_200b10;
        }
    }
    ctx->pc = 0x200B04u;
    // 0x200b04: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x200b04u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x200b08: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x200B08u;
    {
        const bool branch_taken_0x200b08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x200B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200B08u;
        // 0x200b0c: 0xe2182a  slt         $v1, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x200b08) {
            ctx->pc = 0x200B24u;
            goto label_200b24;
        }
    }
    ctx->pc = 0x200B10u;
label_200b10:
    // 0x200b10: 0x67102a  slt         $v0, $v1, $a3
    ctx->pc = 0x200b10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x200b14: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x200B14u;
    {
        const bool branch_taken_0x200b14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x200B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200B14u;
        // 0x200b18: 0x24620005  addiu       $v0, $v1, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200b14) {
            ctx->pc = 0x200B2Cu;
            goto label_200b2c;
        }
    }
    ctx->pc = 0x200B1Cu;
    // 0x200b1c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x200b1cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x200b20: 0x47182a  slt         $v1, $v0, $a3
    ctx->pc = 0x200b20u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
label_200b24:
    // 0x200b24: 0xe3100a  movz        $v0, $a3, $v1
    ctx->pc = 0x200b24u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 7));
    // 0x200b28: 0xac820064  sw          $v0, 0x64($a0)
    ctx->pc = 0x200b28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 100), GPR_U32(ctx, 2));
label_200b2c:
    // 0x200b2c: 0x15000007  bnez        $t0, . + 4 + (0x7 << 2)
    ctx->pc = 0x200B2Cu;
    {
        const bool branch_taken_0x200b2c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x200b2c) {
            ctx->pc = 0x200B4Cu;
            goto label_200b4c;
        }
    }
    ctx->pc = 0x200B34u;
    // 0x200b34: 0x8c820070  lw          $v0, 0x70($a0)
    ctx->pc = 0x200b34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
    // 0x200b38: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x200B38u;
    {
        const bool branch_taken_0x200b38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x200b38) {
            ctx->pc = 0x200B4Cu;
            goto label_200b4c;
        }
    }
    ctx->pc = 0x200B40u;
    // 0x200b40: 0x90820051  lbu         $v0, 0x51($a0)
    ctx->pc = 0x200b40u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 81)));
    // 0x200b44: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x200B44u;
    {
        const bool branch_taken_0x200b44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x200B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200B44u;
        // 0x200b48: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200b44) {
            ctx->pc = 0x200B58u;
            goto label_200b58;
        }
    }
    ctx->pc = 0x200B4Cu;
label_200b4c:
    // 0x200b4c: 0xc07fc94  jal         func_1FF250
    ctx->pc = 0x200B4Cu;
    SET_GPR_U32(ctx, 31, 0x200B54u);
    ctx->pc = 0x200B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200B4Cu;
    // 0x200b50: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF250u, 0x200B4Cu, 0x200B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x200B54u;
label_200b54:
    // 0x200b54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x200b54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_200b58:
    // 0x200b58: 0x3e00008  jr          $ra
    ctx->pc = 0x200B58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x200B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200B58u;
        // 0x200b5c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x200B58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x200B60u;
}
