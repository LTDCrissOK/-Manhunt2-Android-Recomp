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

// Function: sub_00125800
// Address: 0x125800 - 0x125880
void sub_00125800_0x125800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00125800_0x125800");
#endif

    switch (ctx->pc) {
        case 0x125838u: goto label_125838;
        case 0x12586cu: goto label_12586c;
        default: break;
    }

    ctx->pc = 0x125800u;

    // 0x125800: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x125800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x125804: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x125804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x125808: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x125808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12580c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x12580cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125810: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x125810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x125814: 0x2602fffa  addiu       $v0, $s0, -0x6
    ctx->pc = 0x125814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967290));
    // 0x125818: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x125818u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x12581c: 0xa31018  mult        $v0, $a1, $v1
    ctx->pc = 0x12581cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x125820: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x125820u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x125824: 0x8c620454  lw          $v0, 0x454($v1)
    ctx->pc = 0x125824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1108)));
    // 0x125828: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x125828u;
    {
        const bool branch_taken_0x125828 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x125828) {
            ctx->pc = 0x12582Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x125828u;
            // 0x12582c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x125870u;
            goto label_125870;
        }
    }
    ctx->pc = 0x125830u;
    // 0x125830: 0xc049abe  jal         func_126AF8
    ctx->pc = 0x125830u;
    SET_GPR_U32(ctx, 31, 0x125838u);
    ctx->pc = 0x126AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126AF8u, 0x125830u, 0x125838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125838u;
label_125838:
    // 0x125838: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x125838u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x12583c: 0x102880  sll         $a1, $s0, 2
    ctx->pc = 0x12583cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x125840: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x125840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x125844: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x125844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x125848: 0x8c630108  lw          $v1, 0x108($v1)
    ctx->pc = 0x125848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
    // 0x12584c: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x12584Cu;
    {
        const bool branch_taken_0x12584c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x125850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12584Cu;
        // 0x125850: 0x451021  addu        $v0, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12584c) {
            ctx->pc = 0x12586Cu;
            goto label_12586c;
        }
    }
    ctx->pc = 0x125854u;
    // 0x125854: 0xac600fe0  sw          $zero, 0xFE0($v1)
    ctx->pc = 0x125854u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4064), GPR_U32(ctx, 0));
    // 0x125858: 0x8c44020c  lw          $a0, 0x20C($v0)
    ctx->pc = 0x125858u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x12585c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12585Cu;
    {
        const bool branch_taken_0x12585c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x125860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12585Cu;
        // 0x125860: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12585c) {
            ctx->pc = 0x125870u;
            goto label_125870;
        }
    }
    ctx->pc = 0x125864u;
    // 0x125864: 0xc043df4  jal         func_10F7D0
    ctx->pc = 0x125864u;
    SET_GPR_U32(ctx, 31, 0x12586Cu);
    ctx->pc = 0x125868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125864u;
    // 0x125868: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F7D0u, 0x125864u, 0x12586Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12586Cu;
label_12586c:
    // 0x12586c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12586cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_125870:
    // 0x125870: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x125870u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x125874: 0x3e00008  jr          $ra
    ctx->pc = 0x125874u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x125878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125874u;
        // 0x125878: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x125874u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12587Cu;
    // 0x12587c: 0x0  nop
    ctx->pc = 0x12587cu;
    // NOP
    ctx->pc = 0x125880u;
}
