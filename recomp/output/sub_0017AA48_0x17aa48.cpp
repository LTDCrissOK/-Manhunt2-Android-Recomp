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

// Function: sub_0017AA48
// Address: 0x17aa48 - 0x17aaf8
void sub_0017AA48_0x17aa48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017AA48_0x17aa48");
#endif

    switch (ctx->pc) {
        case 0x17aa48u: goto label_17aa48;
        case 0x17aa4cu: goto label_17aa4c;
        case 0x17aa50u: goto label_17aa50;
        case 0x17aa54u: goto label_17aa54;
        case 0x17aa58u: goto label_17aa58;
        case 0x17aa5cu: goto label_17aa5c;
        case 0x17aa60u: goto label_17aa60;
        case 0x17aa64u: goto label_17aa64;
        case 0x17aa68u: goto label_17aa68;
        case 0x17aa6cu: goto label_17aa6c;
        case 0x17aa70u: goto label_17aa70;
        case 0x17aa74u: goto label_17aa74;
        case 0x17aa78u: goto label_17aa78;
        case 0x17aa7cu: goto label_17aa7c;
        case 0x17aa80u: goto label_17aa80;
        case 0x17aa84u: goto label_17aa84;
        case 0x17aa88u: goto label_17aa88;
        case 0x17aa8cu: goto label_17aa8c;
        case 0x17aa90u: goto label_17aa90;
        case 0x17aa94u: goto label_17aa94;
        case 0x17aa98u: goto label_17aa98;
        case 0x17aa9cu: goto label_17aa9c;
        case 0x17aaa0u: goto label_17aaa0;
        case 0x17aaa4u: goto label_17aaa4;
        case 0x17aaa8u: goto label_17aaa8;
        case 0x17aaacu: goto label_17aaac;
        case 0x17aab0u: goto label_17aab0;
        case 0x17aab4u: goto label_17aab4;
        case 0x17aab8u: goto label_17aab8;
        case 0x17aabcu: goto label_17aabc;
        case 0x17aac0u: goto label_17aac0;
        case 0x17aac4u: goto label_17aac4;
        case 0x17aac8u: goto label_17aac8;
        case 0x17aaccu: goto label_17aacc;
        case 0x17aad0u: goto label_17aad0;
        case 0x17aad4u: goto label_17aad4;
        case 0x17aad8u: goto label_17aad8;
        case 0x17aadcu: goto label_17aadc;
        case 0x17aae0u: goto label_17aae0;
        case 0x17aae4u: goto label_17aae4;
        case 0x17aae8u: goto label_17aae8;
        case 0x17aaecu: goto label_17aaec;
        case 0x17aaf0u: goto label_17aaf0;
        case 0x17aaf4u: goto label_17aaf4;
        default: break;
    }

    ctx->pc = 0x17aa48u;

label_17aa48:
    // 0x17aa48: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17aa48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_17aa4c:
    // 0x17aa4c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x17aa4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_17aa50:
    // 0x17aa50: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17aa50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_17aa54:
    // 0x17aa54: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x17aa54u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_17aa58:
    // 0x17aa58: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17aa58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_17aa5c:
    // 0x17aa5c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x17aa5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_17aa60:
    // 0x17aa60: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x17aa60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_17aa64:
    // 0x17aa64: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x17aa64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_17aa68:
    // 0x17aa68: 0x92420530  lbu         $v0, 0x530($s2)
    ctx->pc = 0x17aa68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1328)));
label_17aa6c:
    // 0x17aa6c: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_17aa70:
    if (ctx->pc == 0x17AA70u) {
        ctx->pc = 0x17AA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AA6Cu;
        // 0x17aa70: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17AA74u;
        goto label_17aa74;
    }
    ctx->pc = 0x17AA6Cu;
    {
        const bool branch_taken_0x17aa6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17AA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AA6Cu;
        // 0x17aa70: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17aa6c) {
            ctx->pc = 0x17AAD4u;
            goto label_17aad4;
        }
    }
    ctx->pc = 0x17AA74u;
label_17aa74:
    // 0x17aa74: 0x24140028  addiu       $s4, $zero, 0x28
    ctx->pc = 0x17aa74u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_17aa78:
    // 0x17aa78: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x17aa78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_17aa7c:
    // 0x17aa7c: 0x10000003  b           . + 4 + (0x3 << 2)
label_17aa80:
    if (ctx->pc == 0x17AA80u) {
        ctx->pc = 0x17AA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AA7Cu;
        // 0x17aa80: 0x24130012  addiu       $s3, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17AA84u;
        goto label_17aa84;
    }
    ctx->pc = 0x17AA7Cu;
    {
        const bool branch_taken_0x17aa7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17AA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AA7Cu;
        // 0x17aa80: 0x24130012  addiu       $s3, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17aa7c) {
            ctx->pc = 0x17AA8Cu;
            goto label_17aa8c;
        }
    }
    ctx->pc = 0x17AA84u;
label_17aa84:
    // 0x17aa84: 0x0  nop
    ctx->pc = 0x17aa84u;
    // NOP
label_17aa88:
    // 0x17aa88: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x17aa88u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_17aa8c:
    // 0x17aa8c: 0x2e020014  sltiu       $v0, $s0, 0x14
    ctx->pc = 0x17aa8cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
label_17aa90:
    // 0x17aa90: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_17aa94:
    if (ctx->pc == 0x17AA94u) {
        ctx->pc = 0x17AA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AA90u;
        // 0x17aa94: 0x2141018  mult        $v0, $s0, $s4 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x17AA98u;
        goto label_17aa98;
    }
    ctx->pc = 0x17AA90u;
    {
        const bool branch_taken_0x17aa90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17AA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AA90u;
        // 0x17aa94: 0x2141018  mult        $v0, $s0, $s4 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x17aa90) {
            ctx->pc = 0x17AAD4u;
            goto label_17aad4;
        }
    }
    ctx->pc = 0x17AA98u;
label_17aa98:
    // 0x17aa98: 0x24420210  addiu       $v0, $v0, 0x210
    ctx->pc = 0x17aa98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 528));
label_17aa9c:
    // 0x17aa9c: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x17aa9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_17aaa0:
    // 0x17aaa0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x17aaa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_17aaa4:
    // 0x17aaa4: 0x5073fff8  beql        $v1, $s3, . + 4 + (-0x8 << 2)
label_17aaa8:
    if (ctx->pc == 0x17AAA8u) {
        ctx->pc = 0x17AAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AAA4u;
        // 0x17aaa8: 0x26020001  addiu       $v0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17AAACu;
        goto label_17aaac;
    }
    ctx->pc = 0x17AAA4u;
    {
        const bool branch_taken_0x17aaa4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 19));
        if (branch_taken_0x17aaa4) {
            ctx->pc = 0x17AAA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17AAA4u;
            // 0x17aaa8: 0x26020001  addiu       $v0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17AA88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17aa88;
        }
    }
    ctx->pc = 0x17AAACu;
label_17aaac:
    // 0x17aaac: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x17aaacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_17aab0:
    // 0x17aab0: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x17aab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_17aab4:
    // 0x17aab4: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x17aab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_17aab8:
    // 0x17aab8: 0x40f809  jalr        $v0
label_17aabc:
    if (ctx->pc == 0x17AABCu) {
        ctx->pc = 0x17AAC0u;
        goto label_17aac0;
    }
    ctx->pc = 0x17AAB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17AAC0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17AAB8u, 0x17AAC0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17AAC0u;
label_17aac0:
    // 0x17aac0: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x17aac0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_17aac4:
    // 0x17aac4: 0x92420530  lbu         $v0, 0x530($s2)
    ctx->pc = 0x17aac4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1328)));
label_17aac8:
    // 0x17aac8: 0x307100ff  andi        $s1, $v1, 0xFF
    ctx->pc = 0x17aac8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_17aacc:
    // 0x17aacc: 0x1622ffee  bne         $s1, $v0, . + 4 + (-0x12 << 2)
label_17aad0:
    if (ctx->pc == 0x17AAD0u) {
        ctx->pc = 0x17AAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AACCu;
        // 0x17aad0: 0x26020001  addiu       $v0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17AAD4u;
        goto label_17aad4;
    }
    ctx->pc = 0x17AACCu;
    {
        const bool branch_taken_0x17aacc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x17AAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AACCu;
        // 0x17aad0: 0x26020001  addiu       $v0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17aacc) {
            ctx->pc = 0x17AA88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17aa88;
        }
    }
    ctx->pc = 0x17AAD4u;
label_17aad4:
    // 0x17aad4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17aad4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17aad8:
    // 0x17aad8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17aad8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_17aadc:
    // 0x17aadc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x17aadcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_17aae0:
    // 0x17aae0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x17aae0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_17aae4:
    // 0x17aae4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x17aae4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_17aae8:
    // 0x17aae8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x17aae8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_17aaec:
    // 0x17aaec: 0x3e00008  jr          $ra
label_17aaf0:
    if (ctx->pc == 0x17AAF0u) {
        ctx->pc = 0x17AAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AAECu;
        // 0x17aaf0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17AAF4u;
        goto label_17aaf4;
    }
    ctx->pc = 0x17AAECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17AAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AAECu;
        // 0x17aaf0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17AAECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17AAF4u;
label_17aaf4:
    // 0x17aaf4: 0x0  nop
    ctx->pc = 0x17aaf4u;
    // NOP
    ctx->pc = 0x17aaf8u;
}
