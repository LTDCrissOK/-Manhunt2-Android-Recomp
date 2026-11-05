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

// Function: sub_0027E068
// Address: 0x27e068 - 0x27e178
void sub_0027E068_0x27e068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027E068_0x27e068");
#endif

    switch (ctx->pc) {
        case 0x27e098u: goto label_27e098;
        case 0x27e12cu: goto label_27e12c;
        case 0x27e138u: goto label_27e138;
        case 0x27e140u: goto label_27e140;
        case 0x27e150u: goto label_27e150;
        case 0x27e15cu: goto label_27e15c;
        default: break;
    }

    ctx->pc = 0x27e068u;

    // 0x27e068: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x27e068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x27e06c: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x27e06cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x27e070: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x27e070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x27e074: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x27e074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x27e078: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x27e078u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e07c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x27e07cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x27e080: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x27e080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x27e084: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x27e084u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x27e088: 0x10620034  beq         $v1, $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x27E088u;
    {
        const bool branch_taken_0x27e088 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x27E08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E088u;
        // 0x27e08c: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e088) {
            ctx->pc = 0x27E15Cu;
            goto label_27e15c;
        }
    }
    ctx->pc = 0x27E090u;
    // 0x27e090: 0xc0a0c40  jal         func_283100
    ctx->pc = 0x27E090u;
    SET_GPR_U32(ctx, 31, 0x27E098u);
    ctx->pc = 0x283100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x283100u, 0x27E090u, 0x27E098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E098u;
label_27e098:
    // 0x27e098: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x27e098u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e09c: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x27e09cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x27e0a0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x27e0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x27e0a4: 0x2484b2e0  addiu       $a0, $a0, -0x4D20
    ctx->pc = 0x27e0a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947552));
    // 0x27e0a8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x27e0a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e0ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x27e0acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e0b0: 0x2442aff0  addiu       $v0, $v0, -0x5010
    ctx->pc = 0x27e0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946800));
    // 0x27e0b4: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x27e0b4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6BB00Cu));
    // 0x27e0b8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x27e0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x27e0bc: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x27e0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x27e0c0: 0x8c630048  lw          $v1, 0x48($v1)
    ctx->pc = 0x27e0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x27e0c4: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x27E0C4u;
    {
        const bool branch_taken_0x27e0c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x27E0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E0C4u;
        // 0x27e0c8: 0xac830004  sw          $v1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e0c4) {
            ctx->pc = 0x27E0D8u;
            goto label_27e0d8;
        }
    }
    ctx->pc = 0x27E0CCu;
    // 0x27e0cc: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x27e0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x27e0d0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x27E0D0u;
    {
        const bool branch_taken_0x27e0d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E0D0u;
        // 0x27e0d4: 0x8c45f434  lw          $a1, -0xBCC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294964276)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e0d0) {
            ctx->pc = 0x27E110u;
            goto label_27e110;
        }
    }
    ctx->pc = 0x27E0D8u;
label_27e0d8:
    // 0x27e0d8: 0x14720004  bne         $v1, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x27E0D8u;
    {
        const bool branch_taken_0x27e0d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 18));
        ctx->pc = 0x27E0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E0D8u;
        // 0x27e0dc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e0d8) {
            ctx->pc = 0x27E0ECu;
            goto label_27e0ec;
        }
    }
    ctx->pc = 0x27E0E0u;
    // 0x27e0e0: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x27e0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x27e0e4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x27E0E4u;
    {
        const bool branch_taken_0x27e0e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E0E4u;
        // 0x27e0e8: 0x8c45f438  lw          $a1, -0xBC8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294964280)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e0e4) {
            ctx->pc = 0x27E110u;
            goto label_27e110;
        }
    }
    ctx->pc = 0x27E0ECu;
label_27e0ec:
    // 0x27e0ec: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27E0ECu;
    {
        const bool branch_taken_0x27e0ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x27E0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E0ECu;
        // 0x27e0f0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e0ec) {
            ctx->pc = 0x27E100u;
            goto label_27e100;
        }
    }
    ctx->pc = 0x27E0F4u;
    // 0x27e0f4: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x27e0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x27e0f8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x27E0F8u;
    {
        const bool branch_taken_0x27e0f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E0F8u;
        // 0x27e0fc: 0x8c45f43c  lw          $a1, -0xBC4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294964284)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e0f8) {
            ctx->pc = 0x27E110u;
            goto label_27e110;
        }
    }
    ctx->pc = 0x27E100u;
label_27e100:
    // 0x27e100: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27E100u;
    {
        const bool branch_taken_0x27e100 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x27E104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E100u;
        // 0x27e104: 0x8cc2aff0  lw          $v0, -0x5010($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294946800)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e100) {
            ctx->pc = 0x27E114u;
            goto label_27e114;
        }
    }
    ctx->pc = 0x27E108u;
    // 0x27e108: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x27e108u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x27e10c: 0x8c45f440  lw          $a1, -0xBC0($v0)
    ctx->pc = 0x27e10cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x4BF440u));
label_27e110:
    // 0x27e110: 0x8cc2aff0  lw          $v0, -0x5010($a2)
    ctx->pc = 0x27e110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294946800)));
label_27e114:
    // 0x27e114: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x27E114u;
    {
        const bool branch_taken_0x27e114 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27e114) {
            ctx->pc = 0x27E148u;
            goto label_27e148;
        }
    }
    ctx->pc = 0x27E11Cu;
    // 0x27e11c: 0x50a00010  beql        $a1, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x27E11Cu;
    {
        const bool branch_taken_0x27e11c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x27e11c) {
            ctx->pc = 0x27E120u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27E11Cu;
            // 0x27e120: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27E160u;
            goto label_27e160;
        }
    }
    ctx->pc = 0x27E124u;
    // 0x27e124: 0xc0da81e  jal         func_36A078
    ctx->pc = 0x27E124u;
    SET_GPR_U32(ctx, 31, 0x27E12Cu);
    ctx->pc = 0x27E128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E124u;
    // 0x27e128: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A078u, 0x27E124u, 0x27E12Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E12Cu;
label_27e12c:
    // 0x27e12c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27e12cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e130: 0xc09f85e  jal         func_27E178
    ctx->pc = 0x27E130u;
    SET_GPR_U32(ctx, 31, 0x27E138u);
    ctx->pc = 0x27E134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E130u;
    // 0x27e134: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27E178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27E178u, 0x27E130u, 0x27E138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E138u;
label_27e138:
    // 0x27e138: 0xc0da828  jal         func_36A0A0
    ctx->pc = 0x27E138u;
    SET_GPR_U32(ctx, 31, 0x27E140u);
    ctx->pc = 0x36A0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A0A0u, 0x27E138u, 0x27E140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E140u;
label_27e140:
    // 0x27e140: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x27E140u;
    {
        const bool branch_taken_0x27e140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27E144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E140u;
        // 0x27e144: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27e140) {
            ctx->pc = 0x27E160u;
            goto label_27e160;
        }
    }
    ctx->pc = 0x27E148u;
label_27e148:
    // 0x27e148: 0xc0b38dc  jal         func_2CE370
    ctx->pc = 0x27E148u;
    SET_GPR_U32(ctx, 31, 0x27E150u);
    ctx->pc = 0x27E14Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E148u;
    // 0x27e14c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CE370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CE370u, 0x27E148u, 0x27E150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E150u;
label_27e150:
    // 0x27e150: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27e150u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e154: 0xc09f85e  jal         func_27E178
    ctx->pc = 0x27E154u;
    SET_GPR_U32(ctx, 31, 0x27E15Cu);
    ctx->pc = 0x27E158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E154u;
    // 0x27e158: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27E178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27E178u, 0x27E154u, 0x27E15Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E15Cu;
label_27e15c:
    // 0x27e15c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x27e15cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_27e160:
    // 0x27e160: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x27e160u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x27e164: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x27e164u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27e168: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x27e168u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x27e16c: 0x3e00008  jr          $ra
    ctx->pc = 0x27E16Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27E170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E16Cu;
        // 0x27e170: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27E16Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27E174u;
    // 0x27e174: 0x0  nop
    ctx->pc = 0x27e174u;
    // NOP
    ctx->pc = 0x27e178u;
}
