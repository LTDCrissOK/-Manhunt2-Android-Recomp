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

// Function: sub_001FE570
// Address: 0x1fe570 - 0x1fe608
void sub_001FE570_0x1fe570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FE570_0x1fe570");
#endif

    switch (ctx->pc) {
        case 0x1fe570u: goto label_1fe570;
        case 0x1fe574u: goto label_1fe574;
        case 0x1fe578u: goto label_1fe578;
        case 0x1fe57cu: goto label_1fe57c;
        case 0x1fe580u: goto label_1fe580;
        case 0x1fe584u: goto label_1fe584;
        case 0x1fe588u: goto label_1fe588;
        case 0x1fe58cu: goto label_1fe58c;
        case 0x1fe590u: goto label_1fe590;
        case 0x1fe594u: goto label_1fe594;
        case 0x1fe598u: goto label_1fe598;
        case 0x1fe59cu: goto label_1fe59c;
        case 0x1fe5a0u: goto label_1fe5a0;
        case 0x1fe5a4u: goto label_1fe5a4;
        case 0x1fe5a8u: goto label_1fe5a8;
        case 0x1fe5acu: goto label_1fe5ac;
        case 0x1fe5b0u: goto label_1fe5b0;
        case 0x1fe5b4u: goto label_1fe5b4;
        case 0x1fe5b8u: goto label_1fe5b8;
        case 0x1fe5bcu: goto label_1fe5bc;
        case 0x1fe5c0u: goto label_1fe5c0;
        case 0x1fe5c4u: goto label_1fe5c4;
        case 0x1fe5c8u: goto label_1fe5c8;
        case 0x1fe5ccu: goto label_1fe5cc;
        case 0x1fe5d0u: goto label_1fe5d0;
        case 0x1fe5d4u: goto label_1fe5d4;
        case 0x1fe5d8u: goto label_1fe5d8;
        case 0x1fe5dcu: goto label_1fe5dc;
        case 0x1fe5e0u: goto label_1fe5e0;
        case 0x1fe5e4u: goto label_1fe5e4;
        case 0x1fe5e8u: goto label_1fe5e8;
        case 0x1fe5ecu: goto label_1fe5ec;
        case 0x1fe5f0u: goto label_1fe5f0;
        case 0x1fe5f4u: goto label_1fe5f4;
        case 0x1fe5f8u: goto label_1fe5f8;
        case 0x1fe5fcu: goto label_1fe5fc;
        case 0x1fe600u: goto label_1fe600;
        case 0x1fe604u: goto label_1fe604;
        default: break;
    }

    ctx->pc = 0x1fe570u;

label_1fe570:
    // 0x1fe570: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1fe570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1fe574:
    // 0x1fe574: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1fe574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1fe578:
    // 0x1fe578: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1fe578u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1fe57c:
    // 0x1fe57c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fe57cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1fe580:
    // 0x1fe580: 0x1117c2  srl         $v0, $s1, 31
    ctx->pc = 0x1fe580u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 17), 31));
label_1fe584:
    // 0x1fe584: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1fe584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1fe588:
    // 0x1fe588: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1fe588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1fe58c:
    // 0x1fe58c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1fe58cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_1fe590:
    // 0x1fe590: 0x28043  sra         $s0, $v0, 1
    ctx->pc = 0x1fe590u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 1));
label_1fe594:
    // 0x1fe594: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1fe594u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1fe598:
    // 0x1fe598: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x1fe598u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_1fe59c:
    // 0x1fe59c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1fe59cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1fe5a0:
    // 0x1fe5a0: 0x2238023  subu        $s0, $s1, $v1
    ctx->pc = 0x1fe5a0u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_1fe5a4:
    // 0x1fe5a4: 0x109880  sll         $s3, $s0, 2
    ctx->pc = 0x1fe5a4u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_1fe5a8:
    // 0x1fe5a8: 0x2531021  addu        $v0, $s2, $s3
    ctx->pc = 0x1fe5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
label_1fe5ac:
    // 0x1fe5ac: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1fe5acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1fe5b0:
    // 0x1fe5b0: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_1fe5b4:
    if (ctx->pc == 0x1FE5B4u) {
        ctx->pc = 0x1FE5B8u;
        goto label_1fe5b8;
    }
    ctx->pc = 0x1FE5B0u;
    {
        const bool branch_taken_0x1fe5b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fe5b0) {
            ctx->pc = 0x1FE5CCu;
            goto label_1fe5cc;
        }
    }
    ctx->pc = 0x1FE5B8u;
label_1fe5b8:
    // 0x1fe5b8: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1fe5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1fe5bc:
    // 0x1fe5bc: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x1fe5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_1fe5c0:
    // 0x1fe5c0: 0x40f809  jalr        $v0
label_1fe5c4:
    if (ctx->pc == 0x1FE5C4u) {
        ctx->pc = 0x1FE5C8u;
        goto label_1fe5c8;
    }
    ctx->pc = 0x1FE5C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FE5C8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FE5C0u, 0x1FE5C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FE5C8u;
label_1fe5c8:
    // 0x1fe5c8: 0x2531021  addu        $v0, $s2, $s3
    ctx->pc = 0x1fe5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
label_1fe5cc:
    // 0x1fe5cc: 0x16200002  bnez        $s1, . + 4 + (0x2 << 2)
label_1fe5d0:
    if (ctx->pc == 0x1FE5D0u) {
        ctx->pc = 0x1FE5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE5CCu;
        // 0x1fe5d0: 0xac400078  sw          $zero, 0x78($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 120), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE5D4u;
        goto label_1fe5d4;
    }
    ctx->pc = 0x1FE5CCu;
    {
        const bool branch_taken_0x1fe5cc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FE5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE5CCu;
        // 0x1fe5d0: 0xac400078  sw          $zero, 0x78($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 120), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe5cc) {
            ctx->pc = 0x1FE5D8u;
            goto label_1fe5d8;
        }
    }
    ctx->pc = 0x1FE5D4u;
label_1fe5d4:
    // 0x1fe5d4: 0xa240003c  sb          $zero, 0x3C($s2)
    ctx->pc = 0x1fe5d4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 60), (uint8_t)GPR_U32(ctx, 0));
label_1fe5d8:
    // 0x1fe5d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fe5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fe5dc:
    // 0x1fe5dc: 0x16020003  bne         $s0, $v0, . + 4 + (0x3 << 2)
label_1fe5e0:
    if (ctx->pc == 0x1FE5E0u) {
        ctx->pc = 0x1FE5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE5DCu;
        // 0x1fe5e0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE5E4u;
        goto label_1fe5e4;
    }
    ctx->pc = 0x1FE5DCu;
    {
        const bool branch_taken_0x1fe5dc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1FE5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE5DCu;
        // 0x1fe5e0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe5dc) {
            ctx->pc = 0x1FE5ECu;
            goto label_1fe5ec;
        }
    }
    ctx->pc = 0x1FE5E4u;
label_1fe5e4:
    // 0x1fe5e4: 0xa2400049  sb          $zero, 0x49($s2)
    ctx->pc = 0x1fe5e4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 73), (uint8_t)GPR_U32(ctx, 0));
label_1fe5e8:
    // 0x1fe5e8: 0xa2400048  sb          $zero, 0x48($s2)
    ctx->pc = 0x1fe5e8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 72), (uint8_t)GPR_U32(ctx, 0));
label_1fe5ec:
    // 0x1fe5ec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1fe5ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1fe5f0:
    // 0x1fe5f0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1fe5f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1fe5f4:
    // 0x1fe5f4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1fe5f4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1fe5f8:
    // 0x1fe5f8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1fe5f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1fe5fc:
    // 0x1fe5fc: 0x3e00008  jr          $ra
label_1fe600:
    if (ctx->pc == 0x1FE600u) {
        ctx->pc = 0x1FE600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE5FCu;
        // 0x1fe600: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FE604u;
        goto label_1fe604;
    }
    ctx->pc = 0x1FE5FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FE600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE5FCu;
        // 0x1fe600: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FE5FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FE604u;
label_1fe604:
    // 0x1fe604: 0x0  nop
    ctx->pc = 0x1fe604u;
    // NOP
    ctx->pc = 0x1fe608u;
}
