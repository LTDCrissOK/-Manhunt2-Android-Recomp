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

// Function: sub_002E7830
// Address: 0x2e7830 - 0x2e7900
void sub_002E7830_0x2e7830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E7830_0x2e7830");
#endif

    switch (ctx->pc) {
        case 0x2e7858u: goto label_2e7858;
        case 0x2e7868u: goto label_2e7868;
        case 0x2e78c0u: goto label_2e78c0;
        case 0x2e78e8u: goto label_2e78e8;
        default: break;
    }

    ctx->pc = 0x2e7830u;

    // 0x2e7830: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e7830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e7834: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2e7834u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x2e7838: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e7838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e783c: 0x9062b820  lbu         $v0, -0x47E0($v1)
    ctx->pc = 0x2e783cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x3FB820u));
    // 0x2e7840: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e7840u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7844: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2e7844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2e7848: 0x14400027  bnez        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x2E7848u;
    {
        const bool branch_taken_0x2e7848 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E784Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7848u;
        // 0x2e784c: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7848) {
            ctx->pc = 0x2E78E8u;
            goto label_2e78e8;
        }
    }
    ctx->pc = 0x2E7850u;
    // 0x2e7850: 0xc089490  jal         func_225240
    ctx->pc = 0x2E7850u;
    SET_GPR_U32(ctx, 31, 0x2E7858u);
    ctx->pc = 0x2E7854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7850u;
    // 0x2e7854: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225240u, 0x2E7850u, 0x2E7858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7858u;
label_2e7858:
    // 0x2e7858: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E7858u;
    {
        const bool branch_taken_0x2e7858 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E785Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7858u;
        // 0x2e785c: 0x3c040049  lui         $a0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7858) {
            ctx->pc = 0x2E786Cu;
            goto label_2e786c;
        }
    }
    ctx->pc = 0x2E7860u;
    // 0x2e7860: 0xc0494ea  jal         func_1253A8
    ctx->pc = 0x2E7860u;
    SET_GPR_U32(ctx, 31, 0x2E7868u);
    ctx->pc = 0x2E7864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7860u;
    // 0x2e7864: 0x2484a080  addiu       $a0, $a0, -0x5F80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1253A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1253A8u, 0x2E7860u, 0x2E7868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7868u;
label_2e7868:
    // 0x2e7868: 0x2c510001  sltiu       $s1, $v0, 0x1
    ctx->pc = 0x2e7868u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2e786c:
    // 0x2e786c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2e786cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2e7870: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e7870u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7874: 0x8c43be30  lw          $v1, -0x41D0($v0)
    ctx->pc = 0x2e7874u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FBE30u));
    // 0x2e7878: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e7878u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e787c: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2E787Cu;
    {
        const bool branch_taken_0x2e787c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E787Cu;
        // 0x2e7880: 0x3182b  sltu        $v1, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e787c) {
            ctx->pc = 0x2E7888u;
            goto label_2e7888;
        }
    }
    ctx->pc = 0x2E7884u;
    // 0x2e7884: 0x38650001  xori        $a1, $v1, 0x1
    ctx->pc = 0x2e7884u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_2e7888:
    // 0x2e7888: 0x92021448  lbu         $v0, 0x1448($s0)
    ctx->pc = 0x2e7888u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5192)));
    // 0x2e788c: 0x10450016  beq         $v0, $a1, . + 4 + (0x16 << 2)
    ctx->pc = 0x2E788Cu;
    {
        const bool branch_taken_0x2e788c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x2E7890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E788Cu;
        // 0x2e7890: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e788c) {
            ctx->pc = 0x2E78E8u;
            goto label_2e78e8;
        }
    }
    ctx->pc = 0x2E7894u;
    // 0x2e7894: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2E7894u;
    {
        const bool branch_taken_0x2e7894 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7894u;
        // 0x2e7898: 0xa2051448  sb          $a1, 0x1448($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 5192), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7894) {
            ctx->pc = 0x2E78C8u;
            goto label_2e78c8;
        }
    }
    ctx->pc = 0x2E789Cu;
    // 0x2e789c: 0x3c02005b  lui         $v0, 0x5B
    ctx->pc = 0x2e789cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)91 << 16));
    // 0x2e78a0: 0x244221e8  addiu       $v0, $v0, 0x21E8
    ctx->pc = 0x2e78a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8680));
    // 0x2e78a4: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2E78A4u;
    {
        const bool branch_taken_0x2e78a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E78A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E78A4u;
        // 0x2e78a8: 0xc44c0078  lwc1        $f12, 0x78($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e78a4) {
            ctx->pc = 0x2E78B0u;
            goto label_2e78b0;
        }
    }
    ctx->pc = 0x2E78ACu;
    // 0x2e78ac: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2e78acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2e78b0:
    // 0x2e78b0: 0x8c460074  lw          $a2, 0x74($v0)
    ctx->pc = 0x2e78b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
    // 0x2e78b4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2e78b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e78b8: 0xc0d9cc2  jal         func_367308
    ctx->pc = 0x2E78B8u;
    SET_GPR_U32(ctx, 31, 0x2E78C0u);
    ctx->pc = 0x2E78BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E78B8u;
    // 0x2e78bc: 0x8c45006c  lw          $a1, 0x6C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x367308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x367308u, 0x2E78B8u, 0x2E78C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E78C0u;
label_2e78c0:
    // 0x2e78c0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2E78C0u;
    {
        const bool branch_taken_0x2e78c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E78C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E78C0u;
        // 0x2e78c4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e78c0) {
            ctx->pc = 0x2E78ECu;
            goto label_2e78ec;
        }
    }
    ctx->pc = 0x2E78C8u;
label_2e78c8:
    // 0x2e78c8: 0x3c02005b  lui         $v0, 0x5B
    ctx->pc = 0x2e78c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)91 << 16));
    // 0x2e78cc: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2E78CCu;
    {
        const bool branch_taken_0x2e78cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E78D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E78CCu;
        // 0x2e78d0: 0xc44c2264  lwc1        $f12, 0x2264($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8804)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e78cc) {
            ctx->pc = 0x2E78D8u;
            goto label_2e78d8;
        }
    }
    ctx->pc = 0x2E78D4u;
    // 0x2e78d4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2e78d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2e78d8:
    // 0x2e78d8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2e78d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e78dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2e78dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e78e0: 0xc0d9cc2  jal         func_367308
    ctx->pc = 0x2E78E0u;
    SET_GPR_U32(ctx, 31, 0x2E78E8u);
    ctx->pc = 0x2E78E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E78E0u;
    // 0x2e78e4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x367308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x367308u, 0x2E78E0u, 0x2E78E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E78E8u;
label_2e78e8:
    // 0x2e78e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e78e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2e78ec:
    // 0x2e78ec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2e78ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e78f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2e78f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e78f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2E78F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E78F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E78F4u;
        // 0x2e78f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E78F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E78FCu;
    // 0x2e78fc: 0x0  nop
    ctx->pc = 0x2e78fcu;
    // NOP
    ctx->pc = 0x2e7900u;
}
