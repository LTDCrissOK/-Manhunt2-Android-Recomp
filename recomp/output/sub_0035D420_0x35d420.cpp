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

// Function: sub_0035D420
// Address: 0x35d420 - 0x35d530
void sub_0035D420_0x35d420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035D420_0x35d420");
#endif

    switch (ctx->pc) {
        case 0x35d470u: goto label_35d470;
        case 0x35d478u: goto label_35d478;
        case 0x35d484u: goto label_35d484;
        case 0x35d49cu: goto label_35d49c;
        case 0x35d4bcu: goto label_35d4bc;
        case 0x35d4d4u: goto label_35d4d4;
        case 0x35d4ecu: goto label_35d4ec;
        default: break;
    }

    ctx->pc = 0x35d420u;

    // 0x35d420: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x35d420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x35d424: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x35d424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x35d428: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x35d428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x35d42c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x35d42cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d430: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x35d430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x35d434: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x35d434u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d438: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x35d438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x35d43c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x35d43cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d440: 0x12400034  beqz        $s2, . + 4 + (0x34 << 2)
    ctx->pc = 0x35D440u;
    {
        const bool branch_taken_0x35d440 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x35D444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D440u;
        // 0x35d444: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35d440) {
            ctx->pc = 0x35D514u;
            goto label_35d514;
        }
    }
    ctx->pc = 0x35D448u;
    // 0x35d448: 0x86030004  lh          $v1, 0x4($s0)
    ctx->pc = 0x35d448u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x35d44c: 0x86020006  lh          $v0, 0x6($s0)
    ctx->pc = 0x35d44cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x35d450: 0x728821  addu        $s1, $v1, $s2
    ctx->pc = 0x35d450u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x35d454: 0x51102a  slt         $v0, $v0, $s1
    ctx->pc = 0x35d454u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x35d458: 0x50400020  beql        $v0, $zero, . + 4 + (0x20 << 2)
    ctx->pc = 0x35D458u;
    {
        const bool branch_taken_0x35d458 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35d458) {
            ctx->pc = 0x35D45Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35D458u;
            // 0x35d45c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35D4DCu;
            goto label_35d4dc;
        }
    }
    ctx->pc = 0x35D460u;
    // 0x35d460: 0x1220002c  beqz        $s1, . + 4 + (0x2C << 2)
    ctx->pc = 0x35D460u;
    {
        const bool branch_taken_0x35d460 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x35D464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D460u;
        // 0x35d464: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35d460) {
            ctx->pc = 0x35D514u;
            goto label_35d514;
        }
    }
    ctx->pc = 0x35D468u;
    // 0x35d468: 0xc0d7394  jal         func_35CE50
    ctx->pc = 0x35D468u;
    SET_GPR_U32(ctx, 31, 0x35D470u);
    ctx->pc = 0x35D46Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D468u;
    // 0x35d46c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CE50u, 0x35D468u, 0x35D470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D470u;
label_35d470:
    // 0x35d470: 0xc0d73fc  jal         func_35CFF0
    ctx->pc = 0x35D470u;
    SET_GPR_U32(ctx, 31, 0x35D478u);
    ctx->pc = 0x35D474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D470u;
    // 0x35d474: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CFF0u, 0x35D470u, 0x35D478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D478u;
label_35d478:
    // 0x35d478: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x35d478u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d47c: 0xc0d73a6  jal         func_35CE98
    ctx->pc = 0x35D47Cu;
    SET_GPR_U32(ctx, 31, 0x35D484u);
    ctx->pc = 0x35D480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D47Cu;
    // 0x35d480: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CE98u, 0x35D47Cu, 0x35D484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D484u;
label_35d484:
    // 0x35d484: 0x97a60004  lhu         $a2, 0x4($sp)
    ctx->pc = 0x35d484u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x35d488: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x35d488u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35d48c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x35d48cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x35d490: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x35d490u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x35d494: 0xc0efa49  jal         func_3BE924
    ctx->pc = 0x35D494u;
    SET_GPR_U32(ctx, 31, 0x35D49Cu);
    ctx->pc = 0x35D498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D494u;
    // 0x35d498: 0x63403  sra         $a2, $a2, 16 (Delay Slot)
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE924u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE924u, 0x35D494u, 0x35D49Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D49Cu;
label_35d49c:
    // 0x35d49c: 0x97a40004  lhu         $a0, 0x4($sp)
    ctx->pc = 0x35d49cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x35d4a0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x35d4a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d4a4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x35d4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x35d4a8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x35d4a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d4ac: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x35d4acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x35d4b0: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x35d4b0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x35d4b4: 0xc0efa49  jal         func_3BE924
    ctx->pc = 0x35D4B4u;
    SET_GPR_U32(ctx, 31, 0x35D4BCu);
    ctx->pc = 0x35D4B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D4B4u;
    // 0x35d4b8: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE924u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE924u, 0x35D4B4u, 0x35D4BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D4BCu;
label_35d4bc:
    // 0x35d4bc: 0x97a30004  lhu         $v1, 0x4($sp)
    ctx->pc = 0x35d4bcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x35d4c0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x35d4c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d4c4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x35d4c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x35d4c8: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x35d4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x35d4cc: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x35D4CCu;
    SET_GPR_U32(ctx, 31, 0x35D4D4u);
    ctx->pc = 0x35D4D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D4CCu;
    // 0x35d4d0: 0xa6030004  sh          $v1, 0x4($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x35D4CCu, 0x35D4D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D4D4u;
label_35d4d4:
    // 0x35d4d4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x35D4D4u;
    {
        const bool branch_taken_0x35d4d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35D4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D4D4u;
        // 0x35d4d8: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35d4d4) {
            ctx->pc = 0x35D518u;
            goto label_35d518;
        }
    }
    ctx->pc = 0x35D4DCu;
label_35d4dc:
    // 0x35d4dc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x35d4dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d4e0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x35d4e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d4e4: 0xc0efa49  jal         func_3BE924
    ctx->pc = 0x35D4E4u;
    SET_GPR_U32(ctx, 31, 0x35D4ECu);
    ctx->pc = 0x35D4E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D4E4u;
    // 0x35d4e8: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE924u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE924u, 0x35D4E4u, 0x35D4ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D4ECu;
label_35d4ec:
    // 0x35d4ec: 0x96030004  lhu         $v1, 0x4($s0)
    ctx->pc = 0x35d4ecu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x35d4f0: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x35d4f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x35d4f4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x35d4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x35d4f8: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x35d4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x35d4fc: 0xa6030004  sh          $v1, 0x4($s0)
    ctx->pc = 0x35d4fcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x35d500: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x35d500u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x35d504: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x35d504u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x35d508: 0x90a4caf0  lbu         $a0, -0x3510($a1)
    ctx->pc = 0x35d508u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294953712)));
    // 0x35d50c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x35d50cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x35d510: 0xa0440000  sb          $a0, 0x0($v0)
    ctx->pc = 0x35d510u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
label_35d514:
    // 0x35d514: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x35d514u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_35d518:
    // 0x35d518: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x35d518u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35d51c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x35d51cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35d520: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x35d520u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x35d524: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x35d524u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x35d528: 0x3e00008  jr          $ra
    ctx->pc = 0x35D528u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35D52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D528u;
        // 0x35d52c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35D528u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35D530u;
}
