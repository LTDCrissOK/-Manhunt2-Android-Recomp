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

// Function: sub_003DD528
// Address: 0x3dd528 - 0x3dd5b8
void sub_003DD528_0x3dd528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DD528_0x3dd528");
#endif

    switch (ctx->pc) {
        case 0x3dd538u: goto label_3dd538;
        case 0x3dd540u: goto label_3dd540;
        default: break;
    }

    ctx->pc = 0x3dd528u;

    // 0x3dd528: 0x54a00005  bnel        $a1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3DD528u;
    {
        const bool branch_taken_0x3dd528 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x3dd528) {
            ctx->pc = 0x3DD52Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DD528u;
            // 0x3dd52c: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DD540u;
            goto label_3dd540;
        }
    }
    ctx->pc = 0x3DD530u;
    // 0x3dd530: 0x3e00008  jr          $ra
    ctx->pc = 0x3DD530u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DD534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD530u;
        // 0x3dd534: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DD530u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DD538u;
label_3dd538:
    // 0x3dd538: 0x3e00008  jr          $ra
    ctx->pc = 0x3DD538u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DD53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD538u;
        // 0x3dd53c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DD538u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DD540u;
label_3dd540:
    // 0x3dd540: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3DD540u;
    {
        const bool branch_taken_0x3dd540 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3dd540) {
            ctx->pc = 0x3DD560u;
            goto label_3dd560;
        }
    }
    ctx->pc = 0x3DD548u;
    // 0x3dd548: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3dd548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3dd54c: 0x1045fffa  beq         $v0, $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3DD54Cu;
    {
        const bool branch_taken_0x3dd54c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x3dd54c) {
            ctx->pc = 0x3DD538u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3dd538;
        }
    }
    ctx->pc = 0x3DD554u;
    // 0x3dd554: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x3dd554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3dd558: 0x5462fff9  bnel        $v1, $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3DD558u;
    {
        const bool branch_taken_0x3dd558 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3dd558) {
            ctx->pc = 0x3DD55Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3DD558u;
            // 0x3dd55c: 0x8c630008  lw          $v1, 0x8($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3DD540u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3dd540;
        }
    }
    ctx->pc = 0x3DD560u;
label_3dd560:
    // 0x3dd560: 0x3e00008  jr          $ra
    ctx->pc = 0x3DD560u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DD564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD560u;
        // 0x3dd564: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DD560u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DD568u;
    // 0x3dd568: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3dd568u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3dd56c: 0x0  nop
    ctx->pc = 0x3dd56cu;
    // NOP
    // 0x3dd570: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3dd570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3dd574: 0x0  nop
    ctx->pc = 0x3dd574u;
    // NOP
    // 0x3dd578: 0xe48c0010  swc1        $f12, 0x10($a0)
    ctx->pc = 0x3dd578u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x3dd57c: 0x0  nop
    ctx->pc = 0x3dd57cu;
    // NOP
    // 0x3dd580: 0x0  nop
    ctx->pc = 0x3dd580u;
    // NOP
    // 0x3dd584: 0x0  nop
    ctx->pc = 0x3dd584u;
    // NOP
    // 0x3dd588: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x3dd588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3dd58c: 0x0  nop
    ctx->pc = 0x3dd58cu;
    // NOP
    // 0x3dd590: 0x0  nop
    ctx->pc = 0x3dd590u;
    // NOP
    // 0x3dd594: 0x0  nop
    ctx->pc = 0x3dd594u;
    // NOP
    // 0x3dd598: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x3dd598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x3dd59c: 0x0  nop
    ctx->pc = 0x3dd59cu;
    // NOP
    // 0x3dd5a0: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x3dd5a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x3dd5a4: 0x0  nop
    ctx->pc = 0x3dd5a4u;
    // NOP
    // 0x3dd5a8: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x3dd5a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x3dd5ac: 0x0  nop
    ctx->pc = 0x3dd5acu;
    // NOP
    // 0x3dd5b0: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x3dd5b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x3dd5b4: 0x0  nop
    ctx->pc = 0x3dd5b4u;
    // NOP
    ctx->pc = 0x3dd5b8u;
}
