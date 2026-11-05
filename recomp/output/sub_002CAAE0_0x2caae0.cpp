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

// Function: sub_002CAAE0
// Address: 0x2caae0 - 0x2cabc0
void sub_002CAAE0_0x2caae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CAAE0_0x2caae0");
#endif

    switch (ctx->pc) {
        case 0x2cab0cu: goto label_2cab0c;
        case 0x2cab3cu: goto label_2cab3c;
        case 0x2cab50u: goto label_2cab50;
        default: break;
    }

    ctx->pc = 0x2caae0u;

    // 0x2caae0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2caae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2caae4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2caae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2caae8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2caae8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2caaec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2caaecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2caaf0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2caaf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2caaf4: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x2caaf4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2caaf8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2caaf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2caafc: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x2caafcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cab00: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2cab00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2cab04: 0xc0b2b22  jal         func_2CAC88
    ctx->pc = 0x2CAB04u;
    SET_GPR_U32(ctx, 31, 0x2CAB0Cu);
    ctx->pc = 0x2CAB08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CAB04u;
    // 0x2cab08: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CAC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CAC88u, 0x2CAB04u, 0x2CAB0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CAB0Cu;
label_2cab0c:
    // 0x2cab0c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2cab0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cab10: 0xa2300011  sb          $s0, 0x11($s1)
    ctx->pc = 0x2cab10u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 17), (uint8_t)GPR_U32(ctx, 16));
    // 0x2cab14: 0x12102b  sltu        $v0, $zero, $s2
    ctx->pc = 0x2cab14u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x2cab18: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x2cab18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x2cab1c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2cab1cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cab20: 0xae330004  sw          $s3, 0x4($s1)
    ctx->pc = 0x2cab20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 19));
    // 0x2cab24: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CAB24u;
    {
        const bool branch_taken_0x2cab24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CAB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAB24u;
        // 0x2cab28: 0xa2220010  sb          $v0, 0x10($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 16), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cab24) {
            ctx->pc = 0x2CAB34u;
            goto label_2cab34;
        }
    }
    ctx->pc = 0x2CAB2Cu;
    // 0x2cab2c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2CAB2Cu;
    {
        const bool branch_taken_0x2cab2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CAB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAB2Cu;
        // 0x2cab30: 0xae320008  sw          $s2, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cab2c) {
            ctx->pc = 0x2CAB40u;
            goto label_2cab40;
        }
    }
    ctx->pc = 0x2CAB34u;
label_2cab34:
    // 0x2cab34: 0xc0f52a8  jal         func_3D4AA0
    ctx->pc = 0x2CAB34u;
    SET_GPR_U32(ctx, 31, 0x2CAB3Cu);
    ctx->pc = 0x2CAB38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CAB34u;
    // 0x2cab38: 0x932018  mult        $a0, $a0, $s3 (Delay Slot)
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x2CAB34u, 0x2CAB3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CAB3Cu;
label_2cab3c:
    // 0x2cab3c: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x2cab3cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_2cab40:
    // 0x2cab40: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x2cab40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2cab44: 0x18600011  blez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x2CAB44u;
    {
        const bool branch_taken_0x2cab44 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2CAB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAB44u;
        // 0x2cab48: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cab44) {
            ctx->pc = 0x2CAB8Cu;
            goto label_2cab8c;
        }
    }
    ctx->pc = 0x2CAB4Cu;
    // 0x2cab4c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2cab4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2cab50:
    // 0x2cab50: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2cab50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2cab54: 0xe31826  xor         $v1, $a3, $v1
    ctx->pc = 0x2cab54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) ^ GPR_U64(ctx, 3));
    // 0x2cab58: 0x24e50001  addiu       $a1, $a3, 0x1
    ctx->pc = 0x2cab58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2cab5c: 0xe23018  mult        $a2, $a3, $v0
    ctx->pc = 0x2cab5cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x2cab60: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x2cab60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2cab64: 0xa23818  mult        $a3, $a1, $v0
    ctx->pc = 0x2cab64u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x2cab68: 0xe41021  addu        $v0, $a3, $a0
    ctx->pc = 0x2cab68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x2cab6c: 0x3100a  movz        $v0, $zero, $v1
    ctx->pc = 0x2cab6cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x2cab70: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x2cab70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x2cab74: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2cab74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x2cab78: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2cab78u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cab7c: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x2cab7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2cab80: 0xe3102a  slt         $v0, $a3, $v1
    ctx->pc = 0x2cab80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2cab84: 0x5440fff2  bnel        $v0, $zero, . + 4 + (-0xE << 2)
    ctx->pc = 0x2CAB84u;
    {
        const bool branch_taken_0x2cab84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cab84) {
            ctx->pc = 0x2CAB88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CAB84u;
            // 0x2cab88: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CAB50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cab50;
        }
    }
    ctx->pc = 0x2CAB8Cu;
label_2cab8c:
    // 0x2cab8c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2cab8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2cab90: 0x58400003  blezl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CAB90u;
    {
        const bool branch_taken_0x2cab90 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2cab90) {
            ctx->pc = 0x2CAB94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CAB90u;
            // 0x2cab94: 0xae20000c  sw          $zero, 0xC($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CABA0u;
            goto label_2caba0;
        }
    }
    ctx->pc = 0x2CAB98u;
    // 0x2cab98: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x2cab98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2cab9c: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x2cab9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_2caba0:
    // 0x2caba0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2caba0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2caba4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2caba4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2caba8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2caba8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cabac: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2cabacu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2cabb0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2cabb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cabb4: 0x3e00008  jr          $ra
    ctx->pc = 0x2CABB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CABB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CABB4u;
        // 0x2cabb8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CABB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CABBCu;
    // 0x2cabbc: 0x0  nop
    ctx->pc = 0x2cabbcu;
    // NOP
    ctx->pc = 0x2cabc0u;
}
