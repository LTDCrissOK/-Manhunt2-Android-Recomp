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

// Function: sub_0010D3F8
// Address: 0x10d3f8 - 0x10d4c8
void sub_0010D3F8_0x10d3f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010D3F8_0x10d3f8");
#endif

    switch (ctx->pc) {
        case 0x10d438u: goto label_10d438;
        case 0x10d448u: goto label_10d448;
        case 0x10d468u: goto label_10d468;
        case 0x10d480u: goto label_10d480;
        default: break;
    }

    ctx->pc = 0x10d3f8u;

    // 0x10d3f8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x10d3f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x10d3fc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x10d3fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x10d400: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x10d400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x10d404: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x10d404u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d408: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x10d408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x10d40c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x10d40cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d410: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10d410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10d414: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x10d414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x10d418: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x10d418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x10d41c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x10d41cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x10d420: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x10d420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x10d424: 0x924200cc  lbu         $v0, 0xCC($s2)
    ctx->pc = 0x10d424u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 204)));
    // 0x10d428: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x10D428u;
    {
        const bool branch_taken_0x10d428 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10D42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D428u;
        // 0x10d42c: 0xc0b02d  daddu       $s6, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d428) {
            ctx->pc = 0x10D450u;
            goto label_10d450;
        }
    }
    ctx->pc = 0x10D430u;
    // 0x10d430: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x10D430u;
    {
        const bool branch_taken_0x10d430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D430u;
        // 0x10d434: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d430) {
            ctx->pc = 0x10D4A0u;
            goto label_10d4a0;
        }
    }
    ctx->pc = 0x10D438u;
label_10d438:
    // 0x10d438: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10d438u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d43c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10d43cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d440: 0xc0440f8  jal         func_1103E0
    ctx->pc = 0x10D440u;
    SET_GPR_U32(ctx, 31, 0x10D448u);
    ctx->pc = 0x10D444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D440u;
    // 0x10d444: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1103E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1103E0u, 0x10D440u, 0x10D448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D448u;
label_10d448:
    // 0x10d448: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x10D448u;
    {
        const bool branch_taken_0x10d448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D448u;
        // 0x10d44c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d448) {
            ctx->pc = 0x10D4A0u;
            goto label_10d4a0;
        }
    }
    ctx->pc = 0x10D450u;
label_10d450:
    // 0x10d450: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x10D450u;
    {
        const bool branch_taken_0x10d450 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D450u;
        // 0x10d454: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d450) {
            ctx->pc = 0x10D49Cu;
            goto label_10d49c;
        }
    }
    ctx->pc = 0x10D458u;
    // 0x10d458: 0x2653000c  addiu       $s3, $s2, 0xC
    ctx->pc = 0x10d458u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
    // 0x10d45c: 0x24150021  addiu       $s5, $zero, 0x21
    ctx->pc = 0x10d45cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x10d460: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x10d460u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x10d464: 0x0  nop
    ctx->pc = 0x10d464u;
    // NOP
label_10d468:
    // 0x10d468: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x10d468u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d46c: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x10d46cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x10d470: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x10d470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10d474: 0x8c70001c  lw          $s0, 0x1C($v1)
    ctx->pc = 0x10d474u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x10d478: 0xc044158  jal         func_110560
    ctx->pc = 0x10D478u;
    SET_GPR_U32(ctx, 31, 0x10D480u);
    ctx->pc = 0x10D47Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D478u;
    // 0x10d47c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110560u, 0x10D478u, 0x10D480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D480u;
label_10d480:
    // 0x10d480: 0x1455ffed  bne         $v0, $s5, . + 4 + (-0x13 << 2)
    ctx->pc = 0x10D480u;
    {
        const bool branch_taken_0x10d480 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        ctx->pc = 0x10D484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D480u;
        // 0x10d484: 0x26230001  addiu       $v1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d480) {
            ctx->pc = 0x10D438u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10d438;
        }
    }
    ctx->pc = 0x10D488u;
    // 0x10d488: 0x924200cc  lbu         $v0, 0xCC($s2)
    ctx->pc = 0x10d488u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 204)));
    // 0x10d48c: 0x307100ff  andi        $s1, $v1, 0xFF
    ctx->pc = 0x10d48cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x10d490: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x10d490u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x10d494: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x10D494u;
    {
        const bool branch_taken_0x10d494 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10D498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D494u;
        // 0x10d498: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d494) {
            ctx->pc = 0x10D468u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10d468;
        }
    }
    ctx->pc = 0x10D49Cu;
label_10d49c:
    // 0x10d49c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x10d49cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10d4a0:
    // 0x10d4a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10d4a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10d4a4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10d4a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10d4a8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x10d4a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10d4ac: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x10d4acu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x10d4b0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x10d4b0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10d4b4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x10d4b4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x10d4b8: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x10d4b8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10d4bc: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x10d4bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x10d4c0: 0x3e00008  jr          $ra
    ctx->pc = 0x10D4C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10D4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D4C0u;
        // 0x10d4c4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10D4C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10D4C8u;
}
