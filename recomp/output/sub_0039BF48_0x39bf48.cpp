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

// Function: sub_0039BF48
// Address: 0x39bf48 - 0x39c060
void sub_0039BF48_0x39bf48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039BF48_0x39bf48");
#endif

    switch (ctx->pc) {
        case 0x39bfb0u: goto label_39bfb0;
        case 0x39bfe8u: goto label_39bfe8;
        case 0x39c02cu: goto label_39c02c;
        case 0x39c040u: goto label_39c040;
        default: break;
    }

    ctx->pc = 0x39bf48u;

    // 0x39bf48: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x39bf48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x39bf4c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x39bf4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x39bf50: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x39bf50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39bf54: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x39bf54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x39bf58: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x39bf58u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39bf5c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x39bf5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x39bf60: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x39bf60u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39bf64: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x39bf64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x39bf68: 0x1600000b  bnez        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x39BF68u;
    {
        const bool branch_taken_0x39bf68 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x39BF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BF68u;
        // 0x39bf6c: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39bf68) {
            ctx->pc = 0x39BF98u;
            goto label_39bf98;
        }
    }
    ctx->pc = 0x39BF70u;
    // 0x39bf70: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x39bf70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x39bf74: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x39bf74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39bf78: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x39bf78u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x39bf7c: 0x2484b498  addiu       $a0, $a0, -0x4B68
    ctx->pc = 0x39bf7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947992));
    // 0x39bf80: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x39bf80u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39bf84: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x39bf84u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x39bf88: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x39bf88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x39bf8c: 0x80ec0fe  j           func_3B03F8
    ctx->pc = 0x39BF8Cu;
    ctx->pc = 0x39BF90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39BF8Cu;
    // 0x39bf90: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B03F8u;
    sub_003B03F8_0x3b03f8(rdram, ctx, runtime); return;
    ctx->pc = 0x39BF94u;
    // 0x39bf94: 0x0  nop
    ctx->pc = 0x39bf94u;
    // NOP
label_39bf98:
    // 0x39bf98: 0x820300ad  lb          $v1, 0xAD($s0)
    ctx->pc = 0x39bf98u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 173)));
    // 0x39bf9c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x39bf9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39bfa0: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x39BFA0u;
    {
        const bool branch_taken_0x39bfa0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x39BFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BFA0u;
        // 0x39bfa4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39bfa0) {
            ctx->pc = 0x39BFC4u;
            goto label_39bfc4;
        }
    }
    ctx->pc = 0x39BFA8u;
    // 0x39bfa8: 0xc0e64aa  jal         func_3992A8
    ctx->pc = 0x39BFA8u;
    SET_GPR_U32(ctx, 31, 0x39BFB0u);
    ctx->pc = 0x39BFACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39BFA8u;
    // 0x39bfac: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3992A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3992A8u, 0x39BFA8u, 0x39BFB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39BFB0u;
label_39bfb0:
    // 0x39bfb0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x39bfb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39bfb4: 0x2402ff80  addiu       $v0, $zero, -0x80
    ctx->pc = 0x39bfb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
    // 0x39bfb8: 0x16220003  bne         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x39BFB8u;
    {
        const bool branch_taken_0x39bfb8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x39BFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BFB8u;
        // 0x39bfbc: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39bfb8) {
            ctx->pc = 0x39BFC8u;
            goto label_39bfc8;
        }
    }
    ctx->pc = 0x39BFC0u;
    // 0x39bfc0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x39bfc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39bfc4:
    // 0x39bfc4: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x39bfc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_39bfc8:
    // 0x39bfc8: 0x8c620c18  lw          $v0, 0xC18($v1)
    ctx->pc = 0x39bfc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3096)));
    // 0x39bfcc: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x39BFCCu;
    {
        const bool branch_taken_0x39bfcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39BFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BFCCu;
        // 0x39bfd0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39bfcc) {
            ctx->pc = 0x39C004u;
            goto label_39c004;
        }
    }
    ctx->pc = 0x39BFD4u;
    // 0x39bfd4: 0x2402ff80  addiu       $v0, $zero, -0x80
    ctx->pc = 0x39bfd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
    // 0x39bfd8: 0x5662000a  bnel        $s3, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x39BFD8u;
    {
        const bool branch_taken_0x39bfd8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x39bfd8) {
            ctx->pc = 0x39BFDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39BFD8u;
            // 0x39bfdc: 0x2713021  addu        $a2, $s3, $s1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39C004u;
            goto label_39c004;
        }
    }
    ctx->pc = 0x39BFE0u;
    // 0x39bfe0: 0xc0e6458  jal         func_399160
    ctx->pc = 0x39BFE0u;
    SET_GPR_U32(ctx, 31, 0x39BFE8u);
    ctx->pc = 0x39BFE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39BFE0u;
    // 0x39bfe4: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399160u, 0x39BFE0u, 0x39BFE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39BFE8u;
label_39bfe8:
    // 0x39bfe8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x39bfe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x39bfec: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x39BFECu;
    {
        const bool branch_taken_0x39bfec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x39bfec) {
            ctx->pc = 0x39BFF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39BFECu;
            // 0x39bff0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39C000u;
            goto label_39c000;
        }
    }
    ctx->pc = 0x39BFF4u;
    // 0x39bff4: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x39bff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x39bff8: 0x2406fff1  addiu       $a2, $zero, -0xF
    ctx->pc = 0x39bff8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967281));
    // 0x39bffc: 0x52300b  movn        $a2, $v0, $s2
    ctx->pc = 0x39bffcu;
    if (GPR_U64(ctx, 18) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
label_39c000:
    // 0x39c000: 0xd13021  addu        $a2, $a2, $s1
    ctx->pc = 0x39c000u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
label_39c004:
    // 0x39c004: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x39c004u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x39c008: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x39c008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x39c00c: 0xa4530042  sh          $s3, 0x42($v0)
    ctx->pc = 0x39c00cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 66), (uint16_t)GPR_U32(ctx, 19));
    // 0x39c010: 0x82030003  lb          $v1, 0x3($s0)
    ctx->pc = 0x39c010u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x39c014: 0x243182a  slt         $v1, $s2, $v1
    ctx->pc = 0x39c014u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x39c018: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x39C018u;
    {
        const bool branch_taken_0x39c018 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x39C01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C018u;
        // 0x39c01c: 0x3c040048  lui         $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c018) {
            ctx->pc = 0x39C038u;
            goto label_39c038;
        }
    }
    ctx->pc = 0x39C020u;
    // 0x39c020: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x39c020u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x39c024: 0xc0e5f56  jal         func_397D58
    ctx->pc = 0x39C024u;
    SET_GPR_U32(ctx, 31, 0x39C02Cu);
    ctx->pc = 0x39C028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39C024u;
    // 0x39c028: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x397D58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397D58u, 0x39C024u, 0x39C02Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39C02Cu;
label_39c02c:
    // 0x39c02c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x39C02Cu;
    {
        const bool branch_taken_0x39c02c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39C030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C02Cu;
        // 0x39c030: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39c02c) {
            ctx->pc = 0x39C044u;
            goto label_39c044;
        }
    }
    ctx->pc = 0x39C034u;
    // 0x39c034: 0x0  nop
    ctx->pc = 0x39c034u;
    // NOP
label_39c038:
    // 0x39c038: 0xc0ec0fe  jal         func_3B03F8
    ctx->pc = 0x39C038u;
    SET_GPR_U32(ctx, 31, 0x39C040u);
    ctx->pc = 0x39C03Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39C038u;
    // 0x39c03c: 0x2484b4c8  addiu       $a0, $a0, -0x4B38 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B03F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B03F8u, 0x39C038u, 0x39C040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39C040u;
label_39c040:
    // 0x39c040: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x39c040u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_39c044:
    // 0x39c044: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x39c044u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x39c048: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x39c048u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39c04c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x39c04cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x39c050: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x39c050u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x39c054: 0x3e00008  jr          $ra
    ctx->pc = 0x39C054u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39C058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39C054u;
        // 0x39c058: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39C054u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39C05Cu;
    // 0x39c05c: 0x0  nop
    ctx->pc = 0x39c05cu;
    // NOP
    ctx->pc = 0x39c060u;
}
