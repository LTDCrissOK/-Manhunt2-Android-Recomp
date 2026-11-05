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

// Function: sub_0016C168
// Address: 0x16c168 - 0x16c228
void sub_0016C168_0x16c168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016C168_0x16c168");
#endif

    switch (ctx->pc) {
        case 0x16c198u: goto label_16c198;
        case 0x16c1a0u: goto label_16c1a0;
        case 0x16c1bcu: goto label_16c1bc;
        default: break;
    }

    ctx->pc = 0x16c168u;

    // 0x16c168: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16c168u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16c16c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x16c16cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x16c170: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16c170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16c174: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x16c174u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c178: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x16c178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x16c17c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x16c17cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x16c180: 0xae2001a4  sw          $zero, 0x1A4($s1)
    ctx->pc = 0x16c180u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 420), GPR_U32(ctx, 0));
    // 0x16c184: 0x8e22019c  lw          $v0, 0x19C($s1)
    ctx->pc = 0x16c184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 412)));
    // 0x16c188: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x16C188u;
    {
        const bool branch_taken_0x16c188 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16C18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C188u;
        // 0x16c18c: 0x29040  sll         $s2, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c188) {
            ctx->pc = 0x16C20Cu;
            goto label_16c20c;
        }
    }
    ctx->pc = 0x16C190u;
    // 0x16c190: 0x1a40001f  blez        $s2, . + 4 + (0x1F << 2)
    ctx->pc = 0x16C190u;
    {
        const bool branch_taken_0x16c190 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x16C194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C190u;
        // 0x16c194: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c190) {
            ctx->pc = 0x16C210u;
            goto label_16c210;
        }
    }
    ctx->pc = 0x16C198u;
label_16c198:
    // 0x16c198: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x16C198u;
    SET_GPR_U32(ctx, 31, 0x16C1A0u);
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x16C198u, 0x16C1A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C1A0u;
label_16c1a0:
    // 0x16c1a0: 0x8e23019c  lw          $v1, 0x19C($s1)
    ctx->pc = 0x16c1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 412)));
    // 0x16c1a4: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x16c1a4u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x16c1a8: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x16C1A8u;
    {
        const bool branch_taken_0x16c1a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c1a8) {
            ctx->pc = 0x16C1ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16C1A8u;
            // 0x16c1ac: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x16C1B0u;
            goto label_16c1b0;
        }
    }
    ctx->pc = 0x16C1B0u;
label_16c1b0:
    // 0x16c1b0: 0x8010  mfhi        $s0
    ctx->pc = 0x16c1b0u;
    SET_GPR_U64(ctx, 16, ctx->hi);
    // 0x16c1b4: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x16C1B4u;
    SET_GPR_U32(ctx, 31, 0x16C1BCu);
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x16C1B4u, 0x16C1BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C1BCu;
label_16c1bc:
    // 0x16c1bc: 0x8e23019c  lw          $v1, 0x19C($s1)
    ctx->pc = 0x16c1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 412)));
    // 0x16c1c0: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x16c1c0u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x16c1c4: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x16C1C4u;
    {
        const bool branch_taken_0x16c1c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16c1c4) {
            ctx->pc = 0x16C1C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16C1C4u;
            // 0x16c1c8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x16C1CCu;
            goto label_16c1cc;
        }
    }
    ctx->pc = 0x16C1CCu;
label_16c1cc:
    // 0x16c1cc: 0x1010  mfhi        $v0
    ctx->pc = 0x16c1ccu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x16c1d0: 0x1202000b  beq         $s0, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x16C1D0u;
    {
        const bool branch_taken_0x16c1d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x16C1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C1D0u;
        // 0x16c1d4: 0x22880  sll         $a1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16c1d0) {
            ctx->pc = 0x16C200u;
            goto label_16c200;
        }
    }
    ctx->pc = 0x16C1D8u;
    // 0x16c1d8: 0x8e260198  lw          $a2, 0x198($s1)
    ctx->pc = 0x16c1d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 408)));
    // 0x16c1dc: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x16c1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x16c1e0: 0xa61021  addu        $v0, $a1, $a2
    ctx->pc = 0x16c1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x16c1e4: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x16c1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x16c1e8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x16c1e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16c1ec: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x16c1ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16c1f0: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x16c1f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x16c1f4: 0x8e220198  lw          $v0, 0x198($s1)
    ctx->pc = 0x16c1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 408)));
    // 0x16c1f8: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x16c1f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x16c1fc: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x16c1fcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
label_16c200:
    // 0x16c200: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x16c200u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x16c204: 0x1e40ffe4  bgtz        $s2, . + 4 + (-0x1C << 2)
    ctx->pc = 0x16C204u;
    {
        const bool branch_taken_0x16c204 = (GPR_S32(ctx, 18) > 0);
        if (branch_taken_0x16c204) {
            ctx->pc = 0x16C198u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16c198;
        }
    }
    ctx->pc = 0x16C20Cu;
label_16c20c:
    // 0x16c20c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16c20cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16c210:
    // 0x16c210: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x16c210u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16c214: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x16c214u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16c218: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x16c218u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16c21c: 0x3e00008  jr          $ra
    ctx->pc = 0x16C21Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16C220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C21Cu;
        // 0x16c220: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16C21Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16C224u;
    // 0x16c224: 0x0  nop
    ctx->pc = 0x16c224u;
    // NOP
    ctx->pc = 0x16c228u;
}
